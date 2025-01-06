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

    #ifndef _agg_group_type__GUARD__
    #define _agg_group_type__GUARD__
    DECL_STRONG_TYPE(agg_group_type, spiderrock::protobuf::api::AggGroupType);
    #endif//_agg_group_type__GUARD__

    #ifndef _open_position__GUARD__
    #define _open_position__GUARD__
    DECL_STRONG_TYPE(open_position, int32);
    #endif//_open_position__GUARD__

    #ifndef _bot_quantity__int32__GUARD__
    #define _bot_quantity__int32__GUARD__
    DECL_STRONG_TYPE(bot_quantity__int32, int32);
    #endif//_bot_quantity__int32__GUARD__

    #ifndef _sld_quantity__int32__GUARD__
    #define _sld_quantity__int32__GUARD__
    DECL_STRONG_TYPE(sld_quantity__int32, int32);
    #endif//_sld_quantity__int32__GUARD__

    #ifndef _sld_short_qty__GUARD__
    #define _sld_short_qty__GUARD__
    DECL_STRONG_TYPE(sld_short_qty, int32);
    #endif//_sld_short_qty__GUARD__

    #ifndef _extern_opn_pos__GUARD__
    #define _extern_opn_pos__GUARD__
    DECL_STRONG_TYPE(extern_opn_pos, int32);
    #endif//_extern_opn_pos__GUARD__

    #ifndef _extern_bot_quan__GUARD__
    #define _extern_bot_quan__GUARD__
    DECL_STRONG_TYPE(extern_bot_quan, int32);
    #endif//_extern_bot_quan__GUARD__

    #ifndef _extern_sld_quan__GUARD__
    #define _extern_sld_quan__GUARD__
    DECL_STRONG_TYPE(extern_sld_quan, int32);
    #endif//_extern_sld_quan__GUARD__

    #ifndef _source__string__GUARD__
    #define _source__string__GUARD__
    DECL_STRONG_TYPE(source__string, string);
    #endif//_source__string__GUARD__

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

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _agg_group__GUARD__
    #define _agg_group__GUARD__
    DECL_STRONG_TYPE(agg_group, string);
    #endif//_agg_group__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    
    class RiskAggGroupStateV5_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using agg_group = spiderrock::protobuf::api::agg_group;
        using trade_date = spiderrock::protobuf::api::trade_date;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        client_firm m_client_firm{};
        agg_group m_agg_group{};
        trade_date m_trade_date{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        agg_group get_agg_group() const {
            return m_agg_group;
        }
		trade_date get_trade_date() const {
            return m_trade_date;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_agg_group(const agg_group& value)  {
            m_agg_group = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskAggGroupStateV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskAggGroupStateV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const agg_group & value) { set_agg_group(value); }
        void set(const trade_date & value) { set_trade_date(value); }


        RiskAggGroupStateV5_PKey() {}

        virtual ~RiskAggGroupStateV5_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeAggGroup() const {
            return !(m_agg_group.empty());
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            if ( IncludeAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_agg_group);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(14, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_client_firm));
            }
            if ( IncludeAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_agg_group));
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,14, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
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
                    case 10: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 14: {
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
    

    class RiskAggGroupStateV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RiskAggGroupStateV5_PKey;
        using agg_group_type = spiderrock::protobuf::api::agg_group_type;
        using open_position = spiderrock::protobuf::api::open_position;
        using bot_quantity = spiderrock::protobuf::api::bot_quantity__int32;
        using sld_quantity = spiderrock::protobuf::api::sld_quantity__int32;
        using sld_short_qty = spiderrock::protobuf::api::sld_short_qty;
        using extern_opn_pos = spiderrock::protobuf::api::extern_opn_pos;
        using extern_bot_quan = spiderrock::protobuf::api::extern_bot_quan;
        using extern_sld_quan = spiderrock::protobuf::api::extern_sld_quan;
        using source = spiderrock::protobuf::api::source__string;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        agg_group_type m_agg_group_type{};
        open_position m_open_position{};
        bot_quantity m_bot_quantity{};
        sld_quantity m_sld_quantity{};
        sld_short_qty m_sld_short_qty{};
        extern_opn_pos m_extern_opn_pos{};
        extern_bot_quan m_extern_bot_quan{};
        extern_sld_quan m_extern_sld_quan{};
        source m_source{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        agg_group_type get_agg_group_type() const {
            return m_agg_group_type;
        }		
        open_position get_open_position() const {
            return m_open_position;
        }		
        bot_quantity get_bot_quantity() const {
            return m_bot_quantity;
        }		
        sld_quantity get_sld_quantity() const {
            return m_sld_quantity;
        }		
        sld_short_qty get_sld_short_qty() const {
            return m_sld_short_qty;
        }		
        extern_opn_pos get_extern_opn_pos() const {
            return m_extern_opn_pos;
        }		
        extern_bot_quan get_extern_bot_quan() const {
            return m_extern_bot_quan;
        }		
        extern_sld_quan get_extern_sld_quan() const {
            return m_extern_sld_quan;
        }		
        source get_source() const {
            return m_source;
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
        void set_agg_group_type(const agg_group_type& value)  {
            m_agg_group_type = value;
        }
        void set_open_position(const open_position& value)  {
            m_open_position = value;
        }
        void set_bot_quantity(const bot_quantity& value)  {
            m_bot_quantity = value;
        }
        void set_sld_quantity(const sld_quantity& value)  {
            m_sld_quantity = value;
        }
        void set_sld_short_qty(const sld_short_qty& value)  {
            m_sld_short_qty = value;
        }
        void set_extern_opn_pos(const extern_opn_pos& value)  {
            m_extern_opn_pos = value;
        }
        void set_extern_bot_quan(const extern_bot_quan& value)  {
            m_extern_bot_quan = value;
        }
        void set_extern_sld_quan(const extern_sld_quan& value)  {
            m_extern_sld_quan = value;
        }
        void set_source(const source& value)  {
            m_source = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskAggGroupStateV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const agg_group_type & value) {
            set_agg_group_type(value);
        }
        void set(const open_position & value) {
            set_open_position(value);
        }
        void set(const bot_quantity & value) {
            set_bot_quantity(value);
        }
        void set(const sld_quantity & value) {
            set_sld_quantity(value);
        }
        void set(const sld_short_qty & value) {
            set_sld_short_qty(value);
        }
        void set(const extern_opn_pos & value) {
            set_extern_opn_pos(value);
        }
        void set(const extern_bot_quan & value) {
            set_extern_bot_quan(value);
        }
        void set(const extern_sld_quan & value) {
            set_extern_sld_quan(value);
        }
        void set(const source & value) {
            set_source(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const RiskAggGroupStateV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_agg_group_type);
            set(value.m_open_position);
            set(value.m_bot_quantity);
            set(value.m_sld_quantity);
            set(value.m_sld_short_qty);
            set(value.m_extern_opn_pos);
            set(value.m_extern_bot_quan);
            set(value.m_extern_sld_quan);
            set(value.m_source);
            set(value.m_timestamp);
        }

        RiskAggGroupStateV5() {
            m__meta.set_message_type("RiskAggGroupStateV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4820, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4820, length);
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
             *this = RiskAggGroupStateV5{};
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
        bool IncludeSldShortQty() const {
            return !(m_sld_short_qty == 0);
        }
        bool IncludeExternOpnPos() const {
            return !(m_extern_opn_pos == 0);
        }
        bool IncludeExternBotQuan() const {
            return !(m_extern_bot_quan == 0);
        }
        bool IncludeExternSldQuan() const {
            return !(m_extern_sld_quan == 0);
        }
        bool IncludeSource() const {
            return !(m_source.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AggGroupType>(m_agg_group_type)));
            if ( IncludeOpenPosition()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_open_position);
            }
            if ( IncludeBotQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_bot_quantity);
            }
            if ( IncludeSldQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_sld_quantity);
            }
            if ( IncludeSldShortQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_sld_short_qty);
            }
            if ( IncludeExternOpnPos()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_extern_opn_pos);
            }
            if ( IncludeExternBotQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_extern_bot_quan);
            }
            if ( IncludeExternSldQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_extern_sld_quan);
            }
            if ( IncludeSource()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_source);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AggGroupType>(m_agg_group_type)));
            if ( IncludeOpenPosition()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_open_position);
            }
            if ( IncludeBotQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_bot_quantity);
            }
            if ( IncludeSldQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_sld_quantity);
            }
            if ( IncludeSldShortQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_sld_short_qty);
            }
            if ( IncludeExternOpnPos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_extern_opn_pos);
            }
            if ( IncludeExternBotQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_extern_bot_quan);
            }
            if ( IncludeExternSldQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_extern_sld_quan);
            }
            if ( IncludeSource()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_source));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_timestamp);
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
                            m_agg_group_type = static_cast<spiderrock::protobuf::api::AggGroupType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
                            m_sld_short_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_extern_opn_pos = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_extern_bot_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_extern_sld_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_source = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
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

    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::_meta>() const { return RiskAggGroupStateV5::_meta{ m__meta}; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::pkey>() const { return RiskAggGroupStateV5::pkey{ m_pkey}; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::agg_group_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AggGroupType>( m_agg_group_type)); }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::open_position>() const { return m_open_position; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::bot_quantity>() const { return m_bot_quantity; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::sld_quantity>() const { return m_sld_quantity; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::sld_short_qty>() const { return m_sld_short_qty; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::extern_opn_pos>() const { return m_extern_opn_pos; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::extern_bot_quan>() const { return m_extern_bot_quan; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::extern_sld_quan>() const { return m_extern_sld_quan; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::source>() const { return m_source; }
    template<> inline const auto RiskAggGroupStateV5::get<RiskAggGroupStateV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto RiskAggGroupStateV5_PKey::get<RiskAggGroupStateV5_PKey::sec_key>() const { return RiskAggGroupStateV5_PKey::sec_key{m_sec_key}; }
    template<> inline const auto RiskAggGroupStateV5_PKey::get<RiskAggGroupStateV5_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto RiskAggGroupStateV5_PKey::get<RiskAggGroupStateV5_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto RiskAggGroupStateV5_PKey::get<RiskAggGroupStateV5_PKey::agg_group>() const { return m_agg_group; }
    template<> inline const auto RiskAggGroupStateV5_PKey::get<RiskAggGroupStateV5_PKey::trade_date>() const { return RiskAggGroupStateV5_PKey::trade_date{m_trade_date}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RiskAggGroupStateV5_PKey& m) {
        o << "\"sec_key\":{" << m.get<RiskAggGroupStateV5_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<RiskAggGroupStateV5_PKey::sec_type>();
        o << ",\"client_firm\":\"" << m.get<RiskAggGroupStateV5_PKey::client_firm>() << "\"";
        o << ",\"agg_group\":\"" << m.get<RiskAggGroupStateV5_PKey::agg_group>() << "\"";
        o << ",\"trade_date\":{" << m.get<RiskAggGroupStateV5_PKey::trade_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RiskAggGroupStateV5& m) {
        o << "\"_meta\":{" << m.get<RiskAggGroupStateV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RiskAggGroupStateV5::pkey>() << "}";
        o << ",\"agg_group_type\":" << (int64_t)m.get<RiskAggGroupStateV5::agg_group_type>();
        o << ",\"open_position\":" << m.get<RiskAggGroupStateV5::open_position>();
        o << ",\"bot_quantity\":" << m.get<RiskAggGroupStateV5::bot_quantity>();
        o << ",\"sld_quantity\":" << m.get<RiskAggGroupStateV5::sld_quantity>();
        o << ",\"sld_short_qty\":" << m.get<RiskAggGroupStateV5::sld_short_qty>();
        o << ",\"extern_opn_pos\":" << m.get<RiskAggGroupStateV5::extern_opn_pos>();
        o << ",\"extern_bot_quan\":" << m.get<RiskAggGroupStateV5::extern_bot_quan>();
        o << ",\"extern_sld_quan\":" << m.get<RiskAggGroupStateV5::extern_sld_quan>();
        o << ",\"source\":\"" << m.get<RiskAggGroupStateV5::source>() << "\"";
        {
            std::time_t tt = m.get<RiskAggGroupStateV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}