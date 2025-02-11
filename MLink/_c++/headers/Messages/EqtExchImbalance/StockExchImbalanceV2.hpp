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

    #ifndef _reference_px__GUARD__
    #define _reference_px__GUARD__
    DECL_STRONG_TYPE(reference_px, float);
    #endif//_reference_px__GUARD__

    #ifndef _paired_qty__GUARD__
    #define _paired_qty__GUARD__
    DECL_STRONG_TYPE(paired_qty, int32);
    #endif//_paired_qty__GUARD__

    #ifndef _total_imbalance_qty__GUARD__
    #define _total_imbalance_qty__GUARD__
    DECL_STRONG_TYPE(total_imbalance_qty, int32);
    #endif//_total_imbalance_qty__GUARD__

    #ifndef _market_imbalance_qty__GUARD__
    #define _market_imbalance_qty__GUARD__
    DECL_STRONG_TYPE(market_imbalance_qty, int32);
    #endif//_market_imbalance_qty__GUARD__

    #ifndef _imbalance_side__GUARD__
    #define _imbalance_side__GUARD__
    DECL_STRONG_TYPE(imbalance_side, spiderrock::protobuf::api::ImbalanceSide);
    #endif//_imbalance_side__GUARD__

    #ifndef _continuous_book_clr_px__GUARD__
    #define _continuous_book_clr_px__GUARD__
    DECL_STRONG_TYPE(continuous_book_clr_px, float);
    #endif//_continuous_book_clr_px__GUARD__

    #ifndef _closing_only_clr_px__GUARD__
    #define _closing_only_clr_px__GUARD__
    DECL_STRONG_TYPE(closing_only_clr_px, float);
    #endif//_closing_only_clr_px__GUARD__

    #ifndef _ssr_filling_px__GUARD__
    #define _ssr_filling_px__GUARD__
    DECL_STRONG_TYPE(ssr_filling_px, float);
    #endif//_ssr_filling_px__GUARD__

    #ifndef _indicative_match_px__GUARD__
    #define _indicative_match_px__GUARD__
    DECL_STRONG_TYPE(indicative_match_px, float);
    #endif//_indicative_match_px__GUARD__

    #ifndef _upper_collar__GUARD__
    #define _upper_collar__GUARD__
    DECL_STRONG_TYPE(upper_collar, float);
    #endif//_upper_collar__GUARD__

    #ifndef _lower_collar__GUARD__
    #define _lower_collar__GUARD__
    DECL_STRONG_TYPE(lower_collar, float);
    #endif//_lower_collar__GUARD__

    #ifndef _auction_status__GUARD__
    #define _auction_status__GUARD__
    DECL_STRONG_TYPE(auction_status, spiderrock::protobuf::api::AuctionStatus);
    #endif//_auction_status__GUARD__

    #ifndef _freeze_status__GUARD__
    #define _freeze_status__GUARD__
    DECL_STRONG_TYPE(freeze_status, spiderrock::protobuf::api::YesNo);
    #endif//_freeze_status__GUARD__

    #ifndef _num_extensions__GUARD__
    #define _num_extensions__GUARD__
    DECL_STRONG_TYPE(num_extensions, int32);
    #endif//_num_extensions__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _auction_time__GUARD__
    #define _auction_time__GUARD__
    DECL_STRONG_TYPE(auction_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_auction_time__GUARD__

    #ifndef _auction_type__AuctionReason__GUARD__
    #define _auction_type__AuctionReason__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionReason, spiderrock::protobuf::api::AuctionReason);
    #endif//_auction_type__AuctionReason__GUARD__

    #ifndef _exchange__PrimaryExchange__GUARD__
    #define _exchange__PrimaryExchange__GUARD__
    DECL_STRONG_TYPE(exchange__PrimaryExchange, spiderrock::protobuf::api::PrimaryExchange);
    #endif//_exchange__PrimaryExchange__GUARD__

    
    class StockExchImbalanceV2_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using auction_time = spiderrock::protobuf::api::auction_time;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionReason;
        using exchange = spiderrock::protobuf::api::exchange__PrimaryExchange;

        private:
        ticker m_ticker{};
        auction_time m_auction_time{};
        auction_type m_auction_type{};
        exchange m_exchange{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        auction_time get_auction_time() const {
            return m_auction_time;
        }
        auction_type get_auction_type() const {
            return m_auction_type;
        }
        exchange get_exchange() const {
            return m_exchange;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_auction_time(const auction_time& value)  {
            m_auction_time = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockExchImbalanceV2_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockExchImbalanceV2_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const auction_time & value) { set_auction_time(value); }
        void set(const auction_type & value) { set_auction_type(value); }
        void set(const exchange & value) { set_exchange(value); }


        StockExchImbalanceV2_PKey() {}

        virtual ~StockExchImbalanceV2_PKey() {
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
        bool IncludeAuctionTime() const {
            return (m_auction_time.time_since_epoch().count() != 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeAuctionTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(11, m_auction_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionReason>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrimaryExchange>(m_exchange)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeAuctionTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 11, m_auction_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionReason>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrimaryExchange>(m_exchange)));
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
                    case 11: {
                        m_auction_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 12: {m_auction_type = static_cast<spiderrock::protobuf::api::AuctionReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_exchange = static_cast<spiderrock::protobuf::api::PrimaryExchange>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class StockExchImbalanceV2 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockExchImbalanceV2_PKey;
        using reference_px = spiderrock::protobuf::api::reference_px;
        using paired_qty = spiderrock::protobuf::api::paired_qty;
        using total_imbalance_qty = spiderrock::protobuf::api::total_imbalance_qty;
        using market_imbalance_qty = spiderrock::protobuf::api::market_imbalance_qty;
        using imbalance_side = spiderrock::protobuf::api::imbalance_side;
        using continuous_book_clr_px = spiderrock::protobuf::api::continuous_book_clr_px;
        using closing_only_clr_px = spiderrock::protobuf::api::closing_only_clr_px;
        using ssr_filling_px = spiderrock::protobuf::api::ssr_filling_px;
        using indicative_match_px = spiderrock::protobuf::api::indicative_match_px;
        using upper_collar = spiderrock::protobuf::api::upper_collar;
        using lower_collar = spiderrock::protobuf::api::lower_collar;
        using auction_status = spiderrock::protobuf::api::auction_status;
        using freeze_status = spiderrock::protobuf::api::freeze_status;
        using num_extensions = spiderrock::protobuf::api::num_extensions;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        reference_px m_reference_px{};
        paired_qty m_paired_qty{};
        total_imbalance_qty m_total_imbalance_qty{};
        market_imbalance_qty m_market_imbalance_qty{};
        imbalance_side m_imbalance_side{};
        continuous_book_clr_px m_continuous_book_clr_px{};
        closing_only_clr_px m_closing_only_clr_px{};
        ssr_filling_px m_ssr_filling_px{};
        indicative_match_px m_indicative_match_px{};
        upper_collar m_upper_collar{};
        lower_collar m_lower_collar{};
        auction_status m_auction_status{};
        freeze_status m_freeze_status{};
        num_extensions m_num_extensions{};
        net_timestamp m_net_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        reference_px get_reference_px() const {
            return m_reference_px;
        }		
        paired_qty get_paired_qty() const {
            return m_paired_qty;
        }		
        total_imbalance_qty get_total_imbalance_qty() const {
            return m_total_imbalance_qty;
        }		
        market_imbalance_qty get_market_imbalance_qty() const {
            return m_market_imbalance_qty;
        }		
        imbalance_side get_imbalance_side() const {
            return m_imbalance_side;
        }		
        continuous_book_clr_px get_continuous_book_clr_px() const {
            return m_continuous_book_clr_px;
        }		
        closing_only_clr_px get_closing_only_clr_px() const {
            return m_closing_only_clr_px;
        }		
        ssr_filling_px get_ssr_filling_px() const {
            return m_ssr_filling_px;
        }		
        indicative_match_px get_indicative_match_px() const {
            return m_indicative_match_px;
        }		
        upper_collar get_upper_collar() const {
            return m_upper_collar;
        }		
        lower_collar get_lower_collar() const {
            return m_lower_collar;
        }		
        auction_status get_auction_status() const {
            return m_auction_status;
        }		
        freeze_status get_freeze_status() const {
            return m_freeze_status;
        }		
        num_extensions get_num_extensions() const {
            return m_num_extensions;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
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
        void set_reference_px(const reference_px& value)  {
            m_reference_px = value;
        }
        void set_paired_qty(const paired_qty& value)  {
            m_paired_qty = value;
        }
        void set_total_imbalance_qty(const total_imbalance_qty& value)  {
            m_total_imbalance_qty = value;
        }
        void set_market_imbalance_qty(const market_imbalance_qty& value)  {
            m_market_imbalance_qty = value;
        }
        void set_imbalance_side(const imbalance_side& value)  {
            m_imbalance_side = value;
        }
        void set_continuous_book_clr_px(const continuous_book_clr_px& value)  {
            m_continuous_book_clr_px = value;
        }
        void set_closing_only_clr_px(const closing_only_clr_px& value)  {
            m_closing_only_clr_px = value;
        }
        void set_ssr_filling_px(const ssr_filling_px& value)  {
            m_ssr_filling_px = value;
        }
        void set_indicative_match_px(const indicative_match_px& value)  {
            m_indicative_match_px = value;
        }
        void set_upper_collar(const upper_collar& value)  {
            m_upper_collar = value;
        }
        void set_lower_collar(const lower_collar& value)  {
            m_lower_collar = value;
        }
        void set_auction_status(const auction_status& value)  {
            m_auction_status = value;
        }
        void set_freeze_status(const freeze_status& value)  {
            m_freeze_status = value;
        }
        void set_num_extensions(const num_extensions& value)  {
            m_num_extensions = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockExchImbalanceV2::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const reference_px & value) {
            set_reference_px(value);
        }
        void set(const paired_qty & value) {
            set_paired_qty(value);
        }
        void set(const total_imbalance_qty & value) {
            set_total_imbalance_qty(value);
        }
        void set(const market_imbalance_qty & value) {
            set_market_imbalance_qty(value);
        }
        void set(const imbalance_side & value) {
            set_imbalance_side(value);
        }
        void set(const continuous_book_clr_px & value) {
            set_continuous_book_clr_px(value);
        }
        void set(const closing_only_clr_px & value) {
            set_closing_only_clr_px(value);
        }
        void set(const ssr_filling_px & value) {
            set_ssr_filling_px(value);
        }
        void set(const indicative_match_px & value) {
            set_indicative_match_px(value);
        }
        void set(const upper_collar & value) {
            set_upper_collar(value);
        }
        void set(const lower_collar & value) {
            set_lower_collar(value);
        }
        void set(const auction_status & value) {
            set_auction_status(value);
        }
        void set(const freeze_status & value) {
            set_freeze_status(value);
        }
        void set(const num_extensions & value) {
            set_num_extensions(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }

        void set(const StockExchImbalanceV2 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_reference_px);
            set(value.m_paired_qty);
            set(value.m_total_imbalance_qty);
            set(value.m_market_imbalance_qty);
            set(value.m_imbalance_side);
            set(value.m_continuous_book_clr_px);
            set(value.m_closing_only_clr_px);
            set(value.m_ssr_filling_px);
            set(value.m_indicative_match_px);
            set(value.m_upper_collar);
            set(value.m_lower_collar);
            set(value.m_auction_status);
            set(value.m_freeze_status);
            set(value.m_num_extensions);
            set(value.m_net_timestamp);
        }

        StockExchImbalanceV2() {
            m__meta.set_message_type("StockExchImbalanceV2");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3020, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3020, length);
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
             *this = StockExchImbalanceV2{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeReferencePx() const {
            return !(m_reference_px == 0.0);
        }
        bool IncludePairedQty() const {
            return !(m_paired_qty == 0);
        }
        bool IncludeTotalImbalanceQty() const {
            return !(m_total_imbalance_qty == 0);
        }
        bool IncludeMarketImbalanceQty() const {
            return !(m_market_imbalance_qty == 0);
        }
        bool IncludeContinuousBookClrPx() const {
            return !(m_continuous_book_clr_px == 0.0);
        }
        bool IncludeClosingOnlyClrPx() const {
            return !(m_closing_only_clr_px == 0.0);
        }
        bool IncludeSsrFillingPx() const {
            return !(m_ssr_filling_px == 0.0);
        }
        bool IncludeIndicativeMatchPx() const {
            return !(m_indicative_match_px == 0.0);
        }
        bool IncludeUpperCollar() const {
            return !(m_upper_collar == 0.0);
        }
        bool IncludeLowerCollar() const {
            return !(m_lower_collar == 0.0);
        }
        bool IncludeNumExtensions() const {
            return !(m_num_extensions == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
            if ( IncludeReferencePx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_reference_px);
            }
            if ( IncludePairedQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_paired_qty);
            }
            if ( IncludeTotalImbalanceQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_total_imbalance_qty);
            }
            if ( IncludeMarketImbalanceQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_market_imbalance_qty);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImbalanceSide>(m_imbalance_side)));
            if ( IncludeContinuousBookClrPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_continuous_book_clr_px);
            }
            if ( IncludeClosingOnlyClrPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_closing_only_clr_px);
            }
            if ( IncludeSsrFillingPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ssr_filling_px);
            }
            if ( IncludeIndicativeMatchPx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_indicative_match_px);
            }
            if ( IncludeUpperCollar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_upper_collar);
            }
            if ( IncludeLowerCollar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_lower_collar);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionStatus>(m_auction_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_freeze_status)));
            if ( IncludeNumExtensions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_num_extensions);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(142,m_net_timestamp);
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
            if ( IncludeReferencePx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_reference_px);
            }
            if ( IncludePairedQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_paired_qty);
            }
            if ( IncludeTotalImbalanceQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_total_imbalance_qty);
            }
            if ( IncludeMarketImbalanceQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_market_imbalance_qty);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImbalanceSide>(m_imbalance_side)));
            if ( IncludeContinuousBookClrPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_continuous_book_clr_px);
            }
            if ( IncludeClosingOnlyClrPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_closing_only_clr_px);
            }
            if ( IncludeSsrFillingPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ssr_filling_px);
            }
            if ( IncludeIndicativeMatchPx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_indicative_match_px);
            }
            if ( IncludeUpperCollar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_upper_collar);
            }
            if ( IncludeLowerCollar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_lower_collar);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionStatus>(m_auction_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_freeze_status)));
            if ( IncludeNumExtensions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_num_extensions);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,142,m_net_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_reference_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_paired_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_total_imbalance_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_market_imbalance_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_imbalance_side = static_cast<spiderrock::protobuf::api::ImbalanceSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_continuous_book_clr_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_closing_only_clr_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ssr_filling_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_indicative_match_px = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_upper_collar = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_lower_collar = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_status = static_cast<spiderrock::protobuf::api::AuctionStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_freeze_status = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_extensions = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::_meta>() const { return StockExchImbalanceV2::_meta{ m__meta}; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::pkey>() const { return StockExchImbalanceV2::pkey{ m_pkey}; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::reference_px>() const { return m_reference_px; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::paired_qty>() const { return m_paired_qty; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::total_imbalance_qty>() const { return m_total_imbalance_qty; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::market_imbalance_qty>() const { return m_market_imbalance_qty; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::imbalance_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImbalanceSide>( m_imbalance_side)); }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::continuous_book_clr_px>() const { return m_continuous_book_clr_px; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::closing_only_clr_px>() const { return m_closing_only_clr_px; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::ssr_filling_px>() const { return m_ssr_filling_px; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::indicative_match_px>() const { return m_indicative_match_px; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::upper_collar>() const { return m_upper_collar; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::lower_collar>() const { return m_lower_collar; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::auction_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionStatus>( m_auction_status)); }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::freeze_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_freeze_status)); }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::num_extensions>() const { return m_num_extensions; }
    template<> inline const auto StockExchImbalanceV2::get<StockExchImbalanceV2::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto StockExchImbalanceV2_PKey::get<StockExchImbalanceV2_PKey::ticker>() const { return StockExchImbalanceV2_PKey::ticker{m_ticker}; }
    template<> inline const auto StockExchImbalanceV2_PKey::get<StockExchImbalanceV2_PKey::auction_time>() const { return m_auction_time; }
    template<> inline const auto StockExchImbalanceV2_PKey::get<StockExchImbalanceV2_PKey::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionReason>(m_auction_type));}
    template<> inline const auto StockExchImbalanceV2_PKey::get<StockExchImbalanceV2_PKey::exchange>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrimaryExchange>(m_exchange));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockExchImbalanceV2_PKey& m) {
        o << "\"ticker\":{" << m.get<StockExchImbalanceV2_PKey::ticker>() << "}";
        {
            std::time_t tt = m.get<StockExchImbalanceV2_PKey::auction_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"auction_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auction_type\":" << (int64_t)m.get<StockExchImbalanceV2_PKey::auction_type>();
        o << ",\"exchange\":" << (int64_t)m.get<StockExchImbalanceV2_PKey::exchange>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockExchImbalanceV2& m) {
        o << "\"_meta\":{" << m.get<StockExchImbalanceV2::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockExchImbalanceV2::pkey>() << "}";
        o << ",\"reference_px\":" << m.get<StockExchImbalanceV2::reference_px>();
        o << ",\"paired_qty\":" << m.get<StockExchImbalanceV2::paired_qty>();
        o << ",\"total_imbalance_qty\":" << m.get<StockExchImbalanceV2::total_imbalance_qty>();
        o << ",\"market_imbalance_qty\":" << m.get<StockExchImbalanceV2::market_imbalance_qty>();
        o << ",\"imbalance_side\":" << (int64_t)m.get<StockExchImbalanceV2::imbalance_side>();
        o << ",\"continuous_book_clr_px\":" << m.get<StockExchImbalanceV2::continuous_book_clr_px>();
        o << ",\"closing_only_clr_px\":" << m.get<StockExchImbalanceV2::closing_only_clr_px>();
        o << ",\"ssr_filling_px\":" << m.get<StockExchImbalanceV2::ssr_filling_px>();
        o << ",\"indicative_match_px\":" << m.get<StockExchImbalanceV2::indicative_match_px>();
        o << ",\"upper_collar\":" << m.get<StockExchImbalanceV2::upper_collar>();
        o << ",\"lower_collar\":" << m.get<StockExchImbalanceV2::lower_collar>();
        o << ",\"auction_status\":" << (int64_t)m.get<StockExchImbalanceV2::auction_status>();
        o << ",\"freeze_status\":" << (int64_t)m.get<StockExchImbalanceV2::freeze_status>();
        o << ",\"num_extensions\":" << m.get<StockExchImbalanceV2::num_extensions>();
        o << ",\"net_timestamp\":" << m.get<StockExchImbalanceV2::net_timestamp>();
        return o;
    }

}
}
}