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

    #ifndef _sdiv_rate__GUARD__
    #define _sdiv_rate__GUARD__
    DECL_STRONG_TYPE(sdiv_rate, float);
    #endif//_sdiv_rate__GUARD__

    #ifndef _ln_sdiv_rate__GUARD__
    #define _ln_sdiv_rate__GUARD__
    DECL_STRONG_TYPE(ln_sdiv_rate, float);
    #endif//_ln_sdiv_rate__GUARD__

    #ifndef _sh_sdiv_rate__GUARD__
    #define _sh_sdiv_rate__GUARD__
    DECL_STRONG_TYPE(sh_sdiv_rate, float);
    #endif//_sh_sdiv_rate__GUARD__

    #ifndef _text__GUARD__
    #define _text__GUARD__
    DECL_STRONG_TYPE(text, string);
    #endif//_text__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class UserSDivOverride_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ekey m_ekey{};
        client_firm m_client_firm{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserSDivOverride_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserSDivOverride_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        UserSDivOverride_PKey() {}

        virtual ~UserSDivOverride_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class UserSDivOverride {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::UserSDivOverride_PKey;
        using sdiv_rate = spiderrock::protobuf::api::sdiv_rate;
        using ln_sdiv_rate = spiderrock::protobuf::api::ln_sdiv_rate;
        using sh_sdiv_rate = spiderrock::protobuf::api::sh_sdiv_rate;
        using text = spiderrock::protobuf::api::text;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sdiv_rate m_sdiv_rate{};
        ln_sdiv_rate m_ln_sdiv_rate{};
        sh_sdiv_rate m_sh_sdiv_rate{};
        text m_text{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sdiv_rate get_sdiv_rate() const {
            return m_sdiv_rate;
        }		
        ln_sdiv_rate get_ln_sdiv_rate() const {
            return m_ln_sdiv_rate;
        }		
        sh_sdiv_rate get_sh_sdiv_rate() const {
            return m_sh_sdiv_rate;
        }		
        text get_text() const {
            return m_text;
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
        void set_sdiv_rate(const sdiv_rate& value)  {
            m_sdiv_rate = value;
        }
        void set_ln_sdiv_rate(const ln_sdiv_rate& value)  {
            m_ln_sdiv_rate = value;
        }
        void set_sh_sdiv_rate(const sh_sdiv_rate& value)  {
            m_sh_sdiv_rate = value;
        }
        void set_text(const text& value)  {
            m_text = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserSDivOverride::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sdiv_rate & value) {
            set_sdiv_rate(value);
        }
        void set(const ln_sdiv_rate & value) {
            set_ln_sdiv_rate(value);
        }
        void set(const sh_sdiv_rate & value) {
            set_sh_sdiv_rate(value);
        }
        void set(const text & value) {
            set_text(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const UserSDivOverride & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sdiv_rate);
            set(value.m_ln_sdiv_rate);
            set(value.m_sh_sdiv_rate);
            set(value.m_text);
            set(value.m_timestamp);
        }

        UserSDivOverride() {
            m__meta.set_message_type("UserSDivOverride");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3640, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3640, length);
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
             *this = UserSDivOverride{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSdivRate() const {
            return !(m_sdiv_rate == 0.0);
        }
        bool IncludeLnSdivRate() const {
            return !(m_ln_sdiv_rate == 0.0);
        }
        bool IncludeShSdivRate() const {
            return !(m_sh_sdiv_rate == 0.0);
        }
        bool IncludeText() const {
            return !(m_text.empty());
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
            if ( IncludeSdivRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_sdiv_rate);
            }
            if ( IncludeLnSdivRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_ln_sdiv_rate);
            }
            if ( IncludeShSdivRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_sh_sdiv_rate);
            }
            if ( IncludeText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_text);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(112, m_timestamp);
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
            if ( IncludeSdivRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_sdiv_rate);
            }
            if ( IncludeLnSdivRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_ln_sdiv_rate);
            }
            if ( IncludeShSdivRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_sh_sdiv_rate);
            }
            if ( IncludeText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_text));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 112, m_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ln_sdiv_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_sdiv_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
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

    template<> inline const auto UserSDivOverride::get<UserSDivOverride::_meta>() const { return UserSDivOverride::_meta{ m__meta}; }
    template<> inline const auto UserSDivOverride::get<UserSDivOverride::pkey>() const { return UserSDivOverride::pkey{ m_pkey}; }
    template<> inline const auto UserSDivOverride::get<UserSDivOverride::sdiv_rate>() const { return m_sdiv_rate; }
    template<> inline const auto UserSDivOverride::get<UserSDivOverride::ln_sdiv_rate>() const { return m_ln_sdiv_rate; }
    template<> inline const auto UserSDivOverride::get<UserSDivOverride::sh_sdiv_rate>() const { return m_sh_sdiv_rate; }
    template<> inline const auto UserSDivOverride::get<UserSDivOverride::text>() const { return m_text; }
    template<> inline const auto UserSDivOverride::get<UserSDivOverride::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserSDivOverride_PKey::get<UserSDivOverride_PKey::ekey>() const { return UserSDivOverride_PKey::ekey{m_ekey}; }
    template<> inline const auto UserSDivOverride_PKey::get<UserSDivOverride_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserSDivOverride_PKey& m) {
        o << "\"ekey\":{" << m.get<UserSDivOverride_PKey::ekey>() << "}";
        o << ",\"client_firm\":\"" << m.get<UserSDivOverride_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserSDivOverride& m) {
        o << "\"_meta\":{" << m.get<UserSDivOverride::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<UserSDivOverride::pkey>() << "}";
        o << ",\"sdiv_rate\":" << m.get<UserSDivOverride::sdiv_rate>();
        o << ",\"ln_sdiv_rate\":" << m.get<UserSDivOverride::ln_sdiv_rate>();
        o << ",\"sh_sdiv_rate\":" << m.get<UserSDivOverride::sh_sdiv_rate>();
        o << ",\"text\":\"" << m.get<UserSDivOverride::text>() << "\"";
        {
            std::time_t tt = m.get<UserSDivOverride::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}