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

    #ifndef _routing_code__GUARD__
    #define _routing_code__GUARD__
    DECL_STRONG_TYPE(routing_code, string);
    #endif//_routing_code__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _fill_version__GUARD__
    #define _fill_version__GUARD__
    DECL_STRONG_TYPE(fill_version, int32);
    #endif//_fill_version__GUARD__

    #ifndef _drop_exec_status__GUARD__
    #define _drop_exec_status__GUARD__
    DECL_STRONG_TYPE(drop_exec_status, spiderrock::protobuf::api::DropExecStatus);
    #endif//_drop_exec_status__GUARD__

    #ifndef _other_detail__GUARD__
    #define _other_detail__GUARD__
    DECL_STRONG_TYPE(other_detail, string);
    #endif//_other_detail__GUARD__

    #ifndef _error_detail__GUARD__
    #define _error_detail__GUARD__
    DECL_STRONG_TYPE(error_detail, string);
    #endif//_error_detail__GUARD__

    #ifndef _fill_number__GUARD__
    #define _fill_number__GUARD__
    DECL_STRONG_TYPE(fill_number, int64);
    #endif//_fill_number__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _drop_number__GUARD__
    #define _drop_number__GUARD__
    DECL_STRONG_TYPE(drop_number, int64);
    #endif//_drop_number__GUARD__

    
    class SpdrDropExecutionAck_PKey {
        public:
        //using statements for all types used in this class
        using drop_number = spiderrock::protobuf::api::drop_number;

        private:
        drop_number m_drop_number{};

        public:
        drop_number get_drop_number() const {
            return m_drop_number;
        }
        void set_drop_number(const drop_number& value)  {
            m_drop_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrDropExecutionAck_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrDropExecutionAck_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const drop_number & value) { set_drop_number(value); }


        SpdrDropExecutionAck_PKey() {}

        virtual ~SpdrDropExecutionAck_PKey() {
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
        bool IncludeDropNumber() const {
            return !(m_drop_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeDropNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_drop_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeDropNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_drop_number);
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
                    case 10: {m_drop_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrDropExecutionAck {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrDropExecutionAck_PKey;
        using routing_code = spiderrock::protobuf::api::routing_code;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using fill_version = spiderrock::protobuf::api::fill_version;
        using drop_exec_status = spiderrock::protobuf::api::drop_exec_status;
        using other_detail = spiderrock::protobuf::api::other_detail;
        using error_detail = spiderrock::protobuf::api::error_detail;
        using fill_number = spiderrock::protobuf::api::fill_number;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        routing_code m_routing_code{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        client_firm m_client_firm{};
        fill_version m_fill_version{};
        drop_exec_status m_drop_exec_status{};
        other_detail m_other_detail{};
        error_detail m_error_detail{};
        fill_number m_fill_number{};
        fill_dttm m_fill_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        routing_code get_routing_code() const {
            return m_routing_code;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        fill_version get_fill_version() const {
            return m_fill_version;
        }		
        drop_exec_status get_drop_exec_status() const {
            return m_drop_exec_status;
        }		
        other_detail get_other_detail() const {
            return m_other_detail;
        }		
        error_detail get_error_detail() const {
            return m_error_detail;
        }		
        fill_number get_fill_number() const {
            return m_fill_number;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
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
        void set_routing_code(const routing_code& value)  {
            m_routing_code = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_fill_version(const fill_version& value)  {
            m_fill_version = value;
        }
        void set_drop_exec_status(const drop_exec_status& value)  {
            m_drop_exec_status = value;
        }
        void set_other_detail(const other_detail& value)  {
            m_other_detail = value;
        }
        void set_error_detail(const error_detail& value)  {
            m_error_detail = value;
        }
        void set_fill_number(const fill_number& value)  {
            m_fill_number = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrDropExecutionAck::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const routing_code & value) {
            set_routing_code(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const fill_version & value) {
            set_fill_version(value);
        }
        void set(const drop_exec_status & value) {
            set_drop_exec_status(value);
        }
        void set(const other_detail & value) {
            set_other_detail(value);
        }
        void set(const error_detail & value) {
            set_error_detail(value);
        }
        void set(const fill_number & value) {
            set_fill_number(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrDropExecutionAck & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_routing_code);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_client_firm);
            set(value.m_fill_version);
            set(value.m_drop_exec_status);
            set(value.m_other_detail);
            set(value.m_error_detail);
            set(value.m_fill_number);
            set(value.m_fill_dttm);
            set(value.m_timestamp);
        }

        SpdrDropExecutionAck() {
            m__meta.set_message_type("SpdrDropExecutionAck");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1465, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1465, length);
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
             *this = SpdrDropExecutionAck{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRoutingCode() const {
            return !(m_routing_code.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeFillVersion() const {
            return !(m_fill_version == 0);
        }
        bool IncludeOtherDetail() const {
            return !(m_other_detail.empty());
        }
        bool IncludeErrorDetail() const {
            return !(m_error_detail.empty());
        }
        bool IncludeFillNumber() const {
            return !(m_fill_number == 0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_routing_code);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(103, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_client_firm);
            }
            if ( IncludeFillVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_fill_version);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropExecStatus>(m_drop_exec_status)));
            if ( IncludeOtherDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_other_detail);
            }
            if ( IncludeErrorDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_error_detail);
            }
            if ( IncludeFillNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(124,m_fill_number);
            }
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_fill_dttm);
            }
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
            if ( IncludeRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_routing_code));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 103, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_client_firm));
            }
            if ( IncludeFillVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_fill_version);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropExecStatus>(m_drop_exec_status)));
            if ( IncludeOtherDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_other_detail));
            }
            if ( IncludeErrorDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_error_detail));
            }
            if ( IncludeFillNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,124,m_fill_number);
            }
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_fill_dttm);
            }
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_drop_exec_status = static_cast<spiderrock::protobuf::api::DropExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_other_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_fill_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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

    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::_meta>() const { return SpdrDropExecutionAck::_meta{ m__meta}; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::pkey>() const { return SpdrDropExecutionAck::pkey{ m_pkey}; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::routing_code>() const { return m_routing_code; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::sec_key>() const { return SpdrDropExecutionAck::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::fill_version>() const { return m_fill_version; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::drop_exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DropExecStatus>( m_drop_exec_status)); }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::other_detail>() const { return m_other_detail; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::error_detail>() const { return m_error_detail; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::fill_number>() const { return m_fill_number; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto SpdrDropExecutionAck::get<SpdrDropExecutionAck::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrDropExecutionAck_PKey::get<SpdrDropExecutionAck_PKey::drop_number>() const { return m_drop_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrDropExecutionAck_PKey& m) {
        o << "\"drop_number\":" << m.get<SpdrDropExecutionAck_PKey::drop_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrDropExecutionAck& m) {
        o << "\"_meta\":{" << m.get<SpdrDropExecutionAck::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrDropExecutionAck::pkey>() << "}";
        o << ",\"routing_code\":\"" << m.get<SpdrDropExecutionAck::routing_code>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrDropExecutionAck::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrDropExecutionAck::sec_type>();
        o << ",\"client_firm\":\"" << m.get<SpdrDropExecutionAck::client_firm>() << "\"";
        o << ",\"fill_version\":" << m.get<SpdrDropExecutionAck::fill_version>();
        o << ",\"drop_exec_status\":" << (int64_t)m.get<SpdrDropExecutionAck::drop_exec_status>();
        o << ",\"other_detail\":\"" << m.get<SpdrDropExecutionAck::other_detail>() << "\"";
        o << ",\"error_detail\":\"" << m.get<SpdrDropExecutionAck::error_detail>() << "\"";
        o << ",\"fill_number\":" << m.get<SpdrDropExecutionAck::fill_number>();
        {
            std::time_t tt = m.get<SpdrDropExecutionAck::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrDropExecutionAck::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}