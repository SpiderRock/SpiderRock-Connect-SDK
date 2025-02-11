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

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _user_type__GUARD__
    #define _user_type__GUARD__
    DECL_STRONG_TYPE(user_type, spiderrock::protobuf::api::UserType);
    #endif//_user_type__GUARD__

    #ifndef _display_time_zone__GUARD__
    #define _display_time_zone__GUARD__
    DECL_STRONG_TYPE(display_time_zone, spiderrock::protobuf::api::SRTimeZone);
    #endif//_display_time_zone__GUARD__

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

    #ifndef _auth_type__GUARD__
    #define _auth_type__GUARD__
    DECL_STRONG_TYPE(auth_type, spiderrock::protobuf::api::AuthType);
    #endif//_auth_type__GUARD__

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

    #ifndef _cboe_trader_id__GUARD__
    #define _cboe_trader_id__GUARD__
    DECL_STRONG_TYPE(cboe_trader_id, string);
    #endif//_cboe_trader_id__GUARD__

    #ifndef _badges__GUARD__
    #define _badges__GUARD__
    DECL_STRONG_TYPE(badges, string);
    #endif//_badges__GUARD__

    #ifndef _has_api_key_access__GUARD__
    #define _has_api_key_access__GUARD__
    DECL_STRONG_TYPE(has_api_key_access, spiderrock::protobuf::api::YesNo);
    #endif//_has_api_key_access__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

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

    #ifndef _label__GUARD__
    #define _label__GUARD__
    DECL_STRONG_TYPE(label, string);
    #endif//_label__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _created__GUARD__
    #define _created__GUARD__
    DECL_STRONG_TYPE(created, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_created__GUARD__

    #ifndef _token__MLinkToken__GUARD__
    #define _token__MLinkToken__GUARD__
    DECL_STRONG_TYPE(token__MLinkToken, spiderrock::protobuf::api::MLinkToken);
    #endif//_token__MLinkToken__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _token__MarketDataToken__GUARD__
    #define _token__MarketDataToken__GUARD__
    DECL_STRONG_TYPE(token__MarketDataToken, spiderrock::protobuf::api::MarketDataToken);
    #endif//_token__MarketDataToken__GUARD__

    #ifndef _scope__GUARD__
    #define _scope__GUARD__
    DECL_STRONG_TYPE(scope, spiderrock::protobuf::api::MarketDataScope);
    #endif//_scope__GUARD__

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

    
    class UserMetaData_AccountAccessControl {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_AccountAccessControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_AccountAccessControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const access_type & value) { set_access_type(value); }


        UserMetaData_AccountAccessControl() {}

        virtual ~UserMetaData_AccountAccessControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_accnt);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountAccessType>(m_access_type)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountAccessType>(m_access_type)));
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
                    case 133: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 136: {m_access_type = static_cast<spiderrock::protobuf::api::AccountAccessType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class UserMetaData_ApiKeys {
        public:
        //using statements for all types used in this class
        using id = spiderrock::protobuf::api::id;
        using label = spiderrock::protobuf::api::label;
        using expires = spiderrock::protobuf::api::expires;
        using created = spiderrock::protobuf::api::created;

        private:
        id m_id{};
        label m_label{};
        expires m_expires{};
        created m_created{};

        public:
        id get_id() const {
            return m_id;
        }
        label get_label() const {
            return m_label;
        }
        expires get_expires() const {
            return m_expires;
        }
        created get_created() const {
            return m_created;
        }
        void set_id(const id& value)  {
            m_id = value;
        }
        void set_label(const label& value)  {
            m_label = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        void set_created(const created& value)  {
            m_created = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_ApiKeys::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_ApiKeys::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const id & value) { set_id(value); }
        void set(const label & value) { set_label(value); }
        void set(const expires & value) { set_expires(value); }
        void set(const created & value) { set_created(value); }


        UserMetaData_ApiKeys() {}

        virtual ~UserMetaData_ApiKeys() {
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
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(264,m_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(265,m_label);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(266, m_expires);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(267, m_created);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,264,m_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,265,static_cast<string>(m_label));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 266, m_expires);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 267, m_created);
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
                    case 264: {m_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 265: {m_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 266: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 267: {
                        m_created = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserMetaData_MLinkControl {
        public:
        //using statements for all types used in this class
        using token = spiderrock::protobuf::api::token__MLinkToken;
        using expires = spiderrock::protobuf::api::expires;

        private:
        token m_token{};
        expires m_expires{};

        public:
        token get_token() const {
            return m_token;
        }
        expires get_expires() const {
            return m_expires;
        }
        void set_token(const token& value)  {
            m_token = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_MLinkControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_MLinkControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const expires & value) { set_expires(value); }


        UserMetaData_MLinkControl() {}

        virtual ~UserMetaData_MLinkControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(241, m_expires);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,238,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 241, m_expires);
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
                    case 238: {m_token = static_cast<spiderrock::protobuf::api::MLinkToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 241: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserMetaData_MarketDataControl {
        public:
        //using statements for all types used in this class
        using token = spiderrock::protobuf::api::token__MarketDataToken;
        using scope = spiderrock::protobuf::api::scope;
        using expires = spiderrock::protobuf::api::expires;

        private:
        token m_token{};
        scope m_scope{};
        expires m_expires{};

        public:
        token get_token() const {
            return m_token;
        }
        scope get_scope() const {
            return m_scope;
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
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_MarketDataControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_MarketDataControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const scope & value) { set_scope(value); }
        void set(const expires & value) { set_expires(value); }


        UserMetaData_MarketDataControl() {}

        virtual ~UserMetaData_MarketDataControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataScope>(m_scope)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(253, m_expires);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,247,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataScope>(m_scope)));
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
                    case 247: {m_token = static_cast<spiderrock::protobuf::api::MarketDataToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 250: {m_scope = static_cast<spiderrock::protobuf::api::MarketDataScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
    
    class UserMetaData_WebProductControl {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_WebProductControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData_WebProductControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const token & value) { set_token(value); }
        void set(const expires & value) { set_expires(value); }
        void set(const value & value) { set_value(value); }


        UserMetaData_WebProductControl() {}

        virtual ~UserMetaData_WebProductControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WebProductToken>(m_token)));
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(229, m_expires);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_value);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WebProductToken>(m_token)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 229, m_expires);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_value));
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
                    case 226: {m_token = static_cast<spiderrock::protobuf::api::WebProductToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 229: {
                        m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 232: {m_value = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class UserMetaData {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using user_name = spiderrock::protobuf::api::user_name;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using user_type = spiderrock::protobuf::api::user_type;
        using display_time_zone = spiderrock::protobuf::api::display_time_zone;
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
        using auth_type = spiderrock::protobuf::api::auth_type;
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
        using cboe_trader_id = spiderrock::protobuf::api::cboe_trader_id;
        using badges = spiderrock::protobuf::api::badges;
        using has_api_key_access = spiderrock::protobuf::api::has_api_key_access;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using account_access_control = spiderrock::protobuf::api::UserMetaData_AccountAccessControl;
        using api_keys = spiderrock::protobuf::api::UserMetaData_ApiKeys;
        using m_link_control = spiderrock::protobuf::api::UserMetaData_MLinkControl;
        using market_data_control = spiderrock::protobuf::api::UserMetaData_MarketDataControl;
        using web_product_control = spiderrock::protobuf::api::UserMetaData_WebProductControl;

        private:
        _meta m__meta{};
        user_name m_user_name{};
        client_firm m_client_firm{};
        user_type m_user_type{};
        display_time_zone m_display_time_zone{};
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
        auth_type m_auth_type{};
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
        cboe_trader_id m_cboe_trader_id{};
        badges m_badges{};
        has_api_key_access m_has_api_key_access{};
        timestamp m_timestamp{};
        std::vector<account_access_control> m_account_access_control{};
        std::vector<api_keys> m_api_keys{};
        std::vector<m_link_control> m_m_link_control{};
        std::vector<market_data_control> m_market_data_control{};
        std::vector<web_product_control> m_web_product_control{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        user_type get_user_type() const {
            return m_user_type;
        }		
        display_time_zone get_display_time_zone() const {
            return m_display_time_zone;
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
        auth_type get_auth_type() const {
            return m_auth_type;
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
        cboe_trader_id get_cboe_trader_id() const {
            return m_cboe_trader_id;
        }		
        badges get_badges() const {
            return m_badges;
        }		
        has_api_key_access get_has_api_key_access() const {
            return m_has_api_key_access;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
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
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_user_type(const user_type& value)  {
            m_user_type = value;
        }
        void set_display_time_zone(const display_time_zone& value)  {
            m_display_time_zone = value;
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
        void set_auth_type(const auth_type& value)  {
            m_auth_type = value;
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
        void set_cboe_trader_id(const cboe_trader_id& value)  {
            m_cboe_trader_id = value;
        }
        void set_badges(const badges& value)  {
            m_badges = value;
        }
        void set_has_api_key_access(const has_api_key_access& value)  {
            m_has_api_key_access = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
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
        void set_web_product_control_list(const std::vector<web_product_control>& list)  {
            m_web_product_control = list;
        }
        void add_web_product_control(const web_product_control& item) {
            m_web_product_control.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMetaData::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const user_type & value) {
            set_user_type(value);
        }
        void set(const display_time_zone & value) {
            set_display_time_zone(value);
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
        void set(const auth_type & value) {
            set_auth_type(value);
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
        void set(const cboe_trader_id & value) {
            set_cboe_trader_id(value);
        }
        void set(const badges & value) {
            set_badges(value);
        }
        void set(const has_api_key_access & value) {
            set_has_api_key_access(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const account_access_control & value) {
            add_account_access_control(value);
        }
        void set(const api_keys & value) {
            add_api_keys(value);
        }
        void set(const m_link_control & value) {
            add_m_link_control(value);
        }
        void set(const market_data_control & value) {
            add_market_data_control(value);
        }
        void set(const web_product_control & value) {
            add_web_product_control(value);
        }

        void set(const UserMetaData & value) {
            set(value.m__meta);
            set(value.m_user_name);
            set(value.m_client_firm);
            set(value.m_user_type);
            set(value.m_display_time_zone);
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
            set(value.m_auth_type);
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
            set(value.m_cboe_trader_id);
            set(value.m_badges);
            set(value.m_has_api_key_access);
            set(value.m_timestamp);set_account_access_control_list(value.m_account_access_control);set_api_keys_list(value.m_api_keys);set_m_link_control_list(value.m_m_link_control);set_market_data_control_list(value.m_market_data_control);set_web_product_control_list(value.m_web_product_control);
        }

        UserMetaData() {
            m__meta.set_message_type("UserMetaData");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3470, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3470, length);
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
             *this = UserMetaData{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
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
        bool IncludeCboeTraderId() const {
            return !(m_cboe_trader_id.empty());
        }
        bool IncludeBadges() const {
            return !(m_badges.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAccountAccessControl() const {
            return (!m_account_access_control.empty());
        }
        bool IncludeApiKeys() const {
            return (!m_api_keys.empty());
        }
        bool IncludeMLinkControl() const {
            return (!m_m_link_control.empty());
        }
        bool IncludeMarketDataControl() const {
            return (!m_market_data_control.empty());
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
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_user_name);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserType>(m_user_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>(m_display_time_zone)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ConfigAccess>(m_client_config_access)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountTypeControl>(m_account_type_control)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(257,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_prod_order_access)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(258,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_test_order_access)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_prod_orders)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(260,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_test_orders)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(261,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_prod_executions)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(262,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_test_executions)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_mar_risk)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_supervisory_risk)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_stock_locate_list)));
            if ( IncludeDisplayName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_display_name);
            }
            if ( IncludeContactEmail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_contact_email);
            }
            if ( IncludeContactPhone()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_contact_phone);
            }
            if ( IncludeContactSlack()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(175,m_contact_slack);
            }
            if ( IncludeContactIceChat()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(178,m_contact_ice_chat);
            }
            if ( IncludeContactBbergHandle()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_contact_bberg_handle);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>(m_auth_type)));
            if ( IncludeDefaultAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_default_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_alt_user_name);
            }
            if ( IncludeCmeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_cme_trader_id);
            }
            if ( IncludeCmeLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(196,m_cme_location);
            }
            if ( IncludeCfeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_cfe_trader_id);
            }
            if ( IncludeCfeFrequentTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(202,m_cfe_frequent_trader_id);
            }
            if ( IncludeCfeLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(205,m_cfe_location);
            }
            if ( IncludeIceTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(208,m_ice_trader_id);
            }
            if ( IncludeIcePassword()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(211,m_ice_password);
            }
            if ( IncludeIceCompanyId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(214,m_ice_company_id);
            }
            if ( IncludeCboeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(217,m_cboe_trader_id);
            }
            if ( IncludeBadges()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(220,m_badges);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(268,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_api_key_access)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(256, m_timestamp);
            }
            if ( IncludeAccountAccessControl()) {
                for (auto& item : m_account_access_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(130, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeApiKeys()) {
                for (auto& item : m_api_keys) {
					totalSize += SRProtobufCPP::TagCodec::Size(263, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeMLinkControl()) {
                for (auto& item : m_m_link_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(235, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeMarketDataControl()) {
                for (auto& item : m_market_data_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(244, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeWebProductControl()) {
                for (auto& item : m_web_product_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(223, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_user_name));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserType>(m_user_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>(m_display_time_zone)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ConfigAccess>(m_client_config_access)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountTypeControl>(m_account_type_control)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,257,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_prod_order_access)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,258,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>(m_test_order_access)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_prod_orders)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,260,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_cancel_test_orders)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,261,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_prod_executions)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,262,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_book_test_executions)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_mar_risk)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_supervisory_risk)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_edit_stock_locate_list)));
            if ( IncludeDisplayName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_display_name));
            }
            if ( IncludeContactEmail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_contact_email));
            }
            if ( IncludeContactPhone()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_contact_phone));
            }
            if ( IncludeContactSlack()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,175,static_cast<string>(m_contact_slack));
            }
            if ( IncludeContactIceChat()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,178,static_cast<string>(m_contact_ice_chat));
            }
            if ( IncludeContactBbergHandle()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_contact_bberg_handle));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>(m_auth_type)));
            if ( IncludeDefaultAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_default_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeCmeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_cme_trader_id));
            }
            if ( IncludeCmeLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,196,static_cast<string>(m_cme_location));
            }
            if ( IncludeCfeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_cfe_trader_id));
            }
            if ( IncludeCfeFrequentTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,202,static_cast<string>(m_cfe_frequent_trader_id));
            }
            if ( IncludeCfeLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,205,static_cast<string>(m_cfe_location));
            }
            if ( IncludeIceTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,208,static_cast<string>(m_ice_trader_id));
            }
            if ( IncludeIcePassword()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,211,static_cast<string>(m_ice_password));
            }
            if ( IncludeIceCompanyId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,214,static_cast<string>(m_ice_company_id));
            }
            if ( IncludeCboeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,217,static_cast<string>(m_cboe_trader_id));
            }
            if ( IncludeBadges()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,220,static_cast<string>(m_badges));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,268,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_api_key_access)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 256, m_timestamp);
            }
            if ( IncludeAccountAccessControl()) {
                for (auto& item : m_account_access_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 130, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeApiKeys()) {
                for (auto& item : m_api_keys) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 263, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeMLinkControl()) {
                for (auto& item : m_m_link_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 235, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeMarketDataControl()) {
                for (auto& item : m_market_data_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 244, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeWebProductControl()) {
                for (auto& item : m_web_product_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 223, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_type = static_cast<spiderrock::protobuf::api::UserType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_display_time_zone = static_cast<spiderrock::protobuf::api::SRTimeZone>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_client_config_access = static_cast<spiderrock::protobuf::api::ConfigAccess>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_account_type_control = static_cast<spiderrock::protobuf::api::AccountTypeControl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 257: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prod_order_access = static_cast<spiderrock::protobuf::api::OrderAccess>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 258: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_test_order_access = static_cast<spiderrock::protobuf::api::OrderAccess>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_cancel_prod_orders = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 260: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_cancel_test_orders = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 261: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_book_prod_executions = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 262: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_book_test_executions = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_edit_mar_risk = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_edit_supervisory_risk = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_edit_stock_locate_list = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_display_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_email = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_phone = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_slack = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_ice_chat = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_bberg_handle = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auth_type = static_cast<spiderrock::protobuf::api::AuthType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_default_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cme_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cme_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_frequent_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfe_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_password = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ice_company_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cboe_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_badges = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 268: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_api_key_access = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            account_access_control item_account_access_control;
                            item_account_access_control.Decode(pos, pos+length);  
                            m_account_access_control.emplace_back(item_account_access_control);
                        }
                        break;
                    }
                    case 263: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            api_keys item_api_keys;
                            item_api_keys.Decode(pos, pos+length);  
                            m_api_keys.emplace_back(item_api_keys);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            m_link_control item_m_link_control;
                            item_m_link_control.Decode(pos, pos+length);  
                            m_m_link_control.emplace_back(item_m_link_control);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            market_data_control item_market_data_control;
                            item_market_data_control.Decode(pos, pos+length);  
                            m_market_data_control.emplace_back(item_market_data_control);
                        }
                        break;
                    }
                    case 223: {
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

    template<> inline const auto UserMetaData::get<UserMetaData::_meta>() const { return UserMetaData::_meta{ m__meta}; }
    template<> inline const auto UserMetaData::get<UserMetaData::user_name>() const { return m_user_name; }
    template<> inline const auto UserMetaData::get<UserMetaData::client_firm>() const { return m_client_firm; }
    template<> inline const auto UserMetaData::get<UserMetaData::user_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UserType>( m_user_type)); }
    template<> inline const auto UserMetaData::get<UserMetaData::display_time_zone>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRTimeZone>( m_display_time_zone)); }
    template<> inline const auto UserMetaData::get<UserMetaData::client_config_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ConfigAccess>( m_client_config_access)); }
    template<> inline const auto UserMetaData::get<UserMetaData::account_type_control>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountTypeControl>( m_account_type_control)); }
    template<> inline const auto UserMetaData::get<UserMetaData::prod_order_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>( m_prod_order_access)); }
    template<> inline const auto UserMetaData::get<UserMetaData::test_order_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderAccess>( m_test_order_access)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_cancel_prod_orders>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_cancel_prod_orders)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_cancel_test_orders>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_cancel_test_orders)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_book_prod_executions>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_book_prod_executions)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_book_test_executions>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_book_test_executions)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_edit_mar_risk>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_edit_mar_risk)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_edit_supervisory_risk>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_edit_supervisory_risk)); }
    template<> inline const auto UserMetaData::get<UserMetaData::can_edit_stock_locate_list>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_edit_stock_locate_list)); }
    template<> inline const auto UserMetaData::get<UserMetaData::display_name>() const { return m_display_name; }
    template<> inline const auto UserMetaData::get<UserMetaData::contact_email>() const { return m_contact_email; }
    template<> inline const auto UserMetaData::get<UserMetaData::contact_phone>() const { return m_contact_phone; }
    template<> inline const auto UserMetaData::get<UserMetaData::contact_slack>() const { return m_contact_slack; }
    template<> inline const auto UserMetaData::get<UserMetaData::contact_ice_chat>() const { return m_contact_ice_chat; }
    template<> inline const auto UserMetaData::get<UserMetaData::contact_bberg_handle>() const { return m_contact_bberg_handle; }
    template<> inline const auto UserMetaData::get<UserMetaData::auth_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuthType>( m_auth_type)); }
    template<> inline const auto UserMetaData::get<UserMetaData::default_accnt>() const { return m_default_accnt; }
    template<> inline const auto UserMetaData::get<UserMetaData::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto UserMetaData::get<UserMetaData::cme_trader_id>() const { return m_cme_trader_id; }
    template<> inline const auto UserMetaData::get<UserMetaData::cme_location>() const { return m_cme_location; }
    template<> inline const auto UserMetaData::get<UserMetaData::cfe_trader_id>() const { return m_cfe_trader_id; }
    template<> inline const auto UserMetaData::get<UserMetaData::cfe_frequent_trader_id>() const { return m_cfe_frequent_trader_id; }
    template<> inline const auto UserMetaData::get<UserMetaData::cfe_location>() const { return m_cfe_location; }
    template<> inline const auto UserMetaData::get<UserMetaData::ice_trader_id>() const { return m_ice_trader_id; }
    template<> inline const auto UserMetaData::get<UserMetaData::ice_password>() const { return m_ice_password; }
    template<> inline const auto UserMetaData::get<UserMetaData::ice_company_id>() const { return m_ice_company_id; }
    template<> inline const auto UserMetaData::get<UserMetaData::cboe_trader_id>() const { return m_cboe_trader_id; }
    template<> inline const auto UserMetaData::get<UserMetaData::badges>() const { return m_badges; }
    template<> inline const auto UserMetaData::get<UserMetaData::has_api_key_access>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_api_key_access)); }
    template<> inline const auto UserMetaData::get<UserMetaData::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserMetaData::get<UserMetaData::account_access_control>(int i) const { return UserMetaData::account_access_control{ get_account_access_control(i)}; }
    template<> inline int UserMetaData::count<UserMetaData::account_access_control>() const { return static_cast<int>( m_account_access_control.size()); }
    template<> inline const auto UserMetaData::get<UserMetaData::api_keys>(int i) const { return UserMetaData::api_keys{ get_api_keys(i)}; }
    template<> inline int UserMetaData::count<UserMetaData::api_keys>() const { return static_cast<int>( m_api_keys.size()); }
    template<> inline const auto UserMetaData::get<UserMetaData::m_link_control>(int i) const { return UserMetaData::m_link_control{ get_m_link_control(i)}; }
    template<> inline int UserMetaData::count<UserMetaData::m_link_control>() const { return static_cast<int>( m_m_link_control.size()); }
    template<> inline const auto UserMetaData::get<UserMetaData::market_data_control>(int i) const { return UserMetaData::market_data_control{ get_market_data_control(i)}; }
    template<> inline int UserMetaData::count<UserMetaData::market_data_control>() const { return static_cast<int>( m_market_data_control.size()); }
    template<> inline const auto UserMetaData::get<UserMetaData::web_product_control>(int i) const { return UserMetaData::web_product_control{ get_web_product_control(i)}; }
    template<> inline int UserMetaData::count<UserMetaData::web_product_control>() const { return static_cast<int>( m_web_product_control.size()); }
    template<> inline const auto UserMetaData_AccountAccessControl::get<UserMetaData_AccountAccessControl::accnt>() const { return m_accnt; }
    template<> inline const auto UserMetaData_AccountAccessControl::get<UserMetaData_AccountAccessControl::access_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AccountAccessType>(m_access_type));}
    
    template<> inline const auto UserMetaData_ApiKeys::get<UserMetaData_ApiKeys::id>() const { return m_id; }
    template<> inline const auto UserMetaData_ApiKeys::get<UserMetaData_ApiKeys::label>() const { return m_label; }
    template<> inline const auto UserMetaData_ApiKeys::get<UserMetaData_ApiKeys::expires>() const { return m_expires; }
    template<> inline const auto UserMetaData_ApiKeys::get<UserMetaData_ApiKeys::created>() const { return m_created; }
    
    template<> inline const auto UserMetaData_MLinkControl::get<UserMetaData_MLinkControl::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_token));}
    template<> inline const auto UserMetaData_MLinkControl::get<UserMetaData_MLinkControl::expires>() const { return m_expires; }
    
    template<> inline const auto UserMetaData_MarketDataControl::get<UserMetaData_MarketDataControl::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataToken>(m_token));}
    template<> inline const auto UserMetaData_MarketDataControl::get<UserMetaData_MarketDataControl::scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketDataScope>(m_scope));}
    template<> inline const auto UserMetaData_MarketDataControl::get<UserMetaData_MarketDataControl::expires>() const { return m_expires; }
    
    template<> inline const auto UserMetaData_WebProductControl::get<UserMetaData_WebProductControl::token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::WebProductToken>(m_token));}
    template<> inline const auto UserMetaData_WebProductControl::get<UserMetaData_WebProductControl::expires>() const { return m_expires; }
    template<> inline const auto UserMetaData_WebProductControl::get<UserMetaData_WebProductControl::value>() const { return m_value; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserMetaData_AccountAccessControl& m) {
        o << "\"accnt\":\"" << m.get<UserMetaData_AccountAccessControl::accnt>() << "\"";
        o << ",\"access_type\":" << (int64_t)m.get<UserMetaData_AccountAccessControl::access_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserMetaData_ApiKeys& m) {
        o << "\"id\":" << m.get<UserMetaData_ApiKeys::id>();
        o << ",\"label\":\"" << m.get<UserMetaData_ApiKeys::label>() << "\"";
        {
            std::time_t tt = m.get<UserMetaData_ApiKeys::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<UserMetaData_ApiKeys::created>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"created\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserMetaData_MLinkControl& m) {
        o << "\"token\":" << (int64_t)m.get<UserMetaData_MLinkControl::token>();
        {
            std::time_t tt = m.get<UserMetaData_MLinkControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserMetaData_MarketDataControl& m) {
        o << "\"token\":" << (int64_t)m.get<UserMetaData_MarketDataControl::token>();
        o << ",\"scope\":" << (int64_t)m.get<UserMetaData_MarketDataControl::scope>();
        {
            std::time_t tt = m.get<UserMetaData_MarketDataControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserMetaData_WebProductControl& m) {
        o << "\"token\":" << (int64_t)m.get<UserMetaData_WebProductControl::token>();
        {
            std::time_t tt = m.get<UserMetaData_WebProductControl::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"value\":\"" << m.get<UserMetaData_WebProductControl::value>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserMetaData& m) {
        o << "\"_meta\":{" << m.get<UserMetaData::_meta>() << "}";
        o << ",\"user_name\":\"" << m.get<UserMetaData::user_name>() << "\"";
        o << ",\"client_firm\":\"" << m.get<UserMetaData::client_firm>() << "\"";
        o << ",\"user_type\":" << (int64_t)m.get<UserMetaData::user_type>();
        o << ",\"display_time_zone\":" << (int64_t)m.get<UserMetaData::display_time_zone>();
        o << ",\"client_config_access\":" << (int64_t)m.get<UserMetaData::client_config_access>();
        o << ",\"account_type_control\":" << (int64_t)m.get<UserMetaData::account_type_control>();
        o << ",\"prod_order_access\":" << (int64_t)m.get<UserMetaData::prod_order_access>();
        o << ",\"test_order_access\":" << (int64_t)m.get<UserMetaData::test_order_access>();
        o << ",\"can_cancel_prod_orders\":" << (int64_t)m.get<UserMetaData::can_cancel_prod_orders>();
        o << ",\"can_cancel_test_orders\":" << (int64_t)m.get<UserMetaData::can_cancel_test_orders>();
        o << ",\"can_book_prod_executions\":" << (int64_t)m.get<UserMetaData::can_book_prod_executions>();
        o << ",\"can_book_test_executions\":" << (int64_t)m.get<UserMetaData::can_book_test_executions>();
        o << ",\"can_edit_mar_risk\":" << (int64_t)m.get<UserMetaData::can_edit_mar_risk>();
        o << ",\"can_edit_supervisory_risk\":" << (int64_t)m.get<UserMetaData::can_edit_supervisory_risk>();
        o << ",\"can_edit_stock_locate_list\":" << (int64_t)m.get<UserMetaData::can_edit_stock_locate_list>();
        o << ",\"display_name\":\"" << m.get<UserMetaData::display_name>() << "\"";
        o << ",\"contact_email\":\"" << m.get<UserMetaData::contact_email>() << "\"";
        o << ",\"contact_phone\":\"" << m.get<UserMetaData::contact_phone>() << "\"";
        o << ",\"contact_slack\":\"" << m.get<UserMetaData::contact_slack>() << "\"";
        o << ",\"contact_ice_chat\":\"" << m.get<UserMetaData::contact_ice_chat>() << "\"";
        o << ",\"contact_bberg_handle\":\"" << m.get<UserMetaData::contact_bberg_handle>() << "\"";
        o << ",\"auth_type\":" << (int64_t)m.get<UserMetaData::auth_type>();
        o << ",\"default_accnt\":\"" << m.get<UserMetaData::default_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<UserMetaData::alt_user_name>() << "\"";
        o << ",\"cme_trader_id\":\"" << m.get<UserMetaData::cme_trader_id>() << "\"";
        o << ",\"cme_location\":\"" << m.get<UserMetaData::cme_location>() << "\"";
        o << ",\"cfe_trader_id\":\"" << m.get<UserMetaData::cfe_trader_id>() << "\"";
        o << ",\"cfe_frequent_trader_id\":\"" << m.get<UserMetaData::cfe_frequent_trader_id>() << "\"";
        o << ",\"cfe_location\":\"" << m.get<UserMetaData::cfe_location>() << "\"";
        o << ",\"ice_trader_id\":\"" << m.get<UserMetaData::ice_trader_id>() << "\"";
        o << ",\"ice_password\":\"" << m.get<UserMetaData::ice_password>() << "\"";
        o << ",\"ice_company_id\":\"" << m.get<UserMetaData::ice_company_id>() << "\"";
        o << ",\"cboe_trader_id\":\"" << m.get<UserMetaData::cboe_trader_id>() << "\"";
        o << ",\"badges\":\"" << m.get<UserMetaData::badges>() << "\"";
        o << ",\"has_api_key_access\":" << (int64_t)m.get<UserMetaData::has_api_key_access>();
        {
            std::time_t tt = m.get<UserMetaData::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"account_access_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserMetaData::account_access_control>(); ++i) {
                o << delim << m.get<UserMetaData::account_access_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"api_keys\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserMetaData::api_keys>(); ++i) {
                o << delim << m.get<UserMetaData::api_keys>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"m_link_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserMetaData::m_link_control>(); ++i) {
                o << delim << m.get<UserMetaData::m_link_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"market_data_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserMetaData::market_data_control>(); ++i) {
                o << delim << m.get<UserMetaData::market_data_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"web_product_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserMetaData::web_product_control>(); ++i) {
                o << delim << m.get<UserMetaData::web_product_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}