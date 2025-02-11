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

    #ifndef _client_tags__GUARD__
    #define _client_tags__GUARD__
    DECL_STRONG_TYPE(client_tags, string);
    #endif//_client_tags__GUARD__

    #ifndef _proxy_firm1__GUARD__
    #define _proxy_firm1__GUARD__
    DECL_STRONG_TYPE(proxy_firm1, string);
    #endif//_proxy_firm1__GUARD__

    #ifndef _proxy_firm2__GUARD__
    #define _proxy_firm2__GUARD__
    DECL_STRONG_TYPE(proxy_firm2, string);
    #endif//_proxy_firm2__GUARD__

    #ifndef _proxy_firm3__GUARD__
    #define _proxy_firm3__GUARD__
    DECL_STRONG_TYPE(proxy_firm3, string);
    #endif//_proxy_firm3__GUARD__

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _theo_model2__GUARD__
    #define _theo_model2__GUARD__
    DECL_STRONG_TYPE(theo_model2, string);
    #endif//_theo_model2__GUARD__

    #ifndef _hedge_delta_rule__GUARD__
    #define _hedge_delta_rule__GUARD__
    DECL_STRONG_TYPE(hedge_delta_rule, spiderrock::protobuf::api::HedgeDeltaRule);
    #endif//_hedge_delta_rule__GUARD__

    #ifndef _binary_days__GUARD__
    #define _binary_days__GUARD__
    DECL_STRONG_TYPE(binary_days, float);
    #endif//_binary_days__GUARD__

    #ifndef _accnt_color__GUARD__
    #define _accnt_color__GUARD__
    DECL_STRONG_TYPE(accnt_color, string);
    #endif//_accnt_color__GUARD__

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

    
    class ClientAccountConfig_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientAccountConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientAccountConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        ClientAccountConfig_PKey() {}

        virtual ~ClientAccountConfig_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
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
                }
            }
        }

    };
    

    class ClientAccountConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ClientAccountConfig_PKey;
        using client_tags = spiderrock::protobuf::api::client_tags;
        using proxy_firm1 = spiderrock::protobuf::api::proxy_firm1;
        using proxy_firm2 = spiderrock::protobuf::api::proxy_firm2;
        using proxy_firm3 = spiderrock::protobuf::api::proxy_firm3;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using theo_model2 = spiderrock::protobuf::api::theo_model2;
        using hedge_delta_rule = spiderrock::protobuf::api::hedge_delta_rule;
        using binary_days = spiderrock::protobuf::api::binary_days;
        using accnt_color = spiderrock::protobuf::api::accnt_color;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        client_tags m_client_tags{};
        proxy_firm1 m_proxy_firm1{};
        proxy_firm2 m_proxy_firm2{};
        proxy_firm3 m_proxy_firm3{};
        theo_model m_theo_model{};
        theo_model2 m_theo_model2{};
        hedge_delta_rule m_hedge_delta_rule{};
        binary_days m_binary_days{};
        accnt_color m_accnt_color{};
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
        client_tags get_client_tags() const {
            return m_client_tags;
        }		
        proxy_firm1 get_proxy_firm1() const {
            return m_proxy_firm1;
        }		
        proxy_firm2 get_proxy_firm2() const {
            return m_proxy_firm2;
        }		
        proxy_firm3 get_proxy_firm3() const {
            return m_proxy_firm3;
        }		
        theo_model get_theo_model() const {
            return m_theo_model;
        }		
        theo_model2 get_theo_model2() const {
            return m_theo_model2;
        }		
        hedge_delta_rule get_hedge_delta_rule() const {
            return m_hedge_delta_rule;
        }		
        binary_days get_binary_days() const {
            return m_binary_days;
        }		
        accnt_color get_accnt_color() const {
            return m_accnt_color;
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
        void set_client_tags(const client_tags& value)  {
            m_client_tags = value;
        }
        void set_proxy_firm1(const proxy_firm1& value)  {
            m_proxy_firm1 = value;
        }
        void set_proxy_firm2(const proxy_firm2& value)  {
            m_proxy_firm2 = value;
        }
        void set_proxy_firm3(const proxy_firm3& value)  {
            m_proxy_firm3 = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_theo_model2(const theo_model2& value)  {
            m_theo_model2 = value;
        }
        void set_hedge_delta_rule(const hedge_delta_rule& value)  {
            m_hedge_delta_rule = value;
        }
        void set_binary_days(const binary_days& value)  {
            m_binary_days = value;
        }
        void set_accnt_color(const accnt_color& value)  {
            m_accnt_color = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ClientAccountConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const client_tags & value) {
            set_client_tags(value);
        }
        void set(const proxy_firm1 & value) {
            set_proxy_firm1(value);
        }
        void set(const proxy_firm2 & value) {
            set_proxy_firm2(value);
        }
        void set(const proxy_firm3 & value) {
            set_proxy_firm3(value);
        }
        void set(const theo_model & value) {
            set_theo_model(value);
        }
        void set(const theo_model2 & value) {
            set_theo_model2(value);
        }
        void set(const hedge_delta_rule & value) {
            set_hedge_delta_rule(value);
        }
        void set(const binary_days & value) {
            set_binary_days(value);
        }
        void set(const accnt_color & value) {
            set_accnt_color(value);
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

        void set(const ClientAccountConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_client_tags);
            set(value.m_proxy_firm1);
            set(value.m_proxy_firm2);
            set(value.m_proxy_firm3);
            set(value.m_theo_model);
            set(value.m_theo_model2);
            set(value.m_hedge_delta_rule);
            set(value.m_binary_days);
            set(value.m_accnt_color);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        ClientAccountConfig() {
            m__meta.set_message_type("ClientAccountConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1835, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1835, length);
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
             *this = ClientAccountConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClientTags() const {
            return !(m_client_tags.empty());
        }
        bool IncludeProxyFirm1() const {
            return !(m_proxy_firm1.empty());
        }
        bool IncludeProxyFirm2() const {
            return !(m_proxy_firm2.empty());
        }
        bool IncludeProxyFirm3() const {
            return !(m_proxy_firm3.empty());
        }
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeTheoModel2() const {
            return !(m_theo_model2.empty());
        }
        bool IncludeBinaryDays() const {
            return !(m_binary_days == 0.0);
        }
        bool IncludeAccntColor() const {
            return !(m_accnt_color.empty());
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
            if ( IncludeClientTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_client_tags);
            }
            if ( IncludeProxyFirm1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_proxy_firm1);
            }
            if ( IncludeProxyFirm2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_proxy_firm2);
            }
            if ( IncludeProxyFirm3()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_proxy_firm3);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_theo_model);
            }
            if ( IncludeTheoModel2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_theo_model2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeBinaryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_binary_days);
            }
            if ( IncludeAccntColor()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_accnt_color);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_timestamp);
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
            if ( IncludeClientTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_client_tags));
            }
            if ( IncludeProxyFirm1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_proxy_firm1));
            }
            if ( IncludeProxyFirm2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_proxy_firm2));
            }
            if ( IncludeProxyFirm3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_proxy_firm3));
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_theo_model));
            }
            if ( IncludeTheoModel2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_theo_model2));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeBinaryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_binary_days);
            }
            if ( IncludeAccntColor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_accnt_color));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_timestamp);
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
                            m_client_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_proxy_firm1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_proxy_firm2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_proxy_firm3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_model2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_rule = static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_binary_days = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt_color = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
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

    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::_meta>() const { return ClientAccountConfig::_meta{ m__meta}; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::pkey>() const { return ClientAccountConfig::pkey{ m_pkey}; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::client_tags>() const { return m_client_tags; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::proxy_firm1>() const { return m_proxy_firm1; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::proxy_firm2>() const { return m_proxy_firm2; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::proxy_firm3>() const { return m_proxy_firm3; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::theo_model>() const { return m_theo_model; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::theo_model2>() const { return m_theo_model2; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::hedge_delta_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>( m_hedge_delta_rule)); }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::binary_days>() const { return m_binary_days; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::accnt_color>() const { return m_accnt_color; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ClientAccountConfig::get<ClientAccountConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto ClientAccountConfig_PKey::get<ClientAccountConfig_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ClientAccountConfig_PKey::get<ClientAccountConfig_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ClientAccountConfig_PKey& m) {
        o << "\"accnt\":\"" << m.get<ClientAccountConfig_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ClientAccountConfig_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ClientAccountConfig& m) {
        o << "\"_meta\":{" << m.get<ClientAccountConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ClientAccountConfig::pkey>() << "}";
        o << ",\"client_tags\":\"" << m.get<ClientAccountConfig::client_tags>() << "\"";
        o << ",\"proxy_firm1\":\"" << m.get<ClientAccountConfig::proxy_firm1>() << "\"";
        o << ",\"proxy_firm2\":\"" << m.get<ClientAccountConfig::proxy_firm2>() << "\"";
        o << ",\"proxy_firm3\":\"" << m.get<ClientAccountConfig::proxy_firm3>() << "\"";
        o << ",\"theo_model\":\"" << m.get<ClientAccountConfig::theo_model>() << "\"";
        o << ",\"theo_model2\":\"" << m.get<ClientAccountConfig::theo_model2>() << "\"";
        o << ",\"hedge_delta_rule\":" << (int64_t)m.get<ClientAccountConfig::hedge_delta_rule>();
        o << ",\"binary_days\":" << m.get<ClientAccountConfig::binary_days>();
        o << ",\"accnt_color\":\"" << m.get<ClientAccountConfig::accnt_color>() << "\"";
        o << ",\"modified_by\":\"" << m.get<ClientAccountConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ClientAccountConfig::modified_in>();
        {
            std::time_t tt = m.get<ClientAccountConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}