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

    #ifndef _signal_id__GUARD__
    #define _signal_id__GUARD__
    DECL_STRONG_TYPE(signal_id, int64);
    #endif//_signal_id__GUARD__

    #ifndef _state__MLinkStreamState__GUARD__
    #define _state__MLinkStreamState__GUARD__
    DECL_STRONG_TYPE(state__MLinkStreamState, spiderrock::protobuf::api::MLinkStreamState);
    #endif//_state__MLinkStreamState__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    #ifndef _highwater_ts__GUARD__
    #define _highwater_ts__GUARD__
    DECL_STRONG_TYPE(highwater_ts, int64);
    #endif//_highwater_ts__GUARD__

    #ifndef _num_bytes_sent__GUARD__
    #define _num_bytes_sent__GUARD__
    DECL_STRONG_TYPE(num_bytes_sent, int64);
    #endif//_num_bytes_sent__GUARD__

    #ifndef _num_messages_sent__int32__GUARD__
    #define _num_messages_sent__int32__GUARD__
    DECL_STRONG_TYPE(num_messages_sent__int32, int32);
    #endif//_num_messages_sent__int32__GUARD__

    #ifndef _wait_elapsed__GUARD__
    #define _wait_elapsed__GUARD__
    DECL_STRONG_TYPE(wait_elapsed, double);
    #endif//_wait_elapsed__GUARD__

    #ifndef _query_elapsed__double__GUARD__
    #define _query_elapsed__double__GUARD__
    DECL_STRONG_TYPE(query_elapsed__double, double);
    #endif//_query_elapsed__double__GUARD__

    #ifndef _try_fwd_elapsed__GUARD__
    #define _try_fwd_elapsed__GUARD__
    DECL_STRONG_TYPE(try_fwd_elapsed, double);
    #endif//_try_fwd_elapsed__GUARD__

    #ifndef _send_elapsed__GUARD__
    #define _send_elapsed__GUARD__
    DECL_STRONG_TYPE(send_elapsed, double);
    #endif//_send_elapsed__GUARD__

    #ifndef _flush_elapsed__GUARD__
    #define _flush_elapsed__GUARD__
    DECL_STRONG_TYPE(flush_elapsed, double);
    #endif//_flush_elapsed__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    

    class MLinkStreamCheckPt {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using session_id = spiderrock::protobuf::api::session_id;
        using query_id = spiderrock::protobuf::api::query_id;
        using signal_id = spiderrock::protobuf::api::signal_id;
        using state = spiderrock::protobuf::api::state__MLinkStreamState;
        using detail = spiderrock::protobuf::api::detail;
        using highwater_ts = spiderrock::protobuf::api::highwater_ts;
        using num_bytes_sent = spiderrock::protobuf::api::num_bytes_sent;
        using num_messages_sent = spiderrock::protobuf::api::num_messages_sent__int32;
        using wait_elapsed = spiderrock::protobuf::api::wait_elapsed;
        using query_elapsed = spiderrock::protobuf::api::query_elapsed__double;
        using try_fwd_elapsed = spiderrock::protobuf::api::try_fwd_elapsed;
        using send_elapsed = spiderrock::protobuf::api::send_elapsed;
        using flush_elapsed = spiderrock::protobuf::api::flush_elapsed;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        session_id m_session_id{};
        query_id m_query_id{};
        signal_id m_signal_id{};
        state m_state{};
        detail m_detail{};
        highwater_ts m_highwater_ts{};
        num_bytes_sent m_num_bytes_sent{};
        num_messages_sent m_num_messages_sent{};
        wait_elapsed m_wait_elapsed{};
        query_elapsed m_query_elapsed{};
        try_fwd_elapsed m_try_fwd_elapsed{};
        send_elapsed m_send_elapsed{};
        flush_elapsed m_flush_elapsed{};
        timestamp m_timestamp{};

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
        signal_id get_signal_id() const {
            return m_signal_id;
        }		
        state get_state() const {
            return m_state;
        }		
        detail get_detail() const {
            return m_detail;
        }		
        highwater_ts get_highwater_ts() const {
            return m_highwater_ts;
        }		
        num_bytes_sent get_num_bytes_sent() const {
            return m_num_bytes_sent;
        }		
        num_messages_sent get_num_messages_sent() const {
            return m_num_messages_sent;
        }		
        wait_elapsed get_wait_elapsed() const {
            return m_wait_elapsed;
        }		
        query_elapsed get_query_elapsed() const {
            return m_query_elapsed;
        }		
        try_fwd_elapsed get_try_fwd_elapsed() const {
            return m_try_fwd_elapsed;
        }		
        send_elapsed get_send_elapsed() const {
            return m_send_elapsed;
        }		
        flush_elapsed get_flush_elapsed() const {
            return m_flush_elapsed;
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
        void set_session_id(const session_id& value)  {
            m_session_id = value;
        }
        void set_query_id(const query_id& value)  {
            m_query_id = value;
        }
        void set_signal_id(const signal_id& value)  {
            m_signal_id = value;
        }
        void set_state(const state& value)  {
            m_state = value;
        }
        void set_detail(const detail& value)  {
            m_detail = value;
        }
        void set_highwater_ts(const highwater_ts& value)  {
            m_highwater_ts = value;
        }
        void set_num_bytes_sent(const num_bytes_sent& value)  {
            m_num_bytes_sent = value;
        }
        void set_num_messages_sent(const num_messages_sent& value)  {
            m_num_messages_sent = value;
        }
        void set_wait_elapsed(const wait_elapsed& value)  {
            m_wait_elapsed = value;
        }
        void set_query_elapsed(const query_elapsed& value)  {
            m_query_elapsed = value;
        }
        void set_try_fwd_elapsed(const try_fwd_elapsed& value)  {
            m_try_fwd_elapsed = value;
        }
        void set_send_elapsed(const send_elapsed& value)  {
            m_send_elapsed = value;
        }
        void set_flush_elapsed(const flush_elapsed& value)  {
            m_flush_elapsed = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkStreamCheckPt::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const signal_id & value) {
            set_signal_id(value);
        }
        void set(const state & value) {
            set_state(value);
        }
        void set(const detail & value) {
            set_detail(value);
        }
        void set(const highwater_ts & value) {
            set_highwater_ts(value);
        }
        void set(const num_bytes_sent & value) {
            set_num_bytes_sent(value);
        }
        void set(const num_messages_sent & value) {
            set_num_messages_sent(value);
        }
        void set(const wait_elapsed & value) {
            set_wait_elapsed(value);
        }
        void set(const query_elapsed & value) {
            set_query_elapsed(value);
        }
        void set(const try_fwd_elapsed & value) {
            set_try_fwd_elapsed(value);
        }
        void set(const send_elapsed & value) {
            set_send_elapsed(value);
        }
        void set(const flush_elapsed & value) {
            set_flush_elapsed(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const MLinkStreamCheckPt & value) {
            set(value.m__meta);
            set(value.m_session_id);
            set(value.m_query_id);
            set(value.m_signal_id);
            set(value.m_state);
            set(value.m_detail);
            set(value.m_highwater_ts);
            set(value.m_num_bytes_sent);
            set(value.m_num_messages_sent);
            set(value.m_wait_elapsed);
            set(value.m_query_elapsed);
            set(value.m_try_fwd_elapsed);
            set(value.m_send_elapsed);
            set(value.m_flush_elapsed);
            set(value.m_timestamp);
        }

        MLinkStreamCheckPt() {
            m__meta.set_message_type("MLinkStreamCheckPt");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3382, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3382, length);
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
             *this = MLinkStreamCheckPt{};
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
        bool IncludeSignalId() const {
            return !(m_signal_id == 0);
        }
        bool IncludeDetail() const {
            return !(m_detail.empty());
        }
        bool IncludeHighwaterTs() const {
            return !(m_highwater_ts == 0);
        }
        bool IncludeNumBytesSent() const {
            return !(m_num_bytes_sent == 0);
        }
        bool IncludeNumMessagesSent() const {
            return !(m_num_messages_sent == 0);
        }
        bool IncludeWaitElapsed() const {
            return !(m_wait_elapsed == 0.0);
        }
        bool IncludeQueryElapsed() const {
            return !(m_query_elapsed == 0.0);
        }
        bool IncludeTryFwdElapsed() const {
            return !(m_try_fwd_elapsed == 0.0);
        }
        bool IncludeSendElapsed() const {
            return !(m_send_elapsed == 0.0);
        }
        bool IncludeFlushElapsed() const {
            return !(m_flush_elapsed == 0.0);
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
            if ( IncludeSessionId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_session_id);
            }
            if ( IncludeQueryId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_query_id);
            }
            if ( IncludeSignalId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_signal_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkStreamState>(m_state)));
            if ( IncludeDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_detail);
            }
            if ( IncludeHighwaterTs()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(115,m_highwater_ts);
            }
            if ( IncludeNumBytesSent()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(118,m_num_bytes_sent);
            }
            if ( IncludeNumMessagesSent()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_num_messages_sent);
            }
            if ( IncludeWaitElapsed()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_wait_elapsed);
            }
            if ( IncludeQueryElapsed()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_query_elapsed);
            }
            if ( IncludeTryFwdElapsed()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_try_fwd_elapsed);
            }
            if ( IncludeSendElapsed()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_send_elapsed);
            }
            if ( IncludeFlushElapsed()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_flush_elapsed);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_timestamp);
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
            if ( IncludeSignalId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_signal_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkStreamState>(m_state)));
            if ( IncludeDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_detail));
            }
            if ( IncludeHighwaterTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,115,m_highwater_ts);
            }
            if ( IncludeNumBytesSent()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,118,m_num_bytes_sent);
            }
            if ( IncludeNumMessagesSent()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_num_messages_sent);
            }
            if ( IncludeWaitElapsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_wait_elapsed);
            }
            if ( IncludeQueryElapsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_query_elapsed);
            }
            if ( IncludeTryFwdElapsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_try_fwd_elapsed);
            }
            if ( IncludeSendElapsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_send_elapsed);
            }
            if ( IncludeFlushElapsed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_flush_elapsed);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_timestamp);
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
                            m_signal_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_state = static_cast<spiderrock::protobuf::api::MLinkStreamState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_highwater_ts = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_bytes_sent = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_messages_sent = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_wait_elapsed = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_query_elapsed = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_try_fwd_elapsed = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_send_elapsed = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_flush_elapsed = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
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

    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::_meta>() const { return MLinkStreamCheckPt::_meta{ m__meta}; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::query_id>() const { return m_query_id; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::signal_id>() const { return m_signal_id; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkStreamState>( m_state)); }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::detail>() const { return m_detail; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::highwater_ts>() const { return m_highwater_ts; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::num_bytes_sent>() const { return m_num_bytes_sent; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::num_messages_sent>() const { return m_num_messages_sent; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::wait_elapsed>() const { return m_wait_elapsed; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::query_elapsed>() const { return m_query_elapsed; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::try_fwd_elapsed>() const { return m_try_fwd_elapsed; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::send_elapsed>() const { return m_send_elapsed; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::flush_elapsed>() const { return m_flush_elapsed; }
    template<> inline const auto MLinkStreamCheckPt::get<MLinkStreamCheckPt::timestamp>() const { return m_timestamp; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkStreamCheckPt& m) {
        o << "\"_meta\":{" << m.get<MLinkStreamCheckPt::_meta>() << "}";
        o << ",\"session_id\":" << m.get<MLinkStreamCheckPt::session_id>();
        o << ",\"query_id\":" << m.get<MLinkStreamCheckPt::query_id>();
        o << ",\"signal_id\":" << m.get<MLinkStreamCheckPt::signal_id>();
        o << ",\"state\":" << (int64_t)m.get<MLinkStreamCheckPt::state>();
        o << ",\"detail\":\"" << m.get<MLinkStreamCheckPt::detail>() << "\"";
        o << ",\"highwater_ts\":" << m.get<MLinkStreamCheckPt::highwater_ts>();
        o << ",\"num_bytes_sent\":" << m.get<MLinkStreamCheckPt::num_bytes_sent>();
        o << ",\"num_messages_sent\":" << m.get<MLinkStreamCheckPt::num_messages_sent>();
        o << ",\"wait_elapsed\":" << m.get<MLinkStreamCheckPt::wait_elapsed>();
        o << ",\"query_elapsed\":" << m.get<MLinkStreamCheckPt::query_elapsed>();
        o << ",\"try_fwd_elapsed\":" << m.get<MLinkStreamCheckPt::try_fwd_elapsed>();
        o << ",\"send_elapsed\":" << m.get<MLinkStreamCheckPt::send_elapsed>();
        o << ",\"flush_elapsed\":" << m.get<MLinkStreamCheckPt::flush_elapsed>();
        {
            std::time_t tt = m.get<MLinkStreamCheckPt::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}