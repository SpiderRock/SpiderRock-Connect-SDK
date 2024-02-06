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

    #ifndef _msg_type__GUARD__
    #define _msg_type__GUARD__
    DECL_STRONG_TYPE(msg_type, uint32);
    #endif//_msg_type__GUARD__

    #ifndef _send_ts__GUARD__
    #define _send_ts__GUARD__
    DECL_STRONG_TYPE(send_ts, int64);
    #endif//_send_ts__GUARD__

    #ifndef _pkey__GUARD__
    #define _pkey__GUARD__
    DECL_STRONG_TYPE(pkey, string);
    #endif//_pkey__GUARD__

    #ifndef _result__PostAckResult__GUARD__
    #define _result__PostAckResult__GUARD__
    DECL_STRONG_TYPE(result__PostAckResult, spiderrock::protobuf::api::PostAckResult);
    #endif//_result__PostAckResult__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    

    class PostAck {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using msg_type = spiderrock::protobuf::api::msg_type;
        using send_ts = spiderrock::protobuf::api::send_ts;
        using pkey = spiderrock::protobuf::api::pkey;
        using result = spiderrock::protobuf::api::result__PostAckResult;
        using detail = spiderrock::protobuf::api::detail;

        private:
        _meta m__meta{};
        msg_type m_msg_type{};
        send_ts m_send_ts{};
        pkey m_pkey{};
        result m_result{};
        detail m_detail{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        msg_type get_msg_type() const {
            return m_msg_type;
        }		
        send_ts get_send_ts() const {
            return m_send_ts;
        }		
        pkey get_pkey() const {
            return m_pkey;
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
        void set_msg_type(const msg_type& value)  {
            m_msg_type = value;
        }
        void set_send_ts(const send_ts& value)  {
            m_send_ts = value;
        }
        void set_pkey(const pkey& value)  {
            m_pkey = value;
        }
        void set_result(const result& value)  {
            m_result = value;
        }
        void set_detail(const detail& value)  {
            m_detail = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PostAck::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const msg_type & value) {
            set_msg_type(value);
        }
        void set(const send_ts & value) {
            set_send_ts(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const result & value) {
            set_result(value);
        }
        void set(const detail & value) {
            set_detail(value);
        }

        void set(const PostAck & value) {
            set(value.m__meta);
            set(value.m_msg_type);
            set(value.m_send_ts);
            set(value.m_pkey);
            set(value.m_result);
            set(value.m_detail);
        }

        PostAck() {
            m__meta.set_message_type("PostAck");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3440, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3440, length);
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
             *this = PostAck{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeMsgType() const {
            return !(m_msg_type == 0);
        }
        bool IncludeSendTs() const {
            return !(m_send_ts == 0);
        }
        bool IncludePkey() const {
            return !(m_pkey.empty());
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
            if ( IncludeMsgType()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(100,m_msg_type);
            }
            if ( IncludeSendTs()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_send_ts);
            }
            if ( IncludePkey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_pkey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PostAckResult>(m_result)));
            if ( IncludeDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_detail);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeMsgType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,100,m_msg_type);
            }
            if ( IncludeSendTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_send_ts);
            }
            if ( IncludePkey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_pkey));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PostAckResult>(m_result)));
            if ( IncludeDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_detail));
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
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_msg_type = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_send_ts = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pkey = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_result = static_cast<spiderrock::protobuf::api::PostAckResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
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

    template<> inline const auto PostAck::get<PostAck::_meta>() const { return PostAck::_meta{ m__meta}; }
    template<> inline const auto PostAck::get<PostAck::msg_type>() const { return m_msg_type; }
    template<> inline const auto PostAck::get<PostAck::send_ts>() const { return m_send_ts; }
    template<> inline const auto PostAck::get<PostAck::pkey>() const { return m_pkey; }
    template<> inline const auto PostAck::get<PostAck::result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PostAckResult>( m_result)); }
    template<> inline const auto PostAck::get<PostAck::detail>() const { return m_detail; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const PostAck& m) {
        o << "\"_meta\":{" << m.get<PostAck::_meta>() << "}";
        o << ",\"msg_type\":" << m.get<PostAck::msg_type>();
        o << ",\"send_ts\":" << m.get<PostAck::send_ts>();
        o << ",\"pkey\":\"" << m.get<PostAck::pkey>() << "\"";
        o << ",\"result\":" << (int64_t)m.get<PostAck::result>();
        o << ",\"detail\":\"" << m.get<PostAck::detail>() << "\"";
        return o;
    }

}
}
}