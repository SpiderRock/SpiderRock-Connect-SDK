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

    #ifndef _cls_mark_state__GUARD__
    #define _cls_mark_state__GUARD__
    DECL_STRONG_TYPE(cls_mark_state, spiderrock::protobuf::api::ClsMarkState);
    #endif//_cls_mark_state__GUARD__

    #ifndef _opn_prc__double__GUARD__
    #define _opn_prc__double__GUARD__
    DECL_STRONG_TYPE(opn_prc__double, double);
    #endif//_opn_prc__double__GUARD__

    #ifndef _min_prc__double__GUARD__
    #define _min_prc__double__GUARD__
    DECL_STRONG_TYPE(min_prc__double, double);
    #endif//_min_prc__double__GUARD__

    #ifndef _max_prc__double__GUARD__
    #define _max_prc__double__GUARD__
    DECL_STRONG_TYPE(max_prc__double, double);
    #endif//_max_prc__double__GUARD__

    #ifndef _prt_count__GUARD__
    #define _prt_count__GUARD__
    DECL_STRONG_TYPE(prt_count, int32);
    #endif//_prt_count__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _avg_mkt_size__double__GUARD__
    #define _avg_mkt_size__double__GUARD__
    DECL_STRONG_TYPE(avg_mkt_size__double, double);
    #endif//_avg_mkt_size__double__GUARD__

    #ifndef _avg_mkt_width__double__GUARD__
    #define _avg_mkt_width__double__GUARD__
    DECL_STRONG_TYPE(avg_mkt_width__double, double);
    #endif//_avg_mkt_width__double__GUARD__

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

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _skey__GUARD__
    #define _skey__GUARD__
    DECL_STRONG_TYPE(skey, TickerKey);
    #endif//_skey__GUARD__

    
    class SpreadCloseMark_PKey {
        public:
        //using statements for all types used in this class
        using skey = spiderrock::protobuf::api::skey;

        private:
        skey m_skey{};

        public:
		skey get_skey() const {
            return m_skey;
        }
        void set_skey(const skey& value)  {
            m_skey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadCloseMark_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadCloseMark_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const skey & value) { set_skey(value); }


        SpreadCloseMark_PKey() {}

        virtual ~SpreadCloseMark_PKey() {
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
        bool IncludeSkey() const {
            return (m_skey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
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
                        m_skey.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadCloseMark {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadCloseMark_PKey;
        using cls_mark_state = spiderrock::protobuf::api::cls_mark_state;
        using opn_prc = spiderrock::protobuf::api::opn_prc__double;
        using min_prc = spiderrock::protobuf::api::min_prc__double;
        using max_prc = spiderrock::protobuf::api::max_prc__double;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using avg_mkt_size = spiderrock::protobuf::api::avg_mkt_size__double;
        using avg_mkt_width = spiderrock::protobuf::api::avg_mkt_width__double;
        using bid_prc = spiderrock::protobuf::api::bid_prc__double;
        using ask_prc = spiderrock::protobuf::api::ask_prc__double;
        using sr_cls_prc = spiderrock::protobuf::api::sr_cls_prc__double;
        using close_prc = spiderrock::protobuf::api::close_prc__double;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        cls_mark_state m_cls_mark_state{};
        opn_prc m_opn_prc{};
        min_prc m_min_prc{};
        max_prc m_max_prc{};
        prt_count m_prt_count{};
        prt_volume m_prt_volume{};
        avg_mkt_size m_avg_mkt_size{};
        avg_mkt_width m_avg_mkt_width{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        sr_cls_prc m_sr_cls_prc{};
        close_prc m_close_prc{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        cls_mark_state get_cls_mark_state() const {
            return m_cls_mark_state;
        }		
        opn_prc get_opn_prc() const {
            return m_opn_prc;
        }		
        min_prc get_min_prc() const {
            return m_min_prc;
        }		
        max_prc get_max_prc() const {
            return m_max_prc;
        }		
        prt_count get_prt_count() const {
            return m_prt_count;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        avg_mkt_size get_avg_mkt_size() const {
            return m_avg_mkt_size;
        }		
        avg_mkt_width get_avg_mkt_width() const {
            return m_avg_mkt_width;
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
        void set_cls_mark_state(const cls_mark_state& value)  {
            m_cls_mark_state = value;
        }
        void set_opn_prc(const opn_prc& value)  {
            m_opn_prc = value;
        }
        void set_min_prc(const min_prc& value)  {
            m_min_prc = value;
        }
        void set_max_prc(const max_prc& value)  {
            m_max_prc = value;
        }
        void set_prt_count(const prt_count& value)  {
            m_prt_count = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_avg_mkt_size(const avg_mkt_size& value)  {
            m_avg_mkt_size = value;
        }
        void set_avg_mkt_width(const avg_mkt_width& value)  {
            m_avg_mkt_width = value;
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
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadCloseMark::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const cls_mark_state & value) {
            set_cls_mark_state(value);
        }
        void set(const opn_prc & value) {
            set_opn_prc(value);
        }
        void set(const min_prc & value) {
            set_min_prc(value);
        }
        void set(const max_prc & value) {
            set_max_prc(value);
        }
        void set(const prt_count & value) {
            set_prt_count(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const avg_mkt_size & value) {
            set_avg_mkt_size(value);
        }
        void set(const avg_mkt_width & value) {
            set_avg_mkt_width(value);
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
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpreadCloseMark & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_cls_mark_state);
            set(value.m_opn_prc);
            set(value.m_min_prc);
            set(value.m_max_prc);
            set(value.m_prt_count);
            set(value.m_prt_volume);
            set(value.m_avg_mkt_size);
            set(value.m_avg_mkt_width);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_sr_cls_prc);
            set(value.m_close_prc);
            set(value.m_timestamp);
        }

        SpreadCloseMark() {
            m__meta.set_message_type("SpreadCloseMark");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3155, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3155, length);
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
             *this = SpreadCloseMark{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOpnPrc() const {
            return !(m_opn_prc == 0.0);
        }
        bool IncludeMinPrc() const {
            return !(m_min_prc == 0.0);
        }
        bool IncludeMaxPrc() const {
            return !(m_max_prc == 0.0);
        }
        bool IncludePrtCount() const {
            return !(m_prt_count == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeAvgMktSize() const {
            return !(m_avg_mkt_size == 0.0);
        }
        bool IncludeAvgMktWidth() const {
            return !(m_avg_mkt_width == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeOpnPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_opn_prc);
            }
            if ( IncludeMinPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_min_prc);
            }
            if ( IncludeMaxPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_max_prc);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_prt_volume);
            }
            if ( IncludeAvgMktSize()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_avg_mkt_size);
            }
            if ( IncludeAvgMktWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_avg_mkt_width);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_close_prc);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeOpnPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_opn_prc);
            }
            if ( IncludeMinPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_min_prc);
            }
            if ( IncludeMaxPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_max_prc);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_prt_volume);
            }
            if ( IncludeAvgMktSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_avg_mkt_size);
            }
            if ( IncludeAvgMktWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_avg_mkt_width);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_close_prc);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_timestamp);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cls_mark_state = static_cast<spiderrock::protobuf::api::ClsMarkState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_mkt_size = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_mkt_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sr_cls_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_close_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
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

    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::_meta>() const { return SpreadCloseMark::_meta{ m__meta}; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::pkey>() const { return SpreadCloseMark::pkey{ m_pkey}; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::cls_mark_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>( m_cls_mark_state)); }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::opn_prc>() const { return m_opn_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::min_prc>() const { return m_min_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::max_prc>() const { return m_max_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::prt_count>() const { return m_prt_count; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::avg_mkt_size>() const { return m_avg_mkt_size; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::avg_mkt_width>() const { return m_avg_mkt_width; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::sr_cls_prc>() const { return m_sr_cls_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::close_prc>() const { return m_close_prc; }
    template<> inline const auto SpreadCloseMark::get<SpreadCloseMark::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadCloseMark_PKey::get<SpreadCloseMark_PKey::skey>() const { return SpreadCloseMark_PKey::skey{m_skey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadCloseMark_PKey& m) {
        o << "\"skey\":{" << m.get<SpreadCloseMark_PKey::skey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadCloseMark& m) {
        o << "\"_meta\":{" << m.get<SpreadCloseMark::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadCloseMark::pkey>() << "}";
        o << ",\"cls_mark_state\":" << (int64_t)m.get<SpreadCloseMark::cls_mark_state>();
        o << ",\"opn_prc\":" << m.get<SpreadCloseMark::opn_prc>();
        o << ",\"min_prc\":" << m.get<SpreadCloseMark::min_prc>();
        o << ",\"max_prc\":" << m.get<SpreadCloseMark::max_prc>();
        o << ",\"prt_count\":" << m.get<SpreadCloseMark::prt_count>();
        o << ",\"prt_volume\":" << m.get<SpreadCloseMark::prt_volume>();
        o << ",\"avg_mkt_size\":" << m.get<SpreadCloseMark::avg_mkt_size>();
        o << ",\"avg_mkt_width\":" << m.get<SpreadCloseMark::avg_mkt_width>();
        o << ",\"bid_prc\":" << m.get<SpreadCloseMark::bid_prc>();
        o << ",\"ask_prc\":" << m.get<SpreadCloseMark::ask_prc>();
        o << ",\"sr_cls_prc\":" << m.get<SpreadCloseMark::sr_cls_prc>();
        o << ",\"close_prc\":" << m.get<SpreadCloseMark::close_prc>();
        {
            std::time_t tt = m.get<SpreadCloseMark::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}