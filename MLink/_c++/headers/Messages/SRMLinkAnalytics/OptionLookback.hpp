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

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _de__GUARD__
    #define _de__GUARD__
    DECL_STRONG_TYPE(de, float);
    #endif//_de__GUARD__

    #ifndef _ve__GUARD__
    #define _ve__GUARD__
    DECL_STRONG_TYPE(ve, float);
    #endif//_ve__GUARD__

    #ifndef _ema_bid_prc__GUARD__
    #define _ema_bid_prc__GUARD__
    DECL_STRONG_TYPE(ema_bid_prc, float);
    #endif//_ema_bid_prc__GUARD__

    #ifndef _ema_ask_prc__GUARD__
    #define _ema_ask_prc__GUARD__
    DECL_STRONG_TYPE(ema_ask_prc, float);
    #endif//_ema_ask_prc__GUARD__

    #ifndef _ema_bid_size__GUARD__
    #define _ema_bid_size__GUARD__
    DECL_STRONG_TYPE(ema_bid_size, float);
    #endif//_ema_bid_size__GUARD__

    #ifndef _ema_ask_size__GUARD__
    #define _ema_ask_size__GUARD__
    DECL_STRONG_TYPE(ema_ask_size, float);
    #endif//_ema_ask_size__GUARD__

    #ifndef _ema_sprc__GUARD__
    #define _ema_sprc__GUARD__
    DECL_STRONG_TYPE(ema_sprc, float);
    #endif//_ema_sprc__GUARD__

    #ifndef _ema_svol__GUARD__
    #define _ema_svol__GUARD__
    DECL_STRONG_TYPE(ema_svol, float);
    #endif//_ema_svol__GUARD__

    #ifndef _ema_sdiv__GUARD__
    #define _ema_sdiv__GUARD__
    DECL_STRONG_TYPE(ema_sdiv, float);
    #endif//_ema_sdiv__GUARD__

    #ifndef _ema_atm_vol__GUARD__
    #define _ema_atm_vol__GUARD__
    DECL_STRONG_TYPE(ema_atm_vol, float);
    #endif//_ema_atm_vol__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionLookback_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionLookback_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionLookback_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionLookback_PKey() {}

        virtual ~OptionLookback_PKey() {
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
    

    class OptionLookback {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionLookback_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using de = spiderrock::protobuf::api::de;
        using ve = spiderrock::protobuf::api::ve;
        using ema_bid_prc = spiderrock::protobuf::api::ema_bid_prc;
        using ema_ask_prc = spiderrock::protobuf::api::ema_ask_prc;
        using ema_bid_size = spiderrock::protobuf::api::ema_bid_size;
        using ema_ask_size = spiderrock::protobuf::api::ema_ask_size;
        using ema_sprc = spiderrock::protobuf::api::ema_sprc;
        using ema_svol = spiderrock::protobuf::api::ema_svol;
        using ema_sdiv = spiderrock::protobuf::api::ema_sdiv;
        using ema_atm_vol = spiderrock::protobuf::api::ema_atm_vol;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        u_prc m_u_prc{};
        de m_de{};
        ve m_ve{};
        ema_bid_prc m_ema_bid_prc{};
        ema_ask_prc m_ema_ask_prc{};
        ema_bid_size m_ema_bid_size{};
        ema_ask_size m_ema_ask_size{};
        ema_sprc m_ema_sprc{};
        ema_svol m_ema_svol{};
        ema_sdiv m_ema_sdiv{};
        ema_atm_vol m_ema_atm_vol{};
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
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        de get_de() const {
            return m_de;
        }		
        ve get_ve() const {
            return m_ve;
        }		
        ema_bid_prc get_ema_bid_prc() const {
            return m_ema_bid_prc;
        }		
        ema_ask_prc get_ema_ask_prc() const {
            return m_ema_ask_prc;
        }		
        ema_bid_size get_ema_bid_size() const {
            return m_ema_bid_size;
        }		
        ema_ask_size get_ema_ask_size() const {
            return m_ema_ask_size;
        }		
        ema_sprc get_ema_sprc() const {
            return m_ema_sprc;
        }		
        ema_svol get_ema_svol() const {
            return m_ema_svol;
        }		
        ema_sdiv get_ema_sdiv() const {
            return m_ema_sdiv;
        }		
        ema_atm_vol get_ema_atm_vol() const {
            return m_ema_atm_vol;
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
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_de(const de& value)  {
            m_de = value;
        }
        void set_ve(const ve& value)  {
            m_ve = value;
        }
        void set_ema_bid_prc(const ema_bid_prc& value)  {
            m_ema_bid_prc = value;
        }
        void set_ema_ask_prc(const ema_ask_prc& value)  {
            m_ema_ask_prc = value;
        }
        void set_ema_bid_size(const ema_bid_size& value)  {
            m_ema_bid_size = value;
        }
        void set_ema_ask_size(const ema_ask_size& value)  {
            m_ema_ask_size = value;
        }
        void set_ema_sprc(const ema_sprc& value)  {
            m_ema_sprc = value;
        }
        void set_ema_svol(const ema_svol& value)  {
            m_ema_svol = value;
        }
        void set_ema_sdiv(const ema_sdiv& value)  {
            m_ema_sdiv = value;
        }
        void set_ema_atm_vol(const ema_atm_vol& value)  {
            m_ema_atm_vol = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionLookback::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const de & value) {
            set_de(value);
        }
        void set(const ve & value) {
            set_ve(value);
        }
        void set(const ema_bid_prc & value) {
            set_ema_bid_prc(value);
        }
        void set(const ema_ask_prc & value) {
            set_ema_ask_prc(value);
        }
        void set(const ema_bid_size & value) {
            set_ema_bid_size(value);
        }
        void set(const ema_ask_size & value) {
            set_ema_ask_size(value);
        }
        void set(const ema_sprc & value) {
            set_ema_sprc(value);
        }
        void set(const ema_svol & value) {
            set_ema_svol(value);
        }
        void set(const ema_sdiv & value) {
            set_ema_sdiv(value);
        }
        void set(const ema_atm_vol & value) {
            set_ema_atm_vol(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionLookback & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_u_prc);
            set(value.m_de);
            set(value.m_ve);
            set(value.m_ema_bid_prc);
            set(value.m_ema_ask_prc);
            set(value.m_ema_bid_size);
            set(value.m_ema_ask_size);
            set(value.m_ema_sprc);
            set(value.m_ema_svol);
            set(value.m_ema_sdiv);
            set(value.m_ema_atm_vol);
            set(value.m_timestamp);
        }

        OptionLookback() {
            m__meta.set_message_type("OptionLookback");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1090, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1090, length);
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
             *this = OptionLookback{};
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
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeDe() const {
            return !(m_de == 0.0);
        }
        bool IncludeVe() const {
            return !(m_ve == 0.0);
        }
        bool IncludeEmaBidPrc() const {
            return !(m_ema_bid_prc == 0.0);
        }
        bool IncludeEmaAskPrc() const {
            return !(m_ema_ask_prc == 0.0);
        }
        bool IncludeEmaBidSize() const {
            return !(m_ema_bid_size == 0.0);
        }
        bool IncludeEmaAskSize() const {
            return !(m_ema_ask_size == 0.0);
        }
        bool IncludeEmaSprc() const {
            return !(m_ema_sprc == 0.0);
        }
        bool IncludeEmaSvol() const {
            return !(m_ema_svol == 0.0);
        }
        bool IncludeEmaSdiv() const {
            return !(m_ema_sdiv == 0.0);
        }
        bool IncludeEmaAtmVol() const {
            return !(m_ema_atm_vol == 0.0);
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
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_u_prc);
            }
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_de);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_ve);
            }
            if ( IncludeEmaBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_ema_bid_prc);
            }
            if ( IncludeEmaAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ema_ask_prc);
            }
            if ( IncludeEmaBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ema_bid_size);
            }
            if ( IncludeEmaAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ema_ask_size);
            }
            if ( IncludeEmaSprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_ema_sprc);
            }
            if ( IncludeEmaSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_ema_svol);
            }
            if ( IncludeEmaSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_ema_sdiv);
            }
            if ( IncludeEmaAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_ema_atm_vol);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_u_prc);
            }
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_de);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_ve);
            }
            if ( IncludeEmaBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_ema_bid_prc);
            }
            if ( IncludeEmaAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ema_ask_prc);
            }
            if ( IncludeEmaBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ema_bid_size);
            }
            if ( IncludeEmaAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ema_ask_size);
            }
            if ( IncludeEmaSprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_ema_sprc);
            }
            if ( IncludeEmaSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_ema_svol);
            }
            if ( IncludeEmaSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_ema_sdiv);
            }
            if ( IncludeEmaAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_ema_atm_vol);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_bid_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_ask_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_sprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ema_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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

    template<> inline const auto OptionLookback::get<OptionLookback::_meta>() const { return OptionLookback::_meta{ m__meta}; }
    template<> inline const auto OptionLookback::get<OptionLookback::pkey>() const { return OptionLookback::pkey{ m_pkey}; }
    template<> inline const auto OptionLookback::get<OptionLookback::trade_date>() const { return OptionLookback::trade_date{ m_trade_date}; }
    template<> inline const auto OptionLookback::get<OptionLookback::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionLookback::get<OptionLookback::de>() const { return m_de; }
    template<> inline const auto OptionLookback::get<OptionLookback::ve>() const { return m_ve; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_bid_prc>() const { return m_ema_bid_prc; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_ask_prc>() const { return m_ema_ask_prc; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_bid_size>() const { return m_ema_bid_size; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_ask_size>() const { return m_ema_ask_size; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_sprc>() const { return m_ema_sprc; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_svol>() const { return m_ema_svol; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_sdiv>() const { return m_ema_sdiv; }
    template<> inline const auto OptionLookback::get<OptionLookback::ema_atm_vol>() const { return m_ema_atm_vol; }
    template<> inline const auto OptionLookback::get<OptionLookback::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionLookback_PKey::get<OptionLookback_PKey::okey>() const { return OptionLookback_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionLookback_PKey& m) {
        o << "\"okey\":{" << m.get<OptionLookback_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionLookback& m) {
        o << "\"_meta\":{" << m.get<OptionLookback::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionLookback::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<OptionLookback::trade_date>() << "}";
        o << ",\"u_prc\":" << m.get<OptionLookback::u_prc>();
        o << ",\"de\":" << m.get<OptionLookback::de>();
        o << ",\"ve\":" << m.get<OptionLookback::ve>();
        o << ",\"ema_bid_prc\":" << m.get<OptionLookback::ema_bid_prc>();
        o << ",\"ema_ask_prc\":" << m.get<OptionLookback::ema_ask_prc>();
        o << ",\"ema_bid_size\":" << m.get<OptionLookback::ema_bid_size>();
        o << ",\"ema_ask_size\":" << m.get<OptionLookback::ema_ask_size>();
        o << ",\"ema_sprc\":" << m.get<OptionLookback::ema_sprc>();
        o << ",\"ema_svol\":" << m.get<OptionLookback::ema_svol>();
        o << ",\"ema_sdiv\":" << m.get<OptionLookback::ema_sdiv>();
        o << ",\"ema_atm_vol\":" << m.get<OptionLookback::ema_atm_vol>();
        {
            std::time_t tt = m.get<OptionLookback::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}