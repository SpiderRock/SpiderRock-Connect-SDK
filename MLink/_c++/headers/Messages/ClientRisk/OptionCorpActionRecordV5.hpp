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

    #ifndef _sod_root__GUARD__
    #define _sod_root__GUARD__
    DECL_STRONG_TYPE(sod_root, TickerKey);
    #endif//_sod_root__GUARD__

    #ifndef _mark_multiplier__GUARD__
    #define _mark_multiplier__GUARD__
    DECL_STRONG_TYPE(mark_multiplier, double);
    #endif//_mark_multiplier__GUARD__

    #ifndef _position_multiplier__GUARD__
    #define _position_multiplier__GUARD__
    DECL_STRONG_TYPE(position_multiplier, int32);
    #endif//_position_multiplier__GUARD__

    #ifndef _strike_factor__GUARD__
    #define _strike_factor__GUARD__
    DECL_STRONG_TYPE(strike_factor, double);
    #endif//_strike_factor__GUARD__

    #ifndef _strike_multiplier__GUARD__
    #define _strike_multiplier__GUARD__
    DECL_STRONG_TYPE(strike_multiplier, double);
    #endif//_strike_multiplier__GUARD__

    #ifndef _strike_precision__GUARD__
    #define _strike_precision__GUARD__
    DECL_STRONG_TYPE(strike_precision, int32);
    #endif//_strike_precision__GUARD__

    #ifndef _corp_action_text__GUARD__
    #define _corp_action_text__GUARD__
    DECL_STRONG_TYPE(corp_action_text, string);
    #endif//_corp_action_text__GUARD__

    #ifndef _corp_action_type__GUARD__
    #define _corp_action_type__GUARD__
    DECL_STRONG_TYPE(corp_action_type, spiderrock::protobuf::api::CAType);
    #endif//_corp_action_type__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _ex_date__GUARD__
    #define _ex_date__GUARD__
    DECL_STRONG_TYPE(ex_date, DateKey);
    #endif//_ex_date__GUARD__

    
    class OptionCorpActionRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using root = spiderrock::protobuf::api::root;
        using ex_date = spiderrock::protobuf::api::ex_date;

        private:
        root m_root{};
        ex_date m_ex_date{};

        public:
		root get_root() const {
            return m_root;
        }
		ex_date get_ex_date() const {
            return m_ex_date;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        void set_ex_date(const ex_date& value)  {
            m_ex_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionCorpActionRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionCorpActionRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const root & value) { set_root(value); }
        void set(const ex_date & value) { set_ex_date(value); }


        OptionCorpActionRecordV5_PKey() {}

        virtual ~OptionCorpActionRecordV5_PKey() {
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
        bool IncludeRoot() const {
            return (m_root.ByteSizeLong() > 0);
        }
        bool IncludeExDate() const {
            return (m_ex_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_root);
            }
            if ( IncludeExDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(11, m_ex_date.get_year(), m_ex_date.get_month(), m_ex_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root;
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_root);
            }
            if ( IncludeExDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,11, m_ex_date.get_year(), m_ex_date.get_month(), m_ex_date.get_day());
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
                        m_root.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_ex_date.set_year(dateKey.year());
                        m_ex_date.set_month(dateKey.month());
                        m_ex_date.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    

    class OptionCorpActionRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionCorpActionRecordV5_PKey;
        using sod_root = spiderrock::protobuf::api::sod_root;
        using mark_multiplier = spiderrock::protobuf::api::mark_multiplier;
        using position_multiplier = spiderrock::protobuf::api::position_multiplier;
        using strike_factor = spiderrock::protobuf::api::strike_factor;
        using strike_multiplier = spiderrock::protobuf::api::strike_multiplier;
        using strike_precision = spiderrock::protobuf::api::strike_precision;
        using corp_action_text = spiderrock::protobuf::api::corp_action_text;
        using corp_action_type = spiderrock::protobuf::api::corp_action_type;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sod_root m_sod_root{};
        mark_multiplier m_mark_multiplier{};
        position_multiplier m_position_multiplier{};
        strike_factor m_strike_factor{};
        strike_multiplier m_strike_multiplier{};
        strike_precision m_strike_precision{};
        corp_action_text m_corp_action_text{};
        corp_action_type m_corp_action_type{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sod_root get_sod_root() const {
            return m_sod_root;
        }		
        mark_multiplier get_mark_multiplier() const {
            return m_mark_multiplier;
        }		
        position_multiplier get_position_multiplier() const {
            return m_position_multiplier;
        }		
        strike_factor get_strike_factor() const {
            return m_strike_factor;
        }		
        strike_multiplier get_strike_multiplier() const {
            return m_strike_multiplier;
        }		
        strike_precision get_strike_precision() const {
            return m_strike_precision;
        }		
        corp_action_text get_corp_action_text() const {
            return m_corp_action_text;
        }		
        corp_action_type get_corp_action_type() const {
            return m_corp_action_type;
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
        void set_sod_root(const sod_root& value)  {
            m_sod_root = value;
        }
        void set_mark_multiplier(const mark_multiplier& value)  {
            m_mark_multiplier = value;
        }
        void set_position_multiplier(const position_multiplier& value)  {
            m_position_multiplier = value;
        }
        void set_strike_factor(const strike_factor& value)  {
            m_strike_factor = value;
        }
        void set_strike_multiplier(const strike_multiplier& value)  {
            m_strike_multiplier = value;
        }
        void set_strike_precision(const strike_precision& value)  {
            m_strike_precision = value;
        }
        void set_corp_action_text(const corp_action_text& value)  {
            m_corp_action_text = value;
        }
        void set_corp_action_type(const corp_action_type& value)  {
            m_corp_action_type = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionCorpActionRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sod_root & value) {
            set_sod_root(value);
        }
        void set(const mark_multiplier & value) {
            set_mark_multiplier(value);
        }
        void set(const position_multiplier & value) {
            set_position_multiplier(value);
        }
        void set(const strike_factor & value) {
            set_strike_factor(value);
        }
        void set(const strike_multiplier & value) {
            set_strike_multiplier(value);
        }
        void set(const strike_precision & value) {
            set_strike_precision(value);
        }
        void set(const corp_action_text & value) {
            set_corp_action_text(value);
        }
        void set(const corp_action_type & value) {
            set_corp_action_type(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionCorpActionRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sod_root);
            set(value.m_mark_multiplier);
            set(value.m_position_multiplier);
            set(value.m_strike_factor);
            set(value.m_strike_multiplier);
            set(value.m_strike_precision);
            set(value.m_corp_action_text);
            set(value.m_corp_action_type);
            set(value.m_timestamp);
        }

        OptionCorpActionRecordV5() {
            m__meta.set_message_type("OptionCorpActionRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4795, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4795, length);
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
             *this = OptionCorpActionRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSodRoot() const {
            return (m_sod_root.ByteSizeLong() > 0);
        }
        bool IncludeMarkMultiplier() const {
            return !(m_mark_multiplier == 0.0);
        }
        bool IncludePositionMultiplier() const {
            return !(m_position_multiplier == 0);
        }
        bool IncludeStrikeFactor() const {
            return !(m_strike_factor == 0.0);
        }
        bool IncludeStrikeMultiplier() const {
            return !(m_strike_multiplier == 0.0);
        }
        bool IncludeStrikePrecision() const {
            return !(m_strike_precision == 0);
        }
        bool IncludeCorpActionText() const {
            return !(m_corp_action_text.empty());
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
            if ( IncludeSodRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_sod_root{};
                m_sod_root.setCodecTickerKey(tickerKeyLayout_sod_root);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_sod_root);
            }
            if ( IncludeMarkMultiplier()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_mark_multiplier);
            }
            if ( IncludePositionMultiplier()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_position_multiplier);
            }
            if ( IncludeStrikeFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_strike_factor);
            }
            if ( IncludeStrikeMultiplier()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_strike_multiplier);
            }
            if ( IncludeStrikePrecision()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_strike_precision);
            }
            if ( IncludeCorpActionText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_corp_action_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CAType>(m_corp_action_type)));
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
            if ( IncludeSodRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_sod_root{};
                m_sod_root.setCodecTickerKey(tickerKeyLayout_sod_root);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_sod_root);
            }
            if ( IncludeMarkMultiplier()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_mark_multiplier);
            }
            if ( IncludePositionMultiplier()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_position_multiplier);
            }
            if ( IncludeStrikeFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_strike_factor);
            }
            if ( IncludeStrikeMultiplier()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_strike_multiplier);
            }
            if ( IncludeStrikePrecision()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_strike_precision);
            }
            if ( IncludeCorpActionText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_corp_action_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CAType>(m_corp_action_type)));
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_sod_root.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_mark_multiplier = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_position_multiplier = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_factor = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_multiplier = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_strike_precision = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_corp_action_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_corp_action_type = static_cast<spiderrock::protobuf::api::CAType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::_meta>() const { return OptionCorpActionRecordV5::_meta{ m__meta}; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::pkey>() const { return OptionCorpActionRecordV5::pkey{ m_pkey}; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::sod_root>() const { return OptionCorpActionRecordV5::sod_root{ m_sod_root}; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::mark_multiplier>() const { return m_mark_multiplier; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::position_multiplier>() const { return m_position_multiplier; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::strike_factor>() const { return m_strike_factor; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::strike_multiplier>() const { return m_strike_multiplier; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::strike_precision>() const { return m_strike_precision; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::corp_action_text>() const { return m_corp_action_text; }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::corp_action_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CAType>( m_corp_action_type)); }
    template<> inline const auto OptionCorpActionRecordV5::get<OptionCorpActionRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionCorpActionRecordV5_PKey::get<OptionCorpActionRecordV5_PKey::root>() const { return OptionCorpActionRecordV5_PKey::root{m_root}; }
    template<> inline const auto OptionCorpActionRecordV5_PKey::get<OptionCorpActionRecordV5_PKey::ex_date>() const { return OptionCorpActionRecordV5_PKey::ex_date{m_ex_date}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionCorpActionRecordV5_PKey& m) {
        o << "\"root\":{" << m.get<OptionCorpActionRecordV5_PKey::root>() << "}";
        o << ",\"ex_date\":{" << m.get<OptionCorpActionRecordV5_PKey::ex_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionCorpActionRecordV5& m) {
        o << "\"_meta\":{" << m.get<OptionCorpActionRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionCorpActionRecordV5::pkey>() << "}";
        o << ",\"sod_root\":{" << m.get<OptionCorpActionRecordV5::sod_root>() << "}";
        o << ",\"mark_multiplier\":" << m.get<OptionCorpActionRecordV5::mark_multiplier>();
        o << ",\"position_multiplier\":" << m.get<OptionCorpActionRecordV5::position_multiplier>();
        o << ",\"strike_factor\":" << m.get<OptionCorpActionRecordV5::strike_factor>();
        o << ",\"strike_multiplier\":" << m.get<OptionCorpActionRecordV5::strike_multiplier>();
        o << ",\"strike_precision\":" << m.get<OptionCorpActionRecordV5::strike_precision>();
        o << ",\"corp_action_text\":\"" << m.get<OptionCorpActionRecordV5::corp_action_text>() << "\"";
        o << ",\"corp_action_type\":" << (int64_t)m.get<OptionCorpActionRecordV5::corp_action_type>();
        {
            std::time_t tt = m.get<OptionCorpActionRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}