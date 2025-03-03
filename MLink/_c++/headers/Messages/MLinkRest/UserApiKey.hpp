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

    #ifndef _id__GUARD__
    #define _id__GUARD__
    DECL_STRONG_TYPE(id, int32);
    #endif//_id__GUARD__

    #ifndef _expires__GUARD__
    #define _expires__GUARD__
    DECL_STRONG_TYPE(expires, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expires__GUARD__

    #ifndef _created__GUARD__
    #define _created__GUARD__
    DECL_STRONG_TYPE(created, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_created__GUARD__

    #ifndef _label__GUARD__
    #define _label__GUARD__
    DECL_STRONG_TYPE(label, string);
    #endif//_label__GUARD__

    #ifndef _plaintext_api_key__GUARD__
    #define _plaintext_api_key__GUARD__
    DECL_STRONG_TYPE(plaintext_api_key, string);
    #endif//_plaintext_api_key__GUARD__

    #ifndef _success__GUARD__
    #define _success__GUARD__
    DECL_STRONG_TYPE(success, spiderrock::protobuf::api::YesNo);
    #endif//_success__GUARD__

    #ifndef _error_message__GUARD__
    #define _error_message__GUARD__
    DECL_STRONG_TYPE(error_message, string);
    #endif//_error_message__GUARD__

    #ifndef _action__GUARD__
    #define _action__GUARD__
    DECL_STRONG_TYPE(action, spiderrock::protobuf::api::MLinkActions);
    #endif//_action__GUARD__

    

    class UserApiKey {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using id = spiderrock::protobuf::api::id;
        using expires = spiderrock::protobuf::api::expires;
        using created = spiderrock::protobuf::api::created;
        using label = spiderrock::protobuf::api::label;
        using plaintext_api_key = spiderrock::protobuf::api::plaintext_api_key;
        using success = spiderrock::protobuf::api::success;
        using error_message = spiderrock::protobuf::api::error_message;
        using action = spiderrock::protobuf::api::action;

        private:
        _meta m__meta{};
        id m_id{};
        expires m_expires{};
        created m_created{};
        label m_label{};
        plaintext_api_key m_plaintext_api_key{};
        success m_success{};
        error_message m_error_message{};
        action m_action{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        id get_id() const {
            return m_id;
        }		
        expires get_expires() const {
            return m_expires;
        }		
        created get_created() const {
            return m_created;
        }		
        label get_label() const {
            return m_label;
        }		
        plaintext_api_key get_plaintext_api_key() const {
            return m_plaintext_api_key;
        }		
        success get_success() const {
            return m_success;
        }		
        error_message get_error_message() const {
            return m_error_message;
        }		
        action get_action() const {
            return m_action;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_id(const id& value)  {
            m_id = value;
        }
        void set_expires(const expires& value)  {
            m_expires = value;
        }
        void set_created(const created& value)  {
            m_created = value;
        }
        void set_label(const label& value)  {
            m_label = value;
        }
        void set_plaintext_api_key(const plaintext_api_key& value)  {
            m_plaintext_api_key = value;
        }
        void set_success(const success& value)  {
            m_success = value;
        }
        void set_error_message(const error_message& value)  {
            m_error_message = value;
        }
        void set_action(const action& value)  {
            m_action = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserApiKey::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const id & value) {
            set_id(value);
        }
        void set(const expires & value) {
            set_expires(value);
        }
        void set(const created & value) {
            set_created(value);
        }
        void set(const label & value) {
            set_label(value);
        }
        void set(const plaintext_api_key & value) {
            set_plaintext_api_key(value);
        }
        void set(const success & value) {
            set_success(value);
        }
        void set(const error_message & value) {
            set_error_message(value);
        }
        void set(const action & value) {
            set_action(value);
        }

        void set(const UserApiKey & value) {
            set(value.m__meta);
            set(value.m_id);
            set(value.m_expires);
            set(value.m_created);
            set(value.m_label);
            set(value.m_plaintext_api_key);
            set(value.m_success);
            set(value.m_error_message);
            set(value.m_action);
        }

        UserApiKey() {
            m__meta.set_message_type("UserApiKey");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3476, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3476, length);
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
             *this = UserApiKey{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeId() const {
            return !(m_id == 0);
        }
        bool IncludeExpires() const {
            return (m_expires.time_since_epoch().count() != 0);
        }
        bool IncludeCreated() const {
            return (m_created.time_since_epoch().count() != 0);
        }
        bool IncludeLabel() const {
            return !(m_label.empty());
        }
        bool IncludePlaintextApiKey() const {
            return !(m_plaintext_api_key.empty());
        }
        bool IncludeErrorMessage() const {
            return !(m_error_message.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_id);
            }
            if ( IncludeExpires()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(101, m_expires);
            }
            if ( IncludeCreated()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(102, m_created);
            }
            if ( IncludeLabel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_label);
            }
            if ( IncludePlaintextApiKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(104,m_plaintext_api_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_success)));
            if ( IncludeErrorMessage()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_error_message);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkActions>(m_action)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_id);
            }
            if ( IncludeExpires()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 101, m_expires);
            }
            if ( IncludeCreated()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 102, m_created);
            }
            if ( IncludeLabel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_label));
            }
            if ( IncludePlaintextApiKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,104,static_cast<string>(m_plaintext_api_key));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_success)));
            if ( IncludeErrorMessage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_error_message));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkActions>(m_action)));
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
                            m_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_expires = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_created = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_plaintext_api_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 105: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_success = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error_message = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_action = static_cast<spiderrock::protobuf::api::MLinkActions>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto UserApiKey::get<UserApiKey::_meta>() const { return UserApiKey::_meta{ m__meta}; }
    template<> inline const auto UserApiKey::get<UserApiKey::id>() const { return m_id; }
    template<> inline const auto UserApiKey::get<UserApiKey::expires>() const { return m_expires; }
    template<> inline const auto UserApiKey::get<UserApiKey::created>() const { return m_created; }
    template<> inline const auto UserApiKey::get<UserApiKey::label>() const { return m_label; }
    template<> inline const auto UserApiKey::get<UserApiKey::plaintext_api_key>() const { return m_plaintext_api_key; }
    template<> inline const auto UserApiKey::get<UserApiKey::success>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_success)); }
    template<> inline const auto UserApiKey::get<UserApiKey::error_message>() const { return m_error_message; }
    template<> inline const auto UserApiKey::get<UserApiKey::action>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkActions>( m_action)); }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserApiKey& m) {
        o << "\"_meta\":{" << m.get<UserApiKey::_meta>() << "}";
        o << ",\"id\":" << m.get<UserApiKey::id>();
        {
            std::time_t tt = m.get<UserApiKey::expires>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expires\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<UserApiKey::created>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"created\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"label\":\"" << m.get<UserApiKey::label>() << "\"";
        o << ",\"plaintext_api_key\":\"" << m.get<UserApiKey::plaintext_api_key>() << "\"";
        o << ",\"success\":" << (int64_t)m.get<UserApiKey::success>();
        o << ",\"error_message\":\"" << m.get<UserApiKey::error_message>() << "\"";
        o << ",\"action\":" << (int64_t)m.get<UserApiKey::action>();
        return o;
    }

}
}
}