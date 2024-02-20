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

    #ifndef _min_x__GUARD__
    #define _min_x__GUARD__
    DECL_STRONG_TYPE(min_x, double);
    #endif//_min_x__GUARD__

    #ifndef _max_x__GUARD__
    #define _max_x__GUARD__
    DECL_STRONG_TYPE(max_x, double);
    #endif//_max_x__GUARD__

    #ifndef _num_points__GUARD__
    #define _num_points__GUARD__
    DECL_STRONG_TYPE(num_points, int32);
    #endif//_num_points__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _yy__GUARD__
    #define _yy__GUARD__
    DECL_STRONG_TYPE(yy, double);
    #endif//_yy__GUARD__

    
    class SkewBasisCurveV4_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        SkewBasisCurveV4_PKey() {}

        virtual ~SkewBasisCurveV4_PKey() {
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
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
                    case 10: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    
    class SkewBasisCurveV4_Point {
        public:
        //using statements for all types used in this class
        using yy = spiderrock::protobuf::api::yy;

        private:
        yy m_yy{};

        public:
        yy get_yy() const {
            return m_yy;
        }
        void set_yy(const yy& value)  {
            m_yy = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4_Point::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4_Point::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const yy & value) { set_yy(value); }


        SkewBasisCurveV4_Point() {}

        virtual ~SkewBasisCurveV4_Point() {
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
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_yy);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_yy);
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
                    case 112: {m_yy = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SkewBasisCurveV4 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SkewBasisCurveV4_PKey;
        using min_x = spiderrock::protobuf::api::min_x;
        using max_x = spiderrock::protobuf::api::max_x;
        using num_points = spiderrock::protobuf::api::num_points;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using point = spiderrock::protobuf::api::SkewBasisCurveV4_Point;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        min_x m_min_x{};
        max_x m_max_x{};
        num_points m_num_points{};
        timestamp m_timestamp{};
        std::vector<point> m_point{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        min_x get_min_x() const {
            return m_min_x;
        }		
        max_x get_max_x() const {
            return m_max_x;
        }		
        num_points get_num_points() const {
            return m_num_points;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<point>& get_point_list() const {
            return m_point;
        }
        const point& get_point(const int i) const {
            return m_point.at(i);
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
        void set_min_x(const min_x& value)  {
            m_min_x = value;
        }
        void set_max_x(const max_x& value)  {
            m_max_x = value;
        }
        void set_num_points(const num_points& value)  {
            m_num_points = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_point_list(const std::vector<point>& list)  {
            m_point = list;
        }
        void add_point(const point& item) {
            m_point.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SkewBasisCurveV4::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const min_x & value) {
            set_min_x(value);
        }
        void set(const max_x & value) {
            set_max_x(value);
        }
        void set(const num_points & value) {
            set_num_points(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const point & value) {
            add_point(value);
        }

        void set(const SkewBasisCurveV4 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_min_x);
            set(value.m_max_x);
            set(value.m_num_points);
            set(value.m_timestamp);set_point_list(value.m_point);
        }

        SkewBasisCurveV4() {
            m__meta.set_message_type("SkewBasisCurveV4");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1110, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1110, length);
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
             *this = SkewBasisCurveV4{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeMinX() const {
            return !(m_min_x == 0.0);
        }
        bool IncludeMaxX() const {
            return !(m_max_x == 0.0);
        }
        bool IncludeNumPoints() const {
            return !(m_num_points == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludePoint() const {
            return (!m_point.empty());
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
            if ( IncludeMinX()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_min_x);
            }
            if ( IncludeMaxX()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_max_x);
            }
            if ( IncludeNumPoints()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_num_points);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_timestamp);
            }
            if ( IncludePoint()) {
                for (auto& item : m_point) {
					totalSize += SRProtobufCPP::TagCodec::Size(109, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeMinX()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_min_x);
            }
            if ( IncludeMaxX()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_max_x);
            }
            if ( IncludeNumPoints()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_num_points);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_timestamp);
            }
            if ( IncludePoint()) {
                for (auto& item : m_point) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 109, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_x = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_x = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_points = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            point item_point;
                            item_point.Decode(pos, pos+length);  
                            m_point.emplace_back(item_point);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::_meta>() const { return SkewBasisCurveV4::_meta{ m__meta}; }
    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::pkey>() const { return SkewBasisCurveV4::pkey{ m_pkey}; }
    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::min_x>() const { return m_min_x; }
    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::max_x>() const { return m_max_x; }
    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::num_points>() const { return m_num_points; }
    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::timestamp>() const { return m_timestamp; }
    template<> inline const auto SkewBasisCurveV4::get<SkewBasisCurveV4::point>(int i) const { return SkewBasisCurveV4::point{ get_point(i)}; }
    template<> inline int SkewBasisCurveV4::count<SkewBasisCurveV4::point>() const { return static_cast<int>( m_point.size()); }
    template<> inline const auto SkewBasisCurveV4_PKey::get<SkewBasisCurveV4_PKey::ticker>() const { return SkewBasisCurveV4_PKey::ticker{m_ticker}; }
    
    template<> inline const auto SkewBasisCurveV4_Point::get<SkewBasisCurveV4_Point::yy>() const { return m_yy; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SkewBasisCurveV4_PKey& m) {
        o << "\"ticker\":{" << m.get<SkewBasisCurveV4_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SkewBasisCurveV4_Point& m) {
        o << "\"yy\":" << m.get<SkewBasisCurveV4_Point::yy>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SkewBasisCurveV4& m) {
        o << "\"_meta\":{" << m.get<SkewBasisCurveV4::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SkewBasisCurveV4::pkey>() << "}";
        o << ",\"min_x\":" << m.get<SkewBasisCurveV4::min_x>();
        o << ",\"max_x\":" << m.get<SkewBasisCurveV4::max_x>();
        o << ",\"num_points\":" << m.get<SkewBasisCurveV4::num_points>();
        {
            std::time_t tt = m.get<SkewBasisCurveV4::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"point\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SkewBasisCurveV4::point>(); ++i) {
                o << delim << m.get<SkewBasisCurveV4::point>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}