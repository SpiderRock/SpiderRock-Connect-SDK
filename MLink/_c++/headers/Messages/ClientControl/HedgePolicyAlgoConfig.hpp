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

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _exec_bkkr_tags__GUARD__
    #define _exec_bkkr_tags__GUARD__
    DECL_STRONG_TYPE(exec_bkkr_tags, string);
    #endif//_exec_bkkr_tags__GUARD__

    #ifndef _eod_eligible__GUARD__
    #define _eod_eligible__GUARD__
    DECL_STRONG_TYPE(eod_eligible, spiderrock::protobuf::api::YesNo);
    #endif//_eod_eligible__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _exec_brkr_algo__GUARD__
    #define _exec_brkr_algo__GUARD__
    DECL_STRONG_TYPE(exec_brkr_algo, string);
    #endif//_exec_brkr_algo__GUARD__

    
    class HedgePolicyAlgoConfig_PKey {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;
        using exec_brkr_algo = spiderrock::protobuf::api::exec_brkr_algo;

        private:
        client_firm m_client_firm{};
        exec_brkr_algo m_exec_brkr_algo{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        exec_brkr_algo get_exec_brkr_algo() const {
            return m_exec_brkr_algo;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_exec_brkr_algo(const exec_brkr_algo& value)  {
            m_exec_brkr_algo = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to HedgePolicyAlgoConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to HedgePolicyAlgoConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const exec_brkr_algo & value) { set_exec_brkr_algo(value); }


        HedgePolicyAlgoConfig_PKey() {}

        virtual ~HedgePolicyAlgoConfig_PKey() {
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
        bool IncludeExecBrkrAlgo() const {
            return !(m_exec_brkr_algo.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_client_firm);
            }
            if ( IncludeExecBrkrAlgo()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_exec_brkr_algo);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_client_firm));
            }
            if ( IncludeExecBrkrAlgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_exec_brkr_algo));
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
                    case 11: {m_exec_brkr_algo = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class HedgePolicyAlgoConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::HedgePolicyAlgoConfig_PKey;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_bkkr_tags = spiderrock::protobuf::api::exec_bkkr_tags;
        using eod_eligible = spiderrock::protobuf::api::eod_eligible;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        exec_brkr_code m_exec_brkr_code{};
        exec_bkkr_tags m_exec_bkkr_tags{};
        eod_eligible m_eod_eligible{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        exec_bkkr_tags get_exec_bkkr_tags() const {
            return m_exec_bkkr_tags;
        }		
        eod_eligible get_eod_eligible() const {
            return m_eod_eligible;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_exec_bkkr_tags(const exec_bkkr_tags& value)  {
            m_exec_bkkr_tags = value;
        }
        void set_eod_eligible(const eod_eligible& value)  {
            m_eod_eligible = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to HedgePolicyAlgoConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const exec_bkkr_tags & value) {
            set_exec_bkkr_tags(value);
        }
        void set(const eod_eligible & value) {
            set_eod_eligible(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const HedgePolicyAlgoConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_exec_brkr_code);
            set(value.m_exec_bkkr_tags);
            set(value.m_eod_eligible);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        HedgePolicyAlgoConfig() {
            m__meta.set_message_type("HedgePolicyAlgoConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1817, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1817, length);
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
             *this = HedgePolicyAlgoConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExecBkkrTags() const {
            return !(m_exec_bkkr_tags.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_exec_brkr_code);
            }
            if ( IncludeExecBkkrTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(101,m_exec_bkkr_tags);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_eod_eligible)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(105, m_timestamp);
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
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBkkrTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,101,static_cast<string>(m_exec_bkkr_tags));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_eod_eligible)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 105, m_timestamp);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_bkkr_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_eod_eligible = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 104: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 105: {
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

    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::_meta>() const { return HedgePolicyAlgoConfig::_meta{ m__meta}; }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::pkey>() const { return HedgePolicyAlgoConfig::pkey{ m_pkey}; }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::exec_bkkr_tags>() const { return m_exec_bkkr_tags; }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::eod_eligible>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_eod_eligible)); }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto HedgePolicyAlgoConfig::get<HedgePolicyAlgoConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto HedgePolicyAlgoConfig_PKey::get<HedgePolicyAlgoConfig_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto HedgePolicyAlgoConfig_PKey::get<HedgePolicyAlgoConfig_PKey::exec_brkr_algo>() const { return m_exec_brkr_algo; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const HedgePolicyAlgoConfig_PKey& m) {
        o << "\"client_firm\":\"" << m.get<HedgePolicyAlgoConfig_PKey::client_firm>() << "\"";
        o << ",\"exec_brkr_algo\":\"" << m.get<HedgePolicyAlgoConfig_PKey::exec_brkr_algo>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const HedgePolicyAlgoConfig& m) {
        o << "\"_meta\":{" << m.get<HedgePolicyAlgoConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<HedgePolicyAlgoConfig::pkey>() << "}";
        o << ",\"exec_brkr_code\":\"" << m.get<HedgePolicyAlgoConfig::exec_brkr_code>() << "\"";
        o << ",\"exec_bkkr_tags\":\"" << m.get<HedgePolicyAlgoConfig::exec_bkkr_tags>() << "\"";
        o << ",\"eod_eligible\":" << (int64_t)m.get<HedgePolicyAlgoConfig::eod_eligible>();
        o << ",\"modified_by\":\"" << m.get<HedgePolicyAlgoConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<HedgePolicyAlgoConfig::modified_in>();
        {
            std::time_t tt = m.get<HedgePolicyAlgoConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}