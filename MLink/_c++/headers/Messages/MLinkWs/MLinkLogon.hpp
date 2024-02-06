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

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _password__GUARD__
    #define _password__GUARD__
    DECL_STRONG_TYPE(password, string);
    #endif//_password__GUARD__

    #ifndef _pin__GUARD__
    #define _pin__GUARD__
    DECL_STRONG_TYPE(pin, string);
    #endif//_pin__GUARD__

    #ifndef _api_key__GUARD__
    #define _api_key__GUARD__
    DECL_STRONG_TYPE(api_key, string);
    #endif//_api_key__GUARD__

    #ifndef _jwt_token__GUARD__
    #define _jwt_token__GUARD__
    DECL_STRONG_TYPE(jwt_token, string);
    #endif//_jwt_token__GUARD__

    

    class MLinkLogon {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using user_name = spiderrock::protobuf::api::user_name;
        using password = spiderrock::protobuf::api::password;
        using pin = spiderrock::protobuf::api::pin;
        using api_key = spiderrock::protobuf::api::api_key;
        using jwt_token = spiderrock::protobuf::api::jwt_token;

        private:
        _meta m__meta{};
        user_name m_user_name{};
        password m_password{};
        pin m_pin{};
        api_key m_api_key{};
        jwt_token m_jwt_token{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        password get_password() const {
            return m_password;
        }		
        pin get_pin() const {
            return m_pin;
        }		
        api_key get_api_key() const {
            return m_api_key;
        }		
        jwt_token get_jwt_token() const {
            return m_jwt_token;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_password(const password& value)  {
            m_password = value;
        }
        void set_pin(const pin& value)  {
            m_pin = value;
        }
        void set_api_key(const api_key& value)  {
            m_api_key = value;
        }
        void set_jwt_token(const jwt_token& value)  {
            m_jwt_token = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkLogon::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const password & value) {
            set_password(value);
        }
        void set(const pin & value) {
            set_pin(value);
        }
        void set(const api_key & value) {
            set_api_key(value);
        }
        void set(const jwt_token & value) {
            set_jwt_token(value);
        }

        void set(const MLinkLogon & value) {
            set(value.m__meta);
            set(value.m_user_name);
            set(value.m_password);
            set(value.m_pin);
            set(value.m_api_key);
            set(value.m_jwt_token);
        }

        MLinkLogon() {
            m__meta.set_message_type("MLinkLogon");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3370, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3370, length);
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
             *this = MLinkLogon{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludePassword() const {
            return !(m_password.empty());
        }
        bool IncludePin() const {
            return !(m_pin.empty());
        }
        bool IncludeApiKey() const {
            return !(m_api_key.empty());
        }
        bool IncludeJwtToken() const {
            return !(m_jwt_token.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_user_name);
            }
            if ( IncludePassword()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_password);
            }
            if ( IncludePin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_pin);
            }
            if ( IncludeApiKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_api_key);
            }
            if ( IncludeJwtToken()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_jwt_token);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_user_name));
            }
            if ( IncludePassword()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_password));
            }
            if ( IncludePin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_pin));
            }
            if ( IncludeApiKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_api_key));
            }
            if ( IncludeJwtToken()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_jwt_token));
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
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_password = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_api_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_jwt_token = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MLinkLogon::get<MLinkLogon::_meta>() const { return MLinkLogon::_meta{ m__meta}; }
    template<> inline const auto MLinkLogon::get<MLinkLogon::user_name>() const { return m_user_name; }
    template<> inline const auto MLinkLogon::get<MLinkLogon::password>() const { return m_password; }
    template<> inline const auto MLinkLogon::get<MLinkLogon::pin>() const { return m_pin; }
    template<> inline const auto MLinkLogon::get<MLinkLogon::api_key>() const { return m_api_key; }
    template<> inline const auto MLinkLogon::get<MLinkLogon::jwt_token>() const { return m_jwt_token; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkLogon& m) {
        o << "\"_meta\":{" << m.get<MLinkLogon::_meta>() << "}";
        o << ",\"user_name\":\"" << m.get<MLinkLogon::user_name>() << "\"";
        o << ",\"password\":\"" << m.get<MLinkLogon::password>() << "\"";
        o << ",\"pin\":\"" << m.get<MLinkLogon::pin>() << "\"";
        o << ",\"api_key\":\"" << m.get<MLinkLogon::api_key>() << "\"";
        o << ",\"jwt_token\":\"" << m.get<MLinkLogon::jwt_token>() << "\"";
        return o;
    }

}
}
}