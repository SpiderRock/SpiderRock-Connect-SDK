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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _ticker_desc__GUARD__
    #define _ticker_desc__GUARD__
    DECL_STRONG_TYPE(ticker_desc, string);
    #endif//_ticker_desc__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

    #ifndef _early_session_close__GUARD__
    #define _early_session_close__GUARD__
    DECL_STRONG_TYPE(early_session_close, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_early_session_close__GUARD__

    #ifndef _reg_session_close__GUARD__
    #define _reg_session_close__GUARD__
    DECL_STRONG_TYPE(reg_session_close, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_reg_session_close__GUARD__

    #ifndef _late_session_close__GUARD__
    #define _late_session_close__GUARD__
    DECL_STRONG_TYPE(late_session_close, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_late_session_close__GUARD__

    #ifndef _is_hedge_sec_ok__GUARD__
    #define _is_hedge_sec_ok__GUARD__
    DECL_STRONG_TYPE(is_hedge_sec_ok, spiderrock::protobuf::api::YesNo);
    #endif//_is_hedge_sec_ok__GUARD__

    #ifndef _hedge_sec_error__GUARD__
    #define _hedge_sec_error__GUARD__
    DECL_STRONG_TYPE(hedge_sec_error, string);
    #endif//_hedge_sec_error__GUARD__

    #ifndef _hedge_umid_prc__GUARD__
    #define _hedge_umid_prc__GUARD__
    DECL_STRONG_TYPE(hedge_umid_prc, double);
    #endif//_hedge_umid_prc__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _target_sec_key__GUARD__
    #define _target_sec_key__GUARD__
    DECL_STRONG_TYPE(target_sec_key, ExpiryKey);
    #endif//_target_sec_key__GUARD__

    #ifndef _target_sec_type__GUARD__
    #define _target_sec_type__GUARD__
    DECL_STRONG_TYPE(target_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_target_sec_type__GUARD__

    #ifndef _hedge_target_type__GUARD__
    #define _hedge_target_type__GUARD__
    DECL_STRONG_TYPE(hedge_target_type, spiderrock::protobuf::api::HedgeTargetType);
    #endif//_hedge_target_type__GUARD__

    
    class AutoHedgeSymbol_PKey {
        public:
        //using statements for all types used in this class
        using target_sec_key = spiderrock::protobuf::api::target_sec_key;
        using target_sec_type = spiderrock::protobuf::api::target_sec_type;
        using hedge_target_type = spiderrock::protobuf::api::hedge_target_type;

        private:
        target_sec_key m_target_sec_key{};
        target_sec_type m_target_sec_type{};
        hedge_target_type m_hedge_target_type{};

        public:
		target_sec_key get_target_sec_key() const {
            return m_target_sec_key;
        }
        target_sec_type get_target_sec_type() const {
            return m_target_sec_type;
        }
        hedge_target_type get_hedge_target_type() const {
            return m_hedge_target_type;
        }
        void set_target_sec_key(const target_sec_key& value)  {
            m_target_sec_key = value;
        }
        void set_target_sec_type(const target_sec_type& value)  {
            m_target_sec_type = value;
        }
        void set_hedge_target_type(const hedge_target_type& value)  {
            m_hedge_target_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoHedgeSymbol_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoHedgeSymbol_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const target_sec_key & value) { set_target_sec_key(value); }
        void set(const target_sec_type & value) { set_target_sec_type(value); }
        void set(const hedge_target_type & value) { set_hedge_target_type(value); }


        AutoHedgeSymbol_PKey() {}

        virtual ~AutoHedgeSymbol_PKey() {
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
        bool IncludeTargetSecKey() const {
            return (m_target_sec_key.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTargetSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_target_sec_key;
                m_target_sec_key.setCodecExpiryKey(expiryKeyLayout_target_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_target_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_target_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeTargetType>(m_hedge_target_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTargetSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_target_sec_key;
                m_target_sec_key.setCodecExpiryKey(expiryKeyLayout_target_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_target_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_target_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeTargetType>(m_hedge_target_type)));
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
                        m_target_sec_key.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_target_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_hedge_target_type = static_cast<spiderrock::protobuf::api::HedgeTargetType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class AutoHedgeSymbol {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AutoHedgeSymbol_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using ticker_desc = spiderrock::protobuf::api::ticker_desc;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using early_session_close = spiderrock::protobuf::api::early_session_close;
        using reg_session_close = spiderrock::protobuf::api::reg_session_close;
        using late_session_close = spiderrock::protobuf::api::late_session_close;
        using is_hedge_sec_ok = spiderrock::protobuf::api::is_hedge_sec_ok;
        using hedge_sec_error = spiderrock::protobuf::api::hedge_sec_error;
        using hedge_umid_prc = spiderrock::protobuf::api::hedge_umid_prc;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        ticker_desc m_ticker_desc{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        early_session_close m_early_session_close{};
        reg_session_close m_reg_session_close{};
        late_session_close m_late_session_close{};
        is_hedge_sec_ok m_is_hedge_sec_ok{};
        hedge_sec_error m_hedge_sec_error{};
        hedge_umid_prc m_hedge_umid_prc{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        ticker_desc get_ticker_desc() const {
            return m_ticker_desc;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
        }		
        early_session_close get_early_session_close() const {
            return m_early_session_close;
        }		
        reg_session_close get_reg_session_close() const {
            return m_reg_session_close;
        }		
        late_session_close get_late_session_close() const {
            return m_late_session_close;
        }		
        is_hedge_sec_ok get_is_hedge_sec_ok() const {
            return m_is_hedge_sec_ok;
        }		
        hedge_sec_error get_hedge_sec_error() const {
            return m_hedge_sec_error;
        }		
        hedge_umid_prc get_hedge_umid_prc() const {
            return m_hedge_umid_prc;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_ticker_desc(const ticker_desc& value)  {
            m_ticker_desc = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
        }
        void set_early_session_close(const early_session_close& value)  {
            m_early_session_close = value;
        }
        void set_reg_session_close(const reg_session_close& value)  {
            m_reg_session_close = value;
        }
        void set_late_session_close(const late_session_close& value)  {
            m_late_session_close = value;
        }
        void set_is_hedge_sec_ok(const is_hedge_sec_ok& value)  {
            m_is_hedge_sec_ok = value;
        }
        void set_hedge_sec_error(const hedge_sec_error& value)  {
            m_hedge_sec_error = value;
        }
        void set_hedge_umid_prc(const hedge_umid_prc& value)  {
            m_hedge_umid_prc = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoHedgeSymbol::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const ticker_desc & value) {
            set_ticker_desc(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_sec_type & value) {
            set_hedge_sec_type(value);
        }
        void set(const early_session_close & value) {
            set_early_session_close(value);
        }
        void set(const reg_session_close & value) {
            set_reg_session_close(value);
        }
        void set(const late_session_close & value) {
            set_late_session_close(value);
        }
        void set(const is_hedge_sec_ok & value) {
            set_is_hedge_sec_ok(value);
        }
        void set(const hedge_sec_error & value) {
            set_hedge_sec_error(value);
        }
        void set(const hedge_umid_prc & value) {
            set_hedge_umid_prc(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const AutoHedgeSymbol & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_ticker_desc);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_early_session_close);
            set(value.m_reg_session_close);
            set(value.m_late_session_close);
            set(value.m_is_hedge_sec_ok);
            set(value.m_hedge_sec_error);
            set(value.m_hedge_umid_prc);
            set(value.m_timestamp);
        }

        AutoHedgeSymbol() {
            m__meta.set_message_type("AutoHedgeSymbol");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 5290, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 5290, length);
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
             *this = AutoHedgeSymbol{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeTickerDesc() const {
            return !(m_ticker_desc.empty());
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeEarlySessionClose() const {
            return (m_early_session_close.time_since_epoch().count() != 0);
        }
        bool IncludeRegSessionClose() const {
            return (m_reg_session_close.time_since_epoch().count() != 0);
        }
        bool IncludeLateSessionClose() const {
            return (m_late_session_close.time_since_epoch().count() != 0);
        }
        bool IncludeHedgeSecError() const {
            return !(m_hedge_sec_error.empty());
        }
        bool IncludeHedgeUmidPrc() const {
            return !(m_hedge_umid_prc == 0.0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeTickerDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_ticker_desc);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(106, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeEarlySessionClose()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(129, m_early_session_close);
            }
            if ( IncludeRegSessionClose()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(130, m_reg_session_close);
            }
            if ( IncludeLateSessionClose()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(131, m_late_session_close);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_hedge_sec_ok)));
            if ( IncludeHedgeSecError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_hedge_sec_error);
            }
            if ( IncludeHedgeUmidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(128,m_hedge_umid_prc);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            if ( IncludeTickerDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_ticker_desc));
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 106, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeEarlySessionClose()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 129, m_early_session_close);
            }
            if ( IncludeRegSessionClose()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 130, m_reg_session_close);
            }
            if ( IncludeLateSessionClose()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 131, m_late_session_close);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_hedge_sec_ok)));
            if ( IncludeHedgeSecError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_hedge_sec_error));
            }
            if ( IncludeHedgeUmidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,128,m_hedge_umid_prc);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_timestamp);
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
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ticker_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_early_session_close = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_reg_session_close = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_late_session_close = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_hedge_sec_ok = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_hedge_sec_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_hedge_umid_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
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

    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::_meta>() const { return AutoHedgeSymbol::_meta{ m__meta}; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::pkey>() const { return AutoHedgeSymbol::pkey{ m_pkey}; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::ticker>() const { return AutoHedgeSymbol::ticker{ m_ticker}; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::ticker_desc>() const { return m_ticker_desc; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::hedge_sec_key>() const { return AutoHedgeSymbol::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::early_session_close>() const { return m_early_session_close; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::reg_session_close>() const { return m_reg_session_close; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::late_session_close>() const { return m_late_session_close; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::is_hedge_sec_ok>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_hedge_sec_ok)); }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::hedge_sec_error>() const { return m_hedge_sec_error; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::hedge_umid_prc>() const { return m_hedge_umid_prc; }
    template<> inline const auto AutoHedgeSymbol::get<AutoHedgeSymbol::timestamp>() const { return m_timestamp; }
    template<> inline const auto AutoHedgeSymbol_PKey::get<AutoHedgeSymbol_PKey::target_sec_key>() const { return AutoHedgeSymbol_PKey::target_sec_key{m_target_sec_key}; }
    template<> inline const auto AutoHedgeSymbol_PKey::get<AutoHedgeSymbol_PKey::target_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_target_sec_type));}
    template<> inline const auto AutoHedgeSymbol_PKey::get<AutoHedgeSymbol_PKey::hedge_target_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeTargetType>(m_hedge_target_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AutoHedgeSymbol_PKey& m) {
        o << "\"target_sec_key\":{" << m.get<AutoHedgeSymbol_PKey::target_sec_key>() << "}";
        o << ",\"target_sec_type\":" << (int64_t)m.get<AutoHedgeSymbol_PKey::target_sec_type>();
        o << ",\"hedge_target_type\":" << (int64_t)m.get<AutoHedgeSymbol_PKey::hedge_target_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AutoHedgeSymbol& m) {
        o << "\"_meta\":{" << m.get<AutoHedgeSymbol::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AutoHedgeSymbol::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AutoHedgeSymbol::ticker>() << "}";
        o << ",\"ticker_desc\":\"" << m.get<AutoHedgeSymbol::ticker_desc>() << "\"";
        o << ",\"hedge_sec_key\":{" << m.get<AutoHedgeSymbol::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<AutoHedgeSymbol::hedge_sec_type>();
        {
            std::time_t tt = m.get<AutoHedgeSymbol::early_session_close>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"early_session_close\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<AutoHedgeSymbol::reg_session_close>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"reg_session_close\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<AutoHedgeSymbol::late_session_close>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"late_session_close\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"is_hedge_sec_ok\":" << (int64_t)m.get<AutoHedgeSymbol::is_hedge_sec_ok>();
        o << ",\"hedge_sec_error\":\"" << m.get<AutoHedgeSymbol::hedge_sec_error>() << "\"";
        o << ",\"hedge_umid_prc\":" << m.get<AutoHedgeSymbol::hedge_umid_prc>();
        {
            std::time_t tt = m.get<AutoHedgeSymbol::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}