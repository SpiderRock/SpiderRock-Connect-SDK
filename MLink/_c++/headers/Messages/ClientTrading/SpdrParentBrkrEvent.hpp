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

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _event_number__GUARD__
    #define _event_number__GUARD__
    DECL_STRONG_TYPE(event_number, uint32);
    #endif//_event_number__GUARD__

    #ifndef _stage_type__GUARD__
    #define _stage_type__GUARD__
    DECL_STRONG_TYPE(stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_stage_type__GUARD__

    #ifndef _stage_review__GUARD__
    #define _stage_review__GUARD__
    DECL_STRONG_TYPE(stage_review, spiderrock::protobuf::api::StageReview);
    #endif//_stage_review__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _prev_parent_number__GUARD__
    #define _prev_parent_number__GUARD__
    DECL_STRONG_TYPE(prev_parent_number, int64);
    #endif//_prev_parent_number__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _spdr_broker_status__GUARD__
    #define _spdr_broker_status__GUARD__
    DECL_STRONG_TYPE(spdr_broker_status, spiderrock::protobuf::api::SpdrBrokerStatus);
    #endif//_spdr_broker_status__GUARD__

    #ifndef _spdr_order_status__GUARD__
    #define _spdr_order_status__GUARD__
    DECL_STRONG_TYPE(spdr_order_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_spdr_order_status__GUARD__

    #ifndef _spdr_close_reason__GUARD__
    #define _spdr_close_reason__GUARD__
    DECL_STRONG_TYPE(spdr_close_reason, spiderrock::protobuf::api::SpdrCloseReason);
    #endif//_spdr_close_reason__GUARD__

    #ifndef _spdr_reject_reason__GUARD__
    #define _spdr_reject_reason__GUARD__
    DECL_STRONG_TYPE(spdr_reject_reason, spiderrock::protobuf::api::SpdrRejectReason);
    #endif//_spdr_reject_reason__GUARD__

    #ifndef _spdr_comment__GUARD__
    #define _spdr_comment__GUARD__
    DECL_STRONG_TYPE(spdr_comment, string);
    #endif//_spdr_comment__GUARD__

    #ifndef _bid_prc__double__GUARD__
    #define _bid_prc__double__GUARD__
    DECL_STRONG_TYPE(bid_prc__double, double);
    #endif//_bid_prc__double__GUARD__

    #ifndef _ask_prc__double__GUARD__
    #define _ask_prc__double__GUARD__
    DECL_STRONG_TYPE(ask_prc__double, double);
    #endif//_ask_prc__double__GUARD__

    #ifndef _bid_ivol__GUARD__
    #define _bid_ivol__GUARD__
    DECL_STRONG_TYPE(bid_ivol, float);
    #endif//_bid_ivol__GUARD__

    #ifndef _ask_ivol__GUARD__
    #define _ask_ivol__GUARD__
    DECL_STRONG_TYPE(ask_ivol, float);
    #endif//_ask_ivol__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _surface_prc__GUARD__
    #define _surface_prc__GUARD__
    DECL_STRONG_TYPE(surface_prc, float);
    #endif//_surface_prc__GUARD__

    #ifndef _surface_vol__GUARD__
    #define _surface_vol__GUARD__
    DECL_STRONG_TYPE(surface_vol, float);
    #endif//_surface_vol__GUARD__

    #ifndef _surface_yrs__GUARD__
    #define _surface_yrs__GUARD__
    DECL_STRONG_TYPE(surface_yrs, float);
    #endif//_surface_yrs__GUARD__

    #ifndef _surface_sdiv__GUARD__
    #define _surface_sdiv__GUARD__
    DECL_STRONG_TYPE(surface_sdiv, float);
    #endif//_surface_sdiv__GUARD__

    #ifndef _surface_rate__GUARD__
    #define _surface_rate__GUARD__
    DECL_STRONG_TYPE(surface_rate, float);
    #endif//_surface_rate__GUARD__

    #ifndef _surface_uprc__GUARD__
    #define _surface_uprc__GUARD__
    DECL_STRONG_TYPE(surface_uprc, float);
    #endif//_surface_uprc__GUARD__

    #ifndef _surface_de__GUARD__
    #define _surface_de__GUARD__
    DECL_STRONG_TYPE(surface_de, float);
    #endif//_surface_de__GUARD__

    #ifndef _surface_ga__GUARD__
    #define _surface_ga__GUARD__
    DECL_STRONG_TYPE(surface_ga, float);
    #endif//_surface_ga__GUARD__

    #ifndef _surface_th__GUARD__
    #define _surface_th__GUARD__
    DECL_STRONG_TYPE(surface_th, float);
    #endif//_surface_th__GUARD__

    #ifndef _surface_ve__GUARD__
    #define _surface_ve__GUARD__
    DECL_STRONG_TYPE(surface_ve, float);
    #endif//_surface_ve__GUARD__

    #ifndef _surface_ro__GUARD__
    #define _surface_ro__GUARD__
    DECL_STRONG_TYPE(surface_ro, float);
    #endif//_surface_ro__GUARD__

    #ifndef _surface_ph__GUARD__
    #define _surface_ph__GUARD__
    DECL_STRONG_TYPE(surface_ph, float);
    #endif//_surface_ph__GUARD__

    #ifndef _arrive_nbbo_size__GUARD__
    #define _arrive_nbbo_size__GUARD__
    DECL_STRONG_TYPE(arrive_nbbo_size, int32);
    #endif//_arrive_nbbo_size__GUARD__

    #ifndef _arrive_nbbo_exch__GUARD__
    #define _arrive_nbbo_exch__GUARD__
    DECL_STRONG_TYPE(arrive_nbbo_exch, spiderrock::protobuf::api::OptExch);
    #endif//_arrive_nbbo_exch__GUARD__

    #ifndef _arrive_cum_size__GUARD__
    #define _arrive_cum_size__GUARD__
    DECL_STRONG_TYPE(arrive_cum_size, int32);
    #endif//_arrive_cum_size__GUARD__

    #ifndef _arrive_num_exch__GUARD__
    #define _arrive_num_exch__GUARD__
    DECL_STRONG_TYPE(arrive_num_exch, int32);
    #endif//_arrive_num_exch__GUARD__

    #ifndef _arrive_limit_size__GUARD__
    #define _arrive_limit_size__GUARD__
    DECL_STRONG_TYPE(arrive_limit_size, int32);
    #endif//_arrive_limit_size__GUARD__

    #ifndef _arrive_limit_prc__GUARD__
    #define _arrive_limit_prc__GUARD__
    DECL_STRONG_TYPE(arrive_limit_prc, double);
    #endif//_arrive_limit_prc__GUARD__

    #ifndef _avg_fill_prc__GUARD__
    #define _avg_fill_prc__GUARD__
    DECL_STRONG_TYPE(avg_fill_prc, double);
    #endif//_avg_fill_prc__GUARD__

    #ifndef _cum_fill_quan__GUARD__
    #define _cum_fill_quan__GUARD__
    DECL_STRONG_TYPE(cum_fill_quan, int32);
    #endif//_cum_fill_quan__GUARD__

    #ifndef _num_child_orders__uint32__GUARD__
    #define _num_child_orders__uint32__GUARD__
    DECL_STRONG_TYPE(num_child_orders__uint32, uint32);
    #endif//_num_child_orders__uint32__GUARD__

    #ifndef _num_day_child_orders__GUARD__
    #define _num_day_child_orders__GUARD__
    DECL_STRONG_TYPE(num_day_child_orders, uint32);
    #endif//_num_day_child_orders__GUARD__

    #ifndef _open_order_size__GUARD__
    #define _open_order_size__GUARD__
    DECL_STRONG_TYPE(open_order_size, int32);
    #endif//_open_order_size__GUARD__

    #ifndef _action_order_size__GUARD__
    #define _action_order_size__GUARD__
    DECL_STRONG_TYPE(action_order_size, int32);
    #endif//_action_order_size__GUARD__

    #ifndef _risk_limit_size__GUARD__
    #define _risk_limit_size__GUARD__
    DECL_STRONG_TYPE(risk_limit_size, int32);
    #endif//_risk_limit_size__GUARD__

    #ifndef _risk_limit_desc__GUARD__
    #define _risk_limit_desc__GUARD__
    DECL_STRONG_TYPE(risk_limit_desc, spiderrock::protobuf::api::SpdrRisk);
    #endif//_risk_limit_desc__GUARD__

    #ifndef _risk_limit_level__GUARD__
    #define _risk_limit_level__GUARD__
    DECL_STRONG_TYPE(risk_limit_level, spiderrock::protobuf::api::SpdrRiskLevel);
    #endif//_risk_limit_level__GUARD__

    #ifndef _risk_limit_detail__GUARD__
    #define _risk_limit_detail__GUARD__
    DECL_STRONG_TYPE(risk_limit_detail, string);
    #endif//_risk_limit_detail__GUARD__

    #ifndef _limit_ref_uprc__GUARD__
    #define _limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(limit_ref_uprc, double);
    #endif//_limit_ref_uprc__GUARD__

    #ifndef _limit_price__GUARD__
    #define _limit_price__GUARD__
    DECL_STRONG_TYPE(limit_price, double);
    #endif//_limit_price__GUARD__

    #ifndef _limit_vol__GUARD__
    #define _limit_vol__GUARD__
    DECL_STRONG_TYPE(limit_vol, float);
    #endif//_limit_vol__GUARD__

    #ifndef _make_limit_price__GUARD__
    #define _make_limit_price__GUARD__
    DECL_STRONG_TYPE(make_limit_price, double);
    #endif//_make_limit_price__GUARD__

    #ifndef _make_limit_err__GUARD__
    #define _make_limit_err__GUARD__
    DECL_STRONG_TYPE(make_limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_make_limit_err__GUARD__

    #ifndef _make_limit_err_desc__GUARD__
    #define _make_limit_err_desc__GUARD__
    DECL_STRONG_TYPE(make_limit_err_desc, string);
    #endif//_make_limit_err_desc__GUARD__

    #ifndef _take_limit_price__GUARD__
    #define _take_limit_price__GUARD__
    DECL_STRONG_TYPE(take_limit_price, double);
    #endif//_take_limit_price__GUARD__

    #ifndef _take_limit_err__GUARD__
    #define _take_limit_err__GUARD__
    DECL_STRONG_TYPE(take_limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_take_limit_err__GUARD__

    #ifndef _take_limit_err_desc__GUARD__
    #define _take_limit_err_desc__GUARD__
    DECL_STRONG_TYPE(take_limit_err_desc, string);
    #endif//_take_limit_err_desc__GUARD__

    #ifndef _broker_state__GUARD__
    #define _broker_state__GUARD__
    DECL_STRONG_TYPE(broker_state, spiderrock::protobuf::api::BrokerState);
    #endif//_broker_state__GUARD__

    #ifndef _make_state__GUARD__
    #define _make_state__GUARD__
    DECL_STRONG_TYPE(make_state, spiderrock::protobuf::api::AlgoState);
    #endif//_make_state__GUARD__

    #ifndef _take_state__GUARD__
    #define _take_state__GUARD__
    DECL_STRONG_TYPE(take_state, spiderrock::protobuf::api::AlgoState);
    #endif//_take_state__GUARD__

    #ifndef _mkt_cross_state__GUARD__
    #define _mkt_cross_state__GUARD__
    DECL_STRONG_TYPE(mkt_cross_state, spiderrock::protobuf::api::MktCrossState);
    #endif//_mkt_cross_state__GUARD__

    #ifndef _last_child_event__GUARD__
    #define _last_child_event__GUARD__
    DECL_STRONG_TYPE(last_child_event, spiderrock::protobuf::api::ChildEvent);
    #endif//_last_child_event__GUARD__

    #ifndef _spdr_mkt_state__GUARD__
    #define _spdr_mkt_state__GUARD__
    DECL_STRONG_TYPE(spdr_mkt_state, spiderrock::protobuf::api::SpdrMarketState);
    #endif//_spdr_mkt_state__GUARD__

    #ifndef _num_orders__GUARD__
    #define _num_orders__GUARD__
    DECL_STRONG_TYPE(num_orders, int32);
    #endif//_num_orders__GUARD__

    #ifndef _leaves_qty__GUARD__
    #define _leaves_qty__GUARD__
    DECL_STRONG_TYPE(leaves_qty, int32);
    #endif//_leaves_qty__GUARD__

    #ifndef _child_order_leaves__GUARD__
    #define _child_order_leaves__GUARD__
    DECL_STRONG_TYPE(child_order_leaves, int32);
    #endif//_child_order_leaves__GUARD__

    #ifndef _arrival_sdiv__GUARD__
    #define _arrival_sdiv__GUARD__
    DECL_STRONG_TYPE(arrival_sdiv, float);
    #endif//_arrival_sdiv__GUARD__

    #ifndef _arrival_rate__GUARD__
    #define _arrival_rate__GUARD__
    DECL_STRONG_TYPE(arrival_rate, float);
    #endif//_arrival_rate__GUARD__

    #ifndef _arrival_ddiv__GUARD__
    #define _arrival_ddiv__GUARD__
    DECL_STRONG_TYPE(arrival_ddiv, float);
    #endif//_arrival_ddiv__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

    #ifndef _theo_opx__GUARD__
    #define _theo_opx__GUARD__
    DECL_STRONG_TYPE(theo_opx, float);
    #endif//_theo_opx__GUARD__

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _child_order_mask__GUARD__
    #define _child_order_mask__GUARD__
    DECL_STRONG_TYPE(child_order_mask, uint32);
    #endif//_child_order_mask__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _rec_type__GUARD__
    #define _rec_type__GUARD__
    DECL_STRONG_TYPE(rec_type, spiderrock::protobuf::api::EventRecType);
    #endif//_rec_type__GUARD__

    
    class SpdrParentBrkrEvent_PKey {
        public:
        //using statements for all types used in this class
        using parent_number = spiderrock::protobuf::api::parent_number;
        using rec_type = spiderrock::protobuf::api::rec_type;

        private:
        parent_number m_parent_number{};
        rec_type m_rec_type{};

        public:
        parent_number get_parent_number() const {
            return m_parent_number;
        }
        rec_type get_rec_type() const {
            return m_rec_type;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_rec_type(const rec_type& value)  {
            m_rec_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrkrEvent_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrkrEvent_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }
        void set(const rec_type & value) { set_rec_type(value); }


        SpdrParentBrkrEvent_PKey() {}

        virtual ~SpdrParentBrkrEvent_PKey() {
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
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_parent_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventRecType>(m_rec_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_parent_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventRecType>(m_rec_type)));
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
                    case 10: {m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_rec_type = static_cast<spiderrock::protobuf::api::EventRecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentBrkrEvent {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentBrkrEvent_PKey;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using accnt = spiderrock::protobuf::api::accnt;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using order_side = spiderrock::protobuf::api::order_side;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using event_number = spiderrock::protobuf::api::event_number;
        using stage_type = spiderrock::protobuf::api::stage_type;
        using stage_review = spiderrock::protobuf::api::stage_review;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using prev_parent_number = spiderrock::protobuf::api::prev_parent_number;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using spdr_broker_status = spiderrock::protobuf::api::spdr_broker_status;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using spdr_reject_reason = spiderrock::protobuf::api::spdr_reject_reason;
        using spdr_comment = spiderrock::protobuf::api::spdr_comment;
        using bid_prc = spiderrock::protobuf::api::bid_prc__double;
        using ask_prc = spiderrock::protobuf::api::ask_prc__double;
        using bid_ivol = spiderrock::protobuf::api::bid_ivol;
        using ask_ivol = spiderrock::protobuf::api::ask_ivol;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using surface_prc = spiderrock::protobuf::api::surface_prc;
        using surface_vol = spiderrock::protobuf::api::surface_vol;
        using surface_yrs = spiderrock::protobuf::api::surface_yrs;
        using surface_sdiv = spiderrock::protobuf::api::surface_sdiv;
        using surface_rate = spiderrock::protobuf::api::surface_rate;
        using surface_uprc = spiderrock::protobuf::api::surface_uprc;
        using surface_de = spiderrock::protobuf::api::surface_de;
        using surface_ga = spiderrock::protobuf::api::surface_ga;
        using surface_th = spiderrock::protobuf::api::surface_th;
        using surface_ve = spiderrock::protobuf::api::surface_ve;
        using surface_ro = spiderrock::protobuf::api::surface_ro;
        using surface_ph = spiderrock::protobuf::api::surface_ph;
        using arrive_nbbo_size = spiderrock::protobuf::api::arrive_nbbo_size;
        using arrive_nbbo_exch = spiderrock::protobuf::api::arrive_nbbo_exch;
        using arrive_cum_size = spiderrock::protobuf::api::arrive_cum_size;
        using arrive_num_exch = spiderrock::protobuf::api::arrive_num_exch;
        using arrive_limit_size = spiderrock::protobuf::api::arrive_limit_size;
        using arrive_limit_prc = spiderrock::protobuf::api::arrive_limit_prc;
        using avg_fill_prc = spiderrock::protobuf::api::avg_fill_prc;
        using cum_fill_quan = spiderrock::protobuf::api::cum_fill_quan;
        using num_child_orders = spiderrock::protobuf::api::num_child_orders__uint32;
        using num_day_child_orders = spiderrock::protobuf::api::num_day_child_orders;
        using open_order_size = spiderrock::protobuf::api::open_order_size;
        using action_order_size = spiderrock::protobuf::api::action_order_size;
        using risk_limit_size = spiderrock::protobuf::api::risk_limit_size;
        using risk_limit_desc = spiderrock::protobuf::api::risk_limit_desc;
        using risk_limit_level = spiderrock::protobuf::api::risk_limit_level;
        using risk_limit_detail = spiderrock::protobuf::api::risk_limit_detail;
        using limit_ref_uprc = spiderrock::protobuf::api::limit_ref_uprc;
        using limit_price = spiderrock::protobuf::api::limit_price;
        using limit_vol = spiderrock::protobuf::api::limit_vol;
        using make_limit_price = spiderrock::protobuf::api::make_limit_price;
        using make_limit_err = spiderrock::protobuf::api::make_limit_err;
        using make_limit_err_desc = spiderrock::protobuf::api::make_limit_err_desc;
        using take_limit_price = spiderrock::protobuf::api::take_limit_price;
        using take_limit_err = spiderrock::protobuf::api::take_limit_err;
        using take_limit_err_desc = spiderrock::protobuf::api::take_limit_err_desc;
        using broker_state = spiderrock::protobuf::api::broker_state;
        using make_state = spiderrock::protobuf::api::make_state;
        using take_state = spiderrock::protobuf::api::take_state;
        using mkt_cross_state = spiderrock::protobuf::api::mkt_cross_state;
        using last_child_event = spiderrock::protobuf::api::last_child_event;
        using spdr_mkt_state = spiderrock::protobuf::api::spdr_mkt_state;
        using num_orders = spiderrock::protobuf::api::num_orders;
        using leaves_qty = spiderrock::protobuf::api::leaves_qty;
        using child_order_leaves = spiderrock::protobuf::api::child_order_leaves;
        using arrival_sdiv = spiderrock::protobuf::api::arrival_sdiv;
        using arrival_rate = spiderrock::protobuf::api::arrival_rate;
        using arrival_ddiv = spiderrock::protobuf::api::arrival_ddiv;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using theo_opx = spiderrock::protobuf::api::theo_opx;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using child_order_mask = spiderrock::protobuf::api::child_order_mask;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using user_name = spiderrock::protobuf::api::user_name;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        accnt m_accnt{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        order_side m_order_side{};
        client_firm m_client_firm{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        event_number m_event_number{};
        stage_type m_stage_type{};
        stage_review m_stage_review{};
        base_parent_number m_base_parent_number{};
        prev_parent_number m_prev_parent_number{};
        engine_name m_engine_name{};
        ticker m_ticker{};
        spdr_broker_status m_spdr_broker_status{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        spdr_reject_reason m_spdr_reject_reason{};
        spdr_comment m_spdr_comment{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        bid_ivol m_bid_ivol{};
        ask_ivol m_ask_ivol{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        surface_prc m_surface_prc{};
        surface_vol m_surface_vol{};
        surface_yrs m_surface_yrs{};
        surface_sdiv m_surface_sdiv{};
        surface_rate m_surface_rate{};
        surface_uprc m_surface_uprc{};
        surface_de m_surface_de{};
        surface_ga m_surface_ga{};
        surface_th m_surface_th{};
        surface_ve m_surface_ve{};
        surface_ro m_surface_ro{};
        surface_ph m_surface_ph{};
        arrive_nbbo_size m_arrive_nbbo_size{};
        arrive_nbbo_exch m_arrive_nbbo_exch{};
        arrive_cum_size m_arrive_cum_size{};
        arrive_num_exch m_arrive_num_exch{};
        arrive_limit_size m_arrive_limit_size{};
        arrive_limit_prc m_arrive_limit_prc{};
        avg_fill_prc m_avg_fill_prc{};
        cum_fill_quan m_cum_fill_quan{};
        num_child_orders m_num_child_orders{};
        num_day_child_orders m_num_day_child_orders{};
        open_order_size m_open_order_size{};
        action_order_size m_action_order_size{};
        risk_limit_size m_risk_limit_size{};
        risk_limit_desc m_risk_limit_desc{};
        risk_limit_level m_risk_limit_level{};
        risk_limit_detail m_risk_limit_detail{};
        limit_ref_uprc m_limit_ref_uprc{};
        limit_price m_limit_price{};
        limit_vol m_limit_vol{};
        make_limit_price m_make_limit_price{};
        make_limit_err m_make_limit_err{};
        make_limit_err_desc m_make_limit_err_desc{};
        take_limit_price m_take_limit_price{};
        take_limit_err m_take_limit_err{};
        take_limit_err_desc m_take_limit_err_desc{};
        broker_state m_broker_state{};
        make_state m_make_state{};
        take_state m_take_state{};
        mkt_cross_state m_mkt_cross_state{};
        last_child_event m_last_child_event{};
        spdr_mkt_state m_spdr_mkt_state{};
        num_orders m_num_orders{};
        leaves_qty m_leaves_qty{};
        child_order_leaves m_child_order_leaves{};
        arrival_sdiv m_arrival_sdiv{};
        arrival_rate m_arrival_rate{};
        arrival_ddiv m_arrival_ddiv{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        theo_opx m_theo_opx{};
        theo_vol m_theo_vol{};
        child_order_mask m_child_order_mask{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        user_name m_user_name{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        event_number get_event_number() const {
            return m_event_number;
        }		
        stage_type get_stage_type() const {
            return m_stage_type;
        }		
        stage_review get_stage_review() const {
            return m_stage_review;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        prev_parent_number get_prev_parent_number() const {
            return m_prev_parent_number;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        spdr_broker_status get_spdr_broker_status() const {
            return m_spdr_broker_status;
        }		
        spdr_order_status get_spdr_order_status() const {
            return m_spdr_order_status;
        }		
        spdr_close_reason get_spdr_close_reason() const {
            return m_spdr_close_reason;
        }		
        spdr_reject_reason get_spdr_reject_reason() const {
            return m_spdr_reject_reason;
        }		
        spdr_comment get_spdr_comment() const {
            return m_spdr_comment;
        }		
        bid_prc get_bid_prc() const {
            return m_bid_prc;
        }		
        ask_prc get_ask_prc() const {
            return m_ask_prc;
        }		
        bid_ivol get_bid_ivol() const {
            return m_bid_ivol;
        }		
        ask_ivol get_ask_ivol() const {
            return m_ask_ivol;
        }		
        bid_size get_bid_size() const {
            return m_bid_size;
        }		
        ask_size get_ask_size() const {
            return m_ask_size;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        surface_prc get_surface_prc() const {
            return m_surface_prc;
        }		
        surface_vol get_surface_vol() const {
            return m_surface_vol;
        }		
        surface_yrs get_surface_yrs() const {
            return m_surface_yrs;
        }		
        surface_sdiv get_surface_sdiv() const {
            return m_surface_sdiv;
        }		
        surface_rate get_surface_rate() const {
            return m_surface_rate;
        }		
        surface_uprc get_surface_uprc() const {
            return m_surface_uprc;
        }		
        surface_de get_surface_de() const {
            return m_surface_de;
        }		
        surface_ga get_surface_ga() const {
            return m_surface_ga;
        }		
        surface_th get_surface_th() const {
            return m_surface_th;
        }		
        surface_ve get_surface_ve() const {
            return m_surface_ve;
        }		
        surface_ro get_surface_ro() const {
            return m_surface_ro;
        }		
        surface_ph get_surface_ph() const {
            return m_surface_ph;
        }		
        arrive_nbbo_size get_arrive_nbbo_size() const {
            return m_arrive_nbbo_size;
        }		
        arrive_nbbo_exch get_arrive_nbbo_exch() const {
            return m_arrive_nbbo_exch;
        }		
        arrive_cum_size get_arrive_cum_size() const {
            return m_arrive_cum_size;
        }		
        arrive_num_exch get_arrive_num_exch() const {
            return m_arrive_num_exch;
        }		
        arrive_limit_size get_arrive_limit_size() const {
            return m_arrive_limit_size;
        }		
        arrive_limit_prc get_arrive_limit_prc() const {
            return m_arrive_limit_prc;
        }		
        avg_fill_prc get_avg_fill_prc() const {
            return m_avg_fill_prc;
        }		
        cum_fill_quan get_cum_fill_quan() const {
            return m_cum_fill_quan;
        }		
        num_child_orders get_num_child_orders() const {
            return m_num_child_orders;
        }		
        num_day_child_orders get_num_day_child_orders() const {
            return m_num_day_child_orders;
        }		
        open_order_size get_open_order_size() const {
            return m_open_order_size;
        }		
        action_order_size get_action_order_size() const {
            return m_action_order_size;
        }		
        risk_limit_size get_risk_limit_size() const {
            return m_risk_limit_size;
        }		
        risk_limit_desc get_risk_limit_desc() const {
            return m_risk_limit_desc;
        }		
        risk_limit_level get_risk_limit_level() const {
            return m_risk_limit_level;
        }		
        risk_limit_detail get_risk_limit_detail() const {
            return m_risk_limit_detail;
        }		
        limit_ref_uprc get_limit_ref_uprc() const {
            return m_limit_ref_uprc;
        }		
        limit_price get_limit_price() const {
            return m_limit_price;
        }		
        limit_vol get_limit_vol() const {
            return m_limit_vol;
        }		
        make_limit_price get_make_limit_price() const {
            return m_make_limit_price;
        }		
        make_limit_err get_make_limit_err() const {
            return m_make_limit_err;
        }		
        make_limit_err_desc get_make_limit_err_desc() const {
            return m_make_limit_err_desc;
        }		
        take_limit_price get_take_limit_price() const {
            return m_take_limit_price;
        }		
        take_limit_err get_take_limit_err() const {
            return m_take_limit_err;
        }		
        take_limit_err_desc get_take_limit_err_desc() const {
            return m_take_limit_err_desc;
        }		
        broker_state get_broker_state() const {
            return m_broker_state;
        }		
        make_state get_make_state() const {
            return m_make_state;
        }		
        take_state get_take_state() const {
            return m_take_state;
        }		
        mkt_cross_state get_mkt_cross_state() const {
            return m_mkt_cross_state;
        }		
        last_child_event get_last_child_event() const {
            return m_last_child_event;
        }		
        spdr_mkt_state get_spdr_mkt_state() const {
            return m_spdr_mkt_state;
        }		
        num_orders get_num_orders() const {
            return m_num_orders;
        }		
        leaves_qty get_leaves_qty() const {
            return m_leaves_qty;
        }		
        child_order_leaves get_child_order_leaves() const {
            return m_child_order_leaves;
        }		
        arrival_sdiv get_arrival_sdiv() const {
            return m_arrival_sdiv;
        }		
        arrival_rate get_arrival_rate() const {
            return m_arrival_rate;
        }		
        arrival_ddiv get_arrival_ddiv() const {
            return m_arrival_ddiv;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
        }		
        theo_opx get_theo_opx() const {
            return m_theo_opx;
        }		
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        child_order_mask get_child_order_mask() const {
            return m_child_order_mask;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
        }		
        user_name get_user_name() const {
            return m_user_name;
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
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_event_number(const event_number& value)  {
            m_event_number = value;
        }
        void set_stage_type(const stage_type& value)  {
            m_stage_type = value;
        }
        void set_stage_review(const stage_review& value)  {
            m_stage_review = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_prev_parent_number(const prev_parent_number& value)  {
            m_prev_parent_number = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_spdr_broker_status(const spdr_broker_status& value)  {
            m_spdr_broker_status = value;
        }
        void set_spdr_order_status(const spdr_order_status& value)  {
            m_spdr_order_status = value;
        }
        void set_spdr_close_reason(const spdr_close_reason& value)  {
            m_spdr_close_reason = value;
        }
        void set_spdr_reject_reason(const spdr_reject_reason& value)  {
            m_spdr_reject_reason = value;
        }
        void set_spdr_comment(const spdr_comment& value)  {
            m_spdr_comment = value;
        }
        void set_bid_prc(const bid_prc& value)  {
            m_bid_prc = value;
        }
        void set_ask_prc(const ask_prc& value)  {
            m_ask_prc = value;
        }
        void set_bid_ivol(const bid_ivol& value)  {
            m_bid_ivol = value;
        }
        void set_ask_ivol(const ask_ivol& value)  {
            m_ask_ivol = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_surface_prc(const surface_prc& value)  {
            m_surface_prc = value;
        }
        void set_surface_vol(const surface_vol& value)  {
            m_surface_vol = value;
        }
        void set_surface_yrs(const surface_yrs& value)  {
            m_surface_yrs = value;
        }
        void set_surface_sdiv(const surface_sdiv& value)  {
            m_surface_sdiv = value;
        }
        void set_surface_rate(const surface_rate& value)  {
            m_surface_rate = value;
        }
        void set_surface_uprc(const surface_uprc& value)  {
            m_surface_uprc = value;
        }
        void set_surface_de(const surface_de& value)  {
            m_surface_de = value;
        }
        void set_surface_ga(const surface_ga& value)  {
            m_surface_ga = value;
        }
        void set_surface_th(const surface_th& value)  {
            m_surface_th = value;
        }
        void set_surface_ve(const surface_ve& value)  {
            m_surface_ve = value;
        }
        void set_surface_ro(const surface_ro& value)  {
            m_surface_ro = value;
        }
        void set_surface_ph(const surface_ph& value)  {
            m_surface_ph = value;
        }
        void set_arrive_nbbo_size(const arrive_nbbo_size& value)  {
            m_arrive_nbbo_size = value;
        }
        void set_arrive_nbbo_exch(const arrive_nbbo_exch& value)  {
            m_arrive_nbbo_exch = value;
        }
        void set_arrive_cum_size(const arrive_cum_size& value)  {
            m_arrive_cum_size = value;
        }
        void set_arrive_num_exch(const arrive_num_exch& value)  {
            m_arrive_num_exch = value;
        }
        void set_arrive_limit_size(const arrive_limit_size& value)  {
            m_arrive_limit_size = value;
        }
        void set_arrive_limit_prc(const arrive_limit_prc& value)  {
            m_arrive_limit_prc = value;
        }
        void set_avg_fill_prc(const avg_fill_prc& value)  {
            m_avg_fill_prc = value;
        }
        void set_cum_fill_quan(const cum_fill_quan& value)  {
            m_cum_fill_quan = value;
        }
        void set_num_child_orders(const num_child_orders& value)  {
            m_num_child_orders = value;
        }
        void set_num_day_child_orders(const num_day_child_orders& value)  {
            m_num_day_child_orders = value;
        }
        void set_open_order_size(const open_order_size& value)  {
            m_open_order_size = value;
        }
        void set_action_order_size(const action_order_size& value)  {
            m_action_order_size = value;
        }
        void set_risk_limit_size(const risk_limit_size& value)  {
            m_risk_limit_size = value;
        }
        void set_risk_limit_desc(const risk_limit_desc& value)  {
            m_risk_limit_desc = value;
        }
        void set_risk_limit_level(const risk_limit_level& value)  {
            m_risk_limit_level = value;
        }
        void set_risk_limit_detail(const risk_limit_detail& value)  {
            m_risk_limit_detail = value;
        }
        void set_limit_ref_uprc(const limit_ref_uprc& value)  {
            m_limit_ref_uprc = value;
        }
        void set_limit_price(const limit_price& value)  {
            m_limit_price = value;
        }
        void set_limit_vol(const limit_vol& value)  {
            m_limit_vol = value;
        }
        void set_make_limit_price(const make_limit_price& value)  {
            m_make_limit_price = value;
        }
        void set_make_limit_err(const make_limit_err& value)  {
            m_make_limit_err = value;
        }
        void set_make_limit_err_desc(const make_limit_err_desc& value)  {
            m_make_limit_err_desc = value;
        }
        void set_take_limit_price(const take_limit_price& value)  {
            m_take_limit_price = value;
        }
        void set_take_limit_err(const take_limit_err& value)  {
            m_take_limit_err = value;
        }
        void set_take_limit_err_desc(const take_limit_err_desc& value)  {
            m_take_limit_err_desc = value;
        }
        void set_broker_state(const broker_state& value)  {
            m_broker_state = value;
        }
        void set_make_state(const make_state& value)  {
            m_make_state = value;
        }
        void set_take_state(const take_state& value)  {
            m_take_state = value;
        }
        void set_mkt_cross_state(const mkt_cross_state& value)  {
            m_mkt_cross_state = value;
        }
        void set_last_child_event(const last_child_event& value)  {
            m_last_child_event = value;
        }
        void set_spdr_mkt_state(const spdr_mkt_state& value)  {
            m_spdr_mkt_state = value;
        }
        void set_num_orders(const num_orders& value)  {
            m_num_orders = value;
        }
        void set_leaves_qty(const leaves_qty& value)  {
            m_leaves_qty = value;
        }
        void set_child_order_leaves(const child_order_leaves& value)  {
            m_child_order_leaves = value;
        }
        void set_arrival_sdiv(const arrival_sdiv& value)  {
            m_arrival_sdiv = value;
        }
        void set_arrival_rate(const arrival_rate& value)  {
            m_arrival_rate = value;
        }
        void set_arrival_ddiv(const arrival_ddiv& value)  {
            m_arrival_ddiv = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
        }
        void set_theo_opx(const theo_opx& value)  {
            m_theo_opx = value;
        }
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_child_order_mask(const child_order_mask& value)  {
            m_child_order_mask = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrkrEvent::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const event_number & value) {
            set_event_number(value);
        }
        void set(const stage_type & value) {
            set_stage_type(value);
        }
        void set(const stage_review & value) {
            set_stage_review(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const prev_parent_number & value) {
            set_prev_parent_number(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const spdr_broker_status & value) {
            set_spdr_broker_status(value);
        }
        void set(const spdr_order_status & value) {
            set_spdr_order_status(value);
        }
        void set(const spdr_close_reason & value) {
            set_spdr_close_reason(value);
        }
        void set(const spdr_reject_reason & value) {
            set_spdr_reject_reason(value);
        }
        void set(const spdr_comment & value) {
            set_spdr_comment(value);
        }
        void set(const bid_prc & value) {
            set_bid_prc(value);
        }
        void set(const ask_prc & value) {
            set_ask_prc(value);
        }
        void set(const bid_ivol & value) {
            set_bid_ivol(value);
        }
        void set(const ask_ivol & value) {
            set_ask_ivol(value);
        }
        void set(const bid_size & value) {
            set_bid_size(value);
        }
        void set(const ask_size & value) {
            set_ask_size(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const surface_prc & value) {
            set_surface_prc(value);
        }
        void set(const surface_vol & value) {
            set_surface_vol(value);
        }
        void set(const surface_yrs & value) {
            set_surface_yrs(value);
        }
        void set(const surface_sdiv & value) {
            set_surface_sdiv(value);
        }
        void set(const surface_rate & value) {
            set_surface_rate(value);
        }
        void set(const surface_uprc & value) {
            set_surface_uprc(value);
        }
        void set(const surface_de & value) {
            set_surface_de(value);
        }
        void set(const surface_ga & value) {
            set_surface_ga(value);
        }
        void set(const surface_th & value) {
            set_surface_th(value);
        }
        void set(const surface_ve & value) {
            set_surface_ve(value);
        }
        void set(const surface_ro & value) {
            set_surface_ro(value);
        }
        void set(const surface_ph & value) {
            set_surface_ph(value);
        }
        void set(const arrive_nbbo_size & value) {
            set_arrive_nbbo_size(value);
        }
        void set(const arrive_nbbo_exch & value) {
            set_arrive_nbbo_exch(value);
        }
        void set(const arrive_cum_size & value) {
            set_arrive_cum_size(value);
        }
        void set(const arrive_num_exch & value) {
            set_arrive_num_exch(value);
        }
        void set(const arrive_limit_size & value) {
            set_arrive_limit_size(value);
        }
        void set(const arrive_limit_prc & value) {
            set_arrive_limit_prc(value);
        }
        void set(const avg_fill_prc & value) {
            set_avg_fill_prc(value);
        }
        void set(const cum_fill_quan & value) {
            set_cum_fill_quan(value);
        }
        void set(const num_child_orders & value) {
            set_num_child_orders(value);
        }
        void set(const num_day_child_orders & value) {
            set_num_day_child_orders(value);
        }
        void set(const open_order_size & value) {
            set_open_order_size(value);
        }
        void set(const action_order_size & value) {
            set_action_order_size(value);
        }
        void set(const risk_limit_size & value) {
            set_risk_limit_size(value);
        }
        void set(const risk_limit_desc & value) {
            set_risk_limit_desc(value);
        }
        void set(const risk_limit_level & value) {
            set_risk_limit_level(value);
        }
        void set(const risk_limit_detail & value) {
            set_risk_limit_detail(value);
        }
        void set(const limit_ref_uprc & value) {
            set_limit_ref_uprc(value);
        }
        void set(const limit_price & value) {
            set_limit_price(value);
        }
        void set(const limit_vol & value) {
            set_limit_vol(value);
        }
        void set(const make_limit_price & value) {
            set_make_limit_price(value);
        }
        void set(const make_limit_err & value) {
            set_make_limit_err(value);
        }
        void set(const make_limit_err_desc & value) {
            set_make_limit_err_desc(value);
        }
        void set(const take_limit_price & value) {
            set_take_limit_price(value);
        }
        void set(const take_limit_err & value) {
            set_take_limit_err(value);
        }
        void set(const take_limit_err_desc & value) {
            set_take_limit_err_desc(value);
        }
        void set(const broker_state & value) {
            set_broker_state(value);
        }
        void set(const make_state & value) {
            set_make_state(value);
        }
        void set(const take_state & value) {
            set_take_state(value);
        }
        void set(const mkt_cross_state & value) {
            set_mkt_cross_state(value);
        }
        void set(const last_child_event & value) {
            set_last_child_event(value);
        }
        void set(const spdr_mkt_state & value) {
            set_spdr_mkt_state(value);
        }
        void set(const num_orders & value) {
            set_num_orders(value);
        }
        void set(const leaves_qty & value) {
            set_leaves_qty(value);
        }
        void set(const child_order_leaves & value) {
            set_child_order_leaves(value);
        }
        void set(const arrival_sdiv & value) {
            set_arrival_sdiv(value);
        }
        void set(const arrival_rate & value) {
            set_arrival_rate(value);
        }
        void set(const arrival_ddiv & value) {
            set_arrival_ddiv(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_sec_type & value) {
            set_hedge_sec_type(value);
        }
        void set(const theo_opx & value) {
            set_theo_opx(value);
        }
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const child_order_mask & value) {
            set_child_order_mask(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrParentBrkrEvent & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_accnt);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_order_side);
            set(value.m_client_firm);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_event_number);
            set(value.m_stage_type);
            set(value.m_stage_review);
            set(value.m_base_parent_number);
            set(value.m_prev_parent_number);
            set(value.m_engine_name);
            set(value.m_ticker);
            set(value.m_spdr_broker_status);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_spdr_reject_reason);
            set(value.m_spdr_comment);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_bid_ivol);
            set(value.m_ask_ivol);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_surface_prc);
            set(value.m_surface_vol);
            set(value.m_surface_yrs);
            set(value.m_surface_sdiv);
            set(value.m_surface_rate);
            set(value.m_surface_uprc);
            set(value.m_surface_de);
            set(value.m_surface_ga);
            set(value.m_surface_th);
            set(value.m_surface_ve);
            set(value.m_surface_ro);
            set(value.m_surface_ph);
            set(value.m_arrive_nbbo_size);
            set(value.m_arrive_nbbo_exch);
            set(value.m_arrive_cum_size);
            set(value.m_arrive_num_exch);
            set(value.m_arrive_limit_size);
            set(value.m_arrive_limit_prc);
            set(value.m_avg_fill_prc);
            set(value.m_cum_fill_quan);
            set(value.m_num_child_orders);
            set(value.m_num_day_child_orders);
            set(value.m_open_order_size);
            set(value.m_action_order_size);
            set(value.m_risk_limit_size);
            set(value.m_risk_limit_desc);
            set(value.m_risk_limit_level);
            set(value.m_risk_limit_detail);
            set(value.m_limit_ref_uprc);
            set(value.m_limit_price);
            set(value.m_limit_vol);
            set(value.m_make_limit_price);
            set(value.m_make_limit_err);
            set(value.m_make_limit_err_desc);
            set(value.m_take_limit_price);
            set(value.m_take_limit_err);
            set(value.m_take_limit_err_desc);
            set(value.m_broker_state);
            set(value.m_make_state);
            set(value.m_take_state);
            set(value.m_mkt_cross_state);
            set(value.m_last_child_event);
            set(value.m_spdr_mkt_state);
            set(value.m_num_orders);
            set(value.m_leaves_qty);
            set(value.m_child_order_leaves);
            set(value.m_arrival_sdiv);
            set(value.m_arrival_rate);
            set(value.m_arrival_ddiv);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_theo_opx);
            set(value.m_theo_vol);
            set(value.m_child_order_mask);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_user_name);
            set(value.m_timestamp);
        }

        SpdrParentBrkrEvent() {
            m__meta.set_message_type("SpdrParentBrkrEvent");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4065, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4065, length);
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
             *this = SpdrParentBrkrEvent{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeEventNumber() const {
            return !(m_event_number == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludePrevParentNumber() const {
            return !(m_prev_parent_number == 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeSpdrComment() const {
            return !(m_spdr_comment.empty());
        }
        bool IncludeBidPrc() const {
            return !(m_bid_prc == 0.0);
        }
        bool IncludeAskPrc() const {
            return !(m_ask_prc == 0.0);
        }
        bool IncludeBidIvol() const {
            return !(m_bid_ivol == 0.0);
        }
        bool IncludeAskIvol() const {
            return !(m_ask_ivol == 0.0);
        }
        bool IncludeBidSize() const {
            return !(m_bid_size == 0);
        }
        bool IncludeAskSize() const {
            return !(m_ask_size == 0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeSurfacePrc() const {
            return !(m_surface_prc == 0.0);
        }
        bool IncludeSurfaceVol() const {
            return !(m_surface_vol == 0.0);
        }
        bool IncludeSurfaceYrs() const {
            return !(m_surface_yrs == 0.0);
        }
        bool IncludeSurfaceSdiv() const {
            return !(m_surface_sdiv == 0.0);
        }
        bool IncludeSurfaceRate() const {
            return !(m_surface_rate == 0.0);
        }
        bool IncludeSurfaceUprc() const {
            return !(m_surface_uprc == 0.0);
        }
        bool IncludeSurfaceDe() const {
            return !(m_surface_de == 0.0);
        }
        bool IncludeSurfaceGa() const {
            return !(m_surface_ga == 0.0);
        }
        bool IncludeSurfaceTh() const {
            return !(m_surface_th == 0.0);
        }
        bool IncludeSurfaceVe() const {
            return !(m_surface_ve == 0.0);
        }
        bool IncludeSurfaceRo() const {
            return !(m_surface_ro == 0.0);
        }
        bool IncludeSurfacePh() const {
            return !(m_surface_ph == 0.0);
        }
        bool IncludeArriveNbboSize() const {
            return !(m_arrive_nbbo_size == 0);
        }
        bool IncludeArriveCumSize() const {
            return !(m_arrive_cum_size == 0);
        }
        bool IncludeArriveNumExch() const {
            return !(m_arrive_num_exch == 0);
        }
        bool IncludeArriveLimitSize() const {
            return !(m_arrive_limit_size == 0);
        }
        bool IncludeArriveLimitPrc() const {
            return !(m_arrive_limit_prc == 0.0);
        }
        bool IncludeAvgFillPrc() const {
            return !(m_avg_fill_prc == 0.0);
        }
        bool IncludeCumFillQuan() const {
            return !(m_cum_fill_quan == 0);
        }
        bool IncludeNumChildOrders() const {
            return !(m_num_child_orders == 0);
        }
        bool IncludeNumDayChildOrders() const {
            return !(m_num_day_child_orders == 0);
        }
        bool IncludeOpenOrderSize() const {
            return !(m_open_order_size == 0);
        }
        bool IncludeActionOrderSize() const {
            return !(m_action_order_size == 0);
        }
        bool IncludeRiskLimitSize() const {
            return !(m_risk_limit_size == 0);
        }
        bool IncludeRiskLimitDetail() const {
            return !(m_risk_limit_detail.empty());
        }
        bool IncludeLimitRefUprc() const {
            return !(m_limit_ref_uprc == 0.0);
        }
        bool IncludeLimitPrice() const {
            return !(m_limit_price == 0.0);
        }
        bool IncludeLimitVol() const {
            return !(m_limit_vol == 0.0);
        }
        bool IncludeMakeLimitPrice() const {
            return !(m_make_limit_price == 0.0);
        }
        bool IncludeMakeLimitErrDesc() const {
            return !(m_make_limit_err_desc.empty());
        }
        bool IncludeTakeLimitPrice() const {
            return !(m_take_limit_price == 0.0);
        }
        bool IncludeTakeLimitErrDesc() const {
            return !(m_take_limit_err_desc.empty());
        }
        bool IncludeNumOrders() const {
            return !(m_num_orders == 0);
        }
        bool IncludeLeavesQty() const {
            return !(m_leaves_qty == 0);
        }
        bool IncludeChildOrderLeaves() const {
            return !(m_child_order_leaves == 0);
        }
        bool IncludeArrivalSdiv() const {
            return !(m_arrival_sdiv == 0.0);
        }
        bool IncludeArrivalRate() const {
            return !(m_arrival_rate == 0.0);
        }
        bool IncludeArrivalDdiv() const {
            return !(m_arrival_ddiv == 0.0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeTheoOpx() const {
            return !(m_theo_opx == 0.0);
        }
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeChildOrderMask() const {
            return !(m_child_order_mask == 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
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
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(100, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_grouping_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_client_firm);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_alt_user_name);
            }
            if ( IncludeEventNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(127,m_event_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(371,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>(m_stage_review)));
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_base_parent_number);
            }
            if ( IncludePrevParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(136,m_prev_parent_number);
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_engine_name);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(142, tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            if ( IncludeSpdrComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_spdr_comment);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_ask_prc);
            }
            if ( IncludeBidIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_bid_ivol);
            }
            if ( IncludeAskIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_ask_ivol);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_ask_size);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_u_ask);
            }
            if ( IncludeSurfacePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_surface_vol);
            }
            if ( IncludeSurfaceYrs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_surface_yrs);
            }
            if ( IncludeSurfaceSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_surface_sdiv);
            }
            if ( IncludeSurfaceRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_surface_rate);
            }
            if ( IncludeSurfaceUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_surface_uprc);
            }
            if ( IncludeSurfaceDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_surface_de);
            }
            if ( IncludeSurfaceGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_surface_ga);
            }
            if ( IncludeSurfaceTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_surface_th);
            }
            if ( IncludeSurfaceVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_surface_ve);
            }
            if ( IncludeSurfaceRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_surface_ro);
            }
            if ( IncludeSurfacePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_surface_ph);
            }
            if ( IncludeArriveNbboSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(238,m_arrive_nbbo_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_arrive_nbbo_exch)));
            if ( IncludeArriveCumSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(244,m_arrive_cum_size);
            }
            if ( IncludeArriveNumExch()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(247,m_arrive_num_exch);
            }
            if ( IncludeArriveLimitSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(250,m_arrive_limit_size);
            }
            if ( IncludeArriveLimitPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(253,m_arrive_limit_prc);
            }
            if ( IncludeAvgFillPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(256,m_avg_fill_prc);
            }
            if ( IncludeCumFillQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(259,m_cum_fill_quan);
            }
            if ( IncludeNumChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(262,m_num_child_orders);
            }
            if ( IncludeNumDayChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(265,m_num_day_child_orders);
            }
            if ( IncludeOpenOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(268,m_open_order_size);
            }
            if ( IncludeActionOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(271,m_action_order_size);
            }
            if ( IncludeRiskLimitSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(274,m_risk_limit_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(372,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            if ( IncludeRiskLimitDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(280,m_risk_limit_detail);
            }
            if ( IncludeLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(283,m_limit_ref_uprc);
            }
            if ( IncludeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(286,m_limit_price);
            }
            if ( IncludeLimitVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_limit_vol);
            }
            if ( IncludeMakeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(292,m_make_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(295,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_make_limit_err)));
            if ( IncludeMakeLimitErrDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(298,m_make_limit_err_desc);
            }
            if ( IncludeTakeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(301,m_take_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_take_limit_err)));
            if ( IncludeTakeLimitErrDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(307,m_take_limit_err_desc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_take_state)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktCrossState>(m_mkt_cross_state)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildEvent>(m_last_child_event)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            if ( IncludeNumOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(328,m_num_orders);
            }
            if ( IncludeLeavesQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(331,m_leaves_qty);
            }
            if ( IncludeChildOrderLeaves()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(334,m_child_order_leaves);
            }
            if ( IncludeArrivalSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_arrival_sdiv);
            }
            if ( IncludeArrivalRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_arrival_rate);
            }
            if ( IncludeArrivalDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_arrival_ddiv);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(346, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeTheoOpx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_theo_opx);
            }
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_theo_vol);
            }
            if ( IncludeChildOrderMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(358,m_child_order_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(361,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(364,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(367,m_user_name);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(370, m_timestamp);
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
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 100, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_grouping_code);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_client_firm));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeEventNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,127,m_event_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,371,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>(m_stage_review)));
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_base_parent_number);
            }
            if ( IncludePrevParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,136,m_prev_parent_number);
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_engine_name));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 142, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            if ( IncludeSpdrComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_spdr_comment));
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_ask_prc);
            }
            if ( IncludeBidIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_bid_ivol);
            }
            if ( IncludeAskIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_ask_ivol);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_ask_size);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_u_ask);
            }
            if ( IncludeSurfacePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_surface_vol);
            }
            if ( IncludeSurfaceYrs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_surface_yrs);
            }
            if ( IncludeSurfaceSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_surface_sdiv);
            }
            if ( IncludeSurfaceRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_surface_rate);
            }
            if ( IncludeSurfaceUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_surface_uprc);
            }
            if ( IncludeSurfaceDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_surface_de);
            }
            if ( IncludeSurfaceGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_surface_ga);
            }
            if ( IncludeSurfaceTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_surface_th);
            }
            if ( IncludeSurfaceVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_surface_ve);
            }
            if ( IncludeSurfaceRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_surface_ro);
            }
            if ( IncludeSurfacePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_surface_ph);
            }
            if ( IncludeArriveNbboSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,238,m_arrive_nbbo_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_arrive_nbbo_exch)));
            if ( IncludeArriveCumSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,244,m_arrive_cum_size);
            }
            if ( IncludeArriveNumExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,247,m_arrive_num_exch);
            }
            if ( IncludeArriveLimitSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,250,m_arrive_limit_size);
            }
            if ( IncludeArriveLimitPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,253,m_arrive_limit_prc);
            }
            if ( IncludeAvgFillPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,256,m_avg_fill_prc);
            }
            if ( IncludeCumFillQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,259,m_cum_fill_quan);
            }
            if ( IncludeNumChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,262,m_num_child_orders);
            }
            if ( IncludeNumDayChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,265,m_num_day_child_orders);
            }
            if ( IncludeOpenOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,268,m_open_order_size);
            }
            if ( IncludeActionOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,271,m_action_order_size);
            }
            if ( IncludeRiskLimitSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,274,m_risk_limit_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,372,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            if ( IncludeRiskLimitDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,280,static_cast<string>(m_risk_limit_detail));
            }
            if ( IncludeLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,283,m_limit_ref_uprc);
            }
            if ( IncludeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,286,m_limit_price);
            }
            if ( IncludeLimitVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_limit_vol);
            }
            if ( IncludeMakeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,292,m_make_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,295,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_make_limit_err)));
            if ( IncludeMakeLimitErrDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,298,static_cast<string>(m_make_limit_err_desc));
            }
            if ( IncludeTakeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,301,m_take_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,304,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_take_limit_err)));
            if ( IncludeTakeLimitErrDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,307,static_cast<string>(m_take_limit_err_desc));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,310,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,316,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_take_state)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktCrossState>(m_mkt_cross_state)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildEvent>(m_last_child_event)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            if ( IncludeNumOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,328,m_num_orders);
            }
            if ( IncludeLeavesQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,331,m_leaves_qty);
            }
            if ( IncludeChildOrderLeaves()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,334,m_child_order_leaves);
            }
            if ( IncludeArrivalSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_arrival_sdiv);
            }
            if ( IncludeArrivalRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_arrival_rate);
            }
            if ( IncludeArrivalDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_arrival_ddiv);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 346, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeTheoOpx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_theo_opx);
            }
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_theo_vol);
            }
            if ( IncludeChildOrderMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,358,m_child_order_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,361,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,364,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,367,static_cast<string>(m_user_name));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 370, m_timestamp);
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
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_event_number = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 371: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_review = static_cast<spiderrock::protobuf::api::StageReview>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prev_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_broker_status = static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_reason = static_cast<spiderrock::protobuf::api::SpdrRejectReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_yrs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_arrive_nbbo_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_arrive_nbbo_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_arrive_cum_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_arrive_num_exch = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_arrive_limit_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_arrive_limit_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_num_child_orders = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_num_day_child_orders = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_action_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_risk_limit_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 277: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_desc = static_cast<spiderrock::protobuf::api::SpdrRisk>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 372: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_level = static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_limit_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_limit_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 295: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_make_limit_err_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 304: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_take_limit_err_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 310: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_broker_state = static_cast<spiderrock::protobuf::api::BrokerState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 313: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 316: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 319: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_cross_state = static_cast<spiderrock::protobuf::api::MktCrossState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 322: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_last_child_event = static_cast<spiderrock::protobuf::api::ChildEvent>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 325: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_mkt_state = static_cast<spiderrock::protobuf::api::SpdrMarketState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_order_leaves = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrival_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrival_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_arrival_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 349: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_opx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_child_order_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 361: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 364: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 370: {
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

    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::_meta>() const { return SpdrParentBrkrEvent::_meta{ m__meta}; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::pkey>() const { return SpdrParentBrkrEvent::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::sec_key>() const { return SpdrParentBrkrEvent::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::event_number>() const { return m_event_number; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::stage_review>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>( m_stage_review)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::prev_parent_number>() const { return m_prev_parent_number; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::ticker>() const { return SpdrParentBrkrEvent::ticker{ m_ticker}; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_broker_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>( m_spdr_broker_status)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_reject_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>( m_spdr_reject_reason)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_comment>() const { return m_spdr_comment; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::bid_ivol>() const { return m_bid_ivol; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::ask_ivol>() const { return m_ask_ivol; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::bid_size>() const { return m_bid_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::ask_size>() const { return m_ask_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::u_bid>() const { return m_u_bid; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::u_ask>() const { return m_u_ask; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_prc>() const { return m_surface_prc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_vol>() const { return m_surface_vol; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_yrs>() const { return m_surface_yrs; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_sdiv>() const { return m_surface_sdiv; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_rate>() const { return m_surface_rate; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_uprc>() const { return m_surface_uprc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_de>() const { return m_surface_de; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_ga>() const { return m_surface_ga; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_th>() const { return m_surface_th; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_ve>() const { return m_surface_ve; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_ro>() const { return m_surface_ro; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::surface_ph>() const { return m_surface_ph; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrive_nbbo_size>() const { return m_arrive_nbbo_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrive_nbbo_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_arrive_nbbo_exch)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrive_cum_size>() const { return m_arrive_cum_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrive_num_exch>() const { return m_arrive_num_exch; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrive_limit_size>() const { return m_arrive_limit_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrive_limit_prc>() const { return m_arrive_limit_prc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::avg_fill_prc>() const { return m_avg_fill_prc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::cum_fill_quan>() const { return m_cum_fill_quan; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::num_child_orders>() const { return m_num_child_orders; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::num_day_child_orders>() const { return m_num_day_child_orders; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::open_order_size>() const { return m_open_order_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::action_order_size>() const { return m_action_order_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::risk_limit_size>() const { return m_risk_limit_size; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::risk_limit_desc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>( m_risk_limit_desc)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::risk_limit_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>( m_risk_limit_level)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::risk_limit_detail>() const { return m_risk_limit_detail; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::limit_ref_uprc>() const { return m_limit_ref_uprc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::limit_price>() const { return m_limit_price; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::limit_vol>() const { return m_limit_vol; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::make_limit_price>() const { return m_make_limit_price; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::make_limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_make_limit_err)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::make_limit_err_desc>() const { return m_make_limit_err_desc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::take_limit_price>() const { return m_take_limit_price; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::take_limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_take_limit_err)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::take_limit_err_desc>() const { return m_take_limit_err_desc; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::broker_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>( m_broker_state)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::make_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_make_state)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::take_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_take_state)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::mkt_cross_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktCrossState>( m_mkt_cross_state)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::last_child_event>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildEvent>( m_last_child_event)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::spdr_mkt_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>( m_spdr_mkt_state)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::num_orders>() const { return m_num_orders; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::leaves_qty>() const { return m_leaves_qty; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::child_order_leaves>() const { return m_child_order_leaves; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrival_sdiv>() const { return m_arrival_sdiv; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrival_rate>() const { return m_arrival_rate; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::arrival_ddiv>() const { return m_arrival_ddiv; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::hedge_sec_key>() const { return SpdrParentBrkrEvent::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::theo_opx>() const { return m_theo_opx; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::child_order_mask>() const { return m_child_order_mask; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrParentBrkrEvent::get<SpdrParentBrkrEvent::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentBrkrEvent_PKey::get<SpdrParentBrkrEvent_PKey::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrParentBrkrEvent_PKey::get<SpdrParentBrkrEvent_PKey::rec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventRecType>(m_rec_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentBrkrEvent_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrParentBrkrEvent_PKey::parent_number>();
        o << ",\"rec_type\":" << (int64_t)m.get<SpdrParentBrkrEvent_PKey::rec_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentBrkrEvent& m) {
        o << "\"_meta\":{" << m.get<SpdrParentBrkrEvent::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentBrkrEvent::pkey>() << "}";
        o << ",\"sec_key\":{" << m.get<SpdrParentBrkrEvent::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentBrkrEvent::sec_type>();
        o << ",\"accnt\":\"" << m.get<SpdrParentBrkrEvent::accnt>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentBrkrEvent::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrParentBrkrEvent::grouping_code>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentBrkrEvent::order_side>();
        o << ",\"client_firm\":\"" << m.get<SpdrParentBrkrEvent::client_firm>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<SpdrParentBrkrEvent::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrParentBrkrEvent::alt_user_name>() << "\"";
        o << ",\"event_number\":" << m.get<SpdrParentBrkrEvent::event_number>();
        o << ",\"stage_type\":" << (int64_t)m.get<SpdrParentBrkrEvent::stage_type>();
        o << ",\"stage_review\":" << (int64_t)m.get<SpdrParentBrkrEvent::stage_review>();
        o << ",\"base_parent_number\":" << m.get<SpdrParentBrkrEvent::base_parent_number>();
        o << ",\"prev_parent_number\":" << m.get<SpdrParentBrkrEvent::prev_parent_number>();
        o << ",\"engine_name\":\"" << m.get<SpdrParentBrkrEvent::engine_name>() << "\"";
        o << ",\"ticker\":{" << m.get<SpdrParentBrkrEvent::ticker>() << "}";
        o << ",\"spdr_broker_status\":" << (int64_t)m.get<SpdrParentBrkrEvent::spdr_broker_status>();
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrParentBrkrEvent::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrParentBrkrEvent::spdr_close_reason>();
        o << ",\"spdr_reject_reason\":" << (int64_t)m.get<SpdrParentBrkrEvent::spdr_reject_reason>();
        o << ",\"spdr_comment\":\"" << m.get<SpdrParentBrkrEvent::spdr_comment>() << "\"";
        o << ",\"bid_prc\":" << m.get<SpdrParentBrkrEvent::bid_prc>();
        o << ",\"ask_prc\":" << m.get<SpdrParentBrkrEvent::ask_prc>();
        o << ",\"bid_ivol\":" << m.get<SpdrParentBrkrEvent::bid_ivol>();
        o << ",\"ask_ivol\":" << m.get<SpdrParentBrkrEvent::ask_ivol>();
        o << ",\"bid_size\":" << m.get<SpdrParentBrkrEvent::bid_size>();
        o << ",\"ask_size\":" << m.get<SpdrParentBrkrEvent::ask_size>();
        o << ",\"u_bid\":" << m.get<SpdrParentBrkrEvent::u_bid>();
        o << ",\"u_ask\":" << m.get<SpdrParentBrkrEvent::u_ask>();
        o << ",\"surface_prc\":" << m.get<SpdrParentBrkrEvent::surface_prc>();
        o << ",\"surface_vol\":" << m.get<SpdrParentBrkrEvent::surface_vol>();
        o << ",\"surface_yrs\":" << m.get<SpdrParentBrkrEvent::surface_yrs>();
        o << ",\"surface_sdiv\":" << m.get<SpdrParentBrkrEvent::surface_sdiv>();
        o << ",\"surface_rate\":" << m.get<SpdrParentBrkrEvent::surface_rate>();
        o << ",\"surface_uprc\":" << m.get<SpdrParentBrkrEvent::surface_uprc>();
        o << ",\"surface_de\":" << m.get<SpdrParentBrkrEvent::surface_de>();
        o << ",\"surface_ga\":" << m.get<SpdrParentBrkrEvent::surface_ga>();
        o << ",\"surface_th\":" << m.get<SpdrParentBrkrEvent::surface_th>();
        o << ",\"surface_ve\":" << m.get<SpdrParentBrkrEvent::surface_ve>();
        o << ",\"surface_ro\":" << m.get<SpdrParentBrkrEvent::surface_ro>();
        o << ",\"surface_ph\":" << m.get<SpdrParentBrkrEvent::surface_ph>();
        o << ",\"arrive_nbbo_size\":" << m.get<SpdrParentBrkrEvent::arrive_nbbo_size>();
        o << ",\"arrive_nbbo_exch\":" << (int64_t)m.get<SpdrParentBrkrEvent::arrive_nbbo_exch>();
        o << ",\"arrive_cum_size\":" << m.get<SpdrParentBrkrEvent::arrive_cum_size>();
        o << ",\"arrive_num_exch\":" << m.get<SpdrParentBrkrEvent::arrive_num_exch>();
        o << ",\"arrive_limit_size\":" << m.get<SpdrParentBrkrEvent::arrive_limit_size>();
        o << ",\"arrive_limit_prc\":" << m.get<SpdrParentBrkrEvent::arrive_limit_prc>();
        o << ",\"avg_fill_prc\":" << m.get<SpdrParentBrkrEvent::avg_fill_prc>();
        o << ",\"cum_fill_quan\":" << m.get<SpdrParentBrkrEvent::cum_fill_quan>();
        o << ",\"num_child_orders\":" << m.get<SpdrParentBrkrEvent::num_child_orders>();
        o << ",\"num_day_child_orders\":" << m.get<SpdrParentBrkrEvent::num_day_child_orders>();
        o << ",\"open_order_size\":" << m.get<SpdrParentBrkrEvent::open_order_size>();
        o << ",\"action_order_size\":" << m.get<SpdrParentBrkrEvent::action_order_size>();
        o << ",\"risk_limit_size\":" << m.get<SpdrParentBrkrEvent::risk_limit_size>();
        o << ",\"risk_limit_desc\":" << (int64_t)m.get<SpdrParentBrkrEvent::risk_limit_desc>();
        o << ",\"risk_limit_level\":" << (int64_t)m.get<SpdrParentBrkrEvent::risk_limit_level>();
        o << ",\"risk_limit_detail\":\"" << m.get<SpdrParentBrkrEvent::risk_limit_detail>() << "\"";
        o << ",\"limit_ref_uprc\":" << m.get<SpdrParentBrkrEvent::limit_ref_uprc>();
        o << ",\"limit_price\":" << m.get<SpdrParentBrkrEvent::limit_price>();
        o << ",\"limit_vol\":" << m.get<SpdrParentBrkrEvent::limit_vol>();
        o << ",\"make_limit_price\":" << m.get<SpdrParentBrkrEvent::make_limit_price>();
        o << ",\"make_limit_err\":" << (int64_t)m.get<SpdrParentBrkrEvent::make_limit_err>();
        o << ",\"make_limit_err_desc\":\"" << m.get<SpdrParentBrkrEvent::make_limit_err_desc>() << "\"";
        o << ",\"take_limit_price\":" << m.get<SpdrParentBrkrEvent::take_limit_price>();
        o << ",\"take_limit_err\":" << (int64_t)m.get<SpdrParentBrkrEvent::take_limit_err>();
        o << ",\"take_limit_err_desc\":\"" << m.get<SpdrParentBrkrEvent::take_limit_err_desc>() << "\"";
        o << ",\"broker_state\":" << (int64_t)m.get<SpdrParentBrkrEvent::broker_state>();
        o << ",\"make_state\":" << (int64_t)m.get<SpdrParentBrkrEvent::make_state>();
        o << ",\"take_state\":" << (int64_t)m.get<SpdrParentBrkrEvent::take_state>();
        o << ",\"mkt_cross_state\":" << (int64_t)m.get<SpdrParentBrkrEvent::mkt_cross_state>();
        o << ",\"last_child_event\":" << (int64_t)m.get<SpdrParentBrkrEvent::last_child_event>();
        o << ",\"spdr_mkt_state\":" << (int64_t)m.get<SpdrParentBrkrEvent::spdr_mkt_state>();
        o << ",\"num_orders\":" << m.get<SpdrParentBrkrEvent::num_orders>();
        o << ",\"leaves_qty\":" << m.get<SpdrParentBrkrEvent::leaves_qty>();
        o << ",\"child_order_leaves\":" << m.get<SpdrParentBrkrEvent::child_order_leaves>();
        o << ",\"arrival_sdiv\":" << m.get<SpdrParentBrkrEvent::arrival_sdiv>();
        o << ",\"arrival_rate\":" << m.get<SpdrParentBrkrEvent::arrival_rate>();
        o << ",\"arrival_ddiv\":" << m.get<SpdrParentBrkrEvent::arrival_ddiv>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrParentBrkrEvent::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrParentBrkrEvent::hedge_sec_type>();
        o << ",\"theo_opx\":" << m.get<SpdrParentBrkrEvent::theo_opx>();
        o << ",\"theo_vol\":" << m.get<SpdrParentBrkrEvent::theo_vol>();
        o << ",\"child_order_mask\":" << m.get<SpdrParentBrkrEvent::child_order_mask>();
        o << ",\"price_format\":" << (int64_t)m.get<SpdrParentBrkrEvent::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<SpdrParentBrkrEvent::u_price_format>();
        o << ",\"user_name\":\"" << m.get<SpdrParentBrkrEvent::user_name>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentBrkrEvent::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}