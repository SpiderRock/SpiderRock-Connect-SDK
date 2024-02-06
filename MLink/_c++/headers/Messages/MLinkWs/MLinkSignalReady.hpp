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

    #ifndef _signal_id__GUARD__
    #define _signal_id__GUARD__
    DECL_STRONG_TYPE(signal_id, int64);
    #endif//_signal_id__GUARD__

    #ifndef _ready_scan__GUARD__
    #define _ready_scan__GUARD__
    DECL_STRONG_TYPE(ready_scan, spiderrock::protobuf::api::ReadyScan);
    #endif//_ready_scan__GUARD__

    

    class MLinkSignalReady {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using session_id = spiderrock::protobuf::api::session_id;
        using signal_id = spiderrock::protobuf::api::signal_id;
        using ready_scan = spiderrock::protobuf::api::ready_scan;

        private:
        _meta m__meta{};
        session_id m_session_id{};
        signal_id m_signal_id{};
        ready_scan m_ready_scan{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        session_id get_session_id() const {
            return m_session_id;
        }		
        signal_id get_signal_id() const {
            return m_signal_id;
        }		
        ready_scan get_ready_scan() const {
            return m_ready_scan;
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
        void set_signal_id(const signal_id& value)  {
            m_signal_id = value;
        }
        void set_ready_scan(const ready_scan& value)  {
            m_ready_scan = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSignalReady::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const session_id & value) {
            set_session_id(value);
        }
        void set(const signal_id & value) {
            set_signal_id(value);
        }
        void set(const ready_scan & value) {
            set_ready_scan(value);
        }

        void set(const MLinkSignalReady & value) {
            set(value.m__meta);
            set(value.m_session_id);
            set(value.m_signal_id);
            set(value.m_ready_scan);
        }

        MLinkSignalReady() {
            m__meta.set_message_type("MLinkSignalReady");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3410, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3410, length);
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
             *this = MLinkSignalReady{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeSessionId() const {
            return !(m_session_id == 0);
        }
        bool IncludeSignalId() const {
            return !(m_signal_id == 0);
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
            if ( IncludeSignalId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_signal_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReadyScan>(m_ready_scan)));
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
            if ( IncludeSignalId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_signal_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReadyScan>(m_ready_scan)));
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
                            m_signal_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ready_scan = static_cast<spiderrock::protobuf::api::ReadyScan>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MLinkSignalReady::get<MLinkSignalReady::_meta>() const { return MLinkSignalReady::_meta{ m__meta}; }
    template<> inline const auto MLinkSignalReady::get<MLinkSignalReady::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkSignalReady::get<MLinkSignalReady::signal_id>() const { return m_signal_id; }
    template<> inline const auto MLinkSignalReady::get<MLinkSignalReady::ready_scan>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReadyScan>( m_ready_scan)); }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkSignalReady& m) {
        o << "\"_meta\":{" << m.get<MLinkSignalReady::_meta>() << "}";
        o << ",\"session_id\":" << m.get<MLinkSignalReady::session_id>();
        o << ",\"signal_id\":" << m.get<MLinkSignalReady::signal_id>();
        o << ",\"ready_scan\":" << (int64_t)m.get<MLinkSignalReady::ready_scan>();
        return o;
    }

}
}
}