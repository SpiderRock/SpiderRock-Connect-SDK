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

    #ifndef _key1__GUARD__
    #define _key1__GUARD__
    DECL_STRONG_TYPE(key1, string);
    #endif//_key1__GUARD__

    #ifndef _key2__GUARD__
    #define _key2__GUARD__
    DECL_STRONG_TYPE(key2, string);
    #endif//_key2__GUARD__

    #ifndef _key3__GUARD__
    #define _key3__GUARD__
    DECL_STRONG_TYPE(key3, string);
    #endif//_key3__GUARD__

    #ifndef _key4__GUARD__
    #define _key4__GUARD__
    DECL_STRONG_TYPE(key4, string);
    #endif//_key4__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _f_num__GUARD__
    #define _f_num__GUARD__
    DECL_STRONG_TYPE(f_num, uint32);
    #endif//_f_num__GUARD__

    #ifndef _rec_count__GUARD__
    #define _rec_count__GUARD__
    DECL_STRONG_TYPE(rec_count, int32);
    #endif//_rec_count__GUARD__

    #ifndef _error__string__GUARD__
    #define _error__string__GUARD__
    DECL_STRONG_TYPE(error__string, string);
    #endif//_error__string__GUARD__

    #ifndef _value__string__GUARD__
    #define _value__string__GUARD__
    DECL_STRONG_TYPE(value__string, string);
    #endif//_value__string__GUARD__

    #ifndef _cnt__GUARD__
    #define _cnt__GUARD__
    DECL_STRONG_TYPE(cnt, int32);
    #endif//_cnt__GUARD__

    
    class AggregateString_Value {
        public:
        //using statements for all types used in this class
        using value = spiderrock::protobuf::api::value__string;
        using cnt = spiderrock::protobuf::api::cnt;

        private:
        value m_value{};
        cnt m_cnt{};

        public:
        value get_value() const {
            return m_value;
        }
        cnt get_cnt() const {
            return m_cnt;
        }
        void set_value(const value& value)  {
            m_value = value;
        }
        void set_cnt(const cnt& value)  {
            m_cnt = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateString_Value::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateString_Value::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const value & value) { set_value(value); }
        void set(const cnt & value) { set_cnt(value); }


        AggregateString_Value() {}

        virtual ~AggregateString_Value() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_value);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_cnt);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_value));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_cnt);
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
                    case 127: {m_value = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 130: {m_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class AggregateString {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using key1 = spiderrock::protobuf::api::key1;
        using key2 = spiderrock::protobuf::api::key2;
        using key3 = spiderrock::protobuf::api::key3;
        using key4 = spiderrock::protobuf::api::key4;
        using name = spiderrock::protobuf::api::name;
        using f_num = spiderrock::protobuf::api::f_num;
        using rec_count = spiderrock::protobuf::api::rec_count;
        using error = spiderrock::protobuf::api::error__string;
        using value = spiderrock::protobuf::api::AggregateString_Value;

        private:
        _meta m__meta{};
        key1 m_key1{};
        key2 m_key2{};
        key3 m_key3{};
        key4 m_key4{};
        name m_name{};
        f_num m_f_num{};
        rec_count m_rec_count{};
        error m_error{};
        std::vector<value> m_value{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        key1 get_key1() const {
            return m_key1;
        }		
        key2 get_key2() const {
            return m_key2;
        }		
        key3 get_key3() const {
            return m_key3;
        }		
        key4 get_key4() const {
            return m_key4;
        }		
        name get_name() const {
            return m_name;
        }		
        f_num get_f_num() const {
            return m_f_num;
        }		
        rec_count get_rec_count() const {
            return m_rec_count;
        }		
        error get_error() const {
            return m_error;
        }
        const std::vector<value>& get_value_list() const {
            return m_value;
        }
        const value& get_value(const int i) const {
            return m_value.at(i);
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_key1(const key1& value)  {
            m_key1 = value;
        }
        void set_key2(const key2& value)  {
            m_key2 = value;
        }
        void set_key3(const key3& value)  {
            m_key3 = value;
        }
        void set_key4(const key4& value)  {
            m_key4 = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_f_num(const f_num& value)  {
            m_f_num = value;
        }
        void set_rec_count(const rec_count& value)  {
            m_rec_count = value;
        }
        void set_error(const error& value)  {
            m_error = value;
        }
        void set_value_list(const std::vector<value>& list)  {
            m_value = list;
        }
        void add_value(const value& item) {
            m_value.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateString::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateString::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateString::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const key1 & value) {
            set_key1(value);
        }
        void set(const key2 & value) {
            set_key2(value);
        }
        void set(const key3 & value) {
            set_key3(value);
        }
        void set(const key4 & value) {
            set_key4(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const f_num & value) {
            set_f_num(value);
        }
        void set(const rec_count & value) {
            set_rec_count(value);
        }
        void set(const error & value) {
            set_error(value);
        }
        void set(const value & value) {
            add_value(value);
        }

        void set(const AggregateString & value) {
            set(value.m__meta);
            set(value.m_key1);
            set(value.m_key2);
            set(value.m_key3);
            set(value.m_key4);
            set(value.m_name);
            set(value.m_f_num);
            set(value.m_rec_count);
            set(value.m_error);set_value_list(value.m_value);
        }

        AggregateString() {
            m__meta.set_message_type("AggregateString");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3455, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3455, length);
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
             *this = AggregateString{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeKey1() const {
            return !(m_key1.empty());
        }
        bool IncludeKey2() const {
            return !(m_key2.empty());
        }
        bool IncludeKey3() const {
            return !(m_key3.empty());
        }
        bool IncludeKey4() const {
            return !(m_key4.empty());
        }
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeFNum() const {
            return !(m_f_num == 0);
        }
        bool IncludeRecCount() const {
            return !(m_rec_count == 0);
        }
        bool IncludeError() const {
            return !(m_error.empty());
        }
        bool IncludeValue() const {
            return (!m_value.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeKey1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_key1);
            }
            if ( IncludeKey2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_key2);
            }
            if ( IncludeKey3()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_key3);
            }
            if ( IncludeKey4()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_key4);
            }
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_name);
            }
            if ( IncludeFNum()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(115,m_f_num);
            }
            if ( IncludeRecCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_rec_count);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_error);
            }
            if ( IncludeValue()) {
                for (auto& item : m_value) {
					totalSize += SRProtobufCPP::TagCodec::Size(124, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeKey1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_key1));
            }
            if ( IncludeKey2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_key2));
            }
            if ( IncludeKey3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_key3));
            }
            if ( IncludeKey4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_key4));
            }
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_name));
            }
            if ( IncludeFNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,115,m_f_num);
            }
            if ( IncludeRecCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_rec_count);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_error));
            }
            if ( IncludeValue()) {
                for (auto& item : m_value) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 124, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_key1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_key2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_key3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_key4 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_f_num = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rec_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            value item_value;
                            item_value.Decode(pos, pos+length);  
                            m_value.emplace_back(item_value);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AggregateString::get<AggregateString::_meta>() const { return AggregateString::_meta{ m__meta}; }
    template<> inline const auto AggregateString::get<AggregateString::key1>() const { return m_key1; }
    template<> inline const auto AggregateString::get<AggregateString::key2>() const { return m_key2; }
    template<> inline const auto AggregateString::get<AggregateString::key3>() const { return m_key3; }
    template<> inline const auto AggregateString::get<AggregateString::key4>() const { return m_key4; }
    template<> inline const auto AggregateString::get<AggregateString::name>() const { return m_name; }
    template<> inline const auto AggregateString::get<AggregateString::f_num>() const { return m_f_num; }
    template<> inline const auto AggregateString::get<AggregateString::rec_count>() const { return m_rec_count; }
    template<> inline const auto AggregateString::get<AggregateString::error>() const { return m_error; }
    template<> inline const auto AggregateString::get<AggregateString::value>(int i) const { return AggregateString::value{ get_value(i)}; }
    template<> inline int AggregateString::count<AggregateString::value>() const { return static_cast<int>( m_value.size()); }
    template<> inline const auto AggregateString_Value::get<AggregateString_Value::value>() const { return m_value; }
    template<> inline const auto AggregateString_Value::get<AggregateString_Value::cnt>() const { return m_cnt; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AggregateString_Value& m) {
        o << "\"value\":\"" << m.get<AggregateString_Value::value>() << "\"";
        o << ",\"cnt\":" << m.get<AggregateString_Value::cnt>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AggregateString& m) {
        o << "\"_meta\":{" << m.get<AggregateString::_meta>() << "}";
        o << ",\"key1\":\"" << m.get<AggregateString::key1>() << "\"";
        o << ",\"key2\":\"" << m.get<AggregateString::key2>() << "\"";
        o << ",\"key3\":\"" << m.get<AggregateString::key3>() << "\"";
        o << ",\"key4\":\"" << m.get<AggregateString::key4>() << "\"";
        o << ",\"name\":\"" << m.get<AggregateString::name>() << "\"";
        o << ",\"f_num\":" << m.get<AggregateString::f_num>();
        o << ",\"rec_count\":" << m.get<AggregateString::rec_count>();
        o << ",\"error\":\"" << m.get<AggregateString::error>() << "\"";
        o << ",\"value\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AggregateString::value>(); ++i) {
                o << delim << m.get<AggregateString::value>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}