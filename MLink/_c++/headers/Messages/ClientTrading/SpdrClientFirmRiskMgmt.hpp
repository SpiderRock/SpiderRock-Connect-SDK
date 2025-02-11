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

    #ifndef _num_rejects__GUARD__
    #define _num_rejects__GUARD__
    DECL_STRONG_TYPE(num_rejects, int32);
    #endif//_num_rejects__GUARD__

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

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _reject_text__GUARD__
    #define _reject_text__GUARD__
    DECL_STRONG_TYPE(reject_text, string);
    #endif//_reject_text__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _order_ex_dest__GUARD__
    #define _order_ex_dest__GUARD__
    DECL_STRONG_TYPE(order_ex_dest, string);
    #endif//_order_ex_dest__GUARD__

    #ifndef _risk_mgmt_level__GUARD__
    #define _risk_mgmt_level__GUARD__
    DECL_STRONG_TYPE(risk_mgmt_level, spiderrock::protobuf::api::RiskMgmtLevel);
    #endif//_risk_mgmt_level__GUARD__

    
    class SpdrClientFirmRiskMgmt_PKey {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using order_ex_dest = spiderrock::protobuf::api::order_ex_dest;
        using risk_mgmt_level = spiderrock::protobuf::api::risk_mgmt_level;

        private:
        client_firm m_client_firm{};
        ticker m_ticker{};
        order_ex_dest m_order_ex_dest{};
        risk_mgmt_level m_risk_mgmt_level{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		ticker get_ticker() const {
            return m_ticker;
        }
        order_ex_dest get_order_ex_dest() const {
            return m_order_ex_dest;
        }
        risk_mgmt_level get_risk_mgmt_level() const {
            return m_risk_mgmt_level;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_order_ex_dest(const order_ex_dest& value)  {
            m_order_ex_dest = value;
        }
        void set_risk_mgmt_level(const risk_mgmt_level& value)  {
            m_risk_mgmt_level = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrClientFirmRiskMgmt_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrClientFirmRiskMgmt_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const ticker & value) { set_ticker(value); }
        void set(const order_ex_dest & value) { set_order_ex_dest(value); }
        void set(const risk_mgmt_level & value) { set_risk_mgmt_level(value); }


        SpdrClientFirmRiskMgmt_PKey() {}

        virtual ~SpdrClientFirmRiskMgmt_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeOrderExDest() const {
            return !(m_order_ex_dest.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_client_firm);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(11,tickerKeyLayout_ticker);
            }
            if ( IncludeOrderExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_order_ex_dest);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskMgmtLevel>(m_risk_mgmt_level)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_client_firm));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 11, tickerKeyLayout_ticker);
            }
            if ( IncludeOrderExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_order_ex_dest));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskMgmtLevel>(m_risk_mgmt_level)));
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
                    case 10: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 14: {m_order_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_risk_mgmt_level = static_cast<spiderrock::protobuf::api::RiskMgmtLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrClientFirmRiskMgmt {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrClientFirmRiskMgmt_PKey;
        using num_rejects = spiderrock::protobuf::api::num_rejects;
        using accnt = spiderrock::protobuf::api::accnt;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using user_name = spiderrock::protobuf::api::user_name;
        using reject_text = spiderrock::protobuf::api::reject_text;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        num_rejects m_num_rejects{};
        accnt m_accnt{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        spdr_source m_spdr_source{};
        user_name m_user_name{};
        reject_text m_reject_text{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        num_rejects get_num_rejects() const {
            return m_num_rejects;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        reject_text get_reject_text() const {
            return m_reject_text;
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
        void set_num_rejects(const num_rejects& value)  {
            m_num_rejects = value;
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
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_reject_text(const reject_text& value)  {
            m_reject_text = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrClientFirmRiskMgmt::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const num_rejects & value) {
            set_num_rejects(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const reject_text & value) {
            set_reject_text(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrClientFirmRiskMgmt & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_num_rejects);
            set(value.m_accnt);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_spdr_source);
            set(value.m_user_name);
            set(value.m_reject_text);
            set(value.m_timestamp);
        }

        SpdrClientFirmRiskMgmt() {
            m__meta.set_message_type("SpdrClientFirmRiskMgmt");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3920, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3920, length);
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
             *this = SpdrClientFirmRiskMgmt{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeNumRejects() const {
            return !(m_num_rejects == 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeRejectText() const {
            return !(m_reject_text.empty());
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
            if ( IncludeNumRejects()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_num_rejects);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_accnt);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(106, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_user_name);
            }
            if ( IncludeRejectText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_reject_text);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(121, m_timestamp);
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
            if ( IncludeNumRejects()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_num_rejects);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_accnt));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 106, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_user_name));
            }
            if ( IncludeRejectText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_reject_text));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 121, m_timestamp);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_rejects = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_reject_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
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

    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::_meta>() const { return SpdrClientFirmRiskMgmt::_meta{ m__meta}; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::pkey>() const { return SpdrClientFirmRiskMgmt::pkey{ m_pkey}; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::num_rejects>() const { return m_num_rejects; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::sec_key>() const { return SpdrClientFirmRiskMgmt::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::reject_text>() const { return m_reject_text; }
    template<> inline const auto SpdrClientFirmRiskMgmt::get<SpdrClientFirmRiskMgmt::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrClientFirmRiskMgmt_PKey::get<SpdrClientFirmRiskMgmt_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrClientFirmRiskMgmt_PKey::get<SpdrClientFirmRiskMgmt_PKey::ticker>() const { return SpdrClientFirmRiskMgmt_PKey::ticker{m_ticker}; }
    template<> inline const auto SpdrClientFirmRiskMgmt_PKey::get<SpdrClientFirmRiskMgmt_PKey::order_ex_dest>() const { return m_order_ex_dest; }
    template<> inline const auto SpdrClientFirmRiskMgmt_PKey::get<SpdrClientFirmRiskMgmt_PKey::risk_mgmt_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskMgmtLevel>(m_risk_mgmt_level));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrClientFirmRiskMgmt_PKey& m) {
        o << "\"client_firm\":\"" << m.get<SpdrClientFirmRiskMgmt_PKey::client_firm>() << "\"";
        o << ",\"ticker\":{" << m.get<SpdrClientFirmRiskMgmt_PKey::ticker>() << "}";
        o << ",\"order_ex_dest\":\"" << m.get<SpdrClientFirmRiskMgmt_PKey::order_ex_dest>() << "\"";
        o << ",\"risk_mgmt_level\":" << (int64_t)m.get<SpdrClientFirmRiskMgmt_PKey::risk_mgmt_level>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrClientFirmRiskMgmt& m) {
        o << "\"_meta\":{" << m.get<SpdrClientFirmRiskMgmt::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrClientFirmRiskMgmt::pkey>() << "}";
        o << ",\"num_rejects\":" << m.get<SpdrClientFirmRiskMgmt::num_rejects>();
        o << ",\"accnt\":\"" << m.get<SpdrClientFirmRiskMgmt::accnt>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrClientFirmRiskMgmt::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrClientFirmRiskMgmt::sec_type>();
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrClientFirmRiskMgmt::spdr_source>();
        o << ",\"user_name\":\"" << m.get<SpdrClientFirmRiskMgmt::user_name>() << "\"";
        o << ",\"reject_text\":\"" << m.get<SpdrClientFirmRiskMgmt::reject_text>() << "\"";
        {
            std::time_t tt = m.get<SpdrClientFirmRiskMgmt::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}