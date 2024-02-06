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

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _where_clause__GUARD__
    #define _where_clause__GUARD__
    DECL_STRONG_TYPE(where_clause, string);
    #endif//_where_clause__GUARD__

    #ifndef _view__GUARD__
    #define _view__GUARD__
    DECL_STRONG_TYPE(view, string);
    #endif//_view__GUARD__

    #ifndef _unsubscribe__GUARD__
    #define _unsubscribe__GUARD__
    DECL_STRONG_TYPE(unsubscribe, spiderrock::protobuf::api::YesNo);
    #endif//_unsubscribe__GUARD__

    #ifndef _session_id__GUARD__
    #define _session_id__GUARD__
    DECL_STRONG_TYPE(session_id, int32);
    #endif//_session_id__GUARD__

    #ifndef _query_id__GUARD__
    #define _query_id__GUARD__
    DECL_STRONG_TYPE(query_id, int64);
    #endif//_query_id__GUARD__

    #ifndef _query_label__GUARD__
    #define _query_label__GUARD__
    DECL_STRONG_TYPE(query_label, string);
    #endif//_query_label__GUARD__

    #ifndef _active_latency__GUARD__
    #define _active_latency__GUARD__
    DECL_STRONG_TYPE(active_latency, int32);
    #endif//_active_latency__GUARD__

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _sys_realm__GUARD__
    #define _sys_realm__GUARD__
    DECL_STRONG_TYPE(sys_realm, spiderrock::protobuf::api::SysRealm);
    #endif//_sys_realm__GUARD__

    #ifndef _highwater_ts__GUARD__
    #define _highwater_ts__GUARD__
    DECL_STRONG_TYPE(highwater_ts, int64);
    #endif//_highwater_ts__GUARD__

    #ifndef _stripe_filter__GUARD__
    #define _stripe_filter__GUARD__
    DECL_STRONG_TYPE(stripe_filter, string);
    #endif//_stripe_filter__GUARD__

    #ifndef _schema_hash__int64__GUARD__
    #define _schema_hash__int64__GUARD__
    DECL_STRONG_TYPE(schema_hash__int64, int64);
    #endif//_schema_hash__int64__GUARD__

    #ifndef _local_msg_type__GUARD__
    #define _local_msg_type__GUARD__
    DECL_STRONG_TYPE(local_msg_type, uint32);
    #endif//_local_msg_type__GUARD__

    #ifndef _local_msg_name__GUARD__
    #define _local_msg_name__GUARD__
    DECL_STRONG_TYPE(local_msg_name, string);
    #endif//_local_msg_name__GUARD__

    

    class MLinkStream {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using msg_name = spiderrock::protobuf::api::msg_name;
        using where_clause = spiderrock::protobuf::api::where_clause;
        using view = spiderrock::protobuf::api::view;
        using unsubscribe = spiderrock::protobuf::api::unsubscribe;
        using session_id = spiderrock::protobuf::api::session_id;
        using query_id = spiderrock::protobuf::api::query_id;
        using query_label = spiderrock::protobuf::api::query_label;
        using active_latency = spiderrock::protobuf::api::active_latency;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using highwater_ts = spiderrock::protobuf::api::highwater_ts;
        using stripe_filter = spiderrock::protobuf::api::stripe_filter;
        using schema_hash = spiderrock::protobuf::api::schema_hash__int64;
        using local_msg_type = spiderrock::protobuf::api::local_msg_type;
        using local_msg_name = spiderrock::protobuf::api::local_msg_name;

        private:
        _meta m__meta{};
        msg_name m_msg_name{};
        where_clause m_where_clause{};
        view m_view{};
        unsubscribe m_unsubscribe{};
        session_id m_session_id{};
        query_id m_query_id{};
        query_label m_query_label{};
        active_latency m_active_latency{};
        sys_environment m_sys_environment{};
        sys_realm m_sys_realm{};
        highwater_ts m_highwater_ts{};
        stripe_filter m_stripe_filter{};
        schema_hash m_schema_hash{};
        local_msg_type m_local_msg_type{};
        local_msg_name m_local_msg_name{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        msg_name get_msg_name() const {
            return m_msg_name;
        }		
        where_clause get_where_clause() const {
            return m_where_clause;
        }		
        view get_view() const {
            return m_view;
        }		
        unsubscribe get_unsubscribe() const {
            return m_unsubscribe;
        }		
        session_id get_session_id() const {
            return m_session_id;
        }		
        query_id get_query_id() const {
            return m_query_id;
        }		
        query_label get_query_label() const {
            return m_query_label;
        }		
        active_latency get_active_latency() const {
            return m_active_latency;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        sys_realm get_sys_realm() const {
            return m_sys_realm;
        }		
        highwater_ts get_highwater_ts() const {
            return m_highwater_ts;
        }		
        stripe_filter get_stripe_filter() const {
            return m_stripe_filter;
        }		
        schema_hash get_schema_hash() const {
            return m_schema_hash;
        }		
        local_msg_type get_local_msg_type() const {
            return m_local_msg_type;
        }		
        local_msg_name get_local_msg_name() const {
            return m_local_msg_name;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_where_clause(const where_clause& value)  {
            m_where_clause = value;
        }
        void set_view(const view& value)  {
            m_view = value;
        }
        void set_unsubscribe(const unsubscribe& value)  {
            m_unsubscribe = value;
        }
        void set_session_id(const session_id& value)  {
            m_session_id = value;
        }
        void set_query_id(const query_id& value)  {
            m_query_id = value;
        }
        void set_query_label(const query_label& value)  {
            m_query_label = value;
        }
        void set_active_latency(const active_latency& value)  {
            m_active_latency = value;
        }
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_sys_realm(const sys_realm& value)  {
            m_sys_realm = value;
        }
        void set_highwater_ts(const highwater_ts& value)  {
            m_highwater_ts = value;
        }
        void set_stripe_filter(const stripe_filter& value)  {
            m_stripe_filter = value;
        }
        void set_schema_hash(const schema_hash& value)  {
            m_schema_hash = value;
        }
        void set_local_msg_type(const local_msg_type& value)  {
            m_local_msg_type = value;
        }
        void set_local_msg_name(const local_msg_name& value)  {
            m_local_msg_name = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkStream::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const msg_name & value) {
            set_msg_name(value);
        }
        void set(const where_clause & value) {
            set_where_clause(value);
        }
        void set(const view & value) {
            set_view(value);
        }
        void set(const unsubscribe & value) {
            set_unsubscribe(value);
        }
        void set(const session_id & value) {
            set_session_id(value);
        }
        void set(const query_id & value) {
            set_query_id(value);
        }
        void set(const query_label & value) {
            set_query_label(value);
        }
        void set(const active_latency & value) {
            set_active_latency(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const sys_realm & value) {
            set_sys_realm(value);
        }
        void set(const highwater_ts & value) {
            set_highwater_ts(value);
        }
        void set(const stripe_filter & value) {
            set_stripe_filter(value);
        }
        void set(const schema_hash & value) {
            set_schema_hash(value);
        }
        void set(const local_msg_type & value) {
            set_local_msg_type(value);
        }
        void set(const local_msg_name & value) {
            set_local_msg_name(value);
        }

        void set(const MLinkStream & value) {
            set(value.m__meta);
            set(value.m_msg_name);
            set(value.m_where_clause);
            set(value.m_view);
            set(value.m_unsubscribe);
            set(value.m_session_id);
            set(value.m_query_id);
            set(value.m_query_label);
            set(value.m_active_latency);
            set(value.m_sys_environment);
            set(value.m_sys_realm);
            set(value.m_highwater_ts);
            set(value.m_stripe_filter);
            set(value.m_schema_hash);
            set(value.m_local_msg_type);
            set(value.m_local_msg_name);
        }

        MLinkStream() {
            m__meta.set_message_type("MLinkStream");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3380, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3380, length);
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
             *this = MLinkStream{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeMsgName() const {
            return !(m_msg_name.empty());
        }
        bool IncludeWhereClause() const {
            return !(m_where_clause.empty());
        }
        bool IncludeView() const {
            return !(m_view.empty());
        }
        bool IncludeSessionId() const {
            return !(m_session_id == 0);
        }
        bool IncludeQueryId() const {
            return !(m_query_id == 0);
        }
        bool IncludeQueryLabel() const {
            return !(m_query_label.empty());
        }
        bool IncludeActiveLatency() const {
            return !(m_active_latency == 0);
        }
        bool IncludeHighwaterTs() const {
            return !(m_highwater_ts == 0);
        }
        bool IncludeStripeFilter() const {
            return !(m_stripe_filter.empty());
        }
        bool IncludeSchemaHash() const {
            return !(m_schema_hash == 0);
        }
        bool IncludeLocalMsgType() const {
            return !(m_local_msg_type == 0);
        }
        bool IncludeLocalMsgName() const {
            return !(m_local_msg_name.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeMsgName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_msg_name);
            }
            if ( IncludeWhereClause()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_where_clause);
            }
            if ( IncludeView()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_view);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_unsubscribe)));
            if ( IncludeSessionId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_session_id);
            }
            if ( IncludeQueryId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(115,m_query_id);
            }
            if ( IncludeQueryLabel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_query_label);
            }
            if ( IncludeActiveLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_active_latency);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            if ( IncludeHighwaterTs()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_highwater_ts);
            }
            if ( IncludeStripeFilter()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_stripe_filter);
            }
            if ( IncludeSchemaHash()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(136,m_schema_hash);
            }
            if ( IncludeLocalMsgType()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(139,m_local_msg_type);
            }
            if ( IncludeLocalMsgName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_local_msg_name);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeMsgName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_msg_name));
            }
            if ( IncludeWhereClause()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_where_clause));
            }
            if ( IncludeView()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_view));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_unsubscribe)));
            if ( IncludeSessionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_session_id);
            }
            if ( IncludeQueryId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,115,m_query_id);
            }
            if ( IncludeQueryLabel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_query_label));
            }
            if ( IncludeActiveLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_active_latency);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            if ( IncludeHighwaterTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_highwater_ts);
            }
            if ( IncludeStripeFilter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_stripe_filter));
            }
            if ( IncludeSchemaHash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,136,m_schema_hash);
            }
            if ( IncludeLocalMsgType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,139,m_local_msg_type);
            }
            if ( IncludeLocalMsgName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_local_msg_name));
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
                            m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_where_clause = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_view = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_unsubscribe = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_session_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_query_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_query_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_latency = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_realm = static_cast<spiderrock::protobuf::api::SysRealm>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_highwater_ts = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_stripe_filter = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_schema_hash = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_local_msg_type = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_local_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MLinkStream::get<MLinkStream::_meta>() const { return MLinkStream::_meta{ m__meta}; }
    template<> inline const auto MLinkStream::get<MLinkStream::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkStream::get<MLinkStream::where_clause>() const { return m_where_clause; }
    template<> inline const auto MLinkStream::get<MLinkStream::view>() const { return m_view; }
    template<> inline const auto MLinkStream::get<MLinkStream::unsubscribe>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_unsubscribe)); }
    template<> inline const auto MLinkStream::get<MLinkStream::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkStream::get<MLinkStream::query_id>() const { return m_query_id; }
    template<> inline const auto MLinkStream::get<MLinkStream::query_label>() const { return m_query_label; }
    template<> inline const auto MLinkStream::get<MLinkStream::active_latency>() const { return m_active_latency; }
    template<> inline const auto MLinkStream::get<MLinkStream::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto MLinkStream::get<MLinkStream::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto MLinkStream::get<MLinkStream::highwater_ts>() const { return m_highwater_ts; }
    template<> inline const auto MLinkStream::get<MLinkStream::stripe_filter>() const { return m_stripe_filter; }
    template<> inline const auto MLinkStream::get<MLinkStream::schema_hash>() const { return m_schema_hash; }
    template<> inline const auto MLinkStream::get<MLinkStream::local_msg_type>() const { return m_local_msg_type; }
    template<> inline const auto MLinkStream::get<MLinkStream::local_msg_name>() const { return m_local_msg_name; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkStream& m) {
        o << "\"_meta\":{" << m.get<MLinkStream::_meta>() << "}";
        o << ",\"msg_name\":\"" << m.get<MLinkStream::msg_name>() << "\"";
        o << ",\"where_clause\":\"" << m.get<MLinkStream::where_clause>() << "\"";
        o << ",\"view\":\"" << m.get<MLinkStream::view>() << "\"";
        o << ",\"unsubscribe\":" << (int64_t)m.get<MLinkStream::unsubscribe>();
        o << ",\"session_id\":" << m.get<MLinkStream::session_id>();
        o << ",\"query_id\":" << m.get<MLinkStream::query_id>();
        o << ",\"query_label\":\"" << m.get<MLinkStream::query_label>() << "\"";
        o << ",\"active_latency\":" << m.get<MLinkStream::active_latency>();
        o << ",\"sys_environment\":" << (int64_t)m.get<MLinkStream::sys_environment>();
        o << ",\"sys_realm\":" << (int64_t)m.get<MLinkStream::sys_realm>();
        o << ",\"highwater_ts\":" << m.get<MLinkStream::highwater_ts>();
        o << ",\"stripe_filter\":\"" << m.get<MLinkStream::stripe_filter>() << "\"";
        o << ",\"schema_hash\":" << m.get<MLinkStream::schema_hash>();
        o << ",\"local_msg_type\":" << m.get<MLinkStream::local_msg_type>();
        o << ",\"local_msg_name\":\"" << m.get<MLinkStream::local_msg_name>() << "\"";
        return o;
    }

}
}
}