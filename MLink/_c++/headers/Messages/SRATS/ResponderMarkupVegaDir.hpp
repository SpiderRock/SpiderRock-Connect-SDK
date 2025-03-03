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

    #ifndef _enabled_until__GUARD__
    #define _enabled_until__GUARD__
    DECL_STRONG_TYPE(enabled_until, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_enabled_until__GUARD__

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

    #ifndef _min_net_vega_ratio__GUARD__
    #define _min_net_vega_ratio__GUARD__
    DECL_STRONG_TYPE(min_net_vega_ratio, float);
    #endif//_min_net_vega_ratio__GUARD__

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

    #ifndef _qty_traded__GUARD__
    #define _qty_traded__GUARD__
    DECL_STRONG_TYPE(qty_traded, int32);
    #endif//_qty_traded__GUARD__

    #ifndef _vega_traded__GUARD__
    #define _vega_traded__GUARD__
    DECL_STRONG_TYPE(vega_traded, double);
    #endif//_vega_traded__GUARD__

    #ifndef _wt_vega_traded__GUARD__
    #define _wt_vega_traded__GUARD__
    DECL_STRONG_TYPE(wt_vega_traded, double);
    #endif//_wt_vega_traded__GUARD__

    #ifndef _num_notices__GUARD__
    #define _num_notices__GUARD__
    DECL_STRONG_TYPE(num_notices, int64);
    #endif//_num_notices__GUARD__

    #ifndef _num_notice_sr__GUARD__
    #define _num_notice_sr__GUARD__
    DECL_STRONG_TYPE(num_notice_sr, int64);
    #endif//_num_notice_sr__GUARD__

    #ifndef _num_notice_amex__GUARD__
    #define _num_notice_amex__GUARD__
    DECL_STRONG_TYPE(num_notice_amex, int64);
    #endif//_num_notice_amex__GUARD__

    #ifndef _num_notice_bats__GUARD__
    #define _num_notice_bats__GUARD__
    DECL_STRONG_TYPE(num_notice_bats, int64);
    #endif//_num_notice_bats__GUARD__

    #ifndef _num_notice_box__GUARD__
    #define _num_notice_box__GUARD__
    DECL_STRONG_TYPE(num_notice_box, int64);
    #endif//_num_notice_box__GUARD__

    #ifndef _num_notice_cboe__GUARD__
    #define _num_notice_cboe__GUARD__
    DECL_STRONG_TYPE(num_notice_cboe, int64);
    #endif//_num_notice_cboe__GUARD__

    #ifndef _num_notice_c2__GUARD__
    #define _num_notice_c2__GUARD__
    DECL_STRONG_TYPE(num_notice_c2, int64);
    #endif//_num_notice_c2__GUARD__

    #ifndef _num_notice_edgo__GUARD__
    #define _num_notice_edgo__GUARD__
    DECL_STRONG_TYPE(num_notice_edgo, int64);
    #endif//_num_notice_edgo__GUARD__

    #ifndef _num_notice_emld__GUARD__
    #define _num_notice_emld__GUARD__
    DECL_STRONG_TYPE(num_notice_emld, int64);
    #endif//_num_notice_emld__GUARD__

    #ifndef _num_notice_gmni__GUARD__
    #define _num_notice_gmni__GUARD__
    DECL_STRONG_TYPE(num_notice_gmni, int64);
    #endif//_num_notice_gmni__GUARD__

    #ifndef _num_notice_ise__GUARD__
    #define _num_notice_ise__GUARD__
    DECL_STRONG_TYPE(num_notice_ise, int64);
    #endif//_num_notice_ise__GUARD__

    #ifndef _num_notice_mcry__GUARD__
    #define _num_notice_mcry__GUARD__
    DECL_STRONG_TYPE(num_notice_mcry, int64);
    #endif//_num_notice_mcry__GUARD__

    #ifndef _num_notice_memx__GUARD__
    #define _num_notice_memx__GUARD__
    DECL_STRONG_TYPE(num_notice_memx, int64);
    #endif//_num_notice_memx__GUARD__

    #ifndef _num_notice_miax__GUARD__
    #define _num_notice_miax__GUARD__
    DECL_STRONG_TYPE(num_notice_miax, int64);
    #endif//_num_notice_miax__GUARD__

    #ifndef _num_notice_mprl__GUARD__
    #define _num_notice_mprl__GUARD__
    DECL_STRONG_TYPE(num_notice_mprl, int64);
    #endif//_num_notice_mprl__GUARD__

    #ifndef _num_notice_nyse__GUARD__
    #define _num_notice_nyse__GUARD__
    DECL_STRONG_TYPE(num_notice_nyse, int64);
    #endif//_num_notice_nyse__GUARD__

    #ifndef _num_notice_nqbx__GUARD__
    #define _num_notice_nqbx__GUARD__
    DECL_STRONG_TYPE(num_notice_nqbx, int64);
    #endif//_num_notice_nqbx__GUARD__

    #ifndef _num_notice_nsdq__GUARD__
    #define _num_notice_nsdq__GUARD__
    DECL_STRONG_TYPE(num_notice_nsdq, int64);
    #endif//_num_notice_nsdq__GUARD__

    #ifndef _num_notice_phlx__GUARD__
    #define _num_notice_phlx__GUARD__
    DECL_STRONG_TYPE(num_notice_phlx, int64);
    #endif//_num_notice_phlx__GUARD__

    #ifndef _num_notice_sphr__GUARD__
    #define _num_notice_sphr__GUARD__
    DECL_STRONG_TYPE(num_notice_sphr, int64);
    #endif//_num_notice_sphr__GUARD__

    #ifndef _resp_disabled_skips__GUARD__
    #define _resp_disabled_skips__GUARD__
    DECL_STRONG_TYPE(resp_disabled_skips, int64);
    #endif//_resp_disabled_skips__GUARD__

    #ifndef _stock_disabled_skips__GUARD__
    #define _stock_disabled_skips__GUARD__
    DECL_STRONG_TYPE(stock_disabled_skips, int64);
    #endif//_stock_disabled_skips__GUARD__

    #ifndef _cp_flag_skips__GUARD__
    #define _cp_flag_skips__GUARD__
    DECL_STRONG_TYPE(cp_flag_skips, int64);
    #endif//_cp_flag_skips__GUARD__

    #ifndef _expiry_range_skips__GUARD__
    #define _expiry_range_skips__GUARD__
    DECL_STRONG_TYPE(expiry_range_skips, int64);
    #endif//_expiry_range_skips__GUARD__

    #ifndef _years_range_skips__GUARD__
    #define _years_range_skips__GUARD__
    DECL_STRONG_TYPE(years_range_skips, int64);
    #endif//_years_range_skips__GUARD__

    #ifndef _listed_flex_skips__GUARD__
    #define _listed_flex_skips__GUARD__
    DECL_STRONG_TYPE(listed_flex_skips, int64);
    #endif//_listed_flex_skips__GUARD__

    #ifndef _notice_price_skips__GUARD__
    #define _notice_price_skips__GUARD__
    DECL_STRONG_TYPE(notice_price_skips, int64);
    #endif//_notice_price_skips__GUARD__

    #ifndef _agg_size_limit_skips__GUARD__
    #define _agg_size_limit_skips__GUARD__
    DECL_STRONG_TYPE(agg_size_limit_skips, int64);
    #endif//_agg_size_limit_skips__GUARD__

    #ifndef _risk_group_limit_skips__GUARD__
    #define _risk_group_limit_skips__GUARD__
    DECL_STRONG_TYPE(risk_group_limit_skips, int64);
    #endif//_risk_group_limit_skips__GUARD__

    #ifndef _root_skips__GUARD__
    #define _root_skips__GUARD__
    DECL_STRONG_TYPE(root_skips, int64);
    #endif//_root_skips__GUARD__

    #ifndef _x_delta_range_skips__GUARD__
    #define _x_delta_range_skips__GUARD__
    DECL_STRONG_TYPE(x_delta_range_skips, int64);
    #endif//_x_delta_range_skips__GUARD__

    #ifndef _strike_range_skips__GUARD__
    #define _strike_range_skips__GUARD__
    DECL_STRONG_TYPE(strike_range_skips, int64);
    #endif//_strike_range_skips__GUARD__

    #ifndef _min_vega_ratio_skips__GUARD__
    #define _min_vega_ratio_skips__GUARD__
    DECL_STRONG_TYPE(min_vega_ratio_skips, int64);
    #endif//_min_vega_ratio_skips__GUARD__

    #ifndef _num_responses__int64__GUARD__
    #define _num_responses__int64__GUARD__
    DECL_STRONG_TYPE(num_responses__int64, int64);
    #endif//_num_responses__int64__GUARD__

    #ifndef _num_full_size__GUARD__
    #define _num_full_size__GUARD__
    DECL_STRONG_TYPE(num_full_size, int64);
    #endif//_num_full_size__GUARD__

    #ifndef _num_alloc_size__GUARD__
    #define _num_alloc_size__GUARD__
    DECL_STRONG_TYPE(num_alloc_size, int64);
    #endif//_num_alloc_size__GUARD__

    #ifndef _num_price_miss__GUARD__
    #define _num_price_miss__GUARD__
    DECL_STRONG_TYPE(num_price_miss, int64);
    #endif//_num_price_miss__GUARD__

    #ifndef _num_too_late__GUARD__
    #define _num_too_late__GUARD__
    DECL_STRONG_TYPE(num_too_late, int64);
    #endif//_num_too_late__GUARD__

    #ifndef _num_other_miss__GUARD__
    #define _num_other_miss__GUARD__
    DECL_STRONG_TYPE(num_other_miss, int64);
    #endif//_num_other_miss__GUARD__

    #ifndef _num_did_not_trade__GUARD__
    #define _num_did_not_trade__GUARD__
    DECL_STRONG_TYPE(num_did_not_trade, int64);
    #endif//_num_did_not_trade__GUARD__

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

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    #ifndef _responder_id__GUARD__
    #define _responder_id__GUARD__
    DECL_STRONG_TYPE(responder_id, int32);
    #endif//_responder_id__GUARD__

    
    class ResponderMarkupVegaDir_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using root = spiderrock::protobuf::api::root;
        using resp_side = spiderrock::protobuf::api::resp_side;
        using responder_id = spiderrock::protobuf::api::responder_id;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        root m_root{};
        resp_side m_resp_side{};
        responder_id m_responder_id{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		root get_root() const {
            return m_root;
        }
        resp_side get_resp_side() const {
            return m_resp_side;
        }
        responder_id get_responder_id() const {
            return m_responder_id;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        void set_responder_id(const responder_id& value)  {
            m_responder_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupVegaDir_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const root & value) { set_root(value); }
        void set(const resp_side & value) { set_resp_side(value); }
        void set(const responder_id & value) { set_responder_id(value); }


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
        bool IncludeRoot() const {
            return (m_root.ByteSizeLong() > 0);
        }
        bool IncludeResponderId() const {
            return !(m_responder_id == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(15,tickerKeyLayout_root);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeResponderId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(16,m_responder_id);
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
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 15, tickerKeyLayout_root);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeResponderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,16,m_responder_id);
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
                    case 15: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 16: {m_responder_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
        using enabled_until = spiderrock::protobuf::api::enabled_until;
        using can_include_flex = spiderrock::protobuf::api::can_include_flex;
        using can_include_stock = spiderrock::protobuf::api::can_include_stock;
        using cp_flag = spiderrock::protobuf::api::cp_flag;
        using min_net_vega_ratio = spiderrock::protobuf::api::min_net_vega_ratio;
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
        using qty_traded = spiderrock::protobuf::api::qty_traded;
        using vega_traded = spiderrock::protobuf::api::vega_traded;
        using wt_vega_traded = spiderrock::protobuf::api::wt_vega_traded;
        using num_notices = spiderrock::protobuf::api::num_notices;
        using num_notice_sr = spiderrock::protobuf::api::num_notice_sr;
        using num_notice_amex = spiderrock::protobuf::api::num_notice_amex;
        using num_notice_bats = spiderrock::protobuf::api::num_notice_bats;
        using num_notice_box = spiderrock::protobuf::api::num_notice_box;
        using num_notice_cboe = spiderrock::protobuf::api::num_notice_cboe;
        using num_notice_c2 = spiderrock::protobuf::api::num_notice_c2;
        using num_notice_edgo = spiderrock::protobuf::api::num_notice_edgo;
        using num_notice_emld = spiderrock::protobuf::api::num_notice_emld;
        using num_notice_gmni = spiderrock::protobuf::api::num_notice_gmni;
        using num_notice_ise = spiderrock::protobuf::api::num_notice_ise;
        using num_notice_mcry = spiderrock::protobuf::api::num_notice_mcry;
        using num_notice_memx = spiderrock::protobuf::api::num_notice_memx;
        using num_notice_miax = spiderrock::protobuf::api::num_notice_miax;
        using num_notice_mprl = spiderrock::protobuf::api::num_notice_mprl;
        using num_notice_nyse = spiderrock::protobuf::api::num_notice_nyse;
        using num_notice_nqbx = spiderrock::protobuf::api::num_notice_nqbx;
        using num_notice_nsdq = spiderrock::protobuf::api::num_notice_nsdq;
        using num_notice_phlx = spiderrock::protobuf::api::num_notice_phlx;
        using num_notice_sphr = spiderrock::protobuf::api::num_notice_sphr;
        using resp_disabled_skips = spiderrock::protobuf::api::resp_disabled_skips;
        using stock_disabled_skips = spiderrock::protobuf::api::stock_disabled_skips;
        using cp_flag_skips = spiderrock::protobuf::api::cp_flag_skips;
        using expiry_range_skips = spiderrock::protobuf::api::expiry_range_skips;
        using years_range_skips = spiderrock::protobuf::api::years_range_skips;
        using listed_flex_skips = spiderrock::protobuf::api::listed_flex_skips;
        using notice_price_skips = spiderrock::protobuf::api::notice_price_skips;
        using agg_size_limit_skips = spiderrock::protobuf::api::agg_size_limit_skips;
        using risk_group_limit_skips = spiderrock::protobuf::api::risk_group_limit_skips;
        using root_skips = spiderrock::protobuf::api::root_skips;
        using x_delta_range_skips = spiderrock::protobuf::api::x_delta_range_skips;
        using strike_range_skips = spiderrock::protobuf::api::strike_range_skips;
        using min_vega_ratio_skips = spiderrock::protobuf::api::min_vega_ratio_skips;
        using num_responses = spiderrock::protobuf::api::num_responses__int64;
        using num_full_size = spiderrock::protobuf::api::num_full_size;
        using num_alloc_size = spiderrock::protobuf::api::num_alloc_size;
        using num_price_miss = spiderrock::protobuf::api::num_price_miss;
        using num_too_late = spiderrock::protobuf::api::num_too_late;
        using num_other_miss = spiderrock::protobuf::api::num_other_miss;
        using num_did_not_trade = spiderrock::protobuf::api::num_did_not_trade;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        is_disabled m_is_disabled{};
        enabled_until m_enabled_until{};
        can_include_flex m_can_include_flex{};
        can_include_stock m_can_include_stock{};
        cp_flag m_cp_flag{};
        min_net_vega_ratio m_min_net_vega_ratio{};
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
        qty_traded m_qty_traded{};
        vega_traded m_vega_traded{};
        wt_vega_traded m_wt_vega_traded{};
        num_notices m_num_notices{};
        num_notice_sr m_num_notice_sr{};
        num_notice_amex m_num_notice_amex{};
        num_notice_bats m_num_notice_bats{};
        num_notice_box m_num_notice_box{};
        num_notice_cboe m_num_notice_cboe{};
        num_notice_c2 m_num_notice_c2{};
        num_notice_edgo m_num_notice_edgo{};
        num_notice_emld m_num_notice_emld{};
        num_notice_gmni m_num_notice_gmni{};
        num_notice_ise m_num_notice_ise{};
        num_notice_mcry m_num_notice_mcry{};
        num_notice_memx m_num_notice_memx{};
        num_notice_miax m_num_notice_miax{};
        num_notice_mprl m_num_notice_mprl{};
        num_notice_nyse m_num_notice_nyse{};
        num_notice_nqbx m_num_notice_nqbx{};
        num_notice_nsdq m_num_notice_nsdq{};
        num_notice_phlx m_num_notice_phlx{};
        num_notice_sphr m_num_notice_sphr{};
        resp_disabled_skips m_resp_disabled_skips{};
        stock_disabled_skips m_stock_disabled_skips{};
        cp_flag_skips m_cp_flag_skips{};
        expiry_range_skips m_expiry_range_skips{};
        years_range_skips m_years_range_skips{};
        listed_flex_skips m_listed_flex_skips{};
        notice_price_skips m_notice_price_skips{};
        agg_size_limit_skips m_agg_size_limit_skips{};
        risk_group_limit_skips m_risk_group_limit_skips{};
        root_skips m_root_skips{};
        x_delta_range_skips m_x_delta_range_skips{};
        strike_range_skips m_strike_range_skips{};
        min_vega_ratio_skips m_min_vega_ratio_skips{};
        num_responses m_num_responses{};
        num_full_size m_num_full_size{};
        num_alloc_size m_num_alloc_size{};
        num_price_miss m_num_price_miss{};
        num_too_late m_num_too_late{};
        num_other_miss m_num_other_miss{};
        num_did_not_trade m_num_did_not_trade{};
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
        enabled_until get_enabled_until() const {
            return m_enabled_until;
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
        min_net_vega_ratio get_min_net_vega_ratio() const {
            return m_min_net_vega_ratio;
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
        qty_traded get_qty_traded() const {
            return m_qty_traded;
        }		
        vega_traded get_vega_traded() const {
            return m_vega_traded;
        }		
        wt_vega_traded get_wt_vega_traded() const {
            return m_wt_vega_traded;
        }		
        num_notices get_num_notices() const {
            return m_num_notices;
        }		
        num_notice_sr get_num_notice_sr() const {
            return m_num_notice_sr;
        }		
        num_notice_amex get_num_notice_amex() const {
            return m_num_notice_amex;
        }		
        num_notice_bats get_num_notice_bats() const {
            return m_num_notice_bats;
        }		
        num_notice_box get_num_notice_box() const {
            return m_num_notice_box;
        }		
        num_notice_cboe get_num_notice_cboe() const {
            return m_num_notice_cboe;
        }		
        num_notice_c2 get_num_notice_c2() const {
            return m_num_notice_c2;
        }		
        num_notice_edgo get_num_notice_edgo() const {
            return m_num_notice_edgo;
        }		
        num_notice_emld get_num_notice_emld() const {
            return m_num_notice_emld;
        }		
        num_notice_gmni get_num_notice_gmni() const {
            return m_num_notice_gmni;
        }		
        num_notice_ise get_num_notice_ise() const {
            return m_num_notice_ise;
        }		
        num_notice_mcry get_num_notice_mcry() const {
            return m_num_notice_mcry;
        }		
        num_notice_memx get_num_notice_memx() const {
            return m_num_notice_memx;
        }		
        num_notice_miax get_num_notice_miax() const {
            return m_num_notice_miax;
        }		
        num_notice_mprl get_num_notice_mprl() const {
            return m_num_notice_mprl;
        }		
        num_notice_nyse get_num_notice_nyse() const {
            return m_num_notice_nyse;
        }		
        num_notice_nqbx get_num_notice_nqbx() const {
            return m_num_notice_nqbx;
        }		
        num_notice_nsdq get_num_notice_nsdq() const {
            return m_num_notice_nsdq;
        }		
        num_notice_phlx get_num_notice_phlx() const {
            return m_num_notice_phlx;
        }		
        num_notice_sphr get_num_notice_sphr() const {
            return m_num_notice_sphr;
        }		
        resp_disabled_skips get_resp_disabled_skips() const {
            return m_resp_disabled_skips;
        }		
        stock_disabled_skips get_stock_disabled_skips() const {
            return m_stock_disabled_skips;
        }		
        cp_flag_skips get_cp_flag_skips() const {
            return m_cp_flag_skips;
        }		
        expiry_range_skips get_expiry_range_skips() const {
            return m_expiry_range_skips;
        }		
        years_range_skips get_years_range_skips() const {
            return m_years_range_skips;
        }		
        listed_flex_skips get_listed_flex_skips() const {
            return m_listed_flex_skips;
        }		
        notice_price_skips get_notice_price_skips() const {
            return m_notice_price_skips;
        }		
        agg_size_limit_skips get_agg_size_limit_skips() const {
            return m_agg_size_limit_skips;
        }		
        risk_group_limit_skips get_risk_group_limit_skips() const {
            return m_risk_group_limit_skips;
        }		
        root_skips get_root_skips() const {
            return m_root_skips;
        }		
        x_delta_range_skips get_x_delta_range_skips() const {
            return m_x_delta_range_skips;
        }		
        strike_range_skips get_strike_range_skips() const {
            return m_strike_range_skips;
        }		
        min_vega_ratio_skips get_min_vega_ratio_skips() const {
            return m_min_vega_ratio_skips;
        }		
        num_responses get_num_responses() const {
            return m_num_responses;
        }		
        num_full_size get_num_full_size() const {
            return m_num_full_size;
        }		
        num_alloc_size get_num_alloc_size() const {
            return m_num_alloc_size;
        }		
        num_price_miss get_num_price_miss() const {
            return m_num_price_miss;
        }		
        num_too_late get_num_too_late() const {
            return m_num_too_late;
        }		
        num_other_miss get_num_other_miss() const {
            return m_num_other_miss;
        }		
        num_did_not_trade get_num_did_not_trade() const {
            return m_num_did_not_trade;
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
        void set_enabled_until(const enabled_until& value)  {
            m_enabled_until = value;
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
        void set_min_net_vega_ratio(const min_net_vega_ratio& value)  {
            m_min_net_vega_ratio = value;
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
        void set_qty_traded(const qty_traded& value)  {
            m_qty_traded = value;
        }
        void set_vega_traded(const vega_traded& value)  {
            m_vega_traded = value;
        }
        void set_wt_vega_traded(const wt_vega_traded& value)  {
            m_wt_vega_traded = value;
        }
        void set_num_notices(const num_notices& value)  {
            m_num_notices = value;
        }
        void set_num_notice_sr(const num_notice_sr& value)  {
            m_num_notice_sr = value;
        }
        void set_num_notice_amex(const num_notice_amex& value)  {
            m_num_notice_amex = value;
        }
        void set_num_notice_bats(const num_notice_bats& value)  {
            m_num_notice_bats = value;
        }
        void set_num_notice_box(const num_notice_box& value)  {
            m_num_notice_box = value;
        }
        void set_num_notice_cboe(const num_notice_cboe& value)  {
            m_num_notice_cboe = value;
        }
        void set_num_notice_c2(const num_notice_c2& value)  {
            m_num_notice_c2 = value;
        }
        void set_num_notice_edgo(const num_notice_edgo& value)  {
            m_num_notice_edgo = value;
        }
        void set_num_notice_emld(const num_notice_emld& value)  {
            m_num_notice_emld = value;
        }
        void set_num_notice_gmni(const num_notice_gmni& value)  {
            m_num_notice_gmni = value;
        }
        void set_num_notice_ise(const num_notice_ise& value)  {
            m_num_notice_ise = value;
        }
        void set_num_notice_mcry(const num_notice_mcry& value)  {
            m_num_notice_mcry = value;
        }
        void set_num_notice_memx(const num_notice_memx& value)  {
            m_num_notice_memx = value;
        }
        void set_num_notice_miax(const num_notice_miax& value)  {
            m_num_notice_miax = value;
        }
        void set_num_notice_mprl(const num_notice_mprl& value)  {
            m_num_notice_mprl = value;
        }
        void set_num_notice_nyse(const num_notice_nyse& value)  {
            m_num_notice_nyse = value;
        }
        void set_num_notice_nqbx(const num_notice_nqbx& value)  {
            m_num_notice_nqbx = value;
        }
        void set_num_notice_nsdq(const num_notice_nsdq& value)  {
            m_num_notice_nsdq = value;
        }
        void set_num_notice_phlx(const num_notice_phlx& value)  {
            m_num_notice_phlx = value;
        }
        void set_num_notice_sphr(const num_notice_sphr& value)  {
            m_num_notice_sphr = value;
        }
        void set_resp_disabled_skips(const resp_disabled_skips& value)  {
            m_resp_disabled_skips = value;
        }
        void set_stock_disabled_skips(const stock_disabled_skips& value)  {
            m_stock_disabled_skips = value;
        }
        void set_cp_flag_skips(const cp_flag_skips& value)  {
            m_cp_flag_skips = value;
        }
        void set_expiry_range_skips(const expiry_range_skips& value)  {
            m_expiry_range_skips = value;
        }
        void set_years_range_skips(const years_range_skips& value)  {
            m_years_range_skips = value;
        }
        void set_listed_flex_skips(const listed_flex_skips& value)  {
            m_listed_flex_skips = value;
        }
        void set_notice_price_skips(const notice_price_skips& value)  {
            m_notice_price_skips = value;
        }
        void set_agg_size_limit_skips(const agg_size_limit_skips& value)  {
            m_agg_size_limit_skips = value;
        }
        void set_risk_group_limit_skips(const risk_group_limit_skips& value)  {
            m_risk_group_limit_skips = value;
        }
        void set_root_skips(const root_skips& value)  {
            m_root_skips = value;
        }
        void set_x_delta_range_skips(const x_delta_range_skips& value)  {
            m_x_delta_range_skips = value;
        }
        void set_strike_range_skips(const strike_range_skips& value)  {
            m_strike_range_skips = value;
        }
        void set_min_vega_ratio_skips(const min_vega_ratio_skips& value)  {
            m_min_vega_ratio_skips = value;
        }
        void set_num_responses(const num_responses& value)  {
            m_num_responses = value;
        }
        void set_num_full_size(const num_full_size& value)  {
            m_num_full_size = value;
        }
        void set_num_alloc_size(const num_alloc_size& value)  {
            m_num_alloc_size = value;
        }
        void set_num_price_miss(const num_price_miss& value)  {
            m_num_price_miss = value;
        }
        void set_num_too_late(const num_too_late& value)  {
            m_num_too_late = value;
        }
        void set_num_other_miss(const num_other_miss& value)  {
            m_num_other_miss = value;
        }
        void set_num_did_not_trade(const num_did_not_trade& value)  {
            m_num_did_not_trade = value;
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
        void set(const enabled_until & value) {
            set_enabled_until(value);
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
        void set(const min_net_vega_ratio & value) {
            set_min_net_vega_ratio(value);
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
        void set(const qty_traded & value) {
            set_qty_traded(value);
        }
        void set(const vega_traded & value) {
            set_vega_traded(value);
        }
        void set(const wt_vega_traded & value) {
            set_wt_vega_traded(value);
        }
        void set(const num_notices & value) {
            set_num_notices(value);
        }
        void set(const num_notice_sr & value) {
            set_num_notice_sr(value);
        }
        void set(const num_notice_amex & value) {
            set_num_notice_amex(value);
        }
        void set(const num_notice_bats & value) {
            set_num_notice_bats(value);
        }
        void set(const num_notice_box & value) {
            set_num_notice_box(value);
        }
        void set(const num_notice_cboe & value) {
            set_num_notice_cboe(value);
        }
        void set(const num_notice_c2 & value) {
            set_num_notice_c2(value);
        }
        void set(const num_notice_edgo & value) {
            set_num_notice_edgo(value);
        }
        void set(const num_notice_emld & value) {
            set_num_notice_emld(value);
        }
        void set(const num_notice_gmni & value) {
            set_num_notice_gmni(value);
        }
        void set(const num_notice_ise & value) {
            set_num_notice_ise(value);
        }
        void set(const num_notice_mcry & value) {
            set_num_notice_mcry(value);
        }
        void set(const num_notice_memx & value) {
            set_num_notice_memx(value);
        }
        void set(const num_notice_miax & value) {
            set_num_notice_miax(value);
        }
        void set(const num_notice_mprl & value) {
            set_num_notice_mprl(value);
        }
        void set(const num_notice_nyse & value) {
            set_num_notice_nyse(value);
        }
        void set(const num_notice_nqbx & value) {
            set_num_notice_nqbx(value);
        }
        void set(const num_notice_nsdq & value) {
            set_num_notice_nsdq(value);
        }
        void set(const num_notice_phlx & value) {
            set_num_notice_phlx(value);
        }
        void set(const num_notice_sphr & value) {
            set_num_notice_sphr(value);
        }
        void set(const resp_disabled_skips & value) {
            set_resp_disabled_skips(value);
        }
        void set(const stock_disabled_skips & value) {
            set_stock_disabled_skips(value);
        }
        void set(const cp_flag_skips & value) {
            set_cp_flag_skips(value);
        }
        void set(const expiry_range_skips & value) {
            set_expiry_range_skips(value);
        }
        void set(const years_range_skips & value) {
            set_years_range_skips(value);
        }
        void set(const listed_flex_skips & value) {
            set_listed_flex_skips(value);
        }
        void set(const notice_price_skips & value) {
            set_notice_price_skips(value);
        }
        void set(const agg_size_limit_skips & value) {
            set_agg_size_limit_skips(value);
        }
        void set(const risk_group_limit_skips & value) {
            set_risk_group_limit_skips(value);
        }
        void set(const root_skips & value) {
            set_root_skips(value);
        }
        void set(const x_delta_range_skips & value) {
            set_x_delta_range_skips(value);
        }
        void set(const strike_range_skips & value) {
            set_strike_range_skips(value);
        }
        void set(const min_vega_ratio_skips & value) {
            set_min_vega_ratio_skips(value);
        }
        void set(const num_responses & value) {
            set_num_responses(value);
        }
        void set(const num_full_size & value) {
            set_num_full_size(value);
        }
        void set(const num_alloc_size & value) {
            set_num_alloc_size(value);
        }
        void set(const num_price_miss & value) {
            set_num_price_miss(value);
        }
        void set(const num_too_late & value) {
            set_num_too_late(value);
        }
        void set(const num_other_miss & value) {
            set_num_other_miss(value);
        }
        void set(const num_did_not_trade & value) {
            set_num_did_not_trade(value);
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
            set(value.m_enabled_until);
            set(value.m_can_include_flex);
            set(value.m_can_include_stock);
            set(value.m_cp_flag);
            set(value.m_min_net_vega_ratio);
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
            set(value.m_qty_traded);
            set(value.m_vega_traded);
            set(value.m_wt_vega_traded);
            set(value.m_num_notices);
            set(value.m_num_notice_sr);
            set(value.m_num_notice_amex);
            set(value.m_num_notice_bats);
            set(value.m_num_notice_box);
            set(value.m_num_notice_cboe);
            set(value.m_num_notice_c2);
            set(value.m_num_notice_edgo);
            set(value.m_num_notice_emld);
            set(value.m_num_notice_gmni);
            set(value.m_num_notice_ise);
            set(value.m_num_notice_mcry);
            set(value.m_num_notice_memx);
            set(value.m_num_notice_miax);
            set(value.m_num_notice_mprl);
            set(value.m_num_notice_nyse);
            set(value.m_num_notice_nqbx);
            set(value.m_num_notice_nsdq);
            set(value.m_num_notice_phlx);
            set(value.m_num_notice_sphr);
            set(value.m_resp_disabled_skips);
            set(value.m_stock_disabled_skips);
            set(value.m_cp_flag_skips);
            set(value.m_expiry_range_skips);
            set(value.m_years_range_skips);
            set(value.m_listed_flex_skips);
            set(value.m_notice_price_skips);
            set(value.m_agg_size_limit_skips);
            set(value.m_risk_group_limit_skips);
            set(value.m_root_skips);
            set(value.m_x_delta_range_skips);
            set(value.m_strike_range_skips);
            set(value.m_min_vega_ratio_skips);
            set(value.m_num_responses);
            set(value.m_num_full_size);
            set(value.m_num_alloc_size);
            set(value.m_num_price_miss);
            set(value.m_num_too_late);
            set(value.m_num_other_miss);
            set(value.m_num_did_not_trade);
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
        bool IncludeEnabledUntil() const {
            return (m_enabled_until.time_since_epoch().count() != 0);
        }
        bool IncludeMinNetVegaRatio() const {
            return !(m_min_net_vega_ratio == 0.0);
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
        bool IncludeQtyTraded() const {
            return !(m_qty_traded == 0);
        }
        bool IncludeVegaTraded() const {
            return !(m_vega_traded == 0.0);
        }
        bool IncludeWtVegaTraded() const {
            return !(m_wt_vega_traded == 0.0);
        }
        bool IncludeNumNotices() const {
            return !(m_num_notices == 0);
        }
        bool IncludeNumNoticeSr() const {
            return !(m_num_notice_sr == 0);
        }
        bool IncludeNumNoticeAmex() const {
            return !(m_num_notice_amex == 0);
        }
        bool IncludeNumNoticeBats() const {
            return !(m_num_notice_bats == 0);
        }
        bool IncludeNumNoticeBox() const {
            return !(m_num_notice_box == 0);
        }
        bool IncludeNumNoticeCboe() const {
            return !(m_num_notice_cboe == 0);
        }
        bool IncludeNumNoticeC2() const {
            return !(m_num_notice_c2 == 0);
        }
        bool IncludeNumNoticeEdgo() const {
            return !(m_num_notice_edgo == 0);
        }
        bool IncludeNumNoticeEmld() const {
            return !(m_num_notice_emld == 0);
        }
        bool IncludeNumNoticeGmni() const {
            return !(m_num_notice_gmni == 0);
        }
        bool IncludeNumNoticeIse() const {
            return !(m_num_notice_ise == 0);
        }
        bool IncludeNumNoticeMcry() const {
            return !(m_num_notice_mcry == 0);
        }
        bool IncludeNumNoticeMemx() const {
            return !(m_num_notice_memx == 0);
        }
        bool IncludeNumNoticeMiax() const {
            return !(m_num_notice_miax == 0);
        }
        bool IncludeNumNoticeMprl() const {
            return !(m_num_notice_mprl == 0);
        }
        bool IncludeNumNoticeNyse() const {
            return !(m_num_notice_nyse == 0);
        }
        bool IncludeNumNoticeNqbx() const {
            return !(m_num_notice_nqbx == 0);
        }
        bool IncludeNumNoticeNsdq() const {
            return !(m_num_notice_nsdq == 0);
        }
        bool IncludeNumNoticePhlx() const {
            return !(m_num_notice_phlx == 0);
        }
        bool IncludeNumNoticeSphr() const {
            return !(m_num_notice_sphr == 0);
        }
        bool IncludeRespDisabledSkips() const {
            return !(m_resp_disabled_skips == 0);
        }
        bool IncludeStockDisabledSkips() const {
            return !(m_stock_disabled_skips == 0);
        }
        bool IncludeCpFlagSkips() const {
            return !(m_cp_flag_skips == 0);
        }
        bool IncludeExpiryRangeSkips() const {
            return !(m_expiry_range_skips == 0);
        }
        bool IncludeYearsRangeSkips() const {
            return !(m_years_range_skips == 0);
        }
        bool IncludeListedFlexSkips() const {
            return !(m_listed_flex_skips == 0);
        }
        bool IncludeNoticePriceSkips() const {
            return !(m_notice_price_skips == 0);
        }
        bool IncludeAggSizeLimitSkips() const {
            return !(m_agg_size_limit_skips == 0);
        }
        bool IncludeRiskGroupLimitSkips() const {
            return !(m_risk_group_limit_skips == 0);
        }
        bool IncludeRootSkips() const {
            return !(m_root_skips == 0);
        }
        bool IncludeXDeltaRangeSkips() const {
            return !(m_x_delta_range_skips == 0);
        }
        bool IncludeStrikeRangeSkips() const {
            return !(m_strike_range_skips == 0);
        }
        bool IncludeMinVegaRatioSkips() const {
            return !(m_min_vega_ratio_skips == 0);
        }
        bool IncludeNumResponses() const {
            return !(m_num_responses == 0);
        }
        bool IncludeNumFullSize() const {
            return !(m_num_full_size == 0);
        }
        bool IncludeNumAllocSize() const {
            return !(m_num_alloc_size == 0);
        }
        bool IncludeNumPriceMiss() const {
            return !(m_num_price_miss == 0);
        }
        bool IncludeNumTooLate() const {
            return !(m_num_too_late == 0);
        }
        bool IncludeNumOtherMiss() const {
            return !(m_num_other_miss == 0);
        }
        bool IncludeNumDidNotTrade() const {
            return !(m_num_did_not_trade == 0);
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
            if ( IncludeEnabledUntil()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(137, m_enabled_until);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinNetVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(138,m_min_net_vega_ratio);
            }
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
            if ( IncludeQtyTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(132,m_qty_traded);
            }
            if ( IncludeVegaTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_vega_traded);
            }
            if ( IncludeWtVegaTraded()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(177,m_wt_vega_traded);
            }
            if ( IncludeNumNotices()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(129,m_num_notices);
            }
            if ( IncludeNumNoticeSr()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(139,m_num_notice_sr);
            }
            if ( IncludeNumNoticeAmex()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(140,m_num_notice_amex);
            }
            if ( IncludeNumNoticeBats()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(141,m_num_notice_bats);
            }
            if ( IncludeNumNoticeBox()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(142,m_num_notice_box);
            }
            if ( IncludeNumNoticeCboe()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(143,m_num_notice_cboe);
            }
            if ( IncludeNumNoticeC2()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(144,m_num_notice_c2);
            }
            if ( IncludeNumNoticeEdgo()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(145,m_num_notice_edgo);
            }
            if ( IncludeNumNoticeEmld()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(146,m_num_notice_emld);
            }
            if ( IncludeNumNoticeGmni()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(147,m_num_notice_gmni);
            }
            if ( IncludeNumNoticeIse()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(148,m_num_notice_ise);
            }
            if ( IncludeNumNoticeMcry()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(149,m_num_notice_mcry);
            }
            if ( IncludeNumNoticeMemx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(150,m_num_notice_memx);
            }
            if ( IncludeNumNoticeMiax()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(151,m_num_notice_miax);
            }
            if ( IncludeNumNoticeMprl()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(152,m_num_notice_mprl);
            }
            if ( IncludeNumNoticeNyse()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(153,m_num_notice_nyse);
            }
            if ( IncludeNumNoticeNqbx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(154,m_num_notice_nqbx);
            }
            if ( IncludeNumNoticeNsdq()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(155,m_num_notice_nsdq);
            }
            if ( IncludeNumNoticePhlx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(156,m_num_notice_phlx);
            }
            if ( IncludeNumNoticeSphr()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_num_notice_sphr);
            }
            if ( IncludeRespDisabledSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(158,m_resp_disabled_skips);
            }
            if ( IncludeStockDisabledSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(159,m_stock_disabled_skips);
            }
            if ( IncludeCpFlagSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_cp_flag_skips);
            }
            if ( IncludeExpiryRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(161,m_expiry_range_skips);
            }
            if ( IncludeYearsRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(162,m_years_range_skips);
            }
            if ( IncludeListedFlexSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_listed_flex_skips);
            }
            if ( IncludeNoticePriceSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(164,m_notice_price_skips);
            }
            if ( IncludeAggSizeLimitSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(165,m_agg_size_limit_skips);
            }
            if ( IncludeRiskGroupLimitSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(166,m_risk_group_limit_skips);
            }
            if ( IncludeRootSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(167,m_root_skips);
            }
            if ( IncludeXDeltaRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(168,m_x_delta_range_skips);
            }
            if ( IncludeStrikeRangeSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(169,m_strike_range_skips);
            }
            if ( IncludeMinVegaRatioSkips()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(170,m_min_vega_ratio_skips);
            }
            if ( IncludeNumResponses()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(131,m_num_responses);
            }
            if ( IncludeNumFullSize()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(171,m_num_full_size);
            }
            if ( IncludeNumAllocSize()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(172,m_num_alloc_size);
            }
            if ( IncludeNumPriceMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(173,m_num_price_miss);
            }
            if ( IncludeNumTooLate()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(174,m_num_too_late);
            }
            if ( IncludeNumOtherMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(175,m_num_other_miss);
            }
            if ( IncludeNumDidNotTrade()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(176,m_num_did_not_trade);
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
            if ( IncludeEnabledUntil()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 137, m_enabled_until);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinNetVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,138,m_min_net_vega_ratio);
            }
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
            if ( IncludeQtyTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,132,m_qty_traded);
            }
            if ( IncludeVegaTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_vega_traded);
            }
            if ( IncludeWtVegaTraded()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,177,m_wt_vega_traded);
            }
            if ( IncludeNumNotices()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,129,m_num_notices);
            }
            if ( IncludeNumNoticeSr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,139,m_num_notice_sr);
            }
            if ( IncludeNumNoticeAmex()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,140,m_num_notice_amex);
            }
            if ( IncludeNumNoticeBats()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,141,m_num_notice_bats);
            }
            if ( IncludeNumNoticeBox()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,142,m_num_notice_box);
            }
            if ( IncludeNumNoticeCboe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,143,m_num_notice_cboe);
            }
            if ( IncludeNumNoticeC2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,144,m_num_notice_c2);
            }
            if ( IncludeNumNoticeEdgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,145,m_num_notice_edgo);
            }
            if ( IncludeNumNoticeEmld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,146,m_num_notice_emld);
            }
            if ( IncludeNumNoticeGmni()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,147,m_num_notice_gmni);
            }
            if ( IncludeNumNoticeIse()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,148,m_num_notice_ise);
            }
            if ( IncludeNumNoticeMcry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,149,m_num_notice_mcry);
            }
            if ( IncludeNumNoticeMemx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,150,m_num_notice_memx);
            }
            if ( IncludeNumNoticeMiax()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,151,m_num_notice_miax);
            }
            if ( IncludeNumNoticeMprl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,152,m_num_notice_mprl);
            }
            if ( IncludeNumNoticeNyse()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,153,m_num_notice_nyse);
            }
            if ( IncludeNumNoticeNqbx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,154,m_num_notice_nqbx);
            }
            if ( IncludeNumNoticeNsdq()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,155,m_num_notice_nsdq);
            }
            if ( IncludeNumNoticePhlx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,156,m_num_notice_phlx);
            }
            if ( IncludeNumNoticeSphr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_num_notice_sphr);
            }
            if ( IncludeRespDisabledSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,158,m_resp_disabled_skips);
            }
            if ( IncludeStockDisabledSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,159,m_stock_disabled_skips);
            }
            if ( IncludeCpFlagSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_cp_flag_skips);
            }
            if ( IncludeExpiryRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,161,m_expiry_range_skips);
            }
            if ( IncludeYearsRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,162,m_years_range_skips);
            }
            if ( IncludeListedFlexSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_listed_flex_skips);
            }
            if ( IncludeNoticePriceSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,164,m_notice_price_skips);
            }
            if ( IncludeAggSizeLimitSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,165,m_agg_size_limit_skips);
            }
            if ( IncludeRiskGroupLimitSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,166,m_risk_group_limit_skips);
            }
            if ( IncludeRootSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,167,m_root_skips);
            }
            if ( IncludeXDeltaRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,168,m_x_delta_range_skips);
            }
            if ( IncludeStrikeRangeSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,169,m_strike_range_skips);
            }
            if ( IncludeMinVegaRatioSkips()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,170,m_min_vega_ratio_skips);
            }
            if ( IncludeNumResponses()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,131,m_num_responses);
            }
            if ( IncludeNumFullSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,171,m_num_full_size);
            }
            if ( IncludeNumAllocSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,172,m_num_alloc_size);
            }
            if ( IncludeNumPriceMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,173,m_num_price_miss);
            }
            if ( IncludeNumTooLate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,174,m_num_too_late);
            }
            if ( IncludeNumOtherMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,175,m_num_other_miss);
            }
            if ( IncludeNumDidNotTrade()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,176,m_num_did_not_trade);
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
                    case 137: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_enabled_until = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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
                    case 138: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_net_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                    case 177: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_wt_vega_traded = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notices = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_sr = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_amex = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_bats = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_box = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 143: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_cboe = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_c2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_edgo = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_emld = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 147: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_gmni = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_ise = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 149: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_mcry = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 150: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_memx = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_miax = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 152: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_mprl = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 153: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_nyse = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_nqbx = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 155: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_nsdq = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 156: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_phlx = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_sphr = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 158: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_resp_disabled_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 159: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_stock_disabled_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_cp_flag_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 161: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_expiry_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 162: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_years_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_listed_flex_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 164: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_notice_price_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 165: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_agg_size_limit_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_limit_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 167: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_root_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 168: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_x_delta_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_strike_range_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 170: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_min_vega_ratio_skips = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responses = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 171: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_full_size = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_alloc_size = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 173: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_price_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 174: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_too_late = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_other_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 176: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_did_not_trade = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
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
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::enabled_until>() const { return m_enabled_until; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_include_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_flex)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::can_include_stock>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_stock)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::cp_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_cp_flag)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_net_vega_ratio>() const { return m_min_net_vega_ratio; }
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
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::qty_traded>() const { return m_qty_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::vega_traded>() const { return m_vega_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::wt_vega_traded>() const { return m_wt_vega_traded; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notices>() const { return m_num_notices; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_sr>() const { return m_num_notice_sr; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_amex>() const { return m_num_notice_amex; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_bats>() const { return m_num_notice_bats; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_box>() const { return m_num_notice_box; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_cboe>() const { return m_num_notice_cboe; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_c2>() const { return m_num_notice_c2; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_edgo>() const { return m_num_notice_edgo; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_emld>() const { return m_num_notice_emld; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_gmni>() const { return m_num_notice_gmni; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_ise>() const { return m_num_notice_ise; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_mcry>() const { return m_num_notice_mcry; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_memx>() const { return m_num_notice_memx; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_miax>() const { return m_num_notice_miax; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_mprl>() const { return m_num_notice_mprl; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_nyse>() const { return m_num_notice_nyse; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_nqbx>() const { return m_num_notice_nqbx; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_nsdq>() const { return m_num_notice_nsdq; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_phlx>() const { return m_num_notice_phlx; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_notice_sphr>() const { return m_num_notice_sphr; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::resp_disabled_skips>() const { return m_resp_disabled_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::stock_disabled_skips>() const { return m_stock_disabled_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::cp_flag_skips>() const { return m_cp_flag_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::expiry_range_skips>() const { return m_expiry_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::years_range_skips>() const { return m_years_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::listed_flex_skips>() const { return m_listed_flex_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::notice_price_skips>() const { return m_notice_price_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::agg_size_limit_skips>() const { return m_agg_size_limit_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::risk_group_limit_skips>() const { return m_risk_group_limit_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::root_skips>() const { return m_root_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::x_delta_range_skips>() const { return m_x_delta_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::strike_range_skips>() const { return m_strike_range_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::min_vega_ratio_skips>() const { return m_min_vega_ratio_skips; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_responses>() const { return m_num_responses; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_full_size>() const { return m_num_full_size; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_alloc_size>() const { return m_num_alloc_size; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_price_miss>() const { return m_num_price_miss; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_too_late>() const { return m_num_too_late; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_other_miss>() const { return m_num_other_miss; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::num_did_not_trade>() const { return m_num_did_not_trade; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::modified_by>() const { return m_modified_by; }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ResponderMarkupVegaDir::get<ResponderMarkupVegaDir::timestamp>() const { return m_timestamp; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::root>() const { return ResponderMarkupVegaDir_PKey::root{m_root}; }
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    template<> inline const auto ResponderMarkupVegaDir_PKey::get<ResponderMarkupVegaDir_PKey::responder_id>() const { return m_responder_id; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir_PKey& m) {
        o << "\"accnt\":\"" << m.get<ResponderMarkupVegaDir_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ResponderMarkupVegaDir_PKey::client_firm>() << "\"";
        o << ",\"root\":{" << m.get<ResponderMarkupVegaDir_PKey::root>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<ResponderMarkupVegaDir_PKey::resp_side>();
        o << ",\"responder_id\":" << m.get<ResponderMarkupVegaDir_PKey::responder_id>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupVegaDir& m) {
        o << "\"_meta\":{" << m.get<ResponderMarkupVegaDir::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ResponderMarkupVegaDir::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<ResponderMarkupVegaDir::user_name>() << "\"";
        o << ",\"is_disabled\":" << (int64_t)m.get<ResponderMarkupVegaDir::is_disabled>();
        {
            std::time_t tt = m.get<ResponderMarkupVegaDir::enabled_until>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"enabled_until\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"can_include_flex\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_include_flex>();
        o << ",\"can_include_stock\":" << (int64_t)m.get<ResponderMarkupVegaDir::can_include_stock>();
        o << ",\"cp_flag\":" << (int64_t)m.get<ResponderMarkupVegaDir::cp_flag>();
        o << ",\"min_net_vega_ratio\":" << m.get<ResponderMarkupVegaDir::min_net_vega_ratio>();
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
        o << ",\"qty_traded\":" << m.get<ResponderMarkupVegaDir::qty_traded>();
        o << ",\"vega_traded\":" << m.get<ResponderMarkupVegaDir::vega_traded>();
        o << ",\"wt_vega_traded\":" << m.get<ResponderMarkupVegaDir::wt_vega_traded>();
        o << ",\"num_notices\":" << m.get<ResponderMarkupVegaDir::num_notices>();
        o << ",\"num_notice_sr\":" << m.get<ResponderMarkupVegaDir::num_notice_sr>();
        o << ",\"num_notice_amex\":" << m.get<ResponderMarkupVegaDir::num_notice_amex>();
        o << ",\"num_notice_bats\":" << m.get<ResponderMarkupVegaDir::num_notice_bats>();
        o << ",\"num_notice_box\":" << m.get<ResponderMarkupVegaDir::num_notice_box>();
        o << ",\"num_notice_cboe\":" << m.get<ResponderMarkupVegaDir::num_notice_cboe>();
        o << ",\"num_notice_c2\":" << m.get<ResponderMarkupVegaDir::num_notice_c2>();
        o << ",\"num_notice_edgo\":" << m.get<ResponderMarkupVegaDir::num_notice_edgo>();
        o << ",\"num_notice_emld\":" << m.get<ResponderMarkupVegaDir::num_notice_emld>();
        o << ",\"num_notice_gmni\":" << m.get<ResponderMarkupVegaDir::num_notice_gmni>();
        o << ",\"num_notice_ise\":" << m.get<ResponderMarkupVegaDir::num_notice_ise>();
        o << ",\"num_notice_mcry\":" << m.get<ResponderMarkupVegaDir::num_notice_mcry>();
        o << ",\"num_notice_memx\":" << m.get<ResponderMarkupVegaDir::num_notice_memx>();
        o << ",\"num_notice_miax\":" << m.get<ResponderMarkupVegaDir::num_notice_miax>();
        o << ",\"num_notice_mprl\":" << m.get<ResponderMarkupVegaDir::num_notice_mprl>();
        o << ",\"num_notice_nyse\":" << m.get<ResponderMarkupVegaDir::num_notice_nyse>();
        o << ",\"num_notice_nqbx\":" << m.get<ResponderMarkupVegaDir::num_notice_nqbx>();
        o << ",\"num_notice_nsdq\":" << m.get<ResponderMarkupVegaDir::num_notice_nsdq>();
        o << ",\"num_notice_phlx\":" << m.get<ResponderMarkupVegaDir::num_notice_phlx>();
        o << ",\"num_notice_sphr\":" << m.get<ResponderMarkupVegaDir::num_notice_sphr>();
        o << ",\"resp_disabled_skips\":" << m.get<ResponderMarkupVegaDir::resp_disabled_skips>();
        o << ",\"stock_disabled_skips\":" << m.get<ResponderMarkupVegaDir::stock_disabled_skips>();
        o << ",\"cp_flag_skips\":" << m.get<ResponderMarkupVegaDir::cp_flag_skips>();
        o << ",\"expiry_range_skips\":" << m.get<ResponderMarkupVegaDir::expiry_range_skips>();
        o << ",\"years_range_skips\":" << m.get<ResponderMarkupVegaDir::years_range_skips>();
        o << ",\"listed_flex_skips\":" << m.get<ResponderMarkupVegaDir::listed_flex_skips>();
        o << ",\"notice_price_skips\":" << m.get<ResponderMarkupVegaDir::notice_price_skips>();
        o << ",\"agg_size_limit_skips\":" << m.get<ResponderMarkupVegaDir::agg_size_limit_skips>();
        o << ",\"risk_group_limit_skips\":" << m.get<ResponderMarkupVegaDir::risk_group_limit_skips>();
        o << ",\"root_skips\":" << m.get<ResponderMarkupVegaDir::root_skips>();
        o << ",\"x_delta_range_skips\":" << m.get<ResponderMarkupVegaDir::x_delta_range_skips>();
        o << ",\"strike_range_skips\":" << m.get<ResponderMarkupVegaDir::strike_range_skips>();
        o << ",\"min_vega_ratio_skips\":" << m.get<ResponderMarkupVegaDir::min_vega_ratio_skips>();
        o << ",\"num_responses\":" << m.get<ResponderMarkupVegaDir::num_responses>();
        o << ",\"num_full_size\":" << m.get<ResponderMarkupVegaDir::num_full_size>();
        o << ",\"num_alloc_size\":" << m.get<ResponderMarkupVegaDir::num_alloc_size>();
        o << ",\"num_price_miss\":" << m.get<ResponderMarkupVegaDir::num_price_miss>();
        o << ",\"num_too_late\":" << m.get<ResponderMarkupVegaDir::num_too_late>();
        o << ",\"num_other_miss\":" << m.get<ResponderMarkupVegaDir::num_other_miss>();
        o << ",\"num_did_not_trade\":" << m.get<ResponderMarkupVegaDir::num_did_not_trade>();
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