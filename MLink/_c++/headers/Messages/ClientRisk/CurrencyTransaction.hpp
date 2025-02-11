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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _bot_currency__GUARD__
    #define _bot_currency__GUARD__
    DECL_STRONG_TYPE(bot_currency, spiderrock::protobuf::api::Currency);
    #endif//_bot_currency__GUARD__

    #ifndef _bot_quantity__double__GUARD__
    #define _bot_quantity__double__GUARD__
    DECL_STRONG_TYPE(bot_quantity__double, double);
    #endif//_bot_quantity__double__GUARD__

    #ifndef _sld_currency__GUARD__
    #define _sld_currency__GUARD__
    DECL_STRONG_TYPE(sld_currency, spiderrock::protobuf::api::Currency);
    #endif//_sld_currency__GUARD__

    #ifndef _sld_quantity__double__GUARD__
    #define _sld_quantity__double__GUARD__
    DECL_STRONG_TYPE(sld_quantity__double, double);
    #endif//_sld_quantity__double__GUARD__

    #ifndef _comment__GUARD__
    #define _comment__GUARD__
    DECL_STRONG_TYPE(comment, string);
    #endif//_comment__GUARD__

    #ifndef _transaction_dttm__GUARD__
    #define _transaction_dttm__GUARD__
    DECL_STRONG_TYPE(transaction_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_transaction_dttm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _transaction_id__GUARD__
    #define _transaction_id__GUARD__
    DECL_STRONG_TYPE(transaction_id, int64);
    #endif//_transaction_id__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    
    class CurrencyTransaction_PKey {
        public:
        //using statements for all types used in this class
        using transaction_id = spiderrock::protobuf::api::transaction_id;
        using trade_date = spiderrock::protobuf::api::trade_date;

        private:
        transaction_id m_transaction_id{};
        trade_date m_trade_date{};

        public:
        transaction_id get_transaction_id() const {
            return m_transaction_id;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        void set_transaction_id(const transaction_id& value)  {
            m_transaction_id = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to CurrencyTransaction_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to CurrencyTransaction_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const transaction_id & value) { set_transaction_id(value); }
        void set(const trade_date & value) { set_trade_date(value); }


        CurrencyTransaction_PKey() {}

        virtual ~CurrencyTransaction_PKey() {
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
        bool IncludeTransactionId() const {
            return !(m_transaction_id == 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTransactionId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_transaction_id);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(11, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTransactionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_transaction_id);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,11, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
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
                    case 10: {m_transaction_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    

    class CurrencyTransaction {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::CurrencyTransaction_PKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using bot_currency = spiderrock::protobuf::api::bot_currency;
        using bot_quantity = spiderrock::protobuf::api::bot_quantity__double;
        using sld_currency = spiderrock::protobuf::api::sld_currency;
        using sld_quantity = spiderrock::protobuf::api::sld_quantity__double;
        using comment = spiderrock::protobuf::api::comment;
        using transaction_dttm = spiderrock::protobuf::api::transaction_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        bot_currency m_bot_currency{};
        bot_quantity m_bot_quantity{};
        sld_currency m_sld_currency{};
        sld_quantity m_sld_quantity{};
        comment m_comment{};
        transaction_dttm m_transaction_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        bot_currency get_bot_currency() const {
            return m_bot_currency;
        }		
        bot_quantity get_bot_quantity() const {
            return m_bot_quantity;
        }		
        sld_currency get_sld_currency() const {
            return m_sld_currency;
        }		
        sld_quantity get_sld_quantity() const {
            return m_sld_quantity;
        }		
        comment get_comment() const {
            return m_comment;
        }		
        transaction_dttm get_transaction_dttm() const {
            return m_transaction_dttm;
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
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_bot_currency(const bot_currency& value)  {
            m_bot_currency = value;
        }
        void set_bot_quantity(const bot_quantity& value)  {
            m_bot_quantity = value;
        }
        void set_sld_currency(const sld_currency& value)  {
            m_sld_currency = value;
        }
        void set_sld_quantity(const sld_quantity& value)  {
            m_sld_quantity = value;
        }
        void set_comment(const comment& value)  {
            m_comment = value;
        }
        void set_transaction_dttm(const transaction_dttm& value)  {
            m_transaction_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to CurrencyTransaction::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const bot_currency & value) {
            set_bot_currency(value);
        }
        void set(const bot_quantity & value) {
            set_bot_quantity(value);
        }
        void set(const sld_currency & value) {
            set_sld_currency(value);
        }
        void set(const sld_quantity & value) {
            set_sld_quantity(value);
        }
        void set(const comment & value) {
            set_comment(value);
        }
        void set(const transaction_dttm & value) {
            set_transaction_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const CurrencyTransaction & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_bot_currency);
            set(value.m_bot_quantity);
            set(value.m_sld_currency);
            set(value.m_sld_quantity);
            set(value.m_comment);
            set(value.m_transaction_dttm);
            set(value.m_timestamp);
        }

        CurrencyTransaction() {
            m__meta.set_message_type("CurrencyTransaction");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4755, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4755, length);
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
             *this = CurrencyTransaction{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeBotQuantity() const {
            return !(m_bot_quantity == 0.0);
        }
        bool IncludeSldQuantity() const {
            return !(m_sld_quantity == 0.0);
        }
        bool IncludeComment() const {
            return !(m_comment.empty());
        }
        bool IncludeTransactionDttm() const {
            return (m_transaction_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_bot_currency)));
            if ( IncludeBotQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_bot_quantity);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_sld_currency)));
            if ( IncludeSldQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_sld_quantity);
            }
            if ( IncludeComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_comment);
            }
            if ( IncludeTransactionDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(121, m_transaction_dttm);
            }
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
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_bot_currency)));
            if ( IncludeBotQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_bot_quantity);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_sld_currency)));
            if ( IncludeSldQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_sld_quantity);
            }
            if ( IncludeComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_comment));
            }
            if ( IncludeTransactionDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 121, m_transaction_dttm);
            }
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bot_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bot_quantity = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sld_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sld_quantity = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_transaction_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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

    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::_meta>() const { return CurrencyTransaction::_meta{ m__meta}; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::pkey>() const { return CurrencyTransaction::pkey{ m_pkey}; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::accnt>() const { return m_accnt; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::client_firm>() const { return m_client_firm; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::bot_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_bot_currency)); }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::bot_quantity>() const { return m_bot_quantity; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::sld_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_sld_currency)); }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::sld_quantity>() const { return m_sld_quantity; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::comment>() const { return m_comment; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::transaction_dttm>() const { return m_transaction_dttm; }
    template<> inline const auto CurrencyTransaction::get<CurrencyTransaction::timestamp>() const { return m_timestamp; }
    template<> inline const auto CurrencyTransaction_PKey::get<CurrencyTransaction_PKey::transaction_id>() const { return m_transaction_id; }
    template<> inline const auto CurrencyTransaction_PKey::get<CurrencyTransaction_PKey::trade_date>() const { return CurrencyTransaction_PKey::trade_date{m_trade_date}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const CurrencyTransaction_PKey& m) {
        o << "\"transaction_id\":" << m.get<CurrencyTransaction_PKey::transaction_id>();
        o << ",\"trade_date\":{" << m.get<CurrencyTransaction_PKey::trade_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const CurrencyTransaction& m) {
        o << "\"_meta\":{" << m.get<CurrencyTransaction::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<CurrencyTransaction::pkey>() << "}";
        o << ",\"accnt\":\"" << m.get<CurrencyTransaction::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<CurrencyTransaction::client_firm>() << "\"";
        o << ",\"bot_currency\":" << (int64_t)m.get<CurrencyTransaction::bot_currency>();
        o << ",\"bot_quantity\":" << m.get<CurrencyTransaction::bot_quantity>();
        o << ",\"sld_currency\":" << (int64_t)m.get<CurrencyTransaction::sld_currency>();
        o << ",\"sld_quantity\":" << m.get<CurrencyTransaction::sld_quantity>();
        o << ",\"comment\":\"" << m.get<CurrencyTransaction::comment>() << "\"";
        {
            std::time_t tt = m.get<CurrencyTransaction::transaction_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"transaction_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<CurrencyTransaction::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}