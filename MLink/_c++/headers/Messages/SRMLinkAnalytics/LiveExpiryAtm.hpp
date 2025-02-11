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

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _u_prc_driver__GUARD__
    #define _u_prc_driver__GUARD__
    DECL_STRONG_TYPE(u_prc_driver, double);
    #endif//_u_prc_driver__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _atm_slope__GUARD__
    #define _atm_slope__GUARD__
    DECL_STRONG_TYPE(atm_slope, float);
    #endif//_atm_slope__GUARD__

    #ifndef _axis_fuprc__GUARD__
    #define _axis_fuprc__GUARD__
    DECL_STRONG_TYPE(axis_fuprc, float);
    #endif//_axis_fuprc__GUARD__

    #ifndef _x_mult__GUARD__
    #define _x_mult__GUARD__
    DECL_STRONG_TYPE(x_mult, float);
    #endif//_x_mult__GUARD__

    #ifndef _x_shift__GUARD__
    #define _x_shift__GUARD__
    DECL_STRONG_TYPE(x_shift, float);
    #endif//_x_shift__GUARD__

    #ifndef _skew_mult__GUARD__
    #define _skew_mult__GUARD__
    DECL_STRONG_TYPE(skew_mult, float);
    #endif//_skew_mult__GUARD__

    #ifndef _s_timestamp__GUARD__
    #define _s_timestamp__GUARD__
    DECL_STRONG_TYPE(s_timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_s_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    
    class LiveExpiryAtm_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;

        private:
        ekey m_ekey{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpiryAtm_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpiryAtm_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }


        LiveExpiryAtm_PKey() {}

        virtual ~LiveExpiryAtm_PKey() {
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
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_ekey);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                }
            }
        }

    };
    

    class LiveExpiryAtm {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveExpiryAtm_PKey;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using u_prc_driver = spiderrock::protobuf::api::u_prc_driver;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using atm_slope = spiderrock::protobuf::api::atm_slope;
        using axis_fuprc = spiderrock::protobuf::api::axis_fuprc;
        using x_mult = spiderrock::protobuf::api::x_mult;
        using x_shift = spiderrock::protobuf::api::x_shift;
        using skew_mult = spiderrock::protobuf::api::skew_mult;
        using s_timestamp = spiderrock::protobuf::api::s_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        u_prc m_u_prc{};
        u_prc_driver m_u_prc_driver{};
        atm_vol m_atm_vol{};
        atm_slope m_atm_slope{};
        axis_fuprc m_axis_fuprc{};
        x_mult m_x_mult{};
        x_shift m_x_shift{};
        skew_mult m_skew_mult{};
        s_timestamp m_s_timestamp{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_prc_driver get_u_prc_driver() const {
            return m_u_prc_driver;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        atm_slope get_atm_slope() const {
            return m_atm_slope;
        }		
        axis_fuprc get_axis_fuprc() const {
            return m_axis_fuprc;
        }		
        x_mult get_x_mult() const {
            return m_x_mult;
        }		
        x_shift get_x_shift() const {
            return m_x_shift;
        }		
        skew_mult get_skew_mult() const {
            return m_skew_mult;
        }		
        s_timestamp get_s_timestamp() const {
            return m_s_timestamp;
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
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_prc_driver(const u_prc_driver& value)  {
            m_u_prc_driver = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_atm_slope(const atm_slope& value)  {
            m_atm_slope = value;
        }
        void set_axis_fuprc(const axis_fuprc& value)  {
            m_axis_fuprc = value;
        }
        void set_x_mult(const x_mult& value)  {
            m_x_mult = value;
        }
        void set_x_shift(const x_shift& value)  {
            m_x_shift = value;
        }
        void set_skew_mult(const skew_mult& value)  {
            m_skew_mult = value;
        }
        void set_s_timestamp(const s_timestamp& value)  {
            m_s_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveExpiryAtm::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_prc_driver & value) {
            set_u_prc_driver(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const atm_slope & value) {
            set_atm_slope(value);
        }
        void set(const axis_fuprc & value) {
            set_axis_fuprc(value);
        }
        void set(const x_mult & value) {
            set_x_mult(value);
        }
        void set(const x_shift & value) {
            set_x_shift(value);
        }
        void set(const skew_mult & value) {
            set_skew_mult(value);
        }
        void set(const s_timestamp & value) {
            set_s_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveExpiryAtm & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_u_prc);
            set(value.m_u_prc_driver);
            set(value.m_atm_vol);
            set(value.m_atm_slope);
            set(value.m_axis_fuprc);
            set(value.m_x_mult);
            set(value.m_x_shift);
            set(value.m_skew_mult);
            set(value.m_s_timestamp);
            set(value.m_timestamp);
        }

        LiveExpiryAtm() {
            m__meta.set_message_type("LiveExpiryAtm");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1134, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1134, length);
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
             *this = LiveExpiryAtm{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeUPrcDriver() const {
            return !(m_u_prc_driver == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeAtmSlope() const {
            return !(m_atm_slope == 0.0);
        }
        bool IncludeAxisFuprc() const {
            return !(m_axis_fuprc == 0.0);
        }
        bool IncludeXMult() const {
            return !(m_x_mult == 0.0);
        }
        bool IncludeXShift() const {
            return !(m_x_shift == 0.0);
        }
        bool IncludeSkewMult() const {
            return !(m_skew_mult == 0.0);
        }
        bool IncludeSTimestamp() const {
            return (m_s_timestamp.time_since_epoch().count() != 0);
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
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_u_prc);
            }
            if ( IncludeUPrcDriver()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(101,m_u_prc_driver);
            }
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(102,m_atm_vol);
            }
            if ( IncludeAtmSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_atm_slope);
            }
            if ( IncludeAxisFuprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(104,m_axis_fuprc);
            }
            if ( IncludeXMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_x_mult);
            }
            if ( IncludeXShift()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_x_shift);
            }
            if ( IncludeSkewMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_skew_mult);
            }
            if ( IncludeSTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(108, m_s_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(109, m_timestamp);
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
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_u_prc);
            }
            if ( IncludeUPrcDriver()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,101,m_u_prc_driver);
            }
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,102,m_atm_vol);
            }
            if ( IncludeAtmSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_atm_slope);
            }
            if ( IncludeAxisFuprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,104,m_axis_fuprc);
            }
            if ( IncludeXMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_x_mult);
            }
            if ( IncludeXShift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_x_shift);
            }
            if ( IncludeSkewMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_skew_mult);
            }
            if ( IncludeSTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 108, m_s_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 109, m_timestamp);
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
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_driver = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_fuprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_shift = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_skew_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_s_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 109: {
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

    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::_meta>() const { return LiveExpiryAtm::_meta{ m__meta}; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::pkey>() const { return LiveExpiryAtm::pkey{ m_pkey}; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::u_prc_driver>() const { return m_u_prc_driver; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::atm_slope>() const { return m_atm_slope; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::axis_fuprc>() const { return m_axis_fuprc; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::x_mult>() const { return m_x_mult; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::x_shift>() const { return m_x_shift; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::skew_mult>() const { return m_skew_mult; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::s_timestamp>() const { return m_s_timestamp; }
    template<> inline const auto LiveExpiryAtm::get<LiveExpiryAtm::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveExpiryAtm_PKey::get<LiveExpiryAtm_PKey::ekey>() const { return LiveExpiryAtm_PKey::ekey{m_ekey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveExpiryAtm_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveExpiryAtm_PKey::ekey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveExpiryAtm& m) {
        o << "\"_meta\":{" << m.get<LiveExpiryAtm::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveExpiryAtm::pkey>() << "}";
        o << ",\"u_prc\":" << m.get<LiveExpiryAtm::u_prc>();
        o << ",\"u_prc_driver\":" << m.get<LiveExpiryAtm::u_prc_driver>();
        o << ",\"atm_vol\":" << m.get<LiveExpiryAtm::atm_vol>();
        o << ",\"atm_slope\":" << m.get<LiveExpiryAtm::atm_slope>();
        o << ",\"axis_fuprc\":" << m.get<LiveExpiryAtm::axis_fuprc>();
        o << ",\"x_mult\":" << m.get<LiveExpiryAtm::x_mult>();
        o << ",\"x_shift\":" << m.get<LiveExpiryAtm::x_shift>();
        o << ",\"skew_mult\":" << m.get<LiveExpiryAtm::skew_mult>();
        {
            std::time_t tt = m.get<LiveExpiryAtm::s_timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"s_timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<LiveExpiryAtm::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}