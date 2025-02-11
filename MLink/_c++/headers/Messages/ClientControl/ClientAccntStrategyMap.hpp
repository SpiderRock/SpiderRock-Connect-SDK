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

    #ifndef _accnt_id__GUARD__
    #define _accnt_id__GUARD__
    DECL_STRONG_TYPE(accnt_id, int64);
    #endif//_accnt_id__GUARD__

    #ifndef _strategy_id__GUARD__
    #define _strategy_id__GUARD__
    DECL_STRONG_TYPE(strategy_id, int64);
    #endif//_strategy_id__GUARD__

    #ifndef _accnt_name__GUARD__
    #define _accnt_name__GUARD__
    DECL_STRONG_TYPE(accnt_name, string);
    #endif//_accnt_name__GUARD__

    #ifndef _user_email__GUARD__
    #define _user_email__GUARD__
    DECL_STRONG_TYPE(user_email, string);
    #endif//_user_email__GUARD__

    #ifndef _user_phone__GUARD__
    #define _user_phone__GUARD__
    DECL_STRONG_TYPE(user_phone, string);
    #endif//_user_phone__GUARD__

    #ifndef _legal_entity__GUARD__
    #define _legal_entity__GUARD__
    DECL_STRONG_TYPE(legal_entity, string);
    #endif//_legal_entity__GUARD__

    #ifndef _default_strategy__GUARD__
    #define _default_strategy__GUARD__
    DECL_STRONG_TYPE(default_strategy, spiderrock::protobuf::api::YesNo);
    #endif//_default_strategy__GUARD__

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

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _risk_user__GUARD__
    #define _risk_user__GUARD__
    DECL_STRONG_TYPE(risk_user, string);
    #endif//_risk_user__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class ClientAccntStrategyMap_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using strategy = spiderrock::protobuf::api::strategy;
        using risk_user = spiderrock::protobuf::api::risk_user;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        strategy m_strategy{};
        risk_user m_risk_user{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        strategy get_strategy() const {
            return m_strategy;
        }
        risk_user get_risk_user() const {
            return m_risk_user;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_risk_user(const risk_user& value)  {
            m_risk_user = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientAccntStrategyMap_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientAccntStrategyMap_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const strategy & value) { set_strategy(value); }
        void set(const risk_user & value) { set_risk_user(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        ClientAccntStrategyMap_PKey() {}

        virtual ~ClientAccntStrategyMap_PKey() {
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
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeRiskUser() const {
            return !(m_risk_user.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_strategy);
            }
            if ( IncludeRiskUser()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_risk_user);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_strategy));
            }
            if ( IncludeRiskUser()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_risk_user));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_client_firm));
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
                    case 11: {m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_risk_user = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ClientAccntStrategyMap {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ClientAccntStrategyMap_PKey;
        using accnt_id = spiderrock::protobuf::api::accnt_id;
        using strategy_id = spiderrock::protobuf::api::strategy_id;
        using accnt_name = spiderrock::protobuf::api::accnt_name;
        using user_email = spiderrock::protobuf::api::user_email;
        using user_phone = spiderrock::protobuf::api::user_phone;
        using legal_entity = spiderrock::protobuf::api::legal_entity;
        using default_strategy = spiderrock::protobuf::api::default_strategy;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        accnt_id m_accnt_id{};
        strategy_id m_strategy_id{};
        accnt_name m_accnt_name{};
        user_email m_user_email{};
        user_phone m_user_phone{};
        legal_entity m_legal_entity{};
        default_strategy m_default_strategy{};
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
        accnt_id get_accnt_id() const {
            return m_accnt_id;
        }		
        strategy_id get_strategy_id() const {
            return m_strategy_id;
        }		
        accnt_name get_accnt_name() const {
            return m_accnt_name;
        }		
        user_email get_user_email() const {
            return m_user_email;
        }		
        user_phone get_user_phone() const {
            return m_user_phone;
        }		
        legal_entity get_legal_entity() const {
            return m_legal_entity;
        }		
        default_strategy get_default_strategy() const {
            return m_default_strategy;
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
        void set_accnt_id(const accnt_id& value)  {
            m_accnt_id = value;
        }
        void set_strategy_id(const strategy_id& value)  {
            m_strategy_id = value;
        }
        void set_accnt_name(const accnt_name& value)  {
            m_accnt_name = value;
        }
        void set_user_email(const user_email& value)  {
            m_user_email = value;
        }
        void set_user_phone(const user_phone& value)  {
            m_user_phone = value;
        }
        void set_legal_entity(const legal_entity& value)  {
            m_legal_entity = value;
        }
        void set_default_strategy(const default_strategy& value)  {
            m_default_strategy = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientAccntStrategyMap::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const accnt_id & value) {
            set_accnt_id(value);
        }
        void set(const strategy_id & value) {
            set_strategy_id(value);
        }
        void set(const accnt_name & value) {
            set_accnt_name(value);
        }
        void set(const user_email & value) {
            set_user_email(value);
        }
        void set(const user_phone & value) {
            set_user_phone(value);
        }
        void set(const legal_entity & value) {
            set_legal_entity(value);
        }
        void set(const default_strategy & value) {
            set_default_strategy(value);
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

        void set(const ClientAccntStrategyMap & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_accnt_id);
            set(value.m_strategy_id);
            set(value.m_accnt_name);
            set(value.m_user_email);
            set(value.m_user_phone);
            set(value.m_legal_entity);
            set(value.m_default_strategy);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        ClientAccntStrategyMap() {
            m__meta.set_message_type("ClientAccntStrategyMap");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1830, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1830, length);
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
             *this = ClientAccntStrategyMap{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAccntId() const {
            return !(m_accnt_id == 0);
        }
        bool IncludeStrategyId() const {
            return !(m_strategy_id == 0);
        }
        bool IncludeAccntName() const {
            return !(m_accnt_name.empty());
        }
        bool IncludeUserEmail() const {
            return !(m_user_email.empty());
        }
        bool IncludeUserPhone() const {
            return !(m_user_phone.empty());
        }
        bool IncludeLegalEntity() const {
            return !(m_legal_entity.empty());
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
            if ( IncludeAccntId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_accnt_id);
            }
            if ( IncludeStrategyId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_strategy_id);
            }
            if ( IncludeAccntName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_accnt_name);
            }
            if ( IncludeUserEmail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_user_email);
            }
            if ( IncludeUserPhone()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_user_phone);
            }
            if ( IncludeLegalEntity()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_legal_entity);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_default_strategy)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(130, m_timestamp);
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
            if ( IncludeAccntId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_accnt_id);
            }
            if ( IncludeStrategyId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_strategy_id);
            }
            if ( IncludeAccntName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_accnt_name));
            }
            if ( IncludeUserEmail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_user_email));
            }
            if ( IncludeUserPhone()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_user_phone));
            }
            if ( IncludeLegalEntity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_legal_entity));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_default_strategy)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 130, m_timestamp);
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
                            m_accnt_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_strategy_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_email = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_phone = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_legal_entity = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_default_strategy = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
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

    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::_meta>() const { return ClientAccntStrategyMap::_meta{ m__meta}; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::pkey>() const { return ClientAccntStrategyMap::pkey{ m_pkey}; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::accnt_id>() const { return m_accnt_id; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::strategy_id>() const { return m_strategy_id; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::accnt_name>() const { return m_accnt_name; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::user_email>() const { return m_user_email; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::user_phone>() const { return m_user_phone; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::legal_entity>() const { return m_legal_entity; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::default_strategy>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_default_strategy)); }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::modified_by>() const { return m_modified_by; }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ClientAccntStrategyMap::get<ClientAccntStrategyMap::timestamp>() const { return m_timestamp; }
    template<> inline const auto ClientAccntStrategyMap_PKey::get<ClientAccntStrategyMap_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ClientAccntStrategyMap_PKey::get<ClientAccntStrategyMap_PKey::strategy>() const { return m_strategy; }
    template<> inline const auto ClientAccntStrategyMap_PKey::get<ClientAccntStrategyMap_PKey::risk_user>() const { return m_risk_user; }
    template<> inline const auto ClientAccntStrategyMap_PKey::get<ClientAccntStrategyMap_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ClientAccntStrategyMap_PKey& m) {
        o << "\"accnt\":\"" << m.get<ClientAccntStrategyMap_PKey::accnt>() << "\"";
        o << ",\"strategy\":\"" << m.get<ClientAccntStrategyMap_PKey::strategy>() << "\"";
        o << ",\"risk_user\":\"" << m.get<ClientAccntStrategyMap_PKey::risk_user>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ClientAccntStrategyMap_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientAccntStrategyMap& m) {
        o << "\"_meta\":{" << m.get<ClientAccntStrategyMap::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ClientAccntStrategyMap::pkey>() << "}";
        o << ",\"accnt_id\":" << m.get<ClientAccntStrategyMap::accnt_id>();
        o << ",\"strategy_id\":" << m.get<ClientAccntStrategyMap::strategy_id>();
        o << ",\"accnt_name\":\"" << m.get<ClientAccntStrategyMap::accnt_name>() << "\"";
        o << ",\"user_email\":\"" << m.get<ClientAccntStrategyMap::user_email>() << "\"";
        o << ",\"user_phone\":\"" << m.get<ClientAccntStrategyMap::user_phone>() << "\"";
        o << ",\"legal_entity\":\"" << m.get<ClientAccntStrategyMap::legal_entity>() << "\"";
        o << ",\"default_strategy\":" << (int64_t)m.get<ClientAccntStrategyMap::default_strategy>();
        o << ",\"modified_by\":\"" << m.get<ClientAccntStrategyMap::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ClientAccntStrategyMap::modified_in>();
        {
            std::time_t tt = m.get<ClientAccntStrategyMap::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}