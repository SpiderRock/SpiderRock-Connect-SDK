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

    #ifndef _cum_square_qty__GUARD__
    #define _cum_square_qty__GUARD__
    DECL_STRONG_TYPE(cum_square_qty, int32);
    #endif//_cum_square_qty__GUARD__

    #ifndef _avg_square_prc__GUARD__
    #define _avg_square_prc__GUARD__
    DECL_STRONG_TYPE(avg_square_prc, double);
    #endif//_avg_square_prc__GUARD__

    #ifndef _cum_partial_qty__GUARD__
    #define _cum_partial_qty__GUARD__
    DECL_STRONG_TYPE(cum_partial_qty, int32);
    #endif//_cum_partial_qty__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _bid_prc__float__GUARD__
    #define _bid_prc__float__GUARD__
    DECL_STRONG_TYPE(bid_prc__float, float);
    #endif//_bid_prc__float__GUARD__

    #ifndef _ask_prc__float__GUARD__
    #define _ask_prc__float__GUARD__
    DECL_STRONG_TYPE(ask_prc__float, float);
    #endif//_ask_prc__float__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _open_order_size__GUARD__
    #define _open_order_size__GUARD__
    DECL_STRONG_TYPE(open_order_size, int32);
    #endif//_open_order_size__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

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

    #ifndef _limit_price__GUARD__
    #define _limit_price__GUARD__
    DECL_STRONG_TYPE(limit_price, double);
    #endif//_limit_price__GUARD__

    #ifndef _limit_err__GUARD__
    #define _limit_err__GUARD__
    DECL_STRONG_TYPE(limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_limit_err__GUARD__

    #ifndef _limit_err_desc__GUARD__
    #define _limit_err_desc__GUARD__
    DECL_STRONG_TYPE(limit_err_desc, string);
    #endif//_limit_err_desc__GUARD__

    #ifndef _algo_state__GUARD__
    #define _algo_state__GUARD__
    DECL_STRONG_TYPE(algo_state, spiderrock::protobuf::api::AlgoState);
    #endif//_algo_state__GUARD__

    #ifndef _algo_counter__GUARD__
    #define _algo_counter__GUARD__
    DECL_STRONG_TYPE(algo_counter, int32);
    #endif//_algo_counter__GUARD__

    #ifndef _make_state__GUARD__
    #define _make_state__GUARD__
    DECL_STRONG_TYPE(make_state, spiderrock::protobuf::api::AlgoState);
    #endif//_make_state__GUARD__

    #ifndef _make_counter__GUARD__
    #define _make_counter__GUARD__
    DECL_STRONG_TYPE(make_counter, int32);
    #endif//_make_counter__GUARD__

    #ifndef _broker_state__GUARD__
    #define _broker_state__GUARD__
    DECL_STRONG_TYPE(broker_state, spiderrock::protobuf::api::BrokerState);
    #endif//_broker_state__GUARD__

    #ifndef _spdr_mkt_state__GUARD__
    #define _spdr_mkt_state__GUARD__
    DECL_STRONG_TYPE(spdr_mkt_state, spiderrock::protobuf::api::SpdrMarketState);
    #endif//_spdr_mkt_state__GUARD__

    #ifndef _child_order_mask__GUARD__
    #define _child_order_mask__GUARD__
    DECL_STRONG_TYPE(child_order_mask, uint32);
    #endif//_child_order_mask__GUARD__

    #ifndef _num_child_orders__uint32__GUARD__
    #define _num_child_orders__uint32__GUARD__
    DECL_STRONG_TYPE(num_child_orders__uint32, uint32);
    #endif//_num_child_orders__uint32__GUARD__

    #ifndef _num_day_child_orders__GUARD__
    #define _num_day_child_orders__GUARD__
    DECL_STRONG_TYPE(num_day_child_orders, uint32);
    #endif//_num_day_child_orders__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

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

    
    class SpdrMLegBrkrEvent_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrMLegBrkrEvent_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrMLegBrkrEvent_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }
        void set(const rec_type & value) { set_rec_type(value); }


        SpdrMLegBrkrEvent_PKey() {}

        virtual ~SpdrMLegBrkrEvent_PKey() {
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
    

    class SpdrMLegBrkrEvent {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrMLegBrkrEvent_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
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
        using spdr_broker_status = spiderrock::protobuf::api::spdr_broker_status;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using spdr_reject_reason = spiderrock::protobuf::api::spdr_reject_reason;
        using spdr_comment = spiderrock::protobuf::api::spdr_comment;
        using cum_square_qty = spiderrock::protobuf::api::cum_square_qty;
        using avg_square_prc = spiderrock::protobuf::api::avg_square_prc;
        using cum_partial_qty = spiderrock::protobuf::api::cum_partial_qty;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using bid_prc = spiderrock::protobuf::api::bid_prc__float;
        using ask_prc = spiderrock::protobuf::api::ask_prc__float;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using open_order_size = spiderrock::protobuf::api::open_order_size;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using risk_limit_size = spiderrock::protobuf::api::risk_limit_size;
        using risk_limit_desc = spiderrock::protobuf::api::risk_limit_desc;
        using risk_limit_level = spiderrock::protobuf::api::risk_limit_level;
        using risk_limit_detail = spiderrock::protobuf::api::risk_limit_detail;
        using limit_price = spiderrock::protobuf::api::limit_price;
        using limit_err = spiderrock::protobuf::api::limit_err;
        using limit_err_desc = spiderrock::protobuf::api::limit_err_desc;
        using algo_state = spiderrock::protobuf::api::algo_state;
        using algo_counter = spiderrock::protobuf::api::algo_counter;
        using make_state = spiderrock::protobuf::api::make_state;
        using make_counter = spiderrock::protobuf::api::make_counter;
        using broker_state = spiderrock::protobuf::api::broker_state;
        using spdr_mkt_state = spiderrock::protobuf::api::spdr_mkt_state;
        using child_order_mask = spiderrock::protobuf::api::child_order_mask;
        using num_child_orders = spiderrock::protobuf::api::num_child_orders__uint32;
        using num_day_child_orders = spiderrock::protobuf::api::num_day_child_orders;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
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
        spdr_broker_status m_spdr_broker_status{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        spdr_reject_reason m_spdr_reject_reason{};
        spdr_comment m_spdr_comment{};
        cum_square_qty m_cum_square_qty{};
        avg_square_prc m_avg_square_prc{};
        cum_partial_qty m_cum_partial_qty{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        open_order_size m_open_order_size{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        risk_limit_size m_risk_limit_size{};
        risk_limit_desc m_risk_limit_desc{};
        risk_limit_level m_risk_limit_level{};
        risk_limit_detail m_risk_limit_detail{};
        limit_price m_limit_price{};
        limit_err m_limit_err{};
        limit_err_desc m_limit_err_desc{};
        algo_state m_algo_state{};
        algo_counter m_algo_counter{};
        make_state m_make_state{};
        make_counter m_make_counter{};
        broker_state m_broker_state{};
        spdr_mkt_state m_spdr_mkt_state{};
        child_order_mask m_child_order_mask{};
        num_child_orders m_num_child_orders{};
        num_day_child_orders m_num_day_child_orders{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};

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
        cum_square_qty get_cum_square_qty() const {
            return m_cum_square_qty;
        }		
        avg_square_prc get_avg_square_prc() const {
            return m_avg_square_prc;
        }		
        cum_partial_qty get_cum_partial_qty() const {
            return m_cum_partial_qty;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        bid_prc get_bid_prc() const {
            return m_bid_prc;
        }		
        ask_prc get_ask_prc() const {
            return m_ask_prc;
        }		
        bid_size get_bid_size() const {
            return m_bid_size;
        }		
        ask_size get_ask_size() const {
            return m_ask_size;
        }		
        open_order_size get_open_order_size() const {
            return m_open_order_size;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
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
        limit_price get_limit_price() const {
            return m_limit_price;
        }		
        limit_err get_limit_err() const {
            return m_limit_err;
        }		
        limit_err_desc get_limit_err_desc() const {
            return m_limit_err_desc;
        }		
        algo_state get_algo_state() const {
            return m_algo_state;
        }		
        algo_counter get_algo_counter() const {
            return m_algo_counter;
        }		
        make_state get_make_state() const {
            return m_make_state;
        }		
        make_counter get_make_counter() const {
            return m_make_counter;
        }		
        broker_state get_broker_state() const {
            return m_broker_state;
        }		
        spdr_mkt_state get_spdr_mkt_state() const {
            return m_spdr_mkt_state;
        }		
        child_order_mask get_child_order_mask() const {
            return m_child_order_mask;
        }		
        num_child_orders get_num_child_orders() const {
            return m_num_child_orders;
        }		
        num_day_child_orders get_num_day_child_orders() const {
            return m_num_day_child_orders;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
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
        void set_cum_square_qty(const cum_square_qty& value)  {
            m_cum_square_qty = value;
        }
        void set_avg_square_prc(const avg_square_prc& value)  {
            m_avg_square_prc = value;
        }
        void set_cum_partial_qty(const cum_partial_qty& value)  {
            m_cum_partial_qty = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_bid_prc(const bid_prc& value)  {
            m_bid_prc = value;
        }
        void set_ask_prc(const ask_prc& value)  {
            m_ask_prc = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_open_order_size(const open_order_size& value)  {
            m_open_order_size = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
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
        void set_limit_price(const limit_price& value)  {
            m_limit_price = value;
        }
        void set_limit_err(const limit_err& value)  {
            m_limit_err = value;
        }
        void set_limit_err_desc(const limit_err_desc& value)  {
            m_limit_err_desc = value;
        }
        void set_algo_state(const algo_state& value)  {
            m_algo_state = value;
        }
        void set_algo_counter(const algo_counter& value)  {
            m_algo_counter = value;
        }
        void set_make_state(const make_state& value)  {
            m_make_state = value;
        }
        void set_make_counter(const make_counter& value)  {
            m_make_counter = value;
        }
        void set_broker_state(const broker_state& value)  {
            m_broker_state = value;
        }
        void set_spdr_mkt_state(const spdr_mkt_state& value)  {
            m_spdr_mkt_state = value;
        }
        void set_child_order_mask(const child_order_mask& value)  {
            m_child_order_mask = value;
        }
        void set_num_child_orders(const num_child_orders& value)  {
            m_num_child_orders = value;
        }
        void set_num_day_child_orders(const num_day_child_orders& value)  {
            m_num_day_child_orders = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrMLegBrkrEvent::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const cum_square_qty & value) {
            set_cum_square_qty(value);
        }
        void set(const avg_square_prc & value) {
            set_avg_square_prc(value);
        }
        void set(const cum_partial_qty & value) {
            set_cum_partial_qty(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const bid_prc & value) {
            set_bid_prc(value);
        }
        void set(const ask_prc & value) {
            set_ask_prc(value);
        }
        void set(const bid_size & value) {
            set_bid_size(value);
        }
        void set(const ask_size & value) {
            set_ask_size(value);
        }
        void set(const open_order_size & value) {
            set_open_order_size(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_sec_type & value) {
            set_hedge_sec_type(value);
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
        void set(const limit_price & value) {
            set_limit_price(value);
        }
        void set(const limit_err & value) {
            set_limit_err(value);
        }
        void set(const limit_err_desc & value) {
            set_limit_err_desc(value);
        }
        void set(const algo_state & value) {
            set_algo_state(value);
        }
        void set(const algo_counter & value) {
            set_algo_counter(value);
        }
        void set(const make_state & value) {
            set_make_state(value);
        }
        void set(const make_counter & value) {
            set_make_counter(value);
        }
        void set(const broker_state & value) {
            set_broker_state(value);
        }
        void set(const spdr_mkt_state & value) {
            set_spdr_mkt_state(value);
        }
        void set(const child_order_mask & value) {
            set_child_order_mask(value);
        }
        void set(const num_child_orders & value) {
            set_num_child_orders(value);
        }
        void set(const num_day_child_orders & value) {
            set_num_day_child_orders(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrMLegBrkrEvent & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
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
            set(value.m_spdr_broker_status);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_spdr_reject_reason);
            set(value.m_spdr_comment);
            set(value.m_cum_square_qty);
            set(value.m_avg_square_prc);
            set(value.m_cum_partial_qty);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_open_order_size);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_risk_limit_size);
            set(value.m_risk_limit_desc);
            set(value.m_risk_limit_level);
            set(value.m_risk_limit_detail);
            set(value.m_limit_price);
            set(value.m_limit_err);
            set(value.m_limit_err_desc);
            set(value.m_algo_state);
            set(value.m_algo_counter);
            set(value.m_make_state);
            set(value.m_make_counter);
            set(value.m_broker_state);
            set(value.m_spdr_mkt_state);
            set(value.m_child_order_mask);
            set(value.m_num_child_orders);
            set(value.m_num_day_child_orders);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrMLegBrkrEvent() {
            m__meta.set_message_type("SpdrMLegBrkrEvent");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4025, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4025, length);
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
             *this = SpdrMLegBrkrEvent{};
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
        bool IncludeSpdrComment() const {
            return !(m_spdr_comment.empty());
        }
        bool IncludeCumSquareQty() const {
            return !(m_cum_square_qty == 0);
        }
        bool IncludeAvgSquarePrc() const {
            return !(m_avg_square_prc == 0.0);
        }
        bool IncludeCumPartialQty() const {
            return !(m_cum_partial_qty == 0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeBidPrc() const {
            return !(m_bid_prc == 0.0);
        }
        bool IncludeAskPrc() const {
            return !(m_ask_prc == 0.0);
        }
        bool IncludeBidSize() const {
            return !(m_bid_size == 0);
        }
        bool IncludeAskSize() const {
            return !(m_ask_size == 0);
        }
        bool IncludeOpenOrderSize() const {
            return !(m_open_order_size == 0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeRiskLimitSize() const {
            return !(m_risk_limit_size == 0);
        }
        bool IncludeRiskLimitDetail() const {
            return !(m_risk_limit_detail.empty());
        }
        bool IncludeLimitPrice() const {
            return !(m_limit_price == 0.0);
        }
        bool IncludeLimitErrDesc() const {
            return !(m_limit_err_desc.empty());
        }
        bool IncludeAlgoCounter() const {
            return !(m_algo_counter == 0);
        }
        bool IncludeMakeCounter() const {
            return !(m_make_counter == 0);
        }
        bool IncludeChildOrderMask() const {
            return !(m_child_order_mask == 0);
        }
        bool IncludeNumChildOrders() const {
            return !(m_num_child_orders == 0);
        }
        bool IncludeNumDayChildOrders() const {
            return !(m_num_day_child_orders == 0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_grouping_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_client_firm);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_alt_user_name);
            }
            if ( IncludeEventNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(124,m_event_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(260,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>(m_stage_review)));
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_base_parent_number);
            }
            if ( IncludePrevParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_prev_parent_number);
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(261,m_engine_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            if ( IncludeSpdrComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_spdr_comment);
            }
            if ( IncludeCumSquareQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_cum_square_qty);
            }
            if ( IncludeAvgSquarePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_avg_square_prc);
            }
            if ( IncludeCumPartialQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_cum_partial_qty);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_u_ask);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_ask_prc);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_ask_size);
            }
            if ( IncludeOpenOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_open_order_size);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(202, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeRiskLimitSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(208,m_risk_limit_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(262,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            if ( IncludeRiskLimitDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(214,m_risk_limit_detail);
            }
            if ( IncludeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(217,m_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_limit_err)));
            if ( IncludeLimitErrDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_limit_err_desc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_algo_state)));
            if ( IncludeAlgoCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(229,m_algo_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            if ( IncludeMakeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(235,m_make_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            if ( IncludeChildOrderMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(244,m_child_order_mask);
            }
            if ( IncludeNumChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(247,m_num_child_orders);
            }
            if ( IncludeNumDayChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(250,m_num_day_child_orders);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(253,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(259, m_timestamp);
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
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_grouping_code);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_client_firm));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeEventNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,124,m_event_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,260,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>(m_stage_review)));
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_base_parent_number);
            }
            if ( IncludePrevParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_prev_parent_number);
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,261,static_cast<string>(m_engine_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            if ( IncludeSpdrComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_spdr_comment));
            }
            if ( IncludeCumSquareQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_cum_square_qty);
            }
            if ( IncludeAvgSquarePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_avg_square_prc);
            }
            if ( IncludeCumPartialQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_cum_partial_qty);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_u_ask);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_ask_prc);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_ask_size);
            }
            if ( IncludeOpenOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_open_order_size);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 202, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeRiskLimitSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,208,m_risk_limit_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,262,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            if ( IncludeRiskLimitDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,214,static_cast<string>(m_risk_limit_detail));
            }
            if ( IncludeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,217,m_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_limit_err)));
            if ( IncludeLimitErrDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_limit_err_desc));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_algo_state)));
            if ( IncludeAlgoCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,229,m_algo_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            if ( IncludeMakeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,235,m_make_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            if ( IncludeChildOrderMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,244,m_child_order_mask);
            }
            if ( IncludeNumChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,247,m_num_child_orders);
            }
            if ( IncludeNumDayChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,250,m_num_day_child_orders);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,253,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 259, m_timestamp);
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
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_event_number = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 260: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_review = static_cast<spiderrock::protobuf::api::StageReview>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prev_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 261: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_broker_status = static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_reason = static_cast<spiderrock::protobuf::api::SpdrRejectReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_square_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_square_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_partial_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_risk_limit_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_desc = static_cast<spiderrock::protobuf::api::SpdrRisk>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 262: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_level = static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_limit_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 220: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_limit_err_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 226: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_algo_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_algo_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 232: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_make_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 238: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_broker_state = static_cast<spiderrock::protobuf::api::BrokerState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_mkt_state = static_cast<spiderrock::protobuf::api::SpdrMarketState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_child_order_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_num_child_orders = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_num_day_child_orders = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 256: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {
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

    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::_meta>() const { return SpdrMLegBrkrEvent::_meta{ m__meta}; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::pkey>() const { return SpdrMLegBrkrEvent::pkey{ m_pkey}; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::ticker>() const { return SpdrMLegBrkrEvent::ticker{ m_ticker}; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::event_number>() const { return m_event_number; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::stage_review>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StageReview>( m_stage_review)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::prev_parent_number>() const { return m_prev_parent_number; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_broker_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>( m_spdr_broker_status)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_reject_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>( m_spdr_reject_reason)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_comment>() const { return m_spdr_comment; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::cum_square_qty>() const { return m_cum_square_qty; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::avg_square_prc>() const { return m_avg_square_prc; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::cum_partial_qty>() const { return m_cum_partial_qty; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::u_bid>() const { return m_u_bid; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::u_ask>() const { return m_u_ask; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::bid_size>() const { return m_bid_size; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::ask_size>() const { return m_ask_size; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::open_order_size>() const { return m_open_order_size; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::hedge_sec_key>() const { return SpdrMLegBrkrEvent::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::risk_limit_size>() const { return m_risk_limit_size; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::risk_limit_desc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>( m_risk_limit_desc)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::risk_limit_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>( m_risk_limit_level)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::risk_limit_detail>() const { return m_risk_limit_detail; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::limit_price>() const { return m_limit_price; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_limit_err)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::limit_err_desc>() const { return m_limit_err_desc; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::algo_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_algo_state)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::algo_counter>() const { return m_algo_counter; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::make_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_make_state)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::make_counter>() const { return m_make_counter; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::broker_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>( m_broker_state)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::spdr_mkt_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>( m_spdr_mkt_state)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::child_order_mask>() const { return m_child_order_mask; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::num_child_orders>() const { return m_num_child_orders; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::num_day_child_orders>() const { return m_num_day_child_orders; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrMLegBrkrEvent::get<SpdrMLegBrkrEvent::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrMLegBrkrEvent_PKey::get<SpdrMLegBrkrEvent_PKey::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrMLegBrkrEvent_PKey::get<SpdrMLegBrkrEvent_PKey::rec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventRecType>(m_rec_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrMLegBrkrEvent_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrMLegBrkrEvent_PKey::parent_number>();
        o << ",\"rec_type\":" << (int64_t)m.get<SpdrMLegBrkrEvent_PKey::rec_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrMLegBrkrEvent& m) {
        o << "\"_meta\":{" << m.get<SpdrMLegBrkrEvent::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrMLegBrkrEvent::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpdrMLegBrkrEvent::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<SpdrMLegBrkrEvent::accnt>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrMLegBrkrEvent::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrMLegBrkrEvent::grouping_code>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrMLegBrkrEvent::order_side>();
        o << ",\"client_firm\":\"" << m.get<SpdrMLegBrkrEvent::client_firm>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<SpdrMLegBrkrEvent::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrMLegBrkrEvent::alt_user_name>() << "\"";
        o << ",\"event_number\":" << m.get<SpdrMLegBrkrEvent::event_number>();
        o << ",\"stage_type\":" << (int64_t)m.get<SpdrMLegBrkrEvent::stage_type>();
        o << ",\"stage_review\":" << (int64_t)m.get<SpdrMLegBrkrEvent::stage_review>();
        o << ",\"base_parent_number\":" << m.get<SpdrMLegBrkrEvent::base_parent_number>();
        o << ",\"prev_parent_number\":" << m.get<SpdrMLegBrkrEvent::prev_parent_number>();
        o << ",\"engine_name\":\"" << m.get<SpdrMLegBrkrEvent::engine_name>() << "\"";
        o << ",\"spdr_broker_status\":" << (int64_t)m.get<SpdrMLegBrkrEvent::spdr_broker_status>();
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrMLegBrkrEvent::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrMLegBrkrEvent::spdr_close_reason>();
        o << ",\"spdr_reject_reason\":" << (int64_t)m.get<SpdrMLegBrkrEvent::spdr_reject_reason>();
        o << ",\"spdr_comment\":\"" << m.get<SpdrMLegBrkrEvent::spdr_comment>() << "\"";
        o << ",\"cum_square_qty\":" << m.get<SpdrMLegBrkrEvent::cum_square_qty>();
        o << ",\"avg_square_prc\":" << m.get<SpdrMLegBrkrEvent::avg_square_prc>();
        o << ",\"cum_partial_qty\":" << m.get<SpdrMLegBrkrEvent::cum_partial_qty>();
        o << ",\"u_bid\":" << m.get<SpdrMLegBrkrEvent::u_bid>();
        o << ",\"u_ask\":" << m.get<SpdrMLegBrkrEvent::u_ask>();
        o << ",\"bid_prc\":" << m.get<SpdrMLegBrkrEvent::bid_prc>();
        o << ",\"ask_prc\":" << m.get<SpdrMLegBrkrEvent::ask_prc>();
        o << ",\"bid_size\":" << m.get<SpdrMLegBrkrEvent::bid_size>();
        o << ",\"ask_size\":" << m.get<SpdrMLegBrkrEvent::ask_size>();
        o << ",\"open_order_size\":" << m.get<SpdrMLegBrkrEvent::open_order_size>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrMLegBrkrEvent::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrMLegBrkrEvent::hedge_sec_type>();
        o << ",\"risk_limit_size\":" << m.get<SpdrMLegBrkrEvent::risk_limit_size>();
        o << ",\"risk_limit_desc\":" << (int64_t)m.get<SpdrMLegBrkrEvent::risk_limit_desc>();
        o << ",\"risk_limit_level\":" << (int64_t)m.get<SpdrMLegBrkrEvent::risk_limit_level>();
        o << ",\"risk_limit_detail\":\"" << m.get<SpdrMLegBrkrEvent::risk_limit_detail>() << "\"";
        o << ",\"limit_price\":" << m.get<SpdrMLegBrkrEvent::limit_price>();
        o << ",\"limit_err\":" << (int64_t)m.get<SpdrMLegBrkrEvent::limit_err>();
        o << ",\"limit_err_desc\":\"" << m.get<SpdrMLegBrkrEvent::limit_err_desc>() << "\"";
        o << ",\"algo_state\":" << (int64_t)m.get<SpdrMLegBrkrEvent::algo_state>();
        o << ",\"algo_counter\":" << m.get<SpdrMLegBrkrEvent::algo_counter>();
        o << ",\"make_state\":" << (int64_t)m.get<SpdrMLegBrkrEvent::make_state>();
        o << ",\"make_counter\":" << m.get<SpdrMLegBrkrEvent::make_counter>();
        o << ",\"broker_state\":" << (int64_t)m.get<SpdrMLegBrkrEvent::broker_state>();
        o << ",\"spdr_mkt_state\":" << (int64_t)m.get<SpdrMLegBrkrEvent::spdr_mkt_state>();
        o << ",\"child_order_mask\":" << m.get<SpdrMLegBrkrEvent::child_order_mask>();
        o << ",\"num_child_orders\":" << m.get<SpdrMLegBrkrEvent::num_child_orders>();
        o << ",\"num_day_child_orders\":" << m.get<SpdrMLegBrkrEvent::num_day_child_orders>();
        o << ",\"modified_by\":\"" << m.get<SpdrMLegBrkrEvent::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrMLegBrkrEvent::modified_in>();
        {
            std::time_t tt = m.get<SpdrMLegBrkrEvent::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}