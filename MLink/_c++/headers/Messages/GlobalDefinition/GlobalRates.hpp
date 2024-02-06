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

    #ifndef _rate_source__GUARD__
    #define _rate_source__GUARD__
    DECL_STRONG_TYPE(rate_source, spiderrock::protobuf::api::RateSource);
    #endif//_rate_source__GUARD__

    #ifndef _days__GUARD__
    #define _days__GUARD__
    DECL_STRONG_TYPE(days, int32);
    #endif//_days__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    
    class GlobalRates_PKey {
        public:
        //using statements for all types used in this class
        using rate_source = spiderrock::protobuf::api::rate_source;

        private:
        rate_source m_rate_source{};

        public:
        rate_source get_rate_source() const {
            return m_rate_source;
        }
        void set_rate_source(const rate_source& value)  {
            m_rate_source = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const rate_source & value) { set_rate_source(value); }


        GlobalRates_PKey() {}

        virtual ~GlobalRates_PKey() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(10,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateSource>(m_rate_source)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,10,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateSource>(m_rate_source)));
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
                    case 10: {m_rate_source = static_cast<spiderrock::protobuf::api::RateSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class GlobalRates_Curve {
        public:
        //using statements for all types used in this class
        using days = spiderrock::protobuf::api::days;
        using rate = spiderrock::protobuf::api::rate__float;

        private:
        days m_days{};
        rate m_rate{};

        public:
        days get_days() const {
            return m_days;
        }
        rate get_rate() const {
            return m_rate;
        }
        void set_days(const days& value)  {
            m_days = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates_Curve::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates_Curve::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const days & value) { set_days(value); }
        void set(const rate & value) { set_rate(value); }


        GlobalRates_Curve() {}

        virtual ~GlobalRates_Curve() {
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
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_days);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_rate);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_days);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_rate);
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
                    case 106: {m_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 109: {m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class GlobalRates {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::GlobalRates_PKey;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using curve = spiderrock::protobuf::api::GlobalRates_Curve;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        timestamp m_timestamp{};
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
        void set_curve_list(const std::vector<curve>& list)  {
            m_curve = list;
        }
        void add_curve(const curve& item) {
            m_curve.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRates::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const curve & value) {
            add_curve(value);
        }

        void set(const GlobalRates & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_timestamp);set_curve_list(value.m_curve);
        }

        GlobalRates() {
            m__meta.set_message_type("GlobalRates");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3595, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3595, length);
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
             *this = GlobalRates{};
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
            if ( IncludeCurve()) {
                for (auto& item : m_curve) {
					totalSize += SRProtobufCPP::TagCodec::Size(103, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeCurve()) {
                for (auto& item : m_curve) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 103, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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

    template<> inline const auto GlobalRates::get<GlobalRates::_meta>() const { return GlobalRates::_meta{ m__meta}; }
    template<> inline const auto GlobalRates::get<GlobalRates::pkey>() const { return GlobalRates::pkey{ m_pkey}; }
    template<> inline const auto GlobalRates::get<GlobalRates::timestamp>() const { return m_timestamp; }
    template<> inline const auto GlobalRates::get<GlobalRates::curve>(int i) const { return GlobalRates::curve{ get_curve(i)}; }
    template<> inline int GlobalRates::count<GlobalRates::curve>() const { return static_cast<int>( m_curve.size()); }
    template<> inline const auto GlobalRates_PKey::get<GlobalRates_PKey::rate_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateSource>(m_rate_source));}
    
    template<> inline const auto GlobalRates_Curve::get<GlobalRates_Curve::days>() const { return m_days; }
    template<> inline const auto GlobalRates_Curve::get<GlobalRates_Curve::rate>() const { return m_rate; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const GlobalRates_PKey& m) {
        o << "\"rate_source\":" << (int64_t)m.get<GlobalRates_PKey::rate_source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const GlobalRates_Curve& m) {
        o << "\"days\":" << m.get<GlobalRates_Curve::days>();
        o << ",\"rate\":" << m.get<GlobalRates_Curve::rate>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const GlobalRates& m) {
        o << "\"_meta\":{" << m.get<GlobalRates::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<GlobalRates::pkey>() << "}";
        {
            std::time_t tt = m.get<GlobalRates::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"curve\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<GlobalRates::curve>(); ++i) {
                o << delim << m.get<GlobalRates::curve>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}