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

    #ifndef _sr_cash_amount__GUARD__
    #define _sr_cash_amount__GUARD__
    DECL_STRONG_TYPE(sr_cash_amount, double);
    #endif//_sr_cash_amount__GUARD__

    #ifndef _clr_cash_amount__GUARD__
    #define _clr_cash_amount__GUARD__
    DECL_STRONG_TYPE(clr_cash_amount, double);
    #endif//_clr_cash_amount__GUARD__

    #ifndef _comment__GUARD__
    #define _comment__GUARD__
    DECL_STRONG_TYPE(comment, string);
    #endif//_comment__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _src_transaction__GUARD__
    #define _src_transaction__GUARD__
    DECL_STRONG_TYPE(src_transaction, spiderrock::protobuf::api::SrcTransaction);
    #endif//_src_transaction__GUARD__

    #ifndef _src_sec_key__GUARD__
    #define _src_sec_key__GUARD__
    DECL_STRONG_TYPE(src_sec_key, OptionKey);
    #endif//_src_sec_key__GUARD__

    #ifndef _src_sec_type__GUARD__
    #define _src_sec_type__GUARD__
    DECL_STRONG_TYPE(src_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_src_sec_type__GUARD__

    #ifndef _src_trade_date__GUARD__
    #define _src_trade_date__GUARD__
    DECL_STRONG_TYPE(src_trade_date, DateKey);
    #endif//_src_trade_date__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SodCashRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using currency = spiderrock::protobuf::api::currency;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using src_transaction = spiderrock::protobuf::api::src_transaction;
        using src_sec_key = spiderrock::protobuf::api::src_sec_key;
        using src_sec_type = spiderrock::protobuf::api::src_sec_type;
        using src_trade_date = spiderrock::protobuf::api::src_trade_date;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        currency m_currency{};
        trade_date m_trade_date{};
        src_transaction m_src_transaction{};
        src_sec_key m_src_sec_key{};
        src_sec_type m_src_sec_type{};
        src_trade_date m_src_trade_date{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        currency get_currency() const {
            return m_currency;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        src_transaction get_src_transaction() const {
            return m_src_transaction;
        }
		src_sec_key get_src_sec_key() const {
            return m_src_sec_key;
        }
        src_sec_type get_src_sec_type() const {
            return m_src_sec_type;
        }
		src_trade_date get_src_trade_date() const {
            return m_src_trade_date;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_currency(const currency& value)  {
            m_currency = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_src_transaction(const src_transaction& value)  {
            m_src_transaction = value;
        }
        void set_src_sec_key(const src_sec_key& value)  {
            m_src_sec_key = value;
        }
        void set_src_sec_type(const src_sec_type& value)  {
            m_src_sec_type = value;
        }
        void set_src_trade_date(const src_trade_date& value)  {
            m_src_trade_date = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SodCashRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SodCashRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const currency & value) { set_currency(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const src_transaction & value) { set_src_transaction(value); }
        void set(const src_sec_key & value) { set_src_sec_key(value); }
        void set(const src_sec_type & value) { set_src_sec_type(value); }
        void set(const src_trade_date & value) { set_src_trade_date(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SodCashRecordV5_PKey() {}

        virtual ~SodCashRecordV5_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeSrcSecKey() const {
            return (m_src_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeSrcTradeDate() const {
            return (m_src_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrcTransaction>(m_src_transaction)));
            if ( IncludeSrcSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_src_sec_key;
                m_src_sec_key.setCodecOptionKey(optionKeyLayout_src_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(14,optionKeyLayout_src_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(15,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_src_sec_type)));
            if ( IncludeSrcTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(16, m_src_trade_date.get_year(), m_src_trade_date.get_month(), m_src_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(17,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrcTransaction>(m_src_transaction)));
            if ( IncludeSrcSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_src_sec_key;
                m_src_sec_key.setCodecOptionKey(optionKeyLayout_src_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 14, optionKeyLayout_src_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,15,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_src_sec_type)));
            if ( IncludeSrcTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,16, m_src_trade_date.get_year(), m_src_trade_date.get_month(), m_src_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,17,static_cast<string>(m_client_firm));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_src_transaction = static_cast<spiderrock::protobuf::api::SrcTransaction>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_src_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 15: {m_src_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 16: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_src_trade_date.set_year(dateKey.year());
                        m_src_trade_date.set_month(dateKey.month());
                        m_src_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 17: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SodCashRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SodCashRecordV5_PKey;
        using sr_cash_amount = spiderrock::protobuf::api::sr_cash_amount;
        using clr_cash_amount = spiderrock::protobuf::api::clr_cash_amount;
        using comment = spiderrock::protobuf::api::comment;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sr_cash_amount m_sr_cash_amount{};
        clr_cash_amount m_clr_cash_amount{};
        comment m_comment{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sr_cash_amount get_sr_cash_amount() const {
            return m_sr_cash_amount;
        }		
        clr_cash_amount get_clr_cash_amount() const {
            return m_clr_cash_amount;
        }		
        comment get_comment() const {
            return m_comment;
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
        void set_sr_cash_amount(const sr_cash_amount& value)  {
            m_sr_cash_amount = value;
        }
        void set_clr_cash_amount(const clr_cash_amount& value)  {
            m_clr_cash_amount = value;
        }
        void set_comment(const comment& value)  {
            m_comment = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SodCashRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sr_cash_amount & value) {
            set_sr_cash_amount(value);
        }
        void set(const clr_cash_amount & value) {
            set_clr_cash_amount(value);
        }
        void set(const comment & value) {
            set_comment(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SodCashRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sr_cash_amount);
            set(value.m_clr_cash_amount);
            set(value.m_comment);
            set(value.m_timestamp);
        }

        SodCashRecordV5() {
            m__meta.set_message_type("SodCashRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4830, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4830, length);
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
             *this = SodCashRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSrCashAmount() const {
            return !(m_sr_cash_amount == 0.0);
        }
        bool IncludeClrCashAmount() const {
            return !(m_clr_cash_amount == 0.0);
        }
        bool IncludeComment() const {
            return !(m_comment.empty());
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
            if ( IncludeSrCashAmount()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_sr_cash_amount);
            }
            if ( IncludeClrCashAmount()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_clr_cash_amount);
            }
            if ( IncludeComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_comment);
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
            if ( IncludeSrCashAmount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_sr_cash_amount);
            }
            if ( IncludeClrCashAmount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_clr_cash_amount);
            }
            if ( IncludeComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_comment));
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
                            m_sr_cash_amount = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_clr_cash_amount = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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

    template<> inline const auto SodCashRecordV5::get<SodCashRecordV5::_meta>() const { return SodCashRecordV5::_meta{ m__meta}; }
    template<> inline const auto SodCashRecordV5::get<SodCashRecordV5::pkey>() const { return SodCashRecordV5::pkey{ m_pkey}; }
    template<> inline const auto SodCashRecordV5::get<SodCashRecordV5::sr_cash_amount>() const { return m_sr_cash_amount; }
    template<> inline const auto SodCashRecordV5::get<SodCashRecordV5::clr_cash_amount>() const { return m_clr_cash_amount; }
    template<> inline const auto SodCashRecordV5::get<SodCashRecordV5::comment>() const { return m_comment; }
    template<> inline const auto SodCashRecordV5::get<SodCashRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency));}
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::trade_date>() const { return SodCashRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::src_transaction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SrcTransaction>(m_src_transaction));}
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::src_sec_key>() const { return SodCashRecordV5_PKey::src_sec_key{m_src_sec_key}; }
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::src_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_src_sec_type));}
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::src_trade_date>() const { return SodCashRecordV5_PKey::src_trade_date{m_src_trade_date}; }
    template<> inline const auto SodCashRecordV5_PKey::get<SodCashRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SodCashRecordV5_PKey& m) {
        o << "\"accnt\":\"" << m.get<SodCashRecordV5_PKey::accnt>() << "\"";
        o << ",\"currency\":" << (int64_t)m.get<SodCashRecordV5_PKey::currency>();
        o << ",\"trade_date\":{" << m.get<SodCashRecordV5_PKey::trade_date>() << "}";
        o << ",\"src_transaction\":" << (int64_t)m.get<SodCashRecordV5_PKey::src_transaction>();
        o << ",\"src_sec_key\":{" << m.get<SodCashRecordV5_PKey::src_sec_key>() << "}";
        o << ",\"src_sec_type\":" << (int64_t)m.get<SodCashRecordV5_PKey::src_sec_type>();
        o << ",\"src_trade_date\":{" << m.get<SodCashRecordV5_PKey::src_trade_date>() << "}";
        o << ",\"client_firm\":\"" << m.get<SodCashRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SodCashRecordV5& m) {
        o << "\"_meta\":{" << m.get<SodCashRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SodCashRecordV5::pkey>() << "}";
        o << ",\"sr_cash_amount\":" << m.get<SodCashRecordV5::sr_cash_amount>();
        o << ",\"clr_cash_amount\":" << m.get<SodCashRecordV5::clr_cash_amount>();
        o << ",\"comment\":\"" << m.get<SodCashRecordV5::comment>() << "\"";
        {
            std::time_t tt = m.get<SodCashRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}