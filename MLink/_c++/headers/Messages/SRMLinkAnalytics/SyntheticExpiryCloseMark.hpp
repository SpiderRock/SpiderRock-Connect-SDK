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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _cls_mark_state__GUARD__
    #define _cls_mark_state__GUARD__
    DECL_STRONG_TYPE(cls_mark_state, spiderrock::protobuf::api::ClsMarkState);
    #endif//_cls_mark_state__GUARD__

    #ifndef _opn_prc__double__GUARD__
    #define _opn_prc__double__GUARD__
    DECL_STRONG_TYPE(opn_prc__double, double);
    #endif//_opn_prc__double__GUARD__

    #ifndef _bid_prc__double__GUARD__
    #define _bid_prc__double__GUARD__
    DECL_STRONG_TYPE(bid_prc__double, double);
    #endif//_bid_prc__double__GUARD__

    #ifndef _ask_prc__double__GUARD__
    #define _ask_prc__double__GUARD__
    DECL_STRONG_TYPE(ask_prc__double, double);
    #endif//_ask_prc__double__GUARD__

    #ifndef _sr_cls_prc__double__GUARD__
    #define _sr_cls_prc__double__GUARD__
    DECL_STRONG_TYPE(sr_cls_prc__double, double);
    #endif//_sr_cls_prc__double__GUARD__

    #ifndef _close_prc__double__GUARD__
    #define _close_prc__double__GUARD__
    DECL_STRONG_TYPE(close_prc__double, double);
    #endif//_close_prc__double__GUARD__

    #ifndef _has_srcls_prc__GUARD__
    #define _has_srcls_prc__GUARD__
    DECL_STRONG_TYPE(has_srcls_prc, spiderrock::protobuf::api::YesNo);
    #endif//_has_srcls_prc__GUARD__

    #ifndef _has_close_prc__GUARD__
    #define _has_close_prc__GUARD__
    DECL_STRONG_TYPE(has_close_prc, spiderrock::protobuf::api::YesNo);
    #endif//_has_close_prc__GUARD__

    #ifndef _sr_close_mark_dttm__GUARD__
    #define _sr_close_mark_dttm__GUARD__
    DECL_STRONG_TYPE(sr_close_mark_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_sr_close_mark_dttm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    
    class SyntheticExpiryCloseMark_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SyntheticExpiryCloseMark_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SyntheticExpiryCloseMark_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }


        SyntheticExpiryCloseMark_PKey() {}

        virtual ~SyntheticExpiryCloseMark_PKey() {
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
    

    class SyntheticExpiryCloseMark {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SyntheticExpiryCloseMark_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using cls_mark_state = spiderrock::protobuf::api::cls_mark_state;
        using opn_prc = spiderrock::protobuf::api::opn_prc__double;
        using bid_prc = spiderrock::protobuf::api::bid_prc__double;
        using ask_prc = spiderrock::protobuf::api::ask_prc__double;
        using sr_cls_prc = spiderrock::protobuf::api::sr_cls_prc__double;
        using close_prc = spiderrock::protobuf::api::close_prc__double;
        using has_srcls_prc = spiderrock::protobuf::api::has_srcls_prc;
        using has_close_prc = spiderrock::protobuf::api::has_close_prc;
        using sr_close_mark_dttm = spiderrock::protobuf::api::sr_close_mark_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        cls_mark_state m_cls_mark_state{};
        opn_prc m_opn_prc{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        sr_cls_prc m_sr_cls_prc{};
        close_prc m_close_prc{};
        has_srcls_prc m_has_srcls_prc{};
        has_close_prc m_has_close_prc{};
        sr_close_mark_dttm m_sr_close_mark_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        cls_mark_state get_cls_mark_state() const {
            return m_cls_mark_state;
        }		
        opn_prc get_opn_prc() const {
            return m_opn_prc;
        }		
        bid_prc get_bid_prc() const {
            return m_bid_prc;
        }		
        ask_prc get_ask_prc() const {
            return m_ask_prc;
        }		
        sr_cls_prc get_sr_cls_prc() const {
            return m_sr_cls_prc;
        }		
        close_prc get_close_prc() const {
            return m_close_prc;
        }		
        has_srcls_prc get_has_srcls_prc() const {
            return m_has_srcls_prc;
        }		
        has_close_prc get_has_close_prc() const {
            return m_has_close_prc;
        }		
        sr_close_mark_dttm get_sr_close_mark_dttm() const {
            return m_sr_close_mark_dttm;
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_cls_mark_state(const cls_mark_state& value)  {
            m_cls_mark_state = value;
        }
        void set_opn_prc(const opn_prc& value)  {
            m_opn_prc = value;
        }
        void set_bid_prc(const bid_prc& value)  {
            m_bid_prc = value;
        }
        void set_ask_prc(const ask_prc& value)  {
            m_ask_prc = value;
        }
        void set_sr_cls_prc(const sr_cls_prc& value)  {
            m_sr_cls_prc = value;
        }
        void set_close_prc(const close_prc& value)  {
            m_close_prc = value;
        }
        void set_has_srcls_prc(const has_srcls_prc& value)  {
            m_has_srcls_prc = value;
        }
        void set_has_close_prc(const has_close_prc& value)  {
            m_has_close_prc = value;
        }
        void set_sr_close_mark_dttm(const sr_close_mark_dttm& value)  {
            m_sr_close_mark_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SyntheticExpiryCloseMark::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const cls_mark_state & value) {
            set_cls_mark_state(value);
        }
        void set(const opn_prc & value) {
            set_opn_prc(value);
        }
        void set(const bid_prc & value) {
            set_bid_prc(value);
        }
        void set(const ask_prc & value) {
            set_ask_prc(value);
        }
        void set(const sr_cls_prc & value) {
            set_sr_cls_prc(value);
        }
        void set(const close_prc & value) {
            set_close_prc(value);
        }
        void set(const has_srcls_prc & value) {
            set_has_srcls_prc(value);
        }
        void set(const has_close_prc & value) {
            set_has_close_prc(value);
        }
        void set(const sr_close_mark_dttm & value) {
            set_sr_close_mark_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SyntheticExpiryCloseMark & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_cls_mark_state);
            set(value.m_opn_prc);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_sr_cls_prc);
            set(value.m_close_prc);
            set(value.m_has_srcls_prc);
            set(value.m_has_close_prc);
            set(value.m_sr_close_mark_dttm);
            set(value.m_timestamp);
        }

        SyntheticExpiryCloseMark() {
            m__meta.set_message_type("SyntheticExpiryCloseMark");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3175, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3175, length);
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
             *this = SyntheticExpiryCloseMark{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeOpnPrc() const {
            return !(m_opn_prc == 0.0);
        }
        bool IncludeBidPrc() const {
            return !(m_bid_prc == 0.0);
        }
        bool IncludeAskPrc() const {
            return !(m_ask_prc == 0.0);
        }
        bool IncludeSrClsPrc() const {
            return !(m_sr_cls_prc == 0.0);
        }
        bool IncludeClosePrc() const {
            return !(m_close_prc == 0.0);
        }
        bool IncludeSrCloseMarkDttm() const {
            return (m_sr_close_mark_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeOpnPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_opn_prc);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_close_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_srcls_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_close_prc)));
            if ( IncludeSrCloseMarkDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_sr_close_mark_dttm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(130, m_timestamp);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeOpnPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_opn_prc);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_close_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_srcls_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_close_prc)));
            if ( IncludeSrCloseMarkDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_sr_close_mark_dttm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 130, m_timestamp);
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
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cls_mark_state = static_cast<spiderrock::protobuf::api::ClsMarkState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sr_cls_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_close_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_srcls_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_close_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_sr_close_mark_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
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

    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::_meta>() const { return SyntheticExpiryCloseMark::_meta{ m__meta}; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::pkey>() const { return SyntheticExpiryCloseMark::pkey{ m_pkey}; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::trade_date>() const { return SyntheticExpiryCloseMark::trade_date{ m_trade_date}; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::cls_mark_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>( m_cls_mark_state)); }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::opn_prc>() const { return m_opn_prc; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::sr_cls_prc>() const { return m_sr_cls_prc; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::close_prc>() const { return m_close_prc; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::has_srcls_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_srcls_prc)); }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::has_close_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_close_prc)); }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::sr_close_mark_dttm>() const { return m_sr_close_mark_dttm; }
    template<> inline const auto SyntheticExpiryCloseMark::get<SyntheticExpiryCloseMark::timestamp>() const { return m_timestamp; }
    template<> inline const auto SyntheticExpiryCloseMark_PKey::get<SyntheticExpiryCloseMark_PKey::ekey>() const { return SyntheticExpiryCloseMark_PKey::ekey{m_ekey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SyntheticExpiryCloseMark_PKey& m) {
        o << "\"ekey\":{" << m.get<SyntheticExpiryCloseMark_PKey::ekey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SyntheticExpiryCloseMark& m) {
        o << "\"_meta\":{" << m.get<SyntheticExpiryCloseMark::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SyntheticExpiryCloseMark::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<SyntheticExpiryCloseMark::trade_date>() << "}";
        o << ",\"cls_mark_state\":" << (int64_t)m.get<SyntheticExpiryCloseMark::cls_mark_state>();
        o << ",\"opn_prc\":" << m.get<SyntheticExpiryCloseMark::opn_prc>();
        o << ",\"bid_prc\":" << m.get<SyntheticExpiryCloseMark::bid_prc>();
        o << ",\"ask_prc\":" << m.get<SyntheticExpiryCloseMark::ask_prc>();
        o << ",\"sr_cls_prc\":" << m.get<SyntheticExpiryCloseMark::sr_cls_prc>();
        o << ",\"close_prc\":" << m.get<SyntheticExpiryCloseMark::close_prc>();
        o << ",\"has_srcls_prc\":" << (int64_t)m.get<SyntheticExpiryCloseMark::has_srcls_prc>();
        o << ",\"has_close_prc\":" << (int64_t)m.get<SyntheticExpiryCloseMark::has_close_prc>();
        {
            std::time_t tt = m.get<SyntheticExpiryCloseMark::sr_close_mark_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"sr_close_mark_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SyntheticExpiryCloseMark::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}