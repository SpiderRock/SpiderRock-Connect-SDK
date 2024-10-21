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

    #ifndef _auction_type__OpenAuctionType__GUARD__
    #define _auction_type__OpenAuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__OpenAuctionType, spiderrock::protobuf::api::OpenAuctionType);
    #endif//_auction_type__OpenAuctionType__GUARD__

    #ifndef _ref_prc__float__GUARD__
    #define _ref_prc__float__GUARD__
    DECL_STRONG_TYPE(ref_prc__float, float);
    #endif//_ref_prc__float__GUARD__

    #ifndef _buy_contracts__GUARD__
    #define _buy_contracts__GUARD__
    DECL_STRONG_TYPE(buy_contracts, int32);
    #endif//_buy_contracts__GUARD__

    #ifndef _sell_contracts__GUARD__
    #define _sell_contracts__GUARD__
    DECL_STRONG_TYPE(sell_contracts, int32);
    #endif//_sell_contracts__GUARD__

    #ifndef _indicative_prc__GUARD__
    #define _indicative_prc__GUARD__
    DECL_STRONG_TYPE(indicative_prc, float);
    #endif//_indicative_prc__GUARD__

    #ifndef _auction_only_prc__GUARD__
    #define _auction_only_prc__GUARD__
    DECL_STRONG_TYPE(auction_only_prc, float);
    #endif//_auction_only_prc__GUARD__

    #ifndef _opening_cond__GUARD__
    #define _opening_cond__GUARD__
    DECL_STRONG_TYPE(opening_cond, spiderrock::protobuf::api::OptAuctionOpenCondition);
    #endif//_opening_cond__GUARD__

    #ifndef _comp_mkt_bid_prc__GUARD__
    #define _comp_mkt_bid_prc__GUARD__
    DECL_STRONG_TYPE(comp_mkt_bid_prc, float);
    #endif//_comp_mkt_bid_prc__GUARD__

    #ifndef _comp_mkt_ask_prc__GUARD__
    #define _comp_mkt_ask_prc__GUARD__
    DECL_STRONG_TYPE(comp_mkt_ask_prc, float);
    #endif//_comp_mkt_ask_prc__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionOpenAuction_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenAuction_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenAuction_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionOpenAuction_PKey() {}

        virtual ~OptionOpenAuction_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
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
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionOpenAuction {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionOpenAuction_PKey;
        using auction_type = spiderrock::protobuf::api::auction_type__OpenAuctionType;
        using ref_prc = spiderrock::protobuf::api::ref_prc__float;
        using buy_contracts = spiderrock::protobuf::api::buy_contracts;
        using sell_contracts = spiderrock::protobuf::api::sell_contracts;
        using indicative_prc = spiderrock::protobuf::api::indicative_prc;
        using auction_only_prc = spiderrock::protobuf::api::auction_only_prc;
        using opening_cond = spiderrock::protobuf::api::opening_cond;
        using comp_mkt_bid_prc = spiderrock::protobuf::api::comp_mkt_bid_prc;
        using comp_mkt_ask_prc = spiderrock::protobuf::api::comp_mkt_ask_prc;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        auction_type m_auction_type{};
        ref_prc m_ref_prc{};
        buy_contracts m_buy_contracts{};
        sell_contracts m_sell_contracts{};
        indicative_prc m_indicative_prc{};
        auction_only_prc m_auction_only_prc{};
        opening_cond m_opening_cond{};
        comp_mkt_bid_prc m_comp_mkt_bid_prc{};
        comp_mkt_ask_prc m_comp_mkt_ask_prc{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        ref_prc get_ref_prc() const {
            return m_ref_prc;
        }		
        buy_contracts get_buy_contracts() const {
            return m_buy_contracts;
        }		
        sell_contracts get_sell_contracts() const {
            return m_sell_contracts;
        }		
        indicative_prc get_indicative_prc() const {
            return m_indicative_prc;
        }		
        auction_only_prc get_auction_only_prc() const {
            return m_auction_only_prc;
        }		
        opening_cond get_opening_cond() const {
            return m_opening_cond;
        }		
        comp_mkt_bid_prc get_comp_mkt_bid_prc() const {
            return m_comp_mkt_bid_prc;
        }		
        comp_mkt_ask_prc get_comp_mkt_ask_prc() const {
            return m_comp_mkt_ask_prc;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
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
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_ref_prc(const ref_prc& value)  {
            m_ref_prc = value;
        }
        void set_buy_contracts(const buy_contracts& value)  {
            m_buy_contracts = value;
        }
        void set_sell_contracts(const sell_contracts& value)  {
            m_sell_contracts = value;
        }
        void set_indicative_prc(const indicative_prc& value)  {
            m_indicative_prc = value;
        }
        void set_auction_only_prc(const auction_only_prc& value)  {
            m_auction_only_prc = value;
        }
        void set_opening_cond(const opening_cond& value)  {
            m_opening_cond = value;
        }
        void set_comp_mkt_bid_prc(const comp_mkt_bid_prc& value)  {
            m_comp_mkt_bid_prc = value;
        }
        void set_comp_mkt_ask_prc(const comp_mkt_ask_prc& value)  {
            m_comp_mkt_ask_prc = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenAuction::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const ref_prc & value) {
            set_ref_prc(value);
        }
        void set(const buy_contracts & value) {
            set_buy_contracts(value);
        }
        void set(const sell_contracts & value) {
            set_sell_contracts(value);
        }
        void set(const indicative_prc & value) {
            set_indicative_prc(value);
        }
        void set(const auction_only_prc & value) {
            set_auction_only_prc(value);
        }
        void set(const opening_cond & value) {
            set_opening_cond(value);
        }
        void set(const comp_mkt_bid_prc & value) {
            set_comp_mkt_bid_prc(value);
        }
        void set(const comp_mkt_ask_prc & value) {
            set_comp_mkt_ask_prc(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionOpenAuction & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_auction_type);
            set(value.m_ref_prc);
            set(value.m_buy_contracts);
            set(value.m_sell_contracts);
            set(value.m_indicative_prc);
            set(value.m_auction_only_prc);
            set(value.m_opening_cond);
            set(value.m_comp_mkt_bid_prc);
            set(value.m_comp_mkt_ask_prc);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        OptionOpenAuction() {
            m__meta.set_message_type("OptionOpenAuction");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2790, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2790, length);
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
             *this = OptionOpenAuction{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRefPrc() const {
            return !(m_ref_prc == 0.0);
        }
        bool IncludeBuyContracts() const {
            return !(m_buy_contracts == 0);
        }
        bool IncludeSellContracts() const {
            return !(m_sell_contracts == 0);
        }
        bool IncludeIndicativePrc() const {
            return !(m_indicative_prc == 0.0);
        }
        bool IncludeAuctionOnlyPrc() const {
            return !(m_auction_only_prc == 0.0);
        }
        bool IncludeCompMktBidPrc() const {
            return !(m_comp_mkt_bid_prc == 0.0);
        }
        bool IncludeCompMktAskPrc() const {
            return !(m_comp_mkt_ask_prc == 0.0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OpenAuctionType>(m_auction_type)));
            if ( IncludeRefPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_ref_prc);
            }
            if ( IncludeBuyContracts()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_buy_contracts);
            }
            if ( IncludeSellContracts()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_sell_contracts);
            }
            if ( IncludeIndicativePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_indicative_prc);
            }
            if ( IncludeAuctionOnlyPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_auction_only_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptAuctionOpenCondition>(m_opening_cond)));
            if ( IncludeCompMktBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_comp_mkt_bid_prc);
            }
            if ( IncludeCompMktAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_comp_mkt_ask_prc);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OpenAuctionType>(m_auction_type)));
            if ( IncludeRefPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_ref_prc);
            }
            if ( IncludeBuyContracts()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_buy_contracts);
            }
            if ( IncludeSellContracts()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_sell_contracts);
            }
            if ( IncludeIndicativePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_indicative_prc);
            }
            if ( IncludeAuctionOnlyPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_auction_only_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptAuctionOpenCondition>(m_opening_cond)));
            if ( IncludeCompMktBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_comp_mkt_bid_prc);
            }
            if ( IncludeCompMktAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_comp_mkt_ask_prc);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_timestamp);
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
                            m_auction_type = static_cast<spiderrock::protobuf::api::OpenAuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_buy_contracts = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sell_contracts = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_indicative_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_only_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opening_cond = static_cast<spiderrock::protobuf::api::OptAuctionOpenCondition>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comp_mkt_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comp_mkt_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
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

    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::_meta>() const { return OptionOpenAuction::_meta{ m__meta}; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::pkey>() const { return OptionOpenAuction::pkey{ m_pkey}; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OpenAuctionType>( m_auction_type)); }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::ref_prc>() const { return m_ref_prc; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::buy_contracts>() const { return m_buy_contracts; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::sell_contracts>() const { return m_sell_contracts; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::indicative_prc>() const { return m_indicative_prc; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::auction_only_prc>() const { return m_auction_only_prc; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::opening_cond>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptAuctionOpenCondition>( m_opening_cond)); }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::comp_mkt_bid_prc>() const { return m_comp_mkt_bid_prc; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::comp_mkt_ask_prc>() const { return m_comp_mkt_ask_prc; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionOpenAuction::get<OptionOpenAuction::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionOpenAuction_PKey::get<OptionOpenAuction_PKey::okey>() const { return OptionOpenAuction_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionOpenAuction_PKey& m) {
        o << "\"okey\":{" << m.get<OptionOpenAuction_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionOpenAuction& m) {
        o << "\"_meta\":{" << m.get<OptionOpenAuction::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionOpenAuction::pkey>() << "}";
        o << ",\"auction_type\":" << (int64_t)m.get<OptionOpenAuction::auction_type>();
        o << ",\"ref_prc\":" << m.get<OptionOpenAuction::ref_prc>();
        o << ",\"buy_contracts\":" << m.get<OptionOpenAuction::buy_contracts>();
        o << ",\"sell_contracts\":" << m.get<OptionOpenAuction::sell_contracts>();
        o << ",\"indicative_prc\":" << m.get<OptionOpenAuction::indicative_prc>();
        o << ",\"auction_only_prc\":" << m.get<OptionOpenAuction::auction_only_prc>();
        o << ",\"opening_cond\":" << (int64_t)m.get<OptionOpenAuction::opening_cond>();
        o << ",\"comp_mkt_bid_prc\":" << m.get<OptionOpenAuction::comp_mkt_bid_prc>();
        o << ",\"comp_mkt_ask_prc\":" << m.get<OptionOpenAuction::comp_mkt_ask_prc>();
        o << ",\"src_timestamp\":" << m.get<OptionOpenAuction::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionOpenAuction::net_timestamp>();
        {
            std::time_t tt = m.get<OptionOpenAuction::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}