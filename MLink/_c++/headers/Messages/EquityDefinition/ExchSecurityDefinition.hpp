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

    #ifndef _primary_currency__GUARD__
    #define _primary_currency__GUARD__
    DECL_STRONG_TYPE(primary_currency, spiderrock::protobuf::api::Currency);
    #endif//_primary_currency__GUARD__

    #ifndef _isin__GUARD__
    #define _isin__GUARD__
    DECL_STRONG_TYPE(isin, string);
    #endif//_isin__GUARD__

    #ifndef _primary_ticker__GUARD__
    #define _primary_ticker__GUARD__
    DECL_STRONG_TYPE(primary_ticker, TickerKey);
    #endif//_primary_ticker__GUARD__

    #ifndef _exchange_ticker__GUARD__
    #define _exchange_ticker__GUARD__
    DECL_STRONG_TYPE(exchange_ticker, TickerKey);
    #endif//_exchange_ticker__GUARD__

    #ifndef _exchange__StkExch__GUARD__
    #define _exchange__StkExch__GUARD__
    DECL_STRONG_TYPE(exchange__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_exchange__StkExch__GUARD__

    
    class ExchSecurityDefinition_PKey {
        public:
        //using statements for all types used in this class
        using exchange_ticker = spiderrock::protobuf::api::exchange_ticker;
        using exchange = spiderrock::protobuf::api::exchange__StkExch;

        private:
        exchange_ticker m_exchange_ticker{};
        exchange m_exchange{};

        public:
		exchange_ticker get_exchange_ticker() const {
            return m_exchange_ticker;
        }
        exchange get_exchange() const {
            return m_exchange;
        }
        void set_exchange_ticker(const exchange_ticker& value)  {
            m_exchange_ticker = value;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExchSecurityDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ExchSecurityDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exchange_ticker & value) { set_exchange_ticker(value); }
        void set(const exchange & value) { set_exchange(value); }


        ExchSecurityDefinition_PKey() {}

        virtual ~ExchSecurityDefinition_PKey() {
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
        bool IncludeExchangeTicker() const {
            return (m_exchange_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeExchangeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_exchange_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_exchange)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeExchangeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_exchange_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_exchange)));
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
                        m_exchange_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_exchange = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class ExchSecurityDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ExchSecurityDefinition_PKey;
        using primary_currency = spiderrock::protobuf::api::primary_currency;
        using isin = spiderrock::protobuf::api::isin;
        using primary_ticker = spiderrock::protobuf::api::primary_ticker;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        primary_currency m_primary_currency{};
        isin m_isin{};
        primary_ticker m_primary_ticker{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        primary_currency get_primary_currency() const {
            return m_primary_currency;
        }		
        isin get_isin() const {
            return m_isin;
        }		
        primary_ticker get_primary_ticker() const {
            return m_primary_ticker;
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
        void set_primary_currency(const primary_currency& value)  {
            m_primary_currency = value;
        }
        void set_isin(const isin& value)  {
            m_isin = value;
        }
        void set_primary_ticker(const primary_ticker& value)  {
            m_primary_ticker = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExchSecurityDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const primary_currency & value) {
            set_primary_currency(value);
        }
        void set(const isin & value) {
            set_isin(value);
        }
        void set(const primary_ticker & value) {
            set_primary_ticker(value);
        }

        void set(const ExchSecurityDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_primary_currency);
            set(value.m_isin);
            set(value.m_primary_ticker);
        }

        ExchSecurityDefinition() {
            m__meta.set_message_type("ExchSecurityDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4400, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4400, length);
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
             *this = ExchSecurityDefinition{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeIsin() const {
            return !(m_isin.empty());
        }
        bool IncludePrimaryTicker() const {
            return (m_primary_ticker.ByteSizeLong() > 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_primary_currency)));
            if ( IncludeIsin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_isin);
            }
            if ( IncludePrimaryTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_primary_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(106, tickerKeyLayout);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_primary_currency)));
            if ( IncludeIsin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_isin));
            }
            if ( IncludePrimaryTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_primary_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 106, tickerKeyLayout);
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
                            m_primary_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_isin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_primary_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto ExchSecurityDefinition::get<ExchSecurityDefinition::_meta>() const { return ExchSecurityDefinition::_meta{ m__meta}; }
    template<> inline const auto ExchSecurityDefinition::get<ExchSecurityDefinition::pkey>() const { return ExchSecurityDefinition::pkey{ m_pkey}; }
    template<> inline const auto ExchSecurityDefinition::get<ExchSecurityDefinition::primary_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_primary_currency)); }
    template<> inline const auto ExchSecurityDefinition::get<ExchSecurityDefinition::isin>() const { return m_isin; }
    template<> inline const auto ExchSecurityDefinition::get<ExchSecurityDefinition::primary_ticker>() const { return ExchSecurityDefinition::primary_ticker{ m_primary_ticker}; }
    template<> inline const auto ExchSecurityDefinition_PKey::get<ExchSecurityDefinition_PKey::exchange_ticker>() const { return ExchSecurityDefinition_PKey::exchange_ticker{m_exchange_ticker}; }
    template<> inline const auto ExchSecurityDefinition_PKey::get<ExchSecurityDefinition_PKey::exchange>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_exchange));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ExchSecurityDefinition_PKey& m) {
        o << "\"exchange_ticker\":{" << m.get<ExchSecurityDefinition_PKey::exchange_ticker>() << "}";
        o << ",\"exchange\":" << (int64_t)m.get<ExchSecurityDefinition_PKey::exchange>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ExchSecurityDefinition& m) {
        o << "\"_meta\":{" << m.get<ExchSecurityDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ExchSecurityDefinition::pkey>() << "}";
        o << ",\"primary_currency\":" << (int64_t)m.get<ExchSecurityDefinition::primary_currency>();
        o << ",\"isin\":\"" << m.get<ExchSecurityDefinition::isin>() << "\"";
        o << ",\"primary_ticker\":{" << m.get<ExchSecurityDefinition::primary_ticker>() << "}";
        return o;
    }

}
}
}