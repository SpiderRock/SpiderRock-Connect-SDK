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

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _f_num__GUARD__
    #define _f_num__GUARD__
    DECL_STRONG_TYPE(f_num, uint32);
    #endif//_f_num__GUARD__

    #ifndef _key__GUARD__
    #define _key__GUARD__
    DECL_STRONG_TYPE(key, string);
    #endif//_key__GUARD__

    #ifndef _min__string__GUARD__
    #define _min__string__GUARD__
    DECL_STRONG_TYPE(min__string, string);
    #endif//_min__string__GUARD__

    #ifndef _max__string__GUARD__
    #define _max__string__GUARD__
    DECL_STRONG_TYPE(max__string, string);
    #endif//_max__string__GUARD__

    #ifndef _cnt__GUARD__
    #define _cnt__GUARD__
    DECL_STRONG_TYPE(cnt, int32);
    #endif//_cnt__GUARD__

    

    class BucketRange {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using name = spiderrock::protobuf::api::name;
        using f_num = spiderrock::protobuf::api::f_num;
        using key = spiderrock::protobuf::api::key;
        using min = spiderrock::protobuf::api::min__string;
        using max = spiderrock::protobuf::api::max__string;
        using cnt = spiderrock::protobuf::api::cnt;

        private:
        _meta m__meta{};
        name m_name{};
        f_num m_f_num{};
        key m_key{};
        min m_min{};
        max m_max{};
        cnt m_cnt{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        name get_name() const {
            return m_name;
        }		
        f_num get_f_num() const {
            return m_f_num;
        }		
        key get_key() const {
            return m_key;
        }		
        min get_min() const {
            return m_min;
        }		
        max get_max() const {
            return m_max;
        }		
        cnt get_cnt() const {
            return m_cnt;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_f_num(const f_num& value)  {
            m_f_num = value;
        }
        void set_key(const key& value)  {
            m_key = value;
        }
        void set_min(const min& value)  {
            m_min = value;
        }
        void set_max(const max& value)  {
            m_max = value;
        }
        void set_cnt(const cnt& value)  {
            m_cnt = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to BucketRange::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const f_num & value) {
            set_f_num(value);
        }
        void set(const key & value) {
            set_key(value);
        }
        void set(const min & value) {
            set_min(value);
        }
        void set(const max & value) {
            set_max(value);
        }
        void set(const cnt & value) {
            set_cnt(value);
        }

        void set(const BucketRange & value) {
            set(value.m__meta);
            set(value.m_name);
            set(value.m_f_num);
            set(value.m_key);
            set(value.m_min);
            set(value.m_max);
            set(value.m_cnt);
        }

        BucketRange() {
            m__meta.set_message_type("BucketRange");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3460, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3460, length);
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
             *this = BucketRange{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeFNum() const {
            return !(m_f_num == 0);
        }
        bool IncludeKey() const {
            return !(m_key.empty());
        }
        bool IncludeMin() const {
            return !(m_min.empty());
        }
        bool IncludeMax() const {
            return !(m_max.empty());
        }
        bool IncludeCnt() const {
            return !(m_cnt == 0);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_name);
            }
            if ( IncludeFNum()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(103,m_f_num);
            }
            if ( IncludeKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_key);
            }
            if ( IncludeMin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_min);
            }
            if ( IncludeMax()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_max);
            }
            if ( IncludeCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_cnt);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_name));
            }
            if ( IncludeFNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,103,m_f_num);
            }
            if ( IncludeKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_key));
            }
            if ( IncludeMin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_min));
            }
            if ( IncludeMax()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_max));
            }
            if ( IncludeCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_cnt);
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
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_f_num = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_min = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_max = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto BucketRange::get<BucketRange::_meta>() const { return BucketRange::_meta{ m__meta}; }
    template<> inline const auto BucketRange::get<BucketRange::name>() const { return m_name; }
    template<> inline const auto BucketRange::get<BucketRange::f_num>() const { return m_f_num; }
    template<> inline const auto BucketRange::get<BucketRange::key>() const { return m_key; }
    template<> inline const auto BucketRange::get<BucketRange::min>() const { return m_min; }
    template<> inline const auto BucketRange::get<BucketRange::max>() const { return m_max; }
    template<> inline const auto BucketRange::get<BucketRange::cnt>() const { return m_cnt; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const BucketRange& m) {
        o << "\"_meta\":{" << m.get<BucketRange::_meta>() << "}";
        o << ",\"name\":\"" << m.get<BucketRange::name>() << "\"";
        o << ",\"f_num\":" << m.get<BucketRange::f_num>();
        o << ",\"key\":\"" << m.get<BucketRange::key>() << "\"";
        o << ",\"min\":\"" << m.get<BucketRange::min>() << "\"";
        o << ",\"max\":\"" << m.get<BucketRange::max>() << "\"";
        o << ",\"cnt\":" << m.get<BucketRange::cnt>();
        return o;
    }

}
}
}