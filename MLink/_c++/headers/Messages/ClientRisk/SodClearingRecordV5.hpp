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

    #ifndef _day_side__GUARD__
    #define _day_side__GUARD__
    DECL_STRONG_TYPE(day_side, spiderrock::protobuf::api::DaySide);
    #endif//_day_side__GUARD__

    #ifndef _clr_position__GUARD__
    #define _clr_position__GUARD__
    DECL_STRONG_TYPE(clr_position, int32);
    #endif//_clr_position__GUARD__

    #ifndef _clr_mark__GUARD__
    #define _clr_mark__GUARD__
    DECL_STRONG_TYPE(clr_mark, double);
    #endif//_clr_mark__GUARD__

    #ifndef _comment__GUARD__
    #define _comment__GUARD__
    DECL_STRONG_TYPE(comment, string);
    #endif//_comment__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _fkey__v7__GUARD__
    #define _fkey__v7__GUARD__
    DECL_STRONG_TYPE(fkey__v7, ExpiryKey);
    #endif//_fkey__v7__GUARD__

    #ifndef _source__v7__GUARD__
    #define _source__v7__GUARD__
    DECL_STRONG_TYPE(source__v7, spiderrock::protobuf::api::ClearingSource_V7);
    #endif//_source__v7__GUARD__

    #ifndef _source_name__v7__GUARD__
    #define _source_name__v7__GUARD__
    DECL_STRONG_TYPE(source_name__v7, string);
    #endif//_source_name__v7__GUARD__

    #ifndef _okey__v7__GUARD__
    #define _okey__v7__GUARD__
    DECL_STRONG_TYPE(okey__v7, OptionKey);
    #endif//_okey__v7__GUARD__

    #ifndef _ticker__v7__GUARD__
    #define _ticker__v7__GUARD__
    DECL_STRONG_TYPE(ticker__v7, TickerKey);
    #endif//_ticker__v7__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SodClearingRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        trade_date m_trade_date{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SodClearingRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SodClearingRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SodClearingRecordV5_PKey() {}

        virtual ~SodClearingRecordV5_PKey() {
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
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(11,optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(13, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 11, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,13, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
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
                    case 11: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 12: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SodClearingRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SodClearingRecordV5_PKey;
        using day_side = spiderrock::protobuf::api::day_side;
        using clr_position = spiderrock::protobuf::api::clr_position;
        using clr_mark = spiderrock::protobuf::api::clr_mark;
        using comment = spiderrock::protobuf::api::comment;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using fkey__v7 = spiderrock::protobuf::api::fkey__v7;
        using source__v7 = spiderrock::protobuf::api::source__v7;
        using source_name__v7 = spiderrock::protobuf::api::source_name__v7;
        using okey__v7 = spiderrock::protobuf::api::okey__v7;
        using ticker__v7 = spiderrock::protobuf::api::ticker__v7;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        day_side m_day_side{};
        clr_position m_clr_position{};
        clr_mark m_clr_mark{};
        comment m_comment{};
        timestamp m_timestamp{};
        fkey__v7 m_fkey__v7{};
        source__v7 m_source__v7{};
        source_name__v7 m_source_name__v7{};
        okey__v7 m_okey__v7{};
        ticker__v7 m_ticker__v7{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        day_side get_day_side() const {
            return m_day_side;
        }		
        clr_position get_clr_position() const {
            return m_clr_position;
        }		
        clr_mark get_clr_mark() const {
            return m_clr_mark;
        }		
        comment get_comment() const {
            return m_comment;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        fkey__v7 get_fkey__v7() const {
            return m_fkey__v7;
        }		
        source__v7 get_source__v7() const {
            return m_source__v7;
        }		
        source_name__v7 get_source_name__v7() const {
            return m_source_name__v7;
        }		
        okey__v7 get_okey__v7() const {
            return m_okey__v7;
        }		
        ticker__v7 get_ticker__v7() const {
            return m_ticker__v7;
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
        void set_day_side(const day_side& value)  {
            m_day_side = value;
        }
        void set_clr_position(const clr_position& value)  {
            m_clr_position = value;
        }
        void set_clr_mark(const clr_mark& value)  {
            m_clr_mark = value;
        }
        void set_comment(const comment& value)  {
            m_comment = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_fkey__v7(const fkey__v7& value)  {
            m_fkey__v7 = value;
        }
        void set_source__v7(const source__v7& value)  {
            m_source__v7 = value;
        }
        void set_source_name__v7(const source_name__v7& value)  {
            m_source_name__v7 = value;
        }
        void set_okey__v7(const okey__v7& value)  {
            m_okey__v7 = value;
        }
        void set_ticker__v7(const ticker__v7& value)  {
            m_ticker__v7 = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SodClearingRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const day_side & value) {
            set_day_side(value);
        }
        void set(const clr_position & value) {
            set_clr_position(value);
        }
        void set(const clr_mark & value) {
            set_clr_mark(value);
        }
        void set(const comment & value) {
            set_comment(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const fkey__v7 & value) {
            set_fkey__v7(value);
        }
        void set(const source__v7 & value) {
            set_source__v7(value);
        }
        void set(const source_name__v7 & value) {
            set_source_name__v7(value);
        }
        void set(const okey__v7 & value) {
            set_okey__v7(value);
        }
        void set(const ticker__v7 & value) {
            set_ticker__v7(value);
        }

        void set(const SodClearingRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_day_side);
            set(value.m_clr_position);
            set(value.m_clr_mark);
            set(value.m_comment);
            set(value.m_timestamp);
            set(value.m_fkey__v7);
            set(value.m_source__v7);
            set(value.m_source_name__v7);
            set(value.m_okey__v7);
            set(value.m_ticker__v7);
        }

        SodClearingRecordV5() {
            m__meta.set_message_type("SodClearingRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4835, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4835, length);
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
             *this = SodClearingRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClrPosition() const {
            return !(m_clr_position == 0);
        }
        bool IncludeClrMark() const {
            return !(m_clr_mark == 0.0);
        }
        bool IncludeComment() const {
            return !(m_comment.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeFkeyV7() const {
            return (m_fkey__v7.ByteSizeLong() > 0);
        }
        bool IncludeSourceNameV7() const {
            return !(m_source_name__v7.empty());
        }
        bool IncludeOkeyV7() const {
            return (m_okey__v7.ByteSizeLong() > 0);
        }
        bool IncludeTickerV7() const {
            return (m_ticker__v7.ByteSizeLong() > 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DaySide>(m_day_side)));
            if ( IncludeClrPosition()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_clr_position);
            }
            if ( IncludeClrMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_clr_mark);
            }
            if ( IncludeComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_comment);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(112, m_timestamp);
            }
            if ( IncludeFkeyV7()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey__v7{};
                m_fkey__v7.setCodecExpiryKey(expiryKeyLayout_fkey__v7);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(5000, expiryKeyLayout_fkey__v7);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5001,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClearingSource_V7>(m_source__v7)));
            if ( IncludeSourceNameV7()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(5002,m_source_name__v7);
            }
            if ( IncludeOkeyV7()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey__v7{};
                m_okey__v7.setCodecOptionKey(optionKeyLayout_okey__v7);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(5003, optionKeyLayout_okey__v7);
            }
            if ( IncludeTickerV7()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker__v7{};
                m_ticker__v7.setCodecTickerKey(tickerKeyLayout_ticker__v7);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(5004, tickerKeyLayout_ticker__v7);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DaySide>(m_day_side)));
            if ( IncludeClrPosition()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_clr_position);
            }
            if ( IncludeClrMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_clr_mark);
            }
            if ( IncludeComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_comment));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 112, m_timestamp);
            }
            if ( IncludeFkeyV7()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey__v7{};
                m_fkey__v7.setCodecExpiryKey(expiryKeyLayout_fkey__v7);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 5000, expiryKeyLayout_fkey__v7);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5001,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClearingSource_V7>(m_source__v7)));
            if ( IncludeSourceNameV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,5002,static_cast<string>(m_source_name__v7));
            }
            if ( IncludeOkeyV7()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey__v7{};
                m_okey__v7.setCodecOptionKey(optionKeyLayout_okey__v7);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 5003, optionKeyLayout_okey__v7);
            }
            if ( IncludeTickerV7()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker__v7{};
                m_ticker__v7.setCodecTickerKey(tickerKeyLayout_ticker__v7);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 5004, tickerKeyLayout_ticker__v7);
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
                            m_day_side = static_cast<spiderrock::protobuf::api::DaySide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_clr_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_clr_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_fkey__v7.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 5001: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_source__v7 = static_cast<spiderrock::protobuf::api::ClearingSource_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5002: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_source_name__v7 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 5003: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_okey__v7.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 5004: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker__v7.setFromCodec(tickerKey);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::_meta>() const { return SodClearingRecordV5::_meta{ m__meta}; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::pkey>() const { return SodClearingRecordV5::pkey{ m_pkey}; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::day_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DaySide>( m_day_side)); }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::clr_position>() const { return m_clr_position; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::clr_mark>() const { return m_clr_mark; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::comment>() const { return m_comment; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::fkey__v7>() const { return SodClearingRecordV5::fkey__v7{ m_fkey__v7}; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::source__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClearingSource_V7>( m_source__v7)); }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::source_name__v7>() const { return m_source_name__v7; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::okey__v7>() const { return SodClearingRecordV5::okey__v7{ m_okey__v7}; }
    template<> inline const auto SodClearingRecordV5::get<SodClearingRecordV5::ticker__v7>() const { return SodClearingRecordV5::ticker__v7{ m_ticker__v7}; }
    template<> inline const auto SodClearingRecordV5_PKey::get<SodClearingRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SodClearingRecordV5_PKey::get<SodClearingRecordV5_PKey::sec_key>() const { return SodClearingRecordV5_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SodClearingRecordV5_PKey::get<SodClearingRecordV5_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SodClearingRecordV5_PKey::get<SodClearingRecordV5_PKey::trade_date>() const { return SodClearingRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto SodClearingRecordV5_PKey::get<SodClearingRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SodClearingRecordV5_PKey& m) {
        o << "\"accnt\":\"" << m.get<SodClearingRecordV5_PKey::accnt>() << "\"";
        o << ",\"sec_key\":{" << m.get<SodClearingRecordV5_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SodClearingRecordV5_PKey::sec_type>();
        o << ",\"trade_date\":{" << m.get<SodClearingRecordV5_PKey::trade_date>() << "}";
        o << ",\"client_firm\":\"" << m.get<SodClearingRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SodClearingRecordV5& m) {
        o << "\"_meta\":{" << m.get<SodClearingRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SodClearingRecordV5::pkey>() << "}";
        o << ",\"day_side\":" << (int64_t)m.get<SodClearingRecordV5::day_side>();
        o << ",\"clr_position\":" << m.get<SodClearingRecordV5::clr_position>();
        o << ",\"clr_mark\":" << m.get<SodClearingRecordV5::clr_mark>();
        o << ",\"comment\":\"" << m.get<SodClearingRecordV5::comment>() << "\"";
        {
            std::time_t tt = m.get<SodClearingRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fkey__v7\":{" << m.get<SodClearingRecordV5::fkey__v7>() << "}";
        o << ",\"source__v7\":" << (int64_t)m.get<SodClearingRecordV5::source__v7>();
        o << ",\"source_name__v7\":\"" << m.get<SodClearingRecordV5::source_name__v7>() << "\"";
        o << ",\"okey__v7\":{" << m.get<SodClearingRecordV5::okey__v7>() << "}";
        o << ",\"ticker__v7\":{" << m.get<SodClearingRecordV5::ticker__v7>() << "}";
        return o;
    }

}
}
}