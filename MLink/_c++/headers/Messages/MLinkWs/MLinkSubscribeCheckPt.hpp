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

    #ifndef _subscribe_id__GUARD__
    #define _subscribe_id__GUARD__
    DECL_STRONG_TYPE(subscribe_id, int64);
    #endif//_subscribe_id__GUARD__

    #ifndef _signal_id__GUARD__
    #define _signal_id__GUARD__
    DECL_STRONG_TYPE(signal_id, int64);
    #endif//_signal_id__GUARD__

    #ifndef _state__MLinkSubscribeState__GUARD__
    #define _state__MLinkSubscribeState__GUARD__
    DECL_STRONG_TYPE(state__MLinkSubscribeState, spiderrock::protobuf::api::MLinkSubscribeState);
    #endif//_state__MLinkSubscribeState__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    

    class MLinkSubscribeCheckPt {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using session_id = spiderrock::protobuf::api::session_id;
        using subscribe_id = spiderrock::protobuf::api::subscribe_id;
        using signal_id = spiderrock::protobuf::api::signal_id;
        using state = spiderrock::protobuf::api::state__MLinkSubscribeState;
        using detail = spiderrock::protobuf::api::detail;

        private:
        _meta m__meta{};
        session_id m_session_id{};
        subscribe_id m_subscribe_id{};
        signal_id m_signal_id{};
        state m_state{};
        detail m_detail{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        session_id get_session_id() const {
            return m_session_id;
        }		
        subscribe_id get_subscribe_id() const {
            return m_subscribe_id;
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
        void set_subscribe_id(const subscribe_id& value)  {
            m_subscribe_id = value;
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

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeCheckPt::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const session_id & value) {
            set_session_id(value);
        }
        void set(const subscribe_id & value) {
            set_subscribe_id(value);
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

        void set(const MLinkSubscribeCheckPt & value) {
            set(value.m__meta);
            set(value.m_session_id);
            set(value.m_subscribe_id);
            set(value.m_signal_id);
            set(value.m_state);
            set(value.m_detail);
        }

        MLinkSubscribeCheckPt() {
            m__meta.set_message_type("MLinkSubscribeCheckPt");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3388, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3388, length);
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
             *this = MLinkSubscribeCheckPt{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeSessionId() const {
            return !(m_session_id == 0);
        }
        bool IncludeSubscribeId() const {
            return !(m_subscribe_id == 0);
        }
        bool IncludeSignalId() const {
            return !(m_signal_id == 0);
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
            if ( IncludeSubscribeId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_subscribe_id);
            }
            if ( IncludeSignalId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_signal_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkSubscribeState>(m_state)));
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
            if ( IncludeSessionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_session_id);
            }
            if ( IncludeSubscribeId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_subscribe_id);
            }
            if ( IncludeSignalId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_signal_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkSubscribeState>(m_state)));
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_session_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_subscribe_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
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
                            m_state = static_cast<spiderrock::protobuf::api::MLinkSubscribeState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto MLinkSubscribeCheckPt::get<MLinkSubscribeCheckPt::_meta>() const { return MLinkSubscribeCheckPt::_meta{ m__meta}; }
    template<> inline const auto MLinkSubscribeCheckPt::get<MLinkSubscribeCheckPt::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkSubscribeCheckPt::get<MLinkSubscribeCheckPt::subscribe_id>() const { return m_subscribe_id; }
    template<> inline const auto MLinkSubscribeCheckPt::get<MLinkSubscribeCheckPt::signal_id>() const { return m_signal_id; }
    template<> inline const auto MLinkSubscribeCheckPt::get<MLinkSubscribeCheckPt::state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkSubscribeState>( m_state)); }
    template<> inline const auto MLinkSubscribeCheckPt::get<MLinkSubscribeCheckPt::detail>() const { return m_detail; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribeCheckPt& m) {
        o << "\"_meta\":{" << m.get<MLinkSubscribeCheckPt::_meta>() << "}";
        o << ",\"session_id\":" << m.get<MLinkSubscribeCheckPt::session_id>();
        o << ",\"subscribe_id\":" << m.get<MLinkSubscribeCheckPt::subscribe_id>();
        o << ",\"signal_id\":" << m.get<MLinkSubscribeCheckPt::signal_id>();
        o << ",\"state\":" << (int64_t)m.get<MLinkSubscribeCheckPt::state>();
        o << ",\"detail\":\"" << m.get<MLinkSubscribeCheckPt::detail>() << "\"";
        return o;
    }

}
}
}