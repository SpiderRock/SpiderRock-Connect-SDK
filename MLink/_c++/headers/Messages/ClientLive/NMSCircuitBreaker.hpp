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

    #ifndef _level1__GUARD__
    #define _level1__GUARD__
    DECL_STRONG_TYPE(level1, float);
    #endif//_level1__GUARD__

    #ifndef _level2__GUARD__
    #define _level2__GUARD__
    DECL_STRONG_TYPE(level2, float);
    #endif//_level2__GUARD__

    #ifndef _level3__GUARD__
    #define _level3__GUARD__
    DECL_STRONG_TYPE(level3, float);
    #endif//_level3__GUARD__

    #ifndef _current_level__GUARD__
    #define _current_level__GUARD__
    DECL_STRONG_TYPE(current_level, int32);
    #endif//_current_level__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _market_center__GUARD__
    #define _market_center__GUARD__
    DECL_STRONG_TYPE(market_center, string);
    #endif//_market_center__GUARD__

    
    class NMSCircuitBreaker_PKey {
        public:
        //using statements for all types used in this class
        using market_center = spiderrock::protobuf::api::market_center;

        private:
        market_center m_market_center{};

        public:
        market_center get_market_center() const {
            return m_market_center;
        }
        void set_market_center(const market_center& value)  {
            m_market_center = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NMSCircuitBreaker_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NMSCircuitBreaker_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const market_center & value) { set_market_center(value); }


        NMSCircuitBreaker_PKey() {}

        virtual ~NMSCircuitBreaker_PKey() {
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
        bool IncludeMarketCenter() const {
            return !(m_market_center.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMarketCenter()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_market_center);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMarketCenter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_market_center));
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
                    case 10: {m_market_center = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class NMSCircuitBreaker {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::NMSCircuitBreaker_PKey;
        using level1 = spiderrock::protobuf::api::level1;
        using level2 = spiderrock::protobuf::api::level2;
        using level3 = spiderrock::protobuf::api::level3;
        using current_level = spiderrock::protobuf::api::current_level;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        level1 m_level1{};
        level2 m_level2{};
        level3 m_level3{};
        current_level m_current_level{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        level1 get_level1() const {
            return m_level1;
        }		
        level2 get_level2() const {
            return m_level2;
        }		
        level3 get_level3() const {
            return m_level3;
        }		
        current_level get_current_level() const {
            return m_current_level;
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
        void set_level1(const level1& value)  {
            m_level1 = value;
        }
        void set_level2(const level2& value)  {
            m_level2 = value;
        }
        void set_level3(const level3& value)  {
            m_level3 = value;
        }
        void set_current_level(const current_level& value)  {
            m_current_level = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NMSCircuitBreaker::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const level1 & value) {
            set_level1(value);
        }
        void set(const level2 & value) {
            set_level2(value);
        }
        void set(const level3 & value) {
            set_level3(value);
        }
        void set(const current_level & value) {
            set_current_level(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const NMSCircuitBreaker & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_level1);
            set(value.m_level2);
            set(value.m_level3);
            set(value.m_current_level);
            set(value.m_timestamp);
        }

        NMSCircuitBreaker() {
            m__meta.set_message_type("NMSCircuitBreaker");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4450, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4450, length);
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
             *this = NMSCircuitBreaker{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeLevel1() const {
            return !(m_level1 == 0.0);
        }
        bool IncludeLevel2() const {
            return !(m_level2 == 0.0);
        }
        bool IncludeLevel3() const {
            return !(m_level3 == 0.0);
        }
        bool IncludeCurrentLevel() const {
            return !(m_current_level == 0);
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
            if ( IncludeLevel1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_level1);
            }
            if ( IncludeLevel2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_level2);
            }
            if ( IncludeLevel3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_level3);
            }
            if ( IncludeCurrentLevel()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_current_level);
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
            if ( IncludeLevel1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_level1);
            }
            if ( IncludeLevel2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_level2);
            }
            if ( IncludeLevel3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_level3);
            }
            if ( IncludeCurrentLevel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_current_level);
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
                            m_level1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_level2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_level3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_current_level = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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

    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::_meta>() const { return NMSCircuitBreaker::_meta{ m__meta}; }
    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::pkey>() const { return NMSCircuitBreaker::pkey{ m_pkey}; }
    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::level1>() const { return m_level1; }
    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::level2>() const { return m_level2; }
    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::level3>() const { return m_level3; }
    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::current_level>() const { return m_current_level; }
    template<> inline const auto NMSCircuitBreaker::get<NMSCircuitBreaker::timestamp>() const { return m_timestamp; }
    template<> inline const auto NMSCircuitBreaker_PKey::get<NMSCircuitBreaker_PKey::market_center>() const { return m_market_center; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const NMSCircuitBreaker_PKey& m) {
        o << "\"market_center\":\"" << m.get<NMSCircuitBreaker_PKey::market_center>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NMSCircuitBreaker& m) {
        o << "\"_meta\":{" << m.get<NMSCircuitBreaker::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<NMSCircuitBreaker::pkey>() << "}";
        o << ",\"level1\":" << m.get<NMSCircuitBreaker::level1>();
        o << ",\"level2\":" << m.get<NMSCircuitBreaker::level2>();
        o << ",\"level3\":" << m.get<NMSCircuitBreaker::level3>();
        o << ",\"current_level\":" << m.get<NMSCircuitBreaker::current_level>();
        {
            std::time_t tt = m.get<NMSCircuitBreaker::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}