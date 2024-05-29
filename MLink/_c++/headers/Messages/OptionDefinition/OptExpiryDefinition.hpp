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

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    #ifndef _u_prc_driver_key__GUARD__
    #define _u_prc_driver_key__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_key, ExpiryKey);
    #endif//_u_prc_driver_key__GUARD__

    #ifndef _u_prc_driver_key_type__GUARD__
    #define _u_prc_driver_key_type__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_key_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_u_prc_driver_key_type__GUARD__

    #ifndef _u_prc_bound_fkey__GUARD__
    #define _u_prc_bound_fkey__GUARD__
    DECL_STRONG_TYPE(u_prc_bound_fkey, ExpiryKey);
    #endif//_u_prc_bound_fkey__GUARD__

    #ifndef _expiration__timestamp__GUARD__
    #define _expiration__timestamp__GUARD__
    DECL_STRONG_TYPE(expiration__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expiration__timestamp__GUARD__

    #ifndef _maturity_date__GUARD__
    #define _maturity_date__GUARD__
    DECL_STRONG_TYPE(maturity_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_maturity_date__GUARD__

    #ifndef _display_factor__GUARD__
    #define _display_factor__GUARD__
    DECL_STRONG_TYPE(display_factor, double);
    #endif//_display_factor__GUARD__

    #ifndef _cab_price__GUARD__
    #define _cab_price__GUARD__
    DECL_STRONG_TYPE(cab_price, double);
    #endif//_cab_price__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _min_tick_size__GUARD__
    #define _min_tick_size__GUARD__
    DECL_STRONG_TYPE(min_tick_size, double);
    #endif//_min_tick_size__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    
    class OptExpiryDefinition_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptExpiryDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptExpiryDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }


        OptExpiryDefinition_PKey() {}

        virtual ~OptExpiryDefinition_PKey() {
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
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
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
    

    class OptExpiryDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptExpiryDefinition_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using fkey = spiderrock::protobuf::api::fkey;
        using u_prc_driver_key = spiderrock::protobuf::api::u_prc_driver_key;
        using u_prc_driver_key_type = spiderrock::protobuf::api::u_prc_driver_key_type;
        using u_prc_bound_fkey = spiderrock::protobuf::api::u_prc_bound_fkey;
        using expiration = spiderrock::protobuf::api::expiration__timestamp;
        using maturity_date = spiderrock::protobuf::api::maturity_date;
        using display_factor = spiderrock::protobuf::api::display_factor;
        using cab_price = spiderrock::protobuf::api::cab_price;
        using price_format = spiderrock::protobuf::api::price_format;
        using min_tick_size = spiderrock::protobuf::api::min_tick_size;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        fkey m_fkey{};
        u_prc_driver_key m_u_prc_driver_key{};
        u_prc_driver_key_type m_u_prc_driver_key_type{};
        u_prc_bound_fkey m_u_prc_bound_fkey{};
        expiration m_expiration{};
        maturity_date m_maturity_date{};
        display_factor m_display_factor{};
        cab_price m_cab_price{};
        price_format m_price_format{};
        min_tick_size m_min_tick_size{};
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
        fkey get_fkey() const {
            return m_fkey;
        }		
        u_prc_driver_key get_u_prc_driver_key() const {
            return m_u_prc_driver_key;
        }		
        u_prc_driver_key_type get_u_prc_driver_key_type() const {
            return m_u_prc_driver_key_type;
        }		
        u_prc_bound_fkey get_u_prc_bound_fkey() const {
            return m_u_prc_bound_fkey;
        }		
        expiration get_expiration() const {
            return m_expiration;
        }		
        maturity_date get_maturity_date() const {
            return m_maturity_date;
        }		
        display_factor get_display_factor() const {
            return m_display_factor;
        }		
        cab_price get_cab_price() const {
            return m_cab_price;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        min_tick_size get_min_tick_size() const {
            return m_min_tick_size;
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
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        void set_u_prc_driver_key(const u_prc_driver_key& value)  {
            m_u_prc_driver_key = value;
        }
        void set_u_prc_driver_key_type(const u_prc_driver_key_type& value)  {
            m_u_prc_driver_key_type = value;
        }
        void set_u_prc_bound_fkey(const u_prc_bound_fkey& value)  {
            m_u_prc_bound_fkey = value;
        }
        void set_expiration(const expiration& value)  {
            m_expiration = value;
        }
        void set_maturity_date(const maturity_date& value)  {
            m_maturity_date = value;
        }
        void set_display_factor(const display_factor& value)  {
            m_display_factor = value;
        }
        void set_cab_price(const cab_price& value)  {
            m_cab_price = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_min_tick_size(const min_tick_size& value)  {
            m_min_tick_size = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptExpiryDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const fkey & value) {
            set_fkey(value);
        }
        void set(const u_prc_driver_key & value) {
            set_u_prc_driver_key(value);
        }
        void set(const u_prc_driver_key_type & value) {
            set_u_prc_driver_key_type(value);
        }
        void set(const u_prc_bound_fkey & value) {
            set_u_prc_bound_fkey(value);
        }
        void set(const expiration & value) {
            set_expiration(value);
        }
        void set(const maturity_date & value) {
            set_maturity_date(value);
        }
        void set(const display_factor & value) {
            set_display_factor(value);
        }
        void set(const cab_price & value) {
            set_cab_price(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const min_tick_size & value) {
            set_min_tick_size(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptExpiryDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_fkey);
            set(value.m_u_prc_driver_key);
            set(value.m_u_prc_driver_key_type);
            set(value.m_u_prc_bound_fkey);
            set(value.m_expiration);
            set(value.m_maturity_date);
            set(value.m_display_factor);
            set(value.m_cab_price);
            set(value.m_price_format);
            set(value.m_min_tick_size);
            set(value.m_timestamp);
        }

        OptExpiryDefinition() {
            m__meta.set_message_type("OptExpiryDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4355, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4355, length);
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
             *this = OptExpiryDefinition{};
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
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }
        bool IncludeUPrcDriverKey() const {
            return (m_u_prc_driver_key.ByteSizeLong() > 0);
        }
        bool IncludeUPrcBoundFkey() const {
            return (m_u_prc_bound_fkey.ByteSizeLong() > 0);
        }
        bool IncludeExpiration() const {
            return (m_expiration.time_since_epoch().count() != 0);
        }
        bool IncludeMaturityDate() const {
            return (m_maturity_date.time_since_epoch().count() != 0);
        }
        bool IncludeDisplayFactor() const {
            return !(m_display_factor == 0.0);
        }
        bool IncludeCabPrice() const {
            return !(m_cab_price == 0.0);
        }
        bool IncludeMinTickSize() const {
            return !(m_min_tick_size == 0.0);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(103, expiryKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(106, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_key_type)));
            if ( IncludeUPrcBoundFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_bound_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(112, expiryKeyLayout);
            }
            if ( IncludeExpiration()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_expiration);
            }
            if ( IncludeMaturityDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(118, m_maturity_date);
            }
            if ( IncludeDisplayFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_display_factor);
            }
            if ( IncludeCabPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_cab_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeMinTickSize()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_min_tick_size);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_timestamp);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 103, expiryKeyLayout);
            }
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 106, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_key_type)));
            if ( IncludeUPrcBoundFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_bound_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 112, expiryKeyLayout);
            }
            if ( IncludeExpiration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_expiration);
            }
            if ( IncludeMaturityDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 118, m_maturity_date);
            }
            if ( IncludeDisplayFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_display_factor);
            }
            if ( IncludeCabPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_cab_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            if ( IncludeMinTickSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_min_tick_size);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_timestamp);
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
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_fkey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_driver_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_driver_key_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_bound_fkey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_expiration = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_maturity_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_display_factor = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cab_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_tick_size = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
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

    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::_meta>() const { return OptExpiryDefinition::_meta{ m__meta}; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::pkey>() const { return OptExpiryDefinition::pkey{ m_pkey}; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::ticker>() const { return OptExpiryDefinition::ticker{ m_ticker}; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::fkey>() const { return OptExpiryDefinition::fkey{ m_fkey}; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::u_prc_driver_key>() const { return OptExpiryDefinition::u_prc_driver_key{ m_u_prc_driver_key}; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::u_prc_driver_key_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_u_prc_driver_key_type)); }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::u_prc_bound_fkey>() const { return OptExpiryDefinition::u_prc_bound_fkey{ m_u_prc_bound_fkey}; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::expiration>() const { return m_expiration; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::maturity_date>() const { return m_maturity_date; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::display_factor>() const { return m_display_factor; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::cab_price>() const { return m_cab_price; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::min_tick_size>() const { return m_min_tick_size; }
    template<> inline const auto OptExpiryDefinition::get<OptExpiryDefinition::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptExpiryDefinition_PKey::get<OptExpiryDefinition_PKey::ekey>() const { return OptExpiryDefinition_PKey::ekey{m_ekey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptExpiryDefinition_PKey& m) {
        o << "\"ekey\":{" << m.get<OptExpiryDefinition_PKey::ekey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptExpiryDefinition& m) {
        o << "\"_meta\":{" << m.get<OptExpiryDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptExpiryDefinition::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptExpiryDefinition::ticker>() << "}";
        o << ",\"fkey\":{" << m.get<OptExpiryDefinition::fkey>() << "}";
        o << ",\"u_prc_driver_key\":{" << m.get<OptExpiryDefinition::u_prc_driver_key>() << "}";
        o << ",\"u_prc_driver_key_type\":" << (int64_t)m.get<OptExpiryDefinition::u_prc_driver_key_type>();
        o << ",\"u_prc_bound_fkey\":{" << m.get<OptExpiryDefinition::u_prc_bound_fkey>() << "}";
        {
            std::time_t tt = m.get<OptExpiryDefinition::expiration>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expiration\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<OptExpiryDefinition::maturity_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"maturity_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"display_factor\":" << m.get<OptExpiryDefinition::display_factor>();
        o << ",\"cab_price\":" << m.get<OptExpiryDefinition::cab_price>();
        o << ",\"price_format\":" << (int64_t)m.get<OptExpiryDefinition::price_format>();
        o << ",\"min_tick_size\":" << m.get<OptExpiryDefinition::min_tick_size>();
        {
            std::time_t tt = m.get<OptExpiryDefinition::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}