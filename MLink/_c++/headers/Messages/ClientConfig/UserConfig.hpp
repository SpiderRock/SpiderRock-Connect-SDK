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

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _user_type__GUARD__
    #define _user_type__GUARD__
    DECL_STRONG_TYPE(user_type, spiderrock::protobuf::api::UserType);
    #endif//_user_type__GUARD__

    #ifndef _user_status__GUARD__
    #define _user_status__GUARD__
    DECL_STRONG_TYPE(user_status, spiderrock::protobuf::api::UserStatus);
    #endif//_user_status__GUARD__

    #ifndef _user_status_dttm__GUARD__
    #define _user_status_dttm__GUARD__
    DECL_STRONG_TYPE(user_status_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_user_status_dttm__GUARD__

    #ifndef _user_to_be_frozen__GUARD__
    #define _user_to_be_frozen__GUARD__
    DECL_STRONG_TYPE(user_to_be_frozen, spiderrock::protobuf::api::YesNo);
    #endif//_user_to_be_frozen__GUARD__

    #ifndef _user_to_be_frozen_dttm__GUARD__
    #define _user_to_be_frozen_dttm__GUARD__
    DECL_STRONG_TYPE(user_to_be_frozen_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_user_to_be_frozen_dttm__GUARD__

    #ifndef _user_auth_action__GUARD__
    #define _user_auth_action__GUARD__
    DECL_STRONG_TYPE(user_auth_action, spiderrock::protobuf::api::UserAuthAction);
    #endif//_user_auth_action__GUARD__

    #ifndef _user_auth_state__GUARD__
    #define _user_auth_state__GUARD__
    DECL_STRONG_TYPE(user_auth_state, spiderrock::protobuf::api::UserAuthState);
    #endif//_user_auth_state__GUARD__

    #ifndef _user_auth_error__GUARD__
    #define _user_auth_error__GUARD__
    DECL_STRONG_TYPE(user_auth_error, string);
    #endif//_user_auth_error__GUARD__

    #ifndef _last_invite_timestamp__GUARD__
    #define _last_invite_timestamp__GUARD__
    DECL_STRONG_TYPE(last_invite_timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_invite_timestamp__GUARD__

    #ifndef _last_accept_timestamp__GUARD__
    #define _last_accept_timestamp__GUARD__
    DECL_STRONG_TYPE(last_accept_timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_accept_timestamp__GUARD__

    #ifndef _description__GUARD__
    #define _description__GUARD__
    DECL_STRONG_TYPE(description, string);
    #endif//_description__GUARD__

    #ifndef _display_time_zone__GUARD__
    #define _display_time_zone__GUARD__
    DECL_STRONG_TYPE(display_time_zone, spiderrock::protobuf::api::SRTimeZone);
    #endif//_display_time_zone__GUARD__

    #ifndef _mlink_activity_logging__GUARD__
    #define _mlink_activity_logging__GUARD__
    DECL_STRONG_TYPE(mlink_activity_logging, spiderrock::protobuf::api::LogAmount);
    #endif//_mlink_activity_logging__GUARD__

    #ifndef _client_config_access__GUARD__
    #define _client_config_access__GUARD__
    DECL_STRONG_TYPE(client_config_access, spiderrock::protobuf::api::ConfigAccess);
    #endif//_client_config_access__GUARD__

    #ifndef _account_type_control__GUARD__
    #define _account_type_control__GUARD__
    DECL_STRONG_TYPE(account_type_control, spiderrock::protobuf::api::AccountTypeControl);
    #endif//_account_type_control__GUARD__

    #ifndef _prod_order_access__GUARD__
    #define _prod_order_access__GUARD__
    DECL_STRONG_TYPE(prod_order_access, spiderrock::protobuf::api::OrderAccess);
    #endif//_prod_order_access__GUARD__

    #ifndef _test_order_access__GUARD__
    #define _test_order_access__GUARD__
    DECL_STRONG_TYPE(test_order_access, spiderrock::protobuf::api::OrderAccess);
    #endif//_test_order_access__GUARD__

    #ifndef _can_cancel_prod_orders__GUARD__
    #define _can_cancel_prod_orders__GUARD__
    DECL_STRONG_TYPE(can_cancel_prod_orders, spiderrock::protobuf::api::YesNo);
    #endif//_can_cancel_prod_orders__GUARD__

    #ifndef _can_cancel_test_orders__GUARD__
    #define _can_cancel_test_orders__GUARD__
    DECL_STRONG_TYPE(can_cancel_test_orders, spiderrock::protobuf::api::YesNo);
    #endif//_can_cancel_test_orders__GUARD__

    #ifndef _can_book_prod_executions__GUARD__
    #define _can_book_prod_executions__GUARD__
    DECL_STRONG_TYPE(can_book_prod_executions, spiderrock::protobuf::api::YesNo);
    #endif//_can_book_prod_executions__GUARD__

    #ifndef _can_book_test_executions__GUARD__
    #define _can_book_test_executions__GUARD__
    DECL_STRONG_TYPE(can_book_test_executions, spiderrock::protobuf::api::YesNo);
    #endif//_can_book_test_executions__GUARD__

    #ifndef _can_edit_mar_risk__GUARD__
    #define _can_edit_mar_risk__GUARD__
    DECL_STRONG_TYPE(can_edit_mar_risk, spiderrock::protobuf::api::YesNo);
    #endif//_can_edit_mar_risk__GUARD__

    #ifndef _can_edit_supervisory_risk__GUARD__
    #define _can_edit_supervisory_risk__GUARD__
    DECL_STRONG_TYPE(can_edit_supervisory_risk, spiderrock::protobuf::api::YesNo);
    #endif//_can_edit_supervisory_risk__GUARD__

    #ifndef _can_edit_stock_locate_list__GUARD__
    #define _can_edit_stock_locate_list__GUARD__
    DECL_STRONG_TYPE(can_edit_stock_locate_list, spiderrock::protobuf::api::YesNo);
    #endif//_can_edit_stock_locate_list__GUARD__

    #ifndef _display_name__GUARD__
    #define _display_name__GUARD__
    DECL_STRONG_TYPE(display_name, string);
    #endif//_display_name__GUARD__

    #ifndef _contact_email__GUARD__
    #define _contact_email__GUARD__
    DECL_STRONG_TYPE(contact_email, string);
    #endif//_contact_email__GUARD__

    #ifndef _contact_phone__GUARD__
    #define _contact_phone__GUARD__
    DECL_STRONG_TYPE(contact_phone, string);
    #endif//_contact_phone__GUARD__

    #ifndef _contact_slack__GUARD__
    #define _contact_slack__GUARD__
    DECL_STRONG_TYPE(contact_slack, string);
    #endif//_contact_slack__GUARD__

    #ifndef _contact_ice_chat__GUARD__
    #define _contact_ice_chat__GUARD__
    DECL_STRONG_TYPE(contact_ice_chat, string);
    #endif//_contact_ice_chat__GUARD__

    #ifndef _contact_bberg_handle__GUARD__
    #define _contact_bberg_handle__GUARD__
    DECL_STRONG_TYPE(contact_bberg_handle, string);
    #endif//_contact_bberg_handle__GUARD__

    #ifndef _chat_client_firm__GUARD__
    #define _chat_client_firm__GUARD__
    DECL_STRONG_TYPE(chat_client_firm, string);
    #endif//_chat_client_firm__GUARD__

    #ifndef _chat_prod_accnt__GUARD__
    #define _chat_prod_accnt__GUARD__
    DECL_STRONG_TYPE(chat_prod_accnt, string);
    #endif//_chat_prod_accnt__GUARD__

    #ifndef _chat_test_accnt__GUARD__
    #define _chat_test_accnt__GUARD__
    DECL_STRONG_TYPE(chat_test_accnt, string);
    #endif//_chat_test_accnt__GUARD__

    #ifndef _chat_show_risk__GUARD__
    #define _chat_show_risk__GUARD__
    DECL_STRONG_TYPE(chat_show_risk, spiderrock::protobuf::api::YesNo);
    #endif//_chat_show_risk__GUARD__

    #ifndef _auction_view__GUARD__
    #define _auction_view__GUARD__
    DECL_STRONG_TYPE(auction_view, spiderrock::protobuf::api::AuctionView);
    #endif//_auction_view__GUARD__

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

    #ifndef _default_accnt__GUARD__
    #define _default_accnt__GUARD__
    DECL_STRONG_TYPE(default_accnt, string);
    #endif//_default_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _cme_trader_id__GUARD__
    #define _cme_trader_id__GUARD__
    DECL_STRONG_TYPE(cme_trader_id, string);
    #endif//_cme_trader_id__GUARD__

    #ifndef _cme_location__GUARD__
    #define _cme_location__GUARD__
    DECL_STRONG_TYPE(cme_location, string);
    #endif//_cme_location__GUARD__

    #ifndef _cfe_trader_id__GUARD__
    #define _cfe_trader_id__GUARD__
    DECL_STRONG_TYPE(cfe_trader_id, string);
    #endif//_cfe_trader_id__GUARD__

    #ifndef _cfe_frequent_trader_id__GUARD__
    #define _cfe_frequent_trader_id__GUARD__
    DECL_STRONG_TYPE(cfe_frequent_trader_id, string);
    #endif//_cfe_frequent_trader_id__GUARD__

    #ifndef _cfe_location__GUARD__
    #define _cfe_location__GUARD__
    DECL_STRONG_TYPE(cfe_location, string);
    #endif//_cfe_location__GUARD__

    #ifndef _ice_trader_id__GUARD__
    #define _ice_trader_id__GUARD__
    DECL_STRONG_TYPE(ice_trader_id, string);
    #endif//_ice_trader_id__GUARD__

    #ifndef _ice_password__GUARD__
    #define _ice_password__GUARD__
    DECL_STRONG_TYPE(ice_password, string);
    #endif//_ice_password__GUARD__

    #ifndef _ice_company_id__GUARD__
    #define _ice_company_id__GUARD__
    DECL_STRONG_TYPE(ice_company_id, string);
    #endif//_ice_company_id__GUARD__

    #ifndef _ice_sub_room__GUARD__
    #define _ice_sub_room__GUARD__
    DECL_STRONG_TYPE(ice_sub_room, string);
    #endif//_ice_sub_room__GUARD__

    #ifndef _cboe_trader_id__GUARD__
    #define _cboe_trader_id__GUARD__
    DECL_STRONG_TYPE(cboe_trader_id, string);
    #endif//_cboe_trader_id__GUARD__

    #ifndef _firm_pos_visibility__GUARD__
    #define _firm_pos_visibility__GUARD__
    DECL_STRONG_TYPE(firm_pos_visibility, spiderrock::protobuf::api::YesNo);
    #endif//_firm_pos_visibility__GUARD__

    #ifndef _allow_random_strategy__GUARD__
    #define _allow_random_strategy__GUARD__
    DECL_STRONG_TYPE(allow_random_strategy, spiderrock::protobuf::api::YesNo);
    #endif//_allow_random_strategy__GUARD__

    #ifndef _tool_server_code__GUARD__
    #define _tool_server_code__GUARD__
    DECL_STRONG_TYPE(tool_server_code, spiderrock::protobuf::api::ToolServerCode);
    #endif//_tool_server_code__GUARD__

    #ifndef _tool_server_host__GUARD__
    #define _tool_server_host__GUARD__
    DECL_STRONG_TYPE(tool_server_host, string);
    #endif//_tool_server_host__GUARD__

    #ifndef _tool_server_port__GUARD__
    #define _tool_server_port__GUARD__
    DECL_STRONG_TYPE(tool_server_port, int32);
    #endif//_tool_server_port__GUARD__

    #ifndef _tools_auto_shutdown__GUARD__
    #define _tools_auto_shutdown__GUARD__
    DECL_STRONG_TYPE(tools_auto_shutdown, spiderrock::protobuf::api::YesNo);
    #endif//_tools_auto_shutdown__GUARD__

    #ifndef _tools_auto_shutdown_time__GUARD__
    #define _tools_auto_shutdown_time__GUARD__
    DECL_STRONG_TYPE(tools_auto_shutdown_time, std::chrono::nanoseconds);
    #endif//_tools_auto_shutdown_time__GUARD__

    #ifndef _srse_pwd_hash__GUARD__
    #define _srse_pwd_hash__GUARD__
    DECL_STRONG_TYPE(srse_pwd_hash, string);
    #endif//_srse_pwd_hash__GUARD__

    #ifndef _srse_num_cores__GUARD__
    #define _srse_num_cores__GUARD__
    DECL_STRONG_TYPE(srse_num_cores, int32);
    #endif//_srse_num_cores__GUARD__

    #ifndef _srse_max_connects_per_day__GUARD__
    #define _srse_max_connects_per_day__GUARD__
    DECL_STRONG_TYPE(srse_max_connects_per_day, int32);
    #endif//_srse_max_connects_per_day__GUARD__

    #ifndef _srse_max_concurrent_connects__GUARD__
    #define _srse_max_concurrent_connects__GUARD__
    DECL_STRONG_TYPE(srse_max_concurrent_connects, int32);
    #endif//_srse_max_concurrent_connects__GUARD__

    #ifndef _srse_max_row_cache__GUARD__
    #define _srse_max_row_cache__GUARD__
    DECL_STRONG_TYPE(srse_max_row_cache, int32);
    #endif//_srse_max_row_cache__GUARD__

    #ifndef _srse_max_new_orders__GUARD__
    #define _srse_max_new_orders__GUARD__
    DECL_STRONG_TYPE(srse_max_new_orders, int32);
    #endif//_srse_max_new_orders__GUARD__

    #ifndef _srse_max_new_orders_per_sec__GUARD__
    #define _srse_max_new_orders_per_sec__GUARD__
    DECL_STRONG_TYPE(srse_max_new_orders_per_sec, int32);
    #endif//_srse_max_new_orders_per_sec__GUARD__

    #ifndef _srse_max_new_orders_per_statement__GUARD__
    #define _srse_max_new_orders_per_statement__GUARD__
    DECL_STRONG_TYPE(srse_max_new_orders_per_statement, int32);
    #endif//_srse_max_new_orders_per_statement__GUARD__

    #ifndef _nms_badge__GUARD__
    #define _nms_badge__GUARD__
    DECL_STRONG_TYPE(nms_badge, string);
    #endif//_nms_badge__GUARD__

    #ifndef _cfe_badge__GUARD__
    #define _cfe_badge__GUARD__
    DECL_STRONG_TYPE(cfe_badge, string);
    #endif//_cfe_badge__GUARD__

    #ifndef _cme_badge__GUARD__
    #define _cme_badge__GUARD__
    DECL_STRONG_TYPE(cme_badge, string);
    #endif//_cme_badge__GUARD__

    #ifndef _ice_badge__GUARD__
    #define _ice_badge__GUARD__
    DECL_STRONG_TYPE(ice_badge, string);
    #endif//_ice_badge__GUARD__

    #ifndef _api_key__GUARD__
    #define _api_key__GUARD__
    DECL_STRONG_TYPE(api_key, string);
    #endif//_api_key__GUARD__

    #ifndef _api_key_expires__GUARD__
    #define _api_key_expires__GUARD__
    DECL_STRONG_TYPE(api_key_expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_api_key_expires__GUARD__

    #ifndef _has_api_key_access__GUARD__
    #define _has_api_key_access__GUARD__
    DECL_STRONG_TYPE(has_api_key_access, spiderrock::protobuf::api::YesNo);
    #endif//_has_api_key_access__GUARD__

    #ifndef _password_hash__GUARD__
    #define _password_hash__GUARD__
    DECL_STRONG_TYPE(password_hash, string);
    #endif//_password_hash__GUARD__

    #ifndef _password_expires__GUARD__
    #define _password_expires__GUARD__
    DECL_STRONG_TYPE(password_expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_password_expires__GUARD__

    #ifndef _temp_password_hash__GUARD__
    #define _temp_password_hash__GUARD__
    DECL_STRONG_TYPE(temp_password_hash, string);
    #endif//_temp_password_hash__GUARD__

    #ifndef _temp_password_expires__GUARD__
    #define _temp_password_expires__GUARD__
    DECL_STRONG_TYPE(temp_password_expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_temp_password_expires__GUARD__

    #ifndef _temp_password_counter__GUARD__
    #define _temp_password_counter__GUARD__
    DECL_STRONG_TYPE(temp_password_counter, int32);
    #endif//_temp_password_counter__GUARD__

    #ifndef _mfa_secret__GUARD__
    #define _mfa_secret__GUARD__
    DECL_STRONG_TYPE(mfa_secret, string);
    #endif//_mfa_secret__GUARD__

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

    #ifndef _client_firm_list__v7__GUARD__
    #define _client_firm_list__v7__GUARD__
    DECL_STRONG_TYPE(client_firm_list__v7, string);
    #endif//_client_firm_list__v7__GUARD__

    #ifndef _billing_firm__v7__GUARD__
    #define _billing_firm__v7__GUARD__
    DECL_STRONG_TYPE(billing_firm__v7, string);
    #endif//_billing_firm__v7__GUARD__

    #ifndef _first_name__v7__GUARD__
    #define _first_name__v7__GUARD__
    DECL_STRONG_TYPE(first_name__v7, string);
    #endif//_first_name__v7__GUARD__

    #ifndef _last_name__v7__GUARD__
    #define _last_name__v7__GUARD__
    DECL_STRONG_TYPE(last_name__v7, string);
    #endif//_last_name__v7__GUARD__

    #ifndef _trader_id__v7__GUARD__
    #define _trader_id__v7__GUARD__
    DECL_STRONG_TYPE(trader_id__v7, string);
    #endif//_trader_id__v7__GUARD__

    #ifndef _ice_trader_id__v7__GUARD__
    #define _ice_trader_id__v7__GUARD__
    DECL_STRONG_TYPE(ice_trader_id__v7, string);
    #endif//_ice_trader_id__v7__GUARD__

    #ifndef _ice_password__v7__GUARD__
    #define _ice_password__v7__GUARD__
    DECL_STRONG_TYPE(ice_password__v7, string);
    #endif//_ice_password__v7__GUARD__

    #ifndef _ice_company_id__v7__GUARD__
    #define _ice_company_id__v7__GUARD__
    DECL_STRONG_TYPE(ice_company_id__v7, string);
    #endif//_ice_company_id__v7__GUARD__

    #ifndef _sr_access_hash__v7__GUARD__
    #define _sr_access_hash__v7__GUARD__
    DECL_STRONG_TYPE(sr_access_hash__v7, string);
    #endif//_sr_access_hash__v7__GUARD__

    #ifndef _exec_username__v7__GUARD__
    #define _exec_username__v7__GUARD__
    DECL_STRONG_TYPE(exec_username__v7, string);
    #endif//_exec_username__v7__GUARD__

    #ifndef _user_group__v7__GUARD__
    #define _user_group__v7__GUARD__
    DECL_STRONG_TYPE(user_group__v7, string);
    #endif//_user_group__v7__GUARD__

    #ifndef _accnt_list__v7__GUARD__
    #define _accnt_list__v7__GUARD__
    DECL_STRONG_TYPE(accnt_list__v7, string);
    #endif//_accnt_list__v7__GUARD__

    #ifndef _view_inactive__v7__GUARD__
    #define _view_inactive__v7__GUARD__
    DECL_STRONG_TYPE(view_inactive__v7, spiderrock::protobuf::api::YesNo);
    #endif//_view_inactive__v7__GUARD__

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

    #ifndef _srse_product_acl__v7__GUARD__
    #define _srse_product_acl__v7__GUARD__
    DECL_STRONG_TYPE(srse_product_acl__v7, string);
    #endif//_srse_product_acl__v7__GUARD__

    #ifndef _srse_historical_acl__v7__GUARD__
    #define _srse_historical_acl__v7__GUARD__
    DECL_STRONG_TYPE(srse_historical_acl__v7, string);
    #endif//_srse_historical_acl__v7__GUARD__

    #ifndef _contact_im__v7__GUARD__
    #define _contact_im__v7__GUARD__
    DECL_STRONG_TYPE(contact_im__v7, string);
    #endif//_contact_im__v7__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _access_type__GUARD__
    #define _access_type__GUARD__
    DECL_STRONG_TYPE(access_type, spiderrock::protobuf::api::AccountAccessType);
    #endif//_access_type__GUARD__

    #ifndef _id__GUARD__
    #define _id__GUARD__
    DECL_STRONG_TYPE(id, int32);
    #endif//_id__GUARD__

    #ifndef _hash__GUARD__
    #define _hash__GUARD__
    DECL_STRONG_TYPE(hash, string);
    #endif//_hash__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _created__GUARD__
    #define _created__GUARD__
    DECL_STRONG_TYPE(created, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_created__GUARD__

    #ifndef _label__GUARD__
    #define _label__GUARD__
    DECL_STRONG_TYPE(label, string);
    #endif//_label__GUARD__

    #ifndef _product_code__CitrixProductCode__GUARD__
    #define _product_code__CitrixProductCode__GUARD__
    DECL_STRONG_TYPE(product_code__CitrixProductCode, spiderrock::protobuf::api::CitrixProductCode);
    #endif//_product_code__CitrixProductCode__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _client_firm__v7__GUARD__
    #define _client_firm__v7__GUARD__
    DECL_STRONG_TYPE(client_firm__v7, string);
    #endif//_client_firm__v7__GUARD__

    #ifndef _expires__v7__GUARD__
    #define _expires__v7__GUARD__
    DECL_STRONG_TYPE(expires__v7, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__v7__GUARD__

    #ifndef _token__MLinkToken__GUARD__
    #define _token__MLinkToken__GUARD__
    DECL_STRONG_TYPE(token__MLinkToken, spiderrock::protobuf::api::MLinkToken);
    #endif//_token__MLinkToken__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _stk_exch__StkExch__GUARD__
    #define _stk_exch__StkExch__GUARD__
    DECL_STRONG_TYPE(stk_exch__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_stk_exch__StkExch__GUARD__

    #ifndef _fut_exch__GUARD__
    #define _fut_exch__GUARD__
    DECL_STRONG_TYPE(fut_exch, spiderrock::protobuf::api::FutExch);
    #endif//_fut_exch__GUARD__

    #ifndef _opt_exch__GUARD__
    #define _opt_exch__GUARD__
    DECL_STRONG_TYPE(opt_exch, spiderrock::protobuf::api::OptExch);
    #endif//_opt_exch__GUARD__

    #ifndef _token__MarketDataToken__GUARD__
    #define _token__MarketDataToken__GUARD__
    DECL_STRONG_TYPE(token__MarketDataToken, spiderrock::protobuf::api::MarketDataToken);
    #endif//_token__MarketDataToken__GUARD__

    #ifndef _scope__MarketDataScope__GUARD__
    #define _scope__MarketDataScope__GUARD__
    DECL_STRONG_TYPE(scope__MarketDataScope, spiderrock::protobuf::api::MarketDataScope);
    #endif//_scope__MarketDataScope__GUARD__

    #ifndef _classification__GUARD__
    #define _classification__GUARD__
    DECL_STRONG_TYPE(classification, spiderrock::protobuf::api::MktDataClass);
    #endif//_classification__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _product_code__SrseProductCode__GUARD__
    #define _product_code__SrseProductCode__GUARD__
    DECL_STRONG_TYPE(product_code__SrseProductCode, spiderrock::protobuf::api::SrseProductCode);
    #endif//_product_code__SrseProductCode__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _product_code__SrseProductCode__GUARD__
    #define _product_code__SrseProductCode__GUARD__
    DECL_STRONG_TYPE(product_code__SrseProductCode, spiderrock::protobuf::api::SrseProductCode);
    #endif//_product_code__SrseProductCode__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _token__WebProductToken__GUARD__
    #define _token__WebProductToken__GUARD__
    DECL_STRONG_TYPE(token__WebProductToken, spiderrock::protobuf::api::WebProductToken);
    #endif//_token__WebProductToken__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _value__string__GUARD__
    #define _value__string__GUARD__
    DECL_STRONG_TYPE(value__string, string);
    #endif//_value__string__GUARD__

    
    class UserConfig_PKey {
        public:
        //using statements for all types used in this class
        using user_name = spiderrock::protobuf::api::user_name;

        private:
        user_name m_user_name{};

        public:
        user_name get_user_name() const {
            return m_user_name;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const user_name & value) { set_user_name(value); }


        UserConfig_PKey() {}

        virtual ~UserConfig_PKey() {
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
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_user_name);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_user_name));
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
                    case 10: {m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_AccountAccessControl {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using access_type = spiderrock::protobuf::api::access_type;

        private:
        accnt m_accnt{};
        access_type m_access_type{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        access_type get_access_type() const {
            return m_access_type;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_access_type(const access_type& value)  {
            m_access_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_AccountAccessControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_AccountAccessControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const access_type & value) { set_access_type(value); }


        UserConfig_AccountAccessControl() {}

        virtual ~UserConfig_AccountAccessControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_accnt);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountAccessType>(m_access_type)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountAccessType>(m_access_type)));
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
                    case 154: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 157: {m_access_type = static_cast<spiderrock::protobuf::api::AccountAccessType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_ApiKeys {
        public:
        //using statements for all types used in this class
        using id = spiderrock::protobuf::api::id;
        using hash = spiderrock::protobuf::api::hash;
        using expires = spiderrock::protobuf::api::expires;
        using created = spiderrock::protobuf::api::created;
        using label = spiderrock::protobuf::api::label;

        private:
        id m_id{};
        hash m_hash{};
        expires m_expires{};
        created m_created{};
        label m_label{};

        public:
        id get_id() const {
            return m_id;
        }
        hash get_hash() const {
            return m_hash;
        }
        expires get_expires() const {
            return m_expires;
        }
        created get_created() const {
            return m_created;
        }
        label get_label() const {
            return m_label;
        }
        void set_id(const id& value)  {
            m_id = value;
        }
        void set_hash(const hash& value)  {
            m_hash = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        void set_created(const created& value)  {
            m_created = value;
        }
        void set_label(const label& value)  {
            m_label = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_ApiKeys::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_ApiKeys::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const id & value) { set_id(value); }
        void set(const hash & value) { set_hash(value); }
        void set(const expires & value) { set_expires(value); }
        void set(const created & value) { set_created(value); }
        void set(const label & value) { set_label(value); }


        UserConfig_ApiKeys() {}

        virtual ~UserConfig_ApiKeys() {
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
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(402,m_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(403,m_hash);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(404, m_expires);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(405, m_created);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(406,m_label);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,402,m_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,403,static_cast<string>(m_hash));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 404, m_expires);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 405, m_created);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,406,static_cast<string>(m_label));
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
                    case 402: {m_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 403: {m_hash = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 404: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 405: {
                        m_created = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 406: {m_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_CitrixProductControl {
        public:
        //using statements for all types used in this class
        using product_code = spiderrock::protobuf::api::product_code__CitrixProductCode;
        using expires = spiderrock::protobuf::api::expires;

        private:
        product_code m_product_code{};
        expires m_expires{};

        public:
        product_code get_product_code() const {
            return m_product_code;
        }
        expires get_expires() const {
            return m_expires;
        }
        void set_product_code(const product_code& value)  {
            m_product_code = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_CitrixProductControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_CitrixProductControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const product_code & value) { set_product_code(value); }
        void set(const expires & value) { set_expires(value); }


        UserConfig_CitrixProductControl() {}

        virtual ~UserConfig_CitrixProductControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(252,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CitrixProductCode>(m_product_code)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(253, m_expires);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,252,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CitrixProductCode>(m_product_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 253, m_expires);
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
                    case 252: {m_product_code = static_cast<spiderrock::protobuf::api::CitrixProductCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 253: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_ClientFirmViewAccess_V7 {
        public:
        //using statements for all types used in this class
        using client_firm__v7 = spiderrock::protobuf::api::client_firm__v7;
        using expires__v7 = spiderrock::protobuf::api::expires__v7;

        private:
        client_firm__v7 m_client_firm__v7{};
        expires__v7 m_expires__v7{};

        public:
        client_firm__v7 get_client_firm__v7() const {
            return m_client_firm__v7;
        }
        expires__v7 get_expires__v7() const {
            return m_expires__v7;
        }
        void set_client_firm__v7(const client_firm__v7& value)  {
            m_client_firm__v7 = value;
        }
        void set_expires__v7(const expires__v7& value)  {
            m_expires__v7 = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_ClientFirmViewAccess_V7::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_ClientFirmViewAccess_V7::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm__v7 & value) { set_client_firm__v7(value); }
        void set(const expires__v7 & value) { set_expires__v7(value); }


        UserConfig_ClientFirmViewAccess_V7() {}

        virtual ~UserConfig_ClientFirmViewAccess_V7() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5020,m_client_firm__v7);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(5021, m_expires__v7);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5020,static_cast<string>(m_client_firm__v7));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 5021, m_expires__v7);
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
                    case 5020: {m_client_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 5021: {
                        m_expires__v7 = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_MLinkControl {
        public:
        //using statements for all types used in this class
        using token = spiderrock::protobuf::api::token__MLinkToken;
        using expires = spiderrock::protobuf::api::expires;
        using stk_exch = spiderrock::protobuf::api::stk_exch__StkExch;
        using fut_exch = spiderrock::protobuf::api::fut_exch;
        using opt_exch = spiderrock::protobuf::api::opt_exch;

        private:
        token m_token{};
        expires m_expires{};
        stk_exch m_stk_exch{};
        fut_exch m_fut_exch{};
        opt_exch m_opt_exch{};

        public:
        token get_token() const {
            return m_token;
        }
        expires get_expires() const {
            return m_expires;
        }
        stk_exch get_stk_exch() const {
            return m_stk_exch;
        }
        fut_exch get_fut_exch() const {
            return m_fut_exch;
        }
        opt_exch get_opt_exch() const {
            return m_opt_exch;
        }
        void set_token(const token& value)  {
            m_token = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        void set_stk_exch(const stk_exch& value)  {
            m_stk_exch = value;
        }
        void set_fut_exch(const fut_exch& value)  {
            m_fut_exch = value;
        }
        void set_opt_exch(const opt_exch& value)  {
            m_opt_exch = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_MLinkControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_MLinkControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const expires & value) { set_expires(value); }
        void set(const stk_exch & value) { set_stk_exch(value); }
        void set(const fut_exch & value) { set_fut_exch(value); }
        void set(const opt_exch & value) { set_opt_exch(value); }


        UserConfig_MLinkControl() {}

        virtual ~UserConfig_MLinkControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(322, m_expires);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_stk_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_fut_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_opt_exch)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 322, m_expires);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_stk_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_fut_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_opt_exch)));
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
                    case 319: {m_token = static_cast<spiderrock::protobuf::api::MLinkToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 322: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 325: {m_stk_exch = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 328: {m_fut_exch = static_cast<spiderrock::protobuf::api::FutExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 331: {m_opt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_MarketDataControl {
        public:
        //using statements for all types used in this class
        using token = spiderrock::protobuf::api::token__MarketDataToken;
        using scope = spiderrock::protobuf::api::scope__MarketDataScope;
        using classification = spiderrock::protobuf::api::classification;
        using expires = spiderrock::protobuf::api::expires;

        private:
        token m_token{};
        scope m_scope{};
        classification m_classification{};
        expires m_expires{};

        public:
        token get_token() const {
            return m_token;
        }
        scope get_scope() const {
            return m_scope;
        }
        classification get_classification() const {
            return m_classification;
        }
        expires get_expires() const {
            return m_expires;
        }
        void set_token(const token& value)  {
            m_token = value;
        }
        void set_scope(const scope& value)  {
            m_scope = value;
        }
        void set_classification(const classification& value)  {
            m_classification = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_MarketDataControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_MarketDataControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const scope & value) { set_scope(value); }
        void set(const classification & value) { set_classification(value); }
        void set(const expires & value) { set_expires(value); }


        UserConfig_MarketDataControl() {}

        virtual ~UserConfig_MarketDataControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(340,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataScope>(m_scope)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktDataClass>(m_classification)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(346, m_expires);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,340,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataScope>(m_scope)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktDataClass>(m_classification)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 346, m_expires);
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
                    case 337: {m_token = static_cast<spiderrock::protobuf::api::MarketDataToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 340: {m_scope = static_cast<spiderrock::protobuf::api::MarketDataScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 343: {m_classification = static_cast<spiderrock::protobuf::api::MktDataClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 346: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_SrseHistoricalControl {
        public:
        //using statements for all types used in this class
        using product_code = spiderrock::protobuf::api::product_code__SrseProductCode;
        using expires = spiderrock::protobuf::api::expires;

        private:
        product_code m_product_code{};
        expires m_expires{};

        public:
        product_code get_product_code() const {
            return m_product_code;
        }
        expires get_expires() const {
            return m_expires;
        }
        void set_product_code(const product_code& value)  {
            m_product_code = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_SrseHistoricalControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_SrseHistoricalControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const product_code & value) { set_product_code(value); }
        void set(const expires & value) { set_expires(value); }


        UserConfig_SrseHistoricalControl() {}

        virtual ~UserConfig_SrseHistoricalControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(278,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrseProductCode>(m_product_code)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(279, m_expires);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,278,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrseProductCode>(m_product_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 279, m_expires);
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
                    case 278: {m_product_code = static_cast<spiderrock::protobuf::api::SrseProductCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 279: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_SrseProductControl {
        public:
        //using statements for all types used in this class
        using product_code = spiderrock::protobuf::api::product_code__SrseProductCode;
        using expires = spiderrock::protobuf::api::expires;

        private:
        product_code m_product_code{};
        expires m_expires{};

        public:
        product_code get_product_code() const {
            return m_product_code;
        }
        expires get_expires() const {
            return m_expires;
        }
        void set_product_code(const product_code& value)  {
            m_product_code = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_SrseProductControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_SrseProductControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const product_code & value) { set_product_code(value); }
        void set(const expires & value) { set_expires(value); }


        UserConfig_SrseProductControl() {}

        virtual ~UserConfig_SrseProductControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(275,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrseProductCode>(m_product_code)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(276, m_expires);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,275,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrseProductCode>(m_product_code)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 276, m_expires);
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
                    case 275: {m_product_code = static_cast<spiderrock::protobuf::api::SrseProductCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 276: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserConfig_WebProductControl {
        public:
        //using statements for all types used in this class
        using token = spiderrock::protobuf::api::token__WebProductToken;
        using expires = spiderrock::protobuf::api::expires;
        using value = spiderrock::protobuf::api::value__string;

        private:
        token m_token{};
        expires m_expires{};
        value m_value{};

        public:
        token get_token() const {
            return m_token;
        }
        expires get_expires() const {
            return m_expires;
        }
        value get_value() const {
            return m_value;
        }
        void set_token(const token& value)  {
            m_token = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        void set_value(const value& value)  {
            m_value = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_WebProductControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig_WebProductControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const expires & value) { set_expires(value); }
        void set(const value & value) { set_value(value); }


        UserConfig_WebProductControl() {}

        virtual ~UserConfig_WebProductControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WebProductToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(310, m_expires);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(313,m_value);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WebProductToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 310, m_expires);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,313,static_cast<string>(m_value));
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
                    case 307: {m_token = static_cast<spiderrock::protobuf::api::WebProductToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 310: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 313: {m_value = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class UserConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::UserConfig_PKey;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using user_type = spiderrock::protobuf::api::user_type;
        using user_status = spiderrock::protobuf::api::user_status;
        using user_status_dttm = spiderrock::protobuf::api::user_status_dttm;
        using user_to_be_frozen = spiderrock::protobuf::api::user_to_be_frozen;
        using user_to_be_frozen_dttm = spiderrock::protobuf::api::user_to_be_frozen_dttm;
        using user_auth_action = spiderrock::protobuf::api::user_auth_action;
        using user_auth_state = spiderrock::protobuf::api::user_auth_state;
        using user_auth_error = spiderrock::protobuf::api::user_auth_error;
        using last_invite_timestamp = spiderrock::protobuf::api::last_invite_timestamp;
        using last_accept_timestamp = spiderrock::protobuf::api::last_accept_timestamp;
        using description = spiderrock::protobuf::api::description;
        using display_time_zone = spiderrock::protobuf::api::display_time_zone;
        using mlink_activity_logging = spiderrock::protobuf::api::mlink_activity_logging;
        using client_config_access = spiderrock::protobuf::api::client_config_access;
        using account_type_control = spiderrock::protobuf::api::account_type_control;
        using prod_order_access = spiderrock::protobuf::api::prod_order_access;
        using test_order_access = spiderrock::protobuf::api::test_order_access;
        using can_cancel_prod_orders = spiderrock::protobuf::api::can_cancel_prod_orders;
        using can_cancel_test_orders = spiderrock::protobuf::api::can_cancel_test_orders;
        using can_book_prod_executions = spiderrock::protobuf::api::can_book_prod_executions;
        using can_book_test_executions = spiderrock::protobuf::api::can_book_test_executions;
        using can_edit_mar_risk = spiderrock::protobuf::api::can_edit_mar_risk;
        using can_edit_supervisory_risk = spiderrock::protobuf::api::can_edit_supervisory_risk;
        using can_edit_stock_locate_list = spiderrock::protobuf::api::can_edit_stock_locate_list;
        using display_name = spiderrock::protobuf::api::display_name;
        using contact_email = spiderrock::protobuf::api::contact_email;
        using contact_phone = spiderrock::protobuf::api::contact_phone;
        using contact_slack = spiderrock::protobuf::api::contact_slack;
        using contact_ice_chat = spiderrock::protobuf::api::contact_ice_chat;
        using contact_bberg_handle = spiderrock::protobuf::api::contact_bberg_handle;
        using chat_client_firm = spiderrock::protobuf::api::chat_client_firm;
        using chat_prod_accnt = spiderrock::protobuf::api::chat_prod_accnt;
        using chat_test_accnt = spiderrock::protobuf::api::chat_test_accnt;
        using chat_show_risk = spiderrock::protobuf::api::chat_show_risk;
        using auction_view = spiderrock::protobuf::api::auction_view;
        using auth_type = spiderrock::protobuf::api::auth_type;
        using auth_extern_name = spiderrock::protobuf::api::auth_extern_name;
        using auth_extern_params = spiderrock::protobuf::api::auth_extern_params;
        using default_accnt = spiderrock::protobuf::api::default_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using cme_trader_id = spiderrock::protobuf::api::cme_trader_id;
        using cme_location = spiderrock::protobuf::api::cme_location;
        using cfe_trader_id = spiderrock::protobuf::api::cfe_trader_id;
        using cfe_frequent_trader_id = spiderrock::protobuf::api::cfe_frequent_trader_id;
        using cfe_location = spiderrock::protobuf::api::cfe_location;
        using ice_trader_id = spiderrock::protobuf::api::ice_trader_id;
        using ice_password = spiderrock::protobuf::api::ice_password;
        using ice_company_id = spiderrock::protobuf::api::ice_company_id;
        using ice_sub_room = spiderrock::protobuf::api::ice_sub_room;
        using cboe_trader_id = spiderrock::protobuf::api::cboe_trader_id;
        using firm_pos_visibility = spiderrock::protobuf::api::firm_pos_visibility;
        using allow_random_strategy = spiderrock::protobuf::api::allow_random_strategy;
        using tool_server_code = spiderrock::protobuf::api::tool_server_code;
        using tool_server_host = spiderrock::protobuf::api::tool_server_host;
        using tool_server_port = spiderrock::protobuf::api::tool_server_port;
        using tools_auto_shutdown = spiderrock::protobuf::api::tools_auto_shutdown;
        using tools_auto_shutdown_time = spiderrock::protobuf::api::tools_auto_shutdown_time;
        using srse_pwd_hash = spiderrock::protobuf::api::srse_pwd_hash;
        using srse_num_cores = spiderrock::protobuf::api::srse_num_cores;
        using srse_max_connects_per_day = spiderrock::protobuf::api::srse_max_connects_per_day;
        using srse_max_concurrent_connects = spiderrock::protobuf::api::srse_max_concurrent_connects;
        using srse_max_row_cache = spiderrock::protobuf::api::srse_max_row_cache;
        using srse_max_new_orders = spiderrock::protobuf::api::srse_max_new_orders;
        using srse_max_new_orders_per_sec = spiderrock::protobuf::api::srse_max_new_orders_per_sec;
        using srse_max_new_orders_per_statement = spiderrock::protobuf::api::srse_max_new_orders_per_statement;
        using nms_badge = spiderrock::protobuf::api::nms_badge;
        using cfe_badge = spiderrock::protobuf::api::cfe_badge;
        using cme_badge = spiderrock::protobuf::api::cme_badge;
        using ice_badge = spiderrock::protobuf::api::ice_badge;
        using api_key = spiderrock::protobuf::api::api_key;
        using api_key_expires = spiderrock::protobuf::api::api_key_expires;
        using has_api_key_access = spiderrock::protobuf::api::has_api_key_access;
        using password_hash = spiderrock::protobuf::api::password_hash;
        using password_expires = spiderrock::protobuf::api::password_expires;
        using temp_password_hash = spiderrock::protobuf::api::temp_password_hash;
        using temp_password_expires = spiderrock::protobuf::api::temp_password_expires;
        using temp_password_counter = spiderrock::protobuf::api::temp_password_counter;
        using mfa_secret = spiderrock::protobuf::api::mfa_secret;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using client_firm_list__v7 = spiderrock::protobuf::api::client_firm_list__v7;
        using billing_firm__v7 = spiderrock::protobuf::api::billing_firm__v7;
        using first_name__v7 = spiderrock::protobuf::api::first_name__v7;
        using last_name__v7 = spiderrock::protobuf::api::last_name__v7;
        using trader_id__v7 = spiderrock::protobuf::api::trader_id__v7;
        using ice_trader_id__v7 = spiderrock::protobuf::api::ice_trader_id__v7;
        using ice_password__v7 = spiderrock::protobuf::api::ice_password__v7;
        using ice_company_id__v7 = spiderrock::protobuf::api::ice_company_id__v7;
        using sr_access_hash__v7 = spiderrock::protobuf::api::sr_access_hash__v7;
        using exec_username__v7 = spiderrock::protobuf::api::exec_username__v7;
        using user_group__v7 = spiderrock::protobuf::api::user_group__v7;
        using accnt_list__v7 = spiderrock::protobuf::api::accnt_list__v7;
        using view_inactive__v7 = spiderrock::protobuf::api::view_inactive__v7;
        using tool_product_acl__v7 = spiderrock::protobuf::api::tool_product_acl__v7;
        using elastic_product_acl__v7 = spiderrock::protobuf::api::elastic_product_acl__v7;
        using market_data_acl__v7 = spiderrock::protobuf::api::market_data_acl__v7;
        using srse_product_acl__v7 = spiderrock::protobuf::api::srse_product_acl__v7;
        using srse_historical_acl__v7 = spiderrock::protobuf::api::srse_historical_acl__v7;
        using contact_im__v7 = spiderrock::protobuf::api::contact_im__v7;
        using account_access_control = spiderrock::protobuf::api::UserConfig_AccountAccessControl;
        using api_keys = spiderrock::protobuf::api::UserConfig_ApiKeys;
        using citrix_product_control = spiderrock::protobuf::api::UserConfig_CitrixProductControl;
        using client_firm_view_access__v7 = spiderrock::protobuf::api::UserConfig_ClientFirmViewAccess_V7;
        using m_link_control = spiderrock::protobuf::api::UserConfig_MLinkControl;
        using market_data_control = spiderrock::protobuf::api::UserConfig_MarketDataControl;
        using srse_historical_control = spiderrock::protobuf::api::UserConfig_SrseHistoricalControl;
        using srse_product_control = spiderrock::protobuf::api::UserConfig_SrseProductControl;
        using web_product_control = spiderrock::protobuf::api::UserConfig_WebProductControl;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        client_firm m_client_firm{};
        user_type m_user_type{};
        user_status m_user_status{};
        user_status_dttm m_user_status_dttm{};
        user_to_be_frozen m_user_to_be_frozen{};
        user_to_be_frozen_dttm m_user_to_be_frozen_dttm{};
        user_auth_action m_user_auth_action{};
        user_auth_state m_user_auth_state{};
        user_auth_error m_user_auth_error{};
        last_invite_timestamp m_last_invite_timestamp{};
        last_accept_timestamp m_last_accept_timestamp{};
        description m_description{};
        display_time_zone m_display_time_zone{};
        mlink_activity_logging m_mlink_activity_logging{};
        client_config_access m_client_config_access{};
        account_type_control m_account_type_control{};
        prod_order_access m_prod_order_access{};
        test_order_access m_test_order_access{};
        can_cancel_prod_orders m_can_cancel_prod_orders{};
        can_cancel_test_orders m_can_cancel_test_orders{};
        can_book_prod_executions m_can_book_prod_executions{};
        can_book_test_executions m_can_book_test_executions{};
        can_edit_mar_risk m_can_edit_mar_risk{};
        can_edit_supervisory_risk m_can_edit_supervisory_risk{};
        can_edit_stock_locate_list m_can_edit_stock_locate_list{};
        display_name m_display_name{};
        contact_email m_contact_email{};
        contact_phone m_contact_phone{};
        contact_slack m_contact_slack{};
        contact_ice_chat m_contact_ice_chat{};
        contact_bberg_handle m_contact_bberg_handle{};
        chat_client_firm m_chat_client_firm{};
        chat_prod_accnt m_chat_prod_accnt{};
        chat_test_accnt m_chat_test_accnt{};
        chat_show_risk m_chat_show_risk{};
        auction_view m_auction_view{};
        auth_type m_auth_type{};
        auth_extern_name m_auth_extern_name{};
        auth_extern_params m_auth_extern_params{};
        default_accnt m_default_accnt{};
        alt_user_name m_alt_user_name{};
        cme_trader_id m_cme_trader_id{};
        cme_location m_cme_location{};
        cfe_trader_id m_cfe_trader_id{};
        cfe_frequent_trader_id m_cfe_frequent_trader_id{};
        cfe_location m_cfe_location{};
        ice_trader_id m_ice_trader_id{};
        ice_password m_ice_password{};
        ice_company_id m_ice_company_id{};
        ice_sub_room m_ice_sub_room{};
        cboe_trader_id m_cboe_trader_id{};
        firm_pos_visibility m_firm_pos_visibility{};
        allow_random_strategy m_allow_random_strategy{};
        tool_server_code m_tool_server_code{};
        tool_server_host m_tool_server_host{};
        tool_server_port m_tool_server_port{};
        tools_auto_shutdown m_tools_auto_shutdown{};
        tools_auto_shutdown_time m_tools_auto_shutdown_time{};
        srse_pwd_hash m_srse_pwd_hash{};
        srse_num_cores m_srse_num_cores{};
        srse_max_connects_per_day m_srse_max_connects_per_day{};
        srse_max_concurrent_connects m_srse_max_concurrent_connects{};
        srse_max_row_cache m_srse_max_row_cache{};
        srse_max_new_orders m_srse_max_new_orders{};
        srse_max_new_orders_per_sec m_srse_max_new_orders_per_sec{};
        srse_max_new_orders_per_statement m_srse_max_new_orders_per_statement{};
        nms_badge m_nms_badge{};
        cfe_badge m_cfe_badge{};
        cme_badge m_cme_badge{};
        ice_badge m_ice_badge{};
        api_key m_api_key{};
        api_key_expires m_api_key_expires{};
        has_api_key_access m_has_api_key_access{};
        password_hash m_password_hash{};
        password_expires m_password_expires{};
        temp_password_hash m_temp_password_hash{};
        temp_password_expires m_temp_password_expires{};
        temp_password_counter m_temp_password_counter{};
        mfa_secret m_mfa_secret{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        client_firm_list__v7 m_client_firm_list__v7{};
        billing_firm__v7 m_billing_firm__v7{};
        first_name__v7 m_first_name__v7{};
        last_name__v7 m_last_name__v7{};
        trader_id__v7 m_trader_id__v7{};
        ice_trader_id__v7 m_ice_trader_id__v7{};
        ice_password__v7 m_ice_password__v7{};
        ice_company_id__v7 m_ice_company_id__v7{};
        sr_access_hash__v7 m_sr_access_hash__v7{};
        exec_username__v7 m_exec_username__v7{};
        user_group__v7 m_user_group__v7{};
        accnt_list__v7 m_accnt_list__v7{};
        view_inactive__v7 m_view_inactive__v7{};
        tool_product_acl__v7 m_tool_product_acl__v7{};
        elastic_product_acl__v7 m_elastic_product_acl__v7{};
        market_data_acl__v7 m_market_data_acl__v7{};
        srse_product_acl__v7 m_srse_product_acl__v7{};
        srse_historical_acl__v7 m_srse_historical_acl__v7{};
        contact_im__v7 m_contact_im__v7{};
        std::vector<account_access_control> m_account_access_control{};
        std::vector<api_keys> m_api_keys{};
        std::vector<citrix_product_control> m_citrix_product_control{};
        std::vector<client_firm_view_access__v7> m_client_firm_view_access__v7{};
        std::vector<m_link_control> m_m_link_control{};
        std::vector<market_data_control> m_market_data_control{};
        std::vector<srse_historical_control> m_srse_historical_control{};
        std::vector<srse_product_control> m_srse_product_control{};
        std::vector<web_product_control> m_web_product_control{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        user_type get_user_type() const {
            return m_user_type;
        }		
        user_status get_user_status() const {
            return m_user_status;
        }		
        user_status_dttm get_user_status_dttm() const {
            return m_user_status_dttm;
        }		
        user_to_be_frozen get_user_to_be_frozen() const {
            return m_user_to_be_frozen;
        }		
        user_to_be_frozen_dttm get_user_to_be_frozen_dttm() const {
            return m_user_to_be_frozen_dttm;
        }		
        user_auth_action get_user_auth_action() const {
            return m_user_auth_action;
        }		
        user_auth_state get_user_auth_state() const {
            return m_user_auth_state;
        }		
        user_auth_error get_user_auth_error() const {
            return m_user_auth_error;
        }		
        last_invite_timestamp get_last_invite_timestamp() const {
            return m_last_invite_timestamp;
        }		
        last_accept_timestamp get_last_accept_timestamp() const {
            return m_last_accept_timestamp;
        }		
        description get_description() const {
            return m_description;
        }		
        display_time_zone get_display_time_zone() const {
            return m_display_time_zone;
        }		
        mlink_activity_logging get_mlink_activity_logging() const {
            return m_mlink_activity_logging;
        }		
        client_config_access get_client_config_access() const {
            return m_client_config_access;
        }		
        account_type_control get_account_type_control() const {
            return m_account_type_control;
        }		
        prod_order_access get_prod_order_access() const {
            return m_prod_order_access;
        }		
        test_order_access get_test_order_access() const {
            return m_test_order_access;
        }		
        can_cancel_prod_orders get_can_cancel_prod_orders() const {
            return m_can_cancel_prod_orders;
        }		
        can_cancel_test_orders get_can_cancel_test_orders() const {
            return m_can_cancel_test_orders;
        }		
        can_book_prod_executions get_can_book_prod_executions() const {
            return m_can_book_prod_executions;
        }		
        can_book_test_executions get_can_book_test_executions() const {
            return m_can_book_test_executions;
        }		
        can_edit_mar_risk get_can_edit_mar_risk() const {
            return m_can_edit_mar_risk;
        }		
        can_edit_supervisory_risk get_can_edit_supervisory_risk() const {
            return m_can_edit_supervisory_risk;
        }		
        can_edit_stock_locate_list get_can_edit_stock_locate_list() const {
            return m_can_edit_stock_locate_list;
        }		
        display_name get_display_name() const {
            return m_display_name;
        }		
        contact_email get_contact_email() const {
            return m_contact_email;
        }		
        contact_phone get_contact_phone() const {
            return m_contact_phone;
        }		
        contact_slack get_contact_slack() const {
            return m_contact_slack;
        }		
        contact_ice_chat get_contact_ice_chat() const {
            return m_contact_ice_chat;
        }		
        contact_bberg_handle get_contact_bberg_handle() const {
            return m_contact_bberg_handle;
        }		
        chat_client_firm get_chat_client_firm() const {
            return m_chat_client_firm;
        }		
        chat_prod_accnt get_chat_prod_accnt() const {
            return m_chat_prod_accnt;
        }		
        chat_test_accnt get_chat_test_accnt() const {
            return m_chat_test_accnt;
        }		
        chat_show_risk get_chat_show_risk() const {
            return m_chat_show_risk;
        }		
        auction_view get_auction_view() const {
            return m_auction_view;
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
        default_accnt get_default_accnt() const {
            return m_default_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        cme_trader_id get_cme_trader_id() const {
            return m_cme_trader_id;
        }		
        cme_location get_cme_location() const {
            return m_cme_location;
        }		
        cfe_trader_id get_cfe_trader_id() const {
            return m_cfe_trader_id;
        }		
        cfe_frequent_trader_id get_cfe_frequent_trader_id() const {
            return m_cfe_frequent_trader_id;
        }		
        cfe_location get_cfe_location() const {
            return m_cfe_location;
        }		
        ice_trader_id get_ice_trader_id() const {
            return m_ice_trader_id;
        }		
        ice_password get_ice_password() const {
            return m_ice_password;
        }		
        ice_company_id get_ice_company_id() const {
            return m_ice_company_id;
        }		
        ice_sub_room get_ice_sub_room() const {
            return m_ice_sub_room;
        }		
        cboe_trader_id get_cboe_trader_id() const {
            return m_cboe_trader_id;
        }		
        firm_pos_visibility get_firm_pos_visibility() const {
            return m_firm_pos_visibility;
        }		
        allow_random_strategy get_allow_random_strategy() const {
            return m_allow_random_strategy;
        }		
        tool_server_code get_tool_server_code() const {
            return m_tool_server_code;
        }		
        tool_server_host get_tool_server_host() const {
            return m_tool_server_host;
        }		
        tool_server_port get_tool_server_port() const {
            return m_tool_server_port;
        }		
        tools_auto_shutdown get_tools_auto_shutdown() const {
            return m_tools_auto_shutdown;
        }		
        tools_auto_shutdown_time get_tools_auto_shutdown_time() const {
            return m_tools_auto_shutdown_time;
        }		
        srse_pwd_hash get_srse_pwd_hash() const {
            return m_srse_pwd_hash;
        }		
        srse_num_cores get_srse_num_cores() const {
            return m_srse_num_cores;
        }		
        srse_max_connects_per_day get_srse_max_connects_per_day() const {
            return m_srse_max_connects_per_day;
        }		
        srse_max_concurrent_connects get_srse_max_concurrent_connects() const {
            return m_srse_max_concurrent_connects;
        }		
        srse_max_row_cache get_srse_max_row_cache() const {
            return m_srse_max_row_cache;
        }		
        srse_max_new_orders get_srse_max_new_orders() const {
            return m_srse_max_new_orders;
        }		
        srse_max_new_orders_per_sec get_srse_max_new_orders_per_sec() const {
            return m_srse_max_new_orders_per_sec;
        }		
        srse_max_new_orders_per_statement get_srse_max_new_orders_per_statement() const {
            return m_srse_max_new_orders_per_statement;
        }		
        nms_badge get_nms_badge() const {
            return m_nms_badge;
        }		
        cfe_badge get_cfe_badge() const {
            return m_cfe_badge;
        }		
        cme_badge get_cme_badge() const {
            return m_cme_badge;
        }		
        ice_badge get_ice_badge() const {
            return m_ice_badge;
        }		
        api_key get_api_key() const {
            return m_api_key;
        }		
        api_key_expires get_api_key_expires() const {
            return m_api_key_expires;
        }		
        has_api_key_access get_has_api_key_access() const {
            return m_has_api_key_access;
        }		
        password_hash get_password_hash() const {
            return m_password_hash;
        }		
        password_expires get_password_expires() const {
            return m_password_expires;
        }		
        temp_password_hash get_temp_password_hash() const {
            return m_temp_password_hash;
        }		
        temp_password_expires get_temp_password_expires() const {
            return m_temp_password_expires;
        }		
        temp_password_counter get_temp_password_counter() const {
            return m_temp_password_counter;
        }		
        mfa_secret get_mfa_secret() const {
            return m_mfa_secret;
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
        client_firm_list__v7 get_client_firm_list__v7() const {
            return m_client_firm_list__v7;
        }		
        billing_firm__v7 get_billing_firm__v7() const {
            return m_billing_firm__v7;
        }		
        first_name__v7 get_first_name__v7() const {
            return m_first_name__v7;
        }		
        last_name__v7 get_last_name__v7() const {
            return m_last_name__v7;
        }		
        trader_id__v7 get_trader_id__v7() const {
            return m_trader_id__v7;
        }		
        ice_trader_id__v7 get_ice_trader_id__v7() const {
            return m_ice_trader_id__v7;
        }		
        ice_password__v7 get_ice_password__v7() const {
            return m_ice_password__v7;
        }		
        ice_company_id__v7 get_ice_company_id__v7() const {
            return m_ice_company_id__v7;
        }		
        sr_access_hash__v7 get_sr_access_hash__v7() const {
            return m_sr_access_hash__v7;
        }		
        exec_username__v7 get_exec_username__v7() const {
            return m_exec_username__v7;
        }		
        user_group__v7 get_user_group__v7() const {
            return m_user_group__v7;
        }		
        accnt_list__v7 get_accnt_list__v7() const {
            return m_accnt_list__v7;
        }		
        view_inactive__v7 get_view_inactive__v7() const {
            return m_view_inactive__v7;
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
        srse_product_acl__v7 get_srse_product_acl__v7() const {
            return m_srse_product_acl__v7;
        }		
        srse_historical_acl__v7 get_srse_historical_acl__v7() const {
            return m_srse_historical_acl__v7;
        }		
        contact_im__v7 get_contact_im__v7() const {
            return m_contact_im__v7;
        }
        const std::vector<account_access_control>& get_account_access_control_list() const {
            return m_account_access_control;
        }
        const account_access_control& get_account_access_control(const int i) const {
            return m_account_access_control.at(i);
        }
        const std::vector<api_keys>& get_api_keys_list() const {
            return m_api_keys;
        }
        const api_keys& get_api_keys(const int i) const {
            return m_api_keys.at(i);
        }
        const std::vector<citrix_product_control>& get_citrix_product_control_list() const {
            return m_citrix_product_control;
        }
        const citrix_product_control& get_citrix_product_control(const int i) const {
            return m_citrix_product_control.at(i);
        }
        const std::vector<client_firm_view_access__v7>& get_client_firm_view_access__v7_list() const {
            return m_client_firm_view_access__v7;
        }
        const client_firm_view_access__v7& get_client_firm_view_access__v7(const int i) const {
            return m_client_firm_view_access__v7.at(i);
        }
        const std::vector<m_link_control>& get_m_link_control_list() const {
            return m_m_link_control;
        }
        const m_link_control& get_m_link_control(const int i) const {
            return m_m_link_control.at(i);
        }
        const std::vector<market_data_control>& get_market_data_control_list() const {
            return m_market_data_control;
        }
        const market_data_control& get_market_data_control(const int i) const {
            return m_market_data_control.at(i);
        }
        const std::vector<srse_historical_control>& get_srse_historical_control_list() const {
            return m_srse_historical_control;
        }
        const srse_historical_control& get_srse_historical_control(const int i) const {
            return m_srse_historical_control.at(i);
        }
        const std::vector<srse_product_control>& get_srse_product_control_list() const {
            return m_srse_product_control;
        }
        const srse_product_control& get_srse_product_control(const int i) const {
            return m_srse_product_control.at(i);
        }
        const std::vector<web_product_control>& get_web_product_control_list() const {
            return m_web_product_control;
        }
        const web_product_control& get_web_product_control(const int i) const {
            return m_web_product_control.at(i);
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
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_user_type(const user_type& value)  {
            m_user_type = value;
        }
        void set_user_status(const user_status& value)  {
            m_user_status = value;
        }
        void set_user_status_dttm(const user_status_dttm& value)  {
            m_user_status_dttm = value;
        }
        void set_user_to_be_frozen(const user_to_be_frozen& value)  {
            m_user_to_be_frozen = value;
        }
        void set_user_to_be_frozen_dttm(const user_to_be_frozen_dttm& value)  {
            m_user_to_be_frozen_dttm = value;
        }
        void set_user_auth_action(const user_auth_action& value)  {
            m_user_auth_action = value;
        }
        void set_user_auth_state(const user_auth_state& value)  {
            m_user_auth_state = value;
        }
        void set_user_auth_error(const user_auth_error& value)  {
            m_user_auth_error = value;
        }
        void set_last_invite_timestamp(const last_invite_timestamp& value)  {
            m_last_invite_timestamp = value;
        }
        void set_last_accept_timestamp(const last_accept_timestamp& value)  {
            m_last_accept_timestamp = value;
        }
        void set_description(const description& value)  {
            m_description = value;
        }
        void set_display_time_zone(const display_time_zone& value)  {
            m_display_time_zone = value;
        }
        void set_mlink_activity_logging(const mlink_activity_logging& value)  {
            m_mlink_activity_logging = value;
        }
        void set_client_config_access(const client_config_access& value)  {
            m_client_config_access = value;
        }
        void set_account_type_control(const account_type_control& value)  {
            m_account_type_control = value;
        }
        void set_prod_order_access(const prod_order_access& value)  {
            m_prod_order_access = value;
        }
        void set_test_order_access(const test_order_access& value)  {
            m_test_order_access = value;
        }
        void set_can_cancel_prod_orders(const can_cancel_prod_orders& value)  {
            m_can_cancel_prod_orders = value;
        }
        void set_can_cancel_test_orders(const can_cancel_test_orders& value)  {
            m_can_cancel_test_orders = value;
        }
        void set_can_book_prod_executions(const can_book_prod_executions& value)  {
            m_can_book_prod_executions = value;
        }
        void set_can_book_test_executions(const can_book_test_executions& value)  {
            m_can_book_test_executions = value;
        }
        void set_can_edit_mar_risk(const can_edit_mar_risk& value)  {
            m_can_edit_mar_risk = value;
        }
        void set_can_edit_supervisory_risk(const can_edit_supervisory_risk& value)  {
            m_can_edit_supervisory_risk = value;
        }
        void set_can_edit_stock_locate_list(const can_edit_stock_locate_list& value)  {
            m_can_edit_stock_locate_list = value;
        }
        void set_display_name(const display_name& value)  {
            m_display_name = value;
        }
        void set_contact_email(const contact_email& value)  {
            m_contact_email = value;
        }
        void set_contact_phone(const contact_phone& value)  {
            m_contact_phone = value;
        }
        void set_contact_slack(const contact_slack& value)  {
            m_contact_slack = value;
        }
        void set_contact_ice_chat(const contact_ice_chat& value)  {
            m_contact_ice_chat = value;
        }
        void set_contact_bberg_handle(const contact_bberg_handle& value)  {
            m_contact_bberg_handle = value;
        }
        void set_chat_client_firm(const chat_client_firm& value)  {
            m_chat_client_firm = value;
        }
        void set_chat_prod_accnt(const chat_prod_accnt& value)  {
            m_chat_prod_accnt = value;
        }
        void set_chat_test_accnt(const chat_test_accnt& value)  {
            m_chat_test_accnt = value;
        }
        void set_chat_show_risk(const chat_show_risk& value)  {
            m_chat_show_risk = value;
        }
        void set_auction_view(const auction_view& value)  {
            m_auction_view = value;
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
        void set_default_accnt(const default_accnt& value)  {
            m_default_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_cme_trader_id(const cme_trader_id& value)  {
            m_cme_trader_id = value;
        }
        void set_cme_location(const cme_location& value)  {
            m_cme_location = value;
        }
        void set_cfe_trader_id(const cfe_trader_id& value)  {
            m_cfe_trader_id = value;
        }
        void set_cfe_frequent_trader_id(const cfe_frequent_trader_id& value)  {
            m_cfe_frequent_trader_id = value;
        }
        void set_cfe_location(const cfe_location& value)  {
            m_cfe_location = value;
        }
        void set_ice_trader_id(const ice_trader_id& value)  {
            m_ice_trader_id = value;
        }
        void set_ice_password(const ice_password& value)  {
            m_ice_password = value;
        }
        void set_ice_company_id(const ice_company_id& value)  {
            m_ice_company_id = value;
        }
        void set_ice_sub_room(const ice_sub_room& value)  {
            m_ice_sub_room = value;
        }
        void set_cboe_trader_id(const cboe_trader_id& value)  {
            m_cboe_trader_id = value;
        }
        void set_firm_pos_visibility(const firm_pos_visibility& value)  {
            m_firm_pos_visibility = value;
        }
        void set_allow_random_strategy(const allow_random_strategy& value)  {
            m_allow_random_strategy = value;
        }
        void set_tool_server_code(const tool_server_code& value)  {
            m_tool_server_code = value;
        }
        void set_tool_server_host(const tool_server_host& value)  {
            m_tool_server_host = value;
        }
        void set_tool_server_port(const tool_server_port& value)  {
            m_tool_server_port = value;
        }
        void set_tools_auto_shutdown(const tools_auto_shutdown& value)  {
            m_tools_auto_shutdown = value;
        }
        void set_tools_auto_shutdown_time(const tools_auto_shutdown_time& value)  {
            m_tools_auto_shutdown_time = value;
        }
        void set_srse_pwd_hash(const srse_pwd_hash& value)  {
            m_srse_pwd_hash = value;
        }
        void set_srse_num_cores(const srse_num_cores& value)  {
            m_srse_num_cores = value;
        }
        void set_srse_max_connects_per_day(const srse_max_connects_per_day& value)  {
            m_srse_max_connects_per_day = value;
        }
        void set_srse_max_concurrent_connects(const srse_max_concurrent_connects& value)  {
            m_srse_max_concurrent_connects = value;
        }
        void set_srse_max_row_cache(const srse_max_row_cache& value)  {
            m_srse_max_row_cache = value;
        }
        void set_srse_max_new_orders(const srse_max_new_orders& value)  {
            m_srse_max_new_orders = value;
        }
        void set_srse_max_new_orders_per_sec(const srse_max_new_orders_per_sec& value)  {
            m_srse_max_new_orders_per_sec = value;
        }
        void set_srse_max_new_orders_per_statement(const srse_max_new_orders_per_statement& value)  {
            m_srse_max_new_orders_per_statement = value;
        }
        void set_nms_badge(const nms_badge& value)  {
            m_nms_badge = value;
        }
        void set_cfe_badge(const cfe_badge& value)  {
            m_cfe_badge = value;
        }
        void set_cme_badge(const cme_badge& value)  {
            m_cme_badge = value;
        }
        void set_ice_badge(const ice_badge& value)  {
            m_ice_badge = value;
        }
        void set_api_key(const api_key& value)  {
            m_api_key = value;
        }
        void set_api_key_expires(const api_key_expires& value)  {
            m_api_key_expires = value;
        }
        void set_has_api_key_access(const has_api_key_access& value)  {
            m_has_api_key_access = value;
        }
        void set_password_hash(const password_hash& value)  {
            m_password_hash = value;
        }
        void set_password_expires(const password_expires& value)  {
            m_password_expires = value;
        }
        void set_temp_password_hash(const temp_password_hash& value)  {
            m_temp_password_hash = value;
        }
        void set_temp_password_expires(const temp_password_expires& value)  {
            m_temp_password_expires = value;
        }
        void set_temp_password_counter(const temp_password_counter& value)  {
            m_temp_password_counter = value;
        }
        void set_mfa_secret(const mfa_secret& value)  {
            m_mfa_secret = value;
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
        void set_client_firm_list__v7(const client_firm_list__v7& value)  {
            m_client_firm_list__v7 = value;
        }
        void set_billing_firm__v7(const billing_firm__v7& value)  {
            m_billing_firm__v7 = value;
        }
        void set_first_name__v7(const first_name__v7& value)  {
            m_first_name__v7 = value;
        }
        void set_last_name__v7(const last_name__v7& value)  {
            m_last_name__v7 = value;
        }
        void set_trader_id__v7(const trader_id__v7& value)  {
            m_trader_id__v7 = value;
        }
        void set_ice_trader_id__v7(const ice_trader_id__v7& value)  {
            m_ice_trader_id__v7 = value;
        }
        void set_ice_password__v7(const ice_password__v7& value)  {
            m_ice_password__v7 = value;
        }
        void set_ice_company_id__v7(const ice_company_id__v7& value)  {
            m_ice_company_id__v7 = value;
        }
        void set_sr_access_hash__v7(const sr_access_hash__v7& value)  {
            m_sr_access_hash__v7 = value;
        }
        void set_exec_username__v7(const exec_username__v7& value)  {
            m_exec_username__v7 = value;
        }
        void set_user_group__v7(const user_group__v7& value)  {
            m_user_group__v7 = value;
        }
        void set_accnt_list__v7(const accnt_list__v7& value)  {
            m_accnt_list__v7 = value;
        }
        void set_view_inactive__v7(const view_inactive__v7& value)  {
            m_view_inactive__v7 = value;
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
        void set_srse_product_acl__v7(const srse_product_acl__v7& value)  {
            m_srse_product_acl__v7 = value;
        }
        void set_srse_historical_acl__v7(const srse_historical_acl__v7& value)  {
            m_srse_historical_acl__v7 = value;
        }
        void set_contact_im__v7(const contact_im__v7& value)  {
            m_contact_im__v7 = value;
        }
        void set_account_access_control_list(const std::vector<account_access_control>& list)  {
            m_account_access_control = list;
        }
        void add_account_access_control(const account_access_control& item) {
            m_account_access_control.emplace_back(item);
        }
        void set_api_keys_list(const std::vector<api_keys>& list)  {
            m_api_keys = list;
        }
        void add_api_keys(const api_keys& item) {
            m_api_keys.emplace_back(item);
        }
        void set_citrix_product_control_list(const std::vector<citrix_product_control>& list)  {
            m_citrix_product_control = list;
        }
        void add_citrix_product_control(const citrix_product_control& item) {
            m_citrix_product_control.emplace_back(item);
        }
        void set_client_firm_view_access__v7_list(const std::vector<client_firm_view_access__v7>& list)  {
            m_client_firm_view_access__v7 = list;
        }
        void add_client_firm_view_access__v7(const client_firm_view_access__v7& item) {
            m_client_firm_view_access__v7.emplace_back(item);
        }
        void set_m_link_control_list(const std::vector<m_link_control>& list)  {
            m_m_link_control = list;
        }
        void add_m_link_control(const m_link_control& item) {
            m_m_link_control.emplace_back(item);
        }
        void set_market_data_control_list(const std::vector<market_data_control>& list)  {
            m_market_data_control = list;
        }
        void add_market_data_control(const market_data_control& item) {
            m_market_data_control.emplace_back(item);
        }
        void set_srse_historical_control_list(const std::vector<srse_historical_control>& list)  {
            m_srse_historical_control = list;
        }
        void add_srse_historical_control(const srse_historical_control& item) {
            m_srse_historical_control.emplace_back(item);
        }
        void set_srse_product_control_list(const std::vector<srse_product_control>& list)  {
            m_srse_product_control = list;
        }
        void add_srse_product_control(const srse_product_control& item) {
            m_srse_product_control.emplace_back(item);
        }
        void set_web_product_control_list(const std::vector<web_product_control>& list)  {
            m_web_product_control = list;
        }
        void add_web_product_control(const web_product_control& item) {
            m_web_product_control.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserConfig::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const user_type & value) {
            set_user_type(value);
        }
        void set(const user_status & value) {
            set_user_status(value);
        }
        void set(const user_status_dttm & value) {
            set_user_status_dttm(value);
        }
        void set(const user_to_be_frozen & value) {
            set_user_to_be_frozen(value);
        }
        void set(const user_to_be_frozen_dttm & value) {
            set_user_to_be_frozen_dttm(value);
        }
        void set(const user_auth_action & value) {
            set_user_auth_action(value);
        }
        void set(const user_auth_state & value) {
            set_user_auth_state(value);
        }
        void set(const user_auth_error & value) {
            set_user_auth_error(value);
        }
        void set(const last_invite_timestamp & value) {
            set_last_invite_timestamp(value);
        }
        void set(const last_accept_timestamp & value) {
            set_last_accept_timestamp(value);
        }
        void set(const description & value) {
            set_description(value);
        }
        void set(const display_time_zone & value) {
            set_display_time_zone(value);
        }
        void set(const mlink_activity_logging & value) {
            set_mlink_activity_logging(value);
        }
        void set(const client_config_access & value) {
            set_client_config_access(value);
        }
        void set(const account_type_control & value) {
            set_account_type_control(value);
        }
        void set(const prod_order_access & value) {
            set_prod_order_access(value);
        }
        void set(const test_order_access & value) {
            set_test_order_access(value);
        }
        void set(const can_cancel_prod_orders & value) {
            set_can_cancel_prod_orders(value);
        }
        void set(const can_cancel_test_orders & value) {
            set_can_cancel_test_orders(value);
        }
        void set(const can_book_prod_executions & value) {
            set_can_book_prod_executions(value);
        }
        void set(const can_book_test_executions & value) {
            set_can_book_test_executions(value);
        }
        void set(const can_edit_mar_risk & value) {
            set_can_edit_mar_risk(value);
        }
        void set(const can_edit_supervisory_risk & value) {
            set_can_edit_supervisory_risk(value);
        }
        void set(const can_edit_stock_locate_list & value) {
            set_can_edit_stock_locate_list(value);
        }
        void set(const display_name & value) {
            set_display_name(value);
        }
        void set(const contact_email & value) {
            set_contact_email(value);
        }
        void set(const contact_phone & value) {
            set_contact_phone(value);
        }
        void set(const contact_slack & value) {
            set_contact_slack(value);
        }
        void set(const contact_ice_chat & value) {
            set_contact_ice_chat(value);
        }
        void set(const contact_bberg_handle & value) {
            set_contact_bberg_handle(value);
        }
        void set(const chat_client_firm & value) {
            set_chat_client_firm(value);
        }
        void set(const chat_prod_accnt & value) {
            set_chat_prod_accnt(value);
        }
        void set(const chat_test_accnt & value) {
            set_chat_test_accnt(value);
        }
        void set(const chat_show_risk & value) {
            set_chat_show_risk(value);
        }
        void set(const auction_view & value) {
            set_auction_view(value);
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
        void set(const default_accnt & value) {
            set_default_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const cme_trader_id & value) {
            set_cme_trader_id(value);
        }
        void set(const cme_location & value) {
            set_cme_location(value);
        }
        void set(const cfe_trader_id & value) {
            set_cfe_trader_id(value);
        }
        void set(const cfe_frequent_trader_id & value) {
            set_cfe_frequent_trader_id(value);
        }
        void set(const cfe_location & value) {
            set_cfe_location(value);
        }
        void set(const ice_trader_id & value) {
            set_ice_trader_id(value);
        }
        void set(const ice_password & value) {
            set_ice_password(value);
        }
        void set(const ice_company_id & value) {
            set_ice_company_id(value);
        }
        void set(const ice_sub_room & value) {
            set_ice_sub_room(value);
        }
        void set(const cboe_trader_id & value) {
            set_cboe_trader_id(value);
        }
        void set(const firm_pos_visibility & value) {
            set_firm_pos_visibility(value);
        }
        void set(const allow_random_strategy & value) {
            set_allow_random_strategy(value);
        }
        void set(const tool_server_code & value) {
            set_tool_server_code(value);
        }
        void set(const tool_server_host & value) {
            set_tool_server_host(value);
        }
        void set(const tool_server_port & value) {
            set_tool_server_port(value);
        }
        void set(const tools_auto_shutdown & value) {
            set_tools_auto_shutdown(value);
        }
        void set(const tools_auto_shutdown_time & value) {
            set_tools_auto_shutdown_time(value);
        }
        void set(const srse_pwd_hash & value) {
            set_srse_pwd_hash(value);
        }
        void set(const srse_num_cores & value) {
            set_srse_num_cores(value);
        }
        void set(const srse_max_connects_per_day & value) {
            set_srse_max_connects_per_day(value);
        }
        void set(const srse_max_concurrent_connects & value) {
            set_srse_max_concurrent_connects(value);
        }
        void set(const srse_max_row_cache & value) {
            set_srse_max_row_cache(value);
        }
        void set(const srse_max_new_orders & value) {
            set_srse_max_new_orders(value);
        }
        void set(const srse_max_new_orders_per_sec & value) {
            set_srse_max_new_orders_per_sec(value);
        }
        void set(const srse_max_new_orders_per_statement & value) {
            set_srse_max_new_orders_per_statement(value);
        }
        void set(const nms_badge & value) {
            set_nms_badge(value);
        }
        void set(const cfe_badge & value) {
            set_cfe_badge(value);
        }
        void set(const cme_badge & value) {
            set_cme_badge(value);
        }
        void set(const ice_badge & value) {
            set_ice_badge(value);
        }
        void set(const api_key & value) {
            set_api_key(value);
        }
        void set(const api_key_expires & value) {
            set_api_key_expires(value);
        }
        void set(const has_api_key_access & value) {
            set_has_api_key_access(value);
        }
        void set(const password_hash & value) {
            set_password_hash(value);
        }
        void set(const password_expires & value) {
            set_password_expires(value);
        }
        void set(const temp_password_hash & value) {
            set_temp_password_hash(value);
        }
        void set(const temp_password_expires & value) {
            set_temp_password_expires(value);
        }
        void set(const temp_password_counter & value) {
            set_temp_password_counter(value);
        }
        void set(const mfa_secret & value) {
            set_mfa_secret(value);
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
        void set(const client_firm_list__v7 & value) {
            set_client_firm_list__v7(value);
        }
        void set(const billing_firm__v7 & value) {
            set_billing_firm__v7(value);
        }
        void set(const first_name__v7 & value) {
            set_first_name__v7(value);
        }
        void set(const last_name__v7 & value) {
            set_last_name__v7(value);
        }
        void set(const trader_id__v7 & value) {
            set_trader_id__v7(value);
        }
        void set(const ice_trader_id__v7 & value) {
            set_ice_trader_id__v7(value);
        }
        void set(const ice_password__v7 & value) {
            set_ice_password__v7(value);
        }
        void set(const ice_company_id__v7 & value) {
            set_ice_company_id__v7(value);
        }
        void set(const sr_access_hash__v7 & value) {
            set_sr_access_hash__v7(value);
        }
        void set(const exec_username__v7 & value) {
            set_exec_username__v7(value);
        }
        void set(const user_group__v7 & value) {
            set_user_group__v7(value);
        }
        void set(const accnt_list__v7 & value) {
            set_accnt_list__v7(value);
        }
        void set(const view_inactive__v7 & value) {
            set_view_inactive__v7(value);
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
        void set(const srse_product_acl__v7 & value) {
            set_srse_product_acl__v7(value);
        }
        void set(const srse_historical_acl__v7 & value) {
            set_srse_historical_acl__v7(value);
        }
        void set(const contact_im__v7 & value) {
            set_contact_im__v7(value);
        }
        void set(const account_access_control & value) {
            add_account_access_control(value);
        }
        void set(const api_keys & value) {
            add_api_keys(value);
        }
        void set(const citrix_product_control & value) {
            add_citrix_product_control(value);
        }
        void set(const client_firm_view_access__v7 & value) {
            add_client_firm_view_access__v7(value);
        }
        void set(const m_link_control & value) {
            add_m_link_control(value);
        }
        void set(const market_data_control & value) {
            add_market_data_control(value);
        }
        void set(const srse_historical_control & value) {
            add_srse_historical_control(value);
        }
        void set(const srse_product_control & value) {
            add_srse_product_control(value);
        }
        void set(const web_product_control & value) {
            add_web_product_control(value);
        }

        void set(const UserConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_client_firm);
            set(value.m_user_type);
            set(value.m_user_status);
            set(value.m_user_status_dttm);
            set(value.m_user_to_be_frozen);
            set(value.m_user_to_be_frozen_dttm);
            set(value.m_user_auth_action);
            set(value.m_user_auth_state);
            set(value.m_user_auth_error);
            set(value.m_last_invite_timestamp);
            set(value.m_last_accept_timestamp);
            set(value.m_description);
            set(value.m_display_time_zone);
            set(value.m_mlink_activity_logging);
            set(value.m_client_config_access);
            set(value.m_account_type_control);
            set(value.m_prod_order_access);
            set(value.m_test_order_access);
            set(value.m_can_cancel_prod_orders);
            set(value.m_can_cancel_test_orders);
            set(value.m_can_book_prod_executions);
            set(value.m_can_book_test_executions);
            set(value.m_can_edit_mar_risk);
            set(value.m_can_edit_supervisory_risk);
            set(value.m_can_edit_stock_locate_list);
            set(value.m_display_name);
            set(value.m_contact_email);
            set(value.m_contact_phone);
            set(value.m_contact_slack);
            set(value.m_contact_ice_chat);
            set(value.m_contact_bberg_handle);
            set(value.m_chat_client_firm);
            set(value.m_chat_prod_accnt);
            set(value.m_chat_test_accnt);
            set(value.m_chat_show_risk);
            set(value.m_auction_view);
            set(value.m_auth_type);
            set(value.m_auth_extern_name);
            set(value.m_auth_extern_params);
            set(value.m_default_accnt);
            set(value.m_alt_user_name);
            set(value.m_cme_trader_id);
            set(value.m_cme_location);
            set(value.m_cfe_trader_id);
            set(value.m_cfe_frequent_trader_id);
            set(value.m_cfe_location);
            set(value.m_ice_trader_id);
            set(value.m_ice_password);
            set(value.m_ice_company_id);
            set(value.m_ice_sub_room);
            set(value.m_cboe_trader_id);
            set(value.m_firm_pos_visibility);
            set(value.m_allow_random_strategy);
            set(value.m_tool_server_code);
            set(value.m_tool_server_host);
            set(value.m_tool_server_port);
            set(value.m_tools_auto_shutdown);
            set(value.m_tools_auto_shutdown_time);
            set(value.m_srse_pwd_hash);
            set(value.m_srse_num_cores);
            set(value.m_srse_max_connects_per_day);
            set(value.m_srse_max_concurrent_connects);
            set(value.m_srse_max_row_cache);
            set(value.m_srse_max_new_orders);
            set(value.m_srse_max_new_orders_per_sec);
            set(value.m_srse_max_new_orders_per_statement);
            set(value.m_nms_badge);
            set(value.m_cfe_badge);
            set(value.m_cme_badge);
            set(value.m_ice_badge);
            set(value.m_api_key);
            set(value.m_api_key_expires);
            set(value.m_has_api_key_access);
            set(value.m_password_hash);
            set(value.m_password_expires);
            set(value.m_temp_password_hash);
            set(value.m_temp_password_expires);
            set(value.m_temp_password_counter);
            set(value.m_mfa_secret);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
            set(value.m_client_firm_list__v7);
            set(value.m_billing_firm__v7);
            set(value.m_first_name__v7);
            set(value.m_last_name__v7);
            set(value.m_trader_id__v7);
            set(value.m_ice_trader_id__v7);
            set(value.m_ice_password__v7);
            set(value.m_ice_company_id__v7);
            set(value.m_sr_access_hash__v7);
            set(value.m_exec_username__v7);
            set(value.m_user_group__v7);
            set(value.m_accnt_list__v7);
            set(value.m_view_inactive__v7);
            set(value.m_tool_product_acl__v7);
            set(value.m_elastic_product_acl__v7);
            set(value.m_market_data_acl__v7);
            set(value.m_srse_product_acl__v7);
            set(value.m_srse_historical_acl__v7);
            set(value.m_contact_im__v7);set_account_access_control_list(value.m_account_access_control);set_api_keys_list(value.m_api_keys);set_citrix_product_control_list(value.m_citrix_product_control);set_client_firm_view_access__v7_list(value.m_client_firm_view_access__v7);set_m_link_control_list(value.m_m_link_control);set_market_data_control_list(value.m_market_data_control);set_srse_historical_control_list(value.m_srse_historical_control);set_srse_product_control_list(value.m_srse_product_control);set_web_product_control_list(value.m_web_product_control);
        }

        UserConfig() {
            m__meta.set_message_type("UserConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1875, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1875, length);
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
             *this = UserConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeUserStatusDttm() const {
            return (m_user_status_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeUserToBeFrozenDttm() const {
            return (m_user_to_be_frozen_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeUserAuthError() const {
            return !(m_user_auth_error.empty());
        }
        bool IncludeLastInviteTimestamp() const {
            return (m_last_invite_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeLastAcceptTimestamp() const {
            return (m_last_accept_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeDescription() const {
            return !(m_description.empty());
        }
        bool IncludeDisplayName() const {
            return !(m_display_name.empty());
        }
        bool IncludeContactEmail() const {
            return !(m_contact_email.empty());
        }
        bool IncludeContactPhone() const {
            return !(m_contact_phone.empty());
        }
        bool IncludeContactSlack() const {
            return !(m_contact_slack.empty());
        }
        bool IncludeContactIceChat() const {
            return !(m_contact_ice_chat.empty());
        }
        bool IncludeContactBbergHandle() const {
            return !(m_contact_bberg_handle.empty());
        }
        bool IncludeChatClientFirm() const {
            return !(m_chat_client_firm.empty());
        }
        bool IncludeChatProdAccnt() const {
            return !(m_chat_prod_accnt.empty());
        }
        bool IncludeChatTestAccnt() const {
            return !(m_chat_test_accnt.empty());
        }
        bool IncludeAuthExternName() const {
            return !(m_auth_extern_name.empty());
        }
        bool IncludeAuthExternParams() const {
            return !(m_auth_extern_params.empty());
        }
        bool IncludeDefaultAccnt() const {
            return !(m_default_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeCmeTraderId() const {
            return !(m_cme_trader_id.empty());
        }
        bool IncludeCmeLocation() const {
            return !(m_cme_location.empty());
        }
        bool IncludeCfeTraderId() const {
            return !(m_cfe_trader_id.empty());
        }
        bool IncludeCfeFrequentTraderId() const {
            return !(m_cfe_frequent_trader_id.empty());
        }
        bool IncludeCfeLocation() const {
            return !(m_cfe_location.empty());
        }
        bool IncludeIceTraderId() const {
            return !(m_ice_trader_id.empty());
        }
        bool IncludeIcePassword() const {
            return !(m_ice_password.empty());
        }
        bool IncludeIceCompanyId() const {
            return !(m_ice_company_id.empty());
        }
        bool IncludeIceSubRoom() const {
            return !(m_ice_sub_room.empty());
        }
        bool IncludeCboeTraderId() const {
            return !(m_cboe_trader_id.empty());
        }
        bool IncludeToolServerHost() const {
            return !(m_tool_server_host.empty());
        }
        bool IncludeToolServerPort() const {
            return !(m_tool_server_port == 0);
        }
        bool IncludeToolsAutoShutdownTime() const {
            return (m_tools_auto_shutdown_time.count() != 0);
        }
        bool IncludeSrsePwdHash() const {
            return !(m_srse_pwd_hash.empty());
        }
        bool IncludeSrseNumCores() const {
            return !(m_srse_num_cores == 0);
        }
        bool IncludeSrseMaxConnectsPerDay() const {
            return !(m_srse_max_connects_per_day == 0);
        }
        bool IncludeSrseMaxConcurrentConnects() const {
            return !(m_srse_max_concurrent_connects == 0);
        }
        bool IncludeSrseMaxRowCache() const {
            return !(m_srse_max_row_cache == 0);
        }
        bool IncludeSrseMaxNewOrders() const {
            return !(m_srse_max_new_orders == 0);
        }
        bool IncludeSrseMaxNewOrdersPerSec() const {
            return !(m_srse_max_new_orders_per_sec == 0);
        }
        bool IncludeSrseMaxNewOrdersPerStatement() const {
            return !(m_srse_max_new_orders_per_statement == 0);
        }
        bool IncludeNmsBadge() const {
            return !(m_nms_badge.empty());
        }
        bool IncludeCfeBadge() const {
            return !(m_cfe_badge.empty());
        }
        bool IncludeCmeBadge() const {
            return !(m_cme_badge.empty());
        }
        bool IncludeIceBadge() const {
            return !(m_ice_badge.empty());
        }
        bool IncludeApiKey() const {
            return !(m_api_key.empty());
        }
        bool IncludeApiKeyExpires() const {
            return (m_api_key_expires.time_since_epoch().count() != 0);
        }
        bool IncludePasswordHash() const {
            return !(m_password_hash.empty());
        }
        bool IncludePasswordExpires() const {
            return (m_password_expires.time_since_epoch().count() != 0);
        }
        bool IncludeTempPasswordHash() const {
            return !(m_temp_password_hash.empty());
        }
        bool IncludeTempPasswordExpires() const {
            return (m_temp_password_expires.time_since_epoch().count() != 0);
        }
        bool IncludeTempPasswordCounter() const {
            return !(m_temp_password_counter == 0);
        }
        bool IncludeMfaSecret() const {
            return !(m_mfa_secret.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeClientFirmListV7() const {
            return !(m_client_firm_list__v7.empty());
        }
        bool IncludeBillingFirmV7() const {
            return !(m_billing_firm__v7.empty());
        }
        bool IncludeFirstNameV7() const {
            return !(m_first_name__v7.empty());
        }
        bool IncludeLastNameV7() const {
            return !(m_last_name__v7.empty());
        }
        bool IncludeTraderIdV7() const {
            return !(m_trader_id__v7.empty());
        }
        bool IncludeIceTraderIdV7() const {
            return !(m_ice_trader_id__v7.empty());
        }
        bool IncludeIcePasswordV7() const {
            return !(m_ice_password__v7.empty());
        }
        bool IncludeIceCompanyIdV7() const {
            return !(m_ice_company_id__v7.empty());
        }
        bool IncludeSrAccessHashV7() const {
            return !(m_sr_access_hash__v7.empty());
        }
        bool IncludeExecUsernameV7() const {
            return !(m_exec_username__v7.empty());
        }
        bool IncludeUserGroupV7() const {
            return !(m_user_group__v7.empty());
        }
        bool IncludeAccntListV7() const {
            return !(m_accnt_list__v7.empty());
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
        bool IncludeSrseProductAclV7() const {
            return !(m_srse_product_acl__v7.empty());
        }
        bool IncludeSrseHistoricalAclV7() const {
            return !(m_srse_historical_acl__v7.empty());
        }
        bool IncludeContactImV7() const {
            return !(m_contact_im__v7.empty());
        }
        bool IncludeAccountAccessControl() const {
            return (!m_account_access_control.empty());
        }
        bool IncludeApiKeys() const {
            return (!m_api_keys.empty());
        }
        bool IncludeCitrixProductControl() const {
            return (!m_citrix_product_control.empty());
        }
        bool IncludeClientFirmViewAccessV7() const {
            return (!m_client_firm_view_access__v7.empty());
        }
        bool IncludeMLinkControl() const {
            return (!m_m_link_control.empty());
        }
        bool IncludeMarketDataControl() const {
            return (!m_market_data_control.empty());
        }
        bool IncludeSrseHistoricalControl() const {
            return (!m_srse_historical_control.empty());
        }
        bool IncludeSrseProductControl() const {
            return (!m_srse_product_control.empty());
        }
        bool IncludeWebProductControl() const {
            return (!m_web_product_control.empty());
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
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserType>(m_user_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserStatus>(m_user_status)));
            if ( IncludeUserStatusDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(109, m_user_status_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_to_be_frozen)));
            if ( IncludeUserToBeFrozenDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_user_to_be_frozen_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserAuthAction>(m_user_auth_action)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserAuthState>(m_user_auth_state)));
            if ( IncludeUserAuthError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_user_auth_error);
            }
            if ( IncludeLastInviteTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_last_invite_timestamp);
            }
            if ( IncludeLastAcceptTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(130, m_last_accept_timestamp);
            }
            if ( IncludeDescription()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_description);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>(m_display_time_zone)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LogAmount>(m_mlink_activity_logging)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ConfigAccess>(m_client_config_access)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountTypeControl>(m_account_type_control)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(386,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_prod_order_access)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(387,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_test_order_access)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(388,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_prod_orders)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(389,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_test_orders)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(390,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_prod_executions)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(391,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_test_executions)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_mar_risk)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_supervisory_risk)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_stock_locate_list)));
            if ( IncludeDisplayName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_display_name);
            }
            if ( IncludeContactEmail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_contact_email);
            }
            if ( IncludeContactPhone()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_contact_phone);
            }
            if ( IncludeContactSlack()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(196,m_contact_slack);
            }
            if ( IncludeContactIceChat()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_contact_ice_chat);
            }
            if ( IncludeContactBbergHandle()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(202,m_contact_bberg_handle);
            }
            if ( IncludeChatClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(407,m_chat_client_firm);
            }
            if ( IncludeChatProdAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(408,m_chat_prod_accnt);
            }
            if ( IncludeChatTestAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(409,m_chat_test_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(410,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_chat_show_risk)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(411,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionView>(m_auction_view)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>(m_auth_type)));
            if ( IncludeAuthExternName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(208,m_auth_extern_name);
            }
            if ( IncludeAuthExternParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(211,m_auth_extern_params);
            }
            if ( IncludeDefaultAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(214,m_default_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(217,m_alt_user_name);
            }
            if ( IncludeCmeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(220,m_cme_trader_id);
            }
            if ( IncludeCmeLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_cme_location);
            }
            if ( IncludeCfeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_cfe_trader_id);
            }
            if ( IncludeCfeFrequentTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(229,m_cfe_frequent_trader_id);
            }
            if ( IncludeCfeLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_cfe_location);
            }
            if ( IncludeIceTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(235,m_ice_trader_id);
            }
            if ( IncludeIcePassword()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(238,m_ice_password);
            }
            if ( IncludeIceCompanyId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(241,m_ice_company_id);
            }
            if ( IncludeIceSubRoom()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(399,m_ice_sub_room);
            }
            if ( IncludeCboeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(244,m_cboe_trader_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_firm_pos_visibility)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_random_strategy)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolServerCode>(m_tool_server_code)));
            if ( IncludeToolServerHost()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(259,m_tool_server_host);
            }
            if ( IncludeToolServerPort()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(262,m_tool_server_port);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(265,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_tools_auto_shutdown)));
            if ( IncludeToolsAutoShutdownTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(268, m_tools_auto_shutdown_time);
            }
            if ( IncludeSrsePwdHash()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(271,m_srse_pwd_hash);
            }
            if ( IncludeSrseNumCores()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(280,m_srse_num_cores);
            }
            if ( IncludeSrseMaxConnectsPerDay()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(283,m_srse_max_connects_per_day);
            }
            if ( IncludeSrseMaxConcurrentConnects()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(286,m_srse_max_concurrent_connects);
            }
            if ( IncludeSrseMaxRowCache()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(289,m_srse_max_row_cache);
            }
            if ( IncludeSrseMaxNewOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(292,m_srse_max_new_orders);
            }
            if ( IncludeSrseMaxNewOrdersPerSec()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(295,m_srse_max_new_orders_per_sec);
            }
            if ( IncludeSrseMaxNewOrdersPerStatement()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(298,m_srse_max_new_orders_per_statement);
            }
            if ( IncludeNmsBadge()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(395,m_nms_badge);
            }
            if ( IncludeCfeBadge()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(396,m_cfe_badge);
            }
            if ( IncludeCmeBadge()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(397,m_cme_badge);
            }
            if ( IncludeIceBadge()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(398,m_ice_badge);
            }
            if ( IncludeApiKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(355,m_api_key);
            }
            if ( IncludeApiKeyExpires()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(358, m_api_key_expires);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(400,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_api_key_access)));
            if ( IncludePasswordHash()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(361,m_password_hash);
            }
            if ( IncludePasswordExpires()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(364, m_password_expires);
            }
            if ( IncludeTempPasswordHash()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(367,m_temp_password_hash);
            }
            if ( IncludeTempPasswordExpires()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(370, m_temp_password_expires);
            }
            if ( IncludeTempPasswordCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(373,m_temp_password_counter);
            }
            if ( IncludeMfaSecret()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(376,m_mfa_secret);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(379,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(382,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(385, m_timestamp);
            }
            if ( IncludeClientFirmListV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5000,m_client_firm_list__v7);
            }
            if ( IncludeBillingFirmV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5001,m_billing_firm__v7);
            }
            if ( IncludeFirstNameV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5002,m_first_name__v7);
            }
            if ( IncludeLastNameV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5003,m_last_name__v7);
            }
            if ( IncludeTraderIdV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5004,m_trader_id__v7);
            }
            if ( IncludeIceTraderIdV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5005,m_ice_trader_id__v7);
            }
            if ( IncludeIcePasswordV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5006,m_ice_password__v7);
            }
            if ( IncludeIceCompanyIdV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5007,m_ice_company_id__v7);
            }
            if ( IncludeSrAccessHashV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5008,m_sr_access_hash__v7);
            }
            if ( IncludeExecUsernameV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5009,m_exec_username__v7);
            }
            if ( IncludeUserGroupV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5010,m_user_group__v7);
            }
            if ( IncludeAccntListV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5011,m_accnt_list__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5012,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_view_inactive__v7)));
            if ( IncludeToolProductAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5013,m_tool_product_acl__v7);
            }
            if ( IncludeElasticProductAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5014,m_elastic_product_acl__v7);
            }
            if ( IncludeMarketDataAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5015,m_market_data_acl__v7);
            }
            if ( IncludeSrseProductAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5016,m_srse_product_acl__v7);
            }
            if ( IncludeSrseHistoricalAclV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5017,m_srse_historical_acl__v7);
            }
            if ( IncludeContactImV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5018,m_contact_im__v7);
            }
            if ( IncludeAccountAccessControl()) {
                for (auto& item : m_account_access_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(151, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeApiKeys()) {
                for (auto& item : m_api_keys) {
					totalSize += SRProtobufCPP::TagCodec::Size(401, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeCitrixProductControl()) {
                for (auto& item : m_citrix_product_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(251, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeClientFirmViewAccessV7()) {
                for (auto& item : m_client_firm_view_access__v7) {
					totalSize += SRProtobufCPP::TagCodec::Size(5019, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeMLinkControl()) {
                for (auto& item : m_m_link_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(316, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeMarketDataControl()) {
                for (auto& item : m_market_data_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(334, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeSrseHistoricalControl()) {
                for (auto& item : m_srse_historical_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(277, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeSrseProductControl()) {
                for (auto& item : m_srse_product_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(274, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeWebProductControl()) {
                for (auto& item : m_web_product_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(304, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserType>(m_user_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserStatus>(m_user_status)));
            if ( IncludeUserStatusDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 109, m_user_status_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_to_be_frozen)));
            if ( IncludeUserToBeFrozenDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_user_to_be_frozen_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserAuthAction>(m_user_auth_action)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserAuthState>(m_user_auth_state)));
            if ( IncludeUserAuthError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_user_auth_error));
            }
            if ( IncludeLastInviteTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_last_invite_timestamp);
            }
            if ( IncludeLastAcceptTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 130, m_last_accept_timestamp);
            }
            if ( IncludeDescription()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_description));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>(m_display_time_zone)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LogAmount>(m_mlink_activity_logging)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ConfigAccess>(m_client_config_access)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountTypeControl>(m_account_type_control)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,386,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_prod_order_access)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,387,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_test_order_access)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,388,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_prod_orders)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,389,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_test_orders)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,390,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_prod_executions)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,391,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_test_executions)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_mar_risk)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_supervisory_risk)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_stock_locate_list)));
            if ( IncludeDisplayName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_display_name));
            }
            if ( IncludeContactEmail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_contact_email));
            }
            if ( IncludeContactPhone()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_contact_phone));
            }
            if ( IncludeContactSlack()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,196,static_cast<string>(m_contact_slack));
            }
            if ( IncludeContactIceChat()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_contact_ice_chat));
            }
            if ( IncludeContactBbergHandle()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,202,static_cast<string>(m_contact_bberg_handle));
            }
            if ( IncludeChatClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,407,static_cast<string>(m_chat_client_firm));
            }
            if ( IncludeChatProdAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,408,static_cast<string>(m_chat_prod_accnt));
            }
            if ( IncludeChatTestAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,409,static_cast<string>(m_chat_test_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,410,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_chat_show_risk)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,411,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionView>(m_auction_view)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>(m_auth_type)));
            if ( IncludeAuthExternName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,208,static_cast<string>(m_auth_extern_name));
            }
            if ( IncludeAuthExternParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,211,static_cast<string>(m_auth_extern_params));
            }
            if ( IncludeDefaultAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,214,static_cast<string>(m_default_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,217,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeCmeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,220,static_cast<string>(m_cme_trader_id));
            }
            if ( IncludeCmeLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_cme_location));
            }
            if ( IncludeCfeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_cfe_trader_id));
            }
            if ( IncludeCfeFrequentTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,229,static_cast<string>(m_cfe_frequent_trader_id));
            }
            if ( IncludeCfeLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_cfe_location));
            }
            if ( IncludeIceTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,235,static_cast<string>(m_ice_trader_id));
            }
            if ( IncludeIcePassword()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,238,static_cast<string>(m_ice_password));
            }
            if ( IncludeIceCompanyId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,241,static_cast<string>(m_ice_company_id));
            }
            if ( IncludeIceSubRoom()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,399,static_cast<string>(m_ice_sub_room));
            }
            if ( IncludeCboeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,244,static_cast<string>(m_cboe_trader_id));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_firm_pos_visibility)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_random_strategy)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,256,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolServerCode>(m_tool_server_code)));
            if ( IncludeToolServerHost()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,259,static_cast<string>(m_tool_server_host));
            }
            if ( IncludeToolServerPort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,262,m_tool_server_port);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,265,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_tools_auto_shutdown)));
            if ( IncludeToolsAutoShutdownTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 268, m_tools_auto_shutdown_time);
            }
            if ( IncludeSrsePwdHash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,271,static_cast<string>(m_srse_pwd_hash));
            }
            if ( IncludeSrseNumCores()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,280,m_srse_num_cores);
            }
            if ( IncludeSrseMaxConnectsPerDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,283,m_srse_max_connects_per_day);
            }
            if ( IncludeSrseMaxConcurrentConnects()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,286,m_srse_max_concurrent_connects);
            }
            if ( IncludeSrseMaxRowCache()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,289,m_srse_max_row_cache);
            }
            if ( IncludeSrseMaxNewOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,292,m_srse_max_new_orders);
            }
            if ( IncludeSrseMaxNewOrdersPerSec()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,295,m_srse_max_new_orders_per_sec);
            }
            if ( IncludeSrseMaxNewOrdersPerStatement()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,298,m_srse_max_new_orders_per_statement);
            }
            if ( IncludeNmsBadge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,395,static_cast<string>(m_nms_badge));
            }
            if ( IncludeCfeBadge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,396,static_cast<string>(m_cfe_badge));
            }
            if ( IncludeCmeBadge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,397,static_cast<string>(m_cme_badge));
            }
            if ( IncludeIceBadge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,398,static_cast<string>(m_ice_badge));
            }
            if ( IncludeApiKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,355,static_cast<string>(m_api_key));
            }
            if ( IncludeApiKeyExpires()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 358, m_api_key_expires);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,400,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_api_key_access)));
            if ( IncludePasswordHash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,361,static_cast<string>(m_password_hash));
            }
            if ( IncludePasswordExpires()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 364, m_password_expires);
            }
            if ( IncludeTempPasswordHash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,367,static_cast<string>(m_temp_password_hash));
            }
            if ( IncludeTempPasswordExpires()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 370, m_temp_password_expires);
            }
            if ( IncludeTempPasswordCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,373,m_temp_password_counter);
            }
            if ( IncludeMfaSecret()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,376,static_cast<string>(m_mfa_secret));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,379,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,382,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 385, m_timestamp);
            }
            if ( IncludeClientFirmListV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5000,static_cast<string>(m_client_firm_list__v7));
            }
            if ( IncludeBillingFirmV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5001,static_cast<string>(m_billing_firm__v7));
            }
            if ( IncludeFirstNameV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5002,static_cast<string>(m_first_name__v7));
            }
            if ( IncludeLastNameV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5003,static_cast<string>(m_last_name__v7));
            }
            if ( IncludeTraderIdV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5004,static_cast<string>(m_trader_id__v7));
            }
            if ( IncludeIceTraderIdV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5005,static_cast<string>(m_ice_trader_id__v7));
            }
            if ( IncludeIcePasswordV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5006,static_cast<string>(m_ice_password__v7));
            }
            if ( IncludeIceCompanyIdV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5007,static_cast<string>(m_ice_company_id__v7));
            }
            if ( IncludeSrAccessHashV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5008,static_cast<string>(m_sr_access_hash__v7));
            }
            if ( IncludeExecUsernameV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5009,static_cast<string>(m_exec_username__v7));
            }
            if ( IncludeUserGroupV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5010,static_cast<string>(m_user_group__v7));
            }
            if ( IncludeAccntListV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5011,static_cast<string>(m_accnt_list__v7));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5012,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_view_inactive__v7)));
            if ( IncludeToolProductAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5013,static_cast<string>(m_tool_product_acl__v7));
            }
            if ( IncludeElasticProductAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5014,static_cast<string>(m_elastic_product_acl__v7));
            }
            if ( IncludeMarketDataAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5015,static_cast<string>(m_market_data_acl__v7));
            }
            if ( IncludeSrseProductAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5016,static_cast<string>(m_srse_product_acl__v7));
            }
            if ( IncludeSrseHistoricalAclV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5017,static_cast<string>(m_srse_historical_acl__v7));
            }
            if ( IncludeContactImV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5018,static_cast<string>(m_contact_im__v7));
            }
            if ( IncludeAccountAccessControl()) {
                for (auto& item : m_account_access_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 151, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeApiKeys()) {
                for (auto& item : m_api_keys) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 401, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeCitrixProductControl()) {
                for (auto& item : m_citrix_product_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 251, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeClientFirmViewAccessV7()) {
                for (auto& item : m_client_firm_view_access__v7) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 5019, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeMLinkControl()) {
                for (auto& item : m_m_link_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 316, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeMarketDataControl()) {
                for (auto& item : m_market_data_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 334, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeSrseHistoricalControl()) {
                for (auto& item : m_srse_historical_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 277, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeSrseProductControl()) {
                for (auto& item : m_srse_product_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 274, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeWebProductControl()) {
                for (auto& item : m_web_product_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 304, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_type = static_cast<spiderrock::protobuf::api::UserType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_status = static_cast<spiderrock::protobuf::api::UserStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_user_status_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_to_be_frozen = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_user_to_be_frozen_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_auth_action = static_cast<spiderrock::protobuf::api::UserAuthAction>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_auth_state = static_cast<spiderrock::protobuf::api::UserAuthState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_auth_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_invite_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_accept_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_description = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_display_time_zone = static_cast<spiderrock::protobuf::api::SRTimeZone>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mlink_activity_logging = static_cast<spiderrock::protobuf::api::LogAmount>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_client_config_access = static_cast<spiderrock::protobuf::api::ConfigAccess>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_account_type_control = static_cast<spiderrock::protobuf::api::AccountTypeControl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 386: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prod_order_access = static_cast<spiderrock::protobuf::api::OrderAccess>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 387: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_test_order_access = static_cast<spiderrock::protobuf::api::OrderAccess>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 388: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_cancel_prod_orders = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 389: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_cancel_test_orders = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 390: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_book_prod_executions = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 391: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_book_test_executions = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_edit_mar_risk = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_edit_supervisory_risk = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_edit_stock_locate_list = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_display_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_email = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_phone = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_slack = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_ice_chat = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_bberg_handle = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 407: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_chat_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 408: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_chat_prod_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_chat_test_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 410: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_chat_show_risk = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 411: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_view = static_cast<spiderrock::protobuf::api::AuctionView>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auth_type = static_cast<spiderrock::protobuf::api::AuthType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_auth_extern_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_auth_extern_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_default_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cme_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cme_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_frequent_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_password = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_company_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 399: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_sub_room = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cboe_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 247: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_pos_visibility = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 250: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allow_random_strategy = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tool_server_code = static_cast<spiderrock::protobuf::api::ToolServerCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_tool_server_host = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_tool_server_port = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 265: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tools_auto_shutdown = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_tools_auto_shutdown_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_srse_pwd_hash = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_num_cores = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_max_connects_per_day = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_max_concurrent_connects = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_max_row_cache = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_max_new_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_max_new_orders_per_sec = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_srse_max_new_orders_per_statement = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 395: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_nms_badge = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 396: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_badge = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 397: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cme_badge = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 398: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_badge = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_api_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_api_key_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 400: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_api_key_access = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_password_hash = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_password_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_temp_password_hash = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_temp_password_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 373: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_temp_password_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mfa_secret = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 382: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm_list__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5001: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_billing_firm__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5002: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_first_name__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5003: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_name__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5004: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_trader_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5005: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_trader_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5006: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_password__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5007: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_company_id__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5008: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sr_access_hash__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5009: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_username__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5010: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_group__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5011: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt_list__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5012: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_view_inactive__v7 = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5013: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_tool_product_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5014: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_elastic_product_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5015: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_market_data_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5016: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_srse_product_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5017: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_srse_historical_acl__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5018: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_im__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            account_access_control item_account_access_control;
                            item_account_access_control.Decode(pos, pos+length);  
                            m_account_access_control.emplace_back(item_account_access_control);
                        }
                        break;
                    }
                    case 401: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            api_keys item_api_keys;
                            item_api_keys.Decode(pos, pos+length);  
                            m_api_keys.emplace_back(item_api_keys);
                        }
                        break;
                    }
                    case 251: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            citrix_product_control item_citrix_product_control;
                            item_citrix_product_control.Decode(pos, pos+length);  
                            m_citrix_product_control.emplace_back(item_citrix_product_control);
                        }
                        break;
                    }
                    case 5019: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            client_firm_view_access__v7 item_client_firm_view_access__v7;
                            item_client_firm_view_access__v7.Decode(pos, pos+length);  
                            m_client_firm_view_access__v7.emplace_back(item_client_firm_view_access__v7);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            m_link_control item_m_link_control;
                            item_m_link_control.Decode(pos, pos+length);  
                            m_m_link_control.emplace_back(item_m_link_control);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            market_data_control item_market_data_control;
                            item_market_data_control.Decode(pos, pos+length);  
                            m_market_data_control.emplace_back(item_market_data_control);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            srse_historical_control item_srse_historical_control;
                            item_srse_historical_control.Decode(pos, pos+length);  
                            m_srse_historical_control.emplace_back(item_srse_historical_control);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            srse_product_control item_srse_product_control;
                            item_srse_product_control.Decode(pos, pos+length);  
                            m_srse_product_control.emplace_back(item_srse_product_control);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            web_product_control item_web_product_control;
                            item_web_product_control.Decode(pos, pos+length);  
                            m_web_product_control.emplace_back(item_web_product_control);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto UserConfig::get<UserConfig::_meta>() const { return UserConfig::_meta{ m__meta}; }
    template<> inline const auto UserConfig::get<UserConfig::pkey>() const { return UserConfig::pkey{ m_pkey}; }
    template<> inline const auto UserConfig::get<UserConfig::client_firm>() const { return m_client_firm; }
    template<> inline const auto UserConfig::get<UserConfig::user_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserType>( m_user_type)); }
    template<> inline const auto UserConfig::get<UserConfig::user_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserStatus>( m_user_status)); }
    template<> inline const auto UserConfig::get<UserConfig::user_status_dttm>() const { return m_user_status_dttm; }
    template<> inline const auto UserConfig::get<UserConfig::user_to_be_frozen>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_to_be_frozen)); }
    template<> inline const auto UserConfig::get<UserConfig::user_to_be_frozen_dttm>() const { return m_user_to_be_frozen_dttm; }
    template<> inline const auto UserConfig::get<UserConfig::user_auth_action>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserAuthAction>( m_user_auth_action)); }
    template<> inline const auto UserConfig::get<UserConfig::user_auth_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserAuthState>( m_user_auth_state)); }
    template<> inline const auto UserConfig::get<UserConfig::user_auth_error>() const { return m_user_auth_error; }
    template<> inline const auto UserConfig::get<UserConfig::last_invite_timestamp>() const { return m_last_invite_timestamp; }
    template<> inline const auto UserConfig::get<UserConfig::last_accept_timestamp>() const { return m_last_accept_timestamp; }
    template<> inline const auto UserConfig::get<UserConfig::description>() const { return m_description; }
    template<> inline const auto UserConfig::get<UserConfig::display_time_zone>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>( m_display_time_zone)); }
    template<> inline const auto UserConfig::get<UserConfig::mlink_activity_logging>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LogAmount>( m_mlink_activity_logging)); }
    template<> inline const auto UserConfig::get<UserConfig::client_config_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ConfigAccess>( m_client_config_access)); }
    template<> inline const auto UserConfig::get<UserConfig::account_type_control>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountTypeControl>( m_account_type_control)); }
    template<> inline const auto UserConfig::get<UserConfig::prod_order_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>( m_prod_order_access)); }
    template<> inline const auto UserConfig::get<UserConfig::test_order_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>( m_test_order_access)); }
    template<> inline const auto UserConfig::get<UserConfig::can_cancel_prod_orders>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_cancel_prod_orders)); }
    template<> inline const auto UserConfig::get<UserConfig::can_cancel_test_orders>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_cancel_test_orders)); }
    template<> inline const auto UserConfig::get<UserConfig::can_book_prod_executions>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_book_prod_executions)); }
    template<> inline const auto UserConfig::get<UserConfig::can_book_test_executions>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_book_test_executions)); }
    template<> inline const auto UserConfig::get<UserConfig::can_edit_mar_risk>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_edit_mar_risk)); }
    template<> inline const auto UserConfig::get<UserConfig::can_edit_supervisory_risk>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_edit_supervisory_risk)); }
    template<> inline const auto UserConfig::get<UserConfig::can_edit_stock_locate_list>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_edit_stock_locate_list)); }
    template<> inline const auto UserConfig::get<UserConfig::display_name>() const { return m_display_name; }
    template<> inline const auto UserConfig::get<UserConfig::contact_email>() const { return m_contact_email; }
    template<> inline const auto UserConfig::get<UserConfig::contact_phone>() const { return m_contact_phone; }
    template<> inline const auto UserConfig::get<UserConfig::contact_slack>() const { return m_contact_slack; }
    template<> inline const auto UserConfig::get<UserConfig::contact_ice_chat>() const { return m_contact_ice_chat; }
    template<> inline const auto UserConfig::get<UserConfig::contact_bberg_handle>() const { return m_contact_bberg_handle; }
    template<> inline const auto UserConfig::get<UserConfig::chat_client_firm>() const { return m_chat_client_firm; }
    template<> inline const auto UserConfig::get<UserConfig::chat_prod_accnt>() const { return m_chat_prod_accnt; }
    template<> inline const auto UserConfig::get<UserConfig::chat_test_accnt>() const { return m_chat_test_accnt; }
    template<> inline const auto UserConfig::get<UserConfig::chat_show_risk>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_chat_show_risk)); }
    template<> inline const auto UserConfig::get<UserConfig::auction_view>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionView>( m_auction_view)); }
    template<> inline const auto UserConfig::get<UserConfig::auth_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>( m_auth_type)); }
    template<> inline const auto UserConfig::get<UserConfig::auth_extern_name>() const { return m_auth_extern_name; }
    template<> inline const auto UserConfig::get<UserConfig::auth_extern_params>() const { return m_auth_extern_params; }
    template<> inline const auto UserConfig::get<UserConfig::default_accnt>() const { return m_default_accnt; }
    template<> inline const auto UserConfig::get<UserConfig::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto UserConfig::get<UserConfig::cme_trader_id>() const { return m_cme_trader_id; }
    template<> inline const auto UserConfig::get<UserConfig::cme_location>() const { return m_cme_location; }
    template<> inline const auto UserConfig::get<UserConfig::cfe_trader_id>() const { return m_cfe_trader_id; }
    template<> inline const auto UserConfig::get<UserConfig::cfe_frequent_trader_id>() const { return m_cfe_frequent_trader_id; }
    template<> inline const auto UserConfig::get<UserConfig::cfe_location>() const { return m_cfe_location; }
    template<> inline const auto UserConfig::get<UserConfig::ice_trader_id>() const { return m_ice_trader_id; }
    template<> inline const auto UserConfig::get<UserConfig::ice_password>() const { return m_ice_password; }
    template<> inline const auto UserConfig::get<UserConfig::ice_company_id>() const { return m_ice_company_id; }
    template<> inline const auto UserConfig::get<UserConfig::ice_sub_room>() const { return m_ice_sub_room; }
    template<> inline const auto UserConfig::get<UserConfig::cboe_trader_id>() const { return m_cboe_trader_id; }
    template<> inline const auto UserConfig::get<UserConfig::firm_pos_visibility>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_firm_pos_visibility)); }
    template<> inline const auto UserConfig::get<UserConfig::allow_random_strategy>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_allow_random_strategy)); }
    template<> inline const auto UserConfig::get<UserConfig::tool_server_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolServerCode>( m_tool_server_code)); }
    template<> inline const auto UserConfig::get<UserConfig::tool_server_host>() const { return m_tool_server_host; }
    template<> inline const auto UserConfig::get<UserConfig::tool_server_port>() const { return m_tool_server_port; }
    template<> inline const auto UserConfig::get<UserConfig::tools_auto_shutdown>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_tools_auto_shutdown)); }
    template<> inline const auto UserConfig::get<UserConfig::tools_auto_shutdown_time>() const { return m_tools_auto_shutdown_time; }
    template<> inline const auto UserConfig::get<UserConfig::srse_pwd_hash>() const { return m_srse_pwd_hash; }
    template<> inline const auto UserConfig::get<UserConfig::srse_num_cores>() const { return m_srse_num_cores; }
    template<> inline const auto UserConfig::get<UserConfig::srse_max_connects_per_day>() const { return m_srse_max_connects_per_day; }
    template<> inline const auto UserConfig::get<UserConfig::srse_max_concurrent_connects>() const { return m_srse_max_concurrent_connects; }
    template<> inline const auto UserConfig::get<UserConfig::srse_max_row_cache>() const { return m_srse_max_row_cache; }
    template<> inline const auto UserConfig::get<UserConfig::srse_max_new_orders>() const { return m_srse_max_new_orders; }
    template<> inline const auto UserConfig::get<UserConfig::srse_max_new_orders_per_sec>() const { return m_srse_max_new_orders_per_sec; }
    template<> inline const auto UserConfig::get<UserConfig::srse_max_new_orders_per_statement>() const { return m_srse_max_new_orders_per_statement; }
    template<> inline const auto UserConfig::get<UserConfig::nms_badge>() const { return m_nms_badge; }
    template<> inline const auto UserConfig::get<UserConfig::cfe_badge>() const { return m_cfe_badge; }
    template<> inline const auto UserConfig::get<UserConfig::cme_badge>() const { return m_cme_badge; }
    template<> inline const auto UserConfig::get<UserConfig::ice_badge>() const { return m_ice_badge; }
    template<> inline const auto UserConfig::get<UserConfig::api_key>() const { return m_api_key; }
    template<> inline const auto UserConfig::get<UserConfig::api_key_expires>() const { return m_api_key_expires; }
    template<> inline const auto UserConfig::get<UserConfig::has_api_key_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_api_key_access)); }
    template<> inline const auto UserConfig::get<UserConfig::password_hash>() const { return m_password_hash; }
    template<> inline const auto UserConfig::get<UserConfig::password_expires>() const { return m_password_expires; }
    template<> inline const auto UserConfig::get<UserConfig::temp_password_hash>() const { return m_temp_password_hash; }
    template<> inline const auto UserConfig::get<UserConfig::temp_password_expires>() const { return m_temp_password_expires; }
    template<> inline const auto UserConfig::get<UserConfig::temp_password_counter>() const { return m_temp_password_counter; }
    template<> inline const auto UserConfig::get<UserConfig::mfa_secret>() const { return m_mfa_secret; }
    template<> inline const auto UserConfig::get<UserConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto UserConfig::get<UserConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto UserConfig::get<UserConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserConfig::get<UserConfig::client_firm_list__v7>() const { return m_client_firm_list__v7; }
    template<> inline const auto UserConfig::get<UserConfig::billing_firm__v7>() const { return m_billing_firm__v7; }
    template<> inline const auto UserConfig::get<UserConfig::first_name__v7>() const { return m_first_name__v7; }
    template<> inline const auto UserConfig::get<UserConfig::last_name__v7>() const { return m_last_name__v7; }
    template<> inline const auto UserConfig::get<UserConfig::trader_id__v7>() const { return m_trader_id__v7; }
    template<> inline const auto UserConfig::get<UserConfig::ice_trader_id__v7>() const { return m_ice_trader_id__v7; }
    template<> inline const auto UserConfig::get<UserConfig::ice_password__v7>() const { return m_ice_password__v7; }
    template<> inline const auto UserConfig::get<UserConfig::ice_company_id__v7>() const { return m_ice_company_id__v7; }
    template<> inline const auto UserConfig::get<UserConfig::sr_access_hash__v7>() const { return m_sr_access_hash__v7; }
    template<> inline const auto UserConfig::get<UserConfig::exec_username__v7>() const { return m_exec_username__v7; }
    template<> inline const auto UserConfig::get<UserConfig::user_group__v7>() const { return m_user_group__v7; }
    template<> inline const auto UserConfig::get<UserConfig::accnt_list__v7>() const { return m_accnt_list__v7; }
    template<> inline const auto UserConfig::get<UserConfig::view_inactive__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_view_inactive__v7)); }
    template<> inline const auto UserConfig::get<UserConfig::tool_product_acl__v7>() const { return m_tool_product_acl__v7; }
    template<> inline const auto UserConfig::get<UserConfig::elastic_product_acl__v7>() const { return m_elastic_product_acl__v7; }
    template<> inline const auto UserConfig::get<UserConfig::market_data_acl__v7>() const { return m_market_data_acl__v7; }
    template<> inline const auto UserConfig::get<UserConfig::srse_product_acl__v7>() const { return m_srse_product_acl__v7; }
    template<> inline const auto UserConfig::get<UserConfig::srse_historical_acl__v7>() const { return m_srse_historical_acl__v7; }
    template<> inline const auto UserConfig::get<UserConfig::contact_im__v7>() const { return m_contact_im__v7; }
    template<> inline const auto UserConfig::get<UserConfig::account_access_control>(int i) const { return UserConfig::account_access_control{ get_account_access_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::account_access_control>() const { return static_cast<int>( m_account_access_control.size()); }
    template<> inline const auto UserConfig::get<UserConfig::api_keys>(int i) const { return UserConfig::api_keys{ get_api_keys(i)}; }
    template<> inline int UserConfig::count<UserConfig::api_keys>() const { return static_cast<int>( m_api_keys.size()); }
    template<> inline const auto UserConfig::get<UserConfig::citrix_product_control>(int i) const { return UserConfig::citrix_product_control{ get_citrix_product_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::citrix_product_control>() const { return static_cast<int>( m_citrix_product_control.size()); }
    template<> inline const auto UserConfig::get<UserConfig::client_firm_view_access__v7>(int i) const { return UserConfig::client_firm_view_access__v7{ get_client_firm_view_access__v7(i)}; }
    template<> inline int UserConfig::count<UserConfig::client_firm_view_access__v7>() const { return static_cast<int>( m_client_firm_view_access__v7.size()); }
    template<> inline const auto UserConfig::get<UserConfig::m_link_control>(int i) const { return UserConfig::m_link_control{ get_m_link_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::m_link_control>() const { return static_cast<int>( m_m_link_control.size()); }
    template<> inline const auto UserConfig::get<UserConfig::market_data_control>(int i) const { return UserConfig::market_data_control{ get_market_data_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::market_data_control>() const { return static_cast<int>( m_market_data_control.size()); }
    template<> inline const auto UserConfig::get<UserConfig::srse_historical_control>(int i) const { return UserConfig::srse_historical_control{ get_srse_historical_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::srse_historical_control>() const { return static_cast<int>( m_srse_historical_control.size()); }
    template<> inline const auto UserConfig::get<UserConfig::srse_product_control>(int i) const { return UserConfig::srse_product_control{ get_srse_product_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::srse_product_control>() const { return static_cast<int>( m_srse_product_control.size()); }
    template<> inline const auto UserConfig::get<UserConfig::web_product_control>(int i) const { return UserConfig::web_product_control{ get_web_product_control(i)}; }
    template<> inline int UserConfig::count<UserConfig::web_product_control>() const { return static_cast<int>( m_web_product_control.size()); }
    template<> inline const auto UserConfig_PKey::get<UserConfig_PKey::user_name>() const { return m_user_name; }
    
    template<> inline const auto UserConfig_AccountAccessControl::get<UserConfig_AccountAccessControl::accnt>() const { return m_accnt; }
    template<> inline const auto UserConfig_AccountAccessControl::get<UserConfig_AccountAccessControl::access_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountAccessType>(m_access_type));}
    
    template<> inline const auto UserConfig_ApiKeys::get<UserConfig_ApiKeys::id>() const { return m_id; }
    template<> inline const auto UserConfig_ApiKeys::get<UserConfig_ApiKeys::hash>() const { return m_hash; }
    template<> inline const auto UserConfig_ApiKeys::get<UserConfig_ApiKeys::expires>() const { return m_expires; }
    template<> inline const auto UserConfig_ApiKeys::get<UserConfig_ApiKeys::created>() const { return m_created; }
    template<> inline const auto UserConfig_ApiKeys::get<UserConfig_ApiKeys::label>() const { return m_label; }
    
    template<> inline const auto UserConfig_CitrixProductControl::get<UserConfig_CitrixProductControl::product_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CitrixProductCode>(m_product_code));}
    template<> inline const auto UserConfig_CitrixProductControl::get<UserConfig_CitrixProductControl::expires>() const { return m_expires; }
    
    template<> inline const auto UserConfig_ClientFirmViewAccess_V7::get<UserConfig_ClientFirmViewAccess_V7::client_firm__v7>() const { return m_client_firm__v7; }
    template<> inline const auto UserConfig_ClientFirmViewAccess_V7::get<UserConfig_ClientFirmViewAccess_V7::expires__v7>() const { return m_expires__v7; }
    
    template<> inline const auto UserConfig_MLinkControl::get<UserConfig_MLinkControl::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_token));}
    template<> inline const auto UserConfig_MLinkControl::get<UserConfig_MLinkControl::expires>() const { return m_expires; }
    template<> inline const auto UserConfig_MLinkControl::get<UserConfig_MLinkControl::stk_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_stk_exch));}
    template<> inline const auto UserConfig_MLinkControl::get<UserConfig_MLinkControl::fut_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_fut_exch));}
    template<> inline const auto UserConfig_MLinkControl::get<UserConfig_MLinkControl::opt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_opt_exch));}
    
    template<> inline const auto UserConfig_MarketDataControl::get<UserConfig_MarketDataControl::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataToken>(m_token));}
    template<> inline const auto UserConfig_MarketDataControl::get<UserConfig_MarketDataControl::scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataScope>(m_scope));}
    template<> inline const auto UserConfig_MarketDataControl::get<UserConfig_MarketDataControl::classification>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktDataClass>(m_classification));}
    template<> inline const auto UserConfig_MarketDataControl::get<UserConfig_MarketDataControl::expires>() const { return m_expires; }
    
    template<> inline const auto UserConfig_SrseHistoricalControl::get<UserConfig_SrseHistoricalControl::product_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrseProductCode>(m_product_code));}
    template<> inline const auto UserConfig_SrseHistoricalControl::get<UserConfig_SrseHistoricalControl::expires>() const { return m_expires; }
    
    template<> inline const auto UserConfig_SrseProductControl::get<UserConfig_SrseProductControl::product_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrseProductCode>(m_product_code));}
    template<> inline const auto UserConfig_SrseProductControl::get<UserConfig_SrseProductControl::expires>() const { return m_expires; }
    
    template<> inline const auto UserConfig_WebProductControl::get<UserConfig_WebProductControl::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WebProductToken>(m_token));}
    template<> inline const auto UserConfig_WebProductControl::get<UserConfig_WebProductControl::expires>() const { return m_expires; }
    template<> inline const auto UserConfig_WebProductControl::get<UserConfig_WebProductControl::value>() const { return m_value; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_PKey& m) {
        o << "\"user_name\":\"" << m.get<UserConfig_PKey::user_name>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_AccountAccessControl& m) {
        o << "\"accnt\":\"" << m.get<UserConfig_AccountAccessControl::accnt>() << "\"";
        o << ",\"access_type\":" << (int64_t)m.get<UserConfig_AccountAccessControl::access_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_ApiKeys& m) {
        o << "\"id\":" << m.get<UserConfig_ApiKeys::id>();
        o << ",\"hash\":\"" << m.get<UserConfig_ApiKeys::hash>() << "\"";
        {
            std::time_t tt = m.get<UserConfig_ApiKeys::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<UserConfig_ApiKeys::created>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"created\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"label\":\"" << m.get<UserConfig_ApiKeys::label>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_CitrixProductControl& m) {
        o << "\"product_code\":" << (int64_t)m.get<UserConfig_CitrixProductControl::product_code>();
        {
            std::time_t tt = m.get<UserConfig_CitrixProductControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_ClientFirmViewAccess_V7& m) {
        o << "\"client_firm__v7\":\"" << m.get<UserConfig_ClientFirmViewAccess_V7::client_firm__v7>() << "\"";
        {
            std::time_t tt = m.get<UserConfig_ClientFirmViewAccess_V7::expires__v7>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires__v7\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_MLinkControl& m) {
        o << "\"token\":" << (int64_t)m.get<UserConfig_MLinkControl::token>();
        {
            std::time_t tt = m.get<UserConfig_MLinkControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"stk_exch\":" << (int64_t)m.get<UserConfig_MLinkControl::stk_exch>();
        o << ",\"fut_exch\":" << (int64_t)m.get<UserConfig_MLinkControl::fut_exch>();
        o << ",\"opt_exch\":" << (int64_t)m.get<UserConfig_MLinkControl::opt_exch>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_MarketDataControl& m) {
        o << "\"token\":" << (int64_t)m.get<UserConfig_MarketDataControl::token>();
        o << ",\"scope\":" << (int64_t)m.get<UserConfig_MarketDataControl::scope>();
        o << ",\"classification\":" << (int64_t)m.get<UserConfig_MarketDataControl::classification>();
        {
            std::time_t tt = m.get<UserConfig_MarketDataControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_SrseHistoricalControl& m) {
        o << "\"product_code\":" << (int64_t)m.get<UserConfig_SrseHistoricalControl::product_code>();
        {
            std::time_t tt = m.get<UserConfig_SrseHistoricalControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_SrseProductControl& m) {
        o << "\"product_code\":" << (int64_t)m.get<UserConfig_SrseProductControl::product_code>();
        {
            std::time_t tt = m.get<UserConfig_SrseProductControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig_WebProductControl& m) {
        o << "\"token\":" << (int64_t)m.get<UserConfig_WebProductControl::token>();
        {
            std::time_t tt = m.get<UserConfig_WebProductControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"value\":\"" << m.get<UserConfig_WebProductControl::value>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserConfig& m) {
        o << "\"_meta\":{" << m.get<UserConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<UserConfig::pkey>() << "}";
        o << ",\"client_firm\":\"" << m.get<UserConfig::client_firm>() << "\"";
        o << ",\"user_type\":" << (int64_t)m.get<UserConfig::user_type>();
        o << ",\"user_status\":" << (int64_t)m.get<UserConfig::user_status>();
        {
            std::time_t tt = m.get<UserConfig::user_status_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"user_status_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"user_to_be_frozen\":" << (int64_t)m.get<UserConfig::user_to_be_frozen>();
        {
            std::time_t tt = m.get<UserConfig::user_to_be_frozen_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"user_to_be_frozen_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"user_auth_action\":" << (int64_t)m.get<UserConfig::user_auth_action>();
        o << ",\"user_auth_state\":" << (int64_t)m.get<UserConfig::user_auth_state>();
        o << ",\"user_auth_error\":\"" << m.get<UserConfig::user_auth_error>() << "\"";
        {
            std::time_t tt = m.get<UserConfig::last_invite_timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_invite_timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<UserConfig::last_accept_timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_accept_timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"description\":\"" << m.get<UserConfig::description>() << "\"";
        o << ",\"display_time_zone\":" << (int64_t)m.get<UserConfig::display_time_zone>();
        o << ",\"mlink_activity_logging\":" << (int64_t)m.get<UserConfig::mlink_activity_logging>();
        o << ",\"client_config_access\":" << (int64_t)m.get<UserConfig::client_config_access>();
        o << ",\"account_type_control\":" << (int64_t)m.get<UserConfig::account_type_control>();
        o << ",\"prod_order_access\":" << (int64_t)m.get<UserConfig::prod_order_access>();
        o << ",\"test_order_access\":" << (int64_t)m.get<UserConfig::test_order_access>();
        o << ",\"can_cancel_prod_orders\":" << (int64_t)m.get<UserConfig::can_cancel_prod_orders>();
        o << ",\"can_cancel_test_orders\":" << (int64_t)m.get<UserConfig::can_cancel_test_orders>();
        o << ",\"can_book_prod_executions\":" << (int64_t)m.get<UserConfig::can_book_prod_executions>();
        o << ",\"can_book_test_executions\":" << (int64_t)m.get<UserConfig::can_book_test_executions>();
        o << ",\"can_edit_mar_risk\":" << (int64_t)m.get<UserConfig::can_edit_mar_risk>();
        o << ",\"can_edit_supervisory_risk\":" << (int64_t)m.get<UserConfig::can_edit_supervisory_risk>();
        o << ",\"can_edit_stock_locate_list\":" << (int64_t)m.get<UserConfig::can_edit_stock_locate_list>();
        o << ",\"display_name\":\"" << m.get<UserConfig::display_name>() << "\"";
        o << ",\"contact_email\":\"" << m.get<UserConfig::contact_email>() << "\"";
        o << ",\"contact_phone\":\"" << m.get<UserConfig::contact_phone>() << "\"";
        o << ",\"contact_slack\":\"" << m.get<UserConfig::contact_slack>() << "\"";
        o << ",\"contact_ice_chat\":\"" << m.get<UserConfig::contact_ice_chat>() << "\"";
        o << ",\"contact_bberg_handle\":\"" << m.get<UserConfig::contact_bberg_handle>() << "\"";
        o << ",\"chat_client_firm\":\"" << m.get<UserConfig::chat_client_firm>() << "\"";
        o << ",\"chat_prod_accnt\":\"" << m.get<UserConfig::chat_prod_accnt>() << "\"";
        o << ",\"chat_test_accnt\":\"" << m.get<UserConfig::chat_test_accnt>() << "\"";
        o << ",\"chat_show_risk\":" << (int64_t)m.get<UserConfig::chat_show_risk>();
        o << ",\"auction_view\":" << (int64_t)m.get<UserConfig::auction_view>();
        o << ",\"auth_type\":" << (int64_t)m.get<UserConfig::auth_type>();
        o << ",\"auth_extern_name\":\"" << m.get<UserConfig::auth_extern_name>() << "\"";
        o << ",\"auth_extern_params\":\"" << m.get<UserConfig::auth_extern_params>() << "\"";
        o << ",\"default_accnt\":\"" << m.get<UserConfig::default_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<UserConfig::alt_user_name>() << "\"";
        o << ",\"cme_trader_id\":\"" << m.get<UserConfig::cme_trader_id>() << "\"";
        o << ",\"cme_location\":\"" << m.get<UserConfig::cme_location>() << "\"";
        o << ",\"cfe_trader_id\":\"" << m.get<UserConfig::cfe_trader_id>() << "\"";
        o << ",\"cfe_frequent_trader_id\":\"" << m.get<UserConfig::cfe_frequent_trader_id>() << "\"";
        o << ",\"cfe_location\":\"" << m.get<UserConfig::cfe_location>() << "\"";
        o << ",\"ice_trader_id\":\"" << m.get<UserConfig::ice_trader_id>() << "\"";
        o << ",\"ice_password\":\"" << m.get<UserConfig::ice_password>() << "\"";
        o << ",\"ice_company_id\":\"" << m.get<UserConfig::ice_company_id>() << "\"";
        o << ",\"ice_sub_room\":\"" << m.get<UserConfig::ice_sub_room>() << "\"";
        o << ",\"cboe_trader_id\":\"" << m.get<UserConfig::cboe_trader_id>() << "\"";
        o << ",\"firm_pos_visibility\":" << (int64_t)m.get<UserConfig::firm_pos_visibility>();
        o << ",\"allow_random_strategy\":" << (int64_t)m.get<UserConfig::allow_random_strategy>();
        o << ",\"tool_server_code\":" << (int64_t)m.get<UserConfig::tool_server_code>();
        o << ",\"tool_server_host\":\"" << m.get<UserConfig::tool_server_host>() << "\"";
        o << ",\"tool_server_port\":" << m.get<UserConfig::tool_server_port>();
        o << ",\"tools_auto_shutdown\":" << (int64_t)m.get<UserConfig::tools_auto_shutdown>();
        o << ",\"tools_auto_shutdown_time\":\"" << m.get<UserConfig::tools_auto_shutdown_time>().count() << "\"";
        o << ",\"srse_pwd_hash\":\"" << m.get<UserConfig::srse_pwd_hash>() << "\"";
        o << ",\"srse_num_cores\":" << m.get<UserConfig::srse_num_cores>();
        o << ",\"srse_max_connects_per_day\":" << m.get<UserConfig::srse_max_connects_per_day>();
        o << ",\"srse_max_concurrent_connects\":" << m.get<UserConfig::srse_max_concurrent_connects>();
        o << ",\"srse_max_row_cache\":" << m.get<UserConfig::srse_max_row_cache>();
        o << ",\"srse_max_new_orders\":" << m.get<UserConfig::srse_max_new_orders>();
        o << ",\"srse_max_new_orders_per_sec\":" << m.get<UserConfig::srse_max_new_orders_per_sec>();
        o << ",\"srse_max_new_orders_per_statement\":" << m.get<UserConfig::srse_max_new_orders_per_statement>();
        o << ",\"nms_badge\":\"" << m.get<UserConfig::nms_badge>() << "\"";
        o << ",\"cfe_badge\":\"" << m.get<UserConfig::cfe_badge>() << "\"";
        o << ",\"cme_badge\":\"" << m.get<UserConfig::cme_badge>() << "\"";
        o << ",\"ice_badge\":\"" << m.get<UserConfig::ice_badge>() << "\"";
        o << ",\"api_key\":\"" << m.get<UserConfig::api_key>() << "\"";
        {
            std::time_t tt = m.get<UserConfig::api_key_expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"api_key_expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"has_api_key_access\":" << (int64_t)m.get<UserConfig::has_api_key_access>();
        o << ",\"password_hash\":\"" << m.get<UserConfig::password_hash>() << "\"";
        {
            std::time_t tt = m.get<UserConfig::password_expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"password_expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"temp_password_hash\":\"" << m.get<UserConfig::temp_password_hash>() << "\"";
        {
            std::time_t tt = m.get<UserConfig::temp_password_expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"temp_password_expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"temp_password_counter\":" << m.get<UserConfig::temp_password_counter>();
        o << ",\"mfa_secret\":\"" << m.get<UserConfig::mfa_secret>() << "\"";
        o << ",\"modified_by\":\"" << m.get<UserConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<UserConfig::modified_in>();
        {
            std::time_t tt = m.get<UserConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"client_firm_list__v7\":\"" << m.get<UserConfig::client_firm_list__v7>() << "\"";
        o << ",\"billing_firm__v7\":\"" << m.get<UserConfig::billing_firm__v7>() << "\"";
        o << ",\"first_name__v7\":\"" << m.get<UserConfig::first_name__v7>() << "\"";
        o << ",\"last_name__v7\":\"" << m.get<UserConfig::last_name__v7>() << "\"";
        o << ",\"trader_id__v7\":\"" << m.get<UserConfig::trader_id__v7>() << "\"";
        o << ",\"ice_trader_id__v7\":\"" << m.get<UserConfig::ice_trader_id__v7>() << "\"";
        o << ",\"ice_password__v7\":\"" << m.get<UserConfig::ice_password__v7>() << "\"";
        o << ",\"ice_company_id__v7\":\"" << m.get<UserConfig::ice_company_id__v7>() << "\"";
        o << ",\"sr_access_hash__v7\":\"" << m.get<UserConfig::sr_access_hash__v7>() << "\"";
        o << ",\"exec_username__v7\":\"" << m.get<UserConfig::exec_username__v7>() << "\"";
        o << ",\"user_group__v7\":\"" << m.get<UserConfig::user_group__v7>() << "\"";
        o << ",\"accnt_list__v7\":\"" << m.get<UserConfig::accnt_list__v7>() << "\"";
        o << ",\"view_inactive__v7\":" << (int64_t)m.get<UserConfig::view_inactive__v7>();
        o << ",\"tool_product_acl__v7\":\"" << m.get<UserConfig::tool_product_acl__v7>() << "\"";
        o << ",\"elastic_product_acl__v7\":\"" << m.get<UserConfig::elastic_product_acl__v7>() << "\"";
        o << ",\"market_data_acl__v7\":\"" << m.get<UserConfig::market_data_acl__v7>() << "\"";
        o << ",\"srse_product_acl__v7\":\"" << m.get<UserConfig::srse_product_acl__v7>() << "\"";
        o << ",\"srse_historical_acl__v7\":\"" << m.get<UserConfig::srse_historical_acl__v7>() << "\"";
        o << ",\"contact_im__v7\":\"" << m.get<UserConfig::contact_im__v7>() << "\"";
        o << ",\"account_access_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::account_access_control>(); ++i) {
                o << delim << m.get<UserConfig::account_access_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"api_keys\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::api_keys>(); ++i) {
                o << delim << m.get<UserConfig::api_keys>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"citrix_product_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::citrix_product_control>(); ++i) {
                o << delim << m.get<UserConfig::citrix_product_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"client_firm_view_access__v7\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::client_firm_view_access__v7>(); ++i) {
                o << delim << m.get<UserConfig::client_firm_view_access__v7>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"m_link_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::m_link_control>(); ++i) {
                o << delim << m.get<UserConfig::m_link_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"market_data_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::market_data_control>(); ++i) {
                o << delim << m.get<UserConfig::market_data_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"srse_historical_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::srse_historical_control>(); ++i) {
                o << delim << m.get<UserConfig::srse_historical_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"srse_product_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::srse_product_control>(); ++i) {
                o << delim << m.get<UserConfig::srse_product_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"web_product_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserConfig::web_product_control>(); ++i) {
                o << delim << m.get<UserConfig::web_product_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}