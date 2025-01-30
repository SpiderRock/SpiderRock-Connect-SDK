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

    #ifndef _client_firm_status__GUARD__
    #define _client_firm_status__GUARD__
    DECL_STRONG_TYPE(client_firm_status, spiderrock::protobuf::api::ClientFirmStatus);
    #endif//_client_firm_status__GUARD__

    #ifndef _client_firm_status_dttm__GUARD__
    #define _client_firm_status_dttm__GUARD__
    DECL_STRONG_TYPE(client_firm_status_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_client_firm_status_dttm__GUARD__

    #ifndef _enabled_in__GUARD__
    #define _enabled_in__GUARD__
    DECL_STRONG_TYPE(enabled_in, spiderrock::protobuf::api::SysVersion);
    #endif//_enabled_in__GUARD__

    #ifndef _client_firm_type__GUARD__
    #define _client_firm_type__GUARD__
    DECL_STRONG_TYPE(client_firm_type, spiderrock::protobuf::api::ClientFirmType);
    #endif//_client_firm_type__GUARD__

    #ifndef _client_firm_name__GUARD__
    #define _client_firm_name__GUARD__
    DECL_STRONG_TYPE(client_firm_name, string);
    #endif//_client_firm_name__GUARD__

    #ifndef _client_firm_short_code__GUARD__
    #define _client_firm_short_code__GUARD__
    DECL_STRONG_TYPE(client_firm_short_code, string);
    #endif//_client_firm_short_code__GUARD__

    #ifndef _client_firm_relationship__GUARD__
    #define _client_firm_relationship__GUARD__
    DECL_STRONG_TYPE(client_firm_relationship, spiderrock::protobuf::api::ClientFirmRelationship);
    #endif//_client_firm_relationship__GUARD__

    #ifndef _rep_code_sr__GUARD__
    #define _rep_code_sr__GUARD__
    DECL_STRONG_TYPE(rep_code_sr, string);
    #endif//_rep_code_sr__GUARD__

    #ifndef _client_tag_pool__GUARD__
    #define _client_tag_pool__GUARD__
    DECL_STRONG_TYPE(client_tag_pool, string);
    #endif//_client_tag_pool__GUARD__

    #ifndef _billing_account__GUARD__
    #define _billing_account__GUARD__
    DECL_STRONG_TYPE(billing_account, string);
    #endif//_billing_account__GUARD__

    #ifndef _billing_schedule__GUARD__
    #define _billing_schedule__GUARD__
    DECL_STRONG_TYPE(billing_schedule, string);
    #endif//_billing_schedule__GUARD__

    #ifndef _billing_address1__GUARD__
    #define _billing_address1__GUARD__
    DECL_STRONG_TYPE(billing_address1, string);
    #endif//_billing_address1__GUARD__

    #ifndef _billing_address2__GUARD__
    #define _billing_address2__GUARD__
    DECL_STRONG_TYPE(billing_address2, string);
    #endif//_billing_address2__GUARD__

    #ifndef _billing_city__GUARD__
    #define _billing_city__GUARD__
    DECL_STRONG_TYPE(billing_city, string);
    #endif//_billing_city__GUARD__

    #ifndef _billing_state__GUARD__
    #define _billing_state__GUARD__
    DECL_STRONG_TYPE(billing_state, string);
    #endif//_billing_state__GUARD__

    #ifndef _billing_zip_code__GUARD__
    #define _billing_zip_code__GUARD__
    DECL_STRONG_TYPE(billing_zip_code, string);
    #endif//_billing_zip_code__GUARD__

    #ifndef _billing_country__GUARD__
    #define _billing_country__GUARD__
    DECL_STRONG_TYPE(billing_country, string);
    #endif//_billing_country__GUARD__

    #ifndef _billing_phone_number__GUARD__
    #define _billing_phone_number__GUARD__
    DECL_STRONG_TYPE(billing_phone_number, string);
    #endif//_billing_phone_number__GUARD__

    #ifndef _billing_email_address__GUARD__
    #define _billing_email_address__GUARD__
    DECL_STRONG_TYPE(billing_email_address, string);
    #endif//_billing_email_address__GUARD__

    #ifndef _report_address1__GUARD__
    #define _report_address1__GUARD__
    DECL_STRONG_TYPE(report_address1, string);
    #endif//_report_address1__GUARD__

    #ifndef _report_address2__GUARD__
    #define _report_address2__GUARD__
    DECL_STRONG_TYPE(report_address2, string);
    #endif//_report_address2__GUARD__

    #ifndef _report_city__GUARD__
    #define _report_city__GUARD__
    DECL_STRONG_TYPE(report_city, string);
    #endif//_report_city__GUARD__

    #ifndef _report_state__GUARD__
    #define _report_state__GUARD__
    DECL_STRONG_TYPE(report_state, string);
    #endif//_report_state__GUARD__

    #ifndef _report_zip_code__GUARD__
    #define _report_zip_code__GUARD__
    DECL_STRONG_TYPE(report_zip_code, string);
    #endif//_report_zip_code__GUARD__

    #ifndef _report_country__GUARD__
    #define _report_country__GUARD__
    DECL_STRONG_TYPE(report_country, string);
    #endif//_report_country__GUARD__

    #ifndef _report_phone_number__GUARD__
    #define _report_phone_number__GUARD__
    DECL_STRONG_TYPE(report_phone_number, string);
    #endif//_report_phone_number__GUARD__

    #ifndef _report_email_address__GUARD__
    #define _report_email_address__GUARD__
    DECL_STRONG_TYPE(report_email_address, string);
    #endif//_report_email_address__GUARD__

    #ifndef _core_client_firm__GUARD__
    #define _core_client_firm__GUARD__
    DECL_STRONG_TYPE(core_client_firm, string);
    #endif//_core_client_firm__GUARD__

    #ifndef _sponsor_client_firm__GUARD__
    #define _sponsor_client_firm__GUARD__
    DECL_STRONG_TYPE(sponsor_client_firm, string);
    #endif//_sponsor_client_firm__GUARD__

    #ifndef _can_have_trading_accnt__GUARD__
    #define _can_have_trading_accnt__GUARD__
    DECL_STRONG_TYPE(can_have_trading_accnt, spiderrock::protobuf::api::YesNo);
    #endif//_can_have_trading_accnt__GUARD__

    #ifndef _legal_entity_id__GUARD__
    #define _legal_entity_id__GUARD__
    DECL_STRONG_TYPE(legal_entity_id, string);
    #endif//_legal_entity_id__GUARD__

    #ifndef _sec_large_trader_id__GUARD__
    #define _sec_large_trader_id__GUARD__
    DECL_STRONG_TYPE(sec_large_trader_id, string);
    #endif//_sec_large_trader_id__GUARD__

    #ifndef _ltid_effective_date__GUARD__
    #define _ltid_effective_date__GUARD__
    DECL_STRONG_TYPE(ltid_effective_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_ltid_effective_date__GUARD__

    #ifndef _cat_cais_tid_type__GUARD__
    #define _cat_cais_tid_type__GUARD__
    DECL_STRONG_TYPE(cat_cais_tid_type, spiderrock::protobuf::api::CatCaisTidType);
    #endif//_cat_cais_tid_type__GUARD__

    #ifndef _cat_cais_tid_value__GUARD__
    #define _cat_cais_tid_value__GUARD__
    DECL_STRONG_TYPE(cat_cais_tid_value, string);
    #endif//_cat_cais_tid_value__GUARD__

    #ifndef _cat_cais_cust_type__GUARD__
    #define _cat_cais_cust_type__GUARD__
    DECL_STRONG_TYPE(cat_cais_cust_type, spiderrock::protobuf::api::CatCaisCustType);
    #endif//_cat_cais_cust_type__GUARD__

    #ifndef _sync_agg_groups__GUARD__
    #define _sync_agg_groups__GUARD__
    DECL_STRONG_TYPE(sync_agg_groups, string);
    #endif//_sync_agg_groups__GUARD__

    #ifndef _sync_threshold__GUARD__
    #define _sync_threshold__GUARD__
    DECL_STRONG_TYPE(sync_threshold, float);
    #endif//_sync_threshold__GUARD__

    #ifndef _view_gics__GUARD__
    #define _view_gics__GUARD__
    DECL_STRONG_TYPE(view_gics, spiderrock::protobuf::api::YesNo);
    #endif//_view_gics__GUARD__

    #ifndef _view_cusip__GUARD__
    #define _view_cusip__GUARD__
    DECL_STRONG_TYPE(view_cusip, spiderrock::protobuf::api::YesNo);
    #endif//_view_cusip__GUARD__

    #ifndef _restrict_locate_upload__GUARD__
    #define _restrict_locate_upload__GUARD__
    DECL_STRONG_TYPE(restrict_locate_upload, spiderrock::protobuf::api::YesNo);
    #endif//_restrict_locate_upload__GUARD__

    #ifndef _restrict_autohedge__GUARD__
    #define _restrict_autohedge__GUARD__
    DECL_STRONG_TYPE(restrict_autohedge, spiderrock::protobuf::api::YesNo);
    #endif//_restrict_autohedge__GUARD__

    #ifndef _cxl_risk_group_on_review_hedge_reject__GUARD__
    #define _cxl_risk_group_on_review_hedge_reject__GUARD__
    DECL_STRONG_TYPE(cxl_risk_group_on_review_hedge_reject, spiderrock::protobuf::api::YesNo);
    #endif//_cxl_risk_group_on_review_hedge_reject__GUARD__

    #ifndef _user_rate_source__GUARD__
    #define _user_rate_source__GUARD__
    DECL_STRONG_TYPE(user_rate_source, spiderrock::protobuf::api::RateSource);
    #endif//_user_rate_source__GUARD__

    #ifndef _enable_srse_product_snapshots__GUARD__
    #define _enable_srse_product_snapshots__GUARD__
    DECL_STRONG_TYPE(enable_srse_product_snapshots, spiderrock::protobuf::api::YesNo);
    #endif//_enable_srse_product_snapshots__GUARD__

    #ifndef _auth_type__GUARD__
    #define _auth_type__GUARD__
    DECL_STRONG_TYPE(auth_type, spiderrock::protobuf::api::AuthType);
    #endif//_auth_type__GUARD__

    #ifndef _auth_extern_name__GUARD__
    #define _auth_extern_name__GUARD__
    DECL_STRONG_TYPE(auth_extern_name, string);
    #endif//_auth_extern_name__GUARD__

    #ifndef _auth_extern_params__GUARD__
    #define _auth_extern_params__GUARD__
    DECL_STRONG_TYPE(auth_extern_params, string);
    #endif//_auth_extern_params__GUARD__

    #ifndef _pw_file_transfer__GUARD__
    #define _pw_file_transfer__GUARD__
    DECL_STRONG_TYPE(pw_file_transfer, string);
    #endif//_pw_file_transfer__GUARD__

    #ifndef _drop_all_parent_tags__GUARD__
    #define _drop_all_parent_tags__GUARD__
    DECL_STRONG_TYPE(drop_all_parent_tags, spiderrock::protobuf::api::YesNo);
    #endif//_drop_all_parent_tags__GUARD__

    #ifndef _enable_srse_prod__GUARD__
    #define _enable_srse_prod__GUARD__
    DECL_STRONG_TYPE(enable_srse_prod, spiderrock::protobuf::api::YesNo);
    #endif//_enable_srse_prod__GUARD__

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

    #ifndef _tool_product_acl__v7__GUARD__
    #define _tool_product_acl__v7__GUARD__
    DECL_STRONG_TYPE(tool_product_acl__v7, string);
    #endif//_tool_product_acl__v7__GUARD__

    #ifndef _elastic_product_acl__v7__GUARD__
    #define _elastic_product_acl__v7__GUARD__
    DECL_STRONG_TYPE(elastic_product_acl__v7, string);
    #endif//_elastic_product_acl__v7__GUARD__

    #ifndef _market_data_acl__v7__GUARD__
    #define _market_data_acl__v7__GUARD__
    DECL_STRONG_TYPE(market_data_acl__v7, string);
    #endif//_market_data_acl__v7__GUARD__

    #ifndef _gwt_product_acl__v7__GUARD__
    #define _gwt_product_acl__v7__GUARD__
    DECL_STRONG_TYPE(gwt_product_acl__v7, string);
    #endif//_gwt_product_acl__v7__GUARD__

    #ifndef _risk_server_code__v7__GUARD__
    #define _risk_server_code__v7__GUARD__
    DECL_STRONG_TYPE(risk_server_code__v7, spiderrock::protobuf::api::RiskServerCode_V7);
    #endif//_risk_server_code__v7__GUARD__

    #ifndef _drop_server_code__v7__GUARD__
    #define _drop_server_code__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code__v7__GUARD__

    #ifndef _drop_server_code2__v7__GUARD__
    #define _drop_server_code2__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code2__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code2__v7__GUARD__

    #ifndef _drop_server_code3__v7__GUARD__
    #define _drop_server_code3__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code3__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code3__v7__GUARD__

    #ifndef _drop_server_code4__v7__GUARD__
    #define _drop_server_code4__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code4__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code4__v7__GUARD__

    #ifndef _drop_server_code5__v7__GUARD__
    #define _drop_server_code5__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code5__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code5__v7__GUARD__

    #ifndef _drop_server_code6__v7__GUARD__
    #define _drop_server_code6__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code6__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code6__v7__GUARD__

    #ifndef _drop_server_code7__v7__GUARD__
    #define _drop_server_code7__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code7__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code7__v7__GUARD__

    #ifndef _drop_server_code8__v7__GUARD__
    #define _drop_server_code8__v7__GUARD__
    DECL_STRONG_TYPE(drop_server_code8__v7, spiderrock::protobuf::api::DropServerCode_V7);
    #endif//_drop_server_code8__v7__GUARD__

    #ifndef _privacy_rule__v7__GUARD__
    #define _privacy_rule__v7__GUARD__
    DECL_STRONG_TYPE(privacy_rule__v7, spiderrock::protobuf::api::PrivacyRule_V7);
    #endif//_privacy_rule__v7__GUARD__

    #ifndef _allowed_ingress__v7__GUARD__
    #define _allowed_ingress__v7__GUARD__
    DECL_STRONG_TYPE(allowed_ingress__v7, spiderrock::protobuf::api::AllowedIngress_V7);
    #endif//_allowed_ingress__v7__GUARD__

    #ifndef _restrict_ipsource__v7__GUARD__
    #define _restrict_ipsource__v7__GUARD__
    DECL_STRONG_TYPE(restrict_ipsource__v7, spiderrock::protobuf::api::YesNo);
    #endif//_restrict_ipsource__v7__GUARD__

    #ifndef _ip_access_mask__v7__GUARD__
    #define _ip_access_mask__v7__GUARD__
    DECL_STRONG_TYPE(ip_access_mask__v7, string);
    #endif//_ip_access_mask__v7__GUARD__

    #ifndef _two_phase_type__v7__GUARD__
    #define _two_phase_type__v7__GUARD__
    DECL_STRONG_TYPE(two_phase_type__v7, spiderrock::protobuf::api::TwoPhaseType_V7);
    #endif//_two_phase_type__v7__GUARD__

    #ifndef _change_on_init_logon__v7__GUARD__
    #define _change_on_init_logon__v7__GUARD__
    DECL_STRONG_TYPE(change_on_init_logon__v7, spiderrock::protobuf::api::YesNo);
    #endif//_change_on_init_logon__v7__GUARD__

    #ifndef _user_lockout__v7__GUARD__
    #define _user_lockout__v7__GUARD__
    DECL_STRONG_TYPE(user_lockout__v7, spiderrock::protobuf::api::YesNo);
    #endif//_user_lockout__v7__GUARD__

    #ifndef _enforce_history__v7__GUARD__
    #define _enforce_history__v7__GUARD__
    DECL_STRONG_TYPE(enforce_history__v7, spiderrock::protobuf::api::YesNo);
    #endif//_enforce_history__v7__GUARD__

    #ifndef _pw_age__v7__GUARD__
    #define _pw_age__v7__GUARD__
    DECL_STRONG_TYPE(pw_age__v7, int32);
    #endif//_pw_age__v7__GUARD__

    #ifndef _pw_length__v7__GUARD__
    #define _pw_length__v7__GUARD__
    DECL_STRONG_TYPE(pw_length__v7, int32);
    #endif//_pw_length__v7__GUARD__

    #ifndef _pw_history__v7__GUARD__
    #define _pw_history__v7__GUARD__
    DECL_STRONG_TYPE(pw_history__v7, int32);
    #endif//_pw_history__v7__GUARD__

    #ifndef _pw_complexity__v7__GUARD__
    #define _pw_complexity__v7__GUARD__
    DECL_STRONG_TYPE(pw_complexity__v7, spiderrock::protobuf::api::PwComplexity_V7);
    #endif//_pw_complexity__v7__GUARD__

    #ifndef _locate_req_firm__v7__GUARD__
    #define _locate_req_firm__v7__GUARD__
    DECL_STRONG_TYPE(locate_req_firm__v7, string);
    #endif//_locate_req_firm__v7__GUARD__

    #ifndef _locate_data_center__v7__GUARD__
    #define _locate_data_center__v7__GUARD__
    DECL_STRONG_TYPE(locate_data_center__v7, spiderrock::protobuf::api::SRDataCenter_V7);
    #endif//_locate_data_center__v7__GUARD__

    #ifndef _route_table__v7__GUARD__
    #define _route_table__v7__GUARD__
    DECL_STRONG_TYPE(route_table__v7, string);
    #endif//_route_table__v7__GUARD__

    #ifndef _user_ticker_src__v7__GUARD__
    #define _user_ticker_src__v7__GUARD__
    DECL_STRONG_TYPE(user_ticker_src__v7, spiderrock::protobuf::api::TickerSrc_V7);
    #endif//_user_ticker_src__v7__GUARD__

    #ifndef _user_name__v7__GUARD__
    #define _user_name__v7__GUARD__
    DECL_STRONG_TYPE(user_name__v7, string);
    #endif//_user_name__v7__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _is_comm_party__GUARD__
    #define _is_comm_party__GUARD__
    DECL_STRONG_TYPE(is_comm_party, spiderrock::protobuf::api::YesNo);
    #endif//_is_comm_party__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

    #ifndef _token__RawDataToken__GUARD__
    #define _token__RawDataToken__GUARD__
    DECL_STRONG_TYPE(token__RawDataToken, spiderrock::protobuf::api::RawDataToken);
    #endif//_token__RawDataToken__GUARD__

    #ifndef _scope__RawDataScope__GUARD__
    #define _scope__RawDataScope__GUARD__
    DECL_STRONG_TYPE(scope__RawDataScope, spiderrock::protobuf::api::RawDataScope);
    #endif//_scope__RawDataScope__GUARD__

    #ifndef _ip_v4_range__GUARD__
    #define _ip_v4_range__GUARD__
    DECL_STRONG_TYPE(ip_v4_range, string);
    #endif//_ip_v4_range__GUARD__

    #ifndef _ip_v6_range__GUARD__
    #define _ip_v6_range__GUARD__
    DECL_STRONG_TYPE(ip_v6_range, string);
    #endif//_ip_v6_range__GUARD__

    
    class ClientFirmConfig_PKey {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        client_firm m_client_firm{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }


        ClientFirmConfig_PKey() {}

        virtual ~ClientFirmConfig_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_client_firm));
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
                    case 10: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class ClientFirmConfig_DirectedCounterParty {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;
        using is_comm_party = spiderrock::protobuf::api::is_comm_party;

        private:
        client_firm m_client_firm{};
        is_comm_party m_is_comm_party{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        is_comm_party get_is_comm_party() const {
            return m_is_comm_party;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_is_comm_party(const is_comm_party& value)  {
            m_is_comm_party = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_DirectedCounterParty::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_DirectedCounterParty::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const is_comm_party & value) { set_is_comm_party(value); }


        ClientFirmConfig_DirectedCounterParty() {}

        virtual ~ClientFirmConfig_DirectedCounterParty() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(247,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_party)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,247,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_party)));
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
                    case 247: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 250: {m_is_comm_party = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class ClientFirmConfig_ExcludeCounterParty {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        client_firm m_client_firm{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_ExcludeCounterParty::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_ExcludeCounterParty::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }


        ClientFirmConfig_ExcludeCounterParty() {}

        virtual ~ClientFirmConfig_ExcludeCounterParty() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(287,m_client_firm);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,287,static_cast<string>(m_client_firm));
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
                    case 287: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class ClientFirmConfig_LocatePool {
        public:
        //using statements for all types used in this class
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;

        private:
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};

        public:
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }
        locate_pool get_locate_pool() const {
            return m_locate_pool;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_LocatePool::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_LocatePool::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const locate_firm & value) { set_locate_firm(value); }
        void set(const locate_pool & value) { set_locate_pool(value); }


        ClientFirmConfig_LocatePool() {}

        virtual ~ClientFirmConfig_LocatePool() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_locate_firm);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_locate_pool);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_locate_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_locate_pool));
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
                    case 223: {m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 226: {m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class ClientFirmConfig_RawDataBilling {
        public:
        //using statements for all types used in this class
        using token = spiderrock::protobuf::api::token__RawDataToken;
        using scope = spiderrock::protobuf::api::scope__RawDataScope;

        private:
        token m_token{};
        scope m_scope{};

        public:
        token get_token() const {
            return m_token;
        }
        scope get_scope() const {
            return m_scope;
        }
        void set_token(const token& value)  {
            m_token = value;
        }
        void set_scope(const scope& value)  {
            m_scope = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_RawDataBilling::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_RawDataBilling::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const scope & value) { set_scope(value); }


        ClientFirmConfig_RawDataBilling() {}

        virtual ~ClientFirmConfig_RawDataBilling() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RawDataToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RawDataScope>(m_scope)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RawDataToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RawDataScope>(m_scope)));
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
                    case 256: {m_token = static_cast<spiderrock::protobuf::api::RawDataToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 259: {m_scope = static_cast<spiderrock::protobuf::api::RawDataScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class ClientFirmConfig_SourceIP {
        public:
        //using statements for all types used in this class
        using ip_v4_range = spiderrock::protobuf::api::ip_v4_range;
        using ip_v6_range = spiderrock::protobuf::api::ip_v6_range;

        private:
        ip_v4_range m_ip_v4_range{};
        ip_v6_range m_ip_v6_range{};

        public:
        ip_v4_range get_ip_v4_range() const {
            return m_ip_v4_range;
        }
        ip_v6_range get_ip_v6_range() const {
            return m_ip_v6_range;
        }
        void set_ip_v4_range(const ip_v4_range& value)  {
            m_ip_v4_range = value;
        }
        void set_ip_v6_range(const ip_v6_range& value)  {
            m_ip_v6_range = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_SourceIP::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig_SourceIP::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ip_v4_range & value) { set_ip_v4_range(value); }
        void set(const ip_v6_range & value) { set_ip_v6_range(value); }


        ClientFirmConfig_SourceIP() {}

        virtual ~ClientFirmConfig_SourceIP() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(265,m_ip_v4_range);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(268,m_ip_v6_range);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,265,static_cast<string>(m_ip_v4_range));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,268,static_cast<string>(m_ip_v6_range));
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
                    case 265: {m_ip_v4_range = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 268: {m_ip_v6_range = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ClientFirmConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ClientFirmConfig_PKey;
        using client_firm_status = spiderrock::protobuf::api::client_firm_status;
        using client_firm_status_dttm = spiderrock::protobuf::api::client_firm_status_dttm;
        using enabled_in = spiderrock::protobuf::api::enabled_in;
        using client_firm_type = spiderrock::protobuf::api::client_firm_type;
        using client_firm_name = spiderrock::protobuf::api::client_firm_name;
        using client_firm_short_code = spiderrock::protobuf::api::client_firm_short_code;
        using client_firm_relationship = spiderrock::protobuf::api::client_firm_relationship;
        using rep_code_sr = spiderrock::protobuf::api::rep_code_sr;
        using client_tag_pool = spiderrock::protobuf::api::client_tag_pool;
        using billing_account = spiderrock::protobuf::api::billing_account;
        using billing_schedule = spiderrock::protobuf::api::billing_schedule;
        using billing_address1 = spiderrock::protobuf::api::billing_address1;
        using billing_address2 = spiderrock::protobuf::api::billing_address2;
        using billing_city = spiderrock::protobuf::api::billing_city;
        using billing_state = spiderrock::protobuf::api::billing_state;
        using billing_zip_code = spiderrock::protobuf::api::billing_zip_code;
        using billing_country = spiderrock::protobuf::api::billing_country;
        using billing_phone_number = spiderrock::protobuf::api::billing_phone_number;
        using billing_email_address = spiderrock::protobuf::api::billing_email_address;
        using report_address1 = spiderrock::protobuf::api::report_address1;
        using report_address2 = spiderrock::protobuf::api::report_address2;
        using report_city = spiderrock::protobuf::api::report_city;
        using report_state = spiderrock::protobuf::api::report_state;
        using report_zip_code = spiderrock::protobuf::api::report_zip_code;
        using report_country = spiderrock::protobuf::api::report_country;
        using report_phone_number = spiderrock::protobuf::api::report_phone_number;
        using report_email_address = spiderrock::protobuf::api::report_email_address;
        using core_client_firm = spiderrock::protobuf::api::core_client_firm;
        using sponsor_client_firm = spiderrock::protobuf::api::sponsor_client_firm;
        using can_have_trading_accnt = spiderrock::protobuf::api::can_have_trading_accnt;
        using legal_entity_id = spiderrock::protobuf::api::legal_entity_id;
        using sec_large_trader_id = spiderrock::protobuf::api::sec_large_trader_id;
        using ltid_effective_date = spiderrock::protobuf::api::ltid_effective_date;
        using cat_cais_tid_type = spiderrock::protobuf::api::cat_cais_tid_type;
        using cat_cais_tid_value = spiderrock::protobuf::api::cat_cais_tid_value;
        using cat_cais_cust_type = spiderrock::protobuf::api::cat_cais_cust_type;
        using sync_agg_groups = spiderrock::protobuf::api::sync_agg_groups;
        using sync_threshold = spiderrock::protobuf::api::sync_threshold;
        using view_gics = spiderrock::protobuf::api::view_gics;
        using view_cusip = spiderrock::protobuf::api::view_cusip;
        using restrict_locate_upload = spiderrock::protobuf::api::restrict_locate_upload;
        using restrict_autohedge = spiderrock::protobuf::api::restrict_autohedge;
        using cxl_risk_group_on_review_hedge_reject = spiderrock::protobuf::api::cxl_risk_group_on_review_hedge_reject;
        using user_rate_source = spiderrock::protobuf::api::user_rate_source;
        using enable_srse_product_snapshots = spiderrock::protobuf::api::enable_srse_product_snapshots;
        using auth_type = spiderrock::protobuf::api::auth_type;
        using auth_extern_name = spiderrock::protobuf::api::auth_extern_name;
        using auth_extern_params = spiderrock::protobuf::api::auth_extern_params;
        using pw_file_transfer = spiderrock::protobuf::api::pw_file_transfer;
        using drop_all_parent_tags = spiderrock::protobuf::api::drop_all_parent_tags;
        using enable_srse_prod = spiderrock::protobuf::api::enable_srse_prod;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using tool_product_acl__v7 = spiderrock::protobuf::api::tool_product_acl__v7;
        using elastic_product_acl__v7 = spiderrock::protobuf::api::elastic_product_acl__v7;
        using market_data_acl__v7 = spiderrock::protobuf::api::market_data_acl__v7;
        using gwt_product_acl__v7 = spiderrock::protobuf::api::gwt_product_acl__v7;
        using risk_server_code__v7 = spiderrock::protobuf::api::risk_server_code__v7;
        using drop_server_code__v7 = spiderrock::protobuf::api::drop_server_code__v7;
        using drop_server_code2__v7 = spiderrock::protobuf::api::drop_server_code2__v7;
        using drop_server_code3__v7 = spiderrock::protobuf::api::drop_server_code3__v7;
        using drop_server_code4__v7 = spiderrock::protobuf::api::drop_server_code4__v7;
        using drop_server_code5__v7 = spiderrock::protobuf::api::drop_server_code5__v7;
        using drop_server_code6__v7 = spiderrock::protobuf::api::drop_server_code6__v7;
        using drop_server_code7__v7 = spiderrock::protobuf::api::drop_server_code7__v7;
        using drop_server_code8__v7 = spiderrock::protobuf::api::drop_server_code8__v7;
        using privacy_rule__v7 = spiderrock::protobuf::api::privacy_rule__v7;
        using allowed_ingress__v7 = spiderrock::protobuf::api::allowed_ingress__v7;
        using restrict_ipsource__v7 = spiderrock::protobuf::api::restrict_ipsource__v7;
        using ip_access_mask__v7 = spiderrock::protobuf::api::ip_access_mask__v7;
        using two_phase_type__v7 = spiderrock::protobuf::api::two_phase_type__v7;
        using change_on_init_logon__v7 = spiderrock::protobuf::api::change_on_init_logon__v7;
        using user_lockout__v7 = spiderrock::protobuf::api::user_lockout__v7;
        using enforce_history__v7 = spiderrock::protobuf::api::enforce_history__v7;
        using pw_age__v7 = spiderrock::protobuf::api::pw_age__v7;
        using pw_length__v7 = spiderrock::protobuf::api::pw_length__v7;
        using pw_history__v7 = spiderrock::protobuf::api::pw_history__v7;
        using pw_complexity__v7 = spiderrock::protobuf::api::pw_complexity__v7;
        using locate_req_firm__v7 = spiderrock::protobuf::api::locate_req_firm__v7;
        using locate_data_center__v7 = spiderrock::protobuf::api::locate_data_center__v7;
        using route_table__v7 = spiderrock::protobuf::api::route_table__v7;
        using user_ticker_src__v7 = spiderrock::protobuf::api::user_ticker_src__v7;
        using user_name__v7 = spiderrock::protobuf::api::user_name__v7;
        using directed_counter_party = spiderrock::protobuf::api::ClientFirmConfig_DirectedCounterParty;
        using exclude_counter_party = spiderrock::protobuf::api::ClientFirmConfig_ExcludeCounterParty;
        using locate_pool = spiderrock::protobuf::api::ClientFirmConfig_LocatePool;
        using raw_data_billing = spiderrock::protobuf::api::ClientFirmConfig_RawDataBilling;
        using source_i_p = spiderrock::protobuf::api::ClientFirmConfig_SourceIP;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        client_firm_status m_client_firm_status{};
        client_firm_status_dttm m_client_firm_status_dttm{};
        enabled_in m_enabled_in{};
        client_firm_type m_client_firm_type{};
        client_firm_name m_client_firm_name{};
        client_firm_short_code m_client_firm_short_code{};
        client_firm_relationship m_client_firm_relationship{};
        rep_code_sr m_rep_code_sr{};
        client_tag_pool m_client_tag_pool{};
        billing_account m_billing_account{};
        billing_schedule m_billing_schedule{};
        billing_address1 m_billing_address1{};
        billing_address2 m_billing_address2{};
        billing_city m_billing_city{};
        billing_state m_billing_state{};
        billing_zip_code m_billing_zip_code{};
        billing_country m_billing_country{};
        billing_phone_number m_billing_phone_number{};
        billing_email_address m_billing_email_address{};
        report_address1 m_report_address1{};
        report_address2 m_report_address2{};
        report_city m_report_city{};
        report_state m_report_state{};
        report_zip_code m_report_zip_code{};
        report_country m_report_country{};
        report_phone_number m_report_phone_number{};
        report_email_address m_report_email_address{};
        core_client_firm m_core_client_firm{};
        sponsor_client_firm m_sponsor_client_firm{};
        can_have_trading_accnt m_can_have_trading_accnt{};
        legal_entity_id m_legal_entity_id{};
        sec_large_trader_id m_sec_large_trader_id{};
        ltid_effective_date m_ltid_effective_date{};
        cat_cais_tid_type m_cat_cais_tid_type{};
        cat_cais_tid_value m_cat_cais_tid_value{};
        cat_cais_cust_type m_cat_cais_cust_type{};
        sync_agg_groups m_sync_agg_groups{};
        sync_threshold m_sync_threshold{};
        view_gics m_view_gics{};
        view_cusip m_view_cusip{};
        restrict_locate_upload m_restrict_locate_upload{};
        restrict_autohedge m_restrict_autohedge{};
        cxl_risk_group_on_review_hedge_reject m_cxl_risk_group_on_review_hedge_reject{};
        user_rate_source m_user_rate_source{};
        enable_srse_product_snapshots m_enable_srse_product_snapshots{};
        auth_type m_auth_type{};
        auth_extern_name m_auth_extern_name{};
        auth_extern_params m_auth_extern_params{};
        pw_file_transfer m_pw_file_transfer{};
        drop_all_parent_tags m_drop_all_parent_tags{};
        enable_srse_prod m_enable_srse_prod{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        tool_product_acl__v7 m_tool_product_acl__v7{};
        elastic_product_acl__v7 m_elastic_product_acl__v7{};
        market_data_acl__v7 m_market_data_acl__v7{};
        gwt_product_acl__v7 m_gwt_product_acl__v7{};
        risk_server_code__v7 m_risk_server_code__v7{};
        drop_server_code__v7 m_drop_server_code__v7{};
        drop_server_code2__v7 m_drop_server_code2__v7{};
        drop_server_code3__v7 m_drop_server_code3__v7{};
        drop_server_code4__v7 m_drop_server_code4__v7{};
        drop_server_code5__v7 m_drop_server_code5__v7{};
        drop_server_code6__v7 m_drop_server_code6__v7{};
        drop_server_code7__v7 m_drop_server_code7__v7{};
        drop_server_code8__v7 m_drop_server_code8__v7{};
        privacy_rule__v7 m_privacy_rule__v7{};
        allowed_ingress__v7 m_allowed_ingress__v7{};
        restrict_ipsource__v7 m_restrict_ipsource__v7{};
        ip_access_mask__v7 m_ip_access_mask__v7{};
        two_phase_type__v7 m_two_phase_type__v7{};
        change_on_init_logon__v7 m_change_on_init_logon__v7{};
        user_lockout__v7 m_user_lockout__v7{};
        enforce_history__v7 m_enforce_history__v7{};
        pw_age__v7 m_pw_age__v7{};
        pw_length__v7 m_pw_length__v7{};
        pw_history__v7 m_pw_history__v7{};
        pw_complexity__v7 m_pw_complexity__v7{};
        locate_req_firm__v7 m_locate_req_firm__v7{};
        locate_data_center__v7 m_locate_data_center__v7{};
        route_table__v7 m_route_table__v7{};
        user_ticker_src__v7 m_user_ticker_src__v7{};
        user_name__v7 m_user_name__v7{};
        std::vector<directed_counter_party> m_directed_counter_party{};
        std::vector<exclude_counter_party> m_exclude_counter_party{};
        std::vector<locate_pool> m_locate_pool{};
        std::vector<raw_data_billing> m_raw_data_billing{};
        std::vector<source_i_p> m_source_i_p{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        client_firm_status get_client_firm_status() const {
            return m_client_firm_status;
        }		
        client_firm_status_dttm get_client_firm_status_dttm() const {
            return m_client_firm_status_dttm;
        }		
        enabled_in get_enabled_in() const {
            return m_enabled_in;
        }		
        client_firm_type get_client_firm_type() const {
            return m_client_firm_type;
        }		
        client_firm_name get_client_firm_name() const {
            return m_client_firm_name;
        }		
        client_firm_short_code get_client_firm_short_code() const {
            return m_client_firm_short_code;
        }		
        client_firm_relationship get_client_firm_relationship() const {
            return m_client_firm_relationship;
        }		
        rep_code_sr get_rep_code_sr() const {
            return m_rep_code_sr;
        }		
        client_tag_pool get_client_tag_pool() const {
            return m_client_tag_pool;
        }		
        billing_account get_billing_account() const {
            return m_billing_account;
        }		
        billing_schedule get_billing_schedule() const {
            return m_billing_schedule;
        }		
        billing_address1 get_billing_address1() const {
            return m_billing_address1;
        }		
        billing_address2 get_billing_address2() const {
            return m_billing_address2;
        }		
        billing_city get_billing_city() const {
            return m_billing_city;
        }		
        billing_state get_billing_state() const {
            return m_billing_state;
        }		
        billing_zip_code get_billing_zip_code() const {
            return m_billing_zip_code;
        }		
        billing_country get_billing_country() const {
            return m_billing_country;
        }		
        billing_phone_number get_billing_phone_number() const {
            return m_billing_phone_number;
        }		
        billing_email_address get_billing_email_address() const {
            return m_billing_email_address;
        }		
        report_address1 get_report_address1() const {
            return m_report_address1;
        }		
        report_address2 get_report_address2() const {
            return m_report_address2;
        }		
        report_city get_report_city() const {
            return m_report_city;
        }		
        report_state get_report_state() const {
            return m_report_state;
        }		
        report_zip_code get_report_zip_code() const {
            return m_report_zip_code;
        }		
        report_country get_report_country() const {
            return m_report_country;
        }		
        report_phone_number get_report_phone_number() const {
            return m_report_phone_number;
        }		
        report_email_address get_report_email_address() const {
            return m_report_email_address;
        }		
        core_client_firm get_core_client_firm() const {
            return m_core_client_firm;
        }		
        sponsor_client_firm get_sponsor_client_firm() const {
            return m_sponsor_client_firm;
        }		
        can_have_trading_accnt get_can_have_trading_accnt() const {
            return m_can_have_trading_accnt;
        }		
        legal_entity_id get_legal_entity_id() const {
            return m_legal_entity_id;
        }		
        sec_large_trader_id get_sec_large_trader_id() const {
            return m_sec_large_trader_id;
        }		
        ltid_effective_date get_ltid_effective_date() const {
            return m_ltid_effective_date;
        }		
        cat_cais_tid_type get_cat_cais_tid_type() const {
            return m_cat_cais_tid_type;
        }		
        cat_cais_tid_value get_cat_cais_tid_value() const {
            return m_cat_cais_tid_value;
        }		
        cat_cais_cust_type get_cat_cais_cust_type() const {
            return m_cat_cais_cust_type;
        }		
        sync_agg_groups get_sync_agg_groups() const {
            return m_sync_agg_groups;
        }		
        sync_threshold get_sync_threshold() const {
            return m_sync_threshold;
        }		
        view_gics get_view_gics() const {
            return m_view_gics;
        }		
        view_cusip get_view_cusip() const {
            return m_view_cusip;
        }		
        restrict_locate_upload get_restrict_locate_upload() const {
            return m_restrict_locate_upload;
        }		
        restrict_autohedge get_restrict_autohedge() const {
            return m_restrict_autohedge;
        }		
        cxl_risk_group_on_review_hedge_reject get_cxl_risk_group_on_review_hedge_reject() const {
            return m_cxl_risk_group_on_review_hedge_reject;
        }		
        user_rate_source get_user_rate_source() const {
            return m_user_rate_source;
        }		
        enable_srse_product_snapshots get_enable_srse_product_snapshots() const {
            return m_enable_srse_product_snapshots;
        }		
        auth_type get_auth_type() const {
            return m_auth_type;
        }		
        auth_extern_name get_auth_extern_name() const {
            return m_auth_extern_name;
        }		
        auth_extern_params get_auth_extern_params() const {
            return m_auth_extern_params;
        }		
        pw_file_transfer get_pw_file_transfer() const {
            return m_pw_file_transfer;
        }		
        drop_all_parent_tags get_drop_all_parent_tags() const {
            return m_drop_all_parent_tags;
        }		
        enable_srse_prod get_enable_srse_prod() const {
            return m_enable_srse_prod;
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
        tool_product_acl__v7 get_tool_product_acl__v7() const {
            return m_tool_product_acl__v7;
        }		
        elastic_product_acl__v7 get_elastic_product_acl__v7() const {
            return m_elastic_product_acl__v7;
        }		
        market_data_acl__v7 get_market_data_acl__v7() const {
            return m_market_data_acl__v7;
        }		
        gwt_product_acl__v7 get_gwt_product_acl__v7() const {
            return m_gwt_product_acl__v7;
        }		
        risk_server_code__v7 get_risk_server_code__v7() const {
            return m_risk_server_code__v7;
        }		
        drop_server_code__v7 get_drop_server_code__v7() const {
            return m_drop_server_code__v7;
        }		
        drop_server_code2__v7 get_drop_server_code2__v7() const {
            return m_drop_server_code2__v7;
        }		
        drop_server_code3__v7 get_drop_server_code3__v7() const {
            return m_drop_server_code3__v7;
        }		
        drop_server_code4__v7 get_drop_server_code4__v7() const {
            return m_drop_server_code4__v7;
        }		
        drop_server_code5__v7 get_drop_server_code5__v7() const {
            return m_drop_server_code5__v7;
        }		
        drop_server_code6__v7 get_drop_server_code6__v7() const {
            return m_drop_server_code6__v7;
        }		
        drop_server_code7__v7 get_drop_server_code7__v7() const {
            return m_drop_server_code7__v7;
        }		
        drop_server_code8__v7 get_drop_server_code8__v7() const {
            return m_drop_server_code8__v7;
        }		
        privacy_rule__v7 get_privacy_rule__v7() const {
            return m_privacy_rule__v7;
        }		
        allowed_ingress__v7 get_allowed_ingress__v7() const {
            return m_allowed_ingress__v7;
        }		
        restrict_ipsource__v7 get_restrict_ipsource__v7() const {
            return m_restrict_ipsource__v7;
        }		
        ip_access_mask__v7 get_ip_access_mask__v7() const {
            return m_ip_access_mask__v7;
        }		
        two_phase_type__v7 get_two_phase_type__v7() const {
            return m_two_phase_type__v7;
        }		
        change_on_init_logon__v7 get_change_on_init_logon__v7() const {
            return m_change_on_init_logon__v7;
        }		
        user_lockout__v7 get_user_lockout__v7() const {
            return m_user_lockout__v7;
        }		
        enforce_history__v7 get_enforce_history__v7() const {
            return m_enforce_history__v7;
        }		
        pw_age__v7 get_pw_age__v7() const {
            return m_pw_age__v7;
        }		
        pw_length__v7 get_pw_length__v7() const {
            return m_pw_length__v7;
        }		
        pw_history__v7 get_pw_history__v7() const {
            return m_pw_history__v7;
        }		
        pw_complexity__v7 get_pw_complexity__v7() const {
            return m_pw_complexity__v7;
        }		
        locate_req_firm__v7 get_locate_req_firm__v7() const {
            return m_locate_req_firm__v7;
        }		
        locate_data_center__v7 get_locate_data_center__v7() const {
            return m_locate_data_center__v7;
        }		
        route_table__v7 get_route_table__v7() const {
            return m_route_table__v7;
        }		
        user_ticker_src__v7 get_user_ticker_src__v7() const {
            return m_user_ticker_src__v7;
        }		
        user_name__v7 get_user_name__v7() const {
            return m_user_name__v7;
        }
        const std::vector<directed_counter_party>& get_directed_counter_party_list() const {
            return m_directed_counter_party;
        }
        const directed_counter_party& get_directed_counter_party(const int i) const {
            return m_directed_counter_party.at(i);
        }
        const std::vector<exclude_counter_party>& get_exclude_counter_party_list() const {
            return m_exclude_counter_party;
        }
        const exclude_counter_party& get_exclude_counter_party(const int i) const {
            return m_exclude_counter_party.at(i);
        }
        const std::vector<locate_pool>& get_locate_pool_list() const {
            return m_locate_pool;
        }
        const locate_pool& get_locate_pool(const int i) const {
            return m_locate_pool.at(i);
        }
        const std::vector<raw_data_billing>& get_raw_data_billing_list() const {
            return m_raw_data_billing;
        }
        const raw_data_billing& get_raw_data_billing(const int i) const {
            return m_raw_data_billing.at(i);
        }
        const std::vector<source_i_p>& get_source_i_p_list() const {
            return m_source_i_p;
        }
        const source_i_p& get_source_i_p(const int i) const {
            return m_source_i_p.at(i);
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
        void set_client_firm_status(const client_firm_status& value)  {
            m_client_firm_status = value;
        }
        void set_client_firm_status_dttm(const client_firm_status_dttm& value)  {
            m_client_firm_status_dttm = value;
        }
        void set_enabled_in(const enabled_in& value)  {
            m_enabled_in = value;
        }
        void set_client_firm_type(const client_firm_type& value)  {
            m_client_firm_type = value;
        }
        void set_client_firm_name(const client_firm_name& value)  {
            m_client_firm_name = value;
        }
        void set_client_firm_short_code(const client_firm_short_code& value)  {
            m_client_firm_short_code = value;
        }
        void set_client_firm_relationship(const client_firm_relationship& value)  {
            m_client_firm_relationship = value;
        }
        void set_rep_code_sr(const rep_code_sr& value)  {
            m_rep_code_sr = value;
        }
        void set_client_tag_pool(const client_tag_pool& value)  {
            m_client_tag_pool = value;
        }
        void set_billing_account(const billing_account& value)  {
            m_billing_account = value;
        }
        void set_billing_schedule(const billing_schedule& value)  {
            m_billing_schedule = value;
        }
        void set_billing_address1(const billing_address1& value)  {
            m_billing_address1 = value;
        }
        void set_billing_address2(const billing_address2& value)  {
            m_billing_address2 = value;
        }
        void set_billing_city(const billing_city& value)  {
            m_billing_city = value;
        }
        void set_billing_state(const billing_state& value)  {
            m_billing_state = value;
        }
        void set_billing_zip_code(const billing_zip_code& value)  {
            m_billing_zip_code = value;
        }
        void set_billing_country(const billing_country& value)  {
            m_billing_country = value;
        }
        void set_billing_phone_number(const billing_phone_number& value)  {
            m_billing_phone_number = value;
        }
        void set_billing_email_address(const billing_email_address& value)  {
            m_billing_email_address = value;
        }
        void set_report_address1(const report_address1& value)  {
            m_report_address1 = value;
        }
        void set_report_address2(const report_address2& value)  {
            m_report_address2 = value;
        }
        void set_report_city(const report_city& value)  {
            m_report_city = value;
        }
        void set_report_state(const report_state& value)  {
            m_report_state = value;
        }
        void set_report_zip_code(const report_zip_code& value)  {
            m_report_zip_code = value;
        }
        void set_report_country(const report_country& value)  {
            m_report_country = value;
        }
        void set_report_phone_number(const report_phone_number& value)  {
            m_report_phone_number = value;
        }
        void set_report_email_address(const report_email_address& value)  {
            m_report_email_address = value;
        }
        void set_core_client_firm(const core_client_firm& value)  {
            m_core_client_firm = value;
        }
        void set_sponsor_client_firm(const sponsor_client_firm& value)  {
            m_sponsor_client_firm = value;
        }
        void set_can_have_trading_accnt(const can_have_trading_accnt& value)  {
            m_can_have_trading_accnt = value;
        }
        void set_legal_entity_id(const legal_entity_id& value)  {
            m_legal_entity_id = value;
        }
        void set_sec_large_trader_id(const sec_large_trader_id& value)  {
            m_sec_large_trader_id = value;
        }
        void set_ltid_effective_date(const ltid_effective_date& value)  {
            m_ltid_effective_date = value;
        }
        void set_cat_cais_tid_type(const cat_cais_tid_type& value)  {
            m_cat_cais_tid_type = value;
        }
        void set_cat_cais_tid_value(const cat_cais_tid_value& value)  {
            m_cat_cais_tid_value = value;
        }
        void set_cat_cais_cust_type(const cat_cais_cust_type& value)  {
            m_cat_cais_cust_type = value;
        }
        void set_sync_agg_groups(const sync_agg_groups& value)  {
            m_sync_agg_groups = value;
        }
        void set_sync_threshold(const sync_threshold& value)  {
            m_sync_threshold = value;
        }
        void set_view_gics(const view_gics& value)  {
            m_view_gics = value;
        }
        void set_view_cusip(const view_cusip& value)  {
            m_view_cusip = value;
        }
        void set_restrict_locate_upload(const restrict_locate_upload& value)  {
            m_restrict_locate_upload = value;
        }
        void set_restrict_autohedge(const restrict_autohedge& value)  {
            m_restrict_autohedge = value;
        }
        void set_cxl_risk_group_on_review_hedge_reject(const cxl_risk_group_on_review_hedge_reject& value)  {
            m_cxl_risk_group_on_review_hedge_reject = value;
        }
        void set_user_rate_source(const user_rate_source& value)  {
            m_user_rate_source = value;
        }
        void set_enable_srse_product_snapshots(const enable_srse_product_snapshots& value)  {
            m_enable_srse_product_snapshots = value;
        }
        void set_auth_type(const auth_type& value)  {
            m_auth_type = value;
        }
        void set_auth_extern_name(const auth_extern_name& value)  {
            m_auth_extern_name = value;
        }
        void set_auth_extern_params(const auth_extern_params& value)  {
            m_auth_extern_params = value;
        }
        void set_pw_file_transfer(const pw_file_transfer& value)  {
            m_pw_file_transfer = value;
        }
        void set_drop_all_parent_tags(const drop_all_parent_tags& value)  {
            m_drop_all_parent_tags = value;
        }
        void set_enable_srse_prod(const enable_srse_prod& value)  {
            m_enable_srse_prod = value;
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
        void set_tool_product_acl__v7(const tool_product_acl__v7& value)  {
            m_tool_product_acl__v7 = value;
        }
        void set_elastic_product_acl__v7(const elastic_product_acl__v7& value)  {
            m_elastic_product_acl__v7 = value;
        }
        void set_market_data_acl__v7(const market_data_acl__v7& value)  {
            m_market_data_acl__v7 = value;
        }
        void set_gwt_product_acl__v7(const gwt_product_acl__v7& value)  {
            m_gwt_product_acl__v7 = value;
        }
        void set_risk_server_code__v7(const risk_server_code__v7& value)  {
            m_risk_server_code__v7 = value;
        }
        void set_drop_server_code__v7(const drop_server_code__v7& value)  {
            m_drop_server_code__v7 = value;
        }
        void set_drop_server_code2__v7(const drop_server_code2__v7& value)  {
            m_drop_server_code2__v7 = value;
        }
        void set_drop_server_code3__v7(const drop_server_code3__v7& value)  {
            m_drop_server_code3__v7 = value;
        }
        void set_drop_server_code4__v7(const drop_server_code4__v7& value)  {
            m_drop_server_code4__v7 = value;
        }
        void set_drop_server_code5__v7(const drop_server_code5__v7& value)  {
            m_drop_server_code5__v7 = value;
        }
        void set_drop_server_code6__v7(const drop_server_code6__v7& value)  {
            m_drop_server_code6__v7 = value;
        }
        void set_drop_server_code7__v7(const drop_server_code7__v7& value)  {
            m_drop_server_code7__v7 = value;
        }
        void set_drop_server_code8__v7(const drop_server_code8__v7& value)  {
            m_drop_server_code8__v7 = value;
        }
        void set_privacy_rule__v7(const privacy_rule__v7& value)  {
            m_privacy_rule__v7 = value;
        }
        void set_allowed_ingress__v7(const allowed_ingress__v7& value)  {
            m_allowed_ingress__v7 = value;
        }
        void set_restrict_ipsource__v7(const restrict_ipsource__v7& value)  {
            m_restrict_ipsource__v7 = value;
        }
        void set_ip_access_mask__v7(const ip_access_mask__v7& value)  {
            m_ip_access_mask__v7 = value;
        }
        void set_two_phase_type__v7(const two_phase_type__v7& value)  {
            m_two_phase_type__v7 = value;
        }
        void set_change_on_init_logon__v7(const change_on_init_logon__v7& value)  {
            m_change_on_init_logon__v7 = value;
        }
        void set_user_lockout__v7(const user_lockout__v7& value)  {
            m_user_lockout__v7 = value;
        }
        void set_enforce_history__v7(const enforce_history__v7& value)  {
            m_enforce_history__v7 = value;
        }
        void set_pw_age__v7(const pw_age__v7& value)  {
            m_pw_age__v7 = value;
        }
        void set_pw_length__v7(const pw_length__v7& value)  {
            m_pw_length__v7 = value;
        }
        void set_pw_history__v7(const pw_history__v7& value)  {
            m_pw_history__v7 = value;
        }
        void set_pw_complexity__v7(const pw_complexity__v7& value)  {
            m_pw_complexity__v7 = value;
        }
        void set_locate_req_firm__v7(const locate_req_firm__v7& value)  {
            m_locate_req_firm__v7 = value;
        }
        void set_locate_data_center__v7(const locate_data_center__v7& value)  {
            m_locate_data_center__v7 = value;
        }
        void set_route_table__v7(const route_table__v7& value)  {
            m_route_table__v7 = value;
        }
        void set_user_ticker_src__v7(const user_ticker_src__v7& value)  {
            m_user_ticker_src__v7 = value;
        }
        void set_user_name__v7(const user_name__v7& value)  {
            m_user_name__v7 = value;
        }
        void set_directed_counter_party_list(const std::vector<directed_counter_party>& list)  {
            m_directed_counter_party = list;
        }
        void add_directed_counter_party(const directed_counter_party& item) {
            m_directed_counter_party.emplace_back(item);
        }
        void set_exclude_counter_party_list(const std::vector<exclude_counter_party>& list)  {
            m_exclude_counter_party = list;
        }
        void add_exclude_counter_party(const exclude_counter_party& item) {
            m_exclude_counter_party.emplace_back(item);
        }
        void set_locate_pool_list(const std::vector<locate_pool>& list)  {
            m_locate_pool = list;
        }
        void add_locate_pool(const locate_pool& item) {
            m_locate_pool.emplace_back(item);
        }
        void set_raw_data_billing_list(const std::vector<raw_data_billing>& list)  {
            m_raw_data_billing = list;
        }
        void add_raw_data_billing(const raw_data_billing& item) {
            m_raw_data_billing.emplace_back(item);
        }
        void set_source_i_p_list(const std::vector<source_i_p>& list)  {
            m_source_i_p = list;
        }
        void add_source_i_p(const source_i_p& item) {
            m_source_i_p.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientFirmConfig::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const client_firm_status & value) {
            set_client_firm_status(value);
        }
        void set(const client_firm_status_dttm & value) {
            set_client_firm_status_dttm(value);
        }
        void set(const enabled_in & value) {
            set_enabled_in(value);
        }
        void set(const client_firm_type & value) {
            set_client_firm_type(value);
        }
        void set(const client_firm_name & value) {
            set_client_firm_name(value);
        }
        void set(const client_firm_short_code & value) {
            set_client_firm_short_code(value);
        }
        void set(const client_firm_relationship & value) {
            set_client_firm_relationship(value);
        }
        void set(const rep_code_sr & value) {
            set_rep_code_sr(value);
        }
        void set(const client_tag_pool & value) {
            set_client_tag_pool(value);
        }
        void set(const billing_account & value) {
            set_billing_account(value);
        }
        void set(const billing_schedule & value) {
            set_billing_schedule(value);
        }
        void set(const billing_address1 & value) {
            set_billing_address1(value);
        }
        void set(const billing_address2 & value) {
            set_billing_address2(value);
        }
        void set(const billing_city & value) {
            set_billing_city(value);
        }
        void set(const billing_state & value) {
            set_billing_state(value);
        }
        void set(const billing_zip_code & value) {
            set_billing_zip_code(value);
        }
        void set(const billing_country & value) {
            set_billing_country(value);
        }
        void set(const billing_phone_number & value) {
            set_billing_phone_number(value);
        }
        void set(const billing_email_address & value) {
            set_billing_email_address(value);
        }
        void set(const report_address1 & value) {
            set_report_address1(value);
        }
        void set(const report_address2 & value) {
            set_report_address2(value);
        }
        void set(const report_city & value) {
            set_report_city(value);
        }
        void set(const report_state & value) {
            set_report_state(value);
        }
        void set(const report_zip_code & value) {
            set_report_zip_code(value);
        }
        void set(const report_country & value) {
            set_report_country(value);
        }
        void set(const report_phone_number & value) {
            set_report_phone_number(value);
        }
        void set(const report_email_address & value) {
            set_report_email_address(value);
        }
        void set(const core_client_firm & value) {
            set_core_client_firm(value);
        }
        void set(const sponsor_client_firm & value) {
            set_sponsor_client_firm(value);
        }
        void set(const can_have_trading_accnt & value) {
            set_can_have_trading_accnt(value);
        }
        void set(const legal_entity_id & value) {
            set_legal_entity_id(value);
        }
        void set(const sec_large_trader_id & value) {
            set_sec_large_trader_id(value);
        }
        void set(const ltid_effective_date & value) {
            set_ltid_effective_date(value);
        }
        void set(const cat_cais_tid_type & value) {
            set_cat_cais_tid_type(value);
        }
        void set(const cat_cais_tid_value & value) {
            set_cat_cais_tid_value(value);
        }
        void set(const cat_cais_cust_type & value) {
            set_cat_cais_cust_type(value);
        }
        void set(const sync_agg_groups & value) {
            set_sync_agg_groups(value);
        }
        void set(const sync_threshold & value) {
            set_sync_threshold(value);
        }
        void set(const view_gics & value) {
            set_view_gics(value);
        }
        void set(const view_cusip & value) {
            set_view_cusip(value);
        }
        void set(const restrict_locate_upload & value) {
            set_restrict_locate_upload(value);
        }
        void set(const restrict_autohedge & value) {
            set_restrict_autohedge(value);
        }
        void set(const cxl_risk_group_on_review_hedge_reject & value) {
            set_cxl_risk_group_on_review_hedge_reject(value);
        }
        void set(const user_rate_source & value) {
            set_user_rate_source(value);
        }
        void set(const enable_srse_product_snapshots & value) {
            set_enable_srse_product_snapshots(value);
        }
        void set(const auth_type & value) {
            set_auth_type(value);
        }
        void set(const auth_extern_name & value) {
            set_auth_extern_name(value);
        }
        void set(const auth_extern_params & value) {
            set_auth_extern_params(value);
        }
        void set(const pw_file_transfer & value) {
            set_pw_file_transfer(value);
        }
        void set(const drop_all_parent_tags & value) {
            set_drop_all_parent_tags(value);
        }
        void set(const enable_srse_prod & value) {
            set_enable_srse_prod(value);
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
        void set(const tool_product_acl__v7 & value) {
            set_tool_product_acl__v7(value);
        }
        void set(const elastic_product_acl__v7 & value) {
            set_elastic_product_acl__v7(value);
        }
        void set(const market_data_acl__v7 & value) {
            set_market_data_acl__v7(value);
        }
        void set(const gwt_product_acl__v7 & value) {
            set_gwt_product_acl__v7(value);
        }
        void set(const risk_server_code__v7 & value) {
            set_risk_server_code__v7(value);
        }
        void set(const drop_server_code__v7 & value) {
            set_drop_server_code__v7(value);
        }
        void set(const drop_server_code2__v7 & value) {
            set_drop_server_code2__v7(value);
        }
        void set(const drop_server_code3__v7 & value) {
            set_drop_server_code3__v7(value);
        }
        void set(const drop_server_code4__v7 & value) {
            set_drop_server_code4__v7(value);
        }
        void set(const drop_server_code5__v7 & value) {
            set_drop_server_code5__v7(value);
        }
        void set(const drop_server_code6__v7 & value) {
            set_drop_server_code6__v7(value);
        }
        void set(const drop_server_code7__v7 & value) {
            set_drop_server_code7__v7(value);
        }
        void set(const drop_server_code8__v7 & value) {
            set_drop_server_code8__v7(value);
        }
        void set(const privacy_rule__v7 & value) {
            set_privacy_rule__v7(value);
        }
        void set(const allowed_ingress__v7 & value) {
            set_allowed_ingress__v7(value);
        }
        void set(const restrict_ipsource__v7 & value) {
            set_restrict_ipsource__v7(value);
        }
        void set(const ip_access_mask__v7 & value) {
            set_ip_access_mask__v7(value);
        }
        void set(const two_phase_type__v7 & value) {
            set_two_phase_type__v7(value);
        }
        void set(const change_on_init_logon__v7 & value) {
            set_change_on_init_logon__v7(value);
        }
        void set(const user_lockout__v7 & value) {
            set_user_lockout__v7(value);
        }
        void set(const enforce_history__v7 & value) {
            set_enforce_history__v7(value);
        }
        void set(const pw_age__v7 & value) {
            set_pw_age__v7(value);
        }
        void set(const pw_length__v7 & value) {
            set_pw_length__v7(value);
        }
        void set(const pw_history__v7 & value) {
            set_pw_history__v7(value);
        }
        void set(const pw_complexity__v7 & value) {
            set_pw_complexity__v7(value);
        }
        void set(const locate_req_firm__v7 & value) {
            set_locate_req_firm__v7(value);
        }
        void set(const locate_data_center__v7 & value) {
            set_locate_data_center__v7(value);
        }
        void set(const route_table__v7 & value) {
            set_route_table__v7(value);
        }
        void set(const user_ticker_src__v7 & value) {
            set_user_ticker_src__v7(value);
        }
        void set(const user_name__v7 & value) {
            set_user_name__v7(value);
        }
        void set(const directed_counter_party & value) {
            add_directed_counter_party(value);
        }
        void set(const exclude_counter_party & value) {
            add_exclude_counter_party(value);
        }
        void set(const locate_pool & value) {
            add_locate_pool(value);
        }
        void set(const raw_data_billing & value) {
            add_raw_data_billing(value);
        }
        void set(const source_i_p & value) {
            add_source_i_p(value);
        }

        void set(const ClientFirmConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_client_firm_status);
            set(value.m_client_firm_status_dttm);
            set(value.m_enabled_in);
            set(value.m_client_firm_type);
            set(value.m_client_firm_name);
            set(value.m_client_firm_short_code);
            set(value.m_client_firm_relationship);
            set(value.m_rep_code_sr);
            set(value.m_client_tag_pool);
            set(value.m_billing_account);
            set(value.m_billing_schedule);
            set(value.m_billing_address1);
            set(value.m_billing_address2);
            set(value.m_billing_city);
            set(value.m_billing_state);
            set(value.m_billing_zip_code);
            set(value.m_billing_country);
            set(value.m_billing_phone_number);
            set(value.m_billing_email_address);
            set(value.m_report_address1);
            set(value.m_report_address2);
            set(value.m_report_city);
            set(value.m_report_state);
            set(value.m_report_zip_code);
            set(value.m_report_country);
            set(value.m_report_phone_number);
            set(value.m_report_email_address);
            set(value.m_core_client_firm);
            set(value.m_sponsor_client_firm);
            set(value.m_can_have_trading_accnt);
            set(value.m_legal_entity_id);
            set(value.m_sec_large_trader_id);
            set(value.m_ltid_effective_date);
            set(value.m_cat_cais_tid_type);
            set(value.m_cat_cais_tid_value);
            set(value.m_cat_cais_cust_type);
            set(value.m_sync_agg_groups);
            set(value.m_sync_threshold);
            set(value.m_view_gics);
            set(value.m_view_cusip);
            set(value.m_restrict_locate_upload);
            set(value.m_restrict_autohedge);
            set(value.m_cxl_risk_group_on_review_hedge_reject);
            set(value.m_user_rate_source);
            set(value.m_enable_srse_product_snapshots);
            set(value.m_auth_type);
            set(value.m_auth_extern_name);
            set(value.m_auth_extern_params);
            set(value.m_pw_file_transfer);
            set(value.m_drop_all_parent_tags);
            set(value.m_enable_srse_prod);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
            set(value.m_tool_product_acl__v7);
            set(value.m_elastic_product_acl__v7);
            set(value.m_market_data_acl__v7);
            set(value.m_gwt_product_acl__v7);
            set(value.m_risk_server_code__v7);
            set(value.m_drop_server_code__v7);
            set(value.m_drop_server_code2__v7);
            set(value.m_drop_server_code3__v7);
            set(value.m_drop_server_code4__v7);
            set(value.m_drop_server_code5__v7);
            set(value.m_drop_server_code6__v7);
            set(value.m_drop_server_code7__v7);
            set(value.m_drop_server_code8__v7);
            set(value.m_privacy_rule__v7);
            set(value.m_allowed_ingress__v7);
            set(value.m_restrict_ipsource__v7);
            set(value.m_ip_access_mask__v7);
            set(value.m_two_phase_type__v7);
            set(value.m_change_on_init_logon__v7);
            set(value.m_user_lockout__v7);
            set(value.m_enforce_history__v7);
            set(value.m_pw_age__v7);
            set(value.m_pw_length__v7);
            set(value.m_pw_history__v7);
            set(value.m_pw_complexity__v7);
            set(value.m_locate_req_firm__v7);
            set(value.m_locate_data_center__v7);
            set(value.m_route_table__v7);
            set(value.m_user_ticker_src__v7);
            set(value.m_user_name__v7);set_directed_counter_party_list(value.m_directed_counter_party);set_exclude_counter_party_list(value.m_exclude_counter_party);set_locate_pool_list(value.m_locate_pool);set_raw_data_billing_list(value.m_raw_data_billing);set_source_i_p_list(value.m_source_i_p);
        }

        ClientFirmConfig() {
            m__meta.set_message_type("ClientFirmConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1850, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1850, length);
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
             *this = ClientFirmConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClientFirmStatusDttm() const {
            return (m_client_firm_status_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeClientFirmName() const {
            return !(m_client_firm_name.empty());
        }
        bool IncludeClientFirmShortCode() const {
            return !(m_client_firm_short_code.empty());
        }
        bool IncludeRepCodeSr() const {
            return !(m_rep_code_sr.empty());
        }
        bool IncludeClientTagPool() const {
            return !(m_client_tag_pool.empty());
        }
        bool IncludeBillingAccount() const {
            return !(m_billing_account.empty());
        }
        bool IncludeBillingSchedule() const {
            return !(m_billing_schedule.empty());
        }
        bool IncludeBillingAddress1() const {
            return !(m_billing_address1.empty());
        }
        bool IncludeBillingAddress2() const {
            return !(m_billing_address2.empty());
        }
        bool IncludeBillingCity() const {
            return !(m_billing_city.empty());
        }
        bool IncludeBillingState() const {
            return !(m_billing_state.empty());
        }
        bool IncludeBillingZipCode() const {
            return !(m_billing_zip_code.empty());
        }
        bool IncludeBillingCountry() const {
            return !(m_billing_country.empty());
        }
        bool IncludeBillingPhoneNumber() const {
            return !(m_billing_phone_number.empty());
        }
        bool IncludeBillingEmailAddress() const {
            return !(m_billing_email_address.empty());
        }
        bool IncludeReportAddress1() const {
            return !(m_report_address1.empty());
        }
        bool IncludeReportAddress2() const {
            return !(m_report_address2.empty());
        }
        bool IncludeReportCity() const {
            return !(m_report_city.empty());
        }
        bool IncludeReportState() const {
            return !(m_report_state.empty());
        }
        bool IncludeReportZipCode() const {
            return !(m_report_zip_code.empty());
        }
        bool IncludeReportCountry() const {
            return !(m_report_country.empty());
        }
        bool IncludeReportPhoneNumber() const {
            return !(m_report_phone_number.empty());
        }
        bool IncludeReportEmailAddress() const {
            return !(m_report_email_address.empty());
        }
        bool IncludeCoreClientFirm() const {
            return !(m_core_client_firm.empty());
        }
        bool IncludeSponsorClientFirm() const {
            return !(m_sponsor_client_firm.empty());
        }
        bool IncludeLegalEntityId() const {
            return !(m_legal_entity_id.empty());
        }
        bool IncludeSecLargeTraderId() const {
            return !(m_sec_large_trader_id.empty());
        }
        bool IncludeLtidEffectiveDate() const {
            return (m_ltid_effective_date.time_since_epoch().count() != 0);
        }
        bool IncludeCatCaisTidValue() const {
            return !(m_cat_cais_tid_value.empty());
        }
        bool IncludeSyncAggGroups() const {
            return !(m_sync_agg_groups.empty());
        }
        bool IncludeSyncThreshold() const {
            return !(m_sync_threshold == 0.0);
        }
        bool IncludeAuthExternName() const {
            return !(m_auth_extern_name.empty());
        }
        bool IncludeAuthExternParams() const {
            return !(m_auth_extern_params.empty());
        }
        bool IncludePwFileTransfer() const {
            return !(m_pw_file_transfer.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeToolProductAclV7() const {
            return !(m_tool_product_acl__v7.empty());
        }
        bool IncludeElasticProductAclV7() const {
            return !(m_elastic_product_acl__v7.empty());
        }
        bool IncludeMarketDataAclV7() const {
            return !(m_market_data_acl__v7.empty());
        }
        bool IncludeGwtProductAclV7() const {
            return !(m_gwt_product_acl__v7.empty());
        }
        bool IncludeIpAccessMaskV7() const {
            return !(m_ip_access_mask__v7.empty());
        }
        bool IncludePwAgeV7() const {
            return !(m_pw_age__v7 == 0);
        }
        bool IncludePwLengthV7() const {
            return !(m_pw_length__v7 == 0);
        }
        bool IncludePwHistoryV7() const {
            return !(m_pw_history__v7 == 0);
        }
        bool IncludeLocateReqFirmV7() const {
            return !(m_locate_req_firm__v7.empty());
        }
        bool IncludeRouteTableV7() const {
            return !(m_route_table__v7.empty());
        }
        bool IncludeUserNameV7() const {
            return !(m_user_name__v7.empty());
        }
        bool IncludeDirectedCounterParty() const {
            return (!m_directed_counter_party.empty());
        }
        bool IncludeExcludeCounterParty() const {
            return (!m_exclude_counter_party.empty());
        }
        bool IncludeLocatePool() const {
            return (!m_locate_pool.empty());
        }
        bool IncludeRawDataBilling() const {
            return (!m_raw_data_billing.empty());
        }
        bool IncludeSourceIP() const {
            return (!m_source_i_p.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmStatus>(m_client_firm_status)));
            if ( IncludeClientFirmStatusDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_client_firm_status_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(285,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysVersion>(m_enabled_in)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmType>(m_client_firm_type)));
            if ( IncludeClientFirmName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_client_firm_name);
            }
            if ( IncludeClientFirmShortCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_client_firm_short_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmRelationship>(m_client_firm_relationship)));
            if ( IncludeRepCodeSr()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_rep_code_sr);
            }
            if ( IncludeClientTagPool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_client_tag_pool);
            }
            if ( IncludeBillingAccount()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_billing_account);
            }
            if ( IncludeBillingSchedule()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_billing_schedule);
            }
            if ( IncludeBillingAddress1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_billing_address1);
            }
            if ( IncludeBillingAddress2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_billing_address2);
            }
            if ( IncludeBillingCity()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_billing_city);
            }
            if ( IncludeBillingState()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_billing_state);
            }
            if ( IncludeBillingZipCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_billing_zip_code);
            }
            if ( IncludeBillingCountry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_billing_country);
            }
            if ( IncludeBillingPhoneNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_billing_phone_number);
            }
            if ( IncludeBillingEmailAddress()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_billing_email_address);
            }
            if ( IncludeReportAddress1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_report_address1);
            }
            if ( IncludeReportAddress2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_report_address2);
            }
            if ( IncludeReportCity()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_report_city);
            }
            if ( IncludeReportState()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_report_state);
            }
            if ( IncludeReportZipCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_report_zip_code);
            }
            if ( IncludeReportCountry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_report_country);
            }
            if ( IncludeReportPhoneNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_report_phone_number);
            }
            if ( IncludeReportEmailAddress()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(175,m_report_email_address);
            }
            if ( IncludeCoreClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(178,m_core_client_firm);
            }
            if ( IncludeSponsorClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_sponsor_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_have_trading_accnt)));
            if ( IncludeLegalEntityId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_legal_entity_id);
            }
            if ( IncludeSecLargeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_sec_large_trader_id);
            }
            if ( IncludeLtidEffectiveDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(281, m_ltid_effective_date);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(282,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatCaisTidType>(m_cat_cais_tid_type)));
            if ( IncludeCatCaisTidValue()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(283,m_cat_cais_tid_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(284,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatCaisCustType>(m_cat_cais_cust_type)));
            if ( IncludeSyncAggGroups()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_sync_agg_groups);
            }
            if ( IncludeSyncThreshold()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_sync_threshold);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_view_gics)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_view_cusip)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_restrict_locate_upload)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_restrict_autohedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cxl_risk_group_on_review_hedge_reject)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateSource>(m_user_rate_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enable_srse_product_snapshots)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>(m_auth_type)));
            if ( IncludeAuthExternName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_auth_extern_name);
            }
            if ( IncludeAuthExternParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(235,m_auth_extern_params);
            }
            if ( IncludePwFileTransfer()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(238,m_pw_file_transfer);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_drop_all_parent_tags)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enable_srse_prod)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(274,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(280, m_timestamp);
            }
            if ( IncludeToolProductAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5000,m_tool_product_acl__v7);
            }
            if ( IncludeElasticProductAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5001,m_elastic_product_acl__v7);
            }
            if ( IncludeMarketDataAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5002,m_market_data_acl__v7);
            }
            if ( IncludeGwtProductAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5003,m_gwt_product_acl__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5004,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskServerCode_V7>(m_risk_server_code__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5005,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5006,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code2__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5007,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code3__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5008,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code4__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5009,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code5__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5010,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code6__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5011,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code7__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5012,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code8__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5013,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrivacyRule_V7>(m_privacy_rule__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5014,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllowedIngress_V7>(m_allowed_ingress__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5015,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_restrict_ipsource__v7)));
            if ( IncludeIpAccessMaskV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5016,m_ip_access_mask__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5017,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TwoPhaseType_V7>(m_two_phase_type__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5018,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_change_on_init_logon__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5019,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_lockout__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5020,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enforce_history__v7)));
            if ( IncludePwAgeV7()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5021,m_pw_age__v7);
            }
            if ( IncludePwLengthV7()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5022,m_pw_length__v7);
            }
            if ( IncludePwHistoryV7()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(5023,m_pw_history__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5024,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PwComplexity_V7>(m_pw_complexity__v7)));
            if ( IncludeLocateReqFirmV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5025,m_locate_req_firm__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5026,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_locate_data_center__v7)));
            if ( IncludeRouteTableV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5027,m_route_table__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5028,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc_V7>(m_user_ticker_src__v7)));
            if ( IncludeUserNameV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5029,m_user_name__v7);
            }
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
					totalSize += SRProtobufCPP::TagCodec::Size(244, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeExcludeCounterParty()) {
                for (auto& item : m_exclude_counter_party) {
					totalSize += SRProtobufCPP::TagCodec::Size(286, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeLocatePool()) {
                for (auto& item : m_locate_pool) {
					totalSize += SRProtobufCPP::TagCodec::Size(220, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeRawDataBilling()) {
                for (auto& item : m_raw_data_billing) {
					totalSize += SRProtobufCPP::TagCodec::Size(253, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeSourceIP()) {
                for (auto& item : m_source_i_p) {
					totalSize += SRProtobufCPP::TagCodec::Size(262, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmStatus>(m_client_firm_status)));
            if ( IncludeClientFirmStatusDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_client_firm_status_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,285,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysVersion>(m_enabled_in)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmType>(m_client_firm_type)));
            if ( IncludeClientFirmName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_client_firm_name));
            }
            if ( IncludeClientFirmShortCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_client_firm_short_code));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmRelationship>(m_client_firm_relationship)));
            if ( IncludeRepCodeSr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_rep_code_sr));
            }
            if ( IncludeClientTagPool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_client_tag_pool));
            }
            if ( IncludeBillingAccount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_billing_account));
            }
            if ( IncludeBillingSchedule()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_billing_schedule));
            }
            if ( IncludeBillingAddress1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_billing_address1));
            }
            if ( IncludeBillingAddress2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_billing_address2));
            }
            if ( IncludeBillingCity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_billing_city));
            }
            if ( IncludeBillingState()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_billing_state));
            }
            if ( IncludeBillingZipCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_billing_zip_code));
            }
            if ( IncludeBillingCountry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_billing_country));
            }
            if ( IncludeBillingPhoneNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_billing_phone_number));
            }
            if ( IncludeBillingEmailAddress()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_billing_email_address));
            }
            if ( IncludeReportAddress1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_report_address1));
            }
            if ( IncludeReportAddress2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_report_address2));
            }
            if ( IncludeReportCity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_report_city));
            }
            if ( IncludeReportState()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_report_state));
            }
            if ( IncludeReportZipCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_report_zip_code));
            }
            if ( IncludeReportCountry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_report_country));
            }
            if ( IncludeReportPhoneNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_report_phone_number));
            }
            if ( IncludeReportEmailAddress()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,175,static_cast<string>(m_report_email_address));
            }
            if ( IncludeCoreClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,178,static_cast<string>(m_core_client_firm));
            }
            if ( IncludeSponsorClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_sponsor_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_have_trading_accnt)));
            if ( IncludeLegalEntityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_legal_entity_id));
            }
            if ( IncludeSecLargeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_sec_large_trader_id));
            }
            if ( IncludeLtidEffectiveDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 281, m_ltid_effective_date);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,282,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatCaisTidType>(m_cat_cais_tid_type)));
            if ( IncludeCatCaisTidValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,283,static_cast<string>(m_cat_cais_tid_value));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,284,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatCaisCustType>(m_cat_cais_cust_type)));
            if ( IncludeSyncAggGroups()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_sync_agg_groups));
            }
            if ( IncludeSyncThreshold()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_sync_threshold);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_view_gics)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_view_cusip)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_restrict_locate_upload)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_restrict_autohedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cxl_risk_group_on_review_hedge_reject)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateSource>(m_user_rate_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enable_srse_product_snapshots)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>(m_auth_type)));
            if ( IncludeAuthExternName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_auth_extern_name));
            }
            if ( IncludeAuthExternParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,235,static_cast<string>(m_auth_extern_params));
            }
            if ( IncludePwFileTransfer()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,238,static_cast<string>(m_pw_file_transfer));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_drop_all_parent_tags)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enable_srse_prod)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,274,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 280, m_timestamp);
            }
            if ( IncludeToolProductAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5000,static_cast<string>(m_tool_product_acl__v7));
            }
            if ( IncludeElasticProductAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5001,static_cast<string>(m_elastic_product_acl__v7));
            }
            if ( IncludeMarketDataAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5002,static_cast<string>(m_market_data_acl__v7));
            }
            if ( IncludeGwtProductAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5003,static_cast<string>(m_gwt_product_acl__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5004,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskServerCode_V7>(m_risk_server_code__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5005,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5006,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code2__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5007,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code3__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5008,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code4__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5009,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code5__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5010,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code6__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5011,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code7__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5012,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>(m_drop_server_code8__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5013,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrivacyRule_V7>(m_privacy_rule__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5014,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllowedIngress_V7>(m_allowed_ingress__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5015,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_restrict_ipsource__v7)));
            if ( IncludeIpAccessMaskV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5016,static_cast<string>(m_ip_access_mask__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5017,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TwoPhaseType_V7>(m_two_phase_type__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5018,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_change_on_init_logon__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5019,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_lockout__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5020,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enforce_history__v7)));
            if ( IncludePwAgeV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5021,m_pw_age__v7);
            }
            if ( IncludePwLengthV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5022,m_pw_length__v7);
            }
            if ( IncludePwHistoryV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,5023,m_pw_history__v7);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5024,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PwComplexity_V7>(m_pw_complexity__v7)));
            if ( IncludeLocateReqFirmV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5025,static_cast<string>(m_locate_req_firm__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5026,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_locate_data_center__v7)));
            if ( IncludeRouteTableV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5027,static_cast<string>(m_route_table__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5028,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc_V7>(m_user_ticker_src__v7)));
            if ( IncludeUserNameV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5029,static_cast<string>(m_user_name__v7));
            }
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 244, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeExcludeCounterParty()) {
                for (auto& item : m_exclude_counter_party) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 286, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeLocatePool()) {
                for (auto& item : m_locate_pool) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 220, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeRawDataBilling()) {
                for (auto& item : m_raw_data_billing) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 253, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeSourceIP()) {
                for (auto& item : m_source_i_p) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 262, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_client_firm_status = static_cast<spiderrock::protobuf::api::ClientFirmStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_client_firm_status_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 285: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_enabled_in = static_cast<spiderrock::protobuf::api::SysVersion>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_client_firm_type = static_cast<spiderrock::protobuf::api::ClientFirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm_short_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_client_firm_relationship = static_cast<spiderrock::protobuf::api::ClientFirmRelationship>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_rep_code_sr = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_tag_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_account = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_schedule = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_address1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_address2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_city = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_state = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_zip_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_country = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_phone_number = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_email_address = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_address1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_address2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_city = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_state = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_zip_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_country = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_phone_number = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_report_email_address = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_core_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sponsor_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_have_trading_accnt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_legal_entity_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_large_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 281: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ltid_effective_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 282: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_cais_tid_type = static_cast<spiderrock::protobuf::api::CatCaisTidType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cat_cais_tid_value = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 284: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_cais_cust_type = static_cast<spiderrock::protobuf::api::CatCaisCustType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sync_agg_groups = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sync_threshold = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_view_gics = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_view_cusip = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_restrict_locate_upload = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_restrict_autohedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cxl_risk_group_on_review_hedge_reject = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_rate_source = static_cast<spiderrock::protobuf::api::RateSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_enable_srse_product_snapshots = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auth_type = static_cast<spiderrock::protobuf::api::AuthType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_auth_extern_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_auth_extern_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pw_file_transfer = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_all_parent_tags = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 271: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_enable_srse_prod = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 277: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_tool_product_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5001: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_elastic_product_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5002: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_market_data_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5003: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_gwt_product_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5004: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_server_code__v7 = static_cast<spiderrock::protobuf::api::RiskServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5005: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5006: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code2__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5007: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code3__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5008: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code4__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5009: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code5__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5010: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code6__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5011: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code7__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5012: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_server_code8__v7 = static_cast<spiderrock::protobuf::api::DropServerCode_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5013: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_privacy_rule__v7 = static_cast<spiderrock::protobuf::api::PrivacyRule_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5014: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allowed_ingress__v7 = static_cast<spiderrock::protobuf::api::AllowedIngress_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5015: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_restrict_ipsource__v7 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5016: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ip_access_mask__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5017: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_two_phase_type__v7 = static_cast<spiderrock::protobuf::api::TwoPhaseType_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5018: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_change_on_init_logon__v7 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5019: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_lockout__v7 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5020: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_enforce_history__v7 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5021: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_pw_age__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 5022: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_pw_length__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 5023: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_pw_history__v7 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 5024: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pw_complexity__v7 = static_cast<spiderrock::protobuf::api::PwComplexity_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5025: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_req_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5026: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_locate_data_center__v7 = static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5027: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_route_table__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5028: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_ticker_src__v7 = static_cast<spiderrock::protobuf::api::TickerSrc_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5029: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            directed_counter_party item_directed_counter_party;
                            item_directed_counter_party.Decode(pos, pos+length);  
                            m_directed_counter_party.emplace_back(item_directed_counter_party);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exclude_counter_party item_exclude_counter_party;
                            item_exclude_counter_party.Decode(pos, pos+length);  
                            m_exclude_counter_party.emplace_back(item_exclude_counter_party);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            locate_pool item_locate_pool;
                            item_locate_pool.Decode(pos, pos+length);  
                            m_locate_pool.emplace_back(item_locate_pool);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            raw_data_billing item_raw_data_billing;
                            item_raw_data_billing.Decode(pos, pos+length);  
                            m_raw_data_billing.emplace_back(item_raw_data_billing);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            source_i_p item_source_i_p;
                            item_source_i_p.Decode(pos, pos+length);  
                            m_source_i_p.emplace_back(item_source_i_p);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::_meta>() const { return ClientFirmConfig::_meta{ m__meta}; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::pkey>() const { return ClientFirmConfig::pkey{ m_pkey}; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_firm_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmStatus>( m_client_firm_status)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_firm_status_dttm>() const { return m_client_firm_status_dttm; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::enabled_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysVersion>( m_enabled_in)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmType>( m_client_firm_type)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_firm_name>() const { return m_client_firm_name; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_firm_short_code>() const { return m_client_firm_short_code; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_firm_relationship>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClientFirmRelationship>( m_client_firm_relationship)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::rep_code_sr>() const { return m_rep_code_sr; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::client_tag_pool>() const { return m_client_tag_pool; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_account>() const { return m_billing_account; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_schedule>() const { return m_billing_schedule; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_address1>() const { return m_billing_address1; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_address2>() const { return m_billing_address2; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_city>() const { return m_billing_city; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_state>() const { return m_billing_state; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_zip_code>() const { return m_billing_zip_code; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_country>() const { return m_billing_country; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_phone_number>() const { return m_billing_phone_number; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::billing_email_address>() const { return m_billing_email_address; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_address1>() const { return m_report_address1; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_address2>() const { return m_report_address2; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_city>() const { return m_report_city; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_state>() const { return m_report_state; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_zip_code>() const { return m_report_zip_code; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_country>() const { return m_report_country; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_phone_number>() const { return m_report_phone_number; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::report_email_address>() const { return m_report_email_address; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::core_client_firm>() const { return m_core_client_firm; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::sponsor_client_firm>() const { return m_sponsor_client_firm; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::can_have_trading_accnt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_have_trading_accnt)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::legal_entity_id>() const { return m_legal_entity_id; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::sec_large_trader_id>() const { return m_sec_large_trader_id; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::ltid_effective_date>() const { return m_ltid_effective_date; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::cat_cais_tid_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatCaisTidType>( m_cat_cais_tid_type)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::cat_cais_tid_value>() const { return m_cat_cais_tid_value; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::cat_cais_cust_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatCaisCustType>( m_cat_cais_cust_type)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::sync_agg_groups>() const { return m_sync_agg_groups; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::sync_threshold>() const { return m_sync_threshold; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::view_gics>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_view_gics)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::view_cusip>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_view_cusip)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::restrict_locate_upload>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_restrict_locate_upload)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::restrict_autohedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_restrict_autohedge)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::cxl_risk_group_on_review_hedge_reject>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_cxl_risk_group_on_review_hedge_reject)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::user_rate_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateSource>( m_user_rate_source)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::enable_srse_product_snapshots>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_enable_srse_product_snapshots)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::auth_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>( m_auth_type)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::auth_extern_name>() const { return m_auth_extern_name; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::auth_extern_params>() const { return m_auth_extern_params; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::pw_file_transfer>() const { return m_pw_file_transfer; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_all_parent_tags>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_drop_all_parent_tags)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::enable_srse_prod>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_enable_srse_prod)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::tool_product_acl__v7>() const { return m_tool_product_acl__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::elastic_product_acl__v7>() const { return m_elastic_product_acl__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::market_data_acl__v7>() const { return m_market_data_acl__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::gwt_product_acl__v7>() const { return m_gwt_product_acl__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::risk_server_code__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskServerCode_V7>( m_risk_server_code__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code2__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code2__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code3__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code3__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code4__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code4__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code5__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code5__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code6__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code6__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code7__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code7__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::drop_server_code8__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropServerCode_V7>( m_drop_server_code8__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::privacy_rule__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrivacyRule_V7>( m_privacy_rule__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::allowed_ingress__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllowedIngress_V7>( m_allowed_ingress__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::restrict_ipsource__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_restrict_ipsource__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::ip_access_mask__v7>() const { return m_ip_access_mask__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::two_phase_type__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TwoPhaseType_V7>( m_two_phase_type__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::change_on_init_logon__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_change_on_init_logon__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::user_lockout__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_lockout__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::enforce_history__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_enforce_history__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::pw_age__v7>() const { return m_pw_age__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::pw_length__v7>() const { return m_pw_length__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::pw_history__v7>() const { return m_pw_history__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::pw_complexity__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PwComplexity_V7>( m_pw_complexity__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::locate_req_firm__v7>() const { return m_locate_req_firm__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::locate_data_center__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>( m_locate_data_center__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::route_table__v7>() const { return m_route_table__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::user_ticker_src__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc_V7>( m_user_ticker_src__v7)); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::user_name__v7>() const { return m_user_name__v7; }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::directed_counter_party>(int i) const { return ClientFirmConfig::directed_counter_party{ get_directed_counter_party(i)}; }
    template<> inline int ClientFirmConfig::count<ClientFirmConfig::directed_counter_party>() const { return static_cast<int>( m_directed_counter_party.size()); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::exclude_counter_party>(int i) const { return ClientFirmConfig::exclude_counter_party{ get_exclude_counter_party(i)}; }
    template<> inline int ClientFirmConfig::count<ClientFirmConfig::exclude_counter_party>() const { return static_cast<int>( m_exclude_counter_party.size()); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::locate_pool>(int i) const { return ClientFirmConfig::locate_pool{ get_locate_pool(i)}; }
    template<> inline int ClientFirmConfig::count<ClientFirmConfig::locate_pool>() const { return static_cast<int>( m_locate_pool.size()); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::raw_data_billing>(int i) const { return ClientFirmConfig::raw_data_billing{ get_raw_data_billing(i)}; }
    template<> inline int ClientFirmConfig::count<ClientFirmConfig::raw_data_billing>() const { return static_cast<int>( m_raw_data_billing.size()); }
    template<> inline const auto ClientFirmConfig::get<ClientFirmConfig::source_i_p>(int i) const { return ClientFirmConfig::source_i_p{ get_source_i_p(i)}; }
    template<> inline int ClientFirmConfig::count<ClientFirmConfig::source_i_p>() const { return static_cast<int>( m_source_i_p.size()); }
    template<> inline const auto ClientFirmConfig_PKey::get<ClientFirmConfig_PKey::client_firm>() const { return m_client_firm; }
    
    template<> inline const auto ClientFirmConfig_DirectedCounterParty::get<ClientFirmConfig_DirectedCounterParty::client_firm>() const { return m_client_firm; }
    template<> inline const auto ClientFirmConfig_DirectedCounterParty::get<ClientFirmConfig_DirectedCounterParty::is_comm_party>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_party));}
    
    template<> inline const auto ClientFirmConfig_ExcludeCounterParty::get<ClientFirmConfig_ExcludeCounterParty::client_firm>() const { return m_client_firm; }
    
    template<> inline const auto ClientFirmConfig_LocatePool::get<ClientFirmConfig_LocatePool::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto ClientFirmConfig_LocatePool::get<ClientFirmConfig_LocatePool::locate_pool>() const { return m_locate_pool; }
    
    template<> inline const auto ClientFirmConfig_RawDataBilling::get<ClientFirmConfig_RawDataBilling::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RawDataToken>(m_token));}
    template<> inline const auto ClientFirmConfig_RawDataBilling::get<ClientFirmConfig_RawDataBilling::scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RawDataScope>(m_scope));}
    
    template<> inline const auto ClientFirmConfig_SourceIP::get<ClientFirmConfig_SourceIP::ip_v4_range>() const { return m_ip_v4_range; }
    template<> inline const auto ClientFirmConfig_SourceIP::get<ClientFirmConfig_SourceIP::ip_v6_range>() const { return m_ip_v6_range; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig_PKey& m) {
        o << "\"client_firm\":\"" << m.get<ClientFirmConfig_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig_DirectedCounterParty& m) {
        o << "\"client_firm\":\"" << m.get<ClientFirmConfig_DirectedCounterParty::client_firm>() << "\"";
        o << ",\"is_comm_party\":" << (int64_t)m.get<ClientFirmConfig_DirectedCounterParty::is_comm_party>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig_ExcludeCounterParty& m) {
        o << "\"client_firm\":\"" << m.get<ClientFirmConfig_ExcludeCounterParty::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig_LocatePool& m) {
        o << "\"locate_firm\":\"" << m.get<ClientFirmConfig_LocatePool::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<ClientFirmConfig_LocatePool::locate_pool>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig_RawDataBilling& m) {
        o << "\"token\":" << (int64_t)m.get<ClientFirmConfig_RawDataBilling::token>();
        o << ",\"scope\":" << (int64_t)m.get<ClientFirmConfig_RawDataBilling::scope>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig_SourceIP& m) {
        o << "\"ip_v4_range\":\"" << m.get<ClientFirmConfig_SourceIP::ip_v4_range>() << "\"";
        o << ",\"ip_v6_range\":\"" << m.get<ClientFirmConfig_SourceIP::ip_v6_range>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientFirmConfig& m) {
        o << "\"_meta\":{" << m.get<ClientFirmConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ClientFirmConfig::pkey>() << "}";
        o << ",\"client_firm_status\":" << (int64_t)m.get<ClientFirmConfig::client_firm_status>();
        {
            std::time_t tt = m.get<ClientFirmConfig::client_firm_status_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"client_firm_status_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"enabled_in\":" << (int64_t)m.get<ClientFirmConfig::enabled_in>();
        o << ",\"client_firm_type\":" << (int64_t)m.get<ClientFirmConfig::client_firm_type>();
        o << ",\"client_firm_name\":\"" << m.get<ClientFirmConfig::client_firm_name>() << "\"";
        o << ",\"client_firm_short_code\":\"" << m.get<ClientFirmConfig::client_firm_short_code>() << "\"";
        o << ",\"client_firm_relationship\":" << (int64_t)m.get<ClientFirmConfig::client_firm_relationship>();
        o << ",\"rep_code_sr\":\"" << m.get<ClientFirmConfig::rep_code_sr>() << "\"";
        o << ",\"client_tag_pool\":\"" << m.get<ClientFirmConfig::client_tag_pool>() << "\"";
        o << ",\"billing_account\":\"" << m.get<ClientFirmConfig::billing_account>() << "\"";
        o << ",\"billing_schedule\":\"" << m.get<ClientFirmConfig::billing_schedule>() << "\"";
        o << ",\"billing_address1\":\"" << m.get<ClientFirmConfig::billing_address1>() << "\"";
        o << ",\"billing_address2\":\"" << m.get<ClientFirmConfig::billing_address2>() << "\"";
        o << ",\"billing_city\":\"" << m.get<ClientFirmConfig::billing_city>() << "\"";
        o << ",\"billing_state\":\"" << m.get<ClientFirmConfig::billing_state>() << "\"";
        o << ",\"billing_zip_code\":\"" << m.get<ClientFirmConfig::billing_zip_code>() << "\"";
        o << ",\"billing_country\":\"" << m.get<ClientFirmConfig::billing_country>() << "\"";
        o << ",\"billing_phone_number\":\"" << m.get<ClientFirmConfig::billing_phone_number>() << "\"";
        o << ",\"billing_email_address\":\"" << m.get<ClientFirmConfig::billing_email_address>() << "\"";
        o << ",\"report_address1\":\"" << m.get<ClientFirmConfig::report_address1>() << "\"";
        o << ",\"report_address2\":\"" << m.get<ClientFirmConfig::report_address2>() << "\"";
        o << ",\"report_city\":\"" << m.get<ClientFirmConfig::report_city>() << "\"";
        o << ",\"report_state\":\"" << m.get<ClientFirmConfig::report_state>() << "\"";
        o << ",\"report_zip_code\":\"" << m.get<ClientFirmConfig::report_zip_code>() << "\"";
        o << ",\"report_country\":\"" << m.get<ClientFirmConfig::report_country>() << "\"";
        o << ",\"report_phone_number\":\"" << m.get<ClientFirmConfig::report_phone_number>() << "\"";
        o << ",\"report_email_address\":\"" << m.get<ClientFirmConfig::report_email_address>() << "\"";
        o << ",\"core_client_firm\":\"" << m.get<ClientFirmConfig::core_client_firm>() << "\"";
        o << ",\"sponsor_client_firm\":\"" << m.get<ClientFirmConfig::sponsor_client_firm>() << "\"";
        o << ",\"can_have_trading_accnt\":" << (int64_t)m.get<ClientFirmConfig::can_have_trading_accnt>();
        o << ",\"legal_entity_id\":\"" << m.get<ClientFirmConfig::legal_entity_id>() << "\"";
        o << ",\"sec_large_trader_id\":\"" << m.get<ClientFirmConfig::sec_large_trader_id>() << "\"";
        {
            std::time_t tt = m.get<ClientFirmConfig::ltid_effective_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ltid_effective_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"cat_cais_tid_type\":" << (int64_t)m.get<ClientFirmConfig::cat_cais_tid_type>();
        o << ",\"cat_cais_tid_value\":\"" << m.get<ClientFirmConfig::cat_cais_tid_value>() << "\"";
        o << ",\"cat_cais_cust_type\":" << (int64_t)m.get<ClientFirmConfig::cat_cais_cust_type>();
        o << ",\"sync_agg_groups\":\"" << m.get<ClientFirmConfig::sync_agg_groups>() << "\"";
        o << ",\"sync_threshold\":" << m.get<ClientFirmConfig::sync_threshold>();
        o << ",\"view_gics\":" << (int64_t)m.get<ClientFirmConfig::view_gics>();
        o << ",\"view_cusip\":" << (int64_t)m.get<ClientFirmConfig::view_cusip>();
        o << ",\"restrict_locate_upload\":" << (int64_t)m.get<ClientFirmConfig::restrict_locate_upload>();
        o << ",\"restrict_autohedge\":" << (int64_t)m.get<ClientFirmConfig::restrict_autohedge>();
        o << ",\"cxl_risk_group_on_review_hedge_reject\":" << (int64_t)m.get<ClientFirmConfig::cxl_risk_group_on_review_hedge_reject>();
        o << ",\"user_rate_source\":" << (int64_t)m.get<ClientFirmConfig::user_rate_source>();
        o << ",\"enable_srse_product_snapshots\":" << (int64_t)m.get<ClientFirmConfig::enable_srse_product_snapshots>();
        o << ",\"auth_type\":" << (int64_t)m.get<ClientFirmConfig::auth_type>();
        o << ",\"auth_extern_name\":\"" << m.get<ClientFirmConfig::auth_extern_name>() << "\"";
        o << ",\"auth_extern_params\":\"" << m.get<ClientFirmConfig::auth_extern_params>() << "\"";
        o << ",\"pw_file_transfer\":\"" << m.get<ClientFirmConfig::pw_file_transfer>() << "\"";
        o << ",\"drop_all_parent_tags\":" << (int64_t)m.get<ClientFirmConfig::drop_all_parent_tags>();
        o << ",\"enable_srse_prod\":" << (int64_t)m.get<ClientFirmConfig::enable_srse_prod>();
        o << ",\"modified_by\":\"" << m.get<ClientFirmConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ClientFirmConfig::modified_in>();
        {
            std::time_t tt = m.get<ClientFirmConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"tool_product_acl__v7\":\"" << m.get<ClientFirmConfig::tool_product_acl__v7>() << "\"";
        o << ",\"elastic_product_acl__v7\":\"" << m.get<ClientFirmConfig::elastic_product_acl__v7>() << "\"";
        o << ",\"market_data_acl__v7\":\"" << m.get<ClientFirmConfig::market_data_acl__v7>() << "\"";
        o << ",\"gwt_product_acl__v7\":\"" << m.get<ClientFirmConfig::gwt_product_acl__v7>() << "\"";
        o << ",\"risk_server_code__v7\":" << (int64_t)m.get<ClientFirmConfig::risk_server_code__v7>();
        o << ",\"drop_server_code__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code__v7>();
        o << ",\"drop_server_code2__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code2__v7>();
        o << ",\"drop_server_code3__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code3__v7>();
        o << ",\"drop_server_code4__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code4__v7>();
        o << ",\"drop_server_code5__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code5__v7>();
        o << ",\"drop_server_code6__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code6__v7>();
        o << ",\"drop_server_code7__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code7__v7>();
        o << ",\"drop_server_code8__v7\":" << (int64_t)m.get<ClientFirmConfig::drop_server_code8__v7>();
        o << ",\"privacy_rule__v7\":" << (int64_t)m.get<ClientFirmConfig::privacy_rule__v7>();
        o << ",\"allowed_ingress__v7\":" << (int64_t)m.get<ClientFirmConfig::allowed_ingress__v7>();
        o << ",\"restrict_ipsource__v7\":" << (int64_t)m.get<ClientFirmConfig::restrict_ipsource__v7>();
        o << ",\"ip_access_mask__v7\":\"" << m.get<ClientFirmConfig::ip_access_mask__v7>() << "\"";
        o << ",\"two_phase_type__v7\":" << (int64_t)m.get<ClientFirmConfig::two_phase_type__v7>();
        o << ",\"change_on_init_logon__v7\":" << (int64_t)m.get<ClientFirmConfig::change_on_init_logon__v7>();
        o << ",\"user_lockout__v7\":" << (int64_t)m.get<ClientFirmConfig::user_lockout__v7>();
        o << ",\"enforce_history__v7\":" << (int64_t)m.get<ClientFirmConfig::enforce_history__v7>();
        o << ",\"pw_age__v7\":" << m.get<ClientFirmConfig::pw_age__v7>();
        o << ",\"pw_length__v7\":" << m.get<ClientFirmConfig::pw_length__v7>();
        o << ",\"pw_history__v7\":" << m.get<ClientFirmConfig::pw_history__v7>();
        o << ",\"pw_complexity__v7\":" << (int64_t)m.get<ClientFirmConfig::pw_complexity__v7>();
        o << ",\"locate_req_firm__v7\":\"" << m.get<ClientFirmConfig::locate_req_firm__v7>() << "\"";
        o << ",\"locate_data_center__v7\":" << (int64_t)m.get<ClientFirmConfig::locate_data_center__v7>();
        o << ",\"route_table__v7\":\"" << m.get<ClientFirmConfig::route_table__v7>() << "\"";
        o << ",\"user_ticker_src__v7\":" << (int64_t)m.get<ClientFirmConfig::user_ticker_src__v7>();
        o << ",\"user_name__v7\":\"" << m.get<ClientFirmConfig::user_name__v7>() << "\"";
        o << ",\"directed_counter_party\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ClientFirmConfig::directed_counter_party>(); ++i) {
                o << delim << m.get<ClientFirmConfig::directed_counter_party>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"exclude_counter_party\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ClientFirmConfig::exclude_counter_party>(); ++i) {
                o << delim << m.get<ClientFirmConfig::exclude_counter_party>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"locate_pool\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ClientFirmConfig::locate_pool>(); ++i) {
                o << delim << m.get<ClientFirmConfig::locate_pool>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"raw_data_billing\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ClientFirmConfig::raw_data_billing>(); ++i) {
                o << delim << m.get<ClientFirmConfig::raw_data_billing>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"source_i_p\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<ClientFirmConfig::source_i_p>(); ++i) {
                o << delim << m.get<ClientFirmConfig::source_i_p>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}