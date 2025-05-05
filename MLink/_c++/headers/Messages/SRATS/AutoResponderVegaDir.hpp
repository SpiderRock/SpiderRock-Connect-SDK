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

    #ifndef _can_respond_sr__GUARD__
    #define _can_respond_sr__GUARD__
    DECL_STRONG_TYPE(can_respond_sr, spiderrock::protobuf::api::YesNo);
    #endif//_can_respond_sr__GUARD__

    #ifndef _can_respond_exch__GUARD__
    #define _can_respond_exch__GUARD__
    DECL_STRONG_TYPE(can_respond_exch, spiderrock::protobuf::api::YesNo);
    #endif//_can_respond_exch__GUARD__

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

    #ifndef _min_probability__GUARD__
    #define _min_probability__GUARD__
    DECL_STRONG_TYPE(min_probability, float);
    #endif//_min_probability__GUARD__

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

    #ifndef _not_mkt_penny__GUARD__
    #define _not_mkt_penny__GUARD__
    DECL_STRONG_TYPE(not_mkt_penny, spiderrock::protobuf::api::YesNo);
    #endif//_not_mkt_penny__GUARD__

    #ifndef _mkt_penny1__GUARD__
    #define _mkt_penny1__GUARD__
    DECL_STRONG_TYPE(mkt_penny1, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_penny1__GUARD__

    #ifndef _mkt_penny2__GUARD__
    #define _mkt_penny2__GUARD__
    DECL_STRONG_TYPE(mkt_penny2, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_penny2__GUARD__

    #ifndef _mkt_penny3p__GUARD__
    #define _mkt_penny3p__GUARD__
    DECL_STRONG_TYPE(mkt_penny3p, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_penny3p__GUARD__

    #ifndef _not_mkt_nickle__GUARD__
    #define _not_mkt_nickle__GUARD__
    DECL_STRONG_TYPE(not_mkt_nickle, spiderrock::protobuf::api::YesNo);
    #endif//_not_mkt_nickle__GUARD__

    #ifndef _mkt_nickle1__GUARD__
    #define _mkt_nickle1__GUARD__
    DECL_STRONG_TYPE(mkt_nickle1, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_nickle1__GUARD__

    #ifndef _mkt_nickle2__GUARD__
    #define _mkt_nickle2__GUARD__
    DECL_STRONG_TYPE(mkt_nickle2, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_nickle2__GUARD__

    #ifndef _mkt_nickle3p__GUARD__
    #define _mkt_nickle3p__GUARD__
    DECL_STRONG_TYPE(mkt_nickle3p, spiderrock::protobuf::api::YesNo);
    #endif//_mkt_nickle3p__GUARD__

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

    #ifndef _inititor_cfirm__GUARD__
    #define _inititor_cfirm__GUARD__
    DECL_STRONG_TYPE(inititor_cfirm, string);
    #endif//_inititor_cfirm__GUARD__

    #ifndef _inititor_cfirm__GUARD__
    #define _inititor_cfirm__GUARD__
    DECL_STRONG_TYPE(inititor_cfirm, string);
    #endif//_inititor_cfirm__GUARD__

    
    class AutoResponderVegaDir_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const root & value) { set_root(value); }
        void set(const resp_side & value) { set_resp_side(value); }
        void set(const responder_id & value) { set_responder_id(value); }


        AutoResponderVegaDir_PKey() {}

        virtual ~AutoResponderVegaDir_PKey() {
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
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
            }
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(16,tickerKeyLayout_root);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeResponderId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(17,m_responder_id);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
            }
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 16, tickerKeyLayout_root);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeResponderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,17,m_responder_id);
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
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 16: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                    case 12: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 17: {m_responder_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AutoResponderVegaDir_CFirmExclFilter {
        public:
        //using statements for all types used in this class
        using inititor_cfirm = spiderrock::protobuf::api::inititor_cfirm;

        private:
        inititor_cfirm m_inititor_cfirm{};

        public:
        inititor_cfirm get_inititor_cfirm() const {
            return m_inititor_cfirm;
        }
        void set_inititor_cfirm(const inititor_cfirm& value)  {
            m_inititor_cfirm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir_CFirmExclFilter::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir_CFirmExclFilter::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const inititor_cfirm & value) { set_inititor_cfirm(value); }


        AutoResponderVegaDir_CFirmExclFilter() {}

        virtual ~AutoResponderVegaDir_CFirmExclFilter() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(147,m_inititor_cfirm);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,147,static_cast<string>(m_inititor_cfirm));
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
                    case 147: {m_inititor_cfirm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AutoResponderVegaDir_CFirmInclFilter {
        public:
        //using statements for all types used in this class
        using inititor_cfirm = spiderrock::protobuf::api::inititor_cfirm;

        private:
        inititor_cfirm m_inititor_cfirm{};

        public:
        inititor_cfirm get_inititor_cfirm() const {
            return m_inititor_cfirm;
        }
        void set_inititor_cfirm(const inititor_cfirm& value)  {
            m_inititor_cfirm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir_CFirmInclFilter::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir_CFirmInclFilter::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const inititor_cfirm & value) { set_inititor_cfirm(value); }


        AutoResponderVegaDir_CFirmInclFilter() {}

        virtual ~AutoResponderVegaDir_CFirmInclFilter() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_inititor_cfirm);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_inititor_cfirm));
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
                    case 145: {m_inititor_cfirm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class AutoResponderVegaDir {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AutoResponderVegaDir_PKey;
        using user_name = spiderrock::protobuf::api::user_name;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using enabled_until = spiderrock::protobuf::api::enabled_until;
        using can_include_flex = spiderrock::protobuf::api::can_include_flex;
        using can_include_stock = spiderrock::protobuf::api::can_include_stock;
        using can_respond_sr = spiderrock::protobuf::api::can_respond_sr;
        using can_respond_exch = spiderrock::protobuf::api::can_respond_exch;
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
        using min_probability = spiderrock::protobuf::api::min_probability;
        using inc_fees_in_resp = spiderrock::protobuf::api::inc_fees_in_resp;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using max_response_size = spiderrock::protobuf::api::max_response_size;
        using max_response_vega = spiderrock::protobuf::api::max_response_vega;
        using total_response_vega = spiderrock::protobuf::api::total_response_vega;
        using total_response_wt_vega = spiderrock::protobuf::api::total_response_wt_vega;
        using not_mkt_penny = spiderrock::protobuf::api::not_mkt_penny;
        using mkt_penny1 = spiderrock::protobuf::api::mkt_penny1;
        using mkt_penny2 = spiderrock::protobuf::api::mkt_penny2;
        using mkt_penny3p = spiderrock::protobuf::api::mkt_penny3p;
        using not_mkt_nickle = spiderrock::protobuf::api::not_mkt_nickle;
        using mkt_nickle1 = spiderrock::protobuf::api::mkt_nickle1;
        using mkt_nickle2 = spiderrock::protobuf::api::mkt_nickle2;
        using mkt_nickle3p = spiderrock::protobuf::api::mkt_nickle3p;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using hedge_session = spiderrock::protobuf::api::hedge_session;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using c_firm_excl_filter = spiderrock::protobuf::api::AutoResponderVegaDir_CFirmExclFilter;
        using c_firm_incl_filter = spiderrock::protobuf::api::AutoResponderVegaDir_CFirmInclFilter;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        is_disabled m_is_disabled{};
        enabled_until m_enabled_until{};
        can_include_flex m_can_include_flex{};
        can_include_stock m_can_include_stock{};
        can_respond_sr m_can_respond_sr{};
        can_respond_exch m_can_respond_exch{};
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
        min_probability m_min_probability{};
        inc_fees_in_resp m_inc_fees_in_resp{};
        round_rule m_round_rule{};
        max_response_size m_max_response_size{};
        max_response_vega m_max_response_vega{};
        total_response_vega m_total_response_vega{};
        total_response_wt_vega m_total_response_wt_vega{};
        not_mkt_penny m_not_mkt_penny{};
        mkt_penny1 m_mkt_penny1{};
        mkt_penny2 m_mkt_penny2{};
        mkt_penny3p m_mkt_penny3p{};
        not_mkt_nickle m_not_mkt_nickle{};
        mkt_nickle1 m_mkt_nickle1{};
        mkt_nickle2 m_mkt_nickle2{};
        mkt_nickle3p m_mkt_nickle3p{};
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        hedge_session m_hedge_session{};
        risk_group_id m_risk_group_id{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<c_firm_excl_filter> m_c_firm_excl_filter{};
        std::vector<c_firm_incl_filter> m_c_firm_incl_filter{};

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
        can_respond_sr get_can_respond_sr() const {
            return m_can_respond_sr;
        }		
        can_respond_exch get_can_respond_exch() const {
            return m_can_respond_exch;
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
        min_probability get_min_probability() const {
            return m_min_probability;
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
        not_mkt_penny get_not_mkt_penny() const {
            return m_not_mkt_penny;
        }		
        mkt_penny1 get_mkt_penny1() const {
            return m_mkt_penny1;
        }		
        mkt_penny2 get_mkt_penny2() const {
            return m_mkt_penny2;
        }		
        mkt_penny3p get_mkt_penny3p() const {
            return m_mkt_penny3p;
        }		
        not_mkt_nickle get_not_mkt_nickle() const {
            return m_not_mkt_nickle;
        }		
        mkt_nickle1 get_mkt_nickle1() const {
            return m_mkt_nickle1;
        }		
        mkt_nickle2 get_mkt_nickle2() const {
            return m_mkt_nickle2;
        }		
        mkt_nickle3p get_mkt_nickle3p() const {
            return m_mkt_nickle3p;
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
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<c_firm_excl_filter>& get_c_firm_excl_filter_list() const {
            return m_c_firm_excl_filter;
        }
        const c_firm_excl_filter& get_c_firm_excl_filter(const int i) const {
            return m_c_firm_excl_filter.at(i);
        }
        const std::vector<c_firm_incl_filter>& get_c_firm_incl_filter_list() const {
            return m_c_firm_incl_filter;
        }
        const c_firm_incl_filter& get_c_firm_incl_filter(const int i) const {
            return m_c_firm_incl_filter.at(i);
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
        void set_can_respond_sr(const can_respond_sr& value)  {
            m_can_respond_sr = value;
        }
        void set_can_respond_exch(const can_respond_exch& value)  {
            m_can_respond_exch = value;
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
        void set_min_probability(const min_probability& value)  {
            m_min_probability = value;
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
        void set_not_mkt_penny(const not_mkt_penny& value)  {
            m_not_mkt_penny = value;
        }
        void set_mkt_penny1(const mkt_penny1& value)  {
            m_mkt_penny1 = value;
        }
        void set_mkt_penny2(const mkt_penny2& value)  {
            m_mkt_penny2 = value;
        }
        void set_mkt_penny3p(const mkt_penny3p& value)  {
            m_mkt_penny3p = value;
        }
        void set_not_mkt_nickle(const not_mkt_nickle& value)  {
            m_not_mkt_nickle = value;
        }
        void set_mkt_nickle1(const mkt_nickle1& value)  {
            m_mkt_nickle1 = value;
        }
        void set_mkt_nickle2(const mkt_nickle2& value)  {
            m_mkt_nickle2 = value;
        }
        void set_mkt_nickle3p(const mkt_nickle3p& value)  {
            m_mkt_nickle3p = value;
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
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_c_firm_excl_filter_list(const std::vector<c_firm_excl_filter>& list)  {
            m_c_firm_excl_filter = list;
        }
        void add_c_firm_excl_filter(const c_firm_excl_filter& item) {
            m_c_firm_excl_filter.emplace_back(item);
        }
        void set_c_firm_incl_filter_list(const std::vector<c_firm_incl_filter>& list)  {
            m_c_firm_incl_filter = list;
        }
        void add_c_firm_incl_filter(const c_firm_incl_filter& item) {
            m_c_firm_incl_filter.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderVegaDir::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const can_respond_sr & value) {
            set_can_respond_sr(value);
        }
        void set(const can_respond_exch & value) {
            set_can_respond_exch(value);
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
        void set(const min_probability & value) {
            set_min_probability(value);
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
        void set(const not_mkt_penny & value) {
            set_not_mkt_penny(value);
        }
        void set(const mkt_penny1 & value) {
            set_mkt_penny1(value);
        }
        void set(const mkt_penny2 & value) {
            set_mkt_penny2(value);
        }
        void set(const mkt_penny3p & value) {
            set_mkt_penny3p(value);
        }
        void set(const not_mkt_nickle & value) {
            set_not_mkt_nickle(value);
        }
        void set(const mkt_nickle1 & value) {
            set_mkt_nickle1(value);
        }
        void set(const mkt_nickle2 & value) {
            set_mkt_nickle2(value);
        }
        void set(const mkt_nickle3p & value) {
            set_mkt_nickle3p(value);
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
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const c_firm_excl_filter & value) {
            add_c_firm_excl_filter(value);
        }
        void set(const c_firm_incl_filter & value) {
            add_c_firm_incl_filter(value);
        }

        void set(const AutoResponderVegaDir & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_user_name);
            set(value.m_is_disabled);
            set(value.m_enabled_until);
            set(value.m_can_include_flex);
            set(value.m_can_include_stock);
            set(value.m_can_respond_sr);
            set(value.m_can_respond_exch);
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
            set(value.m_min_probability);
            set(value.m_inc_fees_in_resp);
            set(value.m_round_rule);
            set(value.m_max_response_size);
            set(value.m_max_response_vega);
            set(value.m_total_response_vega);
            set(value.m_total_response_wt_vega);
            set(value.m_not_mkt_penny);
            set(value.m_mkt_penny1);
            set(value.m_mkt_penny2);
            set(value.m_mkt_penny3p);
            set(value.m_not_mkt_nickle);
            set(value.m_mkt_nickle1);
            set(value.m_mkt_nickle2);
            set(value.m_mkt_nickle3p);
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_hedge_session);
            set(value.m_risk_group_id);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_c_firm_excl_filter_list(value.m_c_firm_excl_filter);set_c_firm_incl_filter_list(value.m_c_firm_incl_filter);
        }

        AutoResponderVegaDir() {
            m__meta.set_message_type("AutoResponderVegaDir");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2495, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2495, length);
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
             *this = AutoResponderVegaDir{};
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
        bool IncludeMinProbability() const {
            return !(m_min_probability == 0.0);
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
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeCFirmExclFilter() const {
            return (!m_c_firm_excl_filter.empty());
        }
        bool IncludeCFirmInclFilter() const {
            return (!m_c_firm_incl_filter.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeEnabledUntil()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_enabled_until);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_sr)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinNetVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(137,m_min_net_vega_ratio);
            }
            if ( IncludeMinYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(138,m_min_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(140, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(141, m_max_expiry);
            }
            if ( IncludeMinXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_max_xdelta);
            }
            if ( IncludeMinStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(113,m_max_strike);
            }
            if ( IncludeMinSurfEdgePrem()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_min_surf_edge_prem);
            }
            if ( IncludeMinSurfEdgeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_min_surf_edge_vol);
            }
            if ( IncludeMinProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_min_probability);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(131,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(132,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeMaxResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(117,m_max_response_size);
            }
            if ( IncludeMaxResponseVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_max_response_vega);
            }
            if ( IncludeTotalResponseVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(134,m_total_response_vega);
            }
            if ( IncludeTotalResponseWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(135,m_total_response_wt_vega);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(149,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_penny)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(150,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(152,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny3p)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(153,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_nickle)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(155,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(156,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle3p)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(120,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(121, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(123,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(125,m_risk_group_id);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(128,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(129, m_timestamp);
            }
            if ( IncludeCFirmExclFilter()) {
                for (auto& item : m_c_firm_excl_filter) {
					totalSize += SRProtobufCPP::TagCodec::Size(146, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeCFirmInclFilter()) {
                for (auto& item : m_c_firm_incl_filter) {
					totalSize += SRProtobufCPP::TagCodec::Size(144, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeEnabledUntil()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_enabled_until);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_include_stock)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_sr)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_respond_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_cp_flag)));
            if ( IncludeMinNetVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,137,m_min_net_vega_ratio);
            }
            if ( IncludeMinYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,138,m_min_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 140, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 141, m_max_expiry);
            }
            if ( IncludeMinXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_max_xdelta);
            }
            if ( IncludeMinStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,113,m_max_strike);
            }
            if ( IncludeMinSurfEdgePrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_min_surf_edge_prem);
            }
            if ( IncludeMinSurfEdgeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_min_surf_edge_vol);
            }
            if ( IncludeMinProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_min_probability);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,131,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,132,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeMaxResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,117,m_max_response_size);
            }
            if ( IncludeMaxResponseVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_max_response_vega);
            }
            if ( IncludeTotalResponseVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,134,m_total_response_vega);
            }
            if ( IncludeTotalResponseWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,135,m_total_response_wt_vega);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,149,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_penny)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,150,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,152,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_penny3p)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,153,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_not_mkt_nickle)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,155,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,156,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_mkt_nickle3p)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,120,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 121, expiryKeyLayout_hedge_sec_key);
            }
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,123,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_hedge_session)));
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,125,m_risk_group_id);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,128,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 129, m_timestamp);
            }
            if ( IncludeCFirmExclFilter()) {
                for (auto& item : m_c_firm_excl_filter) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 146, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeCFirmInclFilter()) {
                for (auto& item : m_c_firm_incl_filter) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 144, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_enabled_until = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_include_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_include_stock = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_respond_sr = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 143: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_respond_exch = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 105: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cp_flag = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_net_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_min_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_edge_prem = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_edge_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 131: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_fees_in_resp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 132: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
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
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_response_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_response_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_response_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 149: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_not_mkt_penny = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 150: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_penny1 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_penny2 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 152: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_penny3p = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 153: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_not_mkt_nickle = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_nickle1 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 155: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_nickle2 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 156: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_nickle3p = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 119: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 120: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 128: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            c_firm_excl_filter item_c_firm_excl_filter;
                            item_c_firm_excl_filter.Decode(pos, pos+length);  
                            m_c_firm_excl_filter.emplace_back(item_c_firm_excl_filter);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            c_firm_incl_filter item_c_firm_incl_filter;
                            item_c_firm_incl_filter.Decode(pos, pos+length);  
                            m_c_firm_incl_filter.emplace_back(item_c_firm_incl_filter);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::_meta>() const { return AutoResponderVegaDir::_meta{ m__meta}; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::pkey>() const { return AutoResponderVegaDir::pkey{ m_pkey}; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::user_name>() const { return m_user_name; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::enabled_until>() const { return m_enabled_until; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::can_include_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_flex)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::can_include_stock>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_include_stock)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::can_respond_sr>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_respond_sr)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::can_respond_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_respond_exch)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::cp_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_cp_flag)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_net_vega_ratio>() const { return m_min_net_vega_ratio; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_years>() const { return m_min_years; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::max_years>() const { return m_max_years; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_expiry>() const { return m_min_expiry; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::max_expiry>() const { return m_max_expiry; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_xdelta>() const { return m_min_xdelta; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::max_xdelta>() const { return m_max_xdelta; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_strike>() const { return m_min_strike; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::max_strike>() const { return m_max_strike; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_surf_edge_prem>() const { return m_min_surf_edge_prem; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_surf_edge_vol>() const { return m_min_surf_edge_vol; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::min_probability>() const { return m_min_probability; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::inc_fees_in_resp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_fees_in_resp)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::max_response_size>() const { return m_max_response_size; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::max_response_vega>() const { return m_max_response_vega; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::total_response_vega>() const { return m_total_response_vega; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::total_response_wt_vega>() const { return m_total_response_wt_vega; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::not_mkt_penny>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_not_mkt_penny)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::mkt_penny1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_penny1)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::mkt_penny2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_penny2)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::mkt_penny3p>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_penny3p)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::not_mkt_nickle>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_not_mkt_nickle)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::mkt_nickle1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_nickle1)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::mkt_nickle2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_nickle2)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::mkt_nickle3p>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_mkt_nickle3p)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::hedge_sec_key>() const { return AutoResponderVegaDir::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::hedge_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_hedge_session)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::modified_by>() const { return m_modified_by; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::timestamp>() const { return m_timestamp; }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::c_firm_excl_filter>(int i) const { return AutoResponderVegaDir::c_firm_excl_filter{ get_c_firm_excl_filter(i)}; }
    template<> inline int AutoResponderVegaDir::count<AutoResponderVegaDir::c_firm_excl_filter>() const { return static_cast<int>( m_c_firm_excl_filter.size()); }
    template<> inline const auto AutoResponderVegaDir::get<AutoResponderVegaDir::c_firm_incl_filter>(int i) const { return AutoResponderVegaDir::c_firm_incl_filter{ get_c_firm_incl_filter(i)}; }
    template<> inline int AutoResponderVegaDir::count<AutoResponderVegaDir::c_firm_incl_filter>() const { return static_cast<int>( m_c_firm_incl_filter.size()); }
    template<> inline const auto AutoResponderVegaDir_PKey::get<AutoResponderVegaDir_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto AutoResponderVegaDir_PKey::get<AutoResponderVegaDir_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto AutoResponderVegaDir_PKey::get<AutoResponderVegaDir_PKey::root>() const { return AutoResponderVegaDir_PKey::root{m_root}; }
    template<> inline const auto AutoResponderVegaDir_PKey::get<AutoResponderVegaDir_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    template<> inline const auto AutoResponderVegaDir_PKey::get<AutoResponderVegaDir_PKey::responder_id>() const { return m_responder_id; }
    
    template<> inline const auto AutoResponderVegaDir_CFirmExclFilter::get<AutoResponderVegaDir_CFirmExclFilter::inititor_cfirm>() const { return m_inititor_cfirm; }
    
    template<> inline const auto AutoResponderVegaDir_CFirmInclFilter::get<AutoResponderVegaDir_CFirmInclFilter::inititor_cfirm>() const { return m_inititor_cfirm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AutoResponderVegaDir_PKey& m) {
        o << "\"accnt\":\"" << m.get<AutoResponderVegaDir_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<AutoResponderVegaDir_PKey::client_firm>() << "\"";
        o << ",\"root\":{" << m.get<AutoResponderVegaDir_PKey::root>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<AutoResponderVegaDir_PKey::resp_side>();
        o << ",\"responder_id\":" << m.get<AutoResponderVegaDir_PKey::responder_id>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AutoResponderVegaDir_CFirmExclFilter& m) {
        o << "\"inititor_cfirm\":\"" << m.get<AutoResponderVegaDir_CFirmExclFilter::inititor_cfirm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AutoResponderVegaDir_CFirmInclFilter& m) {
        o << "\"inititor_cfirm\":\"" << m.get<AutoResponderVegaDir_CFirmInclFilter::inititor_cfirm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AutoResponderVegaDir& m) {
        o << "\"_meta\":{" << m.get<AutoResponderVegaDir::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AutoResponderVegaDir::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<AutoResponderVegaDir::user_name>() << "\"";
        o << ",\"is_disabled\":" << (int64_t)m.get<AutoResponderVegaDir::is_disabled>();
        {
            std::time_t tt = m.get<AutoResponderVegaDir::enabled_until>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"enabled_until\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"can_include_flex\":" << (int64_t)m.get<AutoResponderVegaDir::can_include_flex>();
        o << ",\"can_include_stock\":" << (int64_t)m.get<AutoResponderVegaDir::can_include_stock>();
        o << ",\"can_respond_sr\":" << (int64_t)m.get<AutoResponderVegaDir::can_respond_sr>();
        o << ",\"can_respond_exch\":" << (int64_t)m.get<AutoResponderVegaDir::can_respond_exch>();
        o << ",\"cp_flag\":" << (int64_t)m.get<AutoResponderVegaDir::cp_flag>();
        o << ",\"min_net_vega_ratio\":" << m.get<AutoResponderVegaDir::min_net_vega_ratio>();
        o << ",\"min_years\":" << m.get<AutoResponderVegaDir::min_years>();
        o << ",\"max_years\":" << m.get<AutoResponderVegaDir::max_years>();
        {
            std::time_t tt = m.get<AutoResponderVegaDir::min_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"min_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<AutoResponderVegaDir::max_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"min_xdelta\":" << m.get<AutoResponderVegaDir::min_xdelta>();
        o << ",\"max_xdelta\":" << m.get<AutoResponderVegaDir::max_xdelta>();
        o << ",\"min_strike\":" << m.get<AutoResponderVegaDir::min_strike>();
        o << ",\"max_strike\":" << m.get<AutoResponderVegaDir::max_strike>();
        o << ",\"min_surf_edge_prem\":" << m.get<AutoResponderVegaDir::min_surf_edge_prem>();
        o << ",\"min_surf_edge_vol\":" << m.get<AutoResponderVegaDir::min_surf_edge_vol>();
        o << ",\"min_probability\":" << m.get<AutoResponderVegaDir::min_probability>();
        o << ",\"inc_fees_in_resp\":" << (int64_t)m.get<AutoResponderVegaDir::inc_fees_in_resp>();
        o << ",\"round_rule\":" << (int64_t)m.get<AutoResponderVegaDir::round_rule>();
        o << ",\"max_response_size\":" << m.get<AutoResponderVegaDir::max_response_size>();
        o << ",\"max_response_vega\":" << m.get<AutoResponderVegaDir::max_response_vega>();
        o << ",\"total_response_vega\":" << m.get<AutoResponderVegaDir::total_response_vega>();
        o << ",\"total_response_wt_vega\":" << m.get<AutoResponderVegaDir::total_response_wt_vega>();
        o << ",\"not_mkt_penny\":" << (int64_t)m.get<AutoResponderVegaDir::not_mkt_penny>();
        o << ",\"mkt_penny1\":" << (int64_t)m.get<AutoResponderVegaDir::mkt_penny1>();
        o << ",\"mkt_penny2\":" << (int64_t)m.get<AutoResponderVegaDir::mkt_penny2>();
        o << ",\"mkt_penny3p\":" << (int64_t)m.get<AutoResponderVegaDir::mkt_penny3p>();
        o << ",\"not_mkt_nickle\":" << (int64_t)m.get<AutoResponderVegaDir::not_mkt_nickle>();
        o << ",\"mkt_nickle1\":" << (int64_t)m.get<AutoResponderVegaDir::mkt_nickle1>();
        o << ",\"mkt_nickle2\":" << (int64_t)m.get<AutoResponderVegaDir::mkt_nickle2>();
        o << ",\"mkt_nickle3p\":" << (int64_t)m.get<AutoResponderVegaDir::mkt_nickle3p>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<AutoResponderVegaDir::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<AutoResponderVegaDir::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<AutoResponderVegaDir::hedge_sec_key>() << "}";
        o << ",\"hedge_beta_ratio\":" << m.get<AutoResponderVegaDir::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<AutoResponderVegaDir::hedge_scope>();
        o << ",\"hedge_session\":" << (int64_t)m.get<AutoResponderVegaDir::hedge_session>();
        o << ",\"risk_group_id\":" << m.get<AutoResponderVegaDir::risk_group_id>();
        o << ",\"modified_by\":\"" << m.get<AutoResponderVegaDir::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<AutoResponderVegaDir::modified_in>();
        {
            std::time_t tt = m.get<AutoResponderVegaDir::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"c_firm_excl_filter\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AutoResponderVegaDir::c_firm_excl_filter>(); ++i) {
                o << delim << m.get<AutoResponderVegaDir::c_firm_excl_filter>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"c_firm_incl_filter\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AutoResponderVegaDir::c_firm_incl_filter>(); ++i) {
                o << delim << m.get<AutoResponderVegaDir::c_firm_incl_filter>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}