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

    #ifndef _open_position__GUARD__
    #define _open_position__GUARD__
    DECL_STRONG_TYPE(open_position, int32);
    #endif//_open_position__GUARD__

    #ifndef _open_pos_type__GUARD__
    #define _open_pos_type__GUARD__
    DECL_STRONG_TYPE(open_pos_type, spiderrock::protobuf::api::OpenPosType);
    #endif//_open_pos_type__GUARD__

    #ifndef _bot_quantity__int32__GUARD__
    #define _bot_quantity__int32__GUARD__
    DECL_STRONG_TYPE(bot_quantity__int32, int32);
    #endif//_bot_quantity__int32__GUARD__

    #ifndef _sld_quantity__int32__GUARD__
    #define _sld_quantity__int32__GUARD__
    DECL_STRONG_TYPE(sld_quantity__int32, int32);
    #endif//_sld_quantity__int32__GUARD__

    #ifndef _bid_leaves__GUARD__
    #define _bid_leaves__GUARD__
    DECL_STRONG_TYPE(bid_leaves, int32);
    #endif//_bid_leaves__GUARD__

    #ifndef _ask_leaves__GUARD__
    #define _ask_leaves__GUARD__
    DECL_STRONG_TYPE(ask_leaves, int32);
    #endif//_ask_leaves__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _agg_group__GUARD__
    #define _agg_group__GUARD__
    DECL_STRONG_TYPE(agg_group, string);
    #endif//_agg_group__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _extern_source__GUARD__
    #define _extern_source__GUARD__
    DECL_STRONG_TYPE(extern_source, spiderrock::protobuf::api::ExternSource);
    #endif//_extern_source__GUARD__

    
    class ExternAggGroupReport_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using agg_group = spiderrock::protobuf::api::agg_group;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using extern_source = spiderrock::protobuf::api::extern_source;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        agg_group m_agg_group{};
        client_firm m_client_firm{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        extern_source m_extern_source{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        agg_group get_agg_group() const {
            return m_agg_group;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }
        run_status get_run_status() const {
            return m_run_status;
        }
        extern_source get_extern_source() const {
            return m_extern_source;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_agg_group(const agg_group& value)  {
            m_agg_group = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_extern_source(const extern_source& value)  {
            m_extern_source = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExternAggGroupReport_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ExternAggGroupReport_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const agg_group & value) { set_agg_group(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const sys_environment & value) { set_sys_environment(value); }
        void set(const run_status & value) { set_run_status(value); }
        void set(const extern_source & value) { set_extern_source(value); }


        ExternAggGroupReport_PKey() {}

        virtual ~ExternAggGroupReport_PKey() {
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
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAggGroup() const {
            return !(m_agg_group.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_agg_group);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(15,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(16,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExternSource>(m_extern_source)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_agg_group));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,15,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,16,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExternSource>(m_extern_source)));
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 14: {m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 15: {m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 16: {m_extern_source = static_cast<spiderrock::protobuf::api::ExternSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class ExternAggGroupReport {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ExternAggGroupReport_PKey;
        using open_position = spiderrock::protobuf::api::open_position;
        using open_pos_type = spiderrock::protobuf::api::open_pos_type;
        using bot_quantity = spiderrock::protobuf::api::bot_quantity__int32;
        using sld_quantity = spiderrock::protobuf::api::sld_quantity__int32;
        using bid_leaves = spiderrock::protobuf::api::bid_leaves;
        using ask_leaves = spiderrock::protobuf::api::ask_leaves;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        open_position m_open_position{};
        open_pos_type m_open_pos_type{};
        bot_quantity m_bot_quantity{};
        sld_quantity m_sld_quantity{};
        bid_leaves m_bid_leaves{};
        ask_leaves m_ask_leaves{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        open_position get_open_position() const {
            return m_open_position;
        }		
        open_pos_type get_open_pos_type() const {
            return m_open_pos_type;
        }		
        bot_quantity get_bot_quantity() const {
            return m_bot_quantity;
        }		
        sld_quantity get_sld_quantity() const {
            return m_sld_quantity;
        }		
        bid_leaves get_bid_leaves() const {
            return m_bid_leaves;
        }		
        ask_leaves get_ask_leaves() const {
            return m_ask_leaves;
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
        void set_open_position(const open_position& value)  {
            m_open_position = value;
        }
        void set_open_pos_type(const open_pos_type& value)  {
            m_open_pos_type = value;
        }
        void set_bot_quantity(const bot_quantity& value)  {
            m_bot_quantity = value;
        }
        void set_sld_quantity(const sld_quantity& value)  {
            m_sld_quantity = value;
        }
        void set_bid_leaves(const bid_leaves& value)  {
            m_bid_leaves = value;
        }
        void set_ask_leaves(const ask_leaves& value)  {
            m_ask_leaves = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExternAggGroupReport::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const open_position & value) {
            set_open_position(value);
        }
        void set(const open_pos_type & value) {
            set_open_pos_type(value);
        }
        void set(const bot_quantity & value) {
            set_bot_quantity(value);
        }
        void set(const sld_quantity & value) {
            set_sld_quantity(value);
        }
        void set(const bid_leaves & value) {
            set_bid_leaves(value);
        }
        void set(const ask_leaves & value) {
            set_ask_leaves(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ExternAggGroupReport & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_open_position);
            set(value.m_open_pos_type);
            set(value.m_bot_quantity);
            set(value.m_sld_quantity);
            set(value.m_bid_leaves);
            set(value.m_ask_leaves);
            set(value.m_timestamp);
        }

        ExternAggGroupReport() {
            m__meta.set_message_type("ExternAggGroupReport");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2270, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2270, length);
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
             *this = ExternAggGroupReport{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOpenPosition() const {
            return !(m_open_position == 0);
        }
        bool IncludeBotQuantity() const {
            return !(m_bot_quantity == 0);
        }
        bool IncludeSldQuantity() const {
            return !(m_sld_quantity == 0);
        }
        bool IncludeBidLeaves() const {
            return !(m_bid_leaves == 0);
        }
        bool IncludeAskLeaves() const {
            return !(m_ask_leaves == 0);
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
            if ( IncludeOpenPosition()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_open_position);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OpenPosType>(m_open_pos_type)));
            if ( IncludeBotQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_bot_quantity);
            }
            if ( IncludeSldQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_sld_quantity);
            }
            if ( IncludeBidLeaves()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_bid_leaves);
            }
            if ( IncludeAskLeaves()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_ask_leaves);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(118, m_timestamp);
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
            if ( IncludeOpenPosition()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_open_position);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OpenPosType>(m_open_pos_type)));
            if ( IncludeBotQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_bot_quantity);
            }
            if ( IncludeSldQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_sld_quantity);
            }
            if ( IncludeBidLeaves()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_bid_leaves);
            }
            if ( IncludeAskLeaves()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_ask_leaves);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 118, m_timestamp);
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
                            m_open_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_open_pos_type = static_cast<spiderrock::protobuf::api::OpenPosType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bot_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sld_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_leaves = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_leaves = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
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

    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::_meta>() const { return ExternAggGroupReport::_meta{ m__meta}; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::pkey>() const { return ExternAggGroupReport::pkey{ m_pkey}; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::open_position>() const { return m_open_position; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::open_pos_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OpenPosType>( m_open_pos_type)); }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::bot_quantity>() const { return m_bot_quantity; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::sld_quantity>() const { return m_sld_quantity; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::bid_leaves>() const { return m_bid_leaves; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::ask_leaves>() const { return m_ask_leaves; }
    template<> inline const auto ExternAggGroupReport::get<ExternAggGroupReport::timestamp>() const { return m_timestamp; }
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::sec_key>() const { return ExternAggGroupReport_PKey::sec_key{m_sec_key}; }
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::agg_group>() const { return m_agg_group; }
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment));}
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status));}
    template<> inline const auto ExternAggGroupReport_PKey::get<ExternAggGroupReport_PKey::extern_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExternSource>(m_extern_source));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ExternAggGroupReport_PKey& m) {
        o << "\"sec_key\":{" << m.get<ExternAggGroupReport_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<ExternAggGroupReport_PKey::sec_type>();
        o << ",\"agg_group\":\"" << m.get<ExternAggGroupReport_PKey::agg_group>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ExternAggGroupReport_PKey::client_firm>() << "\"";
        o << ",\"sys_environment\":" << (int64_t)m.get<ExternAggGroupReport_PKey::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<ExternAggGroupReport_PKey::run_status>();
        o << ",\"extern_source\":" << (int64_t)m.get<ExternAggGroupReport_PKey::extern_source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ExternAggGroupReport& m) {
        o << "\"_meta\":{" << m.get<ExternAggGroupReport::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ExternAggGroupReport::pkey>() << "}";
        o << ",\"open_position\":" << m.get<ExternAggGroupReport::open_position>();
        o << ",\"open_pos_type\":" << (int64_t)m.get<ExternAggGroupReport::open_pos_type>();
        o << ",\"bot_quantity\":" << m.get<ExternAggGroupReport::bot_quantity>();
        o << ",\"sld_quantity\":" << m.get<ExternAggGroupReport::sld_quantity>();
        o << ",\"bid_leaves\":" << m.get<ExternAggGroupReport::bid_leaves>();
        o << ",\"ask_leaves\":" << m.get<ExternAggGroupReport::ask_leaves>();
        {
            std::time_t tt = m.get<ExternAggGroupReport::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}