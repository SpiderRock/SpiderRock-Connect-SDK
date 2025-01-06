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

    #ifndef _sector__GUARD__
    #define _sector__GUARD__
    DECL_STRONG_TYPE(sector, string);
    #endif//_sector__GUARD__

    #ifndef _risk_class__GUARD__
    #define _risk_class__GUARD__
    DECL_STRONG_TYPE(risk_class, string);
    #endif//_risk_class__GUARD__

    #ifndef _stk_status__GUARD__
    #define _stk_status__GUARD__
    DECL_STRONG_TYPE(stk_status, spiderrock::protobuf::api::StkStatus);
    #endif//_stk_status__GUARD__

    #ifndef _fut_status__GUARD__
    #define _fut_status__GUARD__
    DECL_STRONG_TYPE(fut_status, spiderrock::protobuf::api::FutStatus);
    #endif//_fut_status__GUARD__

    #ifndef _opt_status__GUARD__
    #define _opt_status__GUARD__
    DECL_STRONG_TYPE(opt_status, spiderrock::protobuf::api::OptStatus);
    #endif//_opt_status__GUARD__

    #ifndef _hold_reason__GUARD__
    #define _hold_reason__GUARD__
    DECL_STRONG_TYPE(hold_reason, spiderrock::protobuf::api::HoldReason);
    #endif//_hold_reason__GUARD__

    #ifndef _binary_days__GUARD__
    #define _binary_days__GUARD__
    DECL_STRONG_TYPE(binary_days, float);
    #endif//_binary_days__GUARD__

    #ifndef _hedge_delta_rule__GUARD__
    #define _hedge_delta_rule__GUARD__
    DECL_STRONG_TYPE(hedge_delta_rule, spiderrock::protobuf::api::HedgeDeltaRule);
    #endif//_hedge_delta_rule__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _sym_ctrl_accnt__GUARD__
    #define _sym_ctrl_accnt__GUARD__
    DECL_STRONG_TYPE(sym_ctrl_accnt, string);
    #endif//_sym_ctrl_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class SymbolControl_PKey {
        public:
        //using statements for all types used in this class
        using sym_ctrl_accnt = spiderrock::protobuf::api::sym_ctrl_accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        sym_ctrl_accnt m_sym_ctrl_accnt{};
        client_firm m_client_firm{};
        ticker m_ticker{};

        public:
        sym_ctrl_accnt get_sym_ctrl_accnt() const {
            return m_sym_ctrl_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_sym_ctrl_accnt(const sym_ctrl_accnt& value)  {
            m_sym_ctrl_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sym_ctrl_accnt & value) { set_sym_ctrl_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const ticker & value) { set_ticker(value); }


        SymbolControl_PKey() {}

        virtual ~SymbolControl_PKey() {
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
        bool IncludeSymCtrlAccnt() const {
            return !(m_sym_ctrl_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSymCtrlAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_sym_ctrl_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(12,tickerKeyLayout_ticker);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSymCtrlAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_sym_ctrl_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 12, tickerKeyLayout_ticker);
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
                    case 10: {m_sym_ctrl_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class SymbolControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SymbolControl_PKey;
        using sector = spiderrock::protobuf::api::sector;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using stk_status = spiderrock::protobuf::api::stk_status;
        using fut_status = spiderrock::protobuf::api::fut_status;
        using opt_status = spiderrock::protobuf::api::opt_status;
        using hold_reason = spiderrock::protobuf::api::hold_reason;
        using binary_days = spiderrock::protobuf::api::binary_days;
        using hedge_delta_rule = spiderrock::protobuf::api::hedge_delta_rule;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sector m_sector{};
        risk_class m_risk_class{};
        stk_status m_stk_status{};
        fut_status m_fut_status{};
        opt_status m_opt_status{};
        hold_reason m_hold_reason{};
        binary_days m_binary_days{};
        hedge_delta_rule m_hedge_delta_rule{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sector get_sector() const {
            return m_sector;
        }		
        risk_class get_risk_class() const {
            return m_risk_class;
        }		
        stk_status get_stk_status() const {
            return m_stk_status;
        }		
        fut_status get_fut_status() const {
            return m_fut_status;
        }		
        opt_status get_opt_status() const {
            return m_opt_status;
        }		
        hold_reason get_hold_reason() const {
            return m_hold_reason;
        }		
        binary_days get_binary_days() const {
            return m_binary_days;
        }		
        hedge_delta_rule get_hedge_delta_rule() const {
            return m_hedge_delta_rule;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_sector(const sector& value)  {
            m_sector = value;
        }
        void set_risk_class(const risk_class& value)  {
            m_risk_class = value;
        }
        void set_stk_status(const stk_status& value)  {
            m_stk_status = value;
        }
        void set_fut_status(const fut_status& value)  {
            m_fut_status = value;
        }
        void set_opt_status(const opt_status& value)  {
            m_opt_status = value;
        }
        void set_hold_reason(const hold_reason& value)  {
            m_hold_reason = value;
        }
        void set_binary_days(const binary_days& value)  {
            m_binary_days = value;
        }
        void set_hedge_delta_rule(const hedge_delta_rule& value)  {
            m_hedge_delta_rule = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SymbolControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sector & value) {
            set_sector(value);
        }
        void set(const risk_class & value) {
            set_risk_class(value);
        }
        void set(const stk_status & value) {
            set_stk_status(value);
        }
        void set(const fut_status & value) {
            set_fut_status(value);
        }
        void set(const opt_status & value) {
            set_opt_status(value);
        }
        void set(const hold_reason & value) {
            set_hold_reason(value);
        }
        void set(const binary_days & value) {
            set_binary_days(value);
        }
        void set(const hedge_delta_rule & value) {
            set_hedge_delta_rule(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SymbolControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sector);
            set(value.m_risk_class);
            set(value.m_stk_status);
            set(value.m_fut_status);
            set(value.m_opt_status);
            set(value.m_hold_reason);
            set(value.m_binary_days);
            set(value.m_hedge_delta_rule);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SymbolControl() {
            m__meta.set_message_type("SymbolControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1670, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1670, length);
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
             *this = SymbolControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSector() const {
            return !(m_sector.empty());
        }
        bool IncludeRiskClass() const {
            return !(m_risk_class.empty());
        }
        bool IncludeBinaryDays() const {
            return !(m_binary_days == 0.0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            if ( IncludeSector()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_sector);
            }
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_risk_class);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkStatus>(m_stk_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutStatus>(m_fut_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>(m_hold_reason)));
            if ( IncludeBinaryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_binary_days);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
            if ( IncludeSector()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_sector));
            }
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_risk_class));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkStatus>(m_stk_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutStatus>(m_fut_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>(m_hold_reason)));
            if ( IncludeBinaryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_binary_days);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sector = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_status = static_cast<spiderrock::protobuf::api::StkStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_status = static_cast<spiderrock::protobuf::api::FutStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_status = static_cast<spiderrock::protobuf::api::OptStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hold_reason = static_cast<spiderrock::protobuf::api::HoldReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_binary_days = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_rule = static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto SymbolControl::get<SymbolControl::_meta>() const { return SymbolControl::_meta{ m__meta}; }
    template<> inline const auto SymbolControl::get<SymbolControl::pkey>() const { return SymbolControl::pkey{ m_pkey}; }
    template<> inline const auto SymbolControl::get<SymbolControl::sector>() const { return m_sector; }
    template<> inline const auto SymbolControl::get<SymbolControl::risk_class>() const { return m_risk_class; }
    template<> inline const auto SymbolControl::get<SymbolControl::stk_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkStatus>( m_stk_status)); }
    template<> inline const auto SymbolControl::get<SymbolControl::fut_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutStatus>( m_fut_status)); }
    template<> inline const auto SymbolControl::get<SymbolControl::opt_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>( m_opt_status)); }
    template<> inline const auto SymbolControl::get<SymbolControl::hold_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HoldReason>( m_hold_reason)); }
    template<> inline const auto SymbolControl::get<SymbolControl::binary_days>() const { return m_binary_days; }
    template<> inline const auto SymbolControl::get<SymbolControl::hedge_delta_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>( m_hedge_delta_rule)); }
    template<> inline const auto SymbolControl::get<SymbolControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto SymbolControl::get<SymbolControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SymbolControl::get<SymbolControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto SymbolControl_PKey::get<SymbolControl_PKey::sym_ctrl_accnt>() const { return m_sym_ctrl_accnt; }
    template<> inline const auto SymbolControl_PKey::get<SymbolControl_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto SymbolControl_PKey::get<SymbolControl_PKey::ticker>() const { return SymbolControl_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SymbolControl_PKey& m) {
        o << "\"sym_ctrl_accnt\":\"" << m.get<SymbolControl_PKey::sym_ctrl_accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SymbolControl_PKey::client_firm>() << "\"";
        o << ",\"ticker\":{" << m.get<SymbolControl_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SymbolControl& m) {
        o << "\"_meta\":{" << m.get<SymbolControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SymbolControl::pkey>() << "}";
        o << ",\"sector\":\"" << m.get<SymbolControl::sector>() << "\"";
        o << ",\"risk_class\":\"" << m.get<SymbolControl::risk_class>() << "\"";
        o << ",\"stk_status\":" << (int64_t)m.get<SymbolControl::stk_status>();
        o << ",\"fut_status\":" << (int64_t)m.get<SymbolControl::fut_status>();
        o << ",\"opt_status\":" << (int64_t)m.get<SymbolControl::opt_status>();
        o << ",\"hold_reason\":" << (int64_t)m.get<SymbolControl::hold_reason>();
        o << ",\"binary_days\":" << m.get<SymbolControl::binary_days>();
        o << ",\"hedge_delta_rule\":" << (int64_t)m.get<SymbolControl::hedge_delta_rule>();
        o << ",\"modified_by\":\"" << m.get<SymbolControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SymbolControl::modified_in>();
        {
            std::time_t tt = m.get<SymbolControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}