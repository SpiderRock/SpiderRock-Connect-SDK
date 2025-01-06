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

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _rfq_source__GUARD__
    #define _rfq_source__GUARD__
    DECL_STRONG_TYPE(rfq_source, spiderrock::protobuf::api::RFQSourceType);
    #endif//_rfq_source__GUARD__

    #ifndef _rfq_strategy__GUARD__
    #define _rfq_strategy__GUARD__
    DECL_STRONG_TYPE(rfq_strategy, spiderrock::protobuf::api::SpreadStrategy);
    #endif//_rfq_strategy__GUARD__

    #ifndef _is_covered_strategy__GUARD__
    #define _is_covered_strategy__GUARD__
    DECL_STRONG_TYPE(is_covered_strategy, spiderrock::protobuf::api::YesNo);
    #endif//_is_covered_strategy__GUARD__

    #ifndef _is_tradeable__GUARD__
    #define _is_tradeable__GUARD__
    DECL_STRONG_TYPE(is_tradeable, spiderrock::protobuf::api::YesNo);
    #endif//_is_tradeable__GUARD__

    #ifndef _rfq_bid_price__GUARD__
    #define _rfq_bid_price__GUARD__
    DECL_STRONG_TYPE(rfq_bid_price, double);
    #endif//_rfq_bid_price__GUARD__

    #ifndef _rfq_bid_quan__GUARD__
    #define _rfq_bid_quan__GUARD__
    DECL_STRONG_TYPE(rfq_bid_quan, int32);
    #endif//_rfq_bid_quan__GUARD__

    #ifndef _rfq_ask_price__GUARD__
    #define _rfq_ask_price__GUARD__
    DECL_STRONG_TYPE(rfq_ask_price, double);
    #endif//_rfq_ask_price__GUARD__

    #ifndef _rfq_ask_quan__GUARD__
    #define _rfq_ask_quan__GUARD__
    DECL_STRONG_TYPE(rfq_ask_quan, int32);
    #endif//_rfq_ask_quan__GUARD__

    #ifndef _rfq_prt_price__GUARD__
    #define _rfq_prt_price__GUARD__
    DECL_STRONG_TYPE(rfq_prt_price, double);
    #endif//_rfq_prt_price__GUARD__

    #ifndef _rfq_prt_size__GUARD__
    #define _rfq_prt_size__GUARD__
    DECL_STRONG_TYPE(rfq_prt_size, int32);
    #endif//_rfq_prt_size__GUARD__

    #ifndef _rfq_prt_volume__GUARD__
    #define _rfq_prt_volume__GUARD__
    DECL_STRONG_TYPE(rfq_prt_volume, int32);
    #endif//_rfq_prt_volume__GUARD__

    #ifndef _rfq_prt_time__GUARD__
    #define _rfq_prt_time__GUARD__
    DECL_STRONG_TYPE(rfq_prt_time, int64);
    #endif//_rfq_prt_time__GUARD__

    #ifndef _bid_price__double__GUARD__
    #define _bid_price__double__GUARD__
    DECL_STRONG_TYPE(bid_price__double, double);
    #endif//_bid_price__double__GUARD__

    #ifndef _bid_quan__GUARD__
    #define _bid_quan__GUARD__
    DECL_STRONG_TYPE(bid_quan, int32);
    #endif//_bid_quan__GUARD__

    #ifndef _ask_price__double__GUARD__
    #define _ask_price__double__GUARD__
    DECL_STRONG_TYPE(ask_price__double, double);
    #endif//_ask_price__double__GUARD__

    #ifndef _ask_quan__GUARD__
    #define _ask_quan__GUARD__
    DECL_STRONG_TYPE(ask_quan, int32);
    #endif//_ask_quan__GUARD__

    #ifndef _surf_delta__GUARD__
    #define _surf_delta__GUARD__
    DECL_STRONG_TYPE(surf_delta, float);
    #endif//_surf_delta__GUARD__

    #ifndef _surf_vega__GUARD__
    #define _surf_vega__GUARD__
    DECL_STRONG_TYPE(surf_vega, float);
    #endif//_surf_vega__GUARD__

    #ifndef _surf_price__float__GUARD__
    #define _surf_price__float__GUARD__
    DECL_STRONG_TYPE(surf_price__float, float);
    #endif//_surf_price__float__GUARD__

    #ifndef _theo_price__GUARD__
    #define _theo_price__GUARD__
    DECL_STRONG_TYPE(theo_price, float);
    #endif//_theo_price__GUARD__

    #ifndef _theo_price_lo__GUARD__
    #define _theo_price_lo__GUARD__
    DECL_STRONG_TYPE(theo_price_lo, float);
    #endif//_theo_price_lo__GUARD__

    #ifndef _theo_price_hi__GUARD__
    #define _theo_price_hi__GUARD__
    DECL_STRONG_TYPE(theo_price_hi, float);
    #endif//_theo_price_hi__GUARD__

    #ifndef _min_uprc__double__GUARD__
    #define _min_uprc__double__GUARD__
    DECL_STRONG_TYPE(min_uprc__double, double);
    #endif//_min_uprc__double__GUARD__

    #ifndef _max_uprc__GUARD__
    #define _max_uprc__GUARD__
    DECL_STRONG_TYPE(max_uprc, double);
    #endif//_max_uprc__GUARD__

    #ifndef _min_years__GUARD__
    #define _min_years__GUARD__
    DECL_STRONG_TYPE(min_years, float);
    #endif//_min_years__GUARD__

    #ifndef _max_years__float__GUARD__
    #define _max_years__float__GUARD__
    DECL_STRONG_TYPE(max_years__float, float);
    #endif//_max_years__float__GUARD__

    #ifndef _leg_sec_types__GUARD__
    #define _leg_sec_types__GUARD__
    DECL_STRONG_TYPE(leg_sec_types, spiderrock::protobuf::api::LegSecType);
    #endif//_leg_sec_types__GUARD__

    #ifndef _exchange__string__GUARD__
    #define _exchange__string__GUARD__
    DECL_STRONG_TYPE(exchange__string, string);
    #endif//_exchange__string__GUARD__

    #ifndef _grp_num__GUARD__
    #define _grp_num__GUARD__
    DECL_STRONG_TYPE(grp_num, int32);
    #endif//_grp_num__GUARD__

    #ifndef _sector__GUARD__
    #define _sector__GUARD__
    DECL_STRONG_TYPE(sector, string);
    #endif//_sector__GUARD__

    #ifndef _risk_class__GUARD__
    #define _risk_class__GUARD__
    DECL_STRONG_TYPE(risk_class, string);
    #endif//_risk_class__GUARD__

    #ifndef _opt_status__GUARD__
    #define _opt_status__GUARD__
    DECL_STRONG_TYPE(opt_status, spiderrock::protobuf::api::OptStatus);
    #endif//_opt_status__GUARD__

    #ifndef _pos_vega__GUARD__
    #define _pos_vega__GUARD__
    DECL_STRONG_TYPE(pos_vega, float);
    #endif//_pos_vega__GUARD__

    #ifndef _pos_gamma__GUARD__
    #define _pos_gamma__GUARD__
    DECL_STRONG_TYPE(pos_gamma, float);
    #endif//_pos_gamma__GUARD__

    #ifndef _pos_theta__GUARD__
    #define _pos_theta__GUARD__
    DECL_STRONG_TYPE(pos_theta, float);
    #endif//_pos_theta__GUARD__

    #ifndef _pos_delta__GUARD__
    #define _pos_delta__GUARD__
    DECL_STRONG_TYPE(pos_delta, float);
    #endif//_pos_delta__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _filter_id__GUARD__
    #define _filter_id__GUARD__
    DECL_STRONG_TYPE(filter_id, int64);
    #endif//_filter_id__GUARD__

    #ifndef _num_legs__GUARD__
    #define _num_legs__GUARD__
    DECL_STRONG_TYPE(num_legs, int32);
    #endif//_num_legs__GUARD__

    #ifndef _security_id__int64__GUARD__
    #define _security_id__int64__GUARD__
    DECL_STRONG_TYPE(security_id__int64, int64);
    #endif//_security_id__int64__GUARD__

    #ifndef _exch_source__GUARD__
    #define _exch_source__GUARD__
    DECL_STRONG_TYPE(exch_source, spiderrock::protobuf::api::ExchSource);
    #endif//_exch_source__GUARD__

    #ifndef _leg_key__GUARD__
    #define _leg_key__GUARD__
    DECL_STRONG_TYPE(leg_key, OptionKey);
    #endif//_leg_key__GUARD__

    #ifndef _leg_key_type__GUARD__
    #define _leg_key_type__GUARD__
    DECL_STRONG_TYPE(leg_key_type, spiderrock::protobuf::api::LegKeyType);
    #endif//_leg_key_type__GUARD__

    #ifndef _leg_security_id__GUARD__
    #define _leg_security_id__GUARD__
    DECL_STRONG_TYPE(leg_security_id, int64);
    #endif//_leg_security_id__GUARD__

    #ifndef _leg_parent_sec_id__GUARD__
    #define _leg_parent_sec_id__GUARD__
    DECL_STRONG_TYPE(leg_parent_sec_id, int64);
    #endif//_leg_parent_sec_id__GUARD__

    #ifndef _leg_security_desc__GUARD__
    #define _leg_security_desc__GUARD__
    DECL_STRONG_TYPE(leg_security_desc, string);
    #endif//_leg_security_desc__GUARD__

    #ifndef _leg_ratio__GUARD__
    #define _leg_ratio__GUARD__
    DECL_STRONG_TYPE(leg_ratio, uint32);
    #endif//_leg_ratio__GUARD__

    #ifndef _leg_side__GUARD__
    #define _leg_side__GUARD__
    DECL_STRONG_TYPE(leg_side, spiderrock::protobuf::api::BuySell);
    #endif//_leg_side__GUARD__

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

    #ifndef _leg_opt_mult__GUARD__
    #define _leg_opt_mult__GUARD__
    DECL_STRONG_TYPE(leg_opt_mult, float);
    #endif//_leg_opt_mult__GUARD__

    #ifndef _leg_fut_mult__GUARD__
    #define _leg_fut_mult__GUARD__
    DECL_STRONG_TYPE(leg_fut_mult, float);
    #endif//_leg_fut_mult__GUARD__

    #ifndef _leg_surf_vol__GUARD__
    #define _leg_surf_vol__GUARD__
    DECL_STRONG_TYPE(leg_surf_vol, float);
    #endif//_leg_surf_vol__GUARD__

    #ifndef _leg_surf_de__GUARD__
    #define _leg_surf_de__GUARD__
    DECL_STRONG_TYPE(leg_surf_de, float);
    #endif//_leg_surf_de__GUARD__

    #ifndef _leg_surf_ve__GUARD__
    #define _leg_surf_ve__GUARD__
    DECL_STRONG_TYPE(leg_surf_ve, float);
    #endif//_leg_surf_ve__GUARD__

    #ifndef _leg_surf_price__GUARD__
    #define _leg_surf_price__GUARD__
    DECL_STRONG_TYPE(leg_surf_price, float);
    #endif//_leg_surf_price__GUARD__

    #ifndef _leg_theo_price__GUARD__
    #define _leg_theo_price__GUARD__
    DECL_STRONG_TYPE(leg_theo_price, float);
    #endif//_leg_theo_price__GUARD__

    #ifndef _leg_theo_prc_b__GUARD__
    #define _leg_theo_prc_b__GUARD__
    DECL_STRONG_TYPE(leg_theo_prc_b, float);
    #endif//_leg_theo_prc_b__GUARD__

    #ifndef _leg_theo_prc_s__GUARD__
    #define _leg_theo_prc_s__GUARD__
    DECL_STRONG_TYPE(leg_theo_prc_s, float);
    #endif//_leg_theo_prc_s__GUARD__

    
    class RFQQuoteBroadcast_PKey {
        public:
        //using statements for all types used in this class
        using security_id = spiderrock::protobuf::api::security_id__int64;
        using exch_source = spiderrock::protobuf::api::exch_source;

        private:
        security_id m_security_id{};
        exch_source m_exch_source{};

        public:
        security_id get_security_id() const {
            return m_security_id;
        }
        exch_source get_exch_source() const {
            return m_exch_source;
        }
        void set_security_id(const security_id& value)  {
            m_security_id = value;
        }
        void set_exch_source(const exch_source& value)  {
            m_exch_source = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const security_id & value) { set_security_id(value); }
        void set(const exch_source & value) { set_exch_source(value); }


        RFQQuoteBroadcast_PKey() {}

        virtual ~RFQQuoteBroadcast_PKey() {
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
        bool IncludeSecurityId() const {
            return !(m_security_id == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecurityId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_security_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchSource>(m_exch_source)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecurityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_security_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchSource>(m_exch_source)));
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
                    case 10: {m_security_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_exch_source = static_cast<spiderrock::protobuf::api::ExchSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class RFQQuoteBroadcast_QuoteLegs {
        public:
        //using statements for all types used in this class
        using leg_key = spiderrock::protobuf::api::leg_key;
        using leg_key_type = spiderrock::protobuf::api::leg_key_type;
        using leg_security_id = spiderrock::protobuf::api::leg_security_id;
        using leg_parent_sec_id = spiderrock::protobuf::api::leg_parent_sec_id;
        using leg_security_desc = spiderrock::protobuf::api::leg_security_desc;
        using leg_ratio = spiderrock::protobuf::api::leg_ratio;
        using leg_side = spiderrock::protobuf::api::leg_side;
        using leg_bid_price = spiderrock::protobuf::api::leg_bid_price;
        using leg_bid_size = spiderrock::protobuf::api::leg_bid_size;
        using leg_ask_price = spiderrock::protobuf::api::leg_ask_price;
        using leg_ask_size = spiderrock::protobuf::api::leg_ask_size;
        using leg_years = spiderrock::protobuf::api::leg_years;
        using leg_uprc = spiderrock::protobuf::api::leg_uprc;
        using leg_opt_mult = spiderrock::protobuf::api::leg_opt_mult;
        using leg_fut_mult = spiderrock::protobuf::api::leg_fut_mult;
        using leg_surf_vol = spiderrock::protobuf::api::leg_surf_vol;
        using leg_surf_de = spiderrock::protobuf::api::leg_surf_de;
        using leg_surf_ve = spiderrock::protobuf::api::leg_surf_ve;
        using leg_surf_price = spiderrock::protobuf::api::leg_surf_price;
        using leg_theo_price = spiderrock::protobuf::api::leg_theo_price;
        using leg_theo_prc_b = spiderrock::protobuf::api::leg_theo_prc_b;
        using leg_theo_prc_s = spiderrock::protobuf::api::leg_theo_prc_s;

        private:
        leg_key m_leg_key{};
        leg_key_type m_leg_key_type{};
        leg_security_id m_leg_security_id{};
        leg_parent_sec_id m_leg_parent_sec_id{};
        leg_security_desc m_leg_security_desc{};
        leg_ratio m_leg_ratio{};
        leg_side m_leg_side{};
        leg_bid_price m_leg_bid_price{};
        leg_bid_size m_leg_bid_size{};
        leg_ask_price m_leg_ask_price{};
        leg_ask_size m_leg_ask_size{};
        leg_years m_leg_years{};
        leg_uprc m_leg_uprc{};
        leg_opt_mult m_leg_opt_mult{};
        leg_fut_mult m_leg_fut_mult{};
        leg_surf_vol m_leg_surf_vol{};
        leg_surf_de m_leg_surf_de{};
        leg_surf_ve m_leg_surf_ve{};
        leg_surf_price m_leg_surf_price{};
        leg_theo_price m_leg_theo_price{};
        leg_theo_prc_b m_leg_theo_prc_b{};
        leg_theo_prc_s m_leg_theo_prc_s{};

        public:
		leg_key get_leg_key() const {
            return m_leg_key;
        }
        leg_key_type get_leg_key_type() const {
            return m_leg_key_type;
        }
        leg_security_id get_leg_security_id() const {
            return m_leg_security_id;
        }
        leg_parent_sec_id get_leg_parent_sec_id() const {
            return m_leg_parent_sec_id;
        }
        leg_security_desc get_leg_security_desc() const {
            return m_leg_security_desc;
        }
        leg_ratio get_leg_ratio() const {
            return m_leg_ratio;
        }
        leg_side get_leg_side() const {
            return m_leg_side;
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
        leg_opt_mult get_leg_opt_mult() const {
            return m_leg_opt_mult;
        }
        leg_fut_mult get_leg_fut_mult() const {
            return m_leg_fut_mult;
        }
        leg_surf_vol get_leg_surf_vol() const {
            return m_leg_surf_vol;
        }
        leg_surf_de get_leg_surf_de() const {
            return m_leg_surf_de;
        }
        leg_surf_ve get_leg_surf_ve() const {
            return m_leg_surf_ve;
        }
        leg_surf_price get_leg_surf_price() const {
            return m_leg_surf_price;
        }
        leg_theo_price get_leg_theo_price() const {
            return m_leg_theo_price;
        }
        leg_theo_prc_b get_leg_theo_prc_b() const {
            return m_leg_theo_prc_b;
        }
        leg_theo_prc_s get_leg_theo_prc_s() const {
            return m_leg_theo_prc_s;
        }
        void set_leg_key(const leg_key& value)  {
            m_leg_key = value;
        }
        void set_leg_key_type(const leg_key_type& value)  {
            m_leg_key_type = value;
        }
        void set_leg_security_id(const leg_security_id& value)  {
            m_leg_security_id = value;
        }
        void set_leg_parent_sec_id(const leg_parent_sec_id& value)  {
            m_leg_parent_sec_id = value;
        }
        void set_leg_security_desc(const leg_security_desc& value)  {
            m_leg_security_desc = value;
        }
        void set_leg_ratio(const leg_ratio& value)  {
            m_leg_ratio = value;
        }
        void set_leg_side(const leg_side& value)  {
            m_leg_side = value;
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
        void set_leg_opt_mult(const leg_opt_mult& value)  {
            m_leg_opt_mult = value;
        }
        void set_leg_fut_mult(const leg_fut_mult& value)  {
            m_leg_fut_mult = value;
        }
        void set_leg_surf_vol(const leg_surf_vol& value)  {
            m_leg_surf_vol = value;
        }
        void set_leg_surf_de(const leg_surf_de& value)  {
            m_leg_surf_de = value;
        }
        void set_leg_surf_ve(const leg_surf_ve& value)  {
            m_leg_surf_ve = value;
        }
        void set_leg_surf_price(const leg_surf_price& value)  {
            m_leg_surf_price = value;
        }
        void set_leg_theo_price(const leg_theo_price& value)  {
            m_leg_theo_price = value;
        }
        void set_leg_theo_prc_b(const leg_theo_prc_b& value)  {
            m_leg_theo_prc_b = value;
        }
        void set_leg_theo_prc_s(const leg_theo_prc_s& value)  {
            m_leg_theo_prc_s = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast_QuoteLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast_QuoteLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_key & value) { set_leg_key(value); }
        void set(const leg_key_type & value) { set_leg_key_type(value); }
        void set(const leg_security_id & value) { set_leg_security_id(value); }
        void set(const leg_parent_sec_id & value) { set_leg_parent_sec_id(value); }
        void set(const leg_security_desc & value) { set_leg_security_desc(value); }
        void set(const leg_ratio & value) { set_leg_ratio(value); }
        void set(const leg_side & value) { set_leg_side(value); }
        void set(const leg_bid_price & value) { set_leg_bid_price(value); }
        void set(const leg_bid_size & value) { set_leg_bid_size(value); }
        void set(const leg_ask_price & value) { set_leg_ask_price(value); }
        void set(const leg_ask_size & value) { set_leg_ask_size(value); }
        void set(const leg_years & value) { set_leg_years(value); }
        void set(const leg_uprc & value) { set_leg_uprc(value); }
        void set(const leg_opt_mult & value) { set_leg_opt_mult(value); }
        void set(const leg_fut_mult & value) { set_leg_fut_mult(value); }
        void set(const leg_surf_vol & value) { set_leg_surf_vol(value); }
        void set(const leg_surf_de & value) { set_leg_surf_de(value); }
        void set(const leg_surf_ve & value) { set_leg_surf_ve(value); }
        void set(const leg_surf_price & value) { set_leg_surf_price(value); }
        void set(const leg_theo_price & value) { set_leg_theo_price(value); }
        void set(const leg_theo_prc_b & value) { set_leg_theo_prc_b(value); }
        void set(const leg_theo_prc_s & value) { set_leg_theo_prc_s(value); }


        RFQQuoteBroadcast_QuoteLegs() {}

        virtual ~RFQQuoteBroadcast_QuoteLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_leg_key;
            m_leg_key.setCodecOptionKey(optionKeyLayout_leg_key);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(226,optionKeyLayout_leg_key);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegKeyType>(m_leg_key_type)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(232,m_leg_security_id);
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(235,m_leg_parent_sec_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(238,m_leg_security_desc);
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(241,m_leg_ratio);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(247,m_leg_bid_price);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(250,m_leg_bid_size);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(253,m_leg_ask_price);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(256,m_leg_ask_size);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_leg_years);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(262,m_leg_uprc);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_leg_opt_mult);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_leg_fut_mult);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_leg_surf_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_leg_surf_de);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_leg_surf_ve);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_leg_surf_price);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_leg_theo_price);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_leg_theo_prc_b);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_leg_theo_prc_s);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_leg_key;
            m_leg_key.setCodecOptionKey(optionKeyLayout_leg_key);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 226, optionKeyLayout_leg_key);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegKeyType>(m_leg_key_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,232,m_leg_security_id);
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,235,m_leg_parent_sec_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,238,static_cast<string>(m_leg_security_desc));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,241,m_leg_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,247,m_leg_bid_price);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,250,m_leg_bid_size);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,253,m_leg_ask_price);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,256,m_leg_ask_size);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_leg_years);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,262,m_leg_uprc);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_leg_opt_mult);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_leg_fut_mult);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_leg_surf_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_leg_surf_de);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_leg_surf_ve);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_leg_surf_price);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_leg_theo_price);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_leg_theo_prc_b);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_leg_theo_prc_s);
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
                    case 226: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_leg_key.setFromCodec(optionKey);
                        break;
                    }
                    case 229: {m_leg_key_type = static_cast<spiderrock::protobuf::api::LegKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 232: {m_leg_security_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 235: {m_leg_parent_sec_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 238: {m_leg_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 241: {m_leg_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 244: {m_leg_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 247: {m_leg_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 250: {m_leg_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 253: {m_leg_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 256: {m_leg_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 259: {m_leg_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 262: {m_leg_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 265: {m_leg_opt_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 268: {m_leg_fut_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 271: {m_leg_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 274: {m_leg_surf_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 277: {m_leg_surf_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 280: {m_leg_surf_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 283: {m_leg_theo_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 286: {m_leg_theo_prc_b = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 289: {m_leg_theo_prc_s = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RFQQuoteBroadcast {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RFQQuoteBroadcast_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using rfq_source = spiderrock::protobuf::api::rfq_source;
        using rfq_strategy = spiderrock::protobuf::api::rfq_strategy;
        using is_covered_strategy = spiderrock::protobuf::api::is_covered_strategy;
        using is_tradeable = spiderrock::protobuf::api::is_tradeable;
        using rfq_bid_price = spiderrock::protobuf::api::rfq_bid_price;
        using rfq_bid_quan = spiderrock::protobuf::api::rfq_bid_quan;
        using rfq_ask_price = spiderrock::protobuf::api::rfq_ask_price;
        using rfq_ask_quan = spiderrock::protobuf::api::rfq_ask_quan;
        using rfq_prt_price = spiderrock::protobuf::api::rfq_prt_price;
        using rfq_prt_size = spiderrock::protobuf::api::rfq_prt_size;
        using rfq_prt_volume = spiderrock::protobuf::api::rfq_prt_volume;
        using rfq_prt_time = spiderrock::protobuf::api::rfq_prt_time;
        using bid_price = spiderrock::protobuf::api::bid_price__double;
        using bid_quan = spiderrock::protobuf::api::bid_quan;
        using ask_price = spiderrock::protobuf::api::ask_price__double;
        using ask_quan = spiderrock::protobuf::api::ask_quan;
        using surf_delta = spiderrock::protobuf::api::surf_delta;
        using surf_vega = spiderrock::protobuf::api::surf_vega;
        using surf_price = spiderrock::protobuf::api::surf_price__float;
        using theo_price = spiderrock::protobuf::api::theo_price;
        using theo_price_lo = spiderrock::protobuf::api::theo_price_lo;
        using theo_price_hi = spiderrock::protobuf::api::theo_price_hi;
        using min_uprc = spiderrock::protobuf::api::min_uprc__double;
        using max_uprc = spiderrock::protobuf::api::max_uprc;
        using min_years = spiderrock::protobuf::api::min_years;
        using max_years = spiderrock::protobuf::api::max_years__float;
        using leg_sec_types = spiderrock::protobuf::api::leg_sec_types;
        using exchange = spiderrock::protobuf::api::exchange__string;
        using grp_num = spiderrock::protobuf::api::grp_num;
        using sector = spiderrock::protobuf::api::sector;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using opt_status = spiderrock::protobuf::api::opt_status;
        using pos_vega = spiderrock::protobuf::api::pos_vega;
        using pos_gamma = spiderrock::protobuf::api::pos_gamma;
        using pos_theta = spiderrock::protobuf::api::pos_theta;
        using pos_delta = spiderrock::protobuf::api::pos_delta;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using filter_id = spiderrock::protobuf::api::filter_id;
        using num_legs = spiderrock::protobuf::api::num_legs;
        using quote_legs = spiderrock::protobuf::api::RFQQuoteBroadcast_QuoteLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        security_desc m_security_desc{};
        rfq_source m_rfq_source{};
        rfq_strategy m_rfq_strategy{};
        is_covered_strategy m_is_covered_strategy{};
        is_tradeable m_is_tradeable{};
        rfq_bid_price m_rfq_bid_price{};
        rfq_bid_quan m_rfq_bid_quan{};
        rfq_ask_price m_rfq_ask_price{};
        rfq_ask_quan m_rfq_ask_quan{};
        rfq_prt_price m_rfq_prt_price{};
        rfq_prt_size m_rfq_prt_size{};
        rfq_prt_volume m_rfq_prt_volume{};
        rfq_prt_time m_rfq_prt_time{};
        bid_price m_bid_price{};
        bid_quan m_bid_quan{};
        ask_price m_ask_price{};
        ask_quan m_ask_quan{};
        surf_delta m_surf_delta{};
        surf_vega m_surf_vega{};
        surf_price m_surf_price{};
        theo_price m_theo_price{};
        theo_price_lo m_theo_price_lo{};
        theo_price_hi m_theo_price_hi{};
        min_uprc m_min_uprc{};
        max_uprc m_max_uprc{};
        min_years m_min_years{};
        max_years m_max_years{};
        leg_sec_types m_leg_sec_types{};
        exchange m_exchange{};
        grp_num m_grp_num{};
        sector m_sector{};
        risk_class m_risk_class{};
        opt_status m_opt_status{};
        pos_vega m_pos_vega{};
        pos_gamma m_pos_gamma{};
        pos_theta m_pos_theta{};
        pos_delta m_pos_delta{};
        net_timestamp m_net_timestamp{};
        filter_id m_filter_id{};
        num_legs m_num_legs{};
        std::vector<quote_legs> m_quote_legs{};

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
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        rfq_source get_rfq_source() const {
            return m_rfq_source;
        }		
        rfq_strategy get_rfq_strategy() const {
            return m_rfq_strategy;
        }		
        is_covered_strategy get_is_covered_strategy() const {
            return m_is_covered_strategy;
        }		
        is_tradeable get_is_tradeable() const {
            return m_is_tradeable;
        }		
        rfq_bid_price get_rfq_bid_price() const {
            return m_rfq_bid_price;
        }		
        rfq_bid_quan get_rfq_bid_quan() const {
            return m_rfq_bid_quan;
        }		
        rfq_ask_price get_rfq_ask_price() const {
            return m_rfq_ask_price;
        }		
        rfq_ask_quan get_rfq_ask_quan() const {
            return m_rfq_ask_quan;
        }		
        rfq_prt_price get_rfq_prt_price() const {
            return m_rfq_prt_price;
        }		
        rfq_prt_size get_rfq_prt_size() const {
            return m_rfq_prt_size;
        }		
        rfq_prt_volume get_rfq_prt_volume() const {
            return m_rfq_prt_volume;
        }		
        rfq_prt_time get_rfq_prt_time() const {
            return m_rfq_prt_time;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        bid_quan get_bid_quan() const {
            return m_bid_quan;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        ask_quan get_ask_quan() const {
            return m_ask_quan;
        }		
        surf_delta get_surf_delta() const {
            return m_surf_delta;
        }		
        surf_vega get_surf_vega() const {
            return m_surf_vega;
        }		
        surf_price get_surf_price() const {
            return m_surf_price;
        }		
        theo_price get_theo_price() const {
            return m_theo_price;
        }		
        theo_price_lo get_theo_price_lo() const {
            return m_theo_price_lo;
        }		
        theo_price_hi get_theo_price_hi() const {
            return m_theo_price_hi;
        }		
        min_uprc get_min_uprc() const {
            return m_min_uprc;
        }		
        max_uprc get_max_uprc() const {
            return m_max_uprc;
        }		
        min_years get_min_years() const {
            return m_min_years;
        }		
        max_years get_max_years() const {
            return m_max_years;
        }		
        leg_sec_types get_leg_sec_types() const {
            return m_leg_sec_types;
        }		
        exchange get_exchange() const {
            return m_exchange;
        }		
        grp_num get_grp_num() const {
            return m_grp_num;
        }		
        sector get_sector() const {
            return m_sector;
        }		
        risk_class get_risk_class() const {
            return m_risk_class;
        }		
        opt_status get_opt_status() const {
            return m_opt_status;
        }		
        pos_vega get_pos_vega() const {
            return m_pos_vega;
        }		
        pos_gamma get_pos_gamma() const {
            return m_pos_gamma;
        }		
        pos_theta get_pos_theta() const {
            return m_pos_theta;
        }		
        pos_delta get_pos_delta() const {
            return m_pos_delta;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        filter_id get_filter_id() const {
            return m_filter_id;
        }		
        num_legs get_num_legs() const {
            return m_num_legs;
        }
        const std::vector<quote_legs>& get_quote_legs_list() const {
            return m_quote_legs;
        }
        const quote_legs& get_quote_legs(const int i) const {
            return m_quote_legs.at(i);
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
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_rfq_source(const rfq_source& value)  {
            m_rfq_source = value;
        }
        void set_rfq_strategy(const rfq_strategy& value)  {
            m_rfq_strategy = value;
        }
        void set_is_covered_strategy(const is_covered_strategy& value)  {
            m_is_covered_strategy = value;
        }
        void set_is_tradeable(const is_tradeable& value)  {
            m_is_tradeable = value;
        }
        void set_rfq_bid_price(const rfq_bid_price& value)  {
            m_rfq_bid_price = value;
        }
        void set_rfq_bid_quan(const rfq_bid_quan& value)  {
            m_rfq_bid_quan = value;
        }
        void set_rfq_ask_price(const rfq_ask_price& value)  {
            m_rfq_ask_price = value;
        }
        void set_rfq_ask_quan(const rfq_ask_quan& value)  {
            m_rfq_ask_quan = value;
        }
        void set_rfq_prt_price(const rfq_prt_price& value)  {
            m_rfq_prt_price = value;
        }
        void set_rfq_prt_size(const rfq_prt_size& value)  {
            m_rfq_prt_size = value;
        }
        void set_rfq_prt_volume(const rfq_prt_volume& value)  {
            m_rfq_prt_volume = value;
        }
        void set_rfq_prt_time(const rfq_prt_time& value)  {
            m_rfq_prt_time = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_bid_quan(const bid_quan& value)  {
            m_bid_quan = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_ask_quan(const ask_quan& value)  {
            m_ask_quan = value;
        }
        void set_surf_delta(const surf_delta& value)  {
            m_surf_delta = value;
        }
        void set_surf_vega(const surf_vega& value)  {
            m_surf_vega = value;
        }
        void set_surf_price(const surf_price& value)  {
            m_surf_price = value;
        }
        void set_theo_price(const theo_price& value)  {
            m_theo_price = value;
        }
        void set_theo_price_lo(const theo_price_lo& value)  {
            m_theo_price_lo = value;
        }
        void set_theo_price_hi(const theo_price_hi& value)  {
            m_theo_price_hi = value;
        }
        void set_min_uprc(const min_uprc& value)  {
            m_min_uprc = value;
        }
        void set_max_uprc(const max_uprc& value)  {
            m_max_uprc = value;
        }
        void set_min_years(const min_years& value)  {
            m_min_years = value;
        }
        void set_max_years(const max_years& value)  {
            m_max_years = value;
        }
        void set_leg_sec_types(const leg_sec_types& value)  {
            m_leg_sec_types = value;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        void set_grp_num(const grp_num& value)  {
            m_grp_num = value;
        }
        void set_sector(const sector& value)  {
            m_sector = value;
        }
        void set_risk_class(const risk_class& value)  {
            m_risk_class = value;
        }
        void set_opt_status(const opt_status& value)  {
            m_opt_status = value;
        }
        void set_pos_vega(const pos_vega& value)  {
            m_pos_vega = value;
        }
        void set_pos_gamma(const pos_gamma& value)  {
            m_pos_gamma = value;
        }
        void set_pos_theta(const pos_theta& value)  {
            m_pos_theta = value;
        }
        void set_pos_delta(const pos_delta& value)  {
            m_pos_delta = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_filter_id(const filter_id& value)  {
            m_filter_id = value;
        }
        void set_num_legs(const num_legs& value)  {
            m_num_legs = value;
        }
        void set_quote_legs_list(const std::vector<quote_legs>& list)  {
            m_quote_legs = list;
        }
        void add_quote_legs(const quote_legs& item) {
            m_quote_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RFQQuoteBroadcast::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const rfq_source & value) {
            set_rfq_source(value);
        }
        void set(const rfq_strategy & value) {
            set_rfq_strategy(value);
        }
        void set(const is_covered_strategy & value) {
            set_is_covered_strategy(value);
        }
        void set(const is_tradeable & value) {
            set_is_tradeable(value);
        }
        void set(const rfq_bid_price & value) {
            set_rfq_bid_price(value);
        }
        void set(const rfq_bid_quan & value) {
            set_rfq_bid_quan(value);
        }
        void set(const rfq_ask_price & value) {
            set_rfq_ask_price(value);
        }
        void set(const rfq_ask_quan & value) {
            set_rfq_ask_quan(value);
        }
        void set(const rfq_prt_price & value) {
            set_rfq_prt_price(value);
        }
        void set(const rfq_prt_size & value) {
            set_rfq_prt_size(value);
        }
        void set(const rfq_prt_volume & value) {
            set_rfq_prt_volume(value);
        }
        void set(const rfq_prt_time & value) {
            set_rfq_prt_time(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const bid_quan & value) {
            set_bid_quan(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const ask_quan & value) {
            set_ask_quan(value);
        }
        void set(const surf_delta & value) {
            set_surf_delta(value);
        }
        void set(const surf_vega & value) {
            set_surf_vega(value);
        }
        void set(const surf_price & value) {
            set_surf_price(value);
        }
        void set(const theo_price & value) {
            set_theo_price(value);
        }
        void set(const theo_price_lo & value) {
            set_theo_price_lo(value);
        }
        void set(const theo_price_hi & value) {
            set_theo_price_hi(value);
        }
        void set(const min_uprc & value) {
            set_min_uprc(value);
        }
        void set(const max_uprc & value) {
            set_max_uprc(value);
        }
        void set(const min_years & value) {
            set_min_years(value);
        }
        void set(const max_years & value) {
            set_max_years(value);
        }
        void set(const leg_sec_types & value) {
            set_leg_sec_types(value);
        }
        void set(const exchange & value) {
            set_exchange(value);
        }
        void set(const grp_num & value) {
            set_grp_num(value);
        }
        void set(const sector & value) {
            set_sector(value);
        }
        void set(const risk_class & value) {
            set_risk_class(value);
        }
        void set(const opt_status & value) {
            set_opt_status(value);
        }
        void set(const pos_vega & value) {
            set_pos_vega(value);
        }
        void set(const pos_gamma & value) {
            set_pos_gamma(value);
        }
        void set(const pos_theta & value) {
            set_pos_theta(value);
        }
        void set(const pos_delta & value) {
            set_pos_delta(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const filter_id & value) {
            set_filter_id(value);
        }
        void set(const num_legs & value) {
            set_num_legs(value);
        }
        void set(const quote_legs & value) {
            add_quote_legs(value);
        }

        void set(const RFQQuoteBroadcast & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_security_desc);
            set(value.m_rfq_source);
            set(value.m_rfq_strategy);
            set(value.m_is_covered_strategy);
            set(value.m_is_tradeable);
            set(value.m_rfq_bid_price);
            set(value.m_rfq_bid_quan);
            set(value.m_rfq_ask_price);
            set(value.m_rfq_ask_quan);
            set(value.m_rfq_prt_price);
            set(value.m_rfq_prt_size);
            set(value.m_rfq_prt_volume);
            set(value.m_rfq_prt_time);
            set(value.m_bid_price);
            set(value.m_bid_quan);
            set(value.m_ask_price);
            set(value.m_ask_quan);
            set(value.m_surf_delta);
            set(value.m_surf_vega);
            set(value.m_surf_price);
            set(value.m_theo_price);
            set(value.m_theo_price_lo);
            set(value.m_theo_price_hi);
            set(value.m_min_uprc);
            set(value.m_max_uprc);
            set(value.m_min_years);
            set(value.m_max_years);
            set(value.m_leg_sec_types);
            set(value.m_exchange);
            set(value.m_grp_num);
            set(value.m_sector);
            set(value.m_risk_class);
            set(value.m_opt_status);
            set(value.m_pos_vega);
            set(value.m_pos_gamma);
            set(value.m_pos_theta);
            set(value.m_pos_delta);
            set(value.m_net_timestamp);
            set(value.m_filter_id);
            set(value.m_num_legs);set_quote_legs_list(value.m_quote_legs);
        }

        RFQQuoteBroadcast() {
            m__meta.set_message_type("RFQQuoteBroadcast");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 6225, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 6225, length);
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
             *this = RFQQuoteBroadcast{};
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
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeRfqBidPrice() const {
            return !(m_rfq_bid_price == 0.0);
        }
        bool IncludeRfqBidQuan() const {
            return !(m_rfq_bid_quan == 0);
        }
        bool IncludeRfqAskPrice() const {
            return !(m_rfq_ask_price == 0.0);
        }
        bool IncludeRfqAskQuan() const {
            return !(m_rfq_ask_quan == 0);
        }
        bool IncludeRfqPrtPrice() const {
            return !(m_rfq_prt_price == 0.0);
        }
        bool IncludeRfqPrtSize() const {
            return !(m_rfq_prt_size == 0);
        }
        bool IncludeRfqPrtVolume() const {
            return !(m_rfq_prt_volume == 0);
        }
        bool IncludeRfqPrtTime() const {
            return !(m_rfq_prt_time == 0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeBidQuan() const {
            return !(m_bid_quan == 0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeAskQuan() const {
            return !(m_ask_quan == 0);
        }
        bool IncludeSurfDelta() const {
            return !(m_surf_delta == 0.0);
        }
        bool IncludeSurfVega() const {
            return !(m_surf_vega == 0.0);
        }
        bool IncludeSurfPrice() const {
            return !(m_surf_price == 0.0);
        }
        bool IncludeTheoPrice() const {
            return !(m_theo_price == 0.0);
        }
        bool IncludeTheoPriceLo() const {
            return !(m_theo_price_lo == 0.0);
        }
        bool IncludeTheoPriceHi() const {
            return !(m_theo_price_hi == 0.0);
        }
        bool IncludeMinUprc() const {
            return !(m_min_uprc == 0.0);
        }
        bool IncludeMaxUprc() const {
            return !(m_max_uprc == 0.0);
        }
        bool IncludeMinYears() const {
            return !(m_min_years == 0.0);
        }
        bool IncludeMaxYears() const {
            return !(m_max_years == 0.0);
        }
        bool IncludeExchange() const {
            return !(m_exchange.empty());
        }
        bool IncludeGrpNum() const {
            return !(m_grp_num == 0);
        }
        bool IncludeSector() const {
            return !(m_sector.empty());
        }
        bool IncludeRiskClass() const {
            return !(m_risk_class.empty());
        }
        bool IncludePosVega() const {
            return !(m_pos_vega == 0.0);
        }
        bool IncludePosGamma() const {
            return !(m_pos_gamma == 0.0);
        }
        bool IncludePosTheta() const {
            return !(m_pos_theta == 0.0);
        }
        bool IncludePosDelta() const {
            return !(m_pos_delta == 0.0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeFilterId() const {
            return !(m_filter_id == 0);
        }
        bool IncludeNumLegs() const {
            return !(m_num_legs == 0);
        }
        bool IncludeQuoteLegs() const {
            return (!m_quote_legs.empty());
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_security_desc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RFQSourceType>(m_rfq_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadStrategy>(m_rfq_strategy)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_covered_strategy)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_tradeable)));
            if ( IncludeRfqBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_rfq_bid_price);
            }
            if ( IncludeRfqBidQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_rfq_bid_quan);
            }
            if ( IncludeRfqAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_rfq_ask_price);
            }
            if ( IncludeRfqAskQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_rfq_ask_quan);
            }
            if ( IncludeRfqPrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_rfq_prt_price);
            }
            if ( IncludeRfqPrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_rfq_prt_size);
            }
            if ( IncludeRfqPrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_rfq_prt_volume);
            }
            if ( IncludeRfqPrtTime()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(139,m_rfq_prt_time);
            }
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_bid_price);
            }
            if ( IncludeBidQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_bid_quan);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_ask_price);
            }
            if ( IncludeAskQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_ask_quan);
            }
            if ( IncludeSurfDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_surf_delta);
            }
            if ( IncludeSurfVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_surf_vega);
            }
            if ( IncludeSurfPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_surf_price);
            }
            if ( IncludeTheoPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_theo_price);
            }
            if ( IncludeTheoPriceLo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_theo_price_lo);
            }
            if ( IncludeTheoPriceHi()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_theo_price_hi);
            }
            if ( IncludeMinUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(172,m_min_uprc);
            }
            if ( IncludeMaxUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_max_uprc);
            }
            if ( IncludeMinYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_min_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_max_years);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegSecType>(m_leg_sec_types)));
            if ( IncludeExchange()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_exchange);
            }
            if ( IncludeGrpNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_grp_num);
            }
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_sector);
            }
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(196,m_risk_class);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludePosVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_pos_vega);
            }
            if ( IncludePosGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_pos_gamma);
            }
            if ( IncludePosTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_pos_theta);
            }
            if ( IncludePosDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_pos_delta);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(214,m_net_timestamp);
            }
            if ( IncludeFilterId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(217,m_filter_id);
            }
            if ( IncludeNumLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_num_legs);
            }
            if ( IncludeQuoteLegs()) {
                for (auto& item : m_quote_legs) {
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_security_desc));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RFQSourceType>(m_rfq_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadStrategy>(m_rfq_strategy)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_covered_strategy)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_tradeable)));
            if ( IncludeRfqBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_rfq_bid_price);
            }
            if ( IncludeRfqBidQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_rfq_bid_quan);
            }
            if ( IncludeRfqAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_rfq_ask_price);
            }
            if ( IncludeRfqAskQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_rfq_ask_quan);
            }
            if ( IncludeRfqPrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_rfq_prt_price);
            }
            if ( IncludeRfqPrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_rfq_prt_size);
            }
            if ( IncludeRfqPrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_rfq_prt_volume);
            }
            if ( IncludeRfqPrtTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,139,m_rfq_prt_time);
            }
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_bid_price);
            }
            if ( IncludeBidQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_bid_quan);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_ask_price);
            }
            if ( IncludeAskQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_ask_quan);
            }
            if ( IncludeSurfDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_surf_delta);
            }
            if ( IncludeSurfVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_surf_vega);
            }
            if ( IncludeSurfPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_surf_price);
            }
            if ( IncludeTheoPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_theo_price);
            }
            if ( IncludeTheoPriceLo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_theo_price_lo);
            }
            if ( IncludeTheoPriceHi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_theo_price_hi);
            }
            if ( IncludeMinUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,172,m_min_uprc);
            }
            if ( IncludeMaxUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_max_uprc);
            }
            if ( IncludeMinYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_min_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_max_years);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegSecType>(m_leg_sec_types)));
            if ( IncludeExchange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_exchange));
            }
            if ( IncludeGrpNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_grp_num);
            }
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_sector));
            }
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,196,static_cast<string>(m_risk_class));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludePosVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_pos_vega);
            }
            if ( IncludePosGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_pos_gamma);
            }
            if ( IncludePosTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_pos_theta);
            }
            if ( IncludePosDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_pos_delta);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,214,m_net_timestamp);
            }
            if ( IncludeFilterId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,217,m_filter_id);
            }
            if ( IncludeNumLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_num_legs);
            }
            if ( IncludeQuoteLegs()) {
                for (auto& item : m_quote_legs) {
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
                    case 100: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_rfq_source = static_cast<spiderrock::protobuf::api::RFQSourceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_rfq_strategy = static_cast<spiderrock::protobuf::api::SpreadStrategy>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_covered_strategy = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_tradeable = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rfq_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rfq_bid_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rfq_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rfq_ask_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rfq_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rfq_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rfq_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_rfq_prt_time = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_price_lo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_price_hi = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_leg_sec_types = static_cast<spiderrock::protobuf::api::LegSecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exchange = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_grp_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_status = static_cast<spiderrock::protobuf::api::OptStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_filter_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            quote_legs item_quote_legs;
                            item_quote_legs.Decode(pos, pos+length);  
                            m_quote_legs.emplace_back(item_quote_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::_meta>() const { return RFQQuoteBroadcast::_meta{ m__meta}; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::pkey>() const { return RFQQuoteBroadcast::pkey{ m_pkey}; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::ticker>() const { return RFQQuoteBroadcast::ticker{ m_ticker}; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::security_desc>() const { return m_security_desc; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RFQSourceType>( m_rfq_source)); }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_strategy>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadStrategy>( m_rfq_strategy)); }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::is_covered_strategy>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_covered_strategy)); }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::is_tradeable>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_tradeable)); }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_bid_price>() const { return m_rfq_bid_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_bid_quan>() const { return m_rfq_bid_quan; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_ask_price>() const { return m_rfq_ask_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_ask_quan>() const { return m_rfq_ask_quan; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_prt_price>() const { return m_rfq_prt_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_prt_size>() const { return m_rfq_prt_size; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_prt_volume>() const { return m_rfq_prt_volume; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::rfq_prt_time>() const { return m_rfq_prt_time; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::bid_price>() const { return m_bid_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::bid_quan>() const { return m_bid_quan; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::ask_price>() const { return m_ask_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::ask_quan>() const { return m_ask_quan; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::surf_delta>() const { return m_surf_delta; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::surf_vega>() const { return m_surf_vega; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::surf_price>() const { return m_surf_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::theo_price>() const { return m_theo_price; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::theo_price_lo>() const { return m_theo_price_lo; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::theo_price_hi>() const { return m_theo_price_hi; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::min_uprc>() const { return m_min_uprc; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::max_uprc>() const { return m_max_uprc; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::min_years>() const { return m_min_years; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::max_years>() const { return m_max_years; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::leg_sec_types>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegSecType>( m_leg_sec_types)); }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::exchange>() const { return m_exchange; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::grp_num>() const { return m_grp_num; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::sector>() const { return m_sector; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::risk_class>() const { return m_risk_class; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::opt_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>( m_opt_status)); }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::pos_vega>() const { return m_pos_vega; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::pos_gamma>() const { return m_pos_gamma; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::pos_theta>() const { return m_pos_theta; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::pos_delta>() const { return m_pos_delta; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::filter_id>() const { return m_filter_id; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::num_legs>() const { return m_num_legs; }
    template<> inline const auto RFQQuoteBroadcast::get<RFQQuoteBroadcast::quote_legs>(int i) const { return RFQQuoteBroadcast::quote_legs{ get_quote_legs(i)}; }
    template<> inline int RFQQuoteBroadcast::count<RFQQuoteBroadcast::quote_legs>() const { return static_cast<int>( m_quote_legs.size()); }
    template<> inline const auto RFQQuoteBroadcast_PKey::get<RFQQuoteBroadcast_PKey::security_id>() const { return m_security_id; }
    template<> inline const auto RFQQuoteBroadcast_PKey::get<RFQQuoteBroadcast_PKey::exch_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchSource>(m_exch_source));}
    
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_key>() const { return RFQQuoteBroadcast_QuoteLegs::leg_key{m_leg_key}; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_key_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegKeyType>(m_leg_key_type));}
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_security_id>() const { return m_leg_security_id; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_parent_sec_id>() const { return m_leg_parent_sec_id; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_security_desc>() const { return m_leg_security_desc; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_ratio>() const { return m_leg_ratio; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side));}
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_bid_price>() const { return m_leg_bid_price; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_bid_size>() const { return m_leg_bid_size; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_ask_price>() const { return m_leg_ask_price; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_ask_size>() const { return m_leg_ask_size; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_years>() const { return m_leg_years; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_uprc>() const { return m_leg_uprc; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_opt_mult>() const { return m_leg_opt_mult; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_fut_mult>() const { return m_leg_fut_mult; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_surf_vol>() const { return m_leg_surf_vol; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_surf_de>() const { return m_leg_surf_de; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_surf_ve>() const { return m_leg_surf_ve; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_surf_price>() const { return m_leg_surf_price; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_theo_price>() const { return m_leg_theo_price; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_theo_prc_b>() const { return m_leg_theo_prc_b; }
    template<> inline const auto RFQQuoteBroadcast_QuoteLegs::get<RFQQuoteBroadcast_QuoteLegs::leg_theo_prc_s>() const { return m_leg_theo_prc_s; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RFQQuoteBroadcast_PKey& m) {
        o << "\"security_id\":" << m.get<RFQQuoteBroadcast_PKey::security_id>();
        o << ",\"exch_source\":" << (int64_t)m.get<RFQQuoteBroadcast_PKey::exch_source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RFQQuoteBroadcast_QuoteLegs& m) {
        o << "\"leg_key\":{" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_key>() << "}";
        o << ",\"leg_key_type\":" << (int64_t)m.get<RFQQuoteBroadcast_QuoteLegs::leg_key_type>();
        o << ",\"leg_security_id\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_security_id>();
        o << ",\"leg_parent_sec_id\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_parent_sec_id>();
        o << ",\"leg_security_desc\":\"" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_security_desc>() << "\"";
        o << ",\"leg_ratio\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_ratio>();
        o << ",\"leg_side\":" << (int64_t)m.get<RFQQuoteBroadcast_QuoteLegs::leg_side>();
        o << ",\"leg_bid_price\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_bid_price>();
        o << ",\"leg_bid_size\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_bid_size>();
        o << ",\"leg_ask_price\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_ask_price>();
        o << ",\"leg_ask_size\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_ask_size>();
        o << ",\"leg_years\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_years>();
        o << ",\"leg_uprc\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_uprc>();
        o << ",\"leg_opt_mult\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_opt_mult>();
        o << ",\"leg_fut_mult\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_fut_mult>();
        o << ",\"leg_surf_vol\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_surf_vol>();
        o << ",\"leg_surf_de\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_surf_de>();
        o << ",\"leg_surf_ve\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_surf_ve>();
        o << ",\"leg_surf_price\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_surf_price>();
        o << ",\"leg_theo_price\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_theo_price>();
        o << ",\"leg_theo_prc_b\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_theo_prc_b>();
        o << ",\"leg_theo_prc_s\":" << m.get<RFQQuoteBroadcast_QuoteLegs::leg_theo_prc_s>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RFQQuoteBroadcast& m) {
        o << "\"_meta\":{" << m.get<RFQQuoteBroadcast::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RFQQuoteBroadcast::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<RFQQuoteBroadcast::ticker>() << "}";
        o << ",\"security_desc\":\"" << m.get<RFQQuoteBroadcast::security_desc>() << "\"";
        o << ",\"rfq_source\":" << (int64_t)m.get<RFQQuoteBroadcast::rfq_source>();
        o << ",\"rfq_strategy\":" << (int64_t)m.get<RFQQuoteBroadcast::rfq_strategy>();
        o << ",\"is_covered_strategy\":" << (int64_t)m.get<RFQQuoteBroadcast::is_covered_strategy>();
        o << ",\"is_tradeable\":" << (int64_t)m.get<RFQQuoteBroadcast::is_tradeable>();
        o << ",\"rfq_bid_price\":" << m.get<RFQQuoteBroadcast::rfq_bid_price>();
        o << ",\"rfq_bid_quan\":" << m.get<RFQQuoteBroadcast::rfq_bid_quan>();
        o << ",\"rfq_ask_price\":" << m.get<RFQQuoteBroadcast::rfq_ask_price>();
        o << ",\"rfq_ask_quan\":" << m.get<RFQQuoteBroadcast::rfq_ask_quan>();
        o << ",\"rfq_prt_price\":" << m.get<RFQQuoteBroadcast::rfq_prt_price>();
        o << ",\"rfq_prt_size\":" << m.get<RFQQuoteBroadcast::rfq_prt_size>();
        o << ",\"rfq_prt_volume\":" << m.get<RFQQuoteBroadcast::rfq_prt_volume>();
        o << ",\"rfq_prt_time\":" << m.get<RFQQuoteBroadcast::rfq_prt_time>();
        o << ",\"bid_price\":" << m.get<RFQQuoteBroadcast::bid_price>();
        o << ",\"bid_quan\":" << m.get<RFQQuoteBroadcast::bid_quan>();
        o << ",\"ask_price\":" << m.get<RFQQuoteBroadcast::ask_price>();
        o << ",\"ask_quan\":" << m.get<RFQQuoteBroadcast::ask_quan>();
        o << ",\"surf_delta\":" << m.get<RFQQuoteBroadcast::surf_delta>();
        o << ",\"surf_vega\":" << m.get<RFQQuoteBroadcast::surf_vega>();
        o << ",\"surf_price\":" << m.get<RFQQuoteBroadcast::surf_price>();
        o << ",\"theo_price\":" << m.get<RFQQuoteBroadcast::theo_price>();
        o << ",\"theo_price_lo\":" << m.get<RFQQuoteBroadcast::theo_price_lo>();
        o << ",\"theo_price_hi\":" << m.get<RFQQuoteBroadcast::theo_price_hi>();
        o << ",\"min_uprc\":" << m.get<RFQQuoteBroadcast::min_uprc>();
        o << ",\"max_uprc\":" << m.get<RFQQuoteBroadcast::max_uprc>();
        o << ",\"min_years\":" << m.get<RFQQuoteBroadcast::min_years>();
        o << ",\"max_years\":" << m.get<RFQQuoteBroadcast::max_years>();
        o << ",\"leg_sec_types\":" << (int64_t)m.get<RFQQuoteBroadcast::leg_sec_types>();
        o << ",\"exchange\":\"" << m.get<RFQQuoteBroadcast::exchange>() << "\"";
        o << ",\"grp_num\":" << m.get<RFQQuoteBroadcast::grp_num>();
        o << ",\"sector\":\"" << m.get<RFQQuoteBroadcast::sector>() << "\"";
        o << ",\"risk_class\":\"" << m.get<RFQQuoteBroadcast::risk_class>() << "\"";
        o << ",\"opt_status\":" << (int64_t)m.get<RFQQuoteBroadcast::opt_status>();
        o << ",\"pos_vega\":" << m.get<RFQQuoteBroadcast::pos_vega>();
        o << ",\"pos_gamma\":" << m.get<RFQQuoteBroadcast::pos_gamma>();
        o << ",\"pos_theta\":" << m.get<RFQQuoteBroadcast::pos_theta>();
        o << ",\"pos_delta\":" << m.get<RFQQuoteBroadcast::pos_delta>();
        o << ",\"net_timestamp\":" << m.get<RFQQuoteBroadcast::net_timestamp>();
        o << ",\"filter_id\":" << m.get<RFQQuoteBroadcast::filter_id>();
        o << ",\"num_legs\":" << m.get<RFQQuoteBroadcast::num_legs>();
        o << ",\"quote_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<RFQQuoteBroadcast::quote_legs>(); ++i) {
                o << delim << m.get<RFQQuoteBroadcast::quote_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}