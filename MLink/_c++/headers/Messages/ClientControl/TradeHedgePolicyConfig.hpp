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

    #ifndef _enabled__GUARD__
    #define _enabled__GUARD__
    DECL_STRONG_TYPE(enabled, spiderrock::protobuf::api::YesNo);
    #endif//_enabled__GUARD__

    #ifndef _hedge_window__GUARD__
    #define _hedge_window__GUARD__
    DECL_STRONG_TYPE(hedge_window, spiderrock::protobuf::api::HedgeWindow);
    #endif//_hedge_window__GUARD__

    #ifndef _hedge_algo__GUARD__
    #define _hedge_algo__GUARD__
    DECL_STRONG_TYPE(hedge_algo, spiderrock::protobuf::api::HedgeAlgo);
    #endif//_hedge_algo__GUARD__

    #ifndef _exec_brkr_algo__GUARD__
    #define _exec_brkr_algo__GUARD__
    DECL_STRONG_TYPE(exec_brkr_algo, string);
    #endif//_exec_brkr_algo__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _exec_bkkr_tags__GUARD__
    #define _exec_bkkr_tags__GUARD__
    DECL_STRONG_TYPE(exec_bkkr_tags, string);
    #endif//_exec_bkkr_tags__GUARD__

    #ifndef _can_hedge_away_executions__GUARD__
    #define _can_hedge_away_executions__GUARD__
    DECL_STRONG_TYPE(can_hedge_away_executions, spiderrock::protobuf::api::YesNo);
    #endif//_can_hedge_away_executions__GUARD__

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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _policy__TradeHedgePolicy__GUARD__
    #define _policy__TradeHedgePolicy__GUARD__
    DECL_STRONG_TYPE(policy__TradeHedgePolicy, spiderrock::protobuf::api::TradeHedgePolicy);
    #endif//_policy__TradeHedgePolicy__GUARD__

    
    class TradeHedgePolicyConfig_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using policy = spiderrock::protobuf::api::policy__TradeHedgePolicy;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        policy m_policy{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        policy get_policy() const {
            return m_policy;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_policy(const policy& value)  {
            m_policy = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TradeHedgePolicyConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to TradeHedgePolicyConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const policy & value) { set_policy(value); }


        TradeHedgePolicyConfig_PKey() {}

        virtual ~TradeHedgePolicyConfig_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeHedgePolicy>(m_policy)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeHedgePolicy>(m_policy)));
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
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_policy = static_cast<spiderrock::protobuf::api::TradeHedgePolicy>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class TradeHedgePolicyConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::TradeHedgePolicyConfig_PKey;
        using enabled = spiderrock::protobuf::api::enabled;
        using hedge_window = spiderrock::protobuf::api::hedge_window;
        using hedge_algo = spiderrock::protobuf::api::hedge_algo;
        using exec_brkr_algo = spiderrock::protobuf::api::exec_brkr_algo;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_bkkr_tags = spiderrock::protobuf::api::exec_bkkr_tags;
        using can_hedge_away_executions = spiderrock::protobuf::api::can_hedge_away_executions;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        enabled m_enabled{};
        hedge_window m_hedge_window{};
        hedge_algo m_hedge_algo{};
        exec_brkr_algo m_exec_brkr_algo{};
        exec_brkr_code m_exec_brkr_code{};
        exec_bkkr_tags m_exec_bkkr_tags{};
        can_hedge_away_executions m_can_hedge_away_executions{};
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
        enabled get_enabled() const {
            return m_enabled;
        }		
        hedge_window get_hedge_window() const {
            return m_hedge_window;
        }		
        hedge_algo get_hedge_algo() const {
            return m_hedge_algo;
        }		
        exec_brkr_algo get_exec_brkr_algo() const {
            return m_exec_brkr_algo;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        exec_bkkr_tags get_exec_bkkr_tags() const {
            return m_exec_bkkr_tags;
        }		
        can_hedge_away_executions get_can_hedge_away_executions() const {
            return m_can_hedge_away_executions;
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
        void set_enabled(const enabled& value)  {
            m_enabled = value;
        }
        void set_hedge_window(const hedge_window& value)  {
            m_hedge_window = value;
        }
        void set_hedge_algo(const hedge_algo& value)  {
            m_hedge_algo = value;
        }
        void set_exec_brkr_algo(const exec_brkr_algo& value)  {
            m_exec_brkr_algo = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_exec_bkkr_tags(const exec_bkkr_tags& value)  {
            m_exec_bkkr_tags = value;
        }
        void set_can_hedge_away_executions(const can_hedge_away_executions& value)  {
            m_can_hedge_away_executions = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TradeHedgePolicyConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const enabled & value) {
            set_enabled(value);
        }
        void set(const hedge_window & value) {
            set_hedge_window(value);
        }
        void set(const hedge_algo & value) {
            set_hedge_algo(value);
        }
        void set(const exec_brkr_algo & value) {
            set_exec_brkr_algo(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const exec_bkkr_tags & value) {
            set_exec_bkkr_tags(value);
        }
        void set(const can_hedge_away_executions & value) {
            set_can_hedge_away_executions(value);
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

        void set(const TradeHedgePolicyConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_enabled);
            set(value.m_hedge_window);
            set(value.m_hedge_algo);
            set(value.m_exec_brkr_algo);
            set(value.m_exec_brkr_code);
            set(value.m_exec_bkkr_tags);
            set(value.m_can_hedge_away_executions);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        TradeHedgePolicyConfig() {
            m__meta.set_message_type("TradeHedgePolicyConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1812, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1812, length);
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
             *this = TradeHedgePolicyConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeExecBrkrAlgo() const {
            return !(m_exec_brkr_algo.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExecBkkrTags() const {
            return !(m_exec_bkkr_tags.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeWindow>(m_hedge_window)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_hedge_algo)));
            if ( IncludeExecBrkrAlgo()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_exec_brkr_algo);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(104,m_exec_brkr_code);
            }
            if ( IncludeExecBkkrTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(105,m_exec_bkkr_tags);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_hedge_away_executions)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(107,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeWindow>(m_hedge_window)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_hedge_algo)));
            if ( IncludeExecBrkrAlgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_exec_brkr_algo));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,104,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBkkrTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,105,static_cast<string>(m_exec_bkkr_tags));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_can_hedge_away_executions)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,107,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_enabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_window = static_cast<spiderrock::protobuf::api::HedgeWindow>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_algo = static_cast<spiderrock::protobuf::api::HedgeAlgo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_algo = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_bkkr_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_can_hedge_away_executions = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::_meta>() const { return TradeHedgePolicyConfig::_meta{ m__meta}; }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::pkey>() const { return TradeHedgePolicyConfig::pkey{ m_pkey}; }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_enabled)); }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::hedge_window>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeWindow>( m_hedge_window)); }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::hedge_algo>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>( m_hedge_algo)); }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::exec_brkr_algo>() const { return m_exec_brkr_algo; }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::exec_bkkr_tags>() const { return m_exec_bkkr_tags; }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::can_hedge_away_executions>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_can_hedge_away_executions)); }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto TradeHedgePolicyConfig::get<TradeHedgePolicyConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto TradeHedgePolicyConfig_PKey::get<TradeHedgePolicyConfig_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto TradeHedgePolicyConfig_PKey::get<TradeHedgePolicyConfig_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto TradeHedgePolicyConfig_PKey::get<TradeHedgePolicyConfig_PKey::policy>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeHedgePolicy>(m_policy));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const TradeHedgePolicyConfig_PKey& m) {
        o << "\"accnt\":\"" << m.get<TradeHedgePolicyConfig_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<TradeHedgePolicyConfig_PKey::client_firm>() << "\"";
        o << ",\"policy\":" << (int64_t)m.get<TradeHedgePolicyConfig_PKey::policy>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TradeHedgePolicyConfig& m) {
        o << "\"_meta\":{" << m.get<TradeHedgePolicyConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<TradeHedgePolicyConfig::pkey>() << "}";
        o << ",\"enabled\":" << (int64_t)m.get<TradeHedgePolicyConfig::enabled>();
        o << ",\"hedge_window\":" << (int64_t)m.get<TradeHedgePolicyConfig::hedge_window>();
        o << ",\"hedge_algo\":" << (int64_t)m.get<TradeHedgePolicyConfig::hedge_algo>();
        o << ",\"exec_brkr_algo\":\"" << m.get<TradeHedgePolicyConfig::exec_brkr_algo>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<TradeHedgePolicyConfig::exec_brkr_code>() << "\"";
        o << ",\"exec_bkkr_tags\":\"" << m.get<TradeHedgePolicyConfig::exec_bkkr_tags>() << "\"";
        o << ",\"can_hedge_away_executions\":" << (int64_t)m.get<TradeHedgePolicyConfig::can_hedge_away_executions>();
        o << ",\"modified_by\":\"" << m.get<TradeHedgePolicyConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<TradeHedgePolicyConfig::modified_in>();
        {
            std::time_t tt = m.get<TradeHedgePolicyConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}