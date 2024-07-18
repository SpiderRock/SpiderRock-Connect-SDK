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

    #ifndef _session_id__GUARD__
    #define _session_id__GUARD__
    DECL_STRONG_TYPE(session_id, int32);
    #endif//_session_id__GUARD__

    #ifndef _query_id__GUARD__
    #define _query_id__GUARD__
    DECL_STRONG_TYPE(query_id, int64);
    #endif//_query_id__GUARD__

    #ifndef _query_send_ts__GUARD__
    #define _query_send_ts__GUARD__
    DECL_STRONG_TYPE(query_send_ts, int64);
    #endif//_query_send_ts__GUARD__

    #ifndef _query_label__GUARD__
    #define _query_label__GUARD__
    DECL_STRONG_TYPE(query_label, string);
    #endif//_query_label__GUARD__

    #ifndef _unsubscribe__GUARD__
    #define _unsubscribe__GUARD__
    DECL_STRONG_TYPE(unsubscribe, spiderrock::protobuf::api::YesNo);
    #endif//_unsubscribe__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _result__AckResult__GUARD__
    #define _result__AckResult__GUARD__
    DECL_STRONG_TYPE(result__AckResult, spiderrock::protobuf::api::AckResult);
    #endif//_result__AckResult__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    

    class MLinkStreamAck {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using session_id = spiderrock::protobuf::api::session_id;
        using query_id = spiderrock::protobuf::api::query_id;
        using query_send_ts = spiderrock::protobuf::api::query_send_ts;
        using query_label = spiderrock::protobuf::api::query_label;
        using unsubscribe = spiderrock::protobuf::api::unsubscribe;
        using msg_name = spiderrock::protobuf::api::msg_name;
        using result = spiderrock::protobuf::api::result__AckResult;
        using detail = spiderrock::protobuf::api::detail;

        private:
        _meta m__meta{};
        session_id m_session_id{};
        query_id m_query_id{};
        query_send_ts m_query_send_ts{};
        query_label m_query_label{};
        unsubscribe m_unsubscribe{};
        msg_name m_msg_name{};
        result m_result{};
        detail m_detail{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        session_id get_session_id() const {
            return m_session_id;
        }		
        query_id get_query_id() const {
            return m_query_id;
        }		
        query_send_ts get_query_send_ts() const {
            return m_query_send_ts;
        }		
        query_label get_query_label() const {
            return m_query_label;
        }		
        unsubscribe get_unsubscribe() const {
            return m_unsubscribe;
        }		
        msg_name get_msg_name() const {
            return m_msg_name;
        }		
        result get_result() const {
            return m_result;
        }		
        detail get_detail() const {
            return m_detail;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_session_id(const session_id& value)  {
            m_session_id = value;
        }
        void set_query_id(const query_id& value)  {
            m_query_id = value;
        }
        void set_query_send_ts(const query_send_ts& value)  {
            m_query_send_ts = value;
        }
        void set_query_label(const query_label& value)  {
            m_query_label = value;
        }
        void set_unsubscribe(const unsubscribe& value)  {
            m_unsubscribe = value;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_result(const result& value)  {
            m_result = value;
        }
        void set_detail(const detail& value)  {
            m_detail = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkStreamAck::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const session_id & value) {
            set_session_id(value);
        }
        void set(const query_id & value) {
            set_query_id(value);
        }
        void set(const query_send_ts & value) {
            set_query_send_ts(value);
        }
        void set(const query_label & value) {
            set_query_label(value);
        }
        void set(const unsubscribe & value) {
            set_unsubscribe(value);
        }
        void set(const msg_name & value) {
            set_msg_name(value);
        }
        void set(const result & value) {
            set_result(value);
        }
        void set(const detail & value) {
            set_detail(value);
        }

        void set(const MLinkStreamAck & value) {
            set(value.m__meta);
            set(value.m_session_id);
            set(value.m_query_id);
            set(value.m_query_send_ts);
            set(value.m_query_label);
            set(value.m_unsubscribe);
            set(value.m_msg_name);
            set(value.m_result);
            set(value.m_detail);
        }

        MLinkStreamAck() {
            m__meta.set_message_type("MLinkStreamAck");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3381, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3381, length);
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
             *this = MLinkStreamAck{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeSessionId() const {
            return !(m_session_id == 0);
        }
        bool IncludeQueryId() const {
            return !(m_query_id == 0);
        }
        bool IncludeQuerySendTs() const {
            return !(m_query_send_ts == 0);
        }
        bool IncludeQueryLabel() const {
            return !(m_query_label.empty());
        }
        bool IncludeMsgName() const {
            return !(m_msg_name.empty());
        }
        bool IncludeDetail() const {
            return !(m_detail.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeSessionId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_session_id);
            }
            if ( IncludeQueryId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_query_id);
            }
            if ( IncludeQuerySendTs()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_query_send_ts);
            }
            if ( IncludeQueryLabel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_query_label);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_unsubscribe)));
            if ( IncludeMsgName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_msg_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AckResult>(m_result)));
            if ( IncludeDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(122,m_detail);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeSessionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_session_id);
            }
            if ( IncludeQueryId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_query_id);
            }
            if ( IncludeQuerySendTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_query_send_ts);
            }
            if ( IncludeQueryLabel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_query_label));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_unsubscribe)));
            if ( IncludeMsgName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_msg_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AckResult>(m_result)));
            if ( IncludeDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,122,static_cast<string>(m_detail));
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_session_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_query_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_query_send_ts = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_query_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_unsubscribe = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_result = static_cast<spiderrock::protobuf::api::AckResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::_meta>() const { return MLinkStreamAck::_meta{ m__meta}; }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::query_id>() const { return m_query_id; }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::query_send_ts>() const { return m_query_send_ts; }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::query_label>() const { return m_query_label; }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::unsubscribe>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_unsubscribe)); }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AckResult>( m_result)); }
    template<> inline const auto MLinkStreamAck::get<MLinkStreamAck::detail>() const { return m_detail; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkStreamAck& m) {
        o << "\"_meta\":{" << m.get<MLinkStreamAck::_meta>() << "}";
        o << ",\"session_id\":" << m.get<MLinkStreamAck::session_id>();
        o << ",\"query_id\":" << m.get<MLinkStreamAck::query_id>();
        o << ",\"query_send_ts\":" << m.get<MLinkStreamAck::query_send_ts>();
        o << ",\"query_label\":\"" << m.get<MLinkStreamAck::query_label>() << "\"";
        o << ",\"unsubscribe\":" << (int64_t)m.get<MLinkStreamAck::unsubscribe>();
        o << ",\"msg_name\":\"" << m.get<MLinkStreamAck::msg_name>() << "\"";
        o << ",\"result\":" << (int64_t)m.get<MLinkStreamAck::result>();
        o << ",\"detail\":\"" << m.get<MLinkStreamAck::detail>() << "\"";
        return o;
    }

}
}
}