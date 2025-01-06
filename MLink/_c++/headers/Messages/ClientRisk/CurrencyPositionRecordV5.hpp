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

    #ifndef _mny_opn_pos_prv__GUARD__
    #define _mny_opn_pos_prv__GUARD__
    DECL_STRONG_TYPE(mny_opn_pos_prv, int32);
    #endif//_mny_opn_pos_prv__GUARD__

    #ifndef _mny_opn_pos_clr__GUARD__
    #define _mny_opn_pos_clr__GUARD__
    DECL_STRONG_TYPE(mny_opn_pos_clr, int32);
    #endif//_mny_opn_pos_clr__GUARD__

    #ifndef _mny_opn_pos__GUARD__
    #define _mny_opn_pos__GUARD__
    DECL_STRONG_TYPE(mny_opn_pos, int32);
    #endif//_mny_opn_pos__GUARD__

    #ifndef _mny_opn_pos_src__GUARD__
    #define _mny_opn_pos_src__GUARD__
    DECL_STRONG_TYPE(mny_opn_pos_src, spiderrock::protobuf::api::PositionSource);
    #endif//_mny_opn_pos_src__GUARD__

    #ifndef _mny_bot__GUARD__
    #define _mny_bot__GUARD__
    DECL_STRONG_TYPE(mny_bot, int32);
    #endif//_mny_bot__GUARD__

    #ifndef _mny_sld__GUARD__
    #define _mny_sld__GUARD__
    DECL_STRONG_TYPE(mny_sld, int32);
    #endif//_mny_sld__GUARD__

    #ifndef _num_executions__GUARD__
    #define _num_executions__GUARD__
    DECL_STRONG_TYPE(num_executions, int32);
    #endif//_num_executions__GUARD__

    #ifndef _max_exec_dttm__GUARD__
    #define _max_exec_dttm__GUARD__
    DECL_STRONG_TYPE(max_exec_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_exec_dttm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class CurrencyPositionRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using currency = spiderrock::protobuf::api::currency;
        using accnt = spiderrock::protobuf::api::accnt;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        currency m_currency{};
        accnt m_accnt{};
        trade_date m_trade_date{};
        client_firm m_client_firm{};

        public:
        currency get_currency() const {
            return m_currency;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_currency(const currency& value)  {
            m_currency = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to CurrencyPositionRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to CurrencyPositionRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const currency & value) { set_currency(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const trade_date & value) { set_trade_date(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        CurrencyPositionRecordV5_PKey() {}

        virtual ~CurrencyPositionRecordV5_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(10,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,10,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_client_firm));
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
                    case 10: {m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trade_date.set_year(dateKey.year());
                        m_trade_date.set_month(dateKey.month());
                        m_trade_date.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class CurrencyPositionRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::CurrencyPositionRecordV5_PKey;
        using mny_opn_pos_prv = spiderrock::protobuf::api::mny_opn_pos_prv;
        using mny_opn_pos_clr = spiderrock::protobuf::api::mny_opn_pos_clr;
        using mny_opn_pos = spiderrock::protobuf::api::mny_opn_pos;
        using mny_opn_pos_src = spiderrock::protobuf::api::mny_opn_pos_src;
        using mny_bot = spiderrock::protobuf::api::mny_bot;
        using mny_sld = spiderrock::protobuf::api::mny_sld;
        using num_executions = spiderrock::protobuf::api::num_executions;
        using max_exec_dttm = spiderrock::protobuf::api::max_exec_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        mny_opn_pos_prv m_mny_opn_pos_prv{};
        mny_opn_pos_clr m_mny_opn_pos_clr{};
        mny_opn_pos m_mny_opn_pos{};
        mny_opn_pos_src m_mny_opn_pos_src{};
        mny_bot m_mny_bot{};
        mny_sld m_mny_sld{};
        num_executions m_num_executions{};
        max_exec_dttm m_max_exec_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        mny_opn_pos_prv get_mny_opn_pos_prv() const {
            return m_mny_opn_pos_prv;
        }		
        mny_opn_pos_clr get_mny_opn_pos_clr() const {
            return m_mny_opn_pos_clr;
        }		
        mny_opn_pos get_mny_opn_pos() const {
            return m_mny_opn_pos;
        }		
        mny_opn_pos_src get_mny_opn_pos_src() const {
            return m_mny_opn_pos_src;
        }		
        mny_bot get_mny_bot() const {
            return m_mny_bot;
        }		
        mny_sld get_mny_sld() const {
            return m_mny_sld;
        }		
        num_executions get_num_executions() const {
            return m_num_executions;
        }		
        max_exec_dttm get_max_exec_dttm() const {
            return m_max_exec_dttm;
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
        void set_mny_opn_pos_prv(const mny_opn_pos_prv& value)  {
            m_mny_opn_pos_prv = value;
        }
        void set_mny_opn_pos_clr(const mny_opn_pos_clr& value)  {
            m_mny_opn_pos_clr = value;
        }
        void set_mny_opn_pos(const mny_opn_pos& value)  {
            m_mny_opn_pos = value;
        }
        void set_mny_opn_pos_src(const mny_opn_pos_src& value)  {
            m_mny_opn_pos_src = value;
        }
        void set_mny_bot(const mny_bot& value)  {
            m_mny_bot = value;
        }
        void set_mny_sld(const mny_sld& value)  {
            m_mny_sld = value;
        }
        void set_num_executions(const num_executions& value)  {
            m_num_executions = value;
        }
        void set_max_exec_dttm(const max_exec_dttm& value)  {
            m_max_exec_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to CurrencyPositionRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const mny_opn_pos_prv & value) {
            set_mny_opn_pos_prv(value);
        }
        void set(const mny_opn_pos_clr & value) {
            set_mny_opn_pos_clr(value);
        }
        void set(const mny_opn_pos & value) {
            set_mny_opn_pos(value);
        }
        void set(const mny_opn_pos_src & value) {
            set_mny_opn_pos_src(value);
        }
        void set(const mny_bot & value) {
            set_mny_bot(value);
        }
        void set(const mny_sld & value) {
            set_mny_sld(value);
        }
        void set(const num_executions & value) {
            set_num_executions(value);
        }
        void set(const max_exec_dttm & value) {
            set_max_exec_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const CurrencyPositionRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_mny_opn_pos_prv);
            set(value.m_mny_opn_pos_clr);
            set(value.m_mny_opn_pos);
            set(value.m_mny_opn_pos_src);
            set(value.m_mny_bot);
            set(value.m_mny_sld);
            set(value.m_num_executions);
            set(value.m_max_exec_dttm);
            set(value.m_timestamp);
        }

        CurrencyPositionRecordV5() {
            m__meta.set_message_type("CurrencyPositionRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4750, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4750, length);
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
             *this = CurrencyPositionRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeMnyOpnPosPrv() const {
            return !(m_mny_opn_pos_prv == 0);
        }
        bool IncludeMnyOpnPosClr() const {
            return !(m_mny_opn_pos_clr == 0);
        }
        bool IncludeMnyOpnPos() const {
            return !(m_mny_opn_pos == 0);
        }
        bool IncludeMnyBot() const {
            return !(m_mny_bot == 0);
        }
        bool IncludeMnySld() const {
            return !(m_mny_sld == 0);
        }
        bool IncludeNumExecutions() const {
            return !(m_num_executions == 0);
        }
        bool IncludeMaxExecDttm() const {
            return (m_max_exec_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeMnyOpnPosPrv()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_mny_opn_pos_prv);
            }
            if ( IncludeMnyOpnPosClr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_mny_opn_pos_clr);
            }
            if ( IncludeMnyOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_mny_opn_pos);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_mny_opn_pos_src)));
            if ( IncludeMnyBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_mny_bot);
            }
            if ( IncludeMnySld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_mny_sld);
            }
            if ( IncludeNumExecutions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_max_exec_dttm);
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
            if ( IncludeMnyOpnPosPrv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_mny_opn_pos_prv);
            }
            if ( IncludeMnyOpnPosClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_mny_opn_pos_clr);
            }
            if ( IncludeMnyOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_mny_opn_pos);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>(m_mny_opn_pos_src)));
            if ( IncludeMnyBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_mny_bot);
            }
            if ( IncludeMnySld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_mny_sld);
            }
            if ( IncludeNumExecutions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_num_executions);
            }
            if ( IncludeMaxExecDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_max_exec_dttm);
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
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mny_opn_pos_prv = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mny_opn_pos_clr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mny_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mny_opn_pos_src = static_cast<spiderrock::protobuf::api::PositionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mny_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mny_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_executions = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_exec_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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

    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::_meta>() const { return CurrencyPositionRecordV5::_meta{ m__meta}; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::pkey>() const { return CurrencyPositionRecordV5::pkey{ m_pkey}; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::mny_opn_pos_prv>() const { return m_mny_opn_pos_prv; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::mny_opn_pos_clr>() const { return m_mny_opn_pos_clr; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::mny_opn_pos>() const { return m_mny_opn_pos; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::mny_opn_pos_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionSource>( m_mny_opn_pos_src)); }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::mny_bot>() const { return m_mny_bot; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::mny_sld>() const { return m_mny_sld; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::num_executions>() const { return m_num_executions; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::max_exec_dttm>() const { return m_max_exec_dttm; }
    template<> inline const auto CurrencyPositionRecordV5::get<CurrencyPositionRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto CurrencyPositionRecordV5_PKey::get<CurrencyPositionRecordV5_PKey::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency));}
    template<> inline const auto CurrencyPositionRecordV5_PKey::get<CurrencyPositionRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto CurrencyPositionRecordV5_PKey::get<CurrencyPositionRecordV5_PKey::trade_date>() const { return CurrencyPositionRecordV5_PKey::trade_date{m_trade_date}; }
    template<> inline const auto CurrencyPositionRecordV5_PKey::get<CurrencyPositionRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const CurrencyPositionRecordV5_PKey& m) {
        o << "\"currency\":" << (int64_t)m.get<CurrencyPositionRecordV5_PKey::currency>();
        o << ",\"accnt\":\"" << m.get<CurrencyPositionRecordV5_PKey::accnt>() << "\"";
        o << ",\"trade_date\":{" << m.get<CurrencyPositionRecordV5_PKey::trade_date>() << "}";
        o << ",\"client_firm\":\"" << m.get<CurrencyPositionRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const CurrencyPositionRecordV5& m) {
        o << "\"_meta\":{" << m.get<CurrencyPositionRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<CurrencyPositionRecordV5::pkey>() << "}";
        o << ",\"mny_opn_pos_prv\":" << m.get<CurrencyPositionRecordV5::mny_opn_pos_prv>();
        o << ",\"mny_opn_pos_clr\":" << m.get<CurrencyPositionRecordV5::mny_opn_pos_clr>();
        o << ",\"mny_opn_pos\":" << m.get<CurrencyPositionRecordV5::mny_opn_pos>();
        o << ",\"mny_opn_pos_src\":" << (int64_t)m.get<CurrencyPositionRecordV5::mny_opn_pos_src>();
        o << ",\"mny_bot\":" << m.get<CurrencyPositionRecordV5::mny_bot>();
        o << ",\"mny_sld\":" << m.get<CurrencyPositionRecordV5::mny_sld>();
        o << ",\"num_executions\":" << m.get<CurrencyPositionRecordV5::num_executions>();
        {
            std::time_t tt = m.get<CurrencyPositionRecordV5::max_exec_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_exec_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<CurrencyPositionRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}