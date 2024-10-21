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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _opn_price__double__GUARD__
    #define _opn_price__double__GUARD__
    DECL_STRONG_TYPE(opn_price__double, double);
    #endif//_opn_price__double__GUARD__

    #ifndef _mrk_price__double__GUARD__
    #define _mrk_price__double__GUARD__
    DECL_STRONG_TYPE(mrk_price__double, double);
    #endif//_mrk_price__double__GUARD__

    #ifndef _cls_price__double__GUARD__
    #define _cls_price__double__GUARD__
    DECL_STRONG_TYPE(cls_price__double, double);
    #endif//_cls_price__double__GUARD__

    #ifndef _min_price__GUARD__
    #define _min_price__GUARD__
    DECL_STRONG_TYPE(min_price, double);
    #endif//_min_price__GUARD__

    #ifndef _max_price__GUARD__
    #define _max_price__GUARD__
    DECL_STRONG_TYPE(max_price, double);
    #endif//_max_price__GUARD__

    #ifndef _shares_outstanding__GUARD__
    #define _shares_outstanding__GUARD__
    DECL_STRONG_TYPE(shares_outstanding, int64);
    #endif//_shares_outstanding__GUARD__

    #ifndef _bid_count__int32__GUARD__
    #define _bid_count__int32__GUARD__
    DECL_STRONG_TYPE(bid_count__int32, int32);
    #endif//_bid_count__int32__GUARD__

    #ifndef _bid_volume__GUARD__
    #define _bid_volume__GUARD__
    DECL_STRONG_TYPE(bid_volume, int32);
    #endif//_bid_volume__GUARD__

    #ifndef _ask_count__int32__GUARD__
    #define _ask_count__int32__GUARD__
    DECL_STRONG_TYPE(ask_count__int32, int32);
    #endif//_ask_count__int32__GUARD__

    #ifndef _ask_volume__GUARD__
    #define _ask_volume__GUARD__
    DECL_STRONG_TYPE(ask_volume, int32);
    #endif//_ask_volume__GUARD__

    #ifndef _mid_count__GUARD__
    #define _mid_count__GUARD__
    DECL_STRONG_TYPE(mid_count, int32);
    #endif//_mid_count__GUARD__

    #ifndef _mid_volume__GUARD__
    #define _mid_volume__GUARD__
    DECL_STRONG_TYPE(mid_volume, int32);
    #endif//_mid_volume__GUARD__

    #ifndef _prt_count__GUARD__
    #define _prt_count__GUARD__
    DECL_STRONG_TYPE(prt_count, int32);
    #endif//_prt_count__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _last_prt_price__GUARD__
    #define _last_prt_price__GUARD__
    DECL_STRONG_TYPE(last_prt_price, double);
    #endif//_last_prt_price__GUARD__

    #ifndef _last_prt_dttm__GUARD__
    #define _last_prt_dttm__GUARD__
    DECL_STRONG_TYPE(last_prt_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_prt_dttm__GUARD__

    #ifndef _exp_count__GUARD__
    #define _exp_count__GUARD__
    DECL_STRONG_TYPE(exp_count, int32);
    #endif//_exp_count__GUARD__

    #ifndef _exp_width__GUARD__
    #define _exp_width__GUARD__
    DECL_STRONG_TYPE(exp_width, double);
    #endif//_exp_width__GUARD__

    #ifndef _exp_bid_size__GUARD__
    #define _exp_bid_size__GUARD__
    DECL_STRONG_TYPE(exp_bid_size, float);
    #endif//_exp_bid_size__GUARD__

    #ifndef _exp_ask_size__GUARD__
    #define _exp_ask_size__GUARD__
    DECL_STRONG_TYPE(exp_ask_size, float);
    #endif//_exp_ask_size__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockMarketSummary_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockMarketSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockMarketSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockMarketSummary_PKey() {}

        virtual ~StockMarketSummary_PKey() {
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
    

    class StockMarketSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockMarketSummary_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using opn_price = spiderrock::protobuf::api::opn_price__double;
        using mrk_price = spiderrock::protobuf::api::mrk_price__double;
        using cls_price = spiderrock::protobuf::api::cls_price__double;
        using min_price = spiderrock::protobuf::api::min_price;
        using max_price = spiderrock::protobuf::api::max_price;
        using shares_outstanding = spiderrock::protobuf::api::shares_outstanding;
        using bid_count = spiderrock::protobuf::api::bid_count__int32;
        using bid_volume = spiderrock::protobuf::api::bid_volume;
        using ask_count = spiderrock::protobuf::api::ask_count__int32;
        using ask_volume = spiderrock::protobuf::api::ask_volume;
        using mid_count = spiderrock::protobuf::api::mid_count;
        using mid_volume = spiderrock::protobuf::api::mid_volume;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using last_prt_price = spiderrock::protobuf::api::last_prt_price;
        using last_prt_dttm = spiderrock::protobuf::api::last_prt_dttm;
        using exp_count = spiderrock::protobuf::api::exp_count;
        using exp_width = spiderrock::protobuf::api::exp_width;
        using exp_bid_size = spiderrock::protobuf::api::exp_bid_size;
        using exp_ask_size = spiderrock::protobuf::api::exp_ask_size;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        opn_price m_opn_price{};
        mrk_price m_mrk_price{};
        cls_price m_cls_price{};
        min_price m_min_price{};
        max_price m_max_price{};
        shares_outstanding m_shares_outstanding{};
        bid_count m_bid_count{};
        bid_volume m_bid_volume{};
        ask_count m_ask_count{};
        ask_volume m_ask_volume{};
        mid_count m_mid_count{};
        mid_volume m_mid_volume{};
        prt_count m_prt_count{};
        prt_volume m_prt_volume{};
        last_prt_price m_last_prt_price{};
        last_prt_dttm m_last_prt_dttm{};
        exp_count m_exp_count{};
        exp_width m_exp_width{};
        exp_bid_size m_exp_bid_size{};
        exp_ask_size m_exp_ask_size{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        opn_price get_opn_price() const {
            return m_opn_price;
        }		
        mrk_price get_mrk_price() const {
            return m_mrk_price;
        }		
        cls_price get_cls_price() const {
            return m_cls_price;
        }		
        min_price get_min_price() const {
            return m_min_price;
        }		
        max_price get_max_price() const {
            return m_max_price;
        }		
        shares_outstanding get_shares_outstanding() const {
            return m_shares_outstanding;
        }		
        bid_count get_bid_count() const {
            return m_bid_count;
        }		
        bid_volume get_bid_volume() const {
            return m_bid_volume;
        }		
        ask_count get_ask_count() const {
            return m_ask_count;
        }		
        ask_volume get_ask_volume() const {
            return m_ask_volume;
        }		
        mid_count get_mid_count() const {
            return m_mid_count;
        }		
        mid_volume get_mid_volume() const {
            return m_mid_volume;
        }		
        prt_count get_prt_count() const {
            return m_prt_count;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        last_prt_price get_last_prt_price() const {
            return m_last_prt_price;
        }		
        last_prt_dttm get_last_prt_dttm() const {
            return m_last_prt_dttm;
        }		
        exp_count get_exp_count() const {
            return m_exp_count;
        }		
        exp_width get_exp_width() const {
            return m_exp_width;
        }		
        exp_bid_size get_exp_bid_size() const {
            return m_exp_bid_size;
        }		
        exp_ask_size get_exp_ask_size() const {
            return m_exp_ask_size;
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_opn_price(const opn_price& value)  {
            m_opn_price = value;
        }
        void set_mrk_price(const mrk_price& value)  {
            m_mrk_price = value;
        }
        void set_cls_price(const cls_price& value)  {
            m_cls_price = value;
        }
        void set_min_price(const min_price& value)  {
            m_min_price = value;
        }
        void set_max_price(const max_price& value)  {
            m_max_price = value;
        }
        void set_shares_outstanding(const shares_outstanding& value)  {
            m_shares_outstanding = value;
        }
        void set_bid_count(const bid_count& value)  {
            m_bid_count = value;
        }
        void set_bid_volume(const bid_volume& value)  {
            m_bid_volume = value;
        }
        void set_ask_count(const ask_count& value)  {
            m_ask_count = value;
        }
        void set_ask_volume(const ask_volume& value)  {
            m_ask_volume = value;
        }
        void set_mid_count(const mid_count& value)  {
            m_mid_count = value;
        }
        void set_mid_volume(const mid_volume& value)  {
            m_mid_volume = value;
        }
        void set_prt_count(const prt_count& value)  {
            m_prt_count = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_last_prt_price(const last_prt_price& value)  {
            m_last_prt_price = value;
        }
        void set_last_prt_dttm(const last_prt_dttm& value)  {
            m_last_prt_dttm = value;
        }
        void set_exp_count(const exp_count& value)  {
            m_exp_count = value;
        }
        void set_exp_width(const exp_width& value)  {
            m_exp_width = value;
        }
        void set_exp_bid_size(const exp_bid_size& value)  {
            m_exp_bid_size = value;
        }
        void set_exp_ask_size(const exp_ask_size& value)  {
            m_exp_ask_size = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockMarketSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const opn_price & value) {
            set_opn_price(value);
        }
        void set(const mrk_price & value) {
            set_mrk_price(value);
        }
        void set(const cls_price & value) {
            set_cls_price(value);
        }
        void set(const min_price & value) {
            set_min_price(value);
        }
        void set(const max_price & value) {
            set_max_price(value);
        }
        void set(const shares_outstanding & value) {
            set_shares_outstanding(value);
        }
        void set(const bid_count & value) {
            set_bid_count(value);
        }
        void set(const bid_volume & value) {
            set_bid_volume(value);
        }
        void set(const ask_count & value) {
            set_ask_count(value);
        }
        void set(const ask_volume & value) {
            set_ask_volume(value);
        }
        void set(const mid_count & value) {
            set_mid_count(value);
        }
        void set(const mid_volume & value) {
            set_mid_volume(value);
        }
        void set(const prt_count & value) {
            set_prt_count(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const last_prt_price & value) {
            set_last_prt_price(value);
        }
        void set(const last_prt_dttm & value) {
            set_last_prt_dttm(value);
        }
        void set(const exp_count & value) {
            set_exp_count(value);
        }
        void set(const exp_width & value) {
            set_exp_width(value);
        }
        void set(const exp_bid_size & value) {
            set_exp_bid_size(value);
        }
        void set(const exp_ask_size & value) {
            set_exp_ask_size(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockMarketSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_opn_price);
            set(value.m_mrk_price);
            set(value.m_cls_price);
            set(value.m_min_price);
            set(value.m_max_price);
            set(value.m_shares_outstanding);
            set(value.m_bid_count);
            set(value.m_bid_volume);
            set(value.m_ask_count);
            set(value.m_ask_volume);
            set(value.m_mid_count);
            set(value.m_mid_volume);
            set(value.m_prt_count);
            set(value.m_prt_volume);
            set(value.m_last_prt_price);
            set(value.m_last_prt_dttm);
            set(value.m_exp_count);
            set(value.m_exp_width);
            set(value.m_exp_bid_size);
            set(value.m_exp_ask_size);
            set(value.m_timestamp);
        }

        StockMarketSummary() {
            m__meta.set_message_type("StockMarketSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3040, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3040, length);
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
             *this = StockMarketSummary{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeOpnPrice() const {
            return !(m_opn_price == 0.0);
        }
        bool IncludeMrkPrice() const {
            return !(m_mrk_price == 0.0);
        }
        bool IncludeClsPrice() const {
            return !(m_cls_price == 0.0);
        }
        bool IncludeMinPrice() const {
            return !(m_min_price == 0.0);
        }
        bool IncludeMaxPrice() const {
            return !(m_max_price == 0.0);
        }
        bool IncludeSharesOutstanding() const {
            return !(m_shares_outstanding == 0);
        }
        bool IncludeBidCount() const {
            return !(m_bid_count == 0);
        }
        bool IncludeBidVolume() const {
            return !(m_bid_volume == 0);
        }
        bool IncludeAskCount() const {
            return !(m_ask_count == 0);
        }
        bool IncludeAskVolume() const {
            return !(m_ask_volume == 0);
        }
        bool IncludeMidCount() const {
            return !(m_mid_count == 0);
        }
        bool IncludeMidVolume() const {
            return !(m_mid_volume == 0);
        }
        bool IncludePrtCount() const {
            return !(m_prt_count == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeLastPrtPrice() const {
            return !(m_last_prt_price == 0.0);
        }
        bool IncludeLastPrtDttm() const {
            return (m_last_prt_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeExpCount() const {
            return !(m_exp_count == 0);
        }
        bool IncludeExpWidth() const {
            return !(m_exp_width == 0.0);
        }
        bool IncludeExpBidSize() const {
            return !(m_exp_bid_size == 0.0);
        }
        bool IncludeExpAskSize() const {
            return !(m_exp_ask_size == 0.0);
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(159, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeOpnPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_opn_price);
            }
            if ( IncludeMrkPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_mrk_price);
            }
            if ( IncludeClsPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_cls_price);
            }
            if ( IncludeMinPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_min_price);
            }
            if ( IncludeMaxPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_max_price);
            }
            if ( IncludeSharesOutstanding()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(158,m_shares_outstanding);
            }
            if ( IncludeBidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_bid_count);
            }
            if ( IncludeBidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_bid_volume);
            }
            if ( IncludeAskCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_ask_count);
            }
            if ( IncludeAskVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_ask_volume);
            }
            if ( IncludeMidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_mid_count);
            }
            if ( IncludeMidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_mid_volume);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_prt_volume);
            }
            if ( IncludeLastPrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(161,m_last_prt_price);
            }
            if ( IncludeLastPrtDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(162, m_last_prt_dttm);
            }
            if ( IncludeExpCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_exp_count);
            }
            if ( IncludeExpWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_exp_width);
            }
            if ( IncludeExpBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_exp_bid_size);
            }
            if ( IncludeExpAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_exp_ask_size);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_timestamp);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,159, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeOpnPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_opn_price);
            }
            if ( IncludeMrkPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_mrk_price);
            }
            if ( IncludeClsPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_cls_price);
            }
            if ( IncludeMinPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_min_price);
            }
            if ( IncludeMaxPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_max_price);
            }
            if ( IncludeSharesOutstanding()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,158,m_shares_outstanding);
            }
            if ( IncludeBidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_bid_count);
            }
            if ( IncludeBidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_bid_volume);
            }
            if ( IncludeAskCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_ask_count);
            }
            if ( IncludeAskVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_ask_volume);
            }
            if ( IncludeMidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_mid_count);
            }
            if ( IncludeMidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_mid_volume);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_prt_volume);
            }
            if ( IncludeLastPrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,161,m_last_prt_price);
            }
            if ( IncludeLastPrtDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 162, m_last_prt_dttm);
            }
            if ( IncludeExpCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_exp_count);
            }
            if ( IncludeExpWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_exp_width);
            }
            if ( IncludeExpBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_exp_bid_size);
            }
            if ( IncludeExpAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_exp_ask_size);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_timestamp);
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
                    case 159: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 100: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_mrk_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 158: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_shares_outstanding = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mid_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 161: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_last_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 162: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_prt_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exp_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_exp_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_bid_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_ask_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
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

    template<> inline const auto StockMarketSummary::get<StockMarketSummary::_meta>() const { return StockMarketSummary::_meta{ m__meta}; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::pkey>() const { return StockMarketSummary::pkey{ m_pkey}; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::trade_date>() const { return StockMarketSummary::trade_date{ m_trade_date}; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::opn_price>() const { return m_opn_price; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::mrk_price>() const { return m_mrk_price; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::cls_price>() const { return m_cls_price; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::min_price>() const { return m_min_price; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::max_price>() const { return m_max_price; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::shares_outstanding>() const { return m_shares_outstanding; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::bid_count>() const { return m_bid_count; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::bid_volume>() const { return m_bid_volume; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::ask_count>() const { return m_ask_count; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::ask_volume>() const { return m_ask_volume; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::mid_count>() const { return m_mid_count; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::mid_volume>() const { return m_mid_volume; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::prt_count>() const { return m_prt_count; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::last_prt_price>() const { return m_last_prt_price; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::last_prt_dttm>() const { return m_last_prt_dttm; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::exp_count>() const { return m_exp_count; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::exp_width>() const { return m_exp_width; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::exp_bid_size>() const { return m_exp_bid_size; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::exp_ask_size>() const { return m_exp_ask_size; }
    template<> inline const auto StockMarketSummary::get<StockMarketSummary::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockMarketSummary_PKey::get<StockMarketSummary_PKey::ticker>() const { return StockMarketSummary_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockMarketSummary_PKey& m) {
        o << "\"ticker\":{" << m.get<StockMarketSummary_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockMarketSummary& m) {
        o << "\"_meta\":{" << m.get<StockMarketSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockMarketSummary::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<StockMarketSummary::trade_date>() << "}";
        o << ",\"opn_price\":" << m.get<StockMarketSummary::opn_price>();
        o << ",\"mrk_price\":" << m.get<StockMarketSummary::mrk_price>();
        o << ",\"cls_price\":" << m.get<StockMarketSummary::cls_price>();
        o << ",\"min_price\":" << m.get<StockMarketSummary::min_price>();
        o << ",\"max_price\":" << m.get<StockMarketSummary::max_price>();
        o << ",\"shares_outstanding\":" << m.get<StockMarketSummary::shares_outstanding>();
        o << ",\"bid_count\":" << m.get<StockMarketSummary::bid_count>();
        o << ",\"bid_volume\":" << m.get<StockMarketSummary::bid_volume>();
        o << ",\"ask_count\":" << m.get<StockMarketSummary::ask_count>();
        o << ",\"ask_volume\":" << m.get<StockMarketSummary::ask_volume>();
        o << ",\"mid_count\":" << m.get<StockMarketSummary::mid_count>();
        o << ",\"mid_volume\":" << m.get<StockMarketSummary::mid_volume>();
        o << ",\"prt_count\":" << m.get<StockMarketSummary::prt_count>();
        o << ",\"prt_volume\":" << m.get<StockMarketSummary::prt_volume>();
        o << ",\"last_prt_price\":" << m.get<StockMarketSummary::last_prt_price>();
        {
            std::time_t tt = m.get<StockMarketSummary::last_prt_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_prt_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"exp_count\":" << m.get<StockMarketSummary::exp_count>();
        o << ",\"exp_width\":" << m.get<StockMarketSummary::exp_width>();
        o << ",\"exp_bid_size\":" << m.get<StockMarketSummary::exp_bid_size>();
        o << ",\"exp_ask_size\":" << m.get<StockMarketSummary::exp_ask_size>();
        {
            std::time_t tt = m.get<StockMarketSummary::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}