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

    #ifndef _status__RiskStatus__GUARD__
    #define _status__RiskStatus__GUARD__
    DECL_STRONG_TYPE(status__RiskStatus, spiderrock::protobuf::api::RiskStatus);
    #endif//_status__RiskStatus__GUARD__

    #ifndef _num_rejects__GUARD__
    #define _num_rejects__GUARD__
    DECL_STRONG_TYPE(num_rejects, int32);
    #endif//_num_rejects__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _reject_text__GUARD__
    #define _reject_text__GUARD__
    DECL_STRONG_TYPE(reject_text, string);
    #endif//_reject_text__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

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

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _exch__string__GUARD__
    #define _exch__string__GUARD__
    DECL_STRONG_TYPE(exch__string, string);
    #endif//_exch__string__GUARD__

    #ifndef _security_group__GUARD__
    #define _security_group__GUARD__
    DECL_STRONG_TYPE(security_group, string);
    #endif//_security_group__GUARD__

    
    class SpdrExchRiskMgmt_PKey {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;
        using exch = spiderrock::protobuf::api::exch__string;
        using security_group = spiderrock::protobuf::api::security_group;

        private:
        client_firm m_client_firm{};
        exch m_exch{};
        security_group m_security_group{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        exch get_exch() const {
            return m_exch;
        }
        security_group get_security_group() const {
            return m_security_group;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_exch(const exch& value)  {
            m_exch = value;
        }
        void set_security_group(const security_group& value)  {
            m_security_group = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExchRiskMgmt_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExchRiskMgmt_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const exch & value) { set_exch(value); }
        void set(const security_group & value) { set_security_group(value); }


        SpdrExchRiskMgmt_PKey() {}

        virtual ~SpdrExchRiskMgmt_PKey() {
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
        bool IncludeExch() const {
            return !(m_exch.empty());
        }
        bool IncludeSecurityGroup() const {
            return !(m_security_group.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_client_firm);
            }
            if ( IncludeExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_exch);
            }
            if ( IncludeSecurityGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_security_group);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_client_firm));
            }
            if ( IncludeExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_exch));
            }
            if ( IncludeSecurityGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_security_group));
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
                    case 11: {m_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_security_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrExchRiskMgmt {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrExchRiskMgmt_PKey;
        using status = spiderrock::protobuf::api::status__RiskStatus;
        using num_rejects = spiderrock::protobuf::api::num_rejects;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using accnt = spiderrock::protobuf::api::accnt;
        using reject_text = spiderrock::protobuf::api::reject_text;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using expires = spiderrock::protobuf::api::expires;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        status m_status{};
        num_rejects m_num_rejects{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        accnt m_accnt{};
        reject_text m_reject_text{};
        spdr_source m_spdr_source{};
        expires m_expires{};
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
        status get_status() const {
            return m_status;
        }		
        num_rejects get_num_rejects() const {
            return m_num_rejects;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        reject_text get_reject_text() const {
            return m_reject_text;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        expires get_expires() const {
            return m_expires;
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
        void set_status(const status& value)  {
            m_status = value;
        }
        void set_num_rejects(const num_rejects& value)  {
            m_num_rejects = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_reject_text(const reject_text& value)  {
            m_reject_text = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExchRiskMgmt::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const status & value) {
            set_status(value);
        }
        void set(const num_rejects & value) {
            set_num_rejects(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const reject_text & value) {
            set_reject_text(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const expires & value) {
            set_expires(value);
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

        void set(const SpdrExchRiskMgmt & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_status);
            set(value.m_num_rejects);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_accnt);
            set(value.m_reject_text);
            set(value.m_spdr_source);
            set(value.m_expires);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrExchRiskMgmt() {
            m__meta.set_message_type("SpdrExchRiskMgmt");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3925, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3925, length);
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
             *this = SpdrExchRiskMgmt{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeNumRejects() const {
            return !(m_num_rejects == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeRejectText() const {
            return !(m_reject_text.empty());
        }
        bool IncludeExpires() const {
            return (m_expires.time_since_epoch().count() != 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskStatus>(m_status)));
            if ( IncludeNumRejects()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_num_rejects);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(106, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_accnt);
            }
            if ( IncludeRejectText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_reject_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeExpires()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(121, m_expires);
            }
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskStatus>(m_status)));
            if ( IncludeNumRejects()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_num_rejects);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 106, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_accnt));
            }
            if ( IncludeRejectText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_reject_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeExpires()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 121, m_expires);
            }
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_status = static_cast<spiderrock::protobuf::api::RiskStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_rejects = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_reject_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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

    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::_meta>() const { return SpdrExchRiskMgmt::_meta{ m__meta}; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::pkey>() const { return SpdrExchRiskMgmt::pkey{ m_pkey}; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskStatus>( m_status)); }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::num_rejects>() const { return m_num_rejects; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::sec_key>() const { return SpdrExchRiskMgmt::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::reject_text>() const { return m_reject_text; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::expires>() const { return m_expires; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrExchRiskMgmt::get<SpdrExchRiskMgmt::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrExchRiskMgmt_PKey::get<SpdrExchRiskMgmt_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrExchRiskMgmt_PKey::get<SpdrExchRiskMgmt_PKey::exch>() const { return m_exch; }
    template<> inline const auto SpdrExchRiskMgmt_PKey::get<SpdrExchRiskMgmt_PKey::security_group>() const { return m_security_group; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrExchRiskMgmt_PKey& m) {
        o << "\"client_firm\":\"" << m.get<SpdrExchRiskMgmt_PKey::client_firm>() << "\"";
        o << ",\"exch\":\"" << m.get<SpdrExchRiskMgmt_PKey::exch>() << "\"";
        o << ",\"security_group\":\"" << m.get<SpdrExchRiskMgmt_PKey::security_group>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrExchRiskMgmt& m) {
        o << "\"_meta\":{" << m.get<SpdrExchRiskMgmt::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrExchRiskMgmt::pkey>() << "}";
        o << ",\"status\":" << (int64_t)m.get<SpdrExchRiskMgmt::status>();
        o << ",\"num_rejects\":" << m.get<SpdrExchRiskMgmt::num_rejects>();
        o << ",\"sec_key\":{" << m.get<SpdrExchRiskMgmt::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrExchRiskMgmt::sec_type>();
        o << ",\"accnt\":\"" << m.get<SpdrExchRiskMgmt::accnt>() << "\"";
        o << ",\"reject_text\":\"" << m.get<SpdrExchRiskMgmt::reject_text>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrExchRiskMgmt::spdr_source>();
        {
            std::time_t tt = m.get<SpdrExchRiskMgmt::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"modified_by\":\"" << m.get<SpdrExchRiskMgmt::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrExchRiskMgmt::modified_in>();
        {
            std::time_t tt = m.get<SpdrExchRiskMgmt::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}