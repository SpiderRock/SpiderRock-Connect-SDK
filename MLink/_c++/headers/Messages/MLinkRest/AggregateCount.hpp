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

    #ifndef _rec_count__GUARD__
    #define _rec_count__GUARD__
    DECL_STRONG_TYPE(rec_count, int32);
    #endif//_rec_count__GUARD__

    

    class AggregateCount {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using key1 = spiderrock::protobuf::api::key1;
        using key2 = spiderrock::protobuf::api::key2;
        using key3 = spiderrock::protobuf::api::key3;
        using key4 = spiderrock::protobuf::api::key4;
        using rec_count = spiderrock::protobuf::api::rec_count;

        private:
        _meta m__meta{};
        key1 m_key1{};
        key2 m_key2{};
        key3 m_key3{};
        key4 m_key4{};
        rec_count m_rec_count{};

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
        rec_count get_rec_count() const {
            return m_rec_count;
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
        void set_rec_count(const rec_count& value)  {
            m_rec_count = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateCount::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const rec_count & value) {
            set_rec_count(value);
        }

        void set(const AggregateCount & value) {
            set(value.m__meta);
            set(value.m_key1);
            set(value.m_key2);
            set(value.m_key3);
            set(value.m_key4);
            set(value.m_rec_count);
        }

        AggregateCount() {
            m__meta.set_message_type("AggregateCount");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3456, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3456, length);
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
             *this = AggregateCount{};
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
        bool IncludeRecCount() const {
            return !(m_rec_count == 0);
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
            if ( IncludeRecCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_rec_count);
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
            if ( IncludeRecCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_rec_count);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rec_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AggregateCount::get<AggregateCount::_meta>() const { return AggregateCount::_meta{ m__meta}; }
    template<> inline const auto AggregateCount::get<AggregateCount::key1>() const { return m_key1; }
    template<> inline const auto AggregateCount::get<AggregateCount::key2>() const { return m_key2; }
    template<> inline const auto AggregateCount::get<AggregateCount::key3>() const { return m_key3; }
    template<> inline const auto AggregateCount::get<AggregateCount::key4>() const { return m_key4; }
    template<> inline const auto AggregateCount::get<AggregateCount::rec_count>() const { return m_rec_count; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AggregateCount& m) {
        o << "\"_meta\":{" << m.get<AggregateCount::_meta>() << "}";
        o << ",\"key1\":\"" << m.get<AggregateCount::key1>() << "\"";
        o << ",\"key2\":\"" << m.get<AggregateCount::key2>() << "\"";
        o << ",\"key3\":\"" << m.get<AggregateCount::key3>() << "\"";
        o << ",\"key4\":\"" << m.get<AggregateCount::key4>() << "\"";
        o << ",\"rec_count\":" << m.get<AggregateCount::rec_count>();
        return o;
    }

}
}
}