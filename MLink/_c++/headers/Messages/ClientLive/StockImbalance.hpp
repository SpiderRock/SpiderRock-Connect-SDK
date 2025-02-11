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

    #ifndef _auction_time__GUARD__
    #define _auction_time__GUARD__
    DECL_STRONG_TYPE(auction_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_auction_time__GUARD__

    #ifndef _max_imbalance__GUARD__
    #define _max_imbalance__GUARD__
    DECL_STRONG_TYPE(max_imbalance, int32);
    #endif//_max_imbalance__GUARD__

    #ifndef _max_imbalance_exch__GUARD__
    #define _max_imbalance_exch__GUARD__
    DECL_STRONG_TYPE(max_imbalance_exch, spiderrock::protobuf::api::StkExch);
    #endif//_max_imbalance_exch__GUARD__

    #ifndef _max_imbalance_match_px__GUARD__
    #define _max_imbalance_match_px__GUARD__
    DECL_STRONG_TYPE(max_imbalance_match_px, double);
    #endif//_max_imbalance_match_px__GUARD__

    #ifndef _max_imbalance_status__GUARD__
    #define _max_imbalance_status__GUARD__
    DECL_STRONG_TYPE(max_imbalance_status, spiderrock::protobuf::api::AuctionStatus);
    #endif//_max_imbalance_status__GUARD__

    #ifndef _cum_bid_imbalance_mkt__GUARD__
    #define _cum_bid_imbalance_mkt__GUARD__
    DECL_STRONG_TYPE(cum_bid_imbalance_mkt, int32);
    #endif//_cum_bid_imbalance_mkt__GUARD__

    #ifndef _cum_ask_imbalance_mkt__GUARD__
    #define _cum_ask_imbalance_mkt__GUARD__
    DECL_STRONG_TYPE(cum_ask_imbalance_mkt, int32);
    #endif//_cum_ask_imbalance_mkt__GUARD__

    #ifndef _cum_bid_imbalance_tot__GUARD__
    #define _cum_bid_imbalance_tot__GUARD__
    DECL_STRONG_TYPE(cum_bid_imbalance_tot, int32);
    #endif//_cum_bid_imbalance_tot__GUARD__

    #ifndef _cum_ask_imbalance_tot__GUARD__
    #define _cum_ask_imbalance_tot__GUARD__
    DECL_STRONG_TYPE(cum_ask_imbalance_tot, int32);
    #endif//_cum_ask_imbalance_tot__GUARD__

    #ifndef _cum_paired_qty__GUARD__
    #define _cum_paired_qty__GUARD__
    DECL_STRONG_TYPE(cum_paired_qty, int32);
    #endif//_cum_paired_qty__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _auction_type__AuctionReason__GUARD__
    #define _auction_type__AuctionReason__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionReason, spiderrock::protobuf::api::AuctionReason);
    #endif//_auction_type__AuctionReason__GUARD__

    
    class StockImbalance_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionReason;

        private:
        ticker m_ticker{};
        auction_type m_auction_type{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        auction_type get_auction_type() const {
            return m_auction_type;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockImbalance_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockImbalance_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const auction_type & value) { set_auction_type(value); }


        StockImbalance_PKey() {}

        virtual ~StockImbalance_PKey() {
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionReason>(m_auction_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionReason>(m_auction_type)));
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_auction_type = static_cast<spiderrock::protobuf::api::AuctionReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class StockImbalance {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockImbalance_PKey;
        using auction_time = spiderrock::protobuf::api::auction_time;
        using max_imbalance = spiderrock::protobuf::api::max_imbalance;
        using max_imbalance_exch = spiderrock::protobuf::api::max_imbalance_exch;
        using max_imbalance_match_px = spiderrock::protobuf::api::max_imbalance_match_px;
        using max_imbalance_status = spiderrock::protobuf::api::max_imbalance_status;
        using cum_bid_imbalance_mkt = spiderrock::protobuf::api::cum_bid_imbalance_mkt;
        using cum_ask_imbalance_mkt = spiderrock::protobuf::api::cum_ask_imbalance_mkt;
        using cum_bid_imbalance_tot = spiderrock::protobuf::api::cum_bid_imbalance_tot;
        using cum_ask_imbalance_tot = spiderrock::protobuf::api::cum_ask_imbalance_tot;
        using cum_paired_qty = spiderrock::protobuf::api::cum_paired_qty;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        auction_time m_auction_time{};
        max_imbalance m_max_imbalance{};
        max_imbalance_exch m_max_imbalance_exch{};
        max_imbalance_match_px m_max_imbalance_match_px{};
        max_imbalance_status m_max_imbalance_status{};
        cum_bid_imbalance_mkt m_cum_bid_imbalance_mkt{};
        cum_ask_imbalance_mkt m_cum_ask_imbalance_mkt{};
        cum_bid_imbalance_tot m_cum_bid_imbalance_tot{};
        cum_ask_imbalance_tot m_cum_ask_imbalance_tot{};
        cum_paired_qty m_cum_paired_qty{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        auction_time get_auction_time() const {
            return m_auction_time;
        }		
        max_imbalance get_max_imbalance() const {
            return m_max_imbalance;
        }		
        max_imbalance_exch get_max_imbalance_exch() const {
            return m_max_imbalance_exch;
        }		
        max_imbalance_match_px get_max_imbalance_match_px() const {
            return m_max_imbalance_match_px;
        }		
        max_imbalance_status get_max_imbalance_status() const {
            return m_max_imbalance_status;
        }		
        cum_bid_imbalance_mkt get_cum_bid_imbalance_mkt() const {
            return m_cum_bid_imbalance_mkt;
        }		
        cum_ask_imbalance_mkt get_cum_ask_imbalance_mkt() const {
            return m_cum_ask_imbalance_mkt;
        }		
        cum_bid_imbalance_tot get_cum_bid_imbalance_tot() const {
            return m_cum_bid_imbalance_tot;
        }		
        cum_ask_imbalance_tot get_cum_ask_imbalance_tot() const {
            return m_cum_ask_imbalance_tot;
        }		
        cum_paired_qty get_cum_paired_qty() const {
            return m_cum_paired_qty;
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
        void set_auction_time(const auction_time& value)  {
            m_auction_time = value;
        }
        void set_max_imbalance(const max_imbalance& value)  {
            m_max_imbalance = value;
        }
        void set_max_imbalance_exch(const max_imbalance_exch& value)  {
            m_max_imbalance_exch = value;
        }
        void set_max_imbalance_match_px(const max_imbalance_match_px& value)  {
            m_max_imbalance_match_px = value;
        }
        void set_max_imbalance_status(const max_imbalance_status& value)  {
            m_max_imbalance_status = value;
        }
        void set_cum_bid_imbalance_mkt(const cum_bid_imbalance_mkt& value)  {
            m_cum_bid_imbalance_mkt = value;
        }
        void set_cum_ask_imbalance_mkt(const cum_ask_imbalance_mkt& value)  {
            m_cum_ask_imbalance_mkt = value;
        }
        void set_cum_bid_imbalance_tot(const cum_bid_imbalance_tot& value)  {
            m_cum_bid_imbalance_tot = value;
        }
        void set_cum_ask_imbalance_tot(const cum_ask_imbalance_tot& value)  {
            m_cum_ask_imbalance_tot = value;
        }
        void set_cum_paired_qty(const cum_paired_qty& value)  {
            m_cum_paired_qty = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockImbalance::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const auction_time & value) {
            set_auction_time(value);
        }
        void set(const max_imbalance & value) {
            set_max_imbalance(value);
        }
        void set(const max_imbalance_exch & value) {
            set_max_imbalance_exch(value);
        }
        void set(const max_imbalance_match_px & value) {
            set_max_imbalance_match_px(value);
        }
        void set(const max_imbalance_status & value) {
            set_max_imbalance_status(value);
        }
        void set(const cum_bid_imbalance_mkt & value) {
            set_cum_bid_imbalance_mkt(value);
        }
        void set(const cum_ask_imbalance_mkt & value) {
            set_cum_ask_imbalance_mkt(value);
        }
        void set(const cum_bid_imbalance_tot & value) {
            set_cum_bid_imbalance_tot(value);
        }
        void set(const cum_ask_imbalance_tot & value) {
            set_cum_ask_imbalance_tot(value);
        }
        void set(const cum_paired_qty & value) {
            set_cum_paired_qty(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockImbalance & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_auction_time);
            set(value.m_max_imbalance);
            set(value.m_max_imbalance_exch);
            set(value.m_max_imbalance_match_px);
            set(value.m_max_imbalance_status);
            set(value.m_cum_bid_imbalance_mkt);
            set(value.m_cum_ask_imbalance_mkt);
            set(value.m_cum_bid_imbalance_tot);
            set(value.m_cum_ask_imbalance_tot);
            set(value.m_cum_paired_qty);
            set(value.m_timestamp);
        }

        StockImbalance() {
            m__meta.set_message_type("StockImbalance");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3035, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3035, length);
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
             *this = StockImbalance{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAuctionTime() const {
            return (m_auction_time.time_since_epoch().count() != 0);
        }
        bool IncludeMaxImbalance() const {
            return !(m_max_imbalance == 0);
        }
        bool IncludeMaxImbalanceMatchPx() const {
            return !(m_max_imbalance_match_px == 0.0);
        }
        bool IncludeCumBidImbalanceMkt() const {
            return !(m_cum_bid_imbalance_mkt == 0);
        }
        bool IncludeCumAskImbalanceMkt() const {
            return !(m_cum_ask_imbalance_mkt == 0);
        }
        bool IncludeCumBidImbalanceTot() const {
            return !(m_cum_bid_imbalance_tot == 0);
        }
        bool IncludeCumAskImbalanceTot() const {
            return !(m_cum_ask_imbalance_tot == 0);
        }
        bool IncludeCumPairedQty() const {
            return !(m_cum_paired_qty == 0);
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
            if ( IncludeAuctionTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(100, m_auction_time);
            }
            if ( IncludeMaxImbalance()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_max_imbalance);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_max_imbalance_exch)));
            if ( IncludeMaxImbalanceMatchPx()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_max_imbalance_match_px);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionStatus>(m_max_imbalance_status)));
            if ( IncludeCumBidImbalanceMkt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_cum_bid_imbalance_mkt);
            }
            if ( IncludeCumAskImbalanceMkt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_cum_ask_imbalance_mkt);
            }
            if ( IncludeCumBidImbalanceTot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_cum_bid_imbalance_tot);
            }
            if ( IncludeCumAskImbalanceTot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_cum_ask_imbalance_tot);
            }
            if ( IncludeCumPairedQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_cum_paired_qty);
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
            if ( IncludeAuctionTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 100, m_auction_time);
            }
            if ( IncludeMaxImbalance()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_max_imbalance);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_max_imbalance_exch)));
            if ( IncludeMaxImbalanceMatchPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_max_imbalance_match_px);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionStatus>(m_max_imbalance_status)));
            if ( IncludeCumBidImbalanceMkt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_cum_bid_imbalance_mkt);
            }
            if ( IncludeCumAskImbalanceMkt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_cum_ask_imbalance_mkt);
            }
            if ( IncludeCumBidImbalanceTot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_cum_bid_imbalance_tot);
            }
            if ( IncludeCumAskImbalanceTot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_cum_ask_imbalance_tot);
            }
            if ( IncludeCumPairedQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_cum_paired_qty);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_auction_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_imbalance = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_max_imbalance_exch = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_imbalance_match_px = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_max_imbalance_status = static_cast<spiderrock::protobuf::api::AuctionStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_imbalance_mkt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_imbalance_mkt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_imbalance_tot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_imbalance_tot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_paired_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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

    template<> inline const auto StockImbalance::get<StockImbalance::_meta>() const { return StockImbalance::_meta{ m__meta}; }
    template<> inline const auto StockImbalance::get<StockImbalance::pkey>() const { return StockImbalance::pkey{ m_pkey}; }
    template<> inline const auto StockImbalance::get<StockImbalance::auction_time>() const { return m_auction_time; }
    template<> inline const auto StockImbalance::get<StockImbalance::max_imbalance>() const { return m_max_imbalance; }
    template<> inline const auto StockImbalance::get<StockImbalance::max_imbalance_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_max_imbalance_exch)); }
    template<> inline const auto StockImbalance::get<StockImbalance::max_imbalance_match_px>() const { return m_max_imbalance_match_px; }
    template<> inline const auto StockImbalance::get<StockImbalance::max_imbalance_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionStatus>( m_max_imbalance_status)); }
    template<> inline const auto StockImbalance::get<StockImbalance::cum_bid_imbalance_mkt>() const { return m_cum_bid_imbalance_mkt; }
    template<> inline const auto StockImbalance::get<StockImbalance::cum_ask_imbalance_mkt>() const { return m_cum_ask_imbalance_mkt; }
    template<> inline const auto StockImbalance::get<StockImbalance::cum_bid_imbalance_tot>() const { return m_cum_bid_imbalance_tot; }
    template<> inline const auto StockImbalance::get<StockImbalance::cum_ask_imbalance_tot>() const { return m_cum_ask_imbalance_tot; }
    template<> inline const auto StockImbalance::get<StockImbalance::cum_paired_qty>() const { return m_cum_paired_qty; }
    template<> inline const auto StockImbalance::get<StockImbalance::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockImbalance_PKey::get<StockImbalance_PKey::ticker>() const { return StockImbalance_PKey::ticker{m_ticker}; }
    template<> inline const auto StockImbalance_PKey::get<StockImbalance_PKey::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionReason>(m_auction_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockImbalance_PKey& m) {
        o << "\"ticker\":{" << m.get<StockImbalance_PKey::ticker>() << "}";
        o << ",\"auction_type\":" << (int64_t)m.get<StockImbalance_PKey::auction_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockImbalance& m) {
        o << "\"_meta\":{" << m.get<StockImbalance::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockImbalance::pkey>() << "}";
        {
            std::time_t tt = m.get<StockImbalance::auction_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"auction_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"max_imbalance\":" << m.get<StockImbalance::max_imbalance>();
        o << ",\"max_imbalance_exch\":" << (int64_t)m.get<StockImbalance::max_imbalance_exch>();
        o << ",\"max_imbalance_match_px\":" << m.get<StockImbalance::max_imbalance_match_px>();
        o << ",\"max_imbalance_status\":" << (int64_t)m.get<StockImbalance::max_imbalance_status>();
        o << ",\"cum_bid_imbalance_mkt\":" << m.get<StockImbalance::cum_bid_imbalance_mkt>();
        o << ",\"cum_ask_imbalance_mkt\":" << m.get<StockImbalance::cum_ask_imbalance_mkt>();
        o << ",\"cum_bid_imbalance_tot\":" << m.get<StockImbalance::cum_bid_imbalance_tot>();
        o << ",\"cum_ask_imbalance_tot\":" << m.get<StockImbalance::cum_ask_imbalance_tot>();
        o << ",\"cum_paired_qty\":" << m.get<StockImbalance::cum_paired_qty>();
        {
            std::time_t tt = m.get<StockImbalance::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}