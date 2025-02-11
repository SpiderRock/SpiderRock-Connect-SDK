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

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _text__GUARD__
    #define _text__GUARD__
    DECL_STRONG_TYPE(text, string);
    #endif//_text__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _days__GUARD__
    #define _days__GUARD__
    DECL_STRONG_TYPE(days, int32);
    #endif//_days__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _ln_rate__GUARD__
    #define _ln_rate__GUARD__
    DECL_STRONG_TYPE(ln_rate, float);
    #endif//_ln_rate__GUARD__

    #ifndef _sh_rate__GUARD__
    #define _sh_rate__GUARD__
    DECL_STRONG_TYPE(sh_rate, float);
    #endif//_sh_rate__GUARD__

    
    class UserRateOverride_PKey {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        client_firm m_client_firm{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }


        UserRateOverride_PKey() {}

        virtual ~UserRateOverride_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_client_firm));
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
                    case 10: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserRateOverride_Curve {
        public:
        //using statements for all types used in this class
        using days = spiderrock::protobuf::api::days;
        using rate = spiderrock::protobuf::api::rate__float;
        using ln_rate = spiderrock::protobuf::api::ln_rate;
        using sh_rate = spiderrock::protobuf::api::sh_rate;

        private:
        days m_days{};
        rate m_rate{};
        ln_rate m_ln_rate{};
        sh_rate m_sh_rate{};

        public:
        days get_days() const {
            return m_days;
        }
        rate get_rate() const {
            return m_rate;
        }
        ln_rate get_ln_rate() const {
            return m_ln_rate;
        }
        sh_rate get_sh_rate() const {
            return m_sh_rate;
        }
        void set_days(const days& value)  {
            m_days = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_ln_rate(const ln_rate& value)  {
            m_ln_rate = value;
        }
        void set_sh_rate(const sh_rate& value)  {
            m_sh_rate = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride_Curve::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride_Curve::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const days & value) { set_days(value); }
        void set(const rate & value) { set_rate(value); }
        void set(const ln_rate & value) { set_ln_rate(value); }
        void set(const sh_rate & value) { set_sh_rate(value); }


        UserRateOverride_Curve() {}

        virtual ~UserRateOverride_Curve() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_days);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_rate);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ln_rate);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_sh_rate);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_days);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_rate);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ln_rate);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_sh_rate);
            return dest;
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
                    case 109: {m_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 112: {m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 115: {m_ln_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 118: {m_sh_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class UserRateOverride {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::UserRateOverride_PKey;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using text = spiderrock::protobuf::api::text;
        using curve = spiderrock::protobuf::api::UserRateOverride_Curve;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        timestamp m_timestamp{};
        text m_text{};
        std::vector<curve> m_curve{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        text get_text() const {
            return m_text;
        }
        const std::vector<curve>& get_curve_list() const {
            return m_curve;
        }
        const curve& get_curve(const int i) const {
            return m_curve.at(i);
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
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_text(const text& value)  {
            m_text = value;
        }
        void set_curve_list(const std::vector<curve>& list)  {
            m_curve = list;
        }
        void add_curve(const curve& item) {
            m_curve.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserRateOverride::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const text & value) {
            set_text(value);
        }
        void set(const curve & value) {
            add_curve(value);
        }

        void set(const UserRateOverride & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_timestamp);
            set(value.m_text);set_curve_list(value.m_curve);
        }

        UserRateOverride() {
            m__meta.set_message_type("UserRateOverride");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3635, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3635, length);
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
             *this = UserRateOverride{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeText() const {
            return !(m_text.empty());
        }
        bool IncludeCurve() const {
            return (!m_curve.empty());
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
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(100, m_timestamp);
            }
            if ( IncludeText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_text);
            }
            if ( IncludeCurve()) {
                for (auto& item : m_curve) {
					totalSize += SRProtobufCPP::TagCodec::Size(106, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 100, m_timestamp);
            }
            if ( IncludeText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_text));
            }
            if ( IncludeCurve()) {
                for (auto& item : m_curve) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 106, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            curve item_curve;
                            item_curve.Decode(pos, pos+length);  
                            m_curve.emplace_back(item_curve);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto UserRateOverride::get<UserRateOverride::_meta>() const { return UserRateOverride::_meta{ m__meta}; }
    template<> inline const auto UserRateOverride::get<UserRateOverride::pkey>() const { return UserRateOverride::pkey{ m_pkey}; }
    template<> inline const auto UserRateOverride::get<UserRateOverride::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserRateOverride::get<UserRateOverride::text>() const { return m_text; }
    template<> inline const auto UserRateOverride::get<UserRateOverride::curve>(int i) const { return UserRateOverride::curve{ get_curve(i)}; }
    template<> inline int UserRateOverride::count<UserRateOverride::curve>() const { return static_cast<int>( m_curve.size()); }
    template<> inline const auto UserRateOverride_PKey::get<UserRateOverride_PKey::client_firm>() const { return m_client_firm; }
    
    template<> inline const auto UserRateOverride_Curve::get<UserRateOverride_Curve::days>() const { return m_days; }
    template<> inline const auto UserRateOverride_Curve::get<UserRateOverride_Curve::rate>() const { return m_rate; }
    template<> inline const auto UserRateOverride_Curve::get<UserRateOverride_Curve::ln_rate>() const { return m_ln_rate; }
    template<> inline const auto UserRateOverride_Curve::get<UserRateOverride_Curve::sh_rate>() const { return m_sh_rate; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserRateOverride_PKey& m) {
        o << "\"client_firm\":\"" << m.get<UserRateOverride_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserRateOverride_Curve& m) {
        o << "\"days\":" << m.get<UserRateOverride_Curve::days>();
        o << ",\"rate\":" << m.get<UserRateOverride_Curve::rate>();
        o << ",\"ln_rate\":" << m.get<UserRateOverride_Curve::ln_rate>();
        o << ",\"sh_rate\":" << m.get<UserRateOverride_Curve::sh_rate>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserRateOverride& m) {
        o << "\"_meta\":{" << m.get<UserRateOverride::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<UserRateOverride::pkey>() << "}";
        {
            std::time_t tt = m.get<UserRateOverride::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"text\":\"" << m.get<UserRateOverride::text>() << "\"";
        o << ",\"curve\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserRateOverride::curve>(); ++i) {
                o << delim << m.get<UserRateOverride::curve>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}