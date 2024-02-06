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

    #ifndef _cnt__GUARD__
    #define _cnt__GUARD__
    DECL_STRONG_TYPE(cnt, int32);
    #endif//_cnt__GUARD__

    #ifndef _sum__GUARD__
    #define _sum__GUARD__
    DECL_STRONG_TYPE(sum, double);
    #endif//_sum__GUARD__

    #ifndef _avg__GUARD__
    #define _avg__GUARD__
    DECL_STRONG_TYPE(avg, double);
    #endif//_avg__GUARD__

    #ifndef _min__double__GUARD__
    #define _min__double__GUARD__
    DECL_STRONG_TYPE(min__double, double);
    #endif//_min__double__GUARD__

    #ifndef _max__double__GUARD__
    #define _max__double__GUARD__
    DECL_STRONG_TYPE(max__double, double);
    #endif//_max__double__GUARD__

    

    class AggregateNumeric {
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
        using cnt = spiderrock::protobuf::api::cnt;
        using sum = spiderrock::protobuf::api::sum;
        using avg = spiderrock::protobuf::api::avg;
        using min = spiderrock::protobuf::api::min__double;
        using max = spiderrock::protobuf::api::max__double;

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
        cnt m_cnt{};
        sum m_sum{};
        avg m_avg{};
        min m_min{};
        max m_max{};

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
        cnt get_cnt() const {
            return m_cnt;
        }		
        sum get_sum() const {
            return m_sum;
        }		
        avg get_avg() const {
            return m_avg;
        }		
        min get_min() const {
            return m_min;
        }		
        max get_max() const {
            return m_max;
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
        void set_cnt(const cnt& value)  {
            m_cnt = value;
        }
        void set_sum(const sum& value)  {
            m_sum = value;
        }
        void set_avg(const avg& value)  {
            m_avg = value;
        }
        void set_min(const min& value)  {
            m_min = value;
        }
        void set_max(const max& value)  {
            m_max = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AggregateNumeric::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const cnt & value) {
            set_cnt(value);
        }
        void set(const sum & value) {
            set_sum(value);
        }
        void set(const avg & value) {
            set_avg(value);
        }
        void set(const min & value) {
            set_min(value);
        }
        void set(const max & value) {
            set_max(value);
        }

        void set(const AggregateNumeric & value) {
            set(value.m__meta);
            set(value.m_key1);
            set(value.m_key2);
            set(value.m_key3);
            set(value.m_key4);
            set(value.m_name);
            set(value.m_f_num);
            set(value.m_rec_count);
            set(value.m_error);
            set(value.m_cnt);
            set(value.m_sum);
            set(value.m_avg);
            set(value.m_min);
            set(value.m_max);
        }

        AggregateNumeric() {
            m__meta.set_message_type("AggregateNumeric");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3450, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3450, length);
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
             *this = AggregateNumeric{};
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
        bool IncludeCnt() const {
            return !(m_cnt == 0);
        }
        bool IncludeSum() const {
            return !(m_sum == 0.0);
        }
        bool IncludeAvg() const {
            return !(m_avg == 0.0);
        }
        bool IncludeMin() const {
            return !(m_min == 0.0);
        }
        bool IncludeMax() const {
            return !(m_max == 0.0);
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
            if ( IncludeCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_cnt);
            }
            if ( IncludeSum()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_sum);
            }
            if ( IncludeAvg()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_avg);
            }
            if ( IncludeMin()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_min);
            }
            if ( IncludeMax()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_max);
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
            if ( IncludeCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_cnt);
            }
            if ( IncludeSum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_sum);
            }
            if ( IncludeAvg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_avg);
            }
            if ( IncludeMin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_min);
            }
            if ( IncludeMax()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_max);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sum = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AggregateNumeric::get<AggregateNumeric::_meta>() const { return AggregateNumeric::_meta{ m__meta}; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::key1>() const { return m_key1; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::key2>() const { return m_key2; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::key3>() const { return m_key3; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::key4>() const { return m_key4; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::name>() const { return m_name; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::f_num>() const { return m_f_num; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::rec_count>() const { return m_rec_count; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::error>() const { return m_error; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::cnt>() const { return m_cnt; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::sum>() const { return m_sum; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::avg>() const { return m_avg; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::min>() const { return m_min; }
    template<> inline const auto AggregateNumeric::get<AggregateNumeric::max>() const { return m_max; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AggregateNumeric& m) {
        o << "\"_meta\":{" << m.get<AggregateNumeric::_meta>() << "}";
        o << ",\"key1\":\"" << m.get<AggregateNumeric::key1>() << "\"";
        o << ",\"key2\":\"" << m.get<AggregateNumeric::key2>() << "\"";
        o << ",\"key3\":\"" << m.get<AggregateNumeric::key3>() << "\"";
        o << ",\"key4\":\"" << m.get<AggregateNumeric::key4>() << "\"";
        o << ",\"name\":\"" << m.get<AggregateNumeric::name>() << "\"";
        o << ",\"f_num\":" << m.get<AggregateNumeric::f_num>();
        o << ",\"rec_count\":" << m.get<AggregateNumeric::rec_count>();
        o << ",\"error\":\"" << m.get<AggregateNumeric::error>() << "\"";
        o << ",\"cnt\":" << m.get<AggregateNumeric::cnt>();
        o << ",\"sum\":" << m.get<AggregateNumeric::sum>();
        o << ",\"avg\":" << m.get<AggregateNumeric::avg>();
        o << ",\"min\":" << m.get<AggregateNumeric::min>();
        o << ",\"max\":" << m.get<AggregateNumeric::max>();
        return o;
    }

}
}
}