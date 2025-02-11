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

    #ifndef _print_type_char__GUARD__
    #define _print_type_char__GUARD__
    DECL_STRONG_TYPE(print_type_char, string);
    #endif//_print_type_char__GUARD__

    #ifndef _print_code__GUARD__
    #define _print_code__GUARD__
    DECL_STRONG_TYPE(print_code, string);
    #endif//_print_code__GUARD__

    #ifndef _print_code_string__GUARD__
    #define _print_code_string__GUARD__
    DECL_STRONG_TYPE(print_code_string, string);
    #endif//_print_code_string__GUARD__

    #ifndef _print_code_description__GUARD__
    #define _print_code_description__GUARD__
    DECL_STRONG_TYPE(print_code_description, string);
    #endif//_print_code_description__GUARD__

    #ifndef _opra_print_type__GUARD__
    #define _opra_print_type__GUARD__
    DECL_STRONG_TYPE(opra_print_type, int32);
    #endif//_opra_print_type__GUARD__

    
    class OpraPrintType_PKey {
        public:
        //using statements for all types used in this class
        using opra_print_type = spiderrock::protobuf::api::opra_print_type;

        private:
        opra_print_type m_opra_print_type{};

        public:
        opra_print_type get_opra_print_type() const {
            return m_opra_print_type;
        }
        void set_opra_print_type(const opra_print_type& value)  {
            m_opra_print_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OpraPrintType_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OpraPrintType_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const opra_print_type & value) { set_opra_print_type(value); }


        OpraPrintType_PKey() {}

        virtual ~OpraPrintType_PKey() {
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
        bool IncludeOpraPrintType() const {
            return !(m_opra_print_type == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOpraPrintType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(10,m_opra_print_type);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOpraPrintType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,10,m_opra_print_type);
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
                    case 10: {m_opra_print_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class OpraPrintType {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OpraPrintType_PKey;
        using print_type_char = spiderrock::protobuf::api::print_type_char;
        using print_code = spiderrock::protobuf::api::print_code;
        using print_code_string = spiderrock::protobuf::api::print_code_string;
        using print_code_description = spiderrock::protobuf::api::print_code_description;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        print_type_char m_print_type_char{};
        print_code m_print_code{};
        print_code_string m_print_code_string{};
        print_code_description m_print_code_description{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        print_type_char get_print_type_char() const {
            return m_print_type_char;
        }		
        print_code get_print_code() const {
            return m_print_code;
        }		
        print_code_string get_print_code_string() const {
            return m_print_code_string;
        }		
        print_code_description get_print_code_description() const {
            return m_print_code_description;
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
        void set_print_type_char(const print_type_char& value)  {
            m_print_type_char = value;
        }
        void set_print_code(const print_code& value)  {
            m_print_code = value;
        }
        void set_print_code_string(const print_code_string& value)  {
            m_print_code_string = value;
        }
        void set_print_code_description(const print_code_description& value)  {
            m_print_code_description = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OpraPrintType::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const print_type_char & value) {
            set_print_type_char(value);
        }
        void set(const print_code & value) {
            set_print_code(value);
        }
        void set(const print_code_string & value) {
            set_print_code_string(value);
        }
        void set(const print_code_description & value) {
            set_print_code_description(value);
        }

        void set(const OpraPrintType & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_print_type_char);
            set(value.m_print_code);
            set(value.m_print_code_string);
            set(value.m_print_code_description);
        }

        OpraPrintType() {
            m__meta.set_message_type("OpraPrintType");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2750, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2750, length);
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
             *this = OpraPrintType{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludePrintTypeChar() const {
            return !(m_print_type_char.empty());
        }
        bool IncludePrintCode() const {
            return !(m_print_code.empty());
        }
        bool IncludePrintCodeString() const {
            return !(m_print_code_string.empty());
        }
        bool IncludePrintCodeDescription() const {
            return !(m_print_code_description.empty());
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
            if ( IncludePrintTypeChar()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_print_type_char);
            }
            if ( IncludePrintCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_print_code);
            }
            if ( IncludePrintCodeString()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_print_code_string);
            }
            if ( IncludePrintCodeDescription()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_print_code_description);
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
            if ( IncludePrintTypeChar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_print_type_char));
            }
            if ( IncludePrintCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_print_code));
            }
            if ( IncludePrintCodeString()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_print_code_string));
            }
            if ( IncludePrintCodeDescription()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_print_code_description));
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
                            m_print_type_char = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_print_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_print_code_string = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_print_code_description = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OpraPrintType::get<OpraPrintType::_meta>() const { return OpraPrintType::_meta{ m__meta}; }
    template<> inline const auto OpraPrintType::get<OpraPrintType::pkey>() const { return OpraPrintType::pkey{ m_pkey}; }
    template<> inline const auto OpraPrintType::get<OpraPrintType::print_type_char>() const { return m_print_type_char; }
    template<> inline const auto OpraPrintType::get<OpraPrintType::print_code>() const { return m_print_code; }
    template<> inline const auto OpraPrintType::get<OpraPrintType::print_code_string>() const { return m_print_code_string; }
    template<> inline const auto OpraPrintType::get<OpraPrintType::print_code_description>() const { return m_print_code_description; }
    template<> inline const auto OpraPrintType_PKey::get<OpraPrintType_PKey::opra_print_type>() const { return m_opra_print_type; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OpraPrintType_PKey& m) {
        o << "\"opra_print_type\":" << m.get<OpraPrintType_PKey::opra_print_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OpraPrintType& m) {
        o << "\"_meta\":{" << m.get<OpraPrintType::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OpraPrintType::pkey>() << "}";
        o << ",\"print_type_char\":\"" << m.get<OpraPrintType::print_type_char>() << "\"";
        o << ",\"print_code\":\"" << m.get<OpraPrintType::print_code>() << "\"";
        o << ",\"print_code_string\":\"" << m.get<OpraPrintType::print_code_string>() << "\"";
        o << ",\"print_code_description\":\"" << m.get<OpraPrintType::print_code_description>() << "\"";
        return o;
    }

}
}
}