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

    #ifndef _left_a__GUARD__
    #define _left_a__GUARD__
    DECL_STRONG_TYPE(left_a, double);
    #endif//_left_a__GUARD__

    #ifndef _left_b__GUARD__
    #define _left_b__GUARD__
    DECL_STRONG_TYPE(left_b, double);
    #endif//_left_b__GUARD__

    #ifndef _right_a__GUARD__
    #define _right_a__GUARD__
    DECL_STRONG_TYPE(right_a, double);
    #endif//_right_a__GUARD__

    #ifndef _right_b__GUARD__
    #define _right_b__GUARD__
    DECL_STRONG_TYPE(right_b, double);
    #endif//_right_b__GUARD__

    #ifndef _num_points__GUARD__
    #define _num_points__GUARD__
    DECL_STRONG_TYPE(num_points, int32);
    #endif//_num_points__GUARD__

    #ifndef _num_expiries__GUARD__
    #define _num_expiries__GUARD__
    DECL_STRONG_TYPE(num_expiries, int32);
    #endif//_num_expiries__GUARD__

    #ifndef _fit_mae__GUARD__
    #define _fit_mae__GUARD__
    DECL_STRONG_TYPE(fit_mae, double);
    #endif//_fit_mae__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _surface_type__GUARD__
    #define _surface_type__GUARD__
    DECL_STRONG_TYPE(surface_type, spiderrock::protobuf::api::SurfaceCurveType);
    #endif//_surface_type__GUARD__

    #ifndef _x__double__GUARD__
    #define _x__double__GUARD__
    DECL_STRONG_TYPE(x__double, double);
    #endif//_x__double__GUARD__

    #ifndef _y__double__GUARD__
    #define _y__double__GUARD__
    DECL_STRONG_TYPE(y__double, double);
    #endif//_y__double__GUARD__

    
    class LiveBasisCurve_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using surface_type = spiderrock::protobuf::api::surface_type;

        private:
        ekey m_ekey{};
        surface_type m_surface_type{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        surface_type get_surface_type() const {
            return m_surface_type;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_surface_type(const surface_type& value)  {
            m_surface_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const surface_type & value) { set_surface_type(value); }


        LiveBasisCurve_PKey() {}

        virtual ~LiveBasisCurve_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_ekey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_ekey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_surface_type = static_cast<spiderrock::protobuf::api::SurfaceCurveType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class LiveBasisCurve_Point {
        public:
        //using statements for all types used in this class
        using x = spiderrock::protobuf::api::x__double;
        using y = spiderrock::protobuf::api::y__double;

        private:
        x m_x{};
        y m_y{};

        public:
        x get_x() const {
            return m_x;
        }
        y get_y() const {
            return m_y;
        }
        void set_x(const x& value)  {
            m_x = value;
        }
        void set_y(const y& value)  {
            m_y = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve_Point::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve_Point::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const x & value) { set_x(value); }
        void set(const y & value) { set_y(value); }


        LiveBasisCurve_Point() {}

        virtual ~LiveBasisCurve_Point() {
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
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(107,m_x);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(108,m_y);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,107,m_x);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,108,m_y);
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
                    case 107: {m_x = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 108: {m_y = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class LiveBasisCurve {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveBasisCurve_PKey;
        using min_x = spiderrock::protobuf::api::min_x;
        using max_x = spiderrock::protobuf::api::max_x;
        using left_a = spiderrock::protobuf::api::left_a;
        using left_b = spiderrock::protobuf::api::left_b;
        using right_a = spiderrock::protobuf::api::right_a;
        using right_b = spiderrock::protobuf::api::right_b;
        using num_points = spiderrock::protobuf::api::num_points;
        using num_expiries = spiderrock::protobuf::api::num_expiries;
        using fit_mae = spiderrock::protobuf::api::fit_mae;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using point = spiderrock::protobuf::api::LiveBasisCurve_Point;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        min_x m_min_x{};
        max_x m_max_x{};
        left_a m_left_a{};
        left_b m_left_b{};
        right_a m_right_a{};
        right_b m_right_b{};
        num_points m_num_points{};
        num_expiries m_num_expiries{};
        fit_mae m_fit_mae{};
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
        left_a get_left_a() const {
            return m_left_a;
        }		
        left_b get_left_b() const {
            return m_left_b;
        }		
        right_a get_right_a() const {
            return m_right_a;
        }		
        right_b get_right_b() const {
            return m_right_b;
        }		
        num_points get_num_points() const {
            return m_num_points;
        }		
        num_expiries get_num_expiries() const {
            return m_num_expiries;
        }		
        fit_mae get_fit_mae() const {
            return m_fit_mae;
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
        void set_left_a(const left_a& value)  {
            m_left_a = value;
        }
        void set_left_b(const left_b& value)  {
            m_left_b = value;
        }
        void set_right_a(const right_a& value)  {
            m_right_a = value;
        }
        void set_right_b(const right_b& value)  {
            m_right_b = value;
        }
        void set_num_points(const num_points& value)  {
            m_num_points = value;
        }
        void set_num_expiries(const num_expiries& value)  {
            m_num_expiries = value;
        }
        void set_fit_mae(const fit_mae& value)  {
            m_fit_mae = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveBasisCurve::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const left_a & value) {
            set_left_a(value);
        }
        void set(const left_b & value) {
            set_left_b(value);
        }
        void set(const right_a & value) {
            set_right_a(value);
        }
        void set(const right_b & value) {
            set_right_b(value);
        }
        void set(const num_points & value) {
            set_num_points(value);
        }
        void set(const num_expiries & value) {
            set_num_expiries(value);
        }
        void set(const fit_mae & value) {
            set_fit_mae(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const point & value) {
            add_point(value);
        }

        void set(const LiveBasisCurve & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_min_x);
            set(value.m_max_x);
            set(value.m_left_a);
            set(value.m_left_b);
            set(value.m_right_a);
            set(value.m_right_b);
            set(value.m_num_points);
            set(value.m_num_expiries);
            set(value.m_fit_mae);
            set(value.m_timestamp);set_point_list(value.m_point);
        }

        LiveBasisCurve() {
            m__meta.set_message_type("LiveBasisCurve");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1131, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1131, length);
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
             *this = LiveBasisCurve{};
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
        bool IncludeLeftA() const {
            return !(m_left_a == 0.0);
        }
        bool IncludeLeftB() const {
            return !(m_left_b == 0.0);
        }
        bool IncludeRightA() const {
            return !(m_right_a == 0.0);
        }
        bool IncludeRightB() const {
            return !(m_right_b == 0.0);
        }
        bool IncludeNumPoints() const {
            return !(m_num_points == 0);
        }
        bool IncludeNumExpiries() const {
            return !(m_num_expiries == 0);
        }
        bool IncludeFitMae() const {
            return !(m_fit_mae == 0.0);
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
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(101,m_max_x);
            }
            if ( IncludeLeftA()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(102,m_left_a);
            }
            if ( IncludeLeftB()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_left_b);
            }
            if ( IncludeRightA()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(104,m_right_a);
            }
            if ( IncludeRightB()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_right_b);
            }
            if ( IncludeNumPoints()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_num_points);
            }
            if ( IncludeNumExpiries()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(110,m_num_expiries);
            }
            if ( IncludeFitMae()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(111,m_fit_mae);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(112, m_timestamp);
            }
            if ( IncludePoint()) {
                for (auto& item : m_point) {
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
            if ( IncludeMinX()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_min_x);
            }
            if ( IncludeMaxX()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,101,m_max_x);
            }
            if ( IncludeLeftA()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,102,m_left_a);
            }
            if ( IncludeLeftB()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_left_b);
            }
            if ( IncludeRightA()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,104,m_right_a);
            }
            if ( IncludeRightB()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_right_b);
            }
            if ( IncludeNumPoints()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_num_points);
            }
            if ( IncludeNumExpiries()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,110,m_num_expiries);
            }
            if ( IncludeFitMae()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,111,m_fit_mae);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 112, m_timestamp);
            }
            if ( IncludePoint()) {
                for (auto& item : m_point) {
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_x = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_x = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_left_a = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_left_b = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_right_a = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_right_b = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_points = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_expiries = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fit_mae = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {
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

    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::_meta>() const { return LiveBasisCurve::_meta{ m__meta}; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::pkey>() const { return LiveBasisCurve::pkey{ m_pkey}; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::min_x>() const { return m_min_x; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::max_x>() const { return m_max_x; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::left_a>() const { return m_left_a; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::left_b>() const { return m_left_b; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::right_a>() const { return m_right_a; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::right_b>() const { return m_right_b; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::num_points>() const { return m_num_points; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::num_expiries>() const { return m_num_expiries; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::fit_mae>() const { return m_fit_mae; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveBasisCurve::get<LiveBasisCurve::point>(int i) const { return LiveBasisCurve::point{ get_point(i)}; }
    template<> inline int LiveBasisCurve::count<LiveBasisCurve::point>() const { return static_cast<int>( m_point.size()); }
    template<> inline const auto LiveBasisCurve_PKey::get<LiveBasisCurve_PKey::ekey>() const { return LiveBasisCurve_PKey::ekey{m_ekey}; }
    template<> inline const auto LiveBasisCurve_PKey::get<LiveBasisCurve_PKey::surface_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type));}
    
    template<> inline const auto LiveBasisCurve_Point::get<LiveBasisCurve_Point::x>() const { return m_x; }
    template<> inline const auto LiveBasisCurve_Point::get<LiveBasisCurve_Point::y>() const { return m_y; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveBasisCurve_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveBasisCurve_PKey::ekey>() << "}";
        o << ",\"surface_type\":" << (int64_t)m.get<LiveBasisCurve_PKey::surface_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveBasisCurve_Point& m) {
        o << "\"x\":" << m.get<LiveBasisCurve_Point::x>();
        o << ",\"y\":" << m.get<LiveBasisCurve_Point::y>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveBasisCurve& m) {
        o << "\"_meta\":{" << m.get<LiveBasisCurve::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveBasisCurve::pkey>() << "}";
        o << ",\"min_x\":" << m.get<LiveBasisCurve::min_x>();
        o << ",\"max_x\":" << m.get<LiveBasisCurve::max_x>();
        o << ",\"left_a\":" << m.get<LiveBasisCurve::left_a>();
        o << ",\"left_b\":" << m.get<LiveBasisCurve::left_b>();
        o << ",\"right_a\":" << m.get<LiveBasisCurve::right_a>();
        o << ",\"right_b\":" << m.get<LiveBasisCurve::right_b>();
        o << ",\"num_points\":" << m.get<LiveBasisCurve::num_points>();
        o << ",\"num_expiries\":" << m.get<LiveBasisCurve::num_expiries>();
        o << ",\"fit_mae\":" << m.get<LiveBasisCurve::fit_mae>();
        {
            std::time_t tt = m.get<LiveBasisCurve::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"point\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<LiveBasisCurve::point>(); ++i) {
                o << delim << m.get<LiveBasisCurve::point>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}