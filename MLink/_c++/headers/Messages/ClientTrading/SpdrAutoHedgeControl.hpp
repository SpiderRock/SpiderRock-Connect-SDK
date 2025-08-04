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

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _src_routing_code__GUARD__
    #define _src_routing_code__GUARD__
    DECL_STRONG_TYPE(src_routing_code, string);
    #endif//_src_routing_code__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _extern_ex_dest__GUARD__
    #define _extern_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_ex_dest, string);
    #endif//_extern_ex_dest__GUARD__

    #ifndef _extern_params__GUARD__
    #define _extern_params__GUARD__
    DECL_STRONG_TYPE(extern_params, string);
    #endif//_extern_params__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _auto_hedge__GUARD__
    #define _auto_hedge__GUARD__
    DECL_STRONG_TYPE(auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_auto_hedge__GUARD__

    #ifndef _hedge_target__HedgeTarget__GUARD__
    #define _hedge_target__HedgeTarget__GUARD__
    DECL_STRONG_TYPE(hedge_target__HedgeTarget, spiderrock::protobuf::api::HedgeTarget);
    #endif//_hedge_target__HedgeTarget__GUARD__

    #ifndef _min_hedge_ddelta__GUARD__
    #define _min_hedge_ddelta__GUARD__
    DECL_STRONG_TYPE(min_hedge_ddelta, float);
    #endif//_min_hedge_ddelta__GUARD__

    #ifndef _max_hedge_ddelta__GUARD__
    #define _max_hedge_ddelta__GUARD__
    DECL_STRONG_TYPE(max_hedge_ddelta, float);
    #endif//_max_hedge_ddelta__GUARD__

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _max_exposure_size__GUARD__
    #define _max_exposure_size__GUARD__
    DECL_STRONG_TYPE(max_exposure_size, int32);
    #endif//_max_exposure_size__GUARD__

    #ifndef _num_make_exchanges__GUARD__
    #define _num_make_exchanges__GUARD__
    DECL_STRONG_TYPE(num_make_exchanges, int32);
    #endif//_num_make_exchanges__GUARD__

    #ifndef _public_size__GUARD__
    #define _public_size__GUARD__
    DECL_STRONG_TYPE(public_size, spiderrock::protobuf::api::PublicSizeHandling);
    #endif//_public_size__GUARD__

    #ifndef _can_overlap_cxl_repl__GUARD__
    #define _can_overlap_cxl_repl__GUARD__
    DECL_STRONG_TYPE(can_overlap_cxl_repl, spiderrock::protobuf::api::YesNo);
    #endif//_can_overlap_cxl_repl__GUARD__

    #ifndef _progress_rule__GUARD__
    #define _progress_rule__GUARD__
    DECL_STRONG_TYPE(progress_rule, spiderrock::protobuf::api::ProgressRule);
    #endif//_progress_rule__GUARD__

    #ifndef _progress_slice_cnt__GUARD__
    #define _progress_slice_cnt__GUARD__
    DECL_STRONG_TYPE(progress_slice_cnt, int32);
    #endif//_progress_slice_cnt__GUARD__

    #ifndef _progress_expose_time__GUARD__
    #define _progress_expose_time__GUARD__
    DECL_STRONG_TYPE(progress_expose_time, int32);
    #endif//_progress_expose_time__GUARD__

    #ifndef _vwap_participation__GUARD__
    #define _vwap_participation__GUARD__
    DECL_STRONG_TYPE(vwap_participation, float);
    #endif//_vwap_participation__GUARD__

    #ifndef _min_mkt_on_close_pct__GUARD__
    #define _min_mkt_on_close_pct__GUARD__
    DECL_STRONG_TYPE(min_mkt_on_close_pct, int32);
    #endif//_min_mkt_on_close_pct__GUARD__

    #ifndef _max_make_exch_fee__GUARD__
    #define _max_make_exch_fee__GUARD__
    DECL_STRONG_TYPE(max_make_exch_fee, float);
    #endif//_max_make_exch_fee__GUARD__

    #ifndef _max_take_exch_fee__GUARD__
    #define _max_take_exch_fee__GUARD__
    DECL_STRONG_TYPE(max_take_exch_fee, float);
    #endif//_max_take_exch_fee__GUARD__

    #ifndef _inc_take_exch_fee__GUARD__
    #define _inc_take_exch_fee__GUARD__
    DECL_STRONG_TYPE(inc_take_exch_fee, spiderrock::protobuf::api::IncExchFee);
    #endif//_inc_take_exch_fee__GUARD__

    #ifndef _inc_make_exch_fee__GUARD__
    #define _inc_make_exch_fee__GUARD__
    DECL_STRONG_TYPE(inc_make_exch_fee, spiderrock::protobuf::api::IncExchFee);
    #endif//_inc_make_exch_fee__GUARD__

    #ifndef _make_exch_rule__GUARD__
    #define _make_exch_rule__GUARD__
    DECL_STRONG_TYPE(make_exch_rule, spiderrock::protobuf::api::MakeExchRule);
    #endif//_make_exch_rule__GUARD__

    #ifndef _max_child_orders__GUARD__
    #define _max_child_orders__GUARD__
    DECL_STRONG_TYPE(max_child_orders, int32);
    #endif//_max_child_orders__GUARD__

    #ifndef _exch_mask__GUARD__
    #define _exch_mask__GUARD__
    DECL_STRONG_TYPE(exch_mask, uint32);
    #endif//_exch_mask__GUARD__

    #ifndef _market_session__GUARD__
    #define _market_session__GUARD__
    DECL_STRONG_TYPE(market_session, spiderrock::protobuf::api::MarketSession);
    #endif//_market_session__GUARD__

    #ifndef _start_dttm__GUARD__
    #define _start_dttm__GUARD__
    DECL_STRONG_TYPE(start_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_start_dttm__GUARD__

    #ifndef _order_duration__GUARD__
    #define _order_duration__GUARD__
    DECL_STRONG_TYPE(order_duration, int32);
    #endif//_order_duration__GUARD__

    #ifndef _active_duration__GUARD__
    #define _active_duration__GUARD__
    DECL_STRONG_TYPE(active_duration, int32);
    #endif//_active_duration__GUARD__

    #ifndef _good_till_dttm__GUARD__
    #define _good_till_dttm__GUARD__
    DECL_STRONG_TYPE(good_till_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_good_till_dttm__GUARD__

    #ifndef _parent_order_handling__GUARD__
    #define _parent_order_handling__GUARD__
    DECL_STRONG_TYPE(parent_order_handling, spiderrock::protobuf::api::ParentOrderHandling);
    #endif//_parent_order_handling__GUARD__

    #ifndef _parent_balance_handling__GUARD__
    #define _parent_balance_handling__GUARD__
    DECL_STRONG_TYPE(parent_balance_handling, spiderrock::protobuf::api::ParentBalanceHandling);
    #endif//_parent_balance_handling__GUARD__

    #ifndef _order_limit_type__GUARD__
    #define _order_limit_type__GUARD__
    DECL_STRONG_TYPE(order_limit_type, spiderrock::protobuf::api::SpdrLimitType);
    #endif//_order_limit_type__GUARD__

    #ifndef _take_limit_class__GUARD__
    #define _take_limit_class__GUARD__
    DECL_STRONG_TYPE(take_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_take_limit_class__GUARD__

    #ifndef _make_limit_class__GUARD__
    #define _make_limit_class__GUARD__
    DECL_STRONG_TYPE(make_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_make_limit_class__GUARD__

    #ifndef _hedge_fill_umark_lmt_prc__GUARD__
    #define _hedge_fill_umark_lmt_prc__GUARD__
    DECL_STRONG_TYPE(hedge_fill_umark_lmt_prc, spiderrock::protobuf::api::YesNo);
    #endif//_hedge_fill_umark_lmt_prc__GUARD__

    #ifndef _order_prc_limit__GUARD__
    #define _order_prc_limit__GUARD__
    DECL_STRONG_TYPE(order_prc_limit, double);
    #endif//_order_prc_limit__GUARD__

    #ifndef _order_prc_offset__GUARD__
    #define _order_prc_offset__GUARD__
    DECL_STRONG_TYPE(order_prc_offset, double);
    #endif//_order_prc_offset__GUARD__

    #ifndef _state_model__GUARD__
    #define _state_model__GUARD__
    DECL_STRONG_TYPE(state_model, spiderrock::protobuf::api::StateModel);
    #endif//_state_model__GUARD__

    #ifndef _take_alpha_type__GUARD__
    #define _take_alpha_type__GUARD__
    DECL_STRONG_TYPE(take_alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_take_alpha_type__GUARD__

    #ifndef _make_alpha_type__GUARD__
    #define _make_alpha_type__GUARD__
    DECL_STRONG_TYPE(make_alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_make_alpha_type__GUARD__

    #ifndef _take_alpha_factor__GUARD__
    #define _take_alpha_factor__GUARD__
    DECL_STRONG_TYPE(take_alpha_factor, float);
    #endif//_take_alpha_factor__GUARD__

    #ifndef _make_alpha_factor__GUARD__
    #define _make_alpha_factor__GUARD__
    DECL_STRONG_TYPE(make_alpha_factor, float);
    #endif//_make_alpha_factor__GUARD__

    #ifndef _take_probability__GUARD__
    #define _take_probability__GUARD__
    DECL_STRONG_TYPE(take_probability, float);
    #endif//_take_probability__GUARD__

    #ifndef _make_probability__GUARD__
    #define _make_probability__GUARD__
    DECL_STRONG_TYPE(make_probability, float);
    #endif//_make_probability__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrAutoHedgeControl_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        risk_group_id m_risk_group_id{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }
		hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAutoHedgeControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAutoHedgeControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const risk_group_id & value) { set_risk_group_id(value); }
        void set(const hedge_sec_key & value) { set_hedge_sec_key(value); }
        void set(const hedge_sec_type & value) { set_hedge_sec_type(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrAutoHedgeControl_PKey() {}

        virtual ~SpdrAutoHedgeControl_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_risk_group_id);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key;
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(12,expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_risk_group_id);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key;
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 12, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 12: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_hedge_sec_key.setFromCodec(expiryKey);
                        break;
                    }
                    case 13: {m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrAutoHedgeControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAutoHedgeControl_PKey;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using extern_ex_dest = spiderrock::protobuf::api::extern_ex_dest;
        using extern_params = spiderrock::protobuf::api::extern_params;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_name = spiderrock::protobuf::api::user_name;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_target = spiderrock::protobuf::api::hedge_target__HedgeTarget;
        using min_hedge_ddelta = spiderrock::protobuf::api::min_hedge_ddelta;
        using max_hedge_ddelta = spiderrock::protobuf::api::max_hedge_ddelta;
        using order_size = spiderrock::protobuf::api::order_size;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using max_exposure_size = spiderrock::protobuf::api::max_exposure_size;
        using num_make_exchanges = spiderrock::protobuf::api::num_make_exchanges;
        using public_size = spiderrock::protobuf::api::public_size;
        using can_overlap_cxl_repl = spiderrock::protobuf::api::can_overlap_cxl_repl;
        using progress_rule = spiderrock::protobuf::api::progress_rule;
        using progress_slice_cnt = spiderrock::protobuf::api::progress_slice_cnt;
        using progress_expose_time = spiderrock::protobuf::api::progress_expose_time;
        using vwap_participation = spiderrock::protobuf::api::vwap_participation;
        using min_mkt_on_close_pct = spiderrock::protobuf::api::min_mkt_on_close_pct;
        using max_make_exch_fee = spiderrock::protobuf::api::max_make_exch_fee;
        using max_take_exch_fee = spiderrock::protobuf::api::max_take_exch_fee;
        using inc_take_exch_fee = spiderrock::protobuf::api::inc_take_exch_fee;
        using inc_make_exch_fee = spiderrock::protobuf::api::inc_make_exch_fee;
        using make_exch_rule = spiderrock::protobuf::api::make_exch_rule;
        using max_child_orders = spiderrock::protobuf::api::max_child_orders;
        using exch_mask = spiderrock::protobuf::api::exch_mask;
        using market_session = spiderrock::protobuf::api::market_session;
        using start_dttm = spiderrock::protobuf::api::start_dttm;
        using order_duration = spiderrock::protobuf::api::order_duration;
        using active_duration = spiderrock::protobuf::api::active_duration;
        using good_till_dttm = spiderrock::protobuf::api::good_till_dttm;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using take_limit_class = spiderrock::protobuf::api::take_limit_class;
        using make_limit_class = spiderrock::protobuf::api::make_limit_class;
        using hedge_fill_umark_lmt_prc = spiderrock::protobuf::api::hedge_fill_umark_lmt_prc;
        using order_prc_limit = spiderrock::protobuf::api::order_prc_limit;
        using order_prc_offset = spiderrock::protobuf::api::order_prc_offset;
        using state_model = spiderrock::protobuf::api::state_model;
        using take_alpha_type = spiderrock::protobuf::api::take_alpha_type;
        using make_alpha_type = spiderrock::protobuf::api::make_alpha_type;
        using take_alpha_factor = spiderrock::protobuf::api::take_alpha_factor;
        using make_alpha_factor = spiderrock::protobuf::api::make_alpha_factor;
        using take_probability = spiderrock::protobuf::api::take_probability;
        using make_probability = spiderrock::protobuf::api::make_probability;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        alt_order_id m_alt_order_id{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        src_routing_code m_src_routing_code{};
        exec_brkr_code m_exec_brkr_code{};
        extern_ex_dest m_extern_ex_dest{};
        extern_params m_extern_params{};
        strategy m_strategy{};
        user_name m_user_name{};
        auto_hedge m_auto_hedge{};
        hedge_target m_hedge_target{};
        min_hedge_ddelta m_min_hedge_ddelta{};
        max_hedge_ddelta m_max_hedge_ddelta{};
        order_size m_order_size{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        max_exposure_size m_max_exposure_size{};
        num_make_exchanges m_num_make_exchanges{};
        public_size m_public_size{};
        can_overlap_cxl_repl m_can_overlap_cxl_repl{};
        progress_rule m_progress_rule{};
        progress_slice_cnt m_progress_slice_cnt{};
        progress_expose_time m_progress_expose_time{};
        vwap_participation m_vwap_participation{};
        min_mkt_on_close_pct m_min_mkt_on_close_pct{};
        max_make_exch_fee m_max_make_exch_fee{};
        max_take_exch_fee m_max_take_exch_fee{};
        inc_take_exch_fee m_inc_take_exch_fee{};
        inc_make_exch_fee m_inc_make_exch_fee{};
        make_exch_rule m_make_exch_rule{};
        max_child_orders m_max_child_orders{};
        exch_mask m_exch_mask{};
        market_session m_market_session{};
        start_dttm m_start_dttm{};
        order_duration m_order_duration{};
        active_duration m_active_duration{};
        good_till_dttm m_good_till_dttm{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        order_limit_type m_order_limit_type{};
        take_limit_class m_take_limit_class{};
        make_limit_class m_make_limit_class{};
        hedge_fill_umark_lmt_prc m_hedge_fill_umark_lmt_prc{};
        order_prc_limit m_order_prc_limit{};
        order_prc_offset m_order_prc_offset{};
        state_model m_state_model{};
        take_alpha_type m_take_alpha_type{};
        make_alpha_type m_make_alpha_type{};
        take_alpha_factor m_take_alpha_factor{};
        make_alpha_factor m_make_alpha_factor{};
        take_probability m_take_probability{};
        make_probability m_make_probability{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        src_routing_code get_src_routing_code() const {
            return m_src_routing_code;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        extern_ex_dest get_extern_ex_dest() const {
            return m_extern_ex_dest;
        }		
        extern_params get_extern_params() const {
            return m_extern_params;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        auto_hedge get_auto_hedge() const {
            return m_auto_hedge;
        }		
        hedge_target get_hedge_target() const {
            return m_hedge_target;
        }		
        min_hedge_ddelta get_min_hedge_ddelta() const {
            return m_min_hedge_ddelta;
        }		
        max_hedge_ddelta get_max_hedge_ddelta() const {
            return m_max_hedge_ddelta;
        }		
        order_size get_order_size() const {
            return m_order_size;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        max_exposure_size get_max_exposure_size() const {
            return m_max_exposure_size;
        }		
        num_make_exchanges get_num_make_exchanges() const {
            return m_num_make_exchanges;
        }		
        public_size get_public_size() const {
            return m_public_size;
        }		
        can_overlap_cxl_repl get_can_overlap_cxl_repl() const {
            return m_can_overlap_cxl_repl;
        }		
        progress_rule get_progress_rule() const {
            return m_progress_rule;
        }		
        progress_slice_cnt get_progress_slice_cnt() const {
            return m_progress_slice_cnt;
        }		
        progress_expose_time get_progress_expose_time() const {
            return m_progress_expose_time;
        }		
        vwap_participation get_vwap_participation() const {
            return m_vwap_participation;
        }		
        min_mkt_on_close_pct get_min_mkt_on_close_pct() const {
            return m_min_mkt_on_close_pct;
        }		
        max_make_exch_fee get_max_make_exch_fee() const {
            return m_max_make_exch_fee;
        }		
        max_take_exch_fee get_max_take_exch_fee() const {
            return m_max_take_exch_fee;
        }		
        inc_take_exch_fee get_inc_take_exch_fee() const {
            return m_inc_take_exch_fee;
        }		
        inc_make_exch_fee get_inc_make_exch_fee() const {
            return m_inc_make_exch_fee;
        }		
        make_exch_rule get_make_exch_rule() const {
            return m_make_exch_rule;
        }		
        max_child_orders get_max_child_orders() const {
            return m_max_child_orders;
        }		
        exch_mask get_exch_mask() const {
            return m_exch_mask;
        }		
        market_session get_market_session() const {
            return m_market_session;
        }		
        start_dttm get_start_dttm() const {
            return m_start_dttm;
        }		
        order_duration get_order_duration() const {
            return m_order_duration;
        }		
        active_duration get_active_duration() const {
            return m_active_duration;
        }		
        good_till_dttm get_good_till_dttm() const {
            return m_good_till_dttm;
        }		
        parent_order_handling get_parent_order_handling() const {
            return m_parent_order_handling;
        }		
        parent_balance_handling get_parent_balance_handling() const {
            return m_parent_balance_handling;
        }		
        order_limit_type get_order_limit_type() const {
            return m_order_limit_type;
        }		
        take_limit_class get_take_limit_class() const {
            return m_take_limit_class;
        }		
        make_limit_class get_make_limit_class() const {
            return m_make_limit_class;
        }		
        hedge_fill_umark_lmt_prc get_hedge_fill_umark_lmt_prc() const {
            return m_hedge_fill_umark_lmt_prc;
        }		
        order_prc_limit get_order_prc_limit() const {
            return m_order_prc_limit;
        }		
        order_prc_offset get_order_prc_offset() const {
            return m_order_prc_offset;
        }		
        state_model get_state_model() const {
            return m_state_model;
        }		
        take_alpha_type get_take_alpha_type() const {
            return m_take_alpha_type;
        }		
        make_alpha_type get_make_alpha_type() const {
            return m_make_alpha_type;
        }		
        take_alpha_factor get_take_alpha_factor() const {
            return m_take_alpha_factor;
        }		
        make_alpha_factor get_make_alpha_factor() const {
            return m_make_alpha_factor;
        }		
        take_probability get_take_probability() const {
            return m_take_probability;
        }		
        make_probability get_make_probability() const {
            return m_make_probability;
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
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_src_routing_code(const src_routing_code& value)  {
            m_src_routing_code = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_extern_ex_dest(const extern_ex_dest& value)  {
            m_extern_ex_dest = value;
        }
        void set_extern_params(const extern_params& value)  {
            m_extern_params = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_auto_hedge(const auto_hedge& value)  {
            m_auto_hedge = value;
        }
        void set_hedge_target(const hedge_target& value)  {
            m_hedge_target = value;
        }
        void set_min_hedge_ddelta(const min_hedge_ddelta& value)  {
            m_min_hedge_ddelta = value;
        }
        void set_max_hedge_ddelta(const max_hedge_ddelta& value)  {
            m_max_hedge_ddelta = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_max_exposure_size(const max_exposure_size& value)  {
            m_max_exposure_size = value;
        }
        void set_num_make_exchanges(const num_make_exchanges& value)  {
            m_num_make_exchanges = value;
        }
        void set_public_size(const public_size& value)  {
            m_public_size = value;
        }
        void set_can_overlap_cxl_repl(const can_overlap_cxl_repl& value)  {
            m_can_overlap_cxl_repl = value;
        }
        void set_progress_rule(const progress_rule& value)  {
            m_progress_rule = value;
        }
        void set_progress_slice_cnt(const progress_slice_cnt& value)  {
            m_progress_slice_cnt = value;
        }
        void set_progress_expose_time(const progress_expose_time& value)  {
            m_progress_expose_time = value;
        }
        void set_vwap_participation(const vwap_participation& value)  {
            m_vwap_participation = value;
        }
        void set_min_mkt_on_close_pct(const min_mkt_on_close_pct& value)  {
            m_min_mkt_on_close_pct = value;
        }
        void set_max_make_exch_fee(const max_make_exch_fee& value)  {
            m_max_make_exch_fee = value;
        }
        void set_max_take_exch_fee(const max_take_exch_fee& value)  {
            m_max_take_exch_fee = value;
        }
        void set_inc_take_exch_fee(const inc_take_exch_fee& value)  {
            m_inc_take_exch_fee = value;
        }
        void set_inc_make_exch_fee(const inc_make_exch_fee& value)  {
            m_inc_make_exch_fee = value;
        }
        void set_make_exch_rule(const make_exch_rule& value)  {
            m_make_exch_rule = value;
        }
        void set_max_child_orders(const max_child_orders& value)  {
            m_max_child_orders = value;
        }
        void set_exch_mask(const exch_mask& value)  {
            m_exch_mask = value;
        }
        void set_market_session(const market_session& value)  {
            m_market_session = value;
        }
        void set_start_dttm(const start_dttm& value)  {
            m_start_dttm = value;
        }
        void set_order_duration(const order_duration& value)  {
            m_order_duration = value;
        }
        void set_active_duration(const active_duration& value)  {
            m_active_duration = value;
        }
        void set_good_till_dttm(const good_till_dttm& value)  {
            m_good_till_dttm = value;
        }
        void set_parent_order_handling(const parent_order_handling& value)  {
            m_parent_order_handling = value;
        }
        void set_parent_balance_handling(const parent_balance_handling& value)  {
            m_parent_balance_handling = value;
        }
        void set_order_limit_type(const order_limit_type& value)  {
            m_order_limit_type = value;
        }
        void set_take_limit_class(const take_limit_class& value)  {
            m_take_limit_class = value;
        }
        void set_make_limit_class(const make_limit_class& value)  {
            m_make_limit_class = value;
        }
        void set_hedge_fill_umark_lmt_prc(const hedge_fill_umark_lmt_prc& value)  {
            m_hedge_fill_umark_lmt_prc = value;
        }
        void set_order_prc_limit(const order_prc_limit& value)  {
            m_order_prc_limit = value;
        }
        void set_order_prc_offset(const order_prc_offset& value)  {
            m_order_prc_offset = value;
        }
        void set_state_model(const state_model& value)  {
            m_state_model = value;
        }
        void set_take_alpha_type(const take_alpha_type& value)  {
            m_take_alpha_type = value;
        }
        void set_make_alpha_type(const make_alpha_type& value)  {
            m_make_alpha_type = value;
        }
        void set_take_alpha_factor(const take_alpha_factor& value)  {
            m_take_alpha_factor = value;
        }
        void set_make_alpha_factor(const make_alpha_factor& value)  {
            m_make_alpha_factor = value;
        }
        void set_take_probability(const take_probability& value)  {
            m_take_probability = value;
        }
        void set_make_probability(const make_probability& value)  {
            m_make_probability = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAutoHedgeControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const src_routing_code & value) {
            set_src_routing_code(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const extern_ex_dest & value) {
            set_extern_ex_dest(value);
        }
        void set(const extern_params & value) {
            set_extern_params(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const auto_hedge & value) {
            set_auto_hedge(value);
        }
        void set(const hedge_target & value) {
            set_hedge_target(value);
        }
        void set(const min_hedge_ddelta & value) {
            set_min_hedge_ddelta(value);
        }
        void set(const max_hedge_ddelta & value) {
            set_max_hedge_ddelta(value);
        }
        void set(const order_size & value) {
            set_order_size(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const max_exposure_size & value) {
            set_max_exposure_size(value);
        }
        void set(const num_make_exchanges & value) {
            set_num_make_exchanges(value);
        }
        void set(const public_size & value) {
            set_public_size(value);
        }
        void set(const can_overlap_cxl_repl & value) {
            set_can_overlap_cxl_repl(value);
        }
        void set(const progress_rule & value) {
            set_progress_rule(value);
        }
        void set(const progress_slice_cnt & value) {
            set_progress_slice_cnt(value);
        }
        void set(const progress_expose_time & value) {
            set_progress_expose_time(value);
        }
        void set(const vwap_participation & value) {
            set_vwap_participation(value);
        }
        void set(const min_mkt_on_close_pct & value) {
            set_min_mkt_on_close_pct(value);
        }
        void set(const max_make_exch_fee & value) {
            set_max_make_exch_fee(value);
        }
        void set(const max_take_exch_fee & value) {
            set_max_take_exch_fee(value);
        }
        void set(const inc_take_exch_fee & value) {
            set_inc_take_exch_fee(value);
        }
        void set(const inc_make_exch_fee & value) {
            set_inc_make_exch_fee(value);
        }
        void set(const make_exch_rule & value) {
            set_make_exch_rule(value);
        }
        void set(const max_child_orders & value) {
            set_max_child_orders(value);
        }
        void set(const exch_mask & value) {
            set_exch_mask(value);
        }
        void set(const market_session & value) {
            set_market_session(value);
        }
        void set(const start_dttm & value) {
            set_start_dttm(value);
        }
        void set(const order_duration & value) {
            set_order_duration(value);
        }
        void set(const active_duration & value) {
            set_active_duration(value);
        }
        void set(const good_till_dttm & value) {
            set_good_till_dttm(value);
        }
        void set(const parent_order_handling & value) {
            set_parent_order_handling(value);
        }
        void set(const parent_balance_handling & value) {
            set_parent_balance_handling(value);
        }
        void set(const order_limit_type & value) {
            set_order_limit_type(value);
        }
        void set(const take_limit_class & value) {
            set_take_limit_class(value);
        }
        void set(const make_limit_class & value) {
            set_make_limit_class(value);
        }
        void set(const hedge_fill_umark_lmt_prc & value) {
            set_hedge_fill_umark_lmt_prc(value);
        }
        void set(const order_prc_limit & value) {
            set_order_prc_limit(value);
        }
        void set(const order_prc_offset & value) {
            set_order_prc_offset(value);
        }
        void set(const state_model & value) {
            set_state_model(value);
        }
        void set(const take_alpha_type & value) {
            set_take_alpha_type(value);
        }
        void set(const make_alpha_type & value) {
            set_make_alpha_type(value);
        }
        void set(const take_alpha_factor & value) {
            set_take_alpha_factor(value);
        }
        void set(const make_alpha_factor & value) {
            set_make_alpha_factor(value);
        }
        void set(const take_probability & value) {
            set_take_probability(value);
        }
        void set(const make_probability & value) {
            set_make_probability(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrAutoHedgeControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_alt_order_id);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_src_routing_code);
            set(value.m_exec_brkr_code);
            set(value.m_extern_ex_dest);
            set(value.m_extern_params);
            set(value.m_strategy);
            set(value.m_user_name);
            set(value.m_auto_hedge);
            set(value.m_hedge_target);
            set(value.m_min_hedge_ddelta);
            set(value.m_max_hedge_ddelta);
            set(value.m_order_size);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_max_exposure_size);
            set(value.m_num_make_exchanges);
            set(value.m_public_size);
            set(value.m_can_overlap_cxl_repl);
            set(value.m_progress_rule);
            set(value.m_progress_slice_cnt);
            set(value.m_progress_expose_time);
            set(value.m_vwap_participation);
            set(value.m_min_mkt_on_close_pct);
            set(value.m_max_make_exch_fee);
            set(value.m_max_take_exch_fee);
            set(value.m_inc_take_exch_fee);
            set(value.m_inc_make_exch_fee);
            set(value.m_make_exch_rule);
            set(value.m_max_child_orders);
            set(value.m_exch_mask);
            set(value.m_market_session);
            set(value.m_start_dttm);
            set(value.m_order_duration);
            set(value.m_active_duration);
            set(value.m_good_till_dttm);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_order_limit_type);
            set(value.m_take_limit_class);
            set(value.m_make_limit_class);
            set(value.m_hedge_fill_umark_lmt_prc);
            set(value.m_order_prc_limit);
            set(value.m_order_prc_offset);
            set(value.m_state_model);
            set(value.m_take_alpha_type);
            set(value.m_make_alpha_type);
            set(value.m_take_alpha_factor);
            set(value.m_make_alpha_factor);
            set(value.m_take_probability);
            set(value.m_make_probability);
            set(value.m_timestamp);
        }

        SpdrAutoHedgeControl() {
            m__meta.set_message_type("SpdrAutoHedgeControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 5295, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 5295, length);
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
             *this = SpdrAutoHedgeControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeSrcRoutingCode() const {
            return !(m_src_routing_code.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExternExDest() const {
            return !(m_extern_ex_dest.empty());
        }
        bool IncludeExternParams() const {
            return !(m_extern_params.empty());
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeMinHedgeDdelta() const {
            return !(m_min_hedge_ddelta == 0.0);
        }
        bool IncludeMaxHedgeDdelta() const {
            return !(m_max_hedge_ddelta == 0.0);
        }
        bool IncludeOrderSize() const {
            return !(m_order_size == 0);
        }
        bool IncludeMaxExposureSize() const {
            return !(m_max_exposure_size == 0);
        }
        bool IncludeNumMakeExchanges() const {
            return !(m_num_make_exchanges == 0);
        }
        bool IncludeProgressSliceCnt() const {
            return !(m_progress_slice_cnt == 0);
        }
        bool IncludeProgressExposeTime() const {
            return !(m_progress_expose_time == 0);
        }
        bool IncludeVwapParticipation() const {
            return !(m_vwap_participation == 0.0);
        }
        bool IncludeMinMktOnClosePct() const {
            return !(m_min_mkt_on_close_pct == 0);
        }
        bool IncludeMaxMakeExchFee() const {
            return !(m_max_make_exch_fee == 0.0);
        }
        bool IncludeMaxTakeExchFee() const {
            return !(m_max_take_exch_fee == 0.0);
        }
        bool IncludeMaxChildOrders() const {
            return !(m_max_child_orders == 0);
        }
        bool IncludeExchMask() const {
            return !(m_exch_mask == 0);
        }
        bool IncludeStartDttm() const {
            return (m_start_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderDuration() const {
            return !(m_order_duration == 0);
        }
        bool IncludeActiveDuration() const {
            return !(m_active_duration == 0);
        }
        bool IncludeGoodTillDttm() const {
            return (m_good_till_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderPrcLimit() const {
            return !(m_order_prc_limit == 0.0);
        }
        bool IncludeOrderPrcOffset() const {
            return !(m_order_prc_offset == 0.0);
        }
        bool IncludeTakeAlphaFactor() const {
            return !(m_take_alpha_factor == 0.0);
        }
        bool IncludeMakeAlphaFactor() const {
            return !(m_make_alpha_factor == 0.0);
        }
        bool IncludeTakeProbability() const {
            return !(m_take_probability == 0.0);
        }
        bool IncludeMakeProbability() const {
            return !(m_make_probability == 0.0);
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
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_alt_order_id);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_alt_user_name);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_src_routing_code);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(254,m_exec_brkr_code);
            }
            if ( IncludeExternExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(255,m_extern_ex_dest);
            }
            if ( IncludeExternParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_extern_params);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_strategy);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeTarget>(m_hedge_target)));
            if ( IncludeMinHedgeDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_min_hedge_ddelta);
            }
            if ( IncludeMaxHedgeDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_max_hedge_ddelta);
            }
            if ( IncludeOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_order_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(251,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            if ( IncludeMaxExposureSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_max_exposure_size);
            }
            if ( IncludeNumMakeExchanges()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_num_make_exchanges);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            if ( IncludeProgressSliceCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_progress_slice_cnt);
            }
            if ( IncludeProgressExposeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_progress_expose_time);
            }
            if ( IncludeVwapParticipation()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_vwap_participation);
            }
            if ( IncludeMinMktOnClosePct()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_min_mkt_on_close_pct);
            }
            if ( IncludeMaxMakeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_max_make_exch_fee);
            }
            if ( IncludeMaxTakeExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_max_take_exch_fee);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_take_exch_fee)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_make_exch_fee)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>(m_make_exch_rule)));
            if ( IncludeMaxChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_max_child_orders);
            }
            if ( IncludeExchMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(193,m_exch_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(252,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeStartDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(199, m_start_dttm);
            }
            if ( IncludeOrderDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_order_duration);
            }
            if ( IncludeActiveDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(253,m_active_duration);
            }
            if ( IncludeGoodTillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(205, m_good_till_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_hedge_fill_umark_lmt_prc)));
            if ( IncludeOrderPrcLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(223,m_order_prc_limit);
            }
            if ( IncludeOrderPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(226,m_order_prc_offset);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_make_probability);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(250, m_timestamp);
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
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_src_routing_code));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,254,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExternExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,255,static_cast<string>(m_extern_ex_dest));
            }
            if ( IncludeExternParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_extern_params));
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_strategy));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeTarget>(m_hedge_target)));
            if ( IncludeMinHedgeDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_min_hedge_ddelta);
            }
            if ( IncludeMaxHedgeDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_max_hedge_ddelta);
            }
            if ( IncludeOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_order_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,251,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            if ( IncludeMaxExposureSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_max_exposure_size);
            }
            if ( IncludeNumMakeExchanges()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_num_make_exchanges);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_overlap_cxl_repl)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            if ( IncludeProgressSliceCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_progress_slice_cnt);
            }
            if ( IncludeProgressExposeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_progress_expose_time);
            }
            if ( IncludeVwapParticipation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_vwap_participation);
            }
            if ( IncludeMinMktOnClosePct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_min_mkt_on_close_pct);
            }
            if ( IncludeMaxMakeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_max_make_exch_fee);
            }
            if ( IncludeMaxTakeExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_max_take_exch_fee);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_take_exch_fee)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>(m_inc_make_exch_fee)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>(m_make_exch_rule)));
            if ( IncludeMaxChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_max_child_orders);
            }
            if ( IncludeExchMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,193,m_exch_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,252,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeStartDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 199, m_start_dttm);
            }
            if ( IncludeOrderDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_order_duration);
            }
            if ( IncludeActiveDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,253,m_active_duration);
            }
            if ( IncludeGoodTillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 205, m_good_till_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_hedge_fill_umark_lmt_prc)));
            if ( IncludeOrderPrcLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,223,m_order_prc_limit);
            }
            if ( IncludeOrderPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,226,m_order_prc_offset);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_take_alpha_factor);
            }
            if ( IncludeMakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_make_alpha_factor);
            }
            if ( IncludeTakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_take_probability);
            }
            if ( IncludeMakeProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_make_probability);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 250, m_timestamp);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 254: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 255: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_target = static_cast<spiderrock::protobuf::api::HedgeTarget>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_hedge_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_hedge_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 251: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_exposure_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_make_exchanges = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_public_size = static_cast<spiderrock::protobuf::api::PublicSizeHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_overlap_cxl_repl = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_progress_rule = static_cast<spiderrock::protobuf::api::ProgressRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_slice_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_expose_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwap_participation = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_mkt_on_close_pct = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_make_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_take_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_take_exch_fee = static_cast<spiderrock::protobuf::api::IncExchFee>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_make_exch_fee = static_cast<spiderrock::protobuf::api::IncExchFee>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_exch_rule = static_cast<spiderrock::protobuf::api::MakeExchRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_exch_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 252: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_start_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_good_till_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 220: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_fill_umark_lmt_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_limit = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 235: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
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

    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::_meta>() const { return SpdrAutoHedgeControl::_meta{ m__meta}; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::pkey>() const { return SpdrAutoHedgeControl::pkey{ m_pkey}; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::extern_ex_dest>() const { return m_extern_ex_dest; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::extern_params>() const { return m_extern_params; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::strategy>() const { return m_strategy; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::hedge_target>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeTarget>( m_hedge_target)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::min_hedge_ddelta>() const { return m_min_hedge_ddelta; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::max_hedge_ddelta>() const { return m_max_hedge_ddelta; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::max_exposure_size>() const { return m_max_exposure_size; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::num_make_exchanges>() const { return m_num_make_exchanges; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::public_size>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>( m_public_size)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::can_overlap_cxl_repl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_overlap_cxl_repl)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::progress_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>( m_progress_rule)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::progress_slice_cnt>() const { return m_progress_slice_cnt; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::progress_expose_time>() const { return m_progress_expose_time; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::vwap_participation>() const { return m_vwap_participation; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::min_mkt_on_close_pct>() const { return m_min_mkt_on_close_pct; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::max_make_exch_fee>() const { return m_max_make_exch_fee; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::max_take_exch_fee>() const { return m_max_take_exch_fee; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::inc_take_exch_fee>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>( m_inc_take_exch_fee)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::inc_make_exch_fee>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::IncExchFee>( m_inc_make_exch_fee)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::make_exch_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MakeExchRule>( m_make_exch_rule)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::max_child_orders>() const { return m_max_child_orders; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::exch_mask>() const { return m_exch_mask; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::market_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_market_session)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::start_dttm>() const { return m_start_dttm; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::order_duration>() const { return m_order_duration; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::active_duration>() const { return m_active_duration; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::good_till_dttm>() const { return m_good_till_dttm; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::take_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_take_limit_class)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::make_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_make_limit_class)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::hedge_fill_umark_lmt_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_hedge_fill_umark_lmt_prc)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::order_prc_limit>() const { return m_order_prc_limit; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::order_prc_offset>() const { return m_order_prc_offset; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>( m_state_model)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::take_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_take_alpha_type)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::make_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_make_alpha_type)); }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::take_alpha_factor>() const { return m_take_alpha_factor; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::make_alpha_factor>() const { return m_make_alpha_factor; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::take_probability>() const { return m_take_probability; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::make_probability>() const { return m_make_probability; }
    template<> inline const auto SpdrAutoHedgeControl::get<SpdrAutoHedgeControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAutoHedgeControl_PKey::get<SpdrAutoHedgeControl_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrAutoHedgeControl_PKey::get<SpdrAutoHedgeControl_PKey::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrAutoHedgeControl_PKey::get<SpdrAutoHedgeControl_PKey::hedge_sec_key>() const { return SpdrAutoHedgeControl_PKey::hedge_sec_key{m_hedge_sec_key}; }
    template<> inline const auto SpdrAutoHedgeControl_PKey::get<SpdrAutoHedgeControl_PKey::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type));}
    template<> inline const auto SpdrAutoHedgeControl_PKey::get<SpdrAutoHedgeControl_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAutoHedgeControl_PKey& m) {
        o << "\"accnt\":\"" << m.get<SpdrAutoHedgeControl_PKey::accnt>() << "\"";
        o << ",\"risk_group_id\":" << m.get<SpdrAutoHedgeControl_PKey::risk_group_id>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrAutoHedgeControl_PKey::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrAutoHedgeControl_PKey::hedge_sec_type>();
        o << ",\"client_firm\":\"" << m.get<SpdrAutoHedgeControl_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAutoHedgeControl& m) {
        o << "\"_meta\":{" << m.get<SpdrAutoHedgeControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAutoHedgeControl::pkey>() << "}";
        o << ",\"alt_order_id\":\"" << m.get<SpdrAutoHedgeControl::alt_order_id>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<SpdrAutoHedgeControl::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrAutoHedgeControl::alt_user_name>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<SpdrAutoHedgeControl::src_routing_code>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrAutoHedgeControl::exec_brkr_code>() << "\"";
        o << ",\"extern_ex_dest\":\"" << m.get<SpdrAutoHedgeControl::extern_ex_dest>() << "\"";
        o << ",\"extern_params\":\"" << m.get<SpdrAutoHedgeControl::extern_params>() << "\"";
        o << ",\"strategy\":\"" << m.get<SpdrAutoHedgeControl::strategy>() << "\"";
        o << ",\"user_name\":\"" << m.get<SpdrAutoHedgeControl::user_name>() << "\"";
        o << ",\"auto_hedge\":" << (int64_t)m.get<SpdrAutoHedgeControl::auto_hedge>();
        o << ",\"hedge_target\":" << (int64_t)m.get<SpdrAutoHedgeControl::hedge_target>();
        o << ",\"min_hedge_ddelta\":" << m.get<SpdrAutoHedgeControl::min_hedge_ddelta>();
        o << ",\"max_hedge_ddelta\":" << m.get<SpdrAutoHedgeControl::max_hedge_ddelta>();
        o << ",\"order_size\":" << m.get<SpdrAutoHedgeControl::order_size>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrAutoHedgeControl::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrAutoHedgeControl::position_type>();
        o << ",\"max_exposure_size\":" << m.get<SpdrAutoHedgeControl::max_exposure_size>();
        o << ",\"num_make_exchanges\":" << m.get<SpdrAutoHedgeControl::num_make_exchanges>();
        o << ",\"public_size\":" << (int64_t)m.get<SpdrAutoHedgeControl::public_size>();
        o << ",\"can_overlap_cxl_repl\":" << (int64_t)m.get<SpdrAutoHedgeControl::can_overlap_cxl_repl>();
        o << ",\"progress_rule\":" << (int64_t)m.get<SpdrAutoHedgeControl::progress_rule>();
        o << ",\"progress_slice_cnt\":" << m.get<SpdrAutoHedgeControl::progress_slice_cnt>();
        o << ",\"progress_expose_time\":" << m.get<SpdrAutoHedgeControl::progress_expose_time>();
        o << ",\"vwap_participation\":" << m.get<SpdrAutoHedgeControl::vwap_participation>();
        o << ",\"min_mkt_on_close_pct\":" << m.get<SpdrAutoHedgeControl::min_mkt_on_close_pct>();
        o << ",\"max_make_exch_fee\":" << m.get<SpdrAutoHedgeControl::max_make_exch_fee>();
        o << ",\"max_take_exch_fee\":" << m.get<SpdrAutoHedgeControl::max_take_exch_fee>();
        o << ",\"inc_take_exch_fee\":" << (int64_t)m.get<SpdrAutoHedgeControl::inc_take_exch_fee>();
        o << ",\"inc_make_exch_fee\":" << (int64_t)m.get<SpdrAutoHedgeControl::inc_make_exch_fee>();
        o << ",\"make_exch_rule\":" << (int64_t)m.get<SpdrAutoHedgeControl::make_exch_rule>();
        o << ",\"max_child_orders\":" << m.get<SpdrAutoHedgeControl::max_child_orders>();
        o << ",\"exch_mask\":" << m.get<SpdrAutoHedgeControl::exch_mask>();
        o << ",\"market_session\":" << (int64_t)m.get<SpdrAutoHedgeControl::market_session>();
        {
            std::time_t tt = m.get<SpdrAutoHedgeControl::start_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"start_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_duration\":" << m.get<SpdrAutoHedgeControl::order_duration>();
        o << ",\"active_duration\":" << m.get<SpdrAutoHedgeControl::active_duration>();
        {
            std::time_t tt = m.get<SpdrAutoHedgeControl::good_till_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"good_till_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"parent_order_handling\":" << (int64_t)m.get<SpdrAutoHedgeControl::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<SpdrAutoHedgeControl::parent_balance_handling>();
        o << ",\"order_limit_type\":" << (int64_t)m.get<SpdrAutoHedgeControl::order_limit_type>();
        o << ",\"take_limit_class\":" << (int64_t)m.get<SpdrAutoHedgeControl::take_limit_class>();
        o << ",\"make_limit_class\":" << (int64_t)m.get<SpdrAutoHedgeControl::make_limit_class>();
        o << ",\"hedge_fill_umark_lmt_prc\":" << (int64_t)m.get<SpdrAutoHedgeControl::hedge_fill_umark_lmt_prc>();
        o << ",\"order_prc_limit\":" << m.get<SpdrAutoHedgeControl::order_prc_limit>();
        o << ",\"order_prc_offset\":" << m.get<SpdrAutoHedgeControl::order_prc_offset>();
        o << ",\"state_model\":" << (int64_t)m.get<SpdrAutoHedgeControl::state_model>();
        o << ",\"take_alpha_type\":" << (int64_t)m.get<SpdrAutoHedgeControl::take_alpha_type>();
        o << ",\"make_alpha_type\":" << (int64_t)m.get<SpdrAutoHedgeControl::make_alpha_type>();
        o << ",\"take_alpha_factor\":" << m.get<SpdrAutoHedgeControl::take_alpha_factor>();
        o << ",\"make_alpha_factor\":" << m.get<SpdrAutoHedgeControl::make_alpha_factor>();
        o << ",\"take_probability\":" << m.get<SpdrAutoHedgeControl::take_probability>();
        o << ",\"make_probability\":" << m.get<SpdrAutoHedgeControl::make_probability>();
        {
            std::time_t tt = m.get<SpdrAutoHedgeControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}