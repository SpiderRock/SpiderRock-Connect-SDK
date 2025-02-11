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

    #ifndef _update_type__GUARD__
    #define _update_type__GUARD__
    DECL_STRONG_TYPE(update_type, spiderrock::protobuf::api::UpdateType);
    #endif//_update_type__GUARD__

    #ifndef _market_status__GUARD__
    #define _market_status__GUARD__
    DECL_STRONG_TYPE(market_status, spiderrock::protobuf::api::MarketStatus);
    #endif//_market_status__GUARD__

    #ifndef _bid_price1__float__GUARD__
    #define _bid_price1__float__GUARD__
    DECL_STRONG_TYPE(bid_price1__float, float);
    #endif//_bid_price1__float__GUARD__

    #ifndef _bid_size1__GUARD__
    #define _bid_size1__GUARD__
    DECL_STRONG_TYPE(bid_size1, int32);
    #endif//_bid_size1__GUARD__

    #ifndef _bid_exch1__StkExch__GUARD__
    #define _bid_exch1__StkExch__GUARD__
    DECL_STRONG_TYPE(bid_exch1__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_bid_exch1__StkExch__GUARD__

    #ifndef _bid_mask1__GUARD__
    #define _bid_mask1__GUARD__
    DECL_STRONG_TYPE(bid_mask1, uint32);
    #endif//_bid_mask1__GUARD__

    #ifndef _ask_price1__float__GUARD__
    #define _ask_price1__float__GUARD__
    DECL_STRONG_TYPE(ask_price1__float, float);
    #endif//_ask_price1__float__GUARD__

    #ifndef _ask_size1__GUARD__
    #define _ask_size1__GUARD__
    DECL_STRONG_TYPE(ask_size1, int32);
    #endif//_ask_size1__GUARD__

    #ifndef _ask_exch1__StkExch__GUARD__
    #define _ask_exch1__StkExch__GUARD__
    DECL_STRONG_TYPE(ask_exch1__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_ask_exch1__StkExch__GUARD__

    #ifndef _ask_mask1__GUARD__
    #define _ask_mask1__GUARD__
    DECL_STRONG_TYPE(ask_mask1, uint32);
    #endif//_ask_mask1__GUARD__

    #ifndef _bid_price2__float__GUARD__
    #define _bid_price2__float__GUARD__
    DECL_STRONG_TYPE(bid_price2__float, float);
    #endif//_bid_price2__float__GUARD__

    #ifndef _bid_size2__GUARD__
    #define _bid_size2__GUARD__
    DECL_STRONG_TYPE(bid_size2, int32);
    #endif//_bid_size2__GUARD__

    #ifndef _bid_exch2__GUARD__
    #define _bid_exch2__GUARD__
    DECL_STRONG_TYPE(bid_exch2, spiderrock::protobuf::api::StkExch);
    #endif//_bid_exch2__GUARD__

    #ifndef _bid_mask2__GUARD__
    #define _bid_mask2__GUARD__
    DECL_STRONG_TYPE(bid_mask2, uint32);
    #endif//_bid_mask2__GUARD__

    #ifndef _ask_price2__float__GUARD__
    #define _ask_price2__float__GUARD__
    DECL_STRONG_TYPE(ask_price2__float, float);
    #endif//_ask_price2__float__GUARD__

    #ifndef _ask_size2__GUARD__
    #define _ask_size2__GUARD__
    DECL_STRONG_TYPE(ask_size2, int32);
    #endif//_ask_size2__GUARD__

    #ifndef _ask_exch2__GUARD__
    #define _ask_exch2__GUARD__
    DECL_STRONG_TYPE(ask_exch2, spiderrock::protobuf::api::StkExch);
    #endif//_ask_exch2__GUARD__

    #ifndef _ask_mask2__GUARD__
    #define _ask_mask2__GUARD__
    DECL_STRONG_TYPE(ask_mask2, uint32);
    #endif//_ask_mask2__GUARD__

    #ifndef _halt_mask__GUARD__
    #define _halt_mask__GUARD__
    DECL_STRONG_TYPE(halt_mask, uint32);
    #endif//_halt_mask__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockBookQuote_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBookQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBookQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockBookQuote_PKey() {}

        virtual ~StockBookQuote_PKey() {
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class StockBookQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockBookQuote_PKey;
        using update_type = spiderrock::protobuf::api::update_type;
        using market_status = spiderrock::protobuf::api::market_status;
        using bid_price1 = spiderrock::protobuf::api::bid_price1__float;
        using bid_size1 = spiderrock::protobuf::api::bid_size1;
        using bid_exch1 = spiderrock::protobuf::api::bid_exch1__StkExch;
        using bid_mask1 = spiderrock::protobuf::api::bid_mask1;
        using ask_price1 = spiderrock::protobuf::api::ask_price1__float;
        using ask_size1 = spiderrock::protobuf::api::ask_size1;
        using ask_exch1 = spiderrock::protobuf::api::ask_exch1__StkExch;
        using ask_mask1 = spiderrock::protobuf::api::ask_mask1;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__float;
        using bid_size2 = spiderrock::protobuf::api::bid_size2;
        using bid_exch2 = spiderrock::protobuf::api::bid_exch2;
        using bid_mask2 = spiderrock::protobuf::api::bid_mask2;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__float;
        using ask_size2 = spiderrock::protobuf::api::ask_size2;
        using ask_exch2 = spiderrock::protobuf::api::ask_exch2;
        using ask_mask2 = spiderrock::protobuf::api::ask_mask2;
        using halt_mask = spiderrock::protobuf::api::halt_mask;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        update_type m_update_type{};
        market_status m_market_status{};
        bid_price1 m_bid_price1{};
        bid_size1 m_bid_size1{};
        bid_exch1 m_bid_exch1{};
        bid_mask1 m_bid_mask1{};
        ask_price1 m_ask_price1{};
        ask_size1 m_ask_size1{};
        ask_exch1 m_ask_exch1{};
        ask_mask1 m_ask_mask1{};
        bid_price2 m_bid_price2{};
        bid_size2 m_bid_size2{};
        bid_exch2 m_bid_exch2{};
        bid_mask2 m_bid_mask2{};
        ask_price2 m_ask_price2{};
        ask_size2 m_ask_size2{};
        ask_exch2 m_ask_exch2{};
        ask_mask2 m_ask_mask2{};
        halt_mask m_halt_mask{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        update_type get_update_type() const {
            return m_update_type;
        }		
        market_status get_market_status() const {
            return m_market_status;
        }		
        bid_price1 get_bid_price1() const {
            return m_bid_price1;
        }		
        bid_size1 get_bid_size1() const {
            return m_bid_size1;
        }		
        bid_exch1 get_bid_exch1() const {
            return m_bid_exch1;
        }		
        bid_mask1 get_bid_mask1() const {
            return m_bid_mask1;
        }		
        ask_price1 get_ask_price1() const {
            return m_ask_price1;
        }		
        ask_size1 get_ask_size1() const {
            return m_ask_size1;
        }		
        ask_exch1 get_ask_exch1() const {
            return m_ask_exch1;
        }		
        ask_mask1 get_ask_mask1() const {
            return m_ask_mask1;
        }		
        bid_price2 get_bid_price2() const {
            return m_bid_price2;
        }		
        bid_size2 get_bid_size2() const {
            return m_bid_size2;
        }		
        bid_exch2 get_bid_exch2() const {
            return m_bid_exch2;
        }		
        bid_mask2 get_bid_mask2() const {
            return m_bid_mask2;
        }		
        ask_price2 get_ask_price2() const {
            return m_ask_price2;
        }		
        ask_size2 get_ask_size2() const {
            return m_ask_size2;
        }		
        ask_exch2 get_ask_exch2() const {
            return m_ask_exch2;
        }		
        ask_mask2 get_ask_mask2() const {
            return m_ask_mask2;
        }		
        halt_mask get_halt_mask() const {
            return m_halt_mask;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
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
        void set_update_type(const update_type& value)  {
            m_update_type = value;
        }
        void set_market_status(const market_status& value)  {
            m_market_status = value;
        }
        void set_bid_price1(const bid_price1& value)  {
            m_bid_price1 = value;
        }
        void set_bid_size1(const bid_size1& value)  {
            m_bid_size1 = value;
        }
        void set_bid_exch1(const bid_exch1& value)  {
            m_bid_exch1 = value;
        }
        void set_bid_mask1(const bid_mask1& value)  {
            m_bid_mask1 = value;
        }
        void set_ask_price1(const ask_price1& value)  {
            m_ask_price1 = value;
        }
        void set_ask_size1(const ask_size1& value)  {
            m_ask_size1 = value;
        }
        void set_ask_exch1(const ask_exch1& value)  {
            m_ask_exch1 = value;
        }
        void set_ask_mask1(const ask_mask1& value)  {
            m_ask_mask1 = value;
        }
        void set_bid_price2(const bid_price2& value)  {
            m_bid_price2 = value;
        }
        void set_bid_size2(const bid_size2& value)  {
            m_bid_size2 = value;
        }
        void set_bid_exch2(const bid_exch2& value)  {
            m_bid_exch2 = value;
        }
        void set_bid_mask2(const bid_mask2& value)  {
            m_bid_mask2 = value;
        }
        void set_ask_price2(const ask_price2& value)  {
            m_ask_price2 = value;
        }
        void set_ask_size2(const ask_size2& value)  {
            m_ask_size2 = value;
        }
        void set_ask_exch2(const ask_exch2& value)  {
            m_ask_exch2 = value;
        }
        void set_ask_mask2(const ask_mask2& value)  {
            m_ask_mask2 = value;
        }
        void set_halt_mask(const halt_mask& value)  {
            m_halt_mask = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBookQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const update_type & value) {
            set_update_type(value);
        }
        void set(const market_status & value) {
            set_market_status(value);
        }
        void set(const bid_price1 & value) {
            set_bid_price1(value);
        }
        void set(const bid_size1 & value) {
            set_bid_size1(value);
        }
        void set(const bid_exch1 & value) {
            set_bid_exch1(value);
        }
        void set(const bid_mask1 & value) {
            set_bid_mask1(value);
        }
        void set(const ask_price1 & value) {
            set_ask_price1(value);
        }
        void set(const ask_size1 & value) {
            set_ask_size1(value);
        }
        void set(const ask_exch1 & value) {
            set_ask_exch1(value);
        }
        void set(const ask_mask1 & value) {
            set_ask_mask1(value);
        }
        void set(const bid_price2 & value) {
            set_bid_price2(value);
        }
        void set(const bid_size2 & value) {
            set_bid_size2(value);
        }
        void set(const bid_exch2 & value) {
            set_bid_exch2(value);
        }
        void set(const bid_mask2 & value) {
            set_bid_mask2(value);
        }
        void set(const ask_price2 & value) {
            set_ask_price2(value);
        }
        void set(const ask_size2 & value) {
            set_ask_size2(value);
        }
        void set(const ask_exch2 & value) {
            set_ask_exch2(value);
        }
        void set(const ask_mask2 & value) {
            set_ask_mask2(value);
        }
        void set(const halt_mask & value) {
            set_halt_mask(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }

        void set(const StockBookQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_update_type);
            set(value.m_market_status);
            set(value.m_bid_price1);
            set(value.m_bid_size1);
            set(value.m_bid_exch1);
            set(value.m_bid_mask1);
            set(value.m_ask_price1);
            set(value.m_ask_size1);
            set(value.m_ask_exch1);
            set(value.m_ask_mask1);
            set(value.m_bid_price2);
            set(value.m_bid_size2);
            set(value.m_bid_exch2);
            set(value.m_bid_mask2);
            set(value.m_ask_price2);
            set(value.m_ask_size2);
            set(value.m_ask_exch2);
            set(value.m_ask_mask2);
            set(value.m_halt_mask);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
        }

        StockBookQuote() {
            m__meta.set_message_type("StockBookQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3000, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3000, length);
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
             *this = StockBookQuote{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBidPrice1() const {
            return !(m_bid_price1 == 0.0);
        }
        bool IncludeBidSize1() const {
            return !(m_bid_size1 == 0);
        }
        bool IncludeBidMask1() const {
            return !(m_bid_mask1 == 0);
        }
        bool IncludeAskPrice1() const {
            return !(m_ask_price1 == 0.0);
        }
        bool IncludeAskSize1() const {
            return !(m_ask_size1 == 0);
        }
        bool IncludeAskMask1() const {
            return !(m_ask_mask1 == 0);
        }
        bool IncludeBidPrice2() const {
            return !(m_bid_price2 == 0.0);
        }
        bool IncludeBidSize2() const {
            return !(m_bid_size2 == 0);
        }
        bool IncludeBidMask2() const {
            return !(m_bid_mask2 == 0);
        }
        bool IncludeAskPrice2() const {
            return !(m_ask_price2 == 0.0);
        }
        bool IncludeAskSize2() const {
            return !(m_ask_size2 == 0);
        }
        bool IncludeAskMask2() const {
            return !(m_ask_mask2 == 0);
        }
        bool IncludeHaltMask() const {
            return !(m_halt_mask == 0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeBidPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_bid_price1);
            }
            if ( IncludeBidSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_bid_size1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_bid_exch1)));
            if ( IncludeBidMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(115,m_bid_mask1);
            }
            if ( IncludeAskPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ask_price1);
            }
            if ( IncludeAskSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_ask_size1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_ask_exch1)));
            if ( IncludeAskMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(127,m_ask_mask1);
            }
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_bid_price2);
            }
            if ( IncludeBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_bid_size2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_bid_exch2)));
            if ( IncludeBidMask2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(139,m_bid_mask2);
            }
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_ask_price2);
            }
            if ( IncludeAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_ask_size2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_ask_exch2)));
            if ( IncludeAskMask2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(151,m_ask_mask2);
            }
            if ( IncludeHaltMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(154,m_halt_mask);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_net_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeBidPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_bid_price1);
            }
            if ( IncludeBidSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_bid_size1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_bid_exch1)));
            if ( IncludeBidMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,115,m_bid_mask1);
            }
            if ( IncludeAskPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ask_price1);
            }
            if ( IncludeAskSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_ask_size1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_ask_exch1)));
            if ( IncludeAskMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,127,m_ask_mask1);
            }
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_bid_price2);
            }
            if ( IncludeBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_bid_size2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_bid_exch2)));
            if ( IncludeBidMask2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,139,m_bid_mask2);
            }
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_ask_price2);
            }
            if ( IncludeAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_ask_size2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_ask_exch2)));
            if ( IncludeAskMask2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,151,m_ask_mask2);
            }
            if ( IncludeHaltMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,154,m_halt_mask);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_net_timestamp);
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
                            m_update_type = static_cast<spiderrock::protobuf::api::UpdateType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_status = static_cast<spiderrock::protobuf::api::MarketStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_exch1 = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_exch1 = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_exch2 = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_exch2 = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_halt_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
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

    template<> inline const auto StockBookQuote::get<StockBookQuote::_meta>() const { return StockBookQuote::_meta{ m__meta}; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::pkey>() const { return StockBookQuote::pkey{ m_pkey}; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::update_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>( m_update_type)); }
    template<> inline const auto StockBookQuote::get<StockBookQuote::market_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>( m_market_status)); }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_price1>() const { return m_bid_price1; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_size1>() const { return m_bid_size1; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_exch1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_bid_exch1)); }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_mask1>() const { return m_bid_mask1; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_price1>() const { return m_ask_price1; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_size1>() const { return m_ask_size1; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_exch1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_ask_exch1)); }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_mask1>() const { return m_ask_mask1; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_size2>() const { return m_bid_size2; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_exch2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_bid_exch2)); }
    template<> inline const auto StockBookQuote::get<StockBookQuote::bid_mask2>() const { return m_bid_mask2; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_size2>() const { return m_ask_size2; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_exch2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_ask_exch2)); }
    template<> inline const auto StockBookQuote::get<StockBookQuote::ask_mask2>() const { return m_ask_mask2; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::halt_mask>() const { return m_halt_mask; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto StockBookQuote::get<StockBookQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto StockBookQuote_PKey::get<StockBookQuote_PKey::ticker>() const { return StockBookQuote_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockBookQuote_PKey& m) {
        o << "\"ticker\":{" << m.get<StockBookQuote_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockBookQuote& m) {
        o << "\"_meta\":{" << m.get<StockBookQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockBookQuote::pkey>() << "}";
        o << ",\"update_type\":" << (int64_t)m.get<StockBookQuote::update_type>();
        o << ",\"market_status\":" << (int64_t)m.get<StockBookQuote::market_status>();
        o << ",\"bid_price1\":" << m.get<StockBookQuote::bid_price1>();
        o << ",\"bid_size1\":" << m.get<StockBookQuote::bid_size1>();
        o << ",\"bid_exch1\":" << (int64_t)m.get<StockBookQuote::bid_exch1>();
        o << ",\"bid_mask1\":" << m.get<StockBookQuote::bid_mask1>();
        o << ",\"ask_price1\":" << m.get<StockBookQuote::ask_price1>();
        o << ",\"ask_size1\":" << m.get<StockBookQuote::ask_size1>();
        o << ",\"ask_exch1\":" << (int64_t)m.get<StockBookQuote::ask_exch1>();
        o << ",\"ask_mask1\":" << m.get<StockBookQuote::ask_mask1>();
        o << ",\"bid_price2\":" << m.get<StockBookQuote::bid_price2>();
        o << ",\"bid_size2\":" << m.get<StockBookQuote::bid_size2>();
        o << ",\"bid_exch2\":" << (int64_t)m.get<StockBookQuote::bid_exch2>();
        o << ",\"bid_mask2\":" << m.get<StockBookQuote::bid_mask2>();
        o << ",\"ask_price2\":" << m.get<StockBookQuote::ask_price2>();
        o << ",\"ask_size2\":" << m.get<StockBookQuote::ask_size2>();
        o << ",\"ask_exch2\":" << (int64_t)m.get<StockBookQuote::ask_exch2>();
        o << ",\"ask_mask2\":" << m.get<StockBookQuote::ask_mask2>();
        o << ",\"halt_mask\":" << m.get<StockBookQuote::halt_mask>();
        o << ",\"src_timestamp\":" << m.get<StockBookQuote::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<StockBookQuote::net_timestamp>();
        return o;
    }

}
}
}