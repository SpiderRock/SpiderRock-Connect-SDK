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

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _hedge_state__GUARD__
    #define _hedge_state__GUARD__
    DECL_STRONG_TYPE(hedge_state, spiderrock::protobuf::api::HedgeGroupState);
    #endif//_hedge_state__GUARD__

    #ifndef _hedge_text__GUARD__
    #define _hedge_text__GUARD__
    DECL_STRONG_TYPE(hedge_text, string);
    #endif//_hedge_text__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _is_delta_mixed__GUARD__
    #define _is_delta_mixed__GUARD__
    DECL_STRONG_TYPE(is_delta_mixed, spiderrock::protobuf::api::YesNo);
    #endif//_is_delta_mixed__GUARD__

    #ifndef _accumulator_error__GUARD__
    #define _accumulator_error__GUARD__
    DECL_STRONG_TYPE(accumulator_error, string);
    #endif//_accumulator_error__GUARD__

    #ifndef _grp_delta_bot__GUARD__
    #define _grp_delta_bot__GUARD__
    DECL_STRONG_TYPE(grp_delta_bot, double);
    #endif//_grp_delta_bot__GUARD__

    #ifndef _grp_delta_sld__GUARD__
    #define _grp_delta_sld__GUARD__
    DECL_STRONG_TYPE(grp_delta_sld, double);
    #endif//_grp_delta_sld__GUARD__

    #ifndef _grp_ddelta_bot__GUARD__
    #define _grp_ddelta_bot__GUARD__
    DECL_STRONG_TYPE(grp_ddelta_bot, double);
    #endif//_grp_ddelta_bot__GUARD__

    #ifndef _grp_ddelta_sld__GUARD__
    #define _grp_ddelta_sld__GUARD__
    DECL_STRONG_TYPE(grp_ddelta_sld, double);
    #endif//_grp_ddelta_sld__GUARD__

    #ifndef _last_grp_fill_dttm__GUARD__
    #define _last_grp_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_grp_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_grp_fill_dttm__GUARD__

    #ifndef _ctrl_delta_bot__GUARD__
    #define _ctrl_delta_bot__GUARD__
    DECL_STRONG_TYPE(ctrl_delta_bot, double);
    #endif//_ctrl_delta_bot__GUARD__

    #ifndef _ctrl_delta_sld__GUARD__
    #define _ctrl_delta_sld__GUARD__
    DECL_STRONG_TYPE(ctrl_delta_sld, double);
    #endif//_ctrl_delta_sld__GUARD__

    #ifndef _ctrl_ddelta_bot__GUARD__
    #define _ctrl_ddelta_bot__GUARD__
    DECL_STRONG_TYPE(ctrl_ddelta_bot, double);
    #endif//_ctrl_ddelta_bot__GUARD__

    #ifndef _ctrl_ddelta_sld__GUARD__
    #define _ctrl_ddelta_sld__GUARD__
    DECL_STRONG_TYPE(ctrl_ddelta_sld, double);
    #endif//_ctrl_ddelta_sld__GUARD__

    #ifndef _last_ctrl_fill_dttm__GUARD__
    #define _last_ctrl_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_ctrl_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_ctrl_fill_dttm__GUARD__

    #ifndef _abs_opt_cn__GUARD__
    #define _abs_opt_cn__GUARD__
    DECL_STRONG_TYPE(abs_opt_cn, int32);
    #endif//_abs_opt_cn__GUARD__

    #ifndef _net_delta__GUARD__
    #define _net_delta__GUARD__
    DECL_STRONG_TYPE(net_delta, double);
    #endif//_net_delta__GUARD__

    #ifndef _net_ddelta__GUARD__
    #define _net_ddelta__GUARD__
    DECL_STRONG_TYPE(net_ddelta, double);
    #endif//_net_ddelta__GUARD__

    #ifndef _open_hedge_time__GUARD__
    #define _open_hedge_time__GUARD__
    DECL_STRONG_TYPE(open_hedge_time, float);
    #endif//_open_hedge_time__GUARD__

    #ifndef _hedge_target_vol__GUARD__
    #define _hedge_target_vol__GUARD__
    DECL_STRONG_TYPE(hedge_target_vol, float);
    #endif//_hedge_target_vol__GUARD__

    #ifndef _expected_prc_range__GUARD__
    #define _expected_prc_range__GUARD__
    DECL_STRONG_TYPE(expected_prc_range, float);
    #endif//_expected_prc_range__GUARD__

    #ifndef _opn_delta_bot__GUARD__
    #define _opn_delta_bot__GUARD__
    DECL_STRONG_TYPE(opn_delta_bot, double);
    #endif//_opn_delta_bot__GUARD__

    #ifndef _opn_delta_sld__GUARD__
    #define _opn_delta_sld__GUARD__
    DECL_STRONG_TYPE(opn_delta_sld, double);
    #endif//_opn_delta_sld__GUARD__

    #ifndef _opn_ddelta_bot__GUARD__
    #define _opn_ddelta_bot__GUARD__
    DECL_STRONG_TYPE(opn_ddelta_bot, double);
    #endif//_opn_ddelta_bot__GUARD__

    #ifndef _opn_ddelta_sld__GUARD__
    #define _opn_ddelta_sld__GUARD__
    DECL_STRONG_TYPE(opn_ddelta_sld, double);
    #endif//_opn_ddelta_sld__GUARD__

    #ifndef _cls_delta_bot__GUARD__
    #define _cls_delta_bot__GUARD__
    DECL_STRONG_TYPE(cls_delta_bot, double);
    #endif//_cls_delta_bot__GUARD__

    #ifndef _cls_delta_sld__GUARD__
    #define _cls_delta_sld__GUARD__
    DECL_STRONG_TYPE(cls_delta_sld, double);
    #endif//_cls_delta_sld__GUARD__

    #ifndef _cls_ddelta_bot__GUARD__
    #define _cls_ddelta_bot__GUARD__
    DECL_STRONG_TYPE(cls_ddelta_bot, double);
    #endif//_cls_ddelta_bot__GUARD__

    #ifndef _cls_ddelta_sld__GUARD__
    #define _cls_ddelta_sld__GUARD__
    DECL_STRONG_TYPE(cls_ddelta_sld, double);
    #endif//_cls_ddelta_sld__GUARD__

    #ifndef _slippage_pn_l__GUARD__
    #define _slippage_pn_l__GUARD__
    DECL_STRONG_TYPE(slippage_pn_l, float);
    #endif//_slippage_pn_l__GUARD__

    #ifndef _slippage_unit_pn_l__GUARD__
    #define _slippage_unit_pn_l__GUARD__
    DECL_STRONG_TYPE(slippage_unit_pn_l, float);
    #endif//_slippage_unit_pn_l__GUARD__

    #ifndef _slippage_norm_pn_l__GUARD__
    #define _slippage_norm_pn_l__GUARD__
    DECL_STRONG_TYPE(slippage_norm_pn_l, float);
    #endif//_slippage_norm_pn_l__GUARD__

    #ifndef _min_ddelta_band__GUARD__
    #define _min_ddelta_band__GUARD__
    DECL_STRONG_TYPE(min_ddelta_band, float);
    #endif//_min_ddelta_band__GUARD__

    #ifndef _max_ddelta_band__GUARD__
    #define _max_ddelta_band__GUARD__
    DECL_STRONG_TYPE(max_ddelta_band, float);
    #endif//_max_ddelta_band__GUARD__

    #ifndef _b_parent_number__GUARD__
    #define _b_parent_number__GUARD__
    DECL_STRONG_TYPE(b_parent_number, int64);
    #endif//_b_parent_number__GUARD__

    #ifndef _b_active_size__GUARD__
    #define _b_active_size__GUARD__
    DECL_STRONG_TYPE(b_active_size, int32);
    #endif//_b_active_size__GUARD__

    #ifndef _b_brkr_status__GUARD__
    #define _b_brkr_status__GUARD__
    DECL_STRONG_TYPE(b_brkr_status, string);
    #endif//_b_brkr_status__GUARD__

    #ifndef _b_brkr_error__GUARD__
    #define _b_brkr_error__GUARD__
    DECL_STRONG_TYPE(b_brkr_error, string);
    #endif//_b_brkr_error__GUARD__

    #ifndef _s_parent_number__GUARD__
    #define _s_parent_number__GUARD__
    DECL_STRONG_TYPE(s_parent_number, int64);
    #endif//_s_parent_number__GUARD__

    #ifndef _s_active_size__GUARD__
    #define _s_active_size__GUARD__
    DECL_STRONG_TYPE(s_active_size, int32);
    #endif//_s_active_size__GUARD__

    #ifndef _s_brkr_status__GUARD__
    #define _s_brkr_status__GUARD__
    DECL_STRONG_TYPE(s_brkr_status, string);
    #endif//_s_brkr_status__GUARD__

    #ifndef _s_brkr_error__GUARD__
    #define _s_brkr_error__GUARD__
    DECL_STRONG_TYPE(s_brkr_error, string);
    #endif//_s_brkr_error__GUARD__

    #ifndef _dd_mult__double__GUARD__
    #define _dd_mult__double__GUARD__
    DECL_STRONG_TYPE(dd_mult__double, double);
    #endif//_dd_mult__double__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

    #ifndef _point_value__double__GUARD__
    #define _point_value__double__GUARD__
    DECL_STRONG_TYPE(point_value__double, double);
    #endif//_point_value__double__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _live_hedge_mark__GUARD__
    #define _live_hedge_mark__GUARD__
    DECL_STRONG_TYPE(live_hedge_mark, double);
    #endif//_live_hedge_mark__GUARD__

    #ifndef _updt_reason__GUARD__
    #define _updt_reason__GUARD__
    DECL_STRONG_TYPE(updt_reason, string);
    #endif//_updt_reason__GUARD__

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

    
    class SpdrAutoHedgeState_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAutoHedgeState_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAutoHedgeState_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const risk_group_id & value) { set_risk_group_id(value); }
        void set(const hedge_sec_key & value) { set_hedge_sec_key(value); }
        void set(const hedge_sec_type & value) { set_hedge_sec_type(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrAutoHedgeState_PKey() {}

        virtual ~SpdrAutoHedgeState_PKey() {
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
    

    class SpdrAutoHedgeState {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAutoHedgeState_PKey;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using hedge_state = spiderrock::protobuf::api::hedge_state;
        using hedge_text = spiderrock::protobuf::api::hedge_text;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using is_delta_mixed = spiderrock::protobuf::api::is_delta_mixed;
        using accumulator_error = spiderrock::protobuf::api::accumulator_error;
        using grp_delta_bot = spiderrock::protobuf::api::grp_delta_bot;
        using grp_delta_sld = spiderrock::protobuf::api::grp_delta_sld;
        using grp_ddelta_bot = spiderrock::protobuf::api::grp_ddelta_bot;
        using grp_ddelta_sld = spiderrock::protobuf::api::grp_ddelta_sld;
        using last_grp_fill_dttm = spiderrock::protobuf::api::last_grp_fill_dttm;
        using ctrl_delta_bot = spiderrock::protobuf::api::ctrl_delta_bot;
        using ctrl_delta_sld = spiderrock::protobuf::api::ctrl_delta_sld;
        using ctrl_ddelta_bot = spiderrock::protobuf::api::ctrl_ddelta_bot;
        using ctrl_ddelta_sld = spiderrock::protobuf::api::ctrl_ddelta_sld;
        using last_ctrl_fill_dttm = spiderrock::protobuf::api::last_ctrl_fill_dttm;
        using abs_opt_cn = spiderrock::protobuf::api::abs_opt_cn;
        using net_delta = spiderrock::protobuf::api::net_delta;
        using net_ddelta = spiderrock::protobuf::api::net_ddelta;
        using open_hedge_time = spiderrock::protobuf::api::open_hedge_time;
        using hedge_target_vol = spiderrock::protobuf::api::hedge_target_vol;
        using expected_prc_range = spiderrock::protobuf::api::expected_prc_range;
        using opn_delta_bot = spiderrock::protobuf::api::opn_delta_bot;
        using opn_delta_sld = spiderrock::protobuf::api::opn_delta_sld;
        using opn_ddelta_bot = spiderrock::protobuf::api::opn_ddelta_bot;
        using opn_ddelta_sld = spiderrock::protobuf::api::opn_ddelta_sld;
        using cls_delta_bot = spiderrock::protobuf::api::cls_delta_bot;
        using cls_delta_sld = spiderrock::protobuf::api::cls_delta_sld;
        using cls_ddelta_bot = spiderrock::protobuf::api::cls_ddelta_bot;
        using cls_ddelta_sld = spiderrock::protobuf::api::cls_ddelta_sld;
        using slippage_pn_l = spiderrock::protobuf::api::slippage_pn_l;
        using slippage_unit_pn_l = spiderrock::protobuf::api::slippage_unit_pn_l;
        using slippage_norm_pn_l = spiderrock::protobuf::api::slippage_norm_pn_l;
        using min_ddelta_band = spiderrock::protobuf::api::min_ddelta_band;
        using max_ddelta_band = spiderrock::protobuf::api::max_ddelta_band;
        using b_parent_number = spiderrock::protobuf::api::b_parent_number;
        using b_active_size = spiderrock::protobuf::api::b_active_size;
        using b_brkr_status = spiderrock::protobuf::api::b_brkr_status;
        using b_brkr_error = spiderrock::protobuf::api::b_brkr_error;
        using s_parent_number = spiderrock::protobuf::api::s_parent_number;
        using s_active_size = spiderrock::protobuf::api::s_active_size;
        using s_brkr_status = spiderrock::protobuf::api::s_brkr_status;
        using s_brkr_error = spiderrock::protobuf::api::s_brkr_error;
        using dd_mult = spiderrock::protobuf::api::dd_mult__double;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using point_value = spiderrock::protobuf::api::point_value__double;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using live_hedge_mark = spiderrock::protobuf::api::live_hedge_mark;
        using updt_reason = spiderrock::protobuf::api::updt_reason;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        grouping_code m_grouping_code{};
        ticker m_ticker{};
        security_desc m_security_desc{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        hedge_state m_hedge_state{};
        hedge_text m_hedge_text{};
        u_prc m_u_prc{};
        is_delta_mixed m_is_delta_mixed{};
        accumulator_error m_accumulator_error{};
        grp_delta_bot m_grp_delta_bot{};
        grp_delta_sld m_grp_delta_sld{};
        grp_ddelta_bot m_grp_ddelta_bot{};
        grp_ddelta_sld m_grp_ddelta_sld{};
        last_grp_fill_dttm m_last_grp_fill_dttm{};
        ctrl_delta_bot m_ctrl_delta_bot{};
        ctrl_delta_sld m_ctrl_delta_sld{};
        ctrl_ddelta_bot m_ctrl_ddelta_bot{};
        ctrl_ddelta_sld m_ctrl_ddelta_sld{};
        last_ctrl_fill_dttm m_last_ctrl_fill_dttm{};
        abs_opt_cn m_abs_opt_cn{};
        net_delta m_net_delta{};
        net_ddelta m_net_ddelta{};
        open_hedge_time m_open_hedge_time{};
        hedge_target_vol m_hedge_target_vol{};
        expected_prc_range m_expected_prc_range{};
        opn_delta_bot m_opn_delta_bot{};
        opn_delta_sld m_opn_delta_sld{};
        opn_ddelta_bot m_opn_ddelta_bot{};
        opn_ddelta_sld m_opn_ddelta_sld{};
        cls_delta_bot m_cls_delta_bot{};
        cls_delta_sld m_cls_delta_sld{};
        cls_ddelta_bot m_cls_ddelta_bot{};
        cls_ddelta_sld m_cls_ddelta_sld{};
        slippage_pn_l m_slippage_pn_l{};
        slippage_unit_pn_l m_slippage_unit_pn_l{};
        slippage_norm_pn_l m_slippage_norm_pn_l{};
        min_ddelta_band m_min_ddelta_band{};
        max_ddelta_band m_max_ddelta_band{};
        b_parent_number m_b_parent_number{};
        b_active_size m_b_active_size{};
        b_brkr_status m_b_brkr_status{};
        b_brkr_error m_b_brkr_error{};
        s_parent_number m_s_parent_number{};
        s_active_size m_s_active_size{};
        s_brkr_status m_s_brkr_status{};
        s_brkr_error m_s_brkr_error{};
        dd_mult m_dd_mult{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        live_hedge_mark m_live_hedge_mark{};
        updt_reason m_updt_reason{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        hedge_state get_hedge_state() const {
            return m_hedge_state;
        }		
        hedge_text get_hedge_text() const {
            return m_hedge_text;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        is_delta_mixed get_is_delta_mixed() const {
            return m_is_delta_mixed;
        }		
        accumulator_error get_accumulator_error() const {
            return m_accumulator_error;
        }		
        grp_delta_bot get_grp_delta_bot() const {
            return m_grp_delta_bot;
        }		
        grp_delta_sld get_grp_delta_sld() const {
            return m_grp_delta_sld;
        }		
        grp_ddelta_bot get_grp_ddelta_bot() const {
            return m_grp_ddelta_bot;
        }		
        grp_ddelta_sld get_grp_ddelta_sld() const {
            return m_grp_ddelta_sld;
        }		
        last_grp_fill_dttm get_last_grp_fill_dttm() const {
            return m_last_grp_fill_dttm;
        }		
        ctrl_delta_bot get_ctrl_delta_bot() const {
            return m_ctrl_delta_bot;
        }		
        ctrl_delta_sld get_ctrl_delta_sld() const {
            return m_ctrl_delta_sld;
        }		
        ctrl_ddelta_bot get_ctrl_ddelta_bot() const {
            return m_ctrl_ddelta_bot;
        }		
        ctrl_ddelta_sld get_ctrl_ddelta_sld() const {
            return m_ctrl_ddelta_sld;
        }		
        last_ctrl_fill_dttm get_last_ctrl_fill_dttm() const {
            return m_last_ctrl_fill_dttm;
        }		
        abs_opt_cn get_abs_opt_cn() const {
            return m_abs_opt_cn;
        }		
        net_delta get_net_delta() const {
            return m_net_delta;
        }		
        net_ddelta get_net_ddelta() const {
            return m_net_ddelta;
        }		
        open_hedge_time get_open_hedge_time() const {
            return m_open_hedge_time;
        }		
        hedge_target_vol get_hedge_target_vol() const {
            return m_hedge_target_vol;
        }		
        expected_prc_range get_expected_prc_range() const {
            return m_expected_prc_range;
        }		
        opn_delta_bot get_opn_delta_bot() const {
            return m_opn_delta_bot;
        }		
        opn_delta_sld get_opn_delta_sld() const {
            return m_opn_delta_sld;
        }		
        opn_ddelta_bot get_opn_ddelta_bot() const {
            return m_opn_ddelta_bot;
        }		
        opn_ddelta_sld get_opn_ddelta_sld() const {
            return m_opn_ddelta_sld;
        }		
        cls_delta_bot get_cls_delta_bot() const {
            return m_cls_delta_bot;
        }		
        cls_delta_sld get_cls_delta_sld() const {
            return m_cls_delta_sld;
        }		
        cls_ddelta_bot get_cls_ddelta_bot() const {
            return m_cls_ddelta_bot;
        }		
        cls_ddelta_sld get_cls_ddelta_sld() const {
            return m_cls_ddelta_sld;
        }		
        slippage_pn_l get_slippage_pn_l() const {
            return m_slippage_pn_l;
        }		
        slippage_unit_pn_l get_slippage_unit_pn_l() const {
            return m_slippage_unit_pn_l;
        }		
        slippage_norm_pn_l get_slippage_norm_pn_l() const {
            return m_slippage_norm_pn_l;
        }		
        min_ddelta_band get_min_ddelta_band() const {
            return m_min_ddelta_band;
        }		
        max_ddelta_band get_max_ddelta_band() const {
            return m_max_ddelta_band;
        }		
        b_parent_number get_b_parent_number() const {
            return m_b_parent_number;
        }		
        b_active_size get_b_active_size() const {
            return m_b_active_size;
        }		
        b_brkr_status get_b_brkr_status() const {
            return m_b_brkr_status;
        }		
        b_brkr_error get_b_brkr_error() const {
            return m_b_brkr_error;
        }		
        s_parent_number get_s_parent_number() const {
            return m_s_parent_number;
        }		
        s_active_size get_s_active_size() const {
            return m_s_active_size;
        }		
        s_brkr_status get_s_brkr_status() const {
            return m_s_brkr_status;
        }		
        s_brkr_error get_s_brkr_error() const {
            return m_s_brkr_error;
        }		
        dd_mult get_dd_mult() const {
            return m_dd_mult;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        live_hedge_mark get_live_hedge_mark() const {
            return m_live_hedge_mark;
        }		
        updt_reason get_updt_reason() const {
            return m_updt_reason;
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
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_hedge_state(const hedge_state& value)  {
            m_hedge_state = value;
        }
        void set_hedge_text(const hedge_text& value)  {
            m_hedge_text = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_is_delta_mixed(const is_delta_mixed& value)  {
            m_is_delta_mixed = value;
        }
        void set_accumulator_error(const accumulator_error& value)  {
            m_accumulator_error = value;
        }
        void set_grp_delta_bot(const grp_delta_bot& value)  {
            m_grp_delta_bot = value;
        }
        void set_grp_delta_sld(const grp_delta_sld& value)  {
            m_grp_delta_sld = value;
        }
        void set_grp_ddelta_bot(const grp_ddelta_bot& value)  {
            m_grp_ddelta_bot = value;
        }
        void set_grp_ddelta_sld(const grp_ddelta_sld& value)  {
            m_grp_ddelta_sld = value;
        }
        void set_last_grp_fill_dttm(const last_grp_fill_dttm& value)  {
            m_last_grp_fill_dttm = value;
        }
        void set_ctrl_delta_bot(const ctrl_delta_bot& value)  {
            m_ctrl_delta_bot = value;
        }
        void set_ctrl_delta_sld(const ctrl_delta_sld& value)  {
            m_ctrl_delta_sld = value;
        }
        void set_ctrl_ddelta_bot(const ctrl_ddelta_bot& value)  {
            m_ctrl_ddelta_bot = value;
        }
        void set_ctrl_ddelta_sld(const ctrl_ddelta_sld& value)  {
            m_ctrl_ddelta_sld = value;
        }
        void set_last_ctrl_fill_dttm(const last_ctrl_fill_dttm& value)  {
            m_last_ctrl_fill_dttm = value;
        }
        void set_abs_opt_cn(const abs_opt_cn& value)  {
            m_abs_opt_cn = value;
        }
        void set_net_delta(const net_delta& value)  {
            m_net_delta = value;
        }
        void set_net_ddelta(const net_ddelta& value)  {
            m_net_ddelta = value;
        }
        void set_open_hedge_time(const open_hedge_time& value)  {
            m_open_hedge_time = value;
        }
        void set_hedge_target_vol(const hedge_target_vol& value)  {
            m_hedge_target_vol = value;
        }
        void set_expected_prc_range(const expected_prc_range& value)  {
            m_expected_prc_range = value;
        }
        void set_opn_delta_bot(const opn_delta_bot& value)  {
            m_opn_delta_bot = value;
        }
        void set_opn_delta_sld(const opn_delta_sld& value)  {
            m_opn_delta_sld = value;
        }
        void set_opn_ddelta_bot(const opn_ddelta_bot& value)  {
            m_opn_ddelta_bot = value;
        }
        void set_opn_ddelta_sld(const opn_ddelta_sld& value)  {
            m_opn_ddelta_sld = value;
        }
        void set_cls_delta_bot(const cls_delta_bot& value)  {
            m_cls_delta_bot = value;
        }
        void set_cls_delta_sld(const cls_delta_sld& value)  {
            m_cls_delta_sld = value;
        }
        void set_cls_ddelta_bot(const cls_ddelta_bot& value)  {
            m_cls_ddelta_bot = value;
        }
        void set_cls_ddelta_sld(const cls_ddelta_sld& value)  {
            m_cls_ddelta_sld = value;
        }
        void set_slippage_pn_l(const slippage_pn_l& value)  {
            m_slippage_pn_l = value;
        }
        void set_slippage_unit_pn_l(const slippage_unit_pn_l& value)  {
            m_slippage_unit_pn_l = value;
        }
        void set_slippage_norm_pn_l(const slippage_norm_pn_l& value)  {
            m_slippage_norm_pn_l = value;
        }
        void set_min_ddelta_band(const min_ddelta_band& value)  {
            m_min_ddelta_band = value;
        }
        void set_max_ddelta_band(const max_ddelta_band& value)  {
            m_max_ddelta_band = value;
        }
        void set_b_parent_number(const b_parent_number& value)  {
            m_b_parent_number = value;
        }
        void set_b_active_size(const b_active_size& value)  {
            m_b_active_size = value;
        }
        void set_b_brkr_status(const b_brkr_status& value)  {
            m_b_brkr_status = value;
        }
        void set_b_brkr_error(const b_brkr_error& value)  {
            m_b_brkr_error = value;
        }
        void set_s_parent_number(const s_parent_number& value)  {
            m_s_parent_number = value;
        }
        void set_s_active_size(const s_active_size& value)  {
            m_s_active_size = value;
        }
        void set_s_brkr_status(const s_brkr_status& value)  {
            m_s_brkr_status = value;
        }
        void set_s_brkr_error(const s_brkr_error& value)  {
            m_s_brkr_error = value;
        }
        void set_dd_mult(const dd_mult& value)  {
            m_dd_mult = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_live_hedge_mark(const live_hedge_mark& value)  {
            m_live_hedge_mark = value;
        }
        void set_updt_reason(const updt_reason& value)  {
            m_updt_reason = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAutoHedgeState::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const hedge_state & value) {
            set_hedge_state(value);
        }
        void set(const hedge_text & value) {
            set_hedge_text(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const is_delta_mixed & value) {
            set_is_delta_mixed(value);
        }
        void set(const accumulator_error & value) {
            set_accumulator_error(value);
        }
        void set(const grp_delta_bot & value) {
            set_grp_delta_bot(value);
        }
        void set(const grp_delta_sld & value) {
            set_grp_delta_sld(value);
        }
        void set(const grp_ddelta_bot & value) {
            set_grp_ddelta_bot(value);
        }
        void set(const grp_ddelta_sld & value) {
            set_grp_ddelta_sld(value);
        }
        void set(const last_grp_fill_dttm & value) {
            set_last_grp_fill_dttm(value);
        }
        void set(const ctrl_delta_bot & value) {
            set_ctrl_delta_bot(value);
        }
        void set(const ctrl_delta_sld & value) {
            set_ctrl_delta_sld(value);
        }
        void set(const ctrl_ddelta_bot & value) {
            set_ctrl_ddelta_bot(value);
        }
        void set(const ctrl_ddelta_sld & value) {
            set_ctrl_ddelta_sld(value);
        }
        void set(const last_ctrl_fill_dttm & value) {
            set_last_ctrl_fill_dttm(value);
        }
        void set(const abs_opt_cn & value) {
            set_abs_opt_cn(value);
        }
        void set(const net_delta & value) {
            set_net_delta(value);
        }
        void set(const net_ddelta & value) {
            set_net_ddelta(value);
        }
        void set(const open_hedge_time & value) {
            set_open_hedge_time(value);
        }
        void set(const hedge_target_vol & value) {
            set_hedge_target_vol(value);
        }
        void set(const expected_prc_range & value) {
            set_expected_prc_range(value);
        }
        void set(const opn_delta_bot & value) {
            set_opn_delta_bot(value);
        }
        void set(const opn_delta_sld & value) {
            set_opn_delta_sld(value);
        }
        void set(const opn_ddelta_bot & value) {
            set_opn_ddelta_bot(value);
        }
        void set(const opn_ddelta_sld & value) {
            set_opn_ddelta_sld(value);
        }
        void set(const cls_delta_bot & value) {
            set_cls_delta_bot(value);
        }
        void set(const cls_delta_sld & value) {
            set_cls_delta_sld(value);
        }
        void set(const cls_ddelta_bot & value) {
            set_cls_ddelta_bot(value);
        }
        void set(const cls_ddelta_sld & value) {
            set_cls_ddelta_sld(value);
        }
        void set(const slippage_pn_l & value) {
            set_slippage_pn_l(value);
        }
        void set(const slippage_unit_pn_l & value) {
            set_slippage_unit_pn_l(value);
        }
        void set(const slippage_norm_pn_l & value) {
            set_slippage_norm_pn_l(value);
        }
        void set(const min_ddelta_band & value) {
            set_min_ddelta_band(value);
        }
        void set(const max_ddelta_band & value) {
            set_max_ddelta_band(value);
        }
        void set(const b_parent_number & value) {
            set_b_parent_number(value);
        }
        void set(const b_active_size & value) {
            set_b_active_size(value);
        }
        void set(const b_brkr_status & value) {
            set_b_brkr_status(value);
        }
        void set(const b_brkr_error & value) {
            set_b_brkr_error(value);
        }
        void set(const s_parent_number & value) {
            set_s_parent_number(value);
        }
        void set(const s_active_size & value) {
            set_s_active_size(value);
        }
        void set(const s_brkr_status & value) {
            set_s_brkr_status(value);
        }
        void set(const s_brkr_error & value) {
            set_s_brkr_error(value);
        }
        void set(const dd_mult & value) {
            set_dd_mult(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const live_hedge_mark & value) {
            set_live_hedge_mark(value);
        }
        void set(const updt_reason & value) {
            set_updt_reason(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrAutoHedgeState & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_grouping_code);
            set(value.m_ticker);
            set(value.m_security_desc);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_hedge_state);
            set(value.m_hedge_text);
            set(value.m_u_prc);
            set(value.m_is_delta_mixed);
            set(value.m_accumulator_error);
            set(value.m_grp_delta_bot);
            set(value.m_grp_delta_sld);
            set(value.m_grp_ddelta_bot);
            set(value.m_grp_ddelta_sld);
            set(value.m_last_grp_fill_dttm);
            set(value.m_ctrl_delta_bot);
            set(value.m_ctrl_delta_sld);
            set(value.m_ctrl_ddelta_bot);
            set(value.m_ctrl_ddelta_sld);
            set(value.m_last_ctrl_fill_dttm);
            set(value.m_abs_opt_cn);
            set(value.m_net_delta);
            set(value.m_net_ddelta);
            set(value.m_open_hedge_time);
            set(value.m_hedge_target_vol);
            set(value.m_expected_prc_range);
            set(value.m_opn_delta_bot);
            set(value.m_opn_delta_sld);
            set(value.m_opn_ddelta_bot);
            set(value.m_opn_ddelta_sld);
            set(value.m_cls_delta_bot);
            set(value.m_cls_delta_sld);
            set(value.m_cls_ddelta_bot);
            set(value.m_cls_ddelta_sld);
            set(value.m_slippage_pn_l);
            set(value.m_slippage_unit_pn_l);
            set(value.m_slippage_norm_pn_l);
            set(value.m_min_ddelta_band);
            set(value.m_max_ddelta_band);
            set(value.m_b_parent_number);
            set(value.m_b_active_size);
            set(value.m_b_brkr_status);
            set(value.m_b_brkr_error);
            set(value.m_s_parent_number);
            set(value.m_s_active_size);
            set(value.m_s_brkr_status);
            set(value.m_s_brkr_error);
            set(value.m_dd_mult);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_live_hedge_mark);
            set(value.m_updt_reason);
            set(value.m_timestamp);
        }

        SpdrAutoHedgeState() {
            m__meta.set_message_type("SpdrAutoHedgeState");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 5300, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 5300, length);
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
             *this = SpdrAutoHedgeState{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeHedgeText() const {
            return !(m_hedge_text.empty());
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeAccumulatorError() const {
            return !(m_accumulator_error.empty());
        }
        bool IncludeGrpDeltaBot() const {
            return !(m_grp_delta_bot == 0.0);
        }
        bool IncludeGrpDeltaSld() const {
            return !(m_grp_delta_sld == 0.0);
        }
        bool IncludeGrpDdeltaBot() const {
            return !(m_grp_ddelta_bot == 0.0);
        }
        bool IncludeGrpDdeltaSld() const {
            return !(m_grp_ddelta_sld == 0.0);
        }
        bool IncludeLastGrpFillDttm() const {
            return (m_last_grp_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeCtrlDeltaBot() const {
            return !(m_ctrl_delta_bot == 0.0);
        }
        bool IncludeCtrlDeltaSld() const {
            return !(m_ctrl_delta_sld == 0.0);
        }
        bool IncludeCtrlDdeltaBot() const {
            return !(m_ctrl_ddelta_bot == 0.0);
        }
        bool IncludeCtrlDdeltaSld() const {
            return !(m_ctrl_ddelta_sld == 0.0);
        }
        bool IncludeLastCtrlFillDttm() const {
            return (m_last_ctrl_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeAbsOptCn() const {
            return !(m_abs_opt_cn == 0);
        }
        bool IncludeNetDelta() const {
            return !(m_net_delta == 0.0);
        }
        bool IncludeNetDdelta() const {
            return !(m_net_ddelta == 0.0);
        }
        bool IncludeOpenHedgeTime() const {
            return !(m_open_hedge_time == 0.0);
        }
        bool IncludeHedgeTargetVol() const {
            return !(m_hedge_target_vol == 0.0);
        }
        bool IncludeExpectedPrcRange() const {
            return !(m_expected_prc_range == 0.0);
        }
        bool IncludeOpnDeltaBot() const {
            return !(m_opn_delta_bot == 0.0);
        }
        bool IncludeOpnDeltaSld() const {
            return !(m_opn_delta_sld == 0.0);
        }
        bool IncludeOpnDdeltaBot() const {
            return !(m_opn_ddelta_bot == 0.0);
        }
        bool IncludeOpnDdeltaSld() const {
            return !(m_opn_ddelta_sld == 0.0);
        }
        bool IncludeClsDeltaBot() const {
            return !(m_cls_delta_bot == 0.0);
        }
        bool IncludeClsDeltaSld() const {
            return !(m_cls_delta_sld == 0.0);
        }
        bool IncludeClsDdeltaBot() const {
            return !(m_cls_ddelta_bot == 0.0);
        }
        bool IncludeClsDdeltaSld() const {
            return !(m_cls_ddelta_sld == 0.0);
        }
        bool IncludeSlippagePnL() const {
            return !(m_slippage_pn_l == 0.0);
        }
        bool IncludeSlippageUnitPnL() const {
            return !(m_slippage_unit_pn_l == 0.0);
        }
        bool IncludeSlippageNormPnL() const {
            return !(m_slippage_norm_pn_l == 0.0);
        }
        bool IncludeMinDdeltaBand() const {
            return !(m_min_ddelta_band == 0.0);
        }
        bool IncludeMaxDdeltaBand() const {
            return !(m_max_ddelta_band == 0.0);
        }
        bool IncludeBParentNumber() const {
            return !(m_b_parent_number == 0);
        }
        bool IncludeBActiveSize() const {
            return !(m_b_active_size == 0);
        }
        bool IncludeBBrkrStatus() const {
            return !(m_b_brkr_status.empty());
        }
        bool IncludeBBrkrError() const {
            return !(m_b_brkr_error.empty());
        }
        bool IncludeSParentNumber() const {
            return !(m_s_parent_number == 0);
        }
        bool IncludeSActiveSize() const {
            return !(m_s_active_size == 0);
        }
        bool IncludeSBrkrStatus() const {
            return !(m_s_brkr_status.empty());
        }
        bool IncludeSBrkrError() const {
            return !(m_s_brkr_error.empty());
        }
        bool IncludeDdMult() const {
            return !(m_dd_mult == 0.0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeLiveHedgeMark() const {
            return !(m_live_hedge_mark == 0.0);
        }
        bool IncludeUpdtReason() const {
            return !(m_updt_reason.empty());
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
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_grouping_code);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(106, tickerKeyLayout_ticker);
            }
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_security_desc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(263,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeGroupState>(m_hedge_state)));
            if ( IncludeHedgeText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_hedge_text);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_u_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_delta_mixed)));
            if ( IncludeAccumulatorError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_accumulator_error);
            }
            if ( IncludeGrpDeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_grp_delta_bot);
            }
            if ( IncludeGrpDeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_grp_delta_sld);
            }
            if ( IncludeGrpDdeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_grp_ddelta_bot);
            }
            if ( IncludeGrpDdeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_grp_ddelta_sld);
            }
            if ( IncludeLastGrpFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(142, m_last_grp_fill_dttm);
            }
            if ( IncludeCtrlDeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_ctrl_delta_bot);
            }
            if ( IncludeCtrlDeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_ctrl_delta_sld);
            }
            if ( IncludeCtrlDdeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_ctrl_ddelta_bot);
            }
            if ( IncludeCtrlDdeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_ctrl_ddelta_sld);
            }
            if ( IncludeLastCtrlFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_last_ctrl_fill_dttm);
            }
            if ( IncludeAbsOptCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_abs_opt_cn);
            }
            if ( IncludeNetDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_net_delta);
            }
            if ( IncludeNetDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_net_ddelta);
            }
            if ( IncludeOpenHedgeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_open_hedge_time);
            }
            if ( IncludeHedgeTargetVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_hedge_target_vol);
            }
            if ( IncludeExpectedPrcRange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_expected_prc_range);
            }
            if ( IncludeOpnDeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_opn_delta_bot);
            }
            if ( IncludeOpnDeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_opn_delta_sld);
            }
            if ( IncludeOpnDdeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_opn_ddelta_bot);
            }
            if ( IncludeOpnDdeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(187,m_opn_ddelta_sld);
            }
            if ( IncludeClsDeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_cls_delta_bot);
            }
            if ( IncludeClsDeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_cls_delta_sld);
            }
            if ( IncludeClsDdeltaBot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_cls_ddelta_bot);
            }
            if ( IncludeClsDdeltaSld()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_cls_ddelta_sld);
            }
            if ( IncludeSlippagePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_slippage_pn_l);
            }
            if ( IncludeSlippageUnitPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_slippage_unit_pn_l);
            }
            if ( IncludeSlippageNormPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_slippage_norm_pn_l);
            }
            if ( IncludeMinDdeltaBand()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_min_ddelta_band);
            }
            if ( IncludeMaxDdeltaBand()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_max_ddelta_band);
            }
            if ( IncludeBParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(217,m_b_parent_number);
            }
            if ( IncludeBActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(220,m_b_active_size);
            }
            if ( IncludeBBrkrStatus()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_b_brkr_status);
            }
            if ( IncludeBBrkrError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_b_brkr_error);
            }
            if ( IncludeSParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(229,m_s_parent_number);
            }
            if ( IncludeSActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(232,m_s_active_size);
            }
            if ( IncludeSBrkrStatus()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(235,m_s_brkr_status);
            }
            if ( IncludeSBrkrError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(238,m_s_brkr_error);
            }
            if ( IncludeDdMult()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(241,m_dd_mult);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(244,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(250,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeLiveHedgeMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(256,m_live_hedge_mark);
            }
            if ( IncludeUpdtReason()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(259,m_updt_reason);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(262, m_timestamp);
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
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_grouping_code);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 106, tickerKeyLayout_ticker);
            }
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_security_desc));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,263,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeGroupState>(m_hedge_state)));
            if ( IncludeHedgeText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_hedge_text));
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_u_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_delta_mixed)));
            if ( IncludeAccumulatorError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_accumulator_error));
            }
            if ( IncludeGrpDeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_grp_delta_bot);
            }
            if ( IncludeGrpDeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_grp_delta_sld);
            }
            if ( IncludeGrpDdeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_grp_ddelta_bot);
            }
            if ( IncludeGrpDdeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_grp_ddelta_sld);
            }
            if ( IncludeLastGrpFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 142, m_last_grp_fill_dttm);
            }
            if ( IncludeCtrlDeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_ctrl_delta_bot);
            }
            if ( IncludeCtrlDeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_ctrl_delta_sld);
            }
            if ( IncludeCtrlDdeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_ctrl_ddelta_bot);
            }
            if ( IncludeCtrlDdeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_ctrl_ddelta_sld);
            }
            if ( IncludeLastCtrlFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_last_ctrl_fill_dttm);
            }
            if ( IncludeAbsOptCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_abs_opt_cn);
            }
            if ( IncludeNetDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_net_delta);
            }
            if ( IncludeNetDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_net_ddelta);
            }
            if ( IncludeOpenHedgeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_open_hedge_time);
            }
            if ( IncludeHedgeTargetVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_hedge_target_vol);
            }
            if ( IncludeExpectedPrcRange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_expected_prc_range);
            }
            if ( IncludeOpnDeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_opn_delta_bot);
            }
            if ( IncludeOpnDeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_opn_delta_sld);
            }
            if ( IncludeOpnDdeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_opn_ddelta_bot);
            }
            if ( IncludeOpnDdeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,187,m_opn_ddelta_sld);
            }
            if ( IncludeClsDeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_cls_delta_bot);
            }
            if ( IncludeClsDeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_cls_delta_sld);
            }
            if ( IncludeClsDdeltaBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_cls_ddelta_bot);
            }
            if ( IncludeClsDdeltaSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_cls_ddelta_sld);
            }
            if ( IncludeSlippagePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_slippage_pn_l);
            }
            if ( IncludeSlippageUnitPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_slippage_unit_pn_l);
            }
            if ( IncludeSlippageNormPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_slippage_norm_pn_l);
            }
            if ( IncludeMinDdeltaBand()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_min_ddelta_band);
            }
            if ( IncludeMaxDdeltaBand()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_max_ddelta_band);
            }
            if ( IncludeBParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,217,m_b_parent_number);
            }
            if ( IncludeBActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,220,m_b_active_size);
            }
            if ( IncludeBBrkrStatus()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_b_brkr_status));
            }
            if ( IncludeBBrkrError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_b_brkr_error));
            }
            if ( IncludeSParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,229,m_s_parent_number);
            }
            if ( IncludeSActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,232,m_s_active_size);
            }
            if ( IncludeSBrkrStatus()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,235,static_cast<string>(m_s_brkr_status));
            }
            if ( IncludeSBrkrError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,238,static_cast<string>(m_s_brkr_error));
            }
            if ( IncludeDdMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,241,m_dd_mult);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,244,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,250,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeLiveHedgeMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,256,m_live_hedge_mark);
            }
            if ( IncludeUpdtReason()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,259,static_cast<string>(m_updt_reason));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 262, m_timestamp);
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 263: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_state = static_cast<spiderrock::protobuf::api::HedgeGroupState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_hedge_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_delta_mixed = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accumulator_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_grp_delta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_grp_delta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_grp_ddelta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_grp_ddelta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_grp_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ctrl_delta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ctrl_delta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ctrl_ddelta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ctrl_ddelta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_ctrl_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_abs_opt_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_net_delta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_net_ddelta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_open_hedge_time = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_target_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_expected_prc_range = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_delta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_delta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_ddelta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_ddelta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_delta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_delta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_ddelta_bot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_ddelta_sld = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slippage_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slippage_unit_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_slippage_norm_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ddelta_band = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_ddelta_band = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_b_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_b_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_b_brkr_status = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_b_brkr_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_s_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_s_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_s_brkr_status = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_s_brkr_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_dd_mult = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 247: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 253: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_hedge_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_updt_reason = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 262: {
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

    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::_meta>() const { return SpdrAutoHedgeState::_meta{ m__meta}; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::pkey>() const { return SpdrAutoHedgeState::pkey{ m_pkey}; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::ticker>() const { return SpdrAutoHedgeState::ticker{ m_ticker}; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::security_desc>() const { return m_security_desc; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::hedge_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeGroupState>( m_hedge_state)); }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::hedge_text>() const { return m_hedge_text; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::u_prc>() const { return m_u_prc; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::is_delta_mixed>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_delta_mixed)); }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::accumulator_error>() const { return m_accumulator_error; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::grp_delta_bot>() const { return m_grp_delta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::grp_delta_sld>() const { return m_grp_delta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::grp_ddelta_bot>() const { return m_grp_ddelta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::grp_ddelta_sld>() const { return m_grp_ddelta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::last_grp_fill_dttm>() const { return m_last_grp_fill_dttm; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::ctrl_delta_bot>() const { return m_ctrl_delta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::ctrl_delta_sld>() const { return m_ctrl_delta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::ctrl_ddelta_bot>() const { return m_ctrl_ddelta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::ctrl_ddelta_sld>() const { return m_ctrl_ddelta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::last_ctrl_fill_dttm>() const { return m_last_ctrl_fill_dttm; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::abs_opt_cn>() const { return m_abs_opt_cn; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::net_delta>() const { return m_net_delta; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::net_ddelta>() const { return m_net_ddelta; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::open_hedge_time>() const { return m_open_hedge_time; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::hedge_target_vol>() const { return m_hedge_target_vol; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::expected_prc_range>() const { return m_expected_prc_range; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::opn_delta_bot>() const { return m_opn_delta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::opn_delta_sld>() const { return m_opn_delta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::opn_ddelta_bot>() const { return m_opn_ddelta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::opn_ddelta_sld>() const { return m_opn_ddelta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::cls_delta_bot>() const { return m_cls_delta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::cls_delta_sld>() const { return m_cls_delta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::cls_ddelta_bot>() const { return m_cls_ddelta_bot; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::cls_ddelta_sld>() const { return m_cls_ddelta_sld; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::slippage_pn_l>() const { return m_slippage_pn_l; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::slippage_unit_pn_l>() const { return m_slippage_unit_pn_l; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::slippage_norm_pn_l>() const { return m_slippage_norm_pn_l; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::min_ddelta_band>() const { return m_min_ddelta_band; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::max_ddelta_band>() const { return m_max_ddelta_band; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::b_parent_number>() const { return m_b_parent_number; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::b_active_size>() const { return m_b_active_size; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::b_brkr_status>() const { return m_b_brkr_status; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::b_brkr_error>() const { return m_b_brkr_error; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::s_parent_number>() const { return m_s_parent_number; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::s_active_size>() const { return m_s_active_size; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::s_brkr_status>() const { return m_s_brkr_status; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::s_brkr_error>() const { return m_s_brkr_error; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::dd_mult>() const { return m_dd_mult; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::point_value>() const { return m_point_value; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::live_hedge_mark>() const { return m_live_hedge_mark; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::updt_reason>() const { return m_updt_reason; }
    template<> inline const auto SpdrAutoHedgeState::get<SpdrAutoHedgeState::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAutoHedgeState_PKey::get<SpdrAutoHedgeState_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrAutoHedgeState_PKey::get<SpdrAutoHedgeState_PKey::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrAutoHedgeState_PKey::get<SpdrAutoHedgeState_PKey::hedge_sec_key>() const { return SpdrAutoHedgeState_PKey::hedge_sec_key{m_hedge_sec_key}; }
    template<> inline const auto SpdrAutoHedgeState_PKey::get<SpdrAutoHedgeState_PKey::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type));}
    template<> inline const auto SpdrAutoHedgeState_PKey::get<SpdrAutoHedgeState_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAutoHedgeState_PKey& m) {
        o << "\"accnt\":\"" << m.get<SpdrAutoHedgeState_PKey::accnt>() << "\"";
        o << ",\"risk_group_id\":" << m.get<SpdrAutoHedgeState_PKey::risk_group_id>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrAutoHedgeState_PKey::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrAutoHedgeState_PKey::hedge_sec_type>();
        o << ",\"client_firm\":\"" << m.get<SpdrAutoHedgeState_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAutoHedgeState& m) {
        o << "\"_meta\":{" << m.get<SpdrAutoHedgeState::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAutoHedgeState::pkey>() << "}";
        o << ",\"grouping_code\":" << m.get<SpdrAutoHedgeState::grouping_code>();
        o << ",\"ticker\":{" << m.get<SpdrAutoHedgeState::ticker>() << "}";
        o << ",\"security_desc\":\"" << m.get<SpdrAutoHedgeState::security_desc>() << "\"";
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrAutoHedgeState::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrAutoHedgeState::position_type>();
        o << ",\"hedge_state\":" << (int64_t)m.get<SpdrAutoHedgeState::hedge_state>();
        o << ",\"hedge_text\":\"" << m.get<SpdrAutoHedgeState::hedge_text>() << "\"";
        o << ",\"u_prc\":" << m.get<SpdrAutoHedgeState::u_prc>();
        o << ",\"is_delta_mixed\":" << (int64_t)m.get<SpdrAutoHedgeState::is_delta_mixed>();
        o << ",\"accumulator_error\":\"" << m.get<SpdrAutoHedgeState::accumulator_error>() << "\"";
        o << ",\"grp_delta_bot\":" << m.get<SpdrAutoHedgeState::grp_delta_bot>();
        o << ",\"grp_delta_sld\":" << m.get<SpdrAutoHedgeState::grp_delta_sld>();
        o << ",\"grp_ddelta_bot\":" << m.get<SpdrAutoHedgeState::grp_ddelta_bot>();
        o << ",\"grp_ddelta_sld\":" << m.get<SpdrAutoHedgeState::grp_ddelta_sld>();
        {
            std::time_t tt = m.get<SpdrAutoHedgeState::last_grp_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_grp_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"ctrl_delta_bot\":" << m.get<SpdrAutoHedgeState::ctrl_delta_bot>();
        o << ",\"ctrl_delta_sld\":" << m.get<SpdrAutoHedgeState::ctrl_delta_sld>();
        o << ",\"ctrl_ddelta_bot\":" << m.get<SpdrAutoHedgeState::ctrl_ddelta_bot>();
        o << ",\"ctrl_ddelta_sld\":" << m.get<SpdrAutoHedgeState::ctrl_ddelta_sld>();
        {
            std::time_t tt = m.get<SpdrAutoHedgeState::last_ctrl_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_ctrl_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"abs_opt_cn\":" << m.get<SpdrAutoHedgeState::abs_opt_cn>();
        o << ",\"net_delta\":" << m.get<SpdrAutoHedgeState::net_delta>();
        o << ",\"net_ddelta\":" << m.get<SpdrAutoHedgeState::net_ddelta>();
        o << ",\"open_hedge_time\":" << m.get<SpdrAutoHedgeState::open_hedge_time>();
        o << ",\"hedge_target_vol\":" << m.get<SpdrAutoHedgeState::hedge_target_vol>();
        o << ",\"expected_prc_range\":" << m.get<SpdrAutoHedgeState::expected_prc_range>();
        o << ",\"opn_delta_bot\":" << m.get<SpdrAutoHedgeState::opn_delta_bot>();
        o << ",\"opn_delta_sld\":" << m.get<SpdrAutoHedgeState::opn_delta_sld>();
        o << ",\"opn_ddelta_bot\":" << m.get<SpdrAutoHedgeState::opn_ddelta_bot>();
        o << ",\"opn_ddelta_sld\":" << m.get<SpdrAutoHedgeState::opn_ddelta_sld>();
        o << ",\"cls_delta_bot\":" << m.get<SpdrAutoHedgeState::cls_delta_bot>();
        o << ",\"cls_delta_sld\":" << m.get<SpdrAutoHedgeState::cls_delta_sld>();
        o << ",\"cls_ddelta_bot\":" << m.get<SpdrAutoHedgeState::cls_ddelta_bot>();
        o << ",\"cls_ddelta_sld\":" << m.get<SpdrAutoHedgeState::cls_ddelta_sld>();
        o << ",\"slippage_pn_l\":" << m.get<SpdrAutoHedgeState::slippage_pn_l>();
        o << ",\"slippage_unit_pn_l\":" << m.get<SpdrAutoHedgeState::slippage_unit_pn_l>();
        o << ",\"slippage_norm_pn_l\":" << m.get<SpdrAutoHedgeState::slippage_norm_pn_l>();
        o << ",\"min_ddelta_band\":" << m.get<SpdrAutoHedgeState::min_ddelta_band>();
        o << ",\"max_ddelta_band\":" << m.get<SpdrAutoHedgeState::max_ddelta_band>();
        o << ",\"b_parent_number\":" << m.get<SpdrAutoHedgeState::b_parent_number>();
        o << ",\"b_active_size\":" << m.get<SpdrAutoHedgeState::b_active_size>();
        o << ",\"b_brkr_status\":\"" << m.get<SpdrAutoHedgeState::b_brkr_status>() << "\"";
        o << ",\"b_brkr_error\":\"" << m.get<SpdrAutoHedgeState::b_brkr_error>() << "\"";
        o << ",\"s_parent_number\":" << m.get<SpdrAutoHedgeState::s_parent_number>();
        o << ",\"s_active_size\":" << m.get<SpdrAutoHedgeState::s_active_size>();
        o << ",\"s_brkr_status\":\"" << m.get<SpdrAutoHedgeState::s_brkr_status>() << "\"";
        o << ",\"s_brkr_error\":\"" << m.get<SpdrAutoHedgeState::s_brkr_error>() << "\"";
        o << ",\"dd_mult\":" << m.get<SpdrAutoHedgeState::dd_mult>();
        o << ",\"underliers_per_cn\":" << m.get<SpdrAutoHedgeState::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<SpdrAutoHedgeState::underlier_type>();
        o << ",\"point_value\":" << m.get<SpdrAutoHedgeState::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<SpdrAutoHedgeState::point_currency>();
        o << ",\"live_hedge_mark\":" << m.get<SpdrAutoHedgeState::live_hedge_mark>();
        o << ",\"updt_reason\":\"" << m.get<SpdrAutoHedgeState::updt_reason>() << "\"";
        {
            std::time_t tt = m.get<SpdrAutoHedgeState::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}