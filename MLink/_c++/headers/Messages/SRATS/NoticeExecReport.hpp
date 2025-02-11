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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _notice_dttm__GUARD__
    #define _notice_dttm__GUARD__
    DECL_STRONG_TYPE(notice_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_notice_dttm__GUARD__

    #ifndef _response_id__GUARD__
    #define _response_id__GUARD__
    DECL_STRONG_TYPE(response_id, string);
    #endif//_response_id__GUARD__

    #ifndef _resp_origin__GUARD__
    #define _resp_origin__GUARD__
    DECL_STRONG_TYPE(resp_origin, spiderrock::protobuf::api::SpdrSource);
    #endif//_resp_origin__GUARD__

    #ifndef _stage_type__GUARD__
    #define _stage_type__GUARD__
    DECL_STRONG_TYPE(stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_stage_type__GUARD__

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _auction_source__GUARD__
    #define _auction_source__GUARD__
    DECL_STRONG_TYPE(auction_source, spiderrock::protobuf::api::AuctionSource);
    #endif//_auction_source__GUARD__

    #ifndef _resp_dttm__GUARD__
    #define _resp_dttm__GUARD__
    DECL_STRONG_TYPE(resp_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_resp_dttm__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    #ifndef _resp_size__GUARD__
    #define _resp_size__GUARD__
    DECL_STRONG_TYPE(resp_size, int32);
    #endif//_resp_size__GUARD__

    #ifndef _resp_active_size__GUARD__
    #define _resp_active_size__GUARD__
    DECL_STRONG_TYPE(resp_active_size, int32);
    #endif//_resp_active_size__GUARD__

    #ifndef _resp_price__GUARD__
    #define _resp_price__GUARD__
    DECL_STRONG_TYPE(resp_price, double);
    #endif//_resp_price__GUARD__

    #ifndef _ref_uprc__double__GUARD__
    #define _ref_uprc__double__GUARD__
    DECL_STRONG_TYPE(ref_uprc__double, double);
    #endif//_ref_uprc__double__GUARD__

    #ifndef _ref_de__GUARD__
    #define _ref_de__GUARD__
    DECL_STRONG_TYPE(ref_de, float);
    #endif//_ref_de__GUARD__

    #ifndef _ref_ga__GUARD__
    #define _ref_ga__GUARD__
    DECL_STRONG_TYPE(ref_ga, float);
    #endif//_ref_ga__GUARD__

    #ifndef _round_rule__GUARD__
    #define _round_rule__GUARD__
    DECL_STRONG_TYPE(round_rule, spiderrock::protobuf::api::RoundRule);
    #endif//_round_rule__GUARD__

    #ifndef _step_up_incr__GUARD__
    #define _step_up_incr__GUARD__
    DECL_STRONG_TYPE(step_up_incr, double);
    #endif//_step_up_incr__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _resp_status__GUARD__
    #define _resp_status__GUARD__
    DECL_STRONG_TYPE(resp_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_resp_status__GUARD__

    #ifndef _resp_detail__GUARD__
    #define _resp_detail__GUARD__
    DECL_STRONG_TYPE(resp_detail, string);
    #endif//_resp_detail__GUARD__

    #ifndef _last_uprc__GUARD__
    #define _last_uprc__GUARD__
    DECL_STRONG_TYPE(last_uprc, double);
    #endif//_last_uprc__GUARD__

    #ifndef _last_trial_prc__GUARD__
    #define _last_trial_prc__GUARD__
    DECL_STRONG_TYPE(last_trial_prc, double);
    #endif//_last_trial_prc__GUARD__

    #ifndef _leaves_qty__GUARD__
    #define _leaves_qty__GUARD__
    DECL_STRONG_TYPE(leaves_qty, int32);
    #endif//_leaves_qty__GUARD__

    #ifndef _cum_fill_qty__GUARD__
    #define _cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(cum_fill_qty, int32);
    #endif//_cum_fill_qty__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _add_latency__GUARD__
    #define _add_latency__GUARD__
    DECL_STRONG_TYPE(add_latency, double);
    #endif//_add_latency__GUARD__

    #ifndef _ack_latency__GUARD__
    #define _ack_latency__GUARD__
    DECL_STRONG_TYPE(ack_latency, double);
    #endif//_ack_latency__GUARD__

    #ifndef _response_result__GUARD__
    #define _response_result__GUARD__
    DECL_STRONG_TYPE(response_result, spiderrock::protobuf::api::NoticeResult);
    #endif//_response_result__GUARD__

    #ifndef _response_time__GUARD__
    #define _response_time__GUARD__
    DECL_STRONG_TYPE(response_time, int32);
    #endif//_response_time__GUARD__

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_time__GUARD__
    #define _prt_time__GUARD__
    DECL_STRONG_TYPE(prt_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_prt_time__GUARD__

    #ifndef _prt_ubid__GUARD__
    #define _prt_ubid__GUARD__
    DECL_STRONG_TYPE(prt_ubid, double);
    #endif//_prt_ubid__GUARD__

    #ifndef _prt_uask__GUARD__
    #define _prt_uask__GUARD__
    DECL_STRONG_TYPE(prt_uask, double);
    #endif//_prt_uask__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _ratio__int32__GUARD__
    #define _ratio__int32__GUARD__
    DECL_STRONG_TYPE(ratio__int32, int32);
    #endif//_ratio__int32__GUARD__

    #ifndef _position_type__LegPositionType__GUARD__
    #define _position_type__LegPositionType__GUARD__
    DECL_STRONG_TYPE(position_type__LegPositionType, spiderrock::protobuf::api::LegPositionType);
    #endif//_position_type__LegPositionType__GUARD__

    #ifndef _leg_cum_fill_qty__GUARD__
    #define _leg_cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty, int32);
    #endif//_leg_cum_fill_qty__GUARD__

    #ifndef _leg_avg_fill_price__GUARD__
    #define _leg_avg_fill_price__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_price, double);
    #endif//_leg_avg_fill_price__GUARD__

    
    class NoticeExecReport_PKey {
        public:
        //using statements for all types used in this class
        using notice_number = spiderrock::protobuf::api::notice_number;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;

        private:
        notice_number m_notice_number{};
        base_parent_number m_base_parent_number{};

        public:
        notice_number get_notice_number() const {
            return m_notice_number;
        }
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }
        void set(const base_parent_number & value) { set_base_parent_number(value); }


        NoticeExecReport_PKey() {}

        virtual ~NoticeExecReport_PKey() {
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
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(13,m_notice_number);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(14,m_base_parent_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,13,m_notice_number);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,14,m_base_parent_number);
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
                    case 13: {m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 14: {m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class NoticeExecReport_OrderLegs {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using side = spiderrock::protobuf::api::side;
        using ratio = spiderrock::protobuf::api::ratio__int32;
        using position_type = spiderrock::protobuf::api::position_type__LegPositionType;
        using leg_cum_fill_qty = spiderrock::protobuf::api::leg_cum_fill_qty;
        using leg_avg_fill_price = spiderrock::protobuf::api::leg_avg_fill_price;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        ratio m_ratio{};
        position_type m_position_type{};
        leg_cum_fill_qty m_leg_cum_fill_qty{};
        leg_avg_fill_price m_leg_avg_fill_price{};

        public:
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
        position_type get_position_type() const {
            return m_position_type;
        }
        leg_cum_fill_qty get_leg_cum_fill_qty() const {
            return m_leg_cum_fill_qty;
        }
        leg_avg_fill_price get_leg_avg_fill_price() const {
            return m_leg_avg_fill_price;
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
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_leg_cum_fill_qty(const leg_cum_fill_qty& value)  {
            m_leg_cum_fill_qty = value;
        }
        void set_leg_avg_fill_price(const leg_avg_fill_price& value)  {
            m_leg_avg_fill_price = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const side & value) { set_side(value); }
        void set(const ratio & value) { set_ratio(value); }
        void set(const position_type & value) { set_position_type(value); }
        void set(const leg_cum_fill_qty & value) { set_leg_cum_fill_qty(value); }
        void set(const leg_avg_fill_price & value) { set_leg_avg_fill_price(value); }


        NoticeExecReport_OrderLegs() {}

        virtual ~NoticeExecReport_OrderLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(117,optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(120,m_ratio);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(122,m_leg_cum_fill_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(123,m_leg_avg_fill_price);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 117, optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,120,m_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,122,m_leg_cum_fill_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,123,m_leg_avg_fill_price);
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
                    case 117: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 118: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 119: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 120: {m_ratio = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 121: {m_position_type = static_cast<spiderrock::protobuf::api::LegPositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 122: {m_leg_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 123: {m_leg_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class NoticeExecReport {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::NoticeExecReport_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using notice_dttm = spiderrock::protobuf::api::notice_dttm;
        using response_id = spiderrock::protobuf::api::response_id;
        using resp_origin = spiderrock::protobuf::api::resp_origin;
        using stage_type = spiderrock::protobuf::api::stage_type;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using resp_dttm = spiderrock::protobuf::api::resp_dttm;
        using resp_side = spiderrock::protobuf::api::resp_side;
        using resp_size = spiderrock::protobuf::api::resp_size;
        using resp_active_size = spiderrock::protobuf::api::resp_active_size;
        using resp_price = spiderrock::protobuf::api::resp_price;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__double;
        using ref_de = spiderrock::protobuf::api::ref_de;
        using ref_ga = spiderrock::protobuf::api::ref_ga;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using step_up_incr = spiderrock::protobuf::api::step_up_incr;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using resp_status = spiderrock::protobuf::api::resp_status;
        using resp_detail = spiderrock::protobuf::api::resp_detail;
        using last_uprc = spiderrock::protobuf::api::last_uprc;
        using last_trial_prc = spiderrock::protobuf::api::last_trial_prc;
        using leaves_qty = spiderrock::protobuf::api::leaves_qty;
        using cum_fill_qty = spiderrock::protobuf::api::cum_fill_qty;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using add_latency = spiderrock::protobuf::api::add_latency;
        using ack_latency = spiderrock::protobuf::api::ack_latency;
        using response_result = spiderrock::protobuf::api::response_result;
        using response_time = spiderrock::protobuf::api::response_time;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_time = spiderrock::protobuf::api::prt_time;
        using prt_ubid = spiderrock::protobuf::api::prt_ubid;
        using prt_uask = spiderrock::protobuf::api::prt_uask;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using order_legs = spiderrock::protobuf::api::NoticeExecReport_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        notice_dttm m_notice_dttm{};
        response_id m_response_id{};
        resp_origin m_resp_origin{};
        stage_type m_stage_type{};
        auction_type m_auction_type{};
        auction_source m_auction_source{};
        resp_dttm m_resp_dttm{};
        resp_side m_resp_side{};
        resp_size m_resp_size{};
        resp_active_size m_resp_active_size{};
        resp_price m_resp_price{};
        ref_uprc m_ref_uprc{};
        ref_de m_ref_de{};
        ref_ga m_ref_ga{};
        round_rule m_round_rule{};
        step_up_incr m_step_up_incr{};
        risk_group_id m_risk_group_id{};
        strategy m_strategy{};
        user_data1 m_user_data1{};
        resp_status m_resp_status{};
        resp_detail m_resp_detail{};
        last_uprc m_last_uprc{};
        last_trial_prc m_last_trial_prc{};
        leaves_qty m_leaves_qty{};
        cum_fill_qty m_cum_fill_qty{};
        avg_fill_price m_avg_fill_price{};
        add_latency m_add_latency{};
        ack_latency m_ack_latency{};
        response_result m_response_result{};
        response_time m_response_time{};
        prt_price m_prt_price{};
        prt_size m_prt_size{};
        prt_time m_prt_time{};
        prt_ubid m_prt_ubid{};
        prt_uask m_prt_uask{};
        timestamp m_timestamp{};
        std::vector<order_legs> m_order_legs{};

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
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        notice_dttm get_notice_dttm() const {
            return m_notice_dttm;
        }		
        response_id get_response_id() const {
            return m_response_id;
        }		
        resp_origin get_resp_origin() const {
            return m_resp_origin;
        }		
        stage_type get_stage_type() const {
            return m_stage_type;
        }		
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        auction_source get_auction_source() const {
            return m_auction_source;
        }		
        resp_dttm get_resp_dttm() const {
            return m_resp_dttm;
        }		
        resp_side get_resp_side() const {
            return m_resp_side;
        }		
        resp_size get_resp_size() const {
            return m_resp_size;
        }		
        resp_active_size get_resp_active_size() const {
            return m_resp_active_size;
        }		
        resp_price get_resp_price() const {
            return m_resp_price;
        }		
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
        }		
        ref_de get_ref_de() const {
            return m_ref_de;
        }		
        ref_ga get_ref_ga() const {
            return m_ref_ga;
        }		
        round_rule get_round_rule() const {
            return m_round_rule;
        }		
        step_up_incr get_step_up_incr() const {
            return m_step_up_incr;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        resp_status get_resp_status() const {
            return m_resp_status;
        }		
        resp_detail get_resp_detail() const {
            return m_resp_detail;
        }		
        last_uprc get_last_uprc() const {
            return m_last_uprc;
        }		
        last_trial_prc get_last_trial_prc() const {
            return m_last_trial_prc;
        }		
        leaves_qty get_leaves_qty() const {
            return m_leaves_qty;
        }		
        cum_fill_qty get_cum_fill_qty() const {
            return m_cum_fill_qty;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        add_latency get_add_latency() const {
            return m_add_latency;
        }		
        ack_latency get_ack_latency() const {
            return m_ack_latency;
        }		
        response_result get_response_result() const {
            return m_response_result;
        }		
        response_time get_response_time() const {
            return m_response_time;
        }		
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_time get_prt_time() const {
            return m_prt_time;
        }		
        prt_ubid get_prt_ubid() const {
            return m_prt_ubid;
        }		
        prt_uask get_prt_uask() const {
            return m_prt_uask;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<order_legs>& get_order_legs_list() const {
            return m_order_legs;
        }
        const order_legs& get_order_legs(const int i) const {
            return m_order_legs.at(i);
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_notice_dttm(const notice_dttm& value)  {
            m_notice_dttm = value;
        }
        void set_response_id(const response_id& value)  {
            m_response_id = value;
        }
        void set_resp_origin(const resp_origin& value)  {
            m_resp_origin = value;
        }
        void set_stage_type(const stage_type& value)  {
            m_stage_type = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_auction_source(const auction_source& value)  {
            m_auction_source = value;
        }
        void set_resp_dttm(const resp_dttm& value)  {
            m_resp_dttm = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        void set_resp_size(const resp_size& value)  {
            m_resp_size = value;
        }
        void set_resp_active_size(const resp_active_size& value)  {
            m_resp_active_size = value;
        }
        void set_resp_price(const resp_price& value)  {
            m_resp_price = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
        }
        void set_ref_de(const ref_de& value)  {
            m_ref_de = value;
        }
        void set_ref_ga(const ref_ga& value)  {
            m_ref_ga = value;
        }
        void set_round_rule(const round_rule& value)  {
            m_round_rule = value;
        }
        void set_step_up_incr(const step_up_incr& value)  {
            m_step_up_incr = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_resp_status(const resp_status& value)  {
            m_resp_status = value;
        }
        void set_resp_detail(const resp_detail& value)  {
            m_resp_detail = value;
        }
        void set_last_uprc(const last_uprc& value)  {
            m_last_uprc = value;
        }
        void set_last_trial_prc(const last_trial_prc& value)  {
            m_last_trial_prc = value;
        }
        void set_leaves_qty(const leaves_qty& value)  {
            m_leaves_qty = value;
        }
        void set_cum_fill_qty(const cum_fill_qty& value)  {
            m_cum_fill_qty = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_add_latency(const add_latency& value)  {
            m_add_latency = value;
        }
        void set_ack_latency(const ack_latency& value)  {
            m_ack_latency = value;
        }
        void set_response_result(const response_result& value)  {
            m_response_result = value;
        }
        void set_response_time(const response_time& value)  {
            m_response_time = value;
        }
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_time(const prt_time& value)  {
            m_prt_time = value;
        }
        void set_prt_ubid(const prt_ubid& value)  {
            m_prt_ubid = value;
        }
        void set_prt_uask(const prt_uask& value)  {
            m_prt_uask = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const notice_dttm & value) {
            set_notice_dttm(value);
        }
        void set(const response_id & value) {
            set_response_id(value);
        }
        void set(const resp_origin & value) {
            set_resp_origin(value);
        }
        void set(const stage_type & value) {
            set_stage_type(value);
        }
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const auction_source & value) {
            set_auction_source(value);
        }
        void set(const resp_dttm & value) {
            set_resp_dttm(value);
        }
        void set(const resp_side & value) {
            set_resp_side(value);
        }
        void set(const resp_size & value) {
            set_resp_size(value);
        }
        void set(const resp_active_size & value) {
            set_resp_active_size(value);
        }
        void set(const resp_price & value) {
            set_resp_price(value);
        }
        void set(const ref_uprc & value) {
            set_ref_uprc(value);
        }
        void set(const ref_de & value) {
            set_ref_de(value);
        }
        void set(const ref_ga & value) {
            set_ref_ga(value);
        }
        void set(const round_rule & value) {
            set_round_rule(value);
        }
        void set(const step_up_incr & value) {
            set_step_up_incr(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const resp_status & value) {
            set_resp_status(value);
        }
        void set(const resp_detail & value) {
            set_resp_detail(value);
        }
        void set(const last_uprc & value) {
            set_last_uprc(value);
        }
        void set(const last_trial_prc & value) {
            set_last_trial_prc(value);
        }
        void set(const leaves_qty & value) {
            set_leaves_qty(value);
        }
        void set(const cum_fill_qty & value) {
            set_cum_fill_qty(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const add_latency & value) {
            set_add_latency(value);
        }
        void set(const ack_latency & value) {
            set_ack_latency(value);
        }
        void set(const response_result & value) {
            set_response_result(value);
        }
        void set(const response_time & value) {
            set_response_time(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_time & value) {
            set_prt_time(value);
        }
        void set(const prt_ubid & value) {
            set_prt_ubid(value);
        }
        void set(const prt_uask & value) {
            set_prt_uask(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const NoticeExecReport & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_notice_dttm);
            set(value.m_response_id);
            set(value.m_resp_origin);
            set(value.m_stage_type);
            set(value.m_auction_type);
            set(value.m_auction_source);
            set(value.m_resp_dttm);
            set(value.m_resp_side);
            set(value.m_resp_size);
            set(value.m_resp_active_size);
            set(value.m_resp_price);
            set(value.m_ref_uprc);
            set(value.m_ref_de);
            set(value.m_ref_ga);
            set(value.m_round_rule);
            set(value.m_step_up_incr);
            set(value.m_risk_group_id);
            set(value.m_strategy);
            set(value.m_user_data1);
            set(value.m_resp_status);
            set(value.m_resp_detail);
            set(value.m_last_uprc);
            set(value.m_last_trial_prc);
            set(value.m_leaves_qty);
            set(value.m_cum_fill_qty);
            set(value.m_avg_fill_price);
            set(value.m_add_latency);
            set(value.m_ack_latency);
            set(value.m_response_result);
            set(value.m_response_time);
            set(value.m_prt_price);
            set(value.m_prt_size);
            set(value.m_prt_time);
            set(value.m_prt_ubid);
            set(value.m_prt_uask);
            set(value.m_timestamp);set_order_legs_list(value.m_order_legs);
        }

        NoticeExecReport() {
            m__meta.set_message_type("NoticeExecReport");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2475, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2475, length);
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
             *this = NoticeExecReport{};
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
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeNoticeDttm() const {
            return (m_notice_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeResponseId() const {
            return !(m_response_id.empty());
        }
        bool IncludeRespDttm() const {
            return (m_resp_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeRespSize() const {
            return !(m_resp_size == 0);
        }
        bool IncludeRespActiveSize() const {
            return !(m_resp_active_size == 0);
        }
        bool IncludeRespPrice() const {
            return !(m_resp_price == 0.0);
        }
        bool IncludeRefUprc() const {
            return !(m_ref_uprc == 0.0);
        }
        bool IncludeRefDe() const {
            return !(m_ref_de == 0.0);
        }
        bool IncludeRefGa() const {
            return !(m_ref_ga == 0.0);
        }
        bool IncludeStepUpIncr() const {
            return !(m_step_up_incr == 0.0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeRespDetail() const {
            return !(m_resp_detail.empty());
        }
        bool IncludeLastUprc() const {
            return !(m_last_uprc == 0.0);
        }
        bool IncludeLastTrialPrc() const {
            return !(m_last_trial_prc == 0.0);
        }
        bool IncludeLeavesQty() const {
            return !(m_leaves_qty == 0);
        }
        bool IncludeCumFillQty() const {
            return !(m_cum_fill_qty == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeAddLatency() const {
            return !(m_add_latency == 0.0);
        }
        bool IncludeAckLatency() const {
            return !(m_ack_latency == 0.0);
        }
        bool IncludeResponseTime() const {
            return !(m_response_time == 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtTime() const {
            return (m_prt_time.time_since_epoch().count() != 0);
        }
        bool IncludePrtUbid() const {
            return !(m_prt_ubid == 0.0);
        }
        bool IncludePrtUask() const {
            return !(m_prt_uask == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeOrderLegs() const {
            return (!m_order_legs.empty());
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
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(125, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(126, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(140,m_client_firm);
            }
            if ( IncludeNoticeDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(141, m_notice_dttm);
            }
            if ( IncludeResponseId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_response_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_resp_origin)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(144,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeRespDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_resp_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeRespSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_resp_size);
            }
            if ( IncludeRespActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(104,m_resp_active_size);
            }
            if ( IncludeRespPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_resp_price);
            }
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_ref_uprc);
            }
            if ( IncludeRefDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_ref_de);
            }
            if ( IncludeRefGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_ref_ga);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(128,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeStepUpIncr()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(129,m_step_up_incr);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_risk_group_id);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(110,m_strategy);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(111,m_user_data1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_resp_status)));
            if ( IncludeRespDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(113,m_resp_detail);
            }
            if ( IncludeLastUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_last_uprc);
            }
            if ( IncludeLastTrialPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(146,m_last_trial_prc);
            }
            if ( IncludeLeavesQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(147,m_leaves_qty);
            }
            if ( IncludeCumFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_cum_fill_qty);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(131,m_avg_fill_price);
            }
            if ( IncludeAddLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_add_latency);
            }
            if ( IncludeAckLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(149,m_ack_latency);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(132,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeResult>(m_response_result)));
            if ( IncludeResponseTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_response_time);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(134,m_prt_price);
            }
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(135,m_prt_size);
            }
            if ( IncludePrtTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_prt_time);
            }
            if ( IncludePrtUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(150,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_prt_uask);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(124, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(116, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 125, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,126, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,140,static_cast<string>(m_client_firm));
            }
            if ( IncludeNoticeDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 141, m_notice_dttm);
            }
            if ( IncludeResponseId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_response_id));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_resp_origin)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,144,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeRespDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_resp_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeRespSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_resp_size);
            }
            if ( IncludeRespActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,104,m_resp_active_size);
            }
            if ( IncludeRespPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_resp_price);
            }
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_ref_uprc);
            }
            if ( IncludeRefDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_ref_de);
            }
            if ( IncludeRefGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_ref_ga);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,128,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeStepUpIncr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,129,m_step_up_incr);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_risk_group_id);
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,110,static_cast<string>(m_strategy));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,111,static_cast<string>(m_user_data1));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_resp_status)));
            if ( IncludeRespDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,113,static_cast<string>(m_resp_detail));
            }
            if ( IncludeLastUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_last_uprc);
            }
            if ( IncludeLastTrialPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,146,m_last_trial_prc);
            }
            if ( IncludeLeavesQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,147,m_leaves_qty);
            }
            if ( IncludeCumFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_cum_fill_qty);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,131,m_avg_fill_price);
            }
            if ( IncludeAddLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_add_latency);
            }
            if ( IncludeAckLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,149,m_ack_latency);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,132,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeResult>(m_response_result)));
            if ( IncludeResponseTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_response_time);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,134,m_prt_price);
            }
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,135,m_prt_size);
            }
            if ( IncludePrtTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_prt_time);
            }
            if ( IncludePrtUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,150,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_prt_uask);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 124, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 116, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 125: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_notice_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_response_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_resp_origin = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 143: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 144: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_resp_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_resp_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_resp_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_resp_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 128: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_round_rule = static_cast<spiderrock::protobuf::api::RoundRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_step_up_incr = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_resp_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_resp_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_last_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_last_trial_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 147: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_add_latency = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 149: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ack_latency = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 132: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_response_result = static_cast<spiderrock::protobuf::api::NoticeResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_response_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_prt_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 150: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            order_legs item_order_legs;
                            item_order_legs.Decode(pos, pos+length);  
                            m_order_legs.emplace_back(item_order_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto NoticeExecReport::get<NoticeExecReport::_meta>() const { return NoticeExecReport::_meta{ m__meta}; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::pkey>() const { return NoticeExecReport::pkey{ m_pkey}; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ticker>() const { return NoticeExecReport::ticker{ m_ticker}; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::trade_date>() const { return NoticeExecReport::trade_date{ m_trade_date}; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::accnt>() const { return m_accnt; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::client_firm>() const { return m_client_firm; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::notice_dttm>() const { return m_notice_dttm; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::response_id>() const { return m_response_id; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_origin>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_resp_origin)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_dttm>() const { return m_resp_dttm; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_resp_side)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_size>() const { return m_resp_size; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_active_size>() const { return m_resp_active_size; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_price>() const { return m_resp_price; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ref_de>() const { return m_ref_de; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ref_ga>() const { return m_ref_ga; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::step_up_incr>() const { return m_step_up_incr; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::strategy>() const { return m_strategy; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::user_data1>() const { return m_user_data1; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_resp_status)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_detail>() const { return m_resp_detail; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::last_uprc>() const { return m_last_uprc; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::last_trial_prc>() const { return m_last_trial_prc; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::leaves_qty>() const { return m_leaves_qty; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::cum_fill_qty>() const { return m_cum_fill_qty; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::add_latency>() const { return m_add_latency; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ack_latency>() const { return m_ack_latency; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::response_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeResult>( m_response_result)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::response_time>() const { return m_response_time; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::prt_price>() const { return m_prt_price; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::prt_size>() const { return m_prt_size; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::prt_time>() const { return m_prt_time; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::prt_ubid>() const { return m_prt_ubid; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::prt_uask>() const { return m_prt_uask; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::timestamp>() const { return m_timestamp; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::order_legs>(int i) const { return NoticeExecReport::order_legs{ get_order_legs(i)}; }
    template<> inline int NoticeExecReport::count<NoticeExecReport::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto NoticeExecReport_PKey::get<NoticeExecReport_PKey::notice_number>() const { return m_notice_number; }
    template<> inline const auto NoticeExecReport_PKey::get<NoticeExecReport_PKey::base_parent_number>() const { return m_base_parent_number; }
    
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::sec_key>() const { return NoticeExecReport_OrderLegs::sec_key{m_sec_key}; }
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::ratio>() const { return m_ratio; }
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type));}
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::leg_cum_fill_qty>() const { return m_leg_cum_fill_qty; }
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::leg_avg_fill_price>() const { return m_leg_avg_fill_price; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const NoticeExecReport_PKey& m) {
        o << "\"notice_number\":" << m.get<NoticeExecReport_PKey::notice_number>();
        o << ",\"base_parent_number\":" << m.get<NoticeExecReport_PKey::base_parent_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NoticeExecReport_OrderLegs& m) {
        o << "\"sec_key\":{" << m.get<NoticeExecReport_OrderLegs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<NoticeExecReport_OrderLegs::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<NoticeExecReport_OrderLegs::side>();
        o << ",\"ratio\":" << m.get<NoticeExecReport_OrderLegs::ratio>();
        o << ",\"position_type\":" << (int64_t)m.get<NoticeExecReport_OrderLegs::position_type>();
        o << ",\"leg_cum_fill_qty\":" << m.get<NoticeExecReport_OrderLegs::leg_cum_fill_qty>();
        o << ",\"leg_avg_fill_price\":" << m.get<NoticeExecReport_OrderLegs::leg_avg_fill_price>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NoticeExecReport& m) {
        o << "\"_meta\":{" << m.get<NoticeExecReport::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<NoticeExecReport::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<NoticeExecReport::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<NoticeExecReport::trade_date>() << "}";
        o << ",\"accnt\":\"" << m.get<NoticeExecReport::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<NoticeExecReport::client_firm>() << "\"";
        {
            std::time_t tt = m.get<NoticeExecReport::notice_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"notice_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"response_id\":\"" << m.get<NoticeExecReport::response_id>() << "\"";
        o << ",\"resp_origin\":" << (int64_t)m.get<NoticeExecReport::resp_origin>();
        o << ",\"stage_type\":" << (int64_t)m.get<NoticeExecReport::stage_type>();
        o << ",\"auction_type\":" << (int64_t)m.get<NoticeExecReport::auction_type>();
        o << ",\"auction_source\":" << (int64_t)m.get<NoticeExecReport::auction_source>();
        {
            std::time_t tt = m.get<NoticeExecReport::resp_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"resp_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"resp_side\":" << (int64_t)m.get<NoticeExecReport::resp_side>();
        o << ",\"resp_size\":" << m.get<NoticeExecReport::resp_size>();
        o << ",\"resp_active_size\":" << m.get<NoticeExecReport::resp_active_size>();
        o << ",\"resp_price\":" << m.get<NoticeExecReport::resp_price>();
        o << ",\"ref_uprc\":" << m.get<NoticeExecReport::ref_uprc>();
        o << ",\"ref_de\":" << m.get<NoticeExecReport::ref_de>();
        o << ",\"ref_ga\":" << m.get<NoticeExecReport::ref_ga>();
        o << ",\"round_rule\":" << (int64_t)m.get<NoticeExecReport::round_rule>();
        o << ",\"step_up_incr\":" << m.get<NoticeExecReport::step_up_incr>();
        o << ",\"risk_group_id\":" << m.get<NoticeExecReport::risk_group_id>();
        o << ",\"strategy\":\"" << m.get<NoticeExecReport::strategy>() << "\"";
        o << ",\"user_data1\":\"" << m.get<NoticeExecReport::user_data1>() << "\"";
        o << ",\"resp_status\":" << (int64_t)m.get<NoticeExecReport::resp_status>();
        o << ",\"resp_detail\":\"" << m.get<NoticeExecReport::resp_detail>() << "\"";
        o << ",\"last_uprc\":" << m.get<NoticeExecReport::last_uprc>();
        o << ",\"last_trial_prc\":" << m.get<NoticeExecReport::last_trial_prc>();
        o << ",\"leaves_qty\":" << m.get<NoticeExecReport::leaves_qty>();
        o << ",\"cum_fill_qty\":" << m.get<NoticeExecReport::cum_fill_qty>();
        o << ",\"avg_fill_price\":" << m.get<NoticeExecReport::avg_fill_price>();
        o << ",\"add_latency\":" << m.get<NoticeExecReport::add_latency>();
        o << ",\"ack_latency\":" << m.get<NoticeExecReport::ack_latency>();
        o << ",\"response_result\":" << (int64_t)m.get<NoticeExecReport::response_result>();
        o << ",\"response_time\":" << m.get<NoticeExecReport::response_time>();
        o << ",\"prt_price\":" << m.get<NoticeExecReport::prt_price>();
        o << ",\"prt_size\":" << m.get<NoticeExecReport::prt_size>();
        {
            std::time_t tt = m.get<NoticeExecReport::prt_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"prt_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"prt_ubid\":" << m.get<NoticeExecReport::prt_ubid>();
        o << ",\"prt_uask\":" << m.get<NoticeExecReport::prt_uask>();
        {
            std::time_t tt = m.get<NoticeExecReport::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<NoticeExecReport::order_legs>(); ++i) {
                o << delim << m.get<NoticeExecReport::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}