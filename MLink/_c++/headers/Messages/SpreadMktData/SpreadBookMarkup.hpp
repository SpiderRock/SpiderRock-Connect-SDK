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

    #ifndef _srspread_id__GUARD__
    #define _srspread_id__GUARD__
    DECL_STRONG_TYPE(srspread_id, int64);
    #endif//_srspread_id__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _bid_price1__double__GUARD__
    #define _bid_price1__double__GUARD__
    DECL_STRONG_TYPE(bid_price1__double, double);
    #endif//_bid_price1__double__GUARD__

    #ifndef _is_bid_price1_valid__GUARD__
    #define _is_bid_price1_valid__GUARD__
    DECL_STRONG_TYPE(is_bid_price1_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_bid_price1_valid__GUARD__

    #ifndef _ask_price1__double__GUARD__
    #define _ask_price1__double__GUARD__
    DECL_STRONG_TYPE(ask_price1__double, double);
    #endif//_ask_price1__double__GUARD__

    #ifndef _is_ask_price1_valid__GUARD__
    #define _is_ask_price1_valid__GUARD__
    DECL_STRONG_TYPE(is_ask_price1_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_ask_price1_valid__GUARD__

    #ifndef _bid_size1__GUARD__
    #define _bid_size1__GUARD__
    DECL_STRONG_TYPE(bid_size1, int32);
    #endif//_bid_size1__GUARD__

    #ifndef _ask_size1__GUARD__
    #define _ask_size1__GUARD__
    DECL_STRONG_TYPE(ask_size1, int32);
    #endif//_ask_size1__GUARD__

    #ifndef _bid_mask1__GUARD__
    #define _bid_mask1__GUARD__
    DECL_STRONG_TYPE(bid_mask1, uint32);
    #endif//_bid_mask1__GUARD__

    #ifndef _ask_mask1__GUARD__
    #define _ask_mask1__GUARD__
    DECL_STRONG_TYPE(ask_mask1, uint32);
    #endif//_ask_mask1__GUARD__

    #ifndef _bid_exch1__OptExch__GUARD__
    #define _bid_exch1__OptExch__GUARD__
    DECL_STRONG_TYPE(bid_exch1__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_bid_exch1__OptExch__GUARD__

    #ifndef _ask_exch1__OptExch__GUARD__
    #define _ask_exch1__OptExch__GUARD__
    DECL_STRONG_TYPE(ask_exch1__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_ask_exch1__OptExch__GUARD__

    #ifndef _bid_time__timestamp__GUARD__
    #define _bid_time__timestamp__GUARD__
    DECL_STRONG_TYPE(bid_time__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_bid_time__timestamp__GUARD__

    #ifndef _ask_time__timestamp__GUARD__
    #define _ask_time__timestamp__GUARD__
    DECL_STRONG_TYPE(ask_time__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_ask_time__timestamp__GUARD__

    #ifndef _update_type__GUARD__
    #define _update_type__GUARD__
    DECL_STRONG_TYPE(update_type, spiderrock::protobuf::api::UpdateType);
    #endif//_update_type__GUARD__

    #ifndef _num_stk_legs__GUARD__
    #define _num_stk_legs__GUARD__
    DECL_STRONG_TYPE(num_stk_legs, int32);
    #endif//_num_stk_legs__GUARD__

    #ifndef _num_fut_legs__GUARD__
    #define _num_fut_legs__GUARD__
    DECL_STRONG_TYPE(num_fut_legs, int32);
    #endif//_num_fut_legs__GUARD__

    #ifndef _num_opt_legs__GUARD__
    #define _num_opt_legs__GUARD__
    DECL_STRONG_TYPE(num_opt_legs, int32);
    #endif//_num_opt_legs__GUARD__

    #ifndef _user_defined__GUARD__
    #define _user_defined__GUARD__
    DECL_STRONG_TYPE(user_defined, spiderrock::protobuf::api::YesNo);
    #endif//_user_defined__GUARD__

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::ToolSpreadClass);
    #endif//_spread_class__GUARD__

    #ifndef _contains_hedge__GUARD__
    #define _contains_hedge__GUARD__
    DECL_STRONG_TYPE(contains_hedge, spiderrock::protobuf::api::YesNo);
    #endif//_contains_hedge__GUARD__

    #ifndef _leg_bid_prc__GUARD__
    #define _leg_bid_prc__GUARD__
    DECL_STRONG_TYPE(leg_bid_prc, double);
    #endif//_leg_bid_prc__GUARD__

    #ifndef _leg_ask_prc__GUARD__
    #define _leg_ask_prc__GUARD__
    DECL_STRONG_TYPE(leg_ask_prc, double);
    #endif//_leg_ask_prc__GUARD__

    #ifndef _leg_bid_sz__GUARD__
    #define _leg_bid_sz__GUARD__
    DECL_STRONG_TYPE(leg_bid_sz, int32);
    #endif//_leg_bid_sz__GUARD__

    #ifndef _leg_ask_sz__GUARD__
    #define _leg_ask_sz__GUARD__
    DECL_STRONG_TYPE(leg_ask_sz, int32);
    #endif//_leg_ask_sz__GUARD__

    #ifndef _surf_prc__GUARD__
    #define _surf_prc__GUARD__
    DECL_STRONG_TYPE(surf_prc, double);
    #endif//_surf_prc__GUARD__

    #ifndef _surf_delta__GUARD__
    #define _surf_delta__GUARD__
    DECL_STRONG_TYPE(surf_delta, float);
    #endif//_surf_delta__GUARD__

    #ifndef _surf_gamma__GUARD__
    #define _surf_gamma__GUARD__
    DECL_STRONG_TYPE(surf_gamma, float);
    #endif//_surf_gamma__GUARD__

    #ifndef _surf_vega__GUARD__
    #define _surf_vega__GUARD__
    DECL_STRONG_TYPE(surf_vega, float);
    #endif//_surf_vega__GUARD__

    #ifndef _surf_wt_vega__GUARD__
    #define _surf_wt_vega__GUARD__
    DECL_STRONG_TYPE(surf_wt_vega, float);
    #endif//_surf_wt_vega__GUARD__

    #ifndef _surf_error__GUARD__
    #define _surf_error__GUARD__
    DECL_STRONG_TYPE(surf_error, int32);
    #endif//_surf_error__GUARD__

    #ifndef _min_expiry__GUARD__
    #define _min_expiry__GUARD__
    DECL_STRONG_TYPE(min_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_min_expiry__GUARD__

    #ifndef _max_expiry__GUARD__
    #define _max_expiry__GUARD__
    DECL_STRONG_TYPE(max_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_expiry__GUARD__

    #ifndef _min_years__GUARD__
    #define _min_years__GUARD__
    DECL_STRONG_TYPE(min_years, float);
    #endif//_min_years__GUARD__

    #ifndef _max_years__GUARD__
    #define _max_years__GUARD__
    DECL_STRONG_TYPE(max_years, float);
    #endif//_max_years__GUARD__

    #ifndef _ref_uprc__float__GUARD__
    #define _ref_uprc__float__GUARD__
    DECL_STRONG_TYPE(ref_uprc__float, float);
    #endif//_ref_uprc__float__GUARD__

    #ifndef _print_price__GUARD__
    #define _print_price__GUARD__
    DECL_STRONG_TYPE(print_price, float);
    #endif//_print_price__GUARD__

    #ifndef _print_time__GUARD__
    #define _print_time__GUARD__
    DECL_STRONG_TYPE(print_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_print_time__GUARD__

    #ifndef _print_size__GUARD__
    #define _print_size__GUARD__
    DECL_STRONG_TYPE(print_size, int32);
    #endif//_print_size__GUARD__

    #ifndef _print_volume__GUARD__
    #define _print_volume__GUARD__
    DECL_STRONG_TYPE(print_volume, int32);
    #endif//_print_volume__GUARD__

    #ifndef _grp_num__GUARD__
    #define _grp_num__GUARD__
    DECL_STRONG_TYPE(grp_num, int32);
    #endif//_grp_num__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _filter_id__GUARD__
    #define _filter_id__GUARD__
    DECL_STRONG_TYPE(filter_id, int64);
    #endif//_filter_id__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _skey__GUARD__
    #define _skey__GUARD__
    DECL_STRONG_TYPE(skey, TickerKey);
    #endif//_skey__GUARD__

    #ifndef _is_test__GUARD__
    #define _is_test__GUARD__
    DECL_STRONG_TYPE(is_test, spiderrock::protobuf::api::YesNo);
    #endif//_is_test__GUARD__

    #ifndef _leg_sec_key__GUARD__
    #define _leg_sec_key__GUARD__
    DECL_STRONG_TYPE(leg_sec_key, OptionKey);
    #endif//_leg_sec_key__GUARD__

    #ifndef _leg_sec_type__GUARD__
    #define _leg_sec_type__GUARD__
    DECL_STRONG_TYPE(leg_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_leg_sec_type__GUARD__

    #ifndef _leg_price_format__GUARD__
    #define _leg_price_format__GUARD__
    DECL_STRONG_TYPE(leg_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_leg_price_format__GUARD__

    #ifndef _leg_security_desc__GUARD__
    #define _leg_security_desc__GUARD__
    DECL_STRONG_TYPE(leg_security_desc, string);
    #endif//_leg_security_desc__GUARD__

    #ifndef _leg_side__GUARD__
    #define _leg_side__GUARD__
    DECL_STRONG_TYPE(leg_side, spiderrock::protobuf::api::BuySell);
    #endif//_leg_side__GUARD__

    #ifndef _leg_ratio__GUARD__
    #define _leg_ratio__GUARD__
    DECL_STRONG_TYPE(leg_ratio, uint32);
    #endif//_leg_ratio__GUARD__

    #ifndef _leg_bid_price__GUARD__
    #define _leg_bid_price__GUARD__
    DECL_STRONG_TYPE(leg_bid_price, double);
    #endif//_leg_bid_price__GUARD__

    #ifndef _leg_bid_size__GUARD__
    #define _leg_bid_size__GUARD__
    DECL_STRONG_TYPE(leg_bid_size, int32);
    #endif//_leg_bid_size__GUARD__

    #ifndef _leg_ask_price__GUARD__
    #define _leg_ask_price__GUARD__
    DECL_STRONG_TYPE(leg_ask_price, double);
    #endif//_leg_ask_price__GUARD__

    #ifndef _leg_ask_size__GUARD__
    #define _leg_ask_size__GUARD__
    DECL_STRONG_TYPE(leg_ask_size, int32);
    #endif//_leg_ask_size__GUARD__

    #ifndef _leg_years__GUARD__
    #define _leg_years__GUARD__
    DECL_STRONG_TYPE(leg_years, float);
    #endif//_leg_years__GUARD__

    #ifndef _leg_uprc__GUARD__
    #define _leg_uprc__GUARD__
    DECL_STRONG_TYPE(leg_uprc, double);
    #endif//_leg_uprc__GUARD__

    #ifndef _leg_surf_vol__GUARD__
    #define _leg_surf_vol__GUARD__
    DECL_STRONG_TYPE(leg_surf_vol, float);
    #endif//_leg_surf_vol__GUARD__

    #ifndef _leg_surf_price__GUARD__
    #define _leg_surf_price__GUARD__
    DECL_STRONG_TYPE(leg_surf_price, float);
    #endif//_leg_surf_price__GUARD__

    #ifndef _leg_surf_de__GUARD__
    #define _leg_surf_de__GUARD__
    DECL_STRONG_TYPE(leg_surf_de, float);
    #endif//_leg_surf_de__GUARD__

    #ifndef _leg_surf_ga__GUARD__
    #define _leg_surf_ga__GUARD__
    DECL_STRONG_TYPE(leg_surf_ga, float);
    #endif//_leg_surf_ga__GUARD__

    #ifndef _leg_surf_ve__GUARD__
    #define _leg_surf_ve__GUARD__
    DECL_STRONG_TYPE(leg_surf_ve, float);
    #endif//_leg_surf_ve__GUARD__

    #ifndef _leg_surf_err__GUARD__
    #define _leg_surf_err__GUARD__
    DECL_STRONG_TYPE(leg_surf_err, int32);
    #endif//_leg_surf_err__GUARD__

    
    class SpreadBookMarkup_PKey {
        public:
        //using statements for all types used in this class
        using skey = spiderrock::protobuf::api::skey;
        using is_test = spiderrock::protobuf::api::is_test;

        private:
        skey m_skey{};
        is_test m_is_test{};

        public:
		skey get_skey() const {
            return m_skey;
        }
        is_test get_is_test() const {
            return m_is_test;
        }
        void set_skey(const skey& value)  {
            m_skey = value;
        }
        void set_is_test(const is_test& value)  {
            m_is_test = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const skey & value) { set_skey(value); }
        void set(const is_test & value) { set_is_test(value); }


        SpreadBookMarkup_PKey() {}

        virtual ~SpreadBookMarkup_PKey() {
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
        bool IncludeSkey() const {
            return (m_skey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test)));
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
                        m_skey.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_is_test = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class SpreadBookMarkup_MarkupLegs {
        public:
        //using statements for all types used in this class
        using leg_sec_key = spiderrock::protobuf::api::leg_sec_key;
        using leg_sec_type = spiderrock::protobuf::api::leg_sec_type;
        using leg_price_format = spiderrock::protobuf::api::leg_price_format;
        using leg_security_desc = spiderrock::protobuf::api::leg_security_desc;
        using leg_side = spiderrock::protobuf::api::leg_side;
        using leg_ratio = spiderrock::protobuf::api::leg_ratio;
        using leg_bid_price = spiderrock::protobuf::api::leg_bid_price;
        using leg_bid_size = spiderrock::protobuf::api::leg_bid_size;
        using leg_ask_price = spiderrock::protobuf::api::leg_ask_price;
        using leg_ask_size = spiderrock::protobuf::api::leg_ask_size;
        using leg_years = spiderrock::protobuf::api::leg_years;
        using leg_uprc = spiderrock::protobuf::api::leg_uprc;
        using leg_surf_vol = spiderrock::protobuf::api::leg_surf_vol;
        using leg_surf_price = spiderrock::protobuf::api::leg_surf_price;
        using leg_surf_de = spiderrock::protobuf::api::leg_surf_de;
        using leg_surf_ga = spiderrock::protobuf::api::leg_surf_ga;
        using leg_surf_ve = spiderrock::protobuf::api::leg_surf_ve;
        using leg_surf_err = spiderrock::protobuf::api::leg_surf_err;

        private:
        leg_sec_key m_leg_sec_key{};
        leg_sec_type m_leg_sec_type{};
        leg_price_format m_leg_price_format{};
        leg_security_desc m_leg_security_desc{};
        leg_side m_leg_side{};
        leg_ratio m_leg_ratio{};
        leg_bid_price m_leg_bid_price{};
        leg_bid_size m_leg_bid_size{};
        leg_ask_price m_leg_ask_price{};
        leg_ask_size m_leg_ask_size{};
        leg_years m_leg_years{};
        leg_uprc m_leg_uprc{};
        leg_surf_vol m_leg_surf_vol{};
        leg_surf_price m_leg_surf_price{};
        leg_surf_de m_leg_surf_de{};
        leg_surf_ga m_leg_surf_ga{};
        leg_surf_ve m_leg_surf_ve{};
        leg_surf_err m_leg_surf_err{};

        public:
		leg_sec_key get_leg_sec_key() const {
            return m_leg_sec_key;
        }
        leg_sec_type get_leg_sec_type() const {
            return m_leg_sec_type;
        }
        leg_price_format get_leg_price_format() const {
            return m_leg_price_format;
        }
        leg_security_desc get_leg_security_desc() const {
            return m_leg_security_desc;
        }
        leg_side get_leg_side() const {
            return m_leg_side;
        }
        leg_ratio get_leg_ratio() const {
            return m_leg_ratio;
        }
        leg_bid_price get_leg_bid_price() const {
            return m_leg_bid_price;
        }
        leg_bid_size get_leg_bid_size() const {
            return m_leg_bid_size;
        }
        leg_ask_price get_leg_ask_price() const {
            return m_leg_ask_price;
        }
        leg_ask_size get_leg_ask_size() const {
            return m_leg_ask_size;
        }
        leg_years get_leg_years() const {
            return m_leg_years;
        }
        leg_uprc get_leg_uprc() const {
            return m_leg_uprc;
        }
        leg_surf_vol get_leg_surf_vol() const {
            return m_leg_surf_vol;
        }
        leg_surf_price get_leg_surf_price() const {
            return m_leg_surf_price;
        }
        leg_surf_de get_leg_surf_de() const {
            return m_leg_surf_de;
        }
        leg_surf_ga get_leg_surf_ga() const {
            return m_leg_surf_ga;
        }
        leg_surf_ve get_leg_surf_ve() const {
            return m_leg_surf_ve;
        }
        leg_surf_err get_leg_surf_err() const {
            return m_leg_surf_err;
        }
        void set_leg_sec_key(const leg_sec_key& value)  {
            m_leg_sec_key = value;
        }
        void set_leg_sec_type(const leg_sec_type& value)  {
            m_leg_sec_type = value;
        }
        void set_leg_price_format(const leg_price_format& value)  {
            m_leg_price_format = value;
        }
        void set_leg_security_desc(const leg_security_desc& value)  {
            m_leg_security_desc = value;
        }
        void set_leg_side(const leg_side& value)  {
            m_leg_side = value;
        }
        void set_leg_ratio(const leg_ratio& value)  {
            m_leg_ratio = value;
        }
        void set_leg_bid_price(const leg_bid_price& value)  {
            m_leg_bid_price = value;
        }
        void set_leg_bid_size(const leg_bid_size& value)  {
            m_leg_bid_size = value;
        }
        void set_leg_ask_price(const leg_ask_price& value)  {
            m_leg_ask_price = value;
        }
        void set_leg_ask_size(const leg_ask_size& value)  {
            m_leg_ask_size = value;
        }
        void set_leg_years(const leg_years& value)  {
            m_leg_years = value;
        }
        void set_leg_uprc(const leg_uprc& value)  {
            m_leg_uprc = value;
        }
        void set_leg_surf_vol(const leg_surf_vol& value)  {
            m_leg_surf_vol = value;
        }
        void set_leg_surf_price(const leg_surf_price& value)  {
            m_leg_surf_price = value;
        }
        void set_leg_surf_de(const leg_surf_de& value)  {
            m_leg_surf_de = value;
        }
        void set_leg_surf_ga(const leg_surf_ga& value)  {
            m_leg_surf_ga = value;
        }
        void set_leg_surf_ve(const leg_surf_ve& value)  {
            m_leg_surf_ve = value;
        }
        void set_leg_surf_err(const leg_surf_err& value)  {
            m_leg_surf_err = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup_MarkupLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup_MarkupLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_sec_key & value) { set_leg_sec_key(value); }
        void set(const leg_sec_type & value) { set_leg_sec_type(value); }
        void set(const leg_price_format & value) { set_leg_price_format(value); }
        void set(const leg_security_desc & value) { set_leg_security_desc(value); }
        void set(const leg_side & value) { set_leg_side(value); }
        void set(const leg_ratio & value) { set_leg_ratio(value); }
        void set(const leg_bid_price & value) { set_leg_bid_price(value); }
        void set(const leg_bid_size & value) { set_leg_bid_size(value); }
        void set(const leg_ask_price & value) { set_leg_ask_price(value); }
        void set(const leg_ask_size & value) { set_leg_ask_size(value); }
        void set(const leg_years & value) { set_leg_years(value); }
        void set(const leg_uprc & value) { set_leg_uprc(value); }
        void set(const leg_surf_vol & value) { set_leg_surf_vol(value); }
        void set(const leg_surf_price & value) { set_leg_surf_price(value); }
        void set(const leg_surf_de & value) { set_leg_surf_de(value); }
        void set(const leg_surf_ga & value) { set_leg_surf_ga(value); }
        void set(const leg_surf_ve & value) { set_leg_surf_ve(value); }
        void set(const leg_surf_err & value) { set_leg_surf_err(value); }


        SpreadBookMarkup_MarkupLegs() {}

        virtual ~SpreadBookMarkup_MarkupLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(238,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_leg_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(247,m_leg_security_desc);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(253,m_leg_ratio);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(256,m_leg_bid_price);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(259,m_leg_bid_size);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(262,m_leg_ask_price);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(265,m_leg_ask_size);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_leg_years);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(271,m_leg_uprc);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_leg_surf_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_leg_surf_price);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_leg_surf_de);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_leg_surf_ga);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_leg_surf_ve);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(295,m_leg_surf_err);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 238, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_leg_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,247,static_cast<string>(m_leg_security_desc));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,253,m_leg_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,256,m_leg_bid_price);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,259,m_leg_bid_size);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,262,m_leg_ask_price);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,265,m_leg_ask_size);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_leg_years);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,271,m_leg_uprc);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_leg_surf_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_leg_surf_price);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_leg_surf_de);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_leg_surf_ga);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_leg_surf_ve);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,295,m_leg_surf_err);
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
                    case 238: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_leg_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 241: {m_leg_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 244: {m_leg_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 247: {m_leg_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 250: {m_leg_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 253: {m_leg_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 256: {m_leg_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 259: {m_leg_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 262: {m_leg_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 265: {m_leg_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 268: {m_leg_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 271: {m_leg_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 280: {m_leg_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 283: {m_leg_surf_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 286: {m_leg_surf_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 289: {m_leg_surf_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 292: {m_leg_surf_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 295: {m_leg_surf_err = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadBookMarkup {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadBookMarkup_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using srspread_id = spiderrock::protobuf::api::srspread_id;
        using price_format = spiderrock::protobuf::api::price_format;
        using bid_price1 = spiderrock::protobuf::api::bid_price1__double;
        using is_bid_price1_valid = spiderrock::protobuf::api::is_bid_price1_valid;
        using ask_price1 = spiderrock::protobuf::api::ask_price1__double;
        using is_ask_price1_valid = spiderrock::protobuf::api::is_ask_price1_valid;
        using bid_size1 = spiderrock::protobuf::api::bid_size1;
        using ask_size1 = spiderrock::protobuf::api::ask_size1;
        using bid_mask1 = spiderrock::protobuf::api::bid_mask1;
        using ask_mask1 = spiderrock::protobuf::api::ask_mask1;
        using bid_exch1 = spiderrock::protobuf::api::bid_exch1__OptExch;
        using ask_exch1 = spiderrock::protobuf::api::ask_exch1__OptExch;
        using bid_time = spiderrock::protobuf::api::bid_time__timestamp;
        using ask_time = spiderrock::protobuf::api::ask_time__timestamp;
        using update_type = spiderrock::protobuf::api::update_type;
        using num_stk_legs = spiderrock::protobuf::api::num_stk_legs;
        using num_fut_legs = spiderrock::protobuf::api::num_fut_legs;
        using num_opt_legs = spiderrock::protobuf::api::num_opt_legs;
        using user_defined = spiderrock::protobuf::api::user_defined;
        using spread_class = spiderrock::protobuf::api::spread_class;
        using contains_hedge = spiderrock::protobuf::api::contains_hedge;
        using leg_bid_prc = spiderrock::protobuf::api::leg_bid_prc;
        using leg_ask_prc = spiderrock::protobuf::api::leg_ask_prc;
        using leg_bid_sz = spiderrock::protobuf::api::leg_bid_sz;
        using leg_ask_sz = spiderrock::protobuf::api::leg_ask_sz;
        using surf_prc = spiderrock::protobuf::api::surf_prc;
        using surf_delta = spiderrock::protobuf::api::surf_delta;
        using surf_gamma = spiderrock::protobuf::api::surf_gamma;
        using surf_vega = spiderrock::protobuf::api::surf_vega;
        using surf_wt_vega = spiderrock::protobuf::api::surf_wt_vega;
        using surf_error = spiderrock::protobuf::api::surf_error;
        using min_expiry = spiderrock::protobuf::api::min_expiry;
        using max_expiry = spiderrock::protobuf::api::max_expiry;
        using min_years = spiderrock::protobuf::api::min_years;
        using max_years = spiderrock::protobuf::api::max_years;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__float;
        using print_price = spiderrock::protobuf::api::print_price;
        using print_time = spiderrock::protobuf::api::print_time;
        using print_size = spiderrock::protobuf::api::print_size;
        using print_volume = spiderrock::protobuf::api::print_volume;
        using grp_num = spiderrock::protobuf::api::grp_num;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using filter_id = spiderrock::protobuf::api::filter_id;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using markup_legs = spiderrock::protobuf::api::SpreadBookMarkup_MarkupLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        srspread_id m_srspread_id{};
        price_format m_price_format{};
        bid_price1 m_bid_price1{};
        is_bid_price1_valid m_is_bid_price1_valid{};
        ask_price1 m_ask_price1{};
        is_ask_price1_valid m_is_ask_price1_valid{};
        bid_size1 m_bid_size1{};
        ask_size1 m_ask_size1{};
        bid_mask1 m_bid_mask1{};
        ask_mask1 m_ask_mask1{};
        bid_exch1 m_bid_exch1{};
        ask_exch1 m_ask_exch1{};
        bid_time m_bid_time{};
        ask_time m_ask_time{};
        update_type m_update_type{};
        num_stk_legs m_num_stk_legs{};
        num_fut_legs m_num_fut_legs{};
        num_opt_legs m_num_opt_legs{};
        user_defined m_user_defined{};
        spread_class m_spread_class{};
        contains_hedge m_contains_hedge{};
        leg_bid_prc m_leg_bid_prc{};
        leg_ask_prc m_leg_ask_prc{};
        leg_bid_sz m_leg_bid_sz{};
        leg_ask_sz m_leg_ask_sz{};
        surf_prc m_surf_prc{};
        surf_delta m_surf_delta{};
        surf_gamma m_surf_gamma{};
        surf_vega m_surf_vega{};
        surf_wt_vega m_surf_wt_vega{};
        surf_error m_surf_error{};
        min_expiry m_min_expiry{};
        max_expiry m_max_expiry{};
        min_years m_min_years{};
        max_years m_max_years{};
        ref_uprc m_ref_uprc{};
        print_price m_print_price{};
        print_time m_print_time{};
        print_size m_print_size{};
        print_volume m_print_volume{};
        grp_num m_grp_num{};
        security_desc m_security_desc{};
        filter_id m_filter_id{};
        timestamp m_timestamp{};
        std::vector<markup_legs> m_markup_legs{};

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
        srspread_id get_srspread_id() const {
            return m_srspread_id;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        bid_price1 get_bid_price1() const {
            return m_bid_price1;
        }		
        is_bid_price1_valid get_is_bid_price1_valid() const {
            return m_is_bid_price1_valid;
        }		
        ask_price1 get_ask_price1() const {
            return m_ask_price1;
        }		
        is_ask_price1_valid get_is_ask_price1_valid() const {
            return m_is_ask_price1_valid;
        }		
        bid_size1 get_bid_size1() const {
            return m_bid_size1;
        }		
        ask_size1 get_ask_size1() const {
            return m_ask_size1;
        }		
        bid_mask1 get_bid_mask1() const {
            return m_bid_mask1;
        }		
        ask_mask1 get_ask_mask1() const {
            return m_ask_mask1;
        }		
        bid_exch1 get_bid_exch1() const {
            return m_bid_exch1;
        }		
        ask_exch1 get_ask_exch1() const {
            return m_ask_exch1;
        }		
        bid_time get_bid_time() const {
            return m_bid_time;
        }		
        ask_time get_ask_time() const {
            return m_ask_time;
        }		
        update_type get_update_type() const {
            return m_update_type;
        }		
        num_stk_legs get_num_stk_legs() const {
            return m_num_stk_legs;
        }		
        num_fut_legs get_num_fut_legs() const {
            return m_num_fut_legs;
        }		
        num_opt_legs get_num_opt_legs() const {
            return m_num_opt_legs;
        }		
        user_defined get_user_defined() const {
            return m_user_defined;
        }		
        spread_class get_spread_class() const {
            return m_spread_class;
        }		
        contains_hedge get_contains_hedge() const {
            return m_contains_hedge;
        }		
        leg_bid_prc get_leg_bid_prc() const {
            return m_leg_bid_prc;
        }		
        leg_ask_prc get_leg_ask_prc() const {
            return m_leg_ask_prc;
        }		
        leg_bid_sz get_leg_bid_sz() const {
            return m_leg_bid_sz;
        }		
        leg_ask_sz get_leg_ask_sz() const {
            return m_leg_ask_sz;
        }		
        surf_prc get_surf_prc() const {
            return m_surf_prc;
        }		
        surf_delta get_surf_delta() const {
            return m_surf_delta;
        }		
        surf_gamma get_surf_gamma() const {
            return m_surf_gamma;
        }		
        surf_vega get_surf_vega() const {
            return m_surf_vega;
        }		
        surf_wt_vega get_surf_wt_vega() const {
            return m_surf_wt_vega;
        }		
        surf_error get_surf_error() const {
            return m_surf_error;
        }		
        min_expiry get_min_expiry() const {
            return m_min_expiry;
        }		
        max_expiry get_max_expiry() const {
            return m_max_expiry;
        }		
        min_years get_min_years() const {
            return m_min_years;
        }		
        max_years get_max_years() const {
            return m_max_years;
        }		
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
        }		
        print_price get_print_price() const {
            return m_print_price;
        }		
        print_time get_print_time() const {
            return m_print_time;
        }		
        print_size get_print_size() const {
            return m_print_size;
        }		
        print_volume get_print_volume() const {
            return m_print_volume;
        }		
        grp_num get_grp_num() const {
            return m_grp_num;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        filter_id get_filter_id() const {
            return m_filter_id;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<markup_legs>& get_markup_legs_list() const {
            return m_markup_legs;
        }
        const markup_legs& get_markup_legs(const int i) const {
            return m_markup_legs.at(i);
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
        void set_srspread_id(const srspread_id& value)  {
            m_srspread_id = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_bid_price1(const bid_price1& value)  {
            m_bid_price1 = value;
        }
        void set_is_bid_price1_valid(const is_bid_price1_valid& value)  {
            m_is_bid_price1_valid = value;
        }
        void set_ask_price1(const ask_price1& value)  {
            m_ask_price1 = value;
        }
        void set_is_ask_price1_valid(const is_ask_price1_valid& value)  {
            m_is_ask_price1_valid = value;
        }
        void set_bid_size1(const bid_size1& value)  {
            m_bid_size1 = value;
        }
        void set_ask_size1(const ask_size1& value)  {
            m_ask_size1 = value;
        }
        void set_bid_mask1(const bid_mask1& value)  {
            m_bid_mask1 = value;
        }
        void set_ask_mask1(const ask_mask1& value)  {
            m_ask_mask1 = value;
        }
        void set_bid_exch1(const bid_exch1& value)  {
            m_bid_exch1 = value;
        }
        void set_ask_exch1(const ask_exch1& value)  {
            m_ask_exch1 = value;
        }
        void set_bid_time(const bid_time& value)  {
            m_bid_time = value;
        }
        void set_ask_time(const ask_time& value)  {
            m_ask_time = value;
        }
        void set_update_type(const update_type& value)  {
            m_update_type = value;
        }
        void set_num_stk_legs(const num_stk_legs& value)  {
            m_num_stk_legs = value;
        }
        void set_num_fut_legs(const num_fut_legs& value)  {
            m_num_fut_legs = value;
        }
        void set_num_opt_legs(const num_opt_legs& value)  {
            m_num_opt_legs = value;
        }
        void set_user_defined(const user_defined& value)  {
            m_user_defined = value;
        }
        void set_spread_class(const spread_class& value)  {
            m_spread_class = value;
        }
        void set_contains_hedge(const contains_hedge& value)  {
            m_contains_hedge = value;
        }
        void set_leg_bid_prc(const leg_bid_prc& value)  {
            m_leg_bid_prc = value;
        }
        void set_leg_ask_prc(const leg_ask_prc& value)  {
            m_leg_ask_prc = value;
        }
        void set_leg_bid_sz(const leg_bid_sz& value)  {
            m_leg_bid_sz = value;
        }
        void set_leg_ask_sz(const leg_ask_sz& value)  {
            m_leg_ask_sz = value;
        }
        void set_surf_prc(const surf_prc& value)  {
            m_surf_prc = value;
        }
        void set_surf_delta(const surf_delta& value)  {
            m_surf_delta = value;
        }
        void set_surf_gamma(const surf_gamma& value)  {
            m_surf_gamma = value;
        }
        void set_surf_vega(const surf_vega& value)  {
            m_surf_vega = value;
        }
        void set_surf_wt_vega(const surf_wt_vega& value)  {
            m_surf_wt_vega = value;
        }
        void set_surf_error(const surf_error& value)  {
            m_surf_error = value;
        }
        void set_min_expiry(const min_expiry& value)  {
            m_min_expiry = value;
        }
        void set_max_expiry(const max_expiry& value)  {
            m_max_expiry = value;
        }
        void set_min_years(const min_years& value)  {
            m_min_years = value;
        }
        void set_max_years(const max_years& value)  {
            m_max_years = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
        }
        void set_print_price(const print_price& value)  {
            m_print_price = value;
        }
        void set_print_time(const print_time& value)  {
            m_print_time = value;
        }
        void set_print_size(const print_size& value)  {
            m_print_size = value;
        }
        void set_print_volume(const print_volume& value)  {
            m_print_volume = value;
        }
        void set_grp_num(const grp_num& value)  {
            m_grp_num = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_filter_id(const filter_id& value)  {
            m_filter_id = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_markup_legs_list(const std::vector<markup_legs>& list)  {
            m_markup_legs = list;
        }
        void add_markup_legs(const markup_legs& item) {
            m_markup_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookMarkup::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const srspread_id & value) {
            set_srspread_id(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const bid_price1 & value) {
            set_bid_price1(value);
        }
        void set(const is_bid_price1_valid & value) {
            set_is_bid_price1_valid(value);
        }
        void set(const ask_price1 & value) {
            set_ask_price1(value);
        }
        void set(const is_ask_price1_valid & value) {
            set_is_ask_price1_valid(value);
        }
        void set(const bid_size1 & value) {
            set_bid_size1(value);
        }
        void set(const ask_size1 & value) {
            set_ask_size1(value);
        }
        void set(const bid_mask1 & value) {
            set_bid_mask1(value);
        }
        void set(const ask_mask1 & value) {
            set_ask_mask1(value);
        }
        void set(const bid_exch1 & value) {
            set_bid_exch1(value);
        }
        void set(const ask_exch1 & value) {
            set_ask_exch1(value);
        }
        void set(const bid_time & value) {
            set_bid_time(value);
        }
        void set(const ask_time & value) {
            set_ask_time(value);
        }
        void set(const update_type & value) {
            set_update_type(value);
        }
        void set(const num_stk_legs & value) {
            set_num_stk_legs(value);
        }
        void set(const num_fut_legs & value) {
            set_num_fut_legs(value);
        }
        void set(const num_opt_legs & value) {
            set_num_opt_legs(value);
        }
        void set(const user_defined & value) {
            set_user_defined(value);
        }
        void set(const spread_class & value) {
            set_spread_class(value);
        }
        void set(const contains_hedge & value) {
            set_contains_hedge(value);
        }
        void set(const leg_bid_prc & value) {
            set_leg_bid_prc(value);
        }
        void set(const leg_ask_prc & value) {
            set_leg_ask_prc(value);
        }
        void set(const leg_bid_sz & value) {
            set_leg_bid_sz(value);
        }
        void set(const leg_ask_sz & value) {
            set_leg_ask_sz(value);
        }
        void set(const surf_prc & value) {
            set_surf_prc(value);
        }
        void set(const surf_delta & value) {
            set_surf_delta(value);
        }
        void set(const surf_gamma & value) {
            set_surf_gamma(value);
        }
        void set(const surf_vega & value) {
            set_surf_vega(value);
        }
        void set(const surf_wt_vega & value) {
            set_surf_wt_vega(value);
        }
        void set(const surf_error & value) {
            set_surf_error(value);
        }
        void set(const min_expiry & value) {
            set_min_expiry(value);
        }
        void set(const max_expiry & value) {
            set_max_expiry(value);
        }
        void set(const min_years & value) {
            set_min_years(value);
        }
        void set(const max_years & value) {
            set_max_years(value);
        }
        void set(const ref_uprc & value) {
            set_ref_uprc(value);
        }
        void set(const print_price & value) {
            set_print_price(value);
        }
        void set(const print_time & value) {
            set_print_time(value);
        }
        void set(const print_size & value) {
            set_print_size(value);
        }
        void set(const print_volume & value) {
            set_print_volume(value);
        }
        void set(const grp_num & value) {
            set_grp_num(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const filter_id & value) {
            set_filter_id(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const markup_legs & value) {
            add_markup_legs(value);
        }

        void set(const SpreadBookMarkup & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_srspread_id);
            set(value.m_price_format);
            set(value.m_bid_price1);
            set(value.m_is_bid_price1_valid);
            set(value.m_ask_price1);
            set(value.m_is_ask_price1_valid);
            set(value.m_bid_size1);
            set(value.m_ask_size1);
            set(value.m_bid_mask1);
            set(value.m_ask_mask1);
            set(value.m_bid_exch1);
            set(value.m_ask_exch1);
            set(value.m_bid_time);
            set(value.m_ask_time);
            set(value.m_update_type);
            set(value.m_num_stk_legs);
            set(value.m_num_fut_legs);
            set(value.m_num_opt_legs);
            set(value.m_user_defined);
            set(value.m_spread_class);
            set(value.m_contains_hedge);
            set(value.m_leg_bid_prc);
            set(value.m_leg_ask_prc);
            set(value.m_leg_bid_sz);
            set(value.m_leg_ask_sz);
            set(value.m_surf_prc);
            set(value.m_surf_delta);
            set(value.m_surf_gamma);
            set(value.m_surf_vega);
            set(value.m_surf_wt_vega);
            set(value.m_surf_error);
            set(value.m_min_expiry);
            set(value.m_max_expiry);
            set(value.m_min_years);
            set(value.m_max_years);
            set(value.m_ref_uprc);
            set(value.m_print_price);
            set(value.m_print_time);
            set(value.m_print_size);
            set(value.m_print_volume);
            set(value.m_grp_num);
            set(value.m_security_desc);
            set(value.m_filter_id);
            set(value.m_timestamp);set_markup_legs_list(value.m_markup_legs);
        }

        SpreadBookMarkup() {
            m__meta.set_message_type("SpreadBookMarkup");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2895, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2895, length);
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
             *this = SpreadBookMarkup{};
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
        bool IncludeSrspreadId() const {
            return !(m_srspread_id == 0);
        }
        bool IncludeBidPrice1() const {
            return !(m_bid_price1 == 0.0);
        }
        bool IncludeAskPrice1() const {
            return !(m_ask_price1 == 0.0);
        }
        bool IncludeBidSize1() const {
            return !(m_bid_size1 == 0);
        }
        bool IncludeAskSize1() const {
            return !(m_ask_size1 == 0);
        }
        bool IncludeBidMask1() const {
            return !(m_bid_mask1 == 0);
        }
        bool IncludeAskMask1() const {
            return !(m_ask_mask1 == 0);
        }
        bool IncludeBidTime() const {
            return (m_bid_time.time_since_epoch().count() != 0);
        }
        bool IncludeAskTime() const {
            return (m_ask_time.time_since_epoch().count() != 0);
        }
        bool IncludeNumStkLegs() const {
            return !(m_num_stk_legs == 0);
        }
        bool IncludeNumFutLegs() const {
            return !(m_num_fut_legs == 0);
        }
        bool IncludeNumOptLegs() const {
            return !(m_num_opt_legs == 0);
        }
        bool IncludeLegBidPrc() const {
            return !(m_leg_bid_prc == 0.0);
        }
        bool IncludeLegAskPrc() const {
            return !(m_leg_ask_prc == 0.0);
        }
        bool IncludeLegBidSz() const {
            return !(m_leg_bid_sz == 0);
        }
        bool IncludeLegAskSz() const {
            return !(m_leg_ask_sz == 0);
        }
        bool IncludeSurfPrc() const {
            return !(m_surf_prc == 0.0);
        }
        bool IncludeSurfDelta() const {
            return !(m_surf_delta == 0.0);
        }
        bool IncludeSurfGamma() const {
            return !(m_surf_gamma == 0.0);
        }
        bool IncludeSurfVega() const {
            return !(m_surf_vega == 0.0);
        }
        bool IncludeSurfWtVega() const {
            return !(m_surf_wt_vega == 0.0);
        }
        bool IncludeSurfError() const {
            return !(m_surf_error == 0);
        }
        bool IncludeMinExpiry() const {
            return (m_min_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMaxExpiry() const {
            return (m_max_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMinYears() const {
            return !(m_min_years == 0.0);
        }
        bool IncludeMaxYears() const {
            return !(m_max_years == 0.0);
        }
        bool IncludeRefUprc() const {
            return !(m_ref_uprc == 0.0);
        }
        bool IncludePrintPrice() const {
            return !(m_print_price == 0.0);
        }
        bool IncludePrintTime() const {
            return (m_print_time.time_since_epoch().count() != 0);
        }
        bool IncludePrintSize() const {
            return !(m_print_size == 0);
        }
        bool IncludePrintVolume() const {
            return !(m_print_volume == 0);
        }
        bool IncludeGrpNum() const {
            return !(m_grp_num == 0);
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeFilterId() const {
            return !(m_filter_id == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeMarkupLegs() const {
            return (!m_markup_legs.empty());
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
            if ( IncludeSrspreadId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(298,m_srspread_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeBidPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_bid_price1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_bid_price1_valid)));
            if ( IncludeAskPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_ask_price1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_ask_price1_valid)));
            if ( IncludeBidSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_bid_size1);
            }
            if ( IncludeAskSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_ask_size1);
            }
            if ( IncludeBidMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(124,m_bid_mask1);
            }
            if ( IncludeAskMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(127,m_ask_mask1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_bid_exch1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_ask_exch1)));
            if ( IncludeBidTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_bid_time);
            }
            if ( IncludeAskTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_ask_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            if ( IncludeNumStkLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_num_stk_legs);
            }
            if ( IncludeNumFutLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_num_fut_legs);
            }
            if ( IncludeNumOptLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_num_opt_legs);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_defined)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(296,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(297,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            if ( IncludeLegBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_leg_bid_prc);
            }
            if ( IncludeLegAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(169,m_leg_ask_prc);
            }
            if ( IncludeLegBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_leg_bid_sz);
            }
            if ( IncludeLegAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_leg_ask_sz);
            }
            if ( IncludeSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_surf_prc);
            }
            if ( IncludeSurfDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_surf_delta);
            }
            if ( IncludeSurfGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_surf_gamma);
            }
            if ( IncludeSurfVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_surf_vega);
            }
            if ( IncludeSurfWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_surf_wt_vega);
            }
            if ( IncludeSurfError()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_surf_error);
            }
            if ( IncludeMinExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(196, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(199, m_max_expiry);
            }
            if ( IncludeMinYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_min_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_max_years);
            }
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_ref_uprc);
            }
            if ( IncludePrintPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_print_price);
            }
            if ( IncludePrintTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(214, m_print_time);
            }
            if ( IncludePrintSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_print_size);
            }
            if ( IncludePrintVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_print_volume);
            }
            if ( IncludeGrpNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(223,m_grp_num);
            }
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_security_desc);
            }
            if ( IncludeFilterId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(229,m_filter_id);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(232, m_timestamp);
            }
            if ( IncludeMarkupLegs()) {
                for (auto& item : m_markup_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(235, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeSrspreadId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,298,m_srspread_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeBidPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_bid_price1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_bid_price1_valid)));
            if ( IncludeAskPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_ask_price1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_ask_price1_valid)));
            if ( IncludeBidSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_bid_size1);
            }
            if ( IncludeAskSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_ask_size1);
            }
            if ( IncludeBidMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,124,m_bid_mask1);
            }
            if ( IncludeAskMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,127,m_ask_mask1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_bid_exch1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_ask_exch1)));
            if ( IncludeBidTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_bid_time);
            }
            if ( IncludeAskTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_ask_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            if ( IncludeNumStkLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_num_stk_legs);
            }
            if ( IncludeNumFutLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_num_fut_legs);
            }
            if ( IncludeNumOptLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_num_opt_legs);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_defined)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,296,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,297,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            if ( IncludeLegBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_leg_bid_prc);
            }
            if ( IncludeLegAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,169,m_leg_ask_prc);
            }
            if ( IncludeLegBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_leg_bid_sz);
            }
            if ( IncludeLegAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_leg_ask_sz);
            }
            if ( IncludeSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_surf_prc);
            }
            if ( IncludeSurfDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_surf_delta);
            }
            if ( IncludeSurfGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_surf_gamma);
            }
            if ( IncludeSurfVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_surf_vega);
            }
            if ( IncludeSurfWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_surf_wt_vega);
            }
            if ( IncludeSurfError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_surf_error);
            }
            if ( IncludeMinExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 196, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 199, m_max_expiry);
            }
            if ( IncludeMinYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_min_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_max_years);
            }
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_ref_uprc);
            }
            if ( IncludePrintPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_print_price);
            }
            if ( IncludePrintTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 214, m_print_time);
            }
            if ( IncludePrintSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_print_size);
            }
            if ( IncludePrintVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_print_volume);
            }
            if ( IncludeGrpNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,223,m_grp_num);
            }
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_security_desc));
            }
            if ( IncludeFilterId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,229,m_filter_id);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 232, m_timestamp);
            }
            if ( IncludeMarkupLegs()) {
                for (auto& item : m_markup_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 235, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 298: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_srspread_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_bid_price1_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_ask_price1_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_exch1 = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_exch1 = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_bid_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ask_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_update_type = static_cast<spiderrock::protobuf::api::UpdateType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_stk_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_fut_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_defined = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 296: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_class = static_cast<spiderrock::protobuf::api::ToolSpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 297: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_leg_bid_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_leg_ask_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_surf_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_surf_error = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_min_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_print_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_print_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_print_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_print_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_grp_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_filter_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            markup_legs item_markup_legs;
                            item_markup_legs.Decode(pos, pos+length);  
                            m_markup_legs.emplace_back(item_markup_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::_meta>() const { return SpreadBookMarkup::_meta{ m__meta}; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::pkey>() const { return SpreadBookMarkup::pkey{ m_pkey}; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ticker>() const { return SpreadBookMarkup::ticker{ m_ticker}; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::srspread_id>() const { return m_srspread_id; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::bid_price1>() const { return m_bid_price1; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::is_bid_price1_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_bid_price1_valid)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ask_price1>() const { return m_ask_price1; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::is_ask_price1_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_ask_price1_valid)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::bid_size1>() const { return m_bid_size1; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ask_size1>() const { return m_ask_size1; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::bid_mask1>() const { return m_bid_mask1; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ask_mask1>() const { return m_ask_mask1; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::bid_exch1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_bid_exch1)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ask_exch1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_ask_exch1)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::bid_time>() const { return m_bid_time; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ask_time>() const { return m_ask_time; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::update_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>( m_update_type)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::num_stk_legs>() const { return m_num_stk_legs; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::num_fut_legs>() const { return m_num_fut_legs; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::num_opt_legs>() const { return m_num_opt_legs; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::user_defined>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_defined)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>( m_spread_class)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::contains_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_hedge)); }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::leg_bid_prc>() const { return m_leg_bid_prc; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::leg_ask_prc>() const { return m_leg_ask_prc; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::leg_bid_sz>() const { return m_leg_bid_sz; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::leg_ask_sz>() const { return m_leg_ask_sz; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::surf_prc>() const { return m_surf_prc; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::surf_delta>() const { return m_surf_delta; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::surf_gamma>() const { return m_surf_gamma; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::surf_vega>() const { return m_surf_vega; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::surf_wt_vega>() const { return m_surf_wt_vega; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::surf_error>() const { return m_surf_error; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::min_expiry>() const { return m_min_expiry; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::max_expiry>() const { return m_max_expiry; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::min_years>() const { return m_min_years; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::max_years>() const { return m_max_years; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::print_price>() const { return m_print_price; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::print_time>() const { return m_print_time; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::print_size>() const { return m_print_size; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::print_volume>() const { return m_print_volume; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::grp_num>() const { return m_grp_num; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::security_desc>() const { return m_security_desc; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::filter_id>() const { return m_filter_id; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadBookMarkup::get<SpreadBookMarkup::markup_legs>(int i) const { return SpreadBookMarkup::markup_legs{ get_markup_legs(i)}; }
    template<> inline int SpreadBookMarkup::count<SpreadBookMarkup::markup_legs>() const { return static_cast<int>( m_markup_legs.size()); }
    template<> inline const auto SpreadBookMarkup_PKey::get<SpreadBookMarkup_PKey::skey>() const { return SpreadBookMarkup_PKey::skey{m_skey}; }
    template<> inline const auto SpreadBookMarkup_PKey::get<SpreadBookMarkup_PKey::is_test>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test));}
    
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_sec_key>() const { return SpreadBookMarkup_MarkupLegs::leg_sec_key{m_leg_sec_key}; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type));}
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_leg_price_format));}
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_security_desc>() const { return m_leg_security_desc; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side));}
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_ratio>() const { return m_leg_ratio; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_bid_price>() const { return m_leg_bid_price; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_bid_size>() const { return m_leg_bid_size; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_ask_price>() const { return m_leg_ask_price; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_ask_size>() const { return m_leg_ask_size; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_years>() const { return m_leg_years; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_uprc>() const { return m_leg_uprc; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_surf_vol>() const { return m_leg_surf_vol; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_surf_price>() const { return m_leg_surf_price; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_surf_de>() const { return m_leg_surf_de; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_surf_ga>() const { return m_leg_surf_ga; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_surf_ve>() const { return m_leg_surf_ve; }
    template<> inline const auto SpreadBookMarkup_MarkupLegs::get<SpreadBookMarkup_MarkupLegs::leg_surf_err>() const { return m_leg_surf_err; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadBookMarkup_PKey& m) {
        o << "\"skey\":{" << m.get<SpreadBookMarkup_PKey::skey>() << "}";
        o << ",\"is_test\":" << (int64_t)m.get<SpreadBookMarkup_PKey::is_test>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadBookMarkup_MarkupLegs& m) {
        o << "\"leg_sec_key\":{" << m.get<SpreadBookMarkup_MarkupLegs::leg_sec_key>() << "}";
        o << ",\"leg_sec_type\":" << (int64_t)m.get<SpreadBookMarkup_MarkupLegs::leg_sec_type>();
        o << ",\"leg_price_format\":" << (int64_t)m.get<SpreadBookMarkup_MarkupLegs::leg_price_format>();
        o << ",\"leg_security_desc\":\"" << m.get<SpreadBookMarkup_MarkupLegs::leg_security_desc>() << "\"";
        o << ",\"leg_side\":" << (int64_t)m.get<SpreadBookMarkup_MarkupLegs::leg_side>();
        o << ",\"leg_ratio\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_ratio>();
        o << ",\"leg_bid_price\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_bid_price>();
        o << ",\"leg_bid_size\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_bid_size>();
        o << ",\"leg_ask_price\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_ask_price>();
        o << ",\"leg_ask_size\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_ask_size>();
        o << ",\"leg_years\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_years>();
        o << ",\"leg_uprc\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_uprc>();
        o << ",\"leg_surf_vol\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_surf_vol>();
        o << ",\"leg_surf_price\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_surf_price>();
        o << ",\"leg_surf_de\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_surf_de>();
        o << ",\"leg_surf_ga\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_surf_ga>();
        o << ",\"leg_surf_ve\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_surf_ve>();
        o << ",\"leg_surf_err\":" << m.get<SpreadBookMarkup_MarkupLegs::leg_surf_err>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadBookMarkup& m) {
        o << "\"_meta\":{" << m.get<SpreadBookMarkup::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadBookMarkup::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpreadBookMarkup::ticker>() << "}";
        o << ",\"srspread_id\":" << m.get<SpreadBookMarkup::srspread_id>();
        o << ",\"price_format\":" << (int64_t)m.get<SpreadBookMarkup::price_format>();
        o << ",\"bid_price1\":" << m.get<SpreadBookMarkup::bid_price1>();
        o << ",\"is_bid_price1_valid\":" << (int64_t)m.get<SpreadBookMarkup::is_bid_price1_valid>();
        o << ",\"ask_price1\":" << m.get<SpreadBookMarkup::ask_price1>();
        o << ",\"is_ask_price1_valid\":" << (int64_t)m.get<SpreadBookMarkup::is_ask_price1_valid>();
        o << ",\"bid_size1\":" << m.get<SpreadBookMarkup::bid_size1>();
        o << ",\"ask_size1\":" << m.get<SpreadBookMarkup::ask_size1>();
        o << ",\"bid_mask1\":" << m.get<SpreadBookMarkup::bid_mask1>();
        o << ",\"ask_mask1\":" << m.get<SpreadBookMarkup::ask_mask1>();
        o << ",\"bid_exch1\":" << (int64_t)m.get<SpreadBookMarkup::bid_exch1>();
        o << ",\"ask_exch1\":" << (int64_t)m.get<SpreadBookMarkup::ask_exch1>();
        {
            std::time_t tt = m.get<SpreadBookMarkup::bid_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"bid_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpreadBookMarkup::ask_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ask_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"update_type\":" << (int64_t)m.get<SpreadBookMarkup::update_type>();
        o << ",\"num_stk_legs\":" << m.get<SpreadBookMarkup::num_stk_legs>();
        o << ",\"num_fut_legs\":" << m.get<SpreadBookMarkup::num_fut_legs>();
        o << ",\"num_opt_legs\":" << m.get<SpreadBookMarkup::num_opt_legs>();
        o << ",\"user_defined\":" << (int64_t)m.get<SpreadBookMarkup::user_defined>();
        o << ",\"spread_class\":" << (int64_t)m.get<SpreadBookMarkup::spread_class>();
        o << ",\"contains_hedge\":" << (int64_t)m.get<SpreadBookMarkup::contains_hedge>();
        o << ",\"leg_bid_prc\":" << m.get<SpreadBookMarkup::leg_bid_prc>();
        o << ",\"leg_ask_prc\":" << m.get<SpreadBookMarkup::leg_ask_prc>();
        o << ",\"leg_bid_sz\":" << m.get<SpreadBookMarkup::leg_bid_sz>();
        o << ",\"leg_ask_sz\":" << m.get<SpreadBookMarkup::leg_ask_sz>();
        o << ",\"surf_prc\":" << m.get<SpreadBookMarkup::surf_prc>();
        o << ",\"surf_delta\":" << m.get<SpreadBookMarkup::surf_delta>();
        o << ",\"surf_gamma\":" << m.get<SpreadBookMarkup::surf_gamma>();
        o << ",\"surf_vega\":" << m.get<SpreadBookMarkup::surf_vega>();
        o << ",\"surf_wt_vega\":" << m.get<SpreadBookMarkup::surf_wt_vega>();
        o << ",\"surf_error\":" << m.get<SpreadBookMarkup::surf_error>();
        {
            std::time_t tt = m.get<SpreadBookMarkup::min_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"min_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpreadBookMarkup::max_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"min_years\":" << m.get<SpreadBookMarkup::min_years>();
        o << ",\"max_years\":" << m.get<SpreadBookMarkup::max_years>();
        o << ",\"ref_uprc\":" << m.get<SpreadBookMarkup::ref_uprc>();
        o << ",\"print_price\":" << m.get<SpreadBookMarkup::print_price>();
        {
            std::time_t tt = m.get<SpreadBookMarkup::print_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"print_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"print_size\":" << m.get<SpreadBookMarkup::print_size>();
        o << ",\"print_volume\":" << m.get<SpreadBookMarkup::print_volume>();
        o << ",\"grp_num\":" << m.get<SpreadBookMarkup::grp_num>();
        o << ",\"security_desc\":\"" << m.get<SpreadBookMarkup::security_desc>() << "\"";
        o << ",\"filter_id\":" << m.get<SpreadBookMarkup::filter_id>();
        {
            std::time_t tt = m.get<SpreadBookMarkup::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"markup_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpreadBookMarkup::markup_legs>(); ++i) {
                o << delim << m.get<SpreadBookMarkup::markup_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}