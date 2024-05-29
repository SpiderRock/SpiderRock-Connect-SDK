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

    #ifndef _security_id__string__GUARD__
    #define _security_id__string__GUARD__
    DECL_STRONG_TYPE(security_id__string, string);
    #endif//_security_id__string__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _srspread_id__GUARD__
    #define _srspread_id__GUARD__
    DECL_STRONG_TYPE(srspread_id, int64);
    #endif//_srspread_id__GUARD__

    #ifndef _product_class__GUARD__
    #define _product_class__GUARD__
    DECL_STRONG_TYPE(product_class, spiderrock::protobuf::api::ProductClass);
    #endif//_product_class__GUARD__

    #ifndef _underlier_id__GUARD__
    #define _underlier_id__GUARD__
    DECL_STRONG_TYPE(underlier_id, int64);
    #endif//_underlier_id__GUARD__

    #ifndef _und_key__GUARD__
    #define _und_key__GUARD__
    DECL_STRONG_TYPE(und_key, ExpiryKey);
    #endif//_und_key__GUARD__

    #ifndef _und_type__GUARD__
    #define _und_type__GUARD__
    DECL_STRONG_TYPE(und_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_und_type__GUARD__

    #ifndef _product_group__GUARD__
    #define _product_group__GUARD__
    DECL_STRONG_TYPE(product_group, string);
    #endif//_product_group__GUARD__

    #ifndef _security_group__GUARD__
    #define _security_group__GUARD__
    DECL_STRONG_TYPE(security_group, string);
    #endif//_security_group__GUARD__

    #ifndef _market_segment_id__GUARD__
    #define _market_segment_id__GUARD__
    DECL_STRONG_TYPE(market_segment_id, int32);
    #endif//_market_segment_id__GUARD__

    #ifndef _ric_code__GUARD__
    #define _ric_code__GUARD__
    DECL_STRONG_TYPE(ric_code, string);
    #endif//_ric_code__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _exchange__string__GUARD__
    #define _exchange__string__GUARD__
    DECL_STRONG_TYPE(exchange__string, string);
    #endif//_exchange__string__GUARD__

    #ifndef _product_type__GUARD__
    #define _product_type__GUARD__
    DECL_STRONG_TYPE(product_type, spiderrock::protobuf::api::ProductType);
    #endif//_product_type__GUARD__

    #ifndef _product_term__GUARD__
    #define _product_term__GUARD__
    DECL_STRONG_TYPE(product_term, spiderrock::protobuf::api::ProductTerm);
    #endif//_product_term__GUARD__

    #ifndef _product_index_type__GUARD__
    #define _product_index_type__GUARD__
    DECL_STRONG_TYPE(product_index_type, spiderrock::protobuf::api::ProductIndexType);
    #endif//_product_index_type__GUARD__

    #ifndef _product_rate__GUARD__
    #define _product_rate__GUARD__
    DECL_STRONG_TYPE(product_rate, float);
    #endif//_product_rate__GUARD__

    #ifndef _contract_size__GUARD__
    #define _contract_size__GUARD__
    DECL_STRONG_TYPE(contract_size, float);
    #endif//_contract_size__GUARD__

    #ifndef _contract_unit__GUARD__
    #define _contract_unit__GUARD__
    DECL_STRONG_TYPE(contract_unit, spiderrock::protobuf::api::ContractUnit);
    #endif//_contract_unit__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _min_tick_size__GUARD__
    #define _min_tick_size__GUARD__
    DECL_STRONG_TYPE(min_tick_size, double);
    #endif//_min_tick_size__GUARD__

    #ifndef _display_factor__GUARD__
    #define _display_factor__GUARD__
    DECL_STRONG_TYPE(display_factor, double);
    #endif//_display_factor__GUARD__

    #ifndef _strike_scale__GUARD__
    #define _strike_scale__GUARD__
    DECL_STRONG_TYPE(strike_scale, double);
    #endif//_strike_scale__GUARD__

    #ifndef _min_lot_size__GUARD__
    #define _min_lot_size__GUARD__
    DECL_STRONG_TYPE(min_lot_size, int32);
    #endif//_min_lot_size__GUARD__

    #ifndef _book_depth__GUARD__
    #define _book_depth__GUARD__
    DECL_STRONG_TYPE(book_depth, int32);
    #endif//_book_depth__GUARD__

    #ifndef _implied_book_depth__GUARD__
    #define _implied_book_depth__GUARD__
    DECL_STRONG_TYPE(implied_book_depth, int32);
    #endif//_implied_book_depth__GUARD__

    #ifndef _imp_market_ind__GUARD__
    #define _imp_market_ind__GUARD__
    DECL_STRONG_TYPE(imp_market_ind, int32);
    #endif//_imp_market_ind__GUARD__

    #ifndef _min_price_increment_amount__GUARD__
    #define _min_price_increment_amount__GUARD__
    DECL_STRONG_TYPE(min_price_increment_amount, float);
    #endif//_min_price_increment_amount__GUARD__

    #ifndef _par_value__GUARD__
    #define _par_value__GUARD__
    DECL_STRONG_TYPE(par_value, float);
    #endif//_par_value__GUARD__

    #ifndef _cont_multiplier__GUARD__
    #define _cont_multiplier__GUARD__
    DECL_STRONG_TYPE(cont_multiplier, float);
    #endif//_cont_multiplier__GUARD__

    #ifndef _cab_price__GUARD__
    #define _cab_price__GUARD__
    DECL_STRONG_TYPE(cab_price, double);
    #endif//_cab_price__GUARD__

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

    #ifndef _expiration__timestamp__GUARD__
    #define _expiration__timestamp__GUARD__
    DECL_STRONG_TYPE(expiration__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expiration__timestamp__GUARD__

    #ifndef _maturity__GUARD__
    #define _maturity__GUARD__
    DECL_STRONG_TYPE(maturity, DateKey);
    #endif//_maturity__GUARD__

    #ifndef _exercise_type__GUARD__
    #define _exercise_type__GUARD__
    DECL_STRONG_TYPE(exercise_type, spiderrock::protobuf::api::ExerciseType);
    #endif//_exercise_type__GUARD__

    #ifndef _user_defined__GUARD__
    #define _user_defined__GUARD__
    DECL_STRONG_TYPE(user_defined, spiderrock::protobuf::api::YesNo);
    #endif//_user_defined__GUARD__

    #ifndef _decay_start_year__GUARD__
    #define _decay_start_year__GUARD__
    DECL_STRONG_TYPE(decay_start_year, int32);
    #endif//_decay_start_year__GUARD__

    #ifndef _decay_start_month__GUARD__
    #define _decay_start_month__GUARD__
    DECL_STRONG_TYPE(decay_start_month, int32);
    #endif//_decay_start_month__GUARD__

    #ifndef _decay_start_day__GUARD__
    #define _decay_start_day__GUARD__
    DECL_STRONG_TYPE(decay_start_day, int32);
    #endif//_decay_start_day__GUARD__

    #ifndef _decay_qty__GUARD__
    #define _decay_qty__GUARD__
    DECL_STRONG_TYPE(decay_qty, int32);
    #endif//_decay_qty__GUARD__

    #ifndef _price_ratio__GUARD__
    #define _price_ratio__GUARD__
    DECL_STRONG_TYPE(price_ratio, double);
    #endif//_price_ratio__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__GUARD__
    #define _sec_type__GUARD__
    DECL_STRONG_TYPE(sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__GUARD__

    #ifndef _leg_id__GUARD__
    #define _leg_id__GUARD__
    DECL_STRONG_TYPE(leg_id, string);
    #endif//_leg_id__GUARD__

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__GUARD__
    #define _sec_type__GUARD__
    DECL_STRONG_TYPE(sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _ratio__uint32__GUARD__
    #define _ratio__uint32__GUARD__
    DECL_STRONG_TYPE(ratio__uint32, uint32);
    #endif//_ratio__uint32__GUARD__

    #ifndef _ref_delta__GUARD__
    #define _ref_delta__GUARD__
    DECL_STRONG_TYPE(ref_delta, float);
    #endif//_ref_delta__GUARD__

    #ifndef _ref_prc__GUARD__
    #define _ref_prc__GUARD__
    DECL_STRONG_TYPE(ref_prc, double);
    #endif//_ref_prc__GUARD__

    
    class ProductDefinitionV2_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }


        ProductDefinitionV2_PKey() {}

        virtual ~ProductDefinitionV2_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_sec_key.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_sec_key.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
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
                }
            }
        }

    };
    
    class ProductDefinitionV2_Legs {
        public:
        //using statements for all types used in this class
        using leg_id = spiderrock::protobuf::api::leg_id;
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type;
        using side = spiderrock::protobuf::api::side;
        using ratio = spiderrock::protobuf::api::ratio__uint32;
        using ref_delta = spiderrock::protobuf::api::ref_delta;
        using ref_prc = spiderrock::protobuf::api::ref_prc;

        private:
        leg_id m_leg_id{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        ratio m_ratio{};
        ref_delta m_ref_delta{};
        ref_prc m_ref_prc{};

        public:
        leg_id get_leg_id() const {
            return m_leg_id;
        }
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        side get_side() const {
            return m_side;
        }
        ratio get_ratio() const {
            return m_ratio;
        }
        ref_delta get_ref_delta() const {
            return m_ref_delta;
        }
        ref_prc get_ref_prc() const {
            return m_ref_prc;
        }
        void set_leg_id(const leg_id& value)  {
            m_leg_id = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_ratio(const ratio& value)  {
            m_ratio = value;
        }
        void set_ref_delta(const ref_delta& value)  {
            m_ref_delta = value;
        }
        void set_ref_prc(const ref_prc& value)  {
            m_ref_prc = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2_Legs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2_Legs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_id & value) { set_leg_id(value); }
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const side & value) { set_side(value); }
        void set(const ratio & value) { set_ratio(value); }
        void set(const ref_delta & value) { set_ref_delta(value); }
        void set(const ref_prc & value) { set_ref_prc(value); }


        ProductDefinitionV2_Legs() {}

        virtual ~ProductDefinitionV2_Legs() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_leg_id);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_sec_key.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(229,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(238,m_ratio);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_ref_delta);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(244,m_ref_prc);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_leg_id));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 229, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,238,m_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_ref_delta);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,244,m_ref_prc);
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
                    case 226: {m_leg_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 229: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 232: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 235: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 238: {m_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 241: {m_ref_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 244: {m_ref_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ProductDefinitionV2 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ProductDefinitionV2_PKey;
        using security_id = spiderrock::protobuf::api::security_id__string;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using srspread_id = spiderrock::protobuf::api::srspread_id;
        using product_class = spiderrock::protobuf::api::product_class;
        using underlier_id = spiderrock::protobuf::api::underlier_id;
        using und_key = spiderrock::protobuf::api::und_key;
        using und_type = spiderrock::protobuf::api::und_type;
        using product_group = spiderrock::protobuf::api::product_group;
        using security_group = spiderrock::protobuf::api::security_group;
        using market_segment_id = spiderrock::protobuf::api::market_segment_id;
        using ric_code = spiderrock::protobuf::api::ric_code;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using exchange = spiderrock::protobuf::api::exchange__string;
        using product_type = spiderrock::protobuf::api::product_type;
        using product_term = spiderrock::protobuf::api::product_term;
        using product_index_type = spiderrock::protobuf::api::product_index_type;
        using product_rate = spiderrock::protobuf::api::product_rate;
        using contract_size = spiderrock::protobuf::api::contract_size;
        using contract_unit = spiderrock::protobuf::api::contract_unit;
        using price_format = spiderrock::protobuf::api::price_format;
        using min_tick_size = spiderrock::protobuf::api::min_tick_size;
        using display_factor = spiderrock::protobuf::api::display_factor;
        using strike_scale = spiderrock::protobuf::api::strike_scale;
        using min_lot_size = spiderrock::protobuf::api::min_lot_size;
        using book_depth = spiderrock::protobuf::api::book_depth;
        using implied_book_depth = spiderrock::protobuf::api::implied_book_depth;
        using imp_market_ind = spiderrock::protobuf::api::imp_market_ind;
        using min_price_increment_amount = spiderrock::protobuf::api::min_price_increment_amount;
        using par_value = spiderrock::protobuf::api::par_value;
        using cont_multiplier = spiderrock::protobuf::api::cont_multiplier;
        using cab_price = spiderrock::protobuf::api::cab_price;
        using trade_curr = spiderrock::protobuf::api::trade_curr;
        using settle_curr = spiderrock::protobuf::api::settle_curr;
        using strike_curr = spiderrock::protobuf::api::strike_curr;
        using expiration = spiderrock::protobuf::api::expiration__timestamp;
        using maturity = spiderrock::protobuf::api::maturity;
        using exercise_type = spiderrock::protobuf::api::exercise_type;
        using user_defined = spiderrock::protobuf::api::user_defined;
        using decay_start_year = spiderrock::protobuf::api::decay_start_year;
        using decay_start_month = spiderrock::protobuf::api::decay_start_month;
        using decay_start_day = spiderrock::protobuf::api::decay_start_day;
        using decay_qty = spiderrock::protobuf::api::decay_qty;
        using price_ratio = spiderrock::protobuf::api::price_ratio;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using legs = spiderrock::protobuf::api::ProductDefinitionV2_Legs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        security_id m_security_id{};
        ticker m_ticker{};
        srspread_id m_srspread_id{};
        product_class m_product_class{};
        underlier_id m_underlier_id{};
        und_key m_und_key{};
        und_type m_und_type{};
        product_group m_product_group{};
        security_group m_security_group{};
        market_segment_id m_market_segment_id{};
        ric_code m_ric_code{};
        security_desc m_security_desc{};
        exchange m_exchange{};
        product_type m_product_type{};
        product_term m_product_term{};
        product_index_type m_product_index_type{};
        product_rate m_product_rate{};
        contract_size m_contract_size{};
        contract_unit m_contract_unit{};
        price_format m_price_format{};
        min_tick_size m_min_tick_size{};
        display_factor m_display_factor{};
        strike_scale m_strike_scale{};
        min_lot_size m_min_lot_size{};
        book_depth m_book_depth{};
        implied_book_depth m_implied_book_depth{};
        imp_market_ind m_imp_market_ind{};
        min_price_increment_amount m_min_price_increment_amount{};
        par_value m_par_value{};
        cont_multiplier m_cont_multiplier{};
        cab_price m_cab_price{};
        trade_curr m_trade_curr{};
        settle_curr m_settle_curr{};
        strike_curr m_strike_curr{};
        expiration m_expiration{};
        maturity m_maturity{};
        exercise_type m_exercise_type{};
        user_defined m_user_defined{};
        decay_start_year m_decay_start_year{};
        decay_start_month m_decay_start_month{};
        decay_start_day m_decay_start_day{};
        decay_qty m_decay_qty{};
        price_ratio m_price_ratio{};
        timestamp m_timestamp{};
        std::vector<legs> m_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        security_id get_security_id() const {
            return m_security_id;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        srspread_id get_srspread_id() const {
            return m_srspread_id;
        }		
        product_class get_product_class() const {
            return m_product_class;
        }		
        underlier_id get_underlier_id() const {
            return m_underlier_id;
        }		
        und_key get_und_key() const {
            return m_und_key;
        }		
        und_type get_und_type() const {
            return m_und_type;
        }		
        product_group get_product_group() const {
            return m_product_group;
        }		
        security_group get_security_group() const {
            return m_security_group;
        }		
        market_segment_id get_market_segment_id() const {
            return m_market_segment_id;
        }		
        ric_code get_ric_code() const {
            return m_ric_code;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        exchange get_exchange() const {
            return m_exchange;
        }		
        product_type get_product_type() const {
            return m_product_type;
        }		
        product_term get_product_term() const {
            return m_product_term;
        }		
        product_index_type get_product_index_type() const {
            return m_product_index_type;
        }		
        product_rate get_product_rate() const {
            return m_product_rate;
        }		
        contract_size get_contract_size() const {
            return m_contract_size;
        }		
        contract_unit get_contract_unit() const {
            return m_contract_unit;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        min_tick_size get_min_tick_size() const {
            return m_min_tick_size;
        }		
        display_factor get_display_factor() const {
            return m_display_factor;
        }		
        strike_scale get_strike_scale() const {
            return m_strike_scale;
        }		
        min_lot_size get_min_lot_size() const {
            return m_min_lot_size;
        }		
        book_depth get_book_depth() const {
            return m_book_depth;
        }		
        implied_book_depth get_implied_book_depth() const {
            return m_implied_book_depth;
        }		
        imp_market_ind get_imp_market_ind() const {
            return m_imp_market_ind;
        }		
        min_price_increment_amount get_min_price_increment_amount() const {
            return m_min_price_increment_amount;
        }		
        par_value get_par_value() const {
            return m_par_value;
        }		
        cont_multiplier get_cont_multiplier() const {
            return m_cont_multiplier;
        }		
        cab_price get_cab_price() const {
            return m_cab_price;
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
        expiration get_expiration() const {
            return m_expiration;
        }		
        maturity get_maturity() const {
            return m_maturity;
        }		
        exercise_type get_exercise_type() const {
            return m_exercise_type;
        }		
        user_defined get_user_defined() const {
            return m_user_defined;
        }		
        decay_start_year get_decay_start_year() const {
            return m_decay_start_year;
        }		
        decay_start_month get_decay_start_month() const {
            return m_decay_start_month;
        }		
        decay_start_day get_decay_start_day() const {
            return m_decay_start_day;
        }		
        decay_qty get_decay_qty() const {
            return m_decay_qty;
        }		
        price_ratio get_price_ratio() const {
            return m_price_ratio;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<legs>& get_legs_list() const {
            return m_legs;
        }
        const legs& get_legs(const int i) const {
            return m_legs.at(i);
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
        void set_security_id(const security_id& value)  {
            m_security_id = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_srspread_id(const srspread_id& value)  {
            m_srspread_id = value;
        }
        void set_product_class(const product_class& value)  {
            m_product_class = value;
        }
        void set_underlier_id(const underlier_id& value)  {
            m_underlier_id = value;
        }
        void set_und_key(const und_key& value)  {
            m_und_key = value;
        }
        void set_und_type(const und_type& value)  {
            m_und_type = value;
        }
        void set_product_group(const product_group& value)  {
            m_product_group = value;
        }
        void set_security_group(const security_group& value)  {
            m_security_group = value;
        }
        void set_market_segment_id(const market_segment_id& value)  {
            m_market_segment_id = value;
        }
        void set_ric_code(const ric_code& value)  {
            m_ric_code = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        void set_product_type(const product_type& value)  {
            m_product_type = value;
        }
        void set_product_term(const product_term& value)  {
            m_product_term = value;
        }
        void set_product_index_type(const product_index_type& value)  {
            m_product_index_type = value;
        }
        void set_product_rate(const product_rate& value)  {
            m_product_rate = value;
        }
        void set_contract_size(const contract_size& value)  {
            m_contract_size = value;
        }
        void set_contract_unit(const contract_unit& value)  {
            m_contract_unit = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_min_tick_size(const min_tick_size& value)  {
            m_min_tick_size = value;
        }
        void set_display_factor(const display_factor& value)  {
            m_display_factor = value;
        }
        void set_strike_scale(const strike_scale& value)  {
            m_strike_scale = value;
        }
        void set_min_lot_size(const min_lot_size& value)  {
            m_min_lot_size = value;
        }
        void set_book_depth(const book_depth& value)  {
            m_book_depth = value;
        }
        void set_implied_book_depth(const implied_book_depth& value)  {
            m_implied_book_depth = value;
        }
        void set_imp_market_ind(const imp_market_ind& value)  {
            m_imp_market_ind = value;
        }
        void set_min_price_increment_amount(const min_price_increment_amount& value)  {
            m_min_price_increment_amount = value;
        }
        void set_par_value(const par_value& value)  {
            m_par_value = value;
        }
        void set_cont_multiplier(const cont_multiplier& value)  {
            m_cont_multiplier = value;
        }
        void set_cab_price(const cab_price& value)  {
            m_cab_price = value;
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
        void set_expiration(const expiration& value)  {
            m_expiration = value;
        }
        void set_maturity(const maturity& value)  {
            m_maturity = value;
        }
        void set_exercise_type(const exercise_type& value)  {
            m_exercise_type = value;
        }
        void set_user_defined(const user_defined& value)  {
            m_user_defined = value;
        }
        void set_decay_start_year(const decay_start_year& value)  {
            m_decay_start_year = value;
        }
        void set_decay_start_month(const decay_start_month& value)  {
            m_decay_start_month = value;
        }
        void set_decay_start_day(const decay_start_day& value)  {
            m_decay_start_day = value;
        }
        void set_decay_qty(const decay_qty& value)  {
            m_decay_qty = value;
        }
        void set_price_ratio(const price_ratio& value)  {
            m_price_ratio = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_legs_list(const std::vector<legs>& list)  {
            m_legs = list;
        }
        void add_legs(const legs& item) {
            m_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ProductDefinitionV2::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const security_id & value) {
            set_security_id(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const srspread_id & value) {
            set_srspread_id(value);
        }
        void set(const product_class & value) {
            set_product_class(value);
        }
        void set(const underlier_id & value) {
            set_underlier_id(value);
        }
        void set(const und_key & value) {
            set_und_key(value);
        }
        void set(const und_type & value) {
            set_und_type(value);
        }
        void set(const product_group & value) {
            set_product_group(value);
        }
        void set(const security_group & value) {
            set_security_group(value);
        }
        void set(const market_segment_id & value) {
            set_market_segment_id(value);
        }
        void set(const ric_code & value) {
            set_ric_code(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const exchange & value) {
            set_exchange(value);
        }
        void set(const product_type & value) {
            set_product_type(value);
        }
        void set(const product_term & value) {
            set_product_term(value);
        }
        void set(const product_index_type & value) {
            set_product_index_type(value);
        }
        void set(const product_rate & value) {
            set_product_rate(value);
        }
        void set(const contract_size & value) {
            set_contract_size(value);
        }
        void set(const contract_unit & value) {
            set_contract_unit(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const min_tick_size & value) {
            set_min_tick_size(value);
        }
        void set(const display_factor & value) {
            set_display_factor(value);
        }
        void set(const strike_scale & value) {
            set_strike_scale(value);
        }
        void set(const min_lot_size & value) {
            set_min_lot_size(value);
        }
        void set(const book_depth & value) {
            set_book_depth(value);
        }
        void set(const implied_book_depth & value) {
            set_implied_book_depth(value);
        }
        void set(const imp_market_ind & value) {
            set_imp_market_ind(value);
        }
        void set(const min_price_increment_amount & value) {
            set_min_price_increment_amount(value);
        }
        void set(const par_value & value) {
            set_par_value(value);
        }
        void set(const cont_multiplier & value) {
            set_cont_multiplier(value);
        }
        void set(const cab_price & value) {
            set_cab_price(value);
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
        void set(const expiration & value) {
            set_expiration(value);
        }
        void set(const maturity & value) {
            set_maturity(value);
        }
        void set(const exercise_type & value) {
            set_exercise_type(value);
        }
        void set(const user_defined & value) {
            set_user_defined(value);
        }
        void set(const decay_start_year & value) {
            set_decay_start_year(value);
        }
        void set(const decay_start_month & value) {
            set_decay_start_month(value);
        }
        void set(const decay_start_day & value) {
            set_decay_start_day(value);
        }
        void set(const decay_qty & value) {
            set_decay_qty(value);
        }
        void set(const price_ratio & value) {
            set_price_ratio(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const legs & value) {
            add_legs(value);
        }

        void set(const ProductDefinitionV2 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_security_id);
            set(value.m_ticker);
            set(value.m_srspread_id);
            set(value.m_product_class);
            set(value.m_underlier_id);
            set(value.m_und_key);
            set(value.m_und_type);
            set(value.m_product_group);
            set(value.m_security_group);
            set(value.m_market_segment_id);
            set(value.m_ric_code);
            set(value.m_security_desc);
            set(value.m_exchange);
            set(value.m_product_type);
            set(value.m_product_term);
            set(value.m_product_index_type);
            set(value.m_product_rate);
            set(value.m_contract_size);
            set(value.m_contract_unit);
            set(value.m_price_format);
            set(value.m_min_tick_size);
            set(value.m_display_factor);
            set(value.m_strike_scale);
            set(value.m_min_lot_size);
            set(value.m_book_depth);
            set(value.m_implied_book_depth);
            set(value.m_imp_market_ind);
            set(value.m_min_price_increment_amount);
            set(value.m_par_value);
            set(value.m_cont_multiplier);
            set(value.m_cab_price);
            set(value.m_trade_curr);
            set(value.m_settle_curr);
            set(value.m_strike_curr);
            set(value.m_expiration);
            set(value.m_maturity);
            set(value.m_exercise_type);
            set(value.m_user_defined);
            set(value.m_decay_start_year);
            set(value.m_decay_start_month);
            set(value.m_decay_start_day);
            set(value.m_decay_qty);
            set(value.m_price_ratio);
            set(value.m_timestamp);set_legs_list(value.m_legs);
        }

        ProductDefinitionV2() {
            m__meta.set_message_type("ProductDefinitionV2");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4360, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4360, length);
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
             *this = ProductDefinitionV2{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSecurityId() const {
            return !(m_security_id.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeSrspreadId() const {
            return !(m_srspread_id == 0);
        }
        bool IncludeUnderlierId() const {
            return !(m_underlier_id == 0);
        }
        bool IncludeUndKey() const {
            return (m_und_key.ByteSizeLong() > 0);
        }
        bool IncludeProductGroup() const {
            return !(m_product_group.empty());
        }
        bool IncludeSecurityGroup() const {
            return !(m_security_group.empty());
        }
        bool IncludeMarketSegmentId() const {
            return !(m_market_segment_id == 0);
        }
        bool IncludeRicCode() const {
            return !(m_ric_code.empty());
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeExchange() const {
            return !(m_exchange.empty());
        }
        bool IncludeProductRate() const {
            return !(m_product_rate == 0.0);
        }
        bool IncludeContractSize() const {
            return !(m_contract_size == 0.0);
        }
        bool IncludeMinTickSize() const {
            return !(m_min_tick_size == 0.0);
        }
        bool IncludeDisplayFactor() const {
            return !(m_display_factor == 0.0);
        }
        bool IncludeStrikeScale() const {
            return !(m_strike_scale == 0.0);
        }
        bool IncludeMinLotSize() const {
            return !(m_min_lot_size == 0);
        }
        bool IncludeBookDepth() const {
            return !(m_book_depth == 0);
        }
        bool IncludeImpliedBookDepth() const {
            return !(m_implied_book_depth == 0);
        }
        bool IncludeImpMarketInd() const {
            return !(m_imp_market_ind == 0);
        }
        bool IncludeMinPriceIncrementAmount() const {
            return !(m_min_price_increment_amount == 0.0);
        }
        bool IncludeParValue() const {
            return !(m_par_value == 0.0);
        }
        bool IncludeContMultiplier() const {
            return !(m_cont_multiplier == 0.0);
        }
        bool IncludeCabPrice() const {
            return !(m_cab_price == 0.0);
        }
        bool IncludeExpiration() const {
            return (m_expiration.time_since_epoch().count() != 0);
        }
        bool IncludeMaturity() const {
            return (m_maturity.ByteSizeLong() > 0);
        }
        bool IncludeDecayStartYear() const {
            return !(m_decay_start_year == 0);
        }
        bool IncludeDecayStartMonth() const {
            return !(m_decay_start_month == 0);
        }
        bool IncludeDecayStartDay() const {
            return !(m_decay_start_day == 0);
        }
        bool IncludeDecayQty() const {
            return !(m_decay_qty == 0);
        }
        bool IncludePriceRatio() const {
            return !(m_price_ratio == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeLegs() const {
            return (!m_legs.empty());
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
            if ( IncludeSecurityId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(248,m_security_id);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(103, tickerKeyLayout);
            }
            if ( IncludeSrspreadId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(104,m_srspread_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>(m_product_class)));
            if ( IncludeUnderlierId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_underlier_id);
            }
            if ( IncludeUndKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_und_key.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(112, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_und_type)));
            if ( IncludeProductGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_product_group);
            }
            if ( IncludeSecurityGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_security_group);
            }
            if ( IncludeMarketSegmentId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_market_segment_id);
            }
            if ( IncludeRicCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(250,m_ric_code);
            }
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(249,m_security_desc);
            }
            if ( IncludeExchange()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_exchange);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductType>(m_product_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductTerm>(m_product_term)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductIndexType>(m_product_index_type)));
            if ( IncludeProductRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_product_rate);
            }
            if ( IncludeContractSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_contract_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ContractUnit>(m_contract_unit)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeMinTickSize()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_min_tick_size);
            }
            if ( IncludeDisplayFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_display_factor);
            }
            if ( IncludeStrikeScale()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_strike_scale);
            }
            if ( IncludeMinLotSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_min_lot_size);
            }
            if ( IncludeBookDepth()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_book_depth);
            }
            if ( IncludeImpliedBookDepth()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_implied_book_depth);
            }
            if ( IncludeImpMarketInd()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_imp_market_ind);
            }
            if ( IncludeMinPriceIncrementAmount()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_min_price_increment_amount);
            }
            if ( IncludeParValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_par_value);
            }
            if ( IncludeContMultiplier()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_cont_multiplier);
            }
            if ( IncludeCabPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_cab_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_trade_curr)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_settle_curr)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_strike_curr)));
            if ( IncludeExpiration()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(196, m_expiration);
            }
            if ( IncludeMaturity()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(199, m_maturity.get_year(), m_maturity.get_month(), m_maturity.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_exercise_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_defined)));
            if ( IncludeDecayStartYear()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(208,m_decay_start_year);
            }
            if ( IncludeDecayStartMonth()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_decay_start_month);
            }
            if ( IncludeDecayStartDay()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_decay_start_day);
            }
            if ( IncludeDecayQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_decay_qty);
            }
            if ( IncludePriceRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(220,m_price_ratio);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(247, m_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(223, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeSecurityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,248,static_cast<string>(m_security_id));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 103, tickerKeyLayout);
            }
            if ( IncludeSrspreadId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,104,m_srspread_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>(m_product_class)));
            if ( IncludeUnderlierId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_underlier_id);
            }
            if ( IncludeUndKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_und_key.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 112, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_und_type)));
            if ( IncludeProductGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_product_group));
            }
            if ( IncludeSecurityGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_security_group));
            }
            if ( IncludeMarketSegmentId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_market_segment_id);
            }
            if ( IncludeRicCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,250,static_cast<string>(m_ric_code));
            }
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,249,static_cast<string>(m_security_desc));
            }
            if ( IncludeExchange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_exchange));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductType>(m_product_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductTerm>(m_product_term)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductIndexType>(m_product_index_type)));
            if ( IncludeProductRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_product_rate);
            }
            if ( IncludeContractSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_contract_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ContractUnit>(m_contract_unit)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeMinTickSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_min_tick_size);
            }
            if ( IncludeDisplayFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_display_factor);
            }
            if ( IncludeStrikeScale()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_strike_scale);
            }
            if ( IncludeMinLotSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_min_lot_size);
            }
            if ( IncludeBookDepth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_book_depth);
            }
            if ( IncludeImpliedBookDepth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_implied_book_depth);
            }
            if ( IncludeImpMarketInd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_imp_market_ind);
            }
            if ( IncludeMinPriceIncrementAmount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_min_price_increment_amount);
            }
            if ( IncludeParValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_par_value);
            }
            if ( IncludeContMultiplier()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_cont_multiplier);
            }
            if ( IncludeCabPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_cab_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_trade_curr)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_settle_curr)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_strike_curr)));
            if ( IncludeExpiration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 196, m_expiration);
            }
            if ( IncludeMaturity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,199, m_maturity.get_year(), m_maturity.get_month(), m_maturity.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_exercise_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_defined)));
            if ( IncludeDecayStartYear()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,208,m_decay_start_year);
            }
            if ( IncludeDecayStartMonth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_decay_start_month);
            }
            if ( IncludeDecayStartDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_decay_start_day);
            }
            if ( IncludeDecayQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_decay_qty);
            }
            if ( IncludePriceRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,220,m_price_ratio);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 247, m_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 223, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 248: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                    case 104: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_srspread_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_product_class = static_cast<spiderrock::protobuf::api::ProductClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_underlier_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_und_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_und_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_product_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_market_segment_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ric_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 249: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exchange = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_product_type = static_cast<spiderrock::protobuf::api::ProductType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_product_term = static_cast<spiderrock::protobuf::api::ProductTerm>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_product_index_type = static_cast<spiderrock::protobuf::api::ProductIndexType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_product_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_contract_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contract_unit = static_cast<spiderrock::protobuf::api::ContractUnit>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_tick_size = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_display_factor = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_scale = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_lot_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_book_depth = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_implied_book_depth = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_imp_market_ind = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_price_increment_amount = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_par_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cont_multiplier = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cab_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trade_curr = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_settle_curr = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_strike_curr = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_expiration = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_maturity.set_year(dateKey.year());
                            m_maturity.set_month(dateKey.month());
                            m_maturity.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exercise_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_defined = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_decay_start_year = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_decay_start_month = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_decay_start_day = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_decay_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_price_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            legs item_legs;
                            item_legs.Decode(pos, pos+length);  
                            m_legs.emplace_back(item_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::_meta>() const { return ProductDefinitionV2::_meta{ m__meta}; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::pkey>() const { return ProductDefinitionV2::pkey{ m_pkey}; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::security_id>() const { return m_security_id; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::ticker>() const { return ProductDefinitionV2::ticker{ m_ticker}; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::srspread_id>() const { return m_srspread_id; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::product_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>( m_product_class)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::underlier_id>() const { return m_underlier_id; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::und_key>() const { return ProductDefinitionV2::und_key{ m_und_key}; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::und_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_und_type)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::product_group>() const { return m_product_group; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::security_group>() const { return m_security_group; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::market_segment_id>() const { return m_market_segment_id; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::ric_code>() const { return m_ric_code; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::security_desc>() const { return m_security_desc; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::exchange>() const { return m_exchange; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::product_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductType>( m_product_type)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::product_term>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductTerm>( m_product_term)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::product_index_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductIndexType>( m_product_index_type)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::product_rate>() const { return m_product_rate; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::contract_size>() const { return m_contract_size; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::contract_unit>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ContractUnit>( m_contract_unit)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::min_tick_size>() const { return m_min_tick_size; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::display_factor>() const { return m_display_factor; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::strike_scale>() const { return m_strike_scale; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::min_lot_size>() const { return m_min_lot_size; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::book_depth>() const { return m_book_depth; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::implied_book_depth>() const { return m_implied_book_depth; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::imp_market_ind>() const { return m_imp_market_ind; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::min_price_increment_amount>() const { return m_min_price_increment_amount; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::par_value>() const { return m_par_value; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::cont_multiplier>() const { return m_cont_multiplier; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::cab_price>() const { return m_cab_price; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::trade_curr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_trade_curr)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::settle_curr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_settle_curr)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::strike_curr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_strike_curr)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::expiration>() const { return m_expiration; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::maturity>() const { return ProductDefinitionV2::maturity{ m_maturity}; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::exercise_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_exercise_type)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::user_defined>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_defined)); }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::decay_start_year>() const { return m_decay_start_year; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::decay_start_month>() const { return m_decay_start_month; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::decay_start_day>() const { return m_decay_start_day; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::decay_qty>() const { return m_decay_qty; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::price_ratio>() const { return m_price_ratio; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::timestamp>() const { return m_timestamp; }
    template<> inline const auto ProductDefinitionV2::get<ProductDefinitionV2::legs>(int i) const { return ProductDefinitionV2::legs{ get_legs(i)}; }
    template<> inline int ProductDefinitionV2::count<ProductDefinitionV2::legs>() const { return static_cast<int>( m_legs.size()); }
    template<> inline const auto ProductDefinitionV2_PKey::get<ProductDefinitionV2_PKey::sec_key>() const { return ProductDefinitionV2_PKey::sec_key{m_sec_key}; }
    template<> inline const auto ProductDefinitionV2_PKey::get<ProductDefinitionV2_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::leg_id>() const { return m_leg_id; }
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::sec_key>() const { return ProductDefinitionV2_Legs::sec_key{m_sec_key}; }
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::ratio>() const { return m_ratio; }
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::ref_delta>() const { return m_ref_delta; }
    template<> inline const auto ProductDefinitionV2_Legs::get<ProductDefinitionV2_Legs::ref_prc>() const { return m_ref_prc; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ProductDefinitionV2_PKey& m) {
        o << "\"sec_key\":{" << m.get<ProductDefinitionV2_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<ProductDefinitionV2_PKey::sec_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ProductDefinitionV2_Legs& m) {
        o << "\"leg_id\":\"" << m.get<ProductDefinitionV2_Legs::leg_id>() << "\"";
        o << ",\"sec_key\":{" << m.get<ProductDefinitionV2_Legs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<ProductDefinitionV2_Legs::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<ProductDefinitionV2_Legs::side>();
        o << ",\"ratio\":" << m.get<ProductDefinitionV2_Legs::ratio>();
        o << ",\"ref_delta\":" << m.get<ProductDefinitionV2_Legs::ref_delta>();
        o << ",\"ref_prc\":" << m.get<ProductDefinitionV2_Legs::ref_prc>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ProductDefinitionV2& m) {
        o << "\"_meta\":{" << m.get<ProductDefinitionV2::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ProductDefinitionV2::pkey>() << "}";
        o << ",\"security_id\":\"" << m.get<ProductDefinitionV2::security_id>() << "\"";
        o << ",\"ticker\":{" << m.get<ProductDefinitionV2::ticker>() << "}";
        o << ",\"srspread_id\":" << m.get<ProductDefinitionV2::srspread_id>();
        o << ",\"product_class\":" << (int64_t)m.get<ProductDefinitionV2::product_class>();
        o << ",\"underlier_id\":" << m.get<ProductDefinitionV2::underlier_id>();
        o << ",\"und_key\":{" << m.get<ProductDefinitionV2::und_key>() << "}";
        o << ",\"und_type\":" << (int64_t)m.get<ProductDefinitionV2::und_type>();
        o << ",\"product_group\":\"" << m.get<ProductDefinitionV2::product_group>() << "\"";
        o << ",\"security_group\":\"" << m.get<ProductDefinitionV2::security_group>() << "\"";
        o << ",\"market_segment_id\":" << m.get<ProductDefinitionV2::market_segment_id>();
        o << ",\"ric_code\":\"" << m.get<ProductDefinitionV2::ric_code>() << "\"";
        o << ",\"security_desc\":\"" << m.get<ProductDefinitionV2::security_desc>() << "\"";
        o << ",\"exchange\":\"" << m.get<ProductDefinitionV2::exchange>() << "\"";
        o << ",\"product_type\":" << (int64_t)m.get<ProductDefinitionV2::product_type>();
        o << ",\"product_term\":" << (int64_t)m.get<ProductDefinitionV2::product_term>();
        o << ",\"product_index_type\":" << (int64_t)m.get<ProductDefinitionV2::product_index_type>();
        o << ",\"product_rate\":" << m.get<ProductDefinitionV2::product_rate>();
        o << ",\"contract_size\":" << m.get<ProductDefinitionV2::contract_size>();
        o << ",\"contract_unit\":" << (int64_t)m.get<ProductDefinitionV2::contract_unit>();
        o << ",\"price_format\":" << (int64_t)m.get<ProductDefinitionV2::price_format>();
        o << ",\"min_tick_size\":" << m.get<ProductDefinitionV2::min_tick_size>();
        o << ",\"display_factor\":" << m.get<ProductDefinitionV2::display_factor>();
        o << ",\"strike_scale\":" << m.get<ProductDefinitionV2::strike_scale>();
        o << ",\"min_lot_size\":" << m.get<ProductDefinitionV2::min_lot_size>();
        o << ",\"book_depth\":" << m.get<ProductDefinitionV2::book_depth>();
        o << ",\"implied_book_depth\":" << m.get<ProductDefinitionV2::implied_book_depth>();
        o << ",\"imp_market_ind\":" << m.get<ProductDefinitionV2::imp_market_ind>();
        o << ",\"min_price_increment_amount\":" << m.get<ProductDefinitionV2::min_price_increment_amount>();
        o << ",\"par_value\":" << m.get<ProductDefinitionV2::par_value>();
        o << ",\"cont_multiplier\":" << m.get<ProductDefinitionV2::cont_multiplier>();
        o << ",\"cab_price\":" << m.get<ProductDefinitionV2::cab_price>();
        o << ",\"trade_curr\":" << (int64_t)m.get<ProductDefinitionV2::trade_curr>();
        o << ",\"settle_curr\":" << (int64_t)m.get<ProductDefinitionV2::settle_curr>();
        o << ",\"strike_curr\":" << (int64_t)m.get<ProductDefinitionV2::strike_curr>();
        {
            std::time_t tt = m.get<ProductDefinitionV2::expiration>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expiration\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"maturity\":{" << m.get<ProductDefinitionV2::maturity>() << "}";
        o << ",\"exercise_type\":" << (int64_t)m.get<ProductDefinitionV2::exercise_type>();
        o << ",\"user_defined\":" << (int64_t)m.get<ProductDefinitionV2::user_defined>();
        o << ",\"decay_start_year\":" << m.get<ProductDefinitionV2::decay_start_year>();
        o << ",\"decay_start_month\":" << m.get<ProductDefinitionV2::decay_start_month>();
        o << ",\"decay_start_day\":" << m.get<ProductDefinitionV2::decay_start_day>();
        o << ",\"decay_qty\":" << m.get<ProductDefinitionV2::decay_qty>();
        o << ",\"price_ratio\":" << m.get<ProductDefinitionV2::price_ratio>();
        {
            std::time_t tt = m.get<ProductDefinitionV2::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ProductDefinitionV2::legs>(); ++i) {
                o << delim << m.get<ProductDefinitionV2::legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}