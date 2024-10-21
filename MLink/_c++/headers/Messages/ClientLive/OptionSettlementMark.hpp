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

    #ifndef _settle_date__GUARD__
    #define _settle_date__GUARD__
    DECL_STRONG_TYPE(settle_date, DateKey);
    #endif//_settle_date__GUARD__

    #ifndef _settle_px__float__GUARD__
    #define _settle_px__float__GUARD__
    DECL_STRONG_TYPE(settle_px__float, float);
    #endif//_settle_px__float__GUARD__

    #ifndef _settle_de__GUARD__
    #define _settle_de__GUARD__
    DECL_STRONG_TYPE(settle_de, float);
    #endif//_settle_de__GUARD__

    #ifndef _low_lmt_px__float__GUARD__
    #define _low_lmt_px__float__GUARD__
    DECL_STRONG_TYPE(low_lmt_px__float, float);
    #endif//_low_lmt_px__float__GUARD__

    #ifndef _high_lmt_px__float__GUARD__
    #define _high_lmt_px__float__GUARD__
    DECL_STRONG_TYPE(high_lmt_px__float, float);
    #endif//_high_lmt_px__float__GUARD__

    #ifndef _open_int__GUARD__
    #define _open_int__GUARD__
    DECL_STRONG_TYPE(open_int, int32);
    #endif//_open_int__GUARD__

    #ifndef _volume__GUARD__
    #define _volume__GUARD__
    DECL_STRONG_TYPE(volume, int32);
    #endif//_volume__GUARD__

    #ifndef _early__GUARD__
    #define _early__GUARD__
    DECL_STRONG_TYPE(early, spiderrock::protobuf::api::YesNo);
    #endif//_early__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionSettlementMark_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionSettlementMark_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionSettlementMark_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionSettlementMark_PKey() {}

        virtual ~OptionSettlementMark_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionSettlementMark {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionSettlementMark_PKey;
        using settle_date = spiderrock::protobuf::api::settle_date;
        using settle_px = spiderrock::protobuf::api::settle_px__float;
        using settle_de = spiderrock::protobuf::api::settle_de;
        using low_lmt_px = spiderrock::protobuf::api::low_lmt_px__float;
        using high_lmt_px = spiderrock::protobuf::api::high_lmt_px__float;
        using open_int = spiderrock::protobuf::api::open_int;
        using volume = spiderrock::protobuf::api::volume;
        using early = spiderrock::protobuf::api::early;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        settle_date m_settle_date{};
        settle_px m_settle_px{};
        settle_de m_settle_de{};
        low_lmt_px m_low_lmt_px{};
        high_lmt_px m_high_lmt_px{};
        open_int m_open_int{};
        volume m_volume{};
        early m_early{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        settle_date get_settle_date() const {
            return m_settle_date;
        }		
        settle_px get_settle_px() const {
            return m_settle_px;
        }		
        settle_de get_settle_de() const {
            return m_settle_de;
        }		
        low_lmt_px get_low_lmt_px() const {
            return m_low_lmt_px;
        }		
        high_lmt_px get_high_lmt_px() const {
            return m_high_lmt_px;
        }		
        open_int get_open_int() const {
            return m_open_int;
        }		
        volume get_volume() const {
            return m_volume;
        }		
        early get_early() const {
            return m_early;
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
        void set_settle_date(const settle_date& value)  {
            m_settle_date = value;
        }
        void set_settle_px(const settle_px& value)  {
            m_settle_px = value;
        }
        void set_settle_de(const settle_de& value)  {
            m_settle_de = value;
        }
        void set_low_lmt_px(const low_lmt_px& value)  {
            m_low_lmt_px = value;
        }
        void set_high_lmt_px(const high_lmt_px& value)  {
            m_high_lmt_px = value;
        }
        void set_open_int(const open_int& value)  {
            m_open_int = value;
        }
        void set_volume(const volume& value)  {
            m_volume = value;
        }
        void set_early(const early& value)  {
            m_early = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionSettlementMark::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const settle_date & value) {
            set_settle_date(value);
        }
        void set(const settle_px & value) {
            set_settle_px(value);
        }
        void set(const settle_de & value) {
            set_settle_de(value);
        }
        void set(const low_lmt_px & value) {
            set_low_lmt_px(value);
        }
        void set(const high_lmt_px & value) {
            set_high_lmt_px(value);
        }
        void set(const open_int & value) {
            set_open_int(value);
        }
        void set(const volume & value) {
            set_volume(value);
        }
        void set(const early & value) {
            set_early(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionSettlementMark & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_settle_date);
            set(value.m_settle_px);
            set(value.m_settle_de);
            set(value.m_low_lmt_px);
            set(value.m_high_lmt_px);
            set(value.m_open_int);
            set(value.m_volume);
            set(value.m_early);
            set(value.m_timestamp);
        }

        OptionSettlementMark() {
            m__meta.set_message_type("OptionSettlementMark");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3150, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3150, length);
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
             *this = OptionSettlementMark{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSettleDate() const {
            return (m_settle_date.ByteSizeLong() > 0);
        }
        bool IncludeSettlePx() const {
            return !(m_settle_px == 0.0);
        }
        bool IncludeSettleDe() const {
            return !(m_settle_de == 0.0);
        }
        bool IncludeLowLmtPx() const {
            return !(m_low_lmt_px == 0.0);
        }
        bool IncludeHighLmtPx() const {
            return !(m_high_lmt_px == 0.0);
        }
        bool IncludeOpenInt() const {
            return !(m_open_int == 0);
        }
        bool IncludeVolume() const {
            return !(m_volume == 0);
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
            if ( IncludeSettleDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_settle_date.get_year(), m_settle_date.get_month(), m_settle_date.get_day());
            }
            if ( IncludeSettlePx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_settle_px);
            }
            if ( IncludeSettleDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_settle_de);
            }
            if ( IncludeLowLmtPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_low_lmt_px);
            }
            if ( IncludeHighLmtPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_high_lmt_px);
            }
            if ( IncludeOpenInt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_open_int);
            }
            if ( IncludeVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_volume);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_early)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(124, m_timestamp);
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
            if ( IncludeSettleDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_settle_date.get_year(), m_settle_date.get_month(), m_settle_date.get_day());
            }
            if ( IncludeSettlePx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_settle_px);
            }
            if ( IncludeSettleDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_settle_de);
            }
            if ( IncludeLowLmtPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_low_lmt_px);
            }
            if ( IncludeHighLmtPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_high_lmt_px);
            }
            if ( IncludeOpenInt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_open_int);
            }
            if ( IncludeVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_volume);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_early)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 124, m_timestamp);
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
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_settle_date.set_year(dateKey.year());
                            m_settle_date.set_month(dateKey.month());
                            m_settle_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_settle_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_settle_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_low_lmt_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_high_lmt_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_int = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_early = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
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

    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::_meta>() const { return OptionSettlementMark::_meta{ m__meta}; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::pkey>() const { return OptionSettlementMark::pkey{ m_pkey}; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::settle_date>() const { return OptionSettlementMark::settle_date{ m_settle_date}; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::settle_px>() const { return m_settle_px; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::settle_de>() const { return m_settle_de; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::low_lmt_px>() const { return m_low_lmt_px; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::high_lmt_px>() const { return m_high_lmt_px; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::open_int>() const { return m_open_int; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::volume>() const { return m_volume; }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::early>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_early)); }
    template<> inline const auto OptionSettlementMark::get<OptionSettlementMark::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionSettlementMark_PKey::get<OptionSettlementMark_PKey::okey>() const { return OptionSettlementMark_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionSettlementMark_PKey& m) {
        o << "\"okey\":{" << m.get<OptionSettlementMark_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionSettlementMark& m) {
        o << "\"_meta\":{" << m.get<OptionSettlementMark::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionSettlementMark::pkey>() << "}";
        o << ",\"settle_date\":{" << m.get<OptionSettlementMark::settle_date>() << "}";
        o << ",\"settle_px\":" << m.get<OptionSettlementMark::settle_px>();
        o << ",\"settle_de\":" << m.get<OptionSettlementMark::settle_de>();
        o << ",\"low_lmt_px\":" << m.get<OptionSettlementMark::low_lmt_px>();
        o << ",\"high_lmt_px\":" << m.get<OptionSettlementMark::high_lmt_px>();
        o << ",\"open_int\":" << m.get<OptionSettlementMark::open_int>();
        o << ",\"volume\":" << m.get<OptionSettlementMark::volume>();
        o << ",\"early\":" << (int64_t)m.get<OptionSettlementMark::early>();
        {
            std::time_t tt = m.get<OptionSettlementMark::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}