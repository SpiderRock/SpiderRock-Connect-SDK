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

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _is_disabled__GUARD__
    #define _is_disabled__GUARD__
    DECL_STRONG_TYPE(is_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_disabled__GUARD__

    #ifndef _can_include_flex__GUARD__
    #define _can_include_flex__GUARD__
    DECL_STRONG_TYPE(can_include_flex, spiderrock::protobuf::api::YesNo);
    #endif//_can_include_flex__GUARD__

    #ifndef _can_include_stock__GUARD__
    #define _can_include_stock__GUARD__
    DECL_STRONG_TYPE(can_include_stock, spiderrock::protobuf::api::YesNo);
    #endif//_can_include_stock__GUARD__

    #ifndef _cp_flag__GUARD__
    #define _cp_flag__GUARD__
    DECL_STRONG_TYPE(cp_flag, spiderrock::protobuf::api::CallPut);
    #endif//_cp_flag__GUARD__

    #ifndef _min_years__GUARD__
    #define _min_years__GUARD__
    DECL_STRONG_TYPE(min_years, float);
    #endif//_min_years__GUARD__

    #ifndef _max_years__float__GUARD__
    #define _max_years__float__GUARD__
    DECL_STRONG_TYPE(max_years__float, float);
    #endif//_max_years__float__GUARD__

    #ifndef _min_expiry__GUARD__
    #define _min_expiry__GUARD__
    DECL_STRONG_TYPE(min_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_min_expiry__GUARD__

    #ifndef _max_expiry__GUARD__
    #define _max_expiry__GUARD__
    DECL_STRONG_TYPE(max_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_expiry__GUARD__

    #ifndef _min_xdelta__GUARD__
    #define _min_xdelta__GUARD__
    DECL_STRONG_TYPE(min_xdelta, float);
    #endif//_min_xdelta__GUARD__

    #ifndef _max_xdelta__GUARD__
    #define _max_xdelta__GUARD__
    DECL_STRONG_TYPE(max_xdelta, float);
    #endif//_max_xdelta__GUARD__

    #ifndef _min_strike__GUARD__
    #define _min_strike__GUARD__
    DECL_STRONG_TYPE(min_strike, double);
    #endif//_min_strike__GUARD__

    #ifndef _max_strike__GUARD__
    #define _max_strike__GUARD__
    DECL_STRONG_TYPE(max_strike, double);
    #endif//_max_strike__GUARD__

    #ifndef _min_surf_edge_prem__GUARD__
    #define _min_surf_edge_prem__GUARD__
    DECL_STRONG_TYPE(min_surf_edge_prem, float);
    #endif//_min_surf_edge_prem__GUARD__

    #ifndef _min_surf_edge_vol__GUARD__
    #define _min_surf_edge_vol__GUARD__
    DECL_STRONG_TYPE(min_surf_edge_vol, float);
    #endif//_min_surf_edge_vol__GUARD__

    #ifndef _inc_fees_in_resp__GUARD__
    #define _inc_fees_in_resp__GUARD__
    DECL_STRONG_TYPE(inc_fees_in_resp, spiderrock::protobuf::api::YesNo);
    #endif//_inc_fees_in_resp__GUARD__

    #ifndef _round_rule__GUARD__
    #define _round_rule__GUARD__
    DECL_STRONG_TYPE(round_rule, spiderrock::protobuf::api::RoundRule);
    #endif//_round_rule__GUARD__

    #ifndef _max_response_size__GUARD__
    #define _max_response_size__GUARD__
    DECL_STRONG_TYPE(max_response_size, int32);
    #endif//_max_response_size__GUARD__

    #ifndef _max_response_vega__GUARD__
    #define _max_response_vega__GUARD__
    DECL_STRONG_TYPE(max_response_vega, float);
    #endif//_max_response_vega__GUARD__

    #ifndef _total_response_vega__GUARD__
    #define _total_response_vega__GUARD__
    DECL_STRONG_TYPE(total_response_vega, float);
    #endif//_total_response_vega__GUARD__

    #ifndef _total_response_wt_vega__GUARD__
    #define _total_response_wt_vega__GUARD__
    DECL_STRONG_TYPE(total_response_wt_vega, float);
    #endif//_total_response_wt_vega__GUARD__

    #ifndef _auto_hedge__GUARD__
    #define _auto_hedge__GUARD__
    DECL_STRONG_TYPE(auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_auto_hedge__GUARD__

    #ifndef _hedge_instrument__GUARD__
    #define _hedge_instrument__GUARD__
    DECL_STRONG_TYPE(hedge_instrument, spiderrock::protobuf::api::HedgeInst);
    #endif//_hedge_instrument__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_beta_ratio__GUARD__
    #define _hedge_beta_ratio__GUARD__
    DECL_STRONG_TYPE(hedge_beta_ratio, float);
    #endif//_hedge_beta_ratio__GUARD__

    #ifndef _hedge_scope__GUARD__
    #define _hedge_scope__GUARD__
    DECL_STRONG_TYPE(hedge_scope, spiderrock::protobuf::api::HedgeScope);
    #endif//_hedge_scope__GUARD__

    #ifndef _hedge_session__GUARD__
    #define _hedge_session__GUARD__
    DECL_STRONG_TYPE(hedge_session, spiderrock::protobuf::api::MarketSession);
    #endif//_hedge_session__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _num_notices__GUARD__
    #define _num_notices__GUARD__
    DECL_STRONG_TYPE(num_notices, int64);
    #endif//_num_notices__GUARD__

    #ifndef _num_notices_pass__GUARD__
    #define _num_notices_pass__GUARD__
    DECL_STRONG_TYPE(num_notices_pass, int64);
    #endif//_num_notices_pass__GUARD__

    #ifndef _num_responses__int64__GUARD__
    #define _num_responses__int64__GUARD__
    DECL_STRONG_TYPE(num_responses__int64, int64);
    #endif//_num_responses__int64__GUARD__

    #ifndef _qty_traded__GUARD__
    #define _qty_traded__GUARD__
    DECL_STRONG_TYPE(qty_traded, int32);
    #endif//_qty_traded__GUARD__

    #ifndef _vega_traded__GUARD__
    #define _vega_traded__GUARD__
    DECL_STRONG_TYPE(vega_traded, double);
    #endif//_vega_traded__GUARD__

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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    #ifndef _expiry_group__GUARD__
    #define _expiry_group__GUARD__
    DECL_STRONG_TYPE(expiry_group, int32);
    #endif//_expiry_group__GUARD__

    
    class ResponderMarkupVegaDir_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using resp_side = spiderrock::protobuf::api::resp_side;
        using expiry_group = spiderrock::protobuf::api::expiry_group;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        ticker m_ticker{};
        resp_side m_resp_side{};
        expiry_group m_expiry_group{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		ticker get_ticker() const {
            return m_ticker;
        }
        resp_side get_resp_side() const {
            return m_resp_side;
        }
        expiry_group get_expiry_group() const {
            return m_expiry_group;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        void set_expiry_group(const expiry_group& value)  {
            m_expiry_group = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const ticker & value) { set_ticker(value); }
        void set(const resp_side & value) { set_resp_side(value); }
        void set(const expiry_group & value) { set_expiry_group(value); }


        ResponderMarkupVegaDir_PKey() {}

        virtual ~ResponderMarkupVegaDir_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeExpiryGroup() const {
            return !(m_expiry_group == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(12,tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeExpiryGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(14,m_expiry_group);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 12, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeExpiryGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,14,m_expiry_group);
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
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_expiry_group = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ResponderMarkupVegaDir {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ResponderMarkupVegaDir_PKey;
        using user_name = spiderrock::protobuf::api::user_name;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using can_include_flex = spiderrock::protobuf::api::can_include_flex;
        using can_include_stock = spiderrock::protobuf::api::can_include_stock;
        using cp_flag = spiderrock::protobuf::api::cp_flag;
        using min_years = spiderrock::protobuf::api::min_years;
        using max_years = spiderrock::protobuf::api::max_years__float;
        using min_expiry = spiderrock::protobuf::api::min_expiry;
        using max_expiry = spiderrock::protobuf::api::max_expiry;
        using min_xdelta = spiderrock::protobuf::api::min_xdelta;
        using max_xdelta = spiderrock::protobuf::api::max_xdelta;
        using min_strike = spiderrock::protobuf::api::min_strike;
        using max_strike = spiderrock::protobuf::api::max_strike;
        using min_surf_edge_prem = spiderrock::protobuf::api::min_surf_edge_prem;
        using min_surf_edge_vol = spiderrock::protobuf::api::min_surf_edge_vol;
        using inc_fees_in_resp = spiderrock::protobuf::api::inc_fees_in_resp;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using max_response_size = spiderrock::protobuf::api::max_response_size;
        using max_response_vega = spiderrock::protobuf::api::max_response_vega;
        using total_response_vega = spiderrock::protobuf::api::total_response_vega;
        using total_response_wt_vega = spiderrock::protobuf::api::total_response_wt_vega;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using hedge_session = spiderrock::protobuf::api::hedge_session;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using num_notices = spiderrock::protobuf::api::num_notices;
        using num_notices_pass = spiderrock::protobuf::api::num_notices_pass;
        using num_responses = spiderrock::protobuf::api::num_responses__int64;
        using qty_traded = spiderrock::protobuf::api::qty_traded;
        using vega_traded = spiderrock::protobuf::api::vega_traded;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        is_disabled m_is_disabled{};
        can_include_flex m_can_include_flex{};
        can_include_stock m_can_include_stock{};
        cp_flag m_cp_flag{};
        min_years m_min_years{};
        max_years m_max_years{};
        min_expiry m_min_expiry{};
        max_expiry m_max_expiry{};
        min_xdelta m_min_xdelta{};
        max_xdelta m_max_xdelta{};
        min_strike m_min_strike{};
        max_strike m_max_strike{};
        min_surf_edge_prem m_min_surf_edge_prem{};
        min_surf_edge_vol m_min_surf_edge_vol{};
        inc_fees_in_resp m_inc_fees_in_resp{};
        round_rule m_round_rule{};
        max_response_size m_max_response_size{};
        max_response_vega m_max_response_vega{};
        total_response_vega m_total_response_vega{};
        total_response_wt_vega m_total_response_wt_vega{};
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        hedge_session m_hedge_session{};
        risk_group_id m_risk_group_id{};
        num_notices m_num_notices{};
        num_notices_pass m_num_notices_pass{};
        num_responses m_num_responses{};
        qty_traded m_qty_traded{};
        vega_traded m_vega_traded{};
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
        user_name get_user_name() const {
            return m_user_name;
        }		
        is_disabled get_is_disabled() const {
            return m_is_disabled;
        }		
        can_include_flex get_can_include_flex() const {
            return m_can_include_flex;
        }		
        can_include_stock get_can_include_stock() const {
            return m_can_include_stock;
        }		
        cp_flag get_cp_flag() const {
            return m_cp_flag;
        }		
        min_years get_min_years() const {
            return m_min_years;
        }		
        max_years get_max_years() const {
            return m_max_years;
        }		
        min_expiry get_min_expiry() const {
            return m_min_expiry;
        }		
        max_expiry get_max_expiry() const {
            return m_max_expiry;
        }		
        min_xdelta get_min_xdelta() const {
            return m_min_xdelta;
        }		
        max_xdelta get_max_xdelta() const {
            return m_max_xdelta;
        }		
        min_strike get_min_strike() const {
            return m_min_strike;
        }		
        max_strike get_max_strike() const {
            return m_max_strike;
        }		
        min_surf_edge_prem get_min_surf_edge_prem() const {
            return m_min_surf_edge_prem;
        }		
        min_surf_edge_vol get_min_surf_edge_vol() const {
            return m_min_surf_edge_vol;
        }		
        inc_fees_in_resp get_inc_fees_in_resp() const {
            return m_inc_fees_in_resp;
        }		
        round_rule get_round_rule() const {
            return m_round_rule;
        }		
        max_response_size get_max_response_size() const {
            return m_max_response_size;
        }		
        max_response_vega get_max_response_vega() const {
            return m_max_response_vega;
        }		
        total_response_vega get_total_response_vega() const {
            return m_total_response_vega;
        }		
        total_response_wt_vega get_total_response_wt_vega() const {
            return m_total_response_wt_vega;
        }		
        auto_hedge get_auto_hedge() const {
            return m_auto_hedge;
        }		
        hedge_instrument get_hedge_instrument() const {
            return m_hedge_instrument;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_beta_ratio get_hedge_beta_ratio() const {
            return m_hedge_beta_ratio;
        }		
        hedge_scope get_hedge_scope() const {
            return m_hedge_scope;
        }		
        hedge_session get_hedge_session() const {
            return m_hedge_session;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        num_notices get_num_notices() const {
            return m_num_notices;
        }		
        num_notices_pass get_num_notices_pass() const {
            return m_num_notices_pass;
        }		
        num_responses get_num_responses() const {
            return m_num_responses;
        }		
        qty_traded get_qty_traded() const {
            return m_qty_traded;
        }		
        vega_traded get_vega_traded() const {
            return m_vega_traded;
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
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_is_disabled(const is_disabled& value)  {
            m_is_disabled = value;
        }
        void set_can_include_flex(const can_include_flex& value)  {
            m_can_include_flex = value;
        }
        void set_can_include_stock(const can_include_stock& value)  {
            m_can_include_stock = value;
        }
        void set_cp_flag(const cp_flag& value)  {
            m_cp_flag = value;
        }
        void set_min_years(const min_years& value)  {
            m_min_years = value;
        }
        void set_max_years(const max_years& value)  {
            m_max_years = value;
        }
        void set_min_expiry(const min_expiry& value)  {
            m_min_expiry = value;
        }
        void set_max_expiry(const max_expiry& value)  {
            m_max_expiry = value;
        }
        void set_min_xdelta(const min_xdelta& value)  {
            m_min_xdelta = value;
        }
        void set_max_xdelta(const max_xdelta& value)  {
            m_max_xdelta = value;
        }
        void set_min_strike(const min_strike& value)  {
            m_min_strike = value;
        }
        void set_max_strike(const max_strike& value)  {
            m_max_strike = value;
        }
        void set_min_surf_edge_prem(const min_surf_edge_prem& value)  {
            m_min_surf_edge_prem = value;
        }
        void set_min_surf_edge_vol(const min_surf_edge_vol& value)  {
            m_min_surf_edge_vol = value;
        }
        void set_inc_fees_in_resp(const inc_fees_in_resp& value)  {
            m_inc_fees_in_resp = value;
        }
        void set_round_rule(const round_rule& value)  {
            m_round_rule = value;
        }
        void set_max_response_size(const max_response_size& value)  {
            m_max_response_size = value;
        }
        void set_max_response_vega(const max_response_vega& value)  {
            m_max_response_vega = value;
        }
        void set_total_response_vega(const total_response_vega& value)  {
            m_total_response_vega = value;
        }
        void set_total_response_wt_vega(const total_response_wt_vega& value)  {
            m_total_response_wt_vega = value;
        }
        void set_auto_hedge(const auto_hedge& value)  {
            m_auto_hedge = value;
        }
        void set_hedge_instrument(const hedge_instrument& value)  {
            m_hedge_instrument = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_beta_ratio(const hedge_beta_ratio& value)  {
            m_hedge_beta_ratio = value;
        }
        void set_hedge_scope(const hedge_scope& value)  {
            m_hedge_scope = value;
        }
        void set_hedge_session(const hedge_session& value)  {
            m_hedge_session = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_num_notices(const num_notices& value)  {
            m_num_notices = value;
        }
        void set_num_notices_pass(const num_notices_pass& value)  {
            m_num_notices_pass = value;
        }
        void set_num_responses(const num_responses& value)  {
            m_num_responses = value;
        }
        void set_qty_traded(const qty_traded& value)  {
            m_qty_traded = value;
        }
        void set_vega_traded(const vega_traded& value)  {
            m_vega_traded = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const is_disabled & value) {
            set_is_disabled(value);
        }
        void set(const can_include_flex & value) {
            set_can_include_flex(value);
        }
        void set(const can_include_stock & value) {
            set_can_include_stock(value);
        }
        void set(const cp_flag & value) {
            set_cp_flag(value);
        }
        void set(const min_years & value) {
            set_min_years(value);
        }
        void set(const max_years & value) {
            set_max_years(value);
        }
        void set(const min_expiry & value) {
            set_min_expiry(value);
        }
        void set(const max_expiry & value) {
            set_max_expiry(value);
        }
        void set(const min_xdelta & value) {
            set_min_xdelta(value);
        }
        void set(const max_xdelta & value) {
            set_max_xdelta(value);
        }
        void set(const min_strike & value) {
            set_min_strike(value);
        }
        void set(const max_strike & value) {
            set_max_strike(value);
        }
        void set(const min_surf_edge_prem & value) {
            set_min_surf_edge_prem(value);
        }
        void set(const min_surf_edge_vol & value) {
            set_min_surf_edge_vol(value);
        }
        void set(const inc_fees_in_resp & value) {
            set_inc_fees_in_resp(value);
        }
        void set(const round_rule & value) {
            set_round_rule(value);
        }
        void set(const max_response_size & value) {
            set_max_response_size(value);
        }
        void set(const max_response_vega & value) {
            set_max_response_vega(value);
        }
        void set(const total_response_vega & value) {
            set_total_response_vega(value);
        }
        void set(const total_response_wt_vega & value) {
            set_total_response_wt_vega(value);
        }
        void set(const auto_hedge & value) {
            set_auto_hedge(value);
        }
        void set(const hedge_instrument & value) {
            set_hedge_instrument(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_beta_ratio & value) {
            set_hedge_beta_ratio(value);
        }
        void set(const hedge_scope & value) {
            set_hedge_scope(value);
        }
        void set(const hedge_session & value) {
            set_hedge_session(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const num_notices & value) {
            set_num_notices(value);
        }
        void set(const num_notices_pass & value) {
            set_num_notices_pass(value);
        }
        void set(const num_responses & value) {
            set_num_responses(value);
        }
        void set(const qty_traded & value) {
            set_qty_traded(value);
        }
        void set(const vega_traded & value) {
            set_vega_traded(value);
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

        void set(const ResponderMarkupVegaDir & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_user_name);
            set(value.m_is_disabled);
            set(value.m_can_include_flex);
            set(value.m_can_include_stock);
            set(value.m_cp_flag);
            set(value.m_min_years);
            set(value.m_max_years);
            set(value.m_min_expiry);
            set(value.m_max_expiry);
            set(value.m_min_xdelta);
            set(value.m_max_xdelta);
            set(value.m_min_strike);
            set(value.m_max_strike);
            set(value.m_min_surf_edge_prem);
            set(value.m_min_surf_edge_vol);
            set(value.m_inc_fees_in_resp);
            set(value.m_round_rule);
            set(value.m_max_response_size);
            set(value.m_max_response_vega);
            set(value.m_total_response_vega);
            set(value.m_total_response_wt_vega);
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_hedge_session);
            set(value.m_risk_group_id);
            set(value.m_num_notices);
            set(value.m_num_notices_pass);
            set(value.m_num_responses);
            set(value.m_qty_traded);
            set(value.m_vega_traded);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        ResponderMarkupVegaDir() {
            m__meta.set_message_type("ResponderMarkupVegaDir");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2500, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2500, length);
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
             *this = ResponderMarkupVegaDir{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeMinYears() const {
            return !(m_min_years == 0.0);
        }
        bool IncludeMaxYears() const {
            return !(m_max_years == 0.0);
        }
        bool IncludeMinExpiry() const {
            return (m_min_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMaxExpiry() const {
            return (m_max_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMinXdelta() const {
            return !(m_min_xdelta == 0.0);
        }
        bool IncludeMaxXdelta() const {
            return !(m_max_xdelta == 0.0);
        }
        bool IncludeMinStrike() const {
            return !(m_min_strike == 0.0);
        }
        bool IncludeMaxStrike() const {
            return !(m_max_strike == 0.0);
        }
        bool IncludeMinSurfEdgePrem() const {
            return !(m_min_surf_edge_prem == 0.0);
        }
        bool IncludeMinSurfEdgeVol() const {
            return !(m_min_surf_edge_vol == 0.0);
        }
        bool IncludeMaxResponseSize() const {
            return !(m_max_response_size == 0);
        }
        bool IncludeMaxResponseVega() const {
            return !(m_max_response_vega == 0.0);
        }
        bool IncludeTotalResponseVega() const {
            return !(m_total_response_vega == 0.0);
        }
        bool IncludeTotalResponseWtVega() const {
            return !(m_total_response_wt_vega == 0.0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeBetaRatio() const {
            return !(m_hedge_beta_ratio == 0.0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeNumNotices() const {
            return !(m_num_notices == 0);
        }
        bool IncludeNumNoticesPass() const {
            return !(m_num_notices_pass == 0);
        }
        bool IncludeNumResponses() const {
            return !(m_num_responses == 0);
        }
        bool IncludeQtyTraded() const {
            return !(m_qty_traded == 0);
        }
        bool IncludeVegaTraded() const {
            return !(m_vega_traded == 0.0);
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
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_min_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(107, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(108, m_max_expiry);
            }
            if ( IncludeMinXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_max_xdelta);
            }
            if ( IncludeMinStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(111,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_max_strike);
            }
            if ( IncludeMinSurfEdgePrem()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_min_surf_edge_prem);
            }
            if ( IncludeMinSurfEdgeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_min_surf_edge_vol);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeMaxResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(117,m_max_response_size);
            }
            if ( IncludeMaxResponseVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_max_response_vega);
            }
            if ( IncludeTotalResponseVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(119,m_total_response_vega);
            }
            if ( IncludeTotalResponseWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_total_response_wt_vega);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(122,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(123, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(125,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_risk_group_id);
            }
            if ( IncludeNumNotices()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(129,m_num_notices);
            }
            if ( IncludeNumNoticesPass()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_num_notices_pass);
            }
            if ( IncludeNumResponses()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(131,m_num_responses);
            }
            if ( IncludeQtyTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(132,m_qty_traded);
            }
            if ( IncludeVegaTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_vega_traded);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(134,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(135,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_timestamp);
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
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_min_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 107, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 108, m_max_expiry);
            }
            if ( IncludeMinXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_max_xdelta);
            }
            if ( IncludeMinStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,111,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_max_strike);
            }
            if ( IncludeMinSurfEdgePrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_min_surf_edge_prem);
            }
            if ( IncludeMinSurfEdgeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_min_surf_edge_vol);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeMaxResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,117,m_max_response_size);
            }
            if ( IncludeMaxResponseVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_max_response_vega);
            }
            if ( IncludeTotalResponseVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,119,m_total_response_vega);
            }
            if ( IncludeTotalResponseWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_total_response_wt_vega);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,122,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 123, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,125,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_risk_group_id);
            }
            if ( IncludeNumNotices()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,129,m_num_notices);
            }
            if ( IncludeNumNoticesPass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_num_notices_pass);
            }
            if ( IncludeNumResponses()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,131,m_num_responses);
            }
            if ( IncludeQtyTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,132,m_qty_traded);
            }
            if ( IncludeVegaTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_vega_traded);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,134,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,135,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_timestamp);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_include_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_include_stock = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cp_flag = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_min_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_edge_prem = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_edge_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_fees_in_resp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 116: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_round_rule = static_cast<spiderrock::protobuf::api::RoundRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_response_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_response_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_response_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_response_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 122: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 125: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 126: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notices = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notices_pass = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responses = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_qty_traded = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_vega_traded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 135: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
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

    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::_meta>() const { return ResponderMarkupVegaDir::_meta{ m__meta}; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::pkey>() const { return ResponderMarkupVegaDir::pkey{ m_pkey}; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::user_name>() const { return m_user_name; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_include_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_flex)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_include_stock>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_stock)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::cp_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_cp_flag)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_years>() const { return m_min_years; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_years>() const { return m_max_years; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_expiry>() const { return m_min_expiry; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_expiry>() const { return m_max_expiry; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_xdelta>() const { return m_min_xdelta; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_xdelta>() const { return m_max_xdelta; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_strike>() const { return m_min_strike; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_strike>() const { return m_max_strike; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_surf_edge_prem>() const { return m_min_surf_edge_prem; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_surf_edge_vol>() const { return m_min_surf_edge_vol; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::inc_fees_in_resp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_fees_in_resp)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_response_size>() const { return m_max_response_size; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::max_response_vega>() const { return m_max_response_vega; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::total_response_vega>() const { return m_total_response_vega; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::total_response_wt_vega>() const { return m_total_response_wt_vega; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_sec_key>() const { return ResponderMarkupVegaDir::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::hedge_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_hedge_session)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notices>() const { return m_num_notices; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notices_pass>() const { return m_num_notices_pass; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responses>() const { return m_num_responses; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::qty_traded>() const { return m_qty_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::vega_traded>() const { return m_vega_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::modified_by>() const { return m_modified_by; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::timestamp>() const { return m_timestamp; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::ticker>() const { return ResponderMarkupVegaDir_PKey::ticker{m_ticker}; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::expiry_group>() const { return m_expiry_group; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir_PKey& m) {
        o << "\"accnt\":\"" << m.get<ResponderMarkupVegaDir_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ResponderMarkupVegaDir_PKey::client_firm>() << "\"";
        o << ",\"ticker\":{" << m.get<ResponderMarkupVegaDir_PKey::ticker>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<ResponderMarkupVegaDir_PKey::resp_side>();
        o << ",\"expiry_group\":" << m.get<ResponderMarkupVegaDir_PKey::expiry_group>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir& m) {
        o << "\"_meta\":{" << m.get<ResponderMarkupVegaDir::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ResponderMarkupVegaDir::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<ResponderMarkupVegaDir::user_name>() << "\"";
        o << ",\"is_disabled\":" << (int64_t)m.get<ResponderMarkupVegaDir::is_disabled>();
        o << ",\"can_include_flex\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_include_flex>();
        o << ",\"can_include_stock\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_include_stock>();
        o << ",\"cp_flag\":" << (int64_t)m.get<ResponderMarkupVegaDir::cp_flag>();
        o << ",\"min_years\":" << m.get<ResponderMarkupVegaDir::min_years>();
        o << ",\"max_years\":" << m.get<ResponderMarkupVegaDir::max_years>();
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::min_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"min_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::max_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"min_xdelta\":" << m.get<ResponderMarkupVegaDir::min_xdelta>();
        o << ",\"max_xdelta\":" << m.get<ResponderMarkupVegaDir::max_xdelta>();
        o << ",\"min_strike\":" << m.get<ResponderMarkupVegaDir::min_strike>();
        o << ",\"max_strike\":" << m.get<ResponderMarkupVegaDir::max_strike>();
        o << ",\"min_surf_edge_prem\":" << m.get<ResponderMarkupVegaDir::min_surf_edge_prem>();
        o << ",\"min_surf_edge_vol\":" << m.get<ResponderMarkupVegaDir::min_surf_edge_vol>();
        o << ",\"inc_fees_in_resp\":" << (int64_t)m.get<ResponderMarkupVegaDir::inc_fees_in_resp>();
        o << ",\"round_rule\":" << (int64_t)m.get<ResponderMarkupVegaDir::round_rule>();
        o << ",\"max_response_size\":" << m.get<ResponderMarkupVegaDir::max_response_size>();
        o << ",\"max_response_vega\":" << m.get<ResponderMarkupVegaDir::max_response_vega>();
        o << ",\"total_response_vega\":" << m.get<ResponderMarkupVegaDir::total_response_vega>();
        o << ",\"total_response_wt_vega\":" << m.get<ResponderMarkupVegaDir::total_response_wt_vega>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<ResponderMarkupVegaDir::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<ResponderMarkupVegaDir::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<ResponderMarkupVegaDir::hedge_sec_key>() << "}";
        o << ",\"hedge_beta_ratio\":" << m.get<ResponderMarkupVegaDir::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<ResponderMarkupVegaDir::hedge_scope>();
        o << ",\"hedge_session\":" << (int64_t)m.get<ResponderMarkupVegaDir::hedge_session>();
        o << ",\"risk_group_id\":" << m.get<ResponderMarkupVegaDir::risk_group_id>();
        o << ",\"num_notices\":" << m.get<ResponderMarkupVegaDir::num_notices>();
        o << ",\"num_notices_pass\":" << m.get<ResponderMarkupVegaDir::num_notices_pass>();
        o << ",\"num_responses\":" << m.get<ResponderMarkupVegaDir::num_responses>();
        o << ",\"qty_traded\":" << m.get<ResponderMarkupVegaDir::qty_traded>();
        o << ",\"vega_traded\":" << m.get<ResponderMarkupVegaDir::vega_traded>();
        o << ",\"modified_by\":\"" << m.get<ResponderMarkupVegaDir::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ResponderMarkupVegaDir::modified_in>();
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}