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

    #ifndef _num_bytes_sent__GUARD__
    #define _num_bytes_sent__GUARD__
    DECL_STRONG_TYPE(num_bytes_sent, int64);
    #endif//_num_bytes_sent__GUARD__

    #ifndef _num_messages_sent__int64__GUARD__
    #define _num_messages_sent__int64__GUARD__
    DECL_STRONG_TYPE(num_messages_sent__int64, int64);
    #endif//_num_messages_sent__int64__GUARD__

    #ifndef _num_messages_scanned__GUARD__
    #define _num_messages_scanned__GUARD__
    DECL_STRONG_TYPE(num_messages_scanned, int64);
    #endif//_num_messages_scanned__GUARD__

    #ifndef _query_elapsed__float__GUARD__
    #define _query_elapsed__float__GUARD__
    DECL_STRONG_TYPE(query_elapsed__float, float);
    #endif//_query_elapsed__float__GUARD__

    #ifndef _result__QResult__GUARD__
    #define _result__QResult__GUARD__
    DECL_STRONG_TYPE(result__QResult, spiderrock::protobuf::api::QResult);
    #endif//_result__QResult__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    

    class QueryResult {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using num_bytes_sent = spiderrock::protobuf::api::num_bytes_sent;
        using num_messages_sent = spiderrock::protobuf::api::num_messages_sent__int64;
        using num_messages_scanned = spiderrock::protobuf::api::num_messages_scanned;
        using query_elapsed = spiderrock::protobuf::api::query_elapsed__float;
        using result = spiderrock::protobuf::api::result__QResult;
        using detail = spiderrock::protobuf::api::detail;

        private:
        _meta m__meta{};
        num_bytes_sent m_num_bytes_sent{};
        num_messages_sent m_num_messages_sent{};
        num_messages_scanned m_num_messages_scanned{};
        query_elapsed m_query_elapsed{};
        result m_result{};
        detail m_detail{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        num_bytes_sent get_num_bytes_sent() const {
            return m_num_bytes_sent;
        }		
        num_messages_sent get_num_messages_sent() const {
            return m_num_messages_sent;
        }		
        num_messages_scanned get_num_messages_scanned() const {
            return m_num_messages_scanned;
        }		
        query_elapsed get_query_elapsed() const {
            return m_query_elapsed;
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
        void set_num_bytes_sent(const num_bytes_sent& value)  {
            m_num_bytes_sent = value;
        }
        void set_num_messages_sent(const num_messages_sent& value)  {
            m_num_messages_sent = value;
        }
        void set_num_messages_scanned(const num_messages_scanned& value)  {
            m_num_messages_scanned = value;
        }
        void set_query_elapsed(const query_elapsed& value)  {
            m_query_elapsed = value;
        }
        void set_result(const result& value)  {
            m_result = value;
        }
        void set_detail(const detail& value)  {
            m_detail = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to QueryResult::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const num_bytes_sent & value) {
            set_num_bytes_sent(value);
        }
        void set(const num_messages_sent & value) {
            set_num_messages_sent(value);
        }
        void set(const num_messages_scanned & value) {
            set_num_messages_scanned(value);
        }
        void set(const query_elapsed & value) {
            set_query_elapsed(value);
        }
        void set(const result & value) {
            set_result(value);
        }
        void set(const detail & value) {
            set_detail(value);
        }

        void set(const QueryResult & value) {
            set(value.m__meta);
            set(value.m_num_bytes_sent);
            set(value.m_num_messages_sent);
            set(value.m_num_messages_scanned);
            set(value.m_query_elapsed);
            set(value.m_result);
            set(value.m_detail);
        }

        QueryResult() {
            m__meta.set_message_type("QueryResult");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3445, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3445, length);
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
             *this = QueryResult{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeNumBytesSent() const {
            return !(m_num_bytes_sent == 0);
        }
        bool IncludeNumMessagesSent() const {
            return !(m_num_messages_sent == 0);
        }
        bool IncludeNumMessagesScanned() const {
            return !(m_num_messages_scanned == 0);
        }
        bool IncludeQueryElapsed() const {
            return !(m_query_elapsed == 0.0);
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
            if ( IncludeNumBytesSent()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_num_bytes_sent);
            }
            if ( IncludeNumMessagesSent()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_num_messages_sent);
            }
            if ( IncludeNumMessagesScanned()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_num_messages_scanned);
            }
            if ( IncludeQueryElapsed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_query_elapsed);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QResult>(m_result)));
            if ( IncludeDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_detail);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeNumBytesSent()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_num_bytes_sent);
            }
            if ( IncludeNumMessagesSent()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_num_messages_sent);
            }
            if ( IncludeNumMessagesScanned()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_num_messages_scanned);
            }
            if ( IncludeQueryElapsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_query_elapsed);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QResult>(m_result)));
            if ( IncludeDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_detail));
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_bytes_sent = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_messages_sent = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_messages_scanned = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_query_elapsed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_result = static_cast<spiderrock::protobuf::api::QResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
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

    template<> inline const auto QueryResult::get<QueryResult::_meta>() const { return QueryResult::_meta{ m__meta}; }
    template<> inline const auto QueryResult::get<QueryResult::num_bytes_sent>() const { return m_num_bytes_sent; }
    template<> inline const auto QueryResult::get<QueryResult::num_messages_sent>() const { return m_num_messages_sent; }
    template<> inline const auto QueryResult::get<QueryResult::num_messages_scanned>() const { return m_num_messages_scanned; }
    template<> inline const auto QueryResult::get<QueryResult::query_elapsed>() const { return m_query_elapsed; }
    template<> inline const auto QueryResult::get<QueryResult::result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QResult>( m_result)); }
    template<> inline const auto QueryResult::get<QueryResult::detail>() const { return m_detail; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const QueryResult& m) {
        o << "\"_meta\":{" << m.get<QueryResult::_meta>() << "}";
        o << ",\"num_bytes_sent\":" << m.get<QueryResult::num_bytes_sent>();
        o << ",\"num_messages_sent\":" << m.get<QueryResult::num_messages_sent>();
        o << ",\"num_messages_scanned\":" << m.get<QueryResult::num_messages_scanned>();
        o << ",\"query_elapsed\":" << m.get<QueryResult::query_elapsed>();
        o << ",\"result\":" << (int64_t)m.get<QueryResult::result>();
        o << ",\"detail\":\"" << m.get<QueryResult::detail>() << "\"";
        return o;
    }

}
}
}