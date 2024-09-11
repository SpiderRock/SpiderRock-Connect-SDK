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

    #ifndef _date__string__GUARD__
    #define _date__string__GUARD__
    DECL_STRONG_TYPE(date__string, string);
    #endif//_date__string__GUARD__

    #ifndef _time__string__GUARD__
    #define _time__string__GUARD__
    DECL_STRONG_TYPE(time__string, string);
    #endif//_time__string__GUARD__

    #ifndef _prt_open__GUARD__
    #define _prt_open__GUARD__
    DECL_STRONG_TYPE(prt_open, double);
    #endif//_prt_open__GUARD__

    #ifndef _prt_high__GUARD__
    #define _prt_high__GUARD__
    DECL_STRONG_TYPE(prt_high, double);
    #endif//_prt_high__GUARD__

    #ifndef _prt_low__GUARD__
    #define _prt_low__GUARD__
    DECL_STRONG_TYPE(prt_low, double);
    #endif//_prt_low__GUARD__

    #ifndef _prt_last__GUARD__
    #define _prt_last__GUARD__
    DECL_STRONG_TYPE(prt_last, double);
    #endif//_prt_last__GUARD__

    #ifndef _prt_vwap__GUARD__
    #define _prt_vwap__GUARD__
    DECL_STRONG_TYPE(prt_vwap, double);
    #endif//_prt_vwap__GUARD__

    #ifndef _prt_volume__int32__GUARD__
    #define _prt_volume__int32__GUARD__
    DECL_STRONG_TYPE(prt_volume__int32, int32);
    #endif//_prt_volume__int32__GUARD__

    #ifndef _prt_count__GUARD__
    #define _prt_count__GUARD__
    DECL_STRONG_TYPE(prt_count, int32);
    #endif//_prt_count__GUARD__

    #ifndef _qte_hi_bid__GUARD__
    #define _qte_hi_bid__GUARD__
    DECL_STRONG_TYPE(qte_hi_bid, double);
    #endif//_qte_hi_bid__GUARD__

    #ifndef _qte_lo_ask__GUARD__
    #define _qte_lo_ask__GUARD__
    DECL_STRONG_TYPE(qte_lo_ask, double);
    #endif//_qte_lo_ask__GUARD__

    #ifndef _qte_twap__GUARD__
    #define _qte_twap__GUARD__
    DECL_STRONG_TYPE(qte_twap, double);
    #endif//_qte_twap__GUARD__

    #ifndef _qte_count__GUARD__
    #define _qte_count__GUARD__
    DECL_STRONG_TYPE(qte_count, int32);
    #endif//_qte_count__GUARD__

    #ifndef _bid__double__GUARD__
    #define _bid__double__GUARD__
    DECL_STRONG_TYPE(bid__double, double);
    #endif//_bid__double__GUARD__

    #ifndef _ask__double__GUARD__
    #define _ask__double__GUARD__
    DECL_STRONG_TYPE(ask__double, double);
    #endif//_ask__double__GUARD__

    #ifndef _bid_sz__GUARD__
    #define _bid_sz__GUARD__
    DECL_STRONG_TYPE(bid_sz, int32);
    #endif//_bid_sz__GUARD__

    #ifndef _ask_sz__GUARD__
    #define _ask_sz__GUARD__
    DECL_STRONG_TYPE(ask_sz, int32);
    #endif//_ask_sz__GUARD__

    #ifndef _width__GUARD__
    #define _width__GUARD__
    DECL_STRONG_TYPE(width, float);
    #endif//_width__GUARD__

    #ifndef _is_eob__GUARD__
    #define _is_eob__GUARD__
    DECL_STRONG_TYPE(is_eob, spiderrock::protobuf::api::YesNo);
    #endif//_is_eob__GUARD__

    #ifndef _is_eoh__GUARD__
    #define _is_eoh__GUARD__
    DECL_STRONG_TYPE(is_eoh, spiderrock::protobuf::api::YesNo);
    #endif//_is_eoh__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockMinuteBar_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockMinuteBar_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockMinuteBar_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockMinuteBar_PKey() {}

        virtual ~StockMinuteBar_PKey() {
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
    

    class StockMinuteBar {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockMinuteBar_PKey;
        using date = spiderrock::protobuf::api::date__string;
        using time = spiderrock::protobuf::api::time__string;
        using prt_open = spiderrock::protobuf::api::prt_open;
        using prt_high = spiderrock::protobuf::api::prt_high;
        using prt_low = spiderrock::protobuf::api::prt_low;
        using prt_last = spiderrock::protobuf::api::prt_last;
        using prt_vwap = spiderrock::protobuf::api::prt_vwap;
        using prt_volume = spiderrock::protobuf::api::prt_volume__int32;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using qte_hi_bid = spiderrock::protobuf::api::qte_hi_bid;
        using qte_lo_ask = spiderrock::protobuf::api::qte_lo_ask;
        using qte_twap = spiderrock::protobuf::api::qte_twap;
        using qte_count = spiderrock::protobuf::api::qte_count;
        using bid = spiderrock::protobuf::api::bid__double;
        using ask = spiderrock::protobuf::api::ask__double;
        using bid_sz = spiderrock::protobuf::api::bid_sz;
        using ask_sz = spiderrock::protobuf::api::ask_sz;
        using width = spiderrock::protobuf::api::width;
        using is_eob = spiderrock::protobuf::api::is_eob;
        using is_eoh = spiderrock::protobuf::api::is_eoh;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        date m_date{};
        time m_time{};
        prt_open m_prt_open{};
        prt_high m_prt_high{};
        prt_low m_prt_low{};
        prt_last m_prt_last{};
        prt_vwap m_prt_vwap{};
        prt_volume m_prt_volume{};
        prt_count m_prt_count{};
        qte_hi_bid m_qte_hi_bid{};
        qte_lo_ask m_qte_lo_ask{};
        qte_twap m_qte_twap{};
        qte_count m_qte_count{};
        bid m_bid{};
        ask m_ask{};
        bid_sz m_bid_sz{};
        ask_sz m_ask_sz{};
        width m_width{};
        is_eob m_is_eob{};
        is_eoh m_is_eoh{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        date get_date() const {
            return m_date;
        }		
        time get_time() const {
            return m_time;
        }		
        prt_open get_prt_open() const {
            return m_prt_open;
        }		
        prt_high get_prt_high() const {
            return m_prt_high;
        }		
        prt_low get_prt_low() const {
            return m_prt_low;
        }		
        prt_last get_prt_last() const {
            return m_prt_last;
        }		
        prt_vwap get_prt_vwap() const {
            return m_prt_vwap;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        prt_count get_prt_count() const {
            return m_prt_count;
        }		
        qte_hi_bid get_qte_hi_bid() const {
            return m_qte_hi_bid;
        }		
        qte_lo_ask get_qte_lo_ask() const {
            return m_qte_lo_ask;
        }		
        qte_twap get_qte_twap() const {
            return m_qte_twap;
        }		
        qte_count get_qte_count() const {
            return m_qte_count;
        }		
        bid get_bid() const {
            return m_bid;
        }		
        ask get_ask() const {
            return m_ask;
        }		
        bid_sz get_bid_sz() const {
            return m_bid_sz;
        }		
        ask_sz get_ask_sz() const {
            return m_ask_sz;
        }		
        width get_width() const {
            return m_width;
        }		
        is_eob get_is_eob() const {
            return m_is_eob;
        }		
        is_eoh get_is_eoh() const {
            return m_is_eoh;
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
        void set_date(const date& value)  {
            m_date = value;
        }
        void set_time(const time& value)  {
            m_time = value;
        }
        void set_prt_open(const prt_open& value)  {
            m_prt_open = value;
        }
        void set_prt_high(const prt_high& value)  {
            m_prt_high = value;
        }
        void set_prt_low(const prt_low& value)  {
            m_prt_low = value;
        }
        void set_prt_last(const prt_last& value)  {
            m_prt_last = value;
        }
        void set_prt_vwap(const prt_vwap& value)  {
            m_prt_vwap = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_prt_count(const prt_count& value)  {
            m_prt_count = value;
        }
        void set_qte_hi_bid(const qte_hi_bid& value)  {
            m_qte_hi_bid = value;
        }
        void set_qte_lo_ask(const qte_lo_ask& value)  {
            m_qte_lo_ask = value;
        }
        void set_qte_twap(const qte_twap& value)  {
            m_qte_twap = value;
        }
        void set_qte_count(const qte_count& value)  {
            m_qte_count = value;
        }
        void set_bid(const bid& value)  {
            m_bid = value;
        }
        void set_ask(const ask& value)  {
            m_ask = value;
        }
        void set_bid_sz(const bid_sz& value)  {
            m_bid_sz = value;
        }
        void set_ask_sz(const ask_sz& value)  {
            m_ask_sz = value;
        }
        void set_width(const width& value)  {
            m_width = value;
        }
        void set_is_eob(const is_eob& value)  {
            m_is_eob = value;
        }
        void set_is_eoh(const is_eoh& value)  {
            m_is_eoh = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockMinuteBar::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const date & value) {
            set_date(value);
        }
        void set(const time & value) {
            set_time(value);
        }
        void set(const prt_open & value) {
            set_prt_open(value);
        }
        void set(const prt_high & value) {
            set_prt_high(value);
        }
        void set(const prt_low & value) {
            set_prt_low(value);
        }
        void set(const prt_last & value) {
            set_prt_last(value);
        }
        void set(const prt_vwap & value) {
            set_prt_vwap(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const prt_count & value) {
            set_prt_count(value);
        }
        void set(const qte_hi_bid & value) {
            set_qte_hi_bid(value);
        }
        void set(const qte_lo_ask & value) {
            set_qte_lo_ask(value);
        }
        void set(const qte_twap & value) {
            set_qte_twap(value);
        }
        void set(const qte_count & value) {
            set_qte_count(value);
        }
        void set(const bid & value) {
            set_bid(value);
        }
        void set(const ask & value) {
            set_ask(value);
        }
        void set(const bid_sz & value) {
            set_bid_sz(value);
        }
        void set(const ask_sz & value) {
            set_ask_sz(value);
        }
        void set(const width & value) {
            set_width(value);
        }
        void set(const is_eob & value) {
            set_is_eob(value);
        }
        void set(const is_eoh & value) {
            set_is_eoh(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockMinuteBar & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_date);
            set(value.m_time);
            set(value.m_prt_open);
            set(value.m_prt_high);
            set(value.m_prt_low);
            set(value.m_prt_last);
            set(value.m_prt_vwap);
            set(value.m_prt_volume);
            set(value.m_prt_count);
            set(value.m_qte_hi_bid);
            set(value.m_qte_lo_ask);
            set(value.m_qte_twap);
            set(value.m_qte_count);
            set(value.m_bid);
            set(value.m_ask);
            set(value.m_bid_sz);
            set(value.m_ask_sz);
            set(value.m_width);
            set(value.m_is_eob);
            set(value.m_is_eoh);
            set(value.m_timestamp);
        }

        StockMinuteBar() {
            m__meta.set_message_type("StockMinuteBar");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1175, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1175, length);
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
             *this = StockMinuteBar{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeDate() const {
            return !(m_date.empty());
        }
        bool IncludeTime() const {
            return !(m_time.empty());
        }
        bool IncludePrtOpen() const {
            return !(m_prt_open == 0.0);
        }
        bool IncludePrtHigh() const {
            return !(m_prt_high == 0.0);
        }
        bool IncludePrtLow() const {
            return !(m_prt_low == 0.0);
        }
        bool IncludePrtLast() const {
            return !(m_prt_last == 0.0);
        }
        bool IncludePrtVwap() const {
            return !(m_prt_vwap == 0.0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludePrtCount() const {
            return !(m_prt_count == 0);
        }
        bool IncludeQteHiBid() const {
            return !(m_qte_hi_bid == 0.0);
        }
        bool IncludeQteLoAsk() const {
            return !(m_qte_lo_ask == 0.0);
        }
        bool IncludeQteTwap() const {
            return !(m_qte_twap == 0.0);
        }
        bool IncludeQteCount() const {
            return !(m_qte_count == 0);
        }
        bool IncludeBid() const {
            return !(m_bid == 0.0);
        }
        bool IncludeAsk() const {
            return !(m_ask == 0.0);
        }
        bool IncludeBidSz() const {
            return !(m_bid_sz == 0);
        }
        bool IncludeAskSz() const {
            return !(m_ask_sz == 0);
        }
        bool IncludeWidth() const {
            return !(m_width == 0.0);
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
            if ( IncludeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_date);
            }
            if ( IncludeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_time);
            }
            if ( IncludePrtOpen()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_prt_open);
            }
            if ( IncludePrtHigh()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_prt_high);
            }
            if ( IncludePrtLow()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_prt_low);
            }
            if ( IncludePrtLast()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_prt_last);
            }
            if ( IncludePrtVwap()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_prt_vwap);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_volume);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_prt_count);
            }
            if ( IncludeQteHiBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_qte_hi_bid);
            }
            if ( IncludeQteLoAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_qte_lo_ask);
            }
            if ( IncludeQteTwap()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_qte_twap);
            }
            if ( IncludeQteCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_qte_count);
            }
            if ( IncludeBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_bid);
            }
            if ( IncludeAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_ask);
            }
            if ( IncludeBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_bid_sz);
            }
            if ( IncludeAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_ask_sz);
            }
            if ( IncludeWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_width);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_eob)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_eoh)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(160, m_timestamp);
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
            if ( IncludeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_date));
            }
            if ( IncludeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_time));
            }
            if ( IncludePrtOpen()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_prt_open);
            }
            if ( IncludePrtHigh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_prt_high);
            }
            if ( IncludePrtLow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_prt_low);
            }
            if ( IncludePrtLast()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_prt_last);
            }
            if ( IncludePrtVwap()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_prt_vwap);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_volume);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_prt_count);
            }
            if ( IncludeQteHiBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_qte_hi_bid);
            }
            if ( IncludeQteLoAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_qte_lo_ask);
            }
            if ( IncludeQteTwap()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_qte_twap);
            }
            if ( IncludeQteCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_qte_count);
            }
            if ( IncludeBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_bid);
            }
            if ( IncludeAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_ask);
            }
            if ( IncludeBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_bid_sz);
            }
            if ( IncludeAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_ask_sz);
            }
            if ( IncludeWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_width);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_eob)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_eoh)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 160, m_timestamp);
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
                            m_date = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_time = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_open = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_high = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_low = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_last = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_vwap = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_qte_hi_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_qte_lo_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_qte_twap = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_qte_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_eob = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_eoh = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {
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

    template<> inline const auto StockMinuteBar::get<StockMinuteBar::_meta>() const { return StockMinuteBar::_meta{ m__meta}; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::pkey>() const { return StockMinuteBar::pkey{ m_pkey}; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::date>() const { return m_date; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::time>() const { return m_time; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_open>() const { return m_prt_open; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_high>() const { return m_prt_high; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_low>() const { return m_prt_low; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_last>() const { return m_prt_last; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_vwap>() const { return m_prt_vwap; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::prt_count>() const { return m_prt_count; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::qte_hi_bid>() const { return m_qte_hi_bid; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::qte_lo_ask>() const { return m_qte_lo_ask; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::qte_twap>() const { return m_qte_twap; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::qte_count>() const { return m_qte_count; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::bid>() const { return m_bid; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::ask>() const { return m_ask; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::bid_sz>() const { return m_bid_sz; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::ask_sz>() const { return m_ask_sz; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::width>() const { return m_width; }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::is_eob>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_eob)); }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::is_eoh>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_eoh)); }
    template<> inline const auto StockMinuteBar::get<StockMinuteBar::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockMinuteBar_PKey::get<StockMinuteBar_PKey::ticker>() const { return StockMinuteBar_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockMinuteBar_PKey& m) {
        o << "\"ticker\":{" << m.get<StockMinuteBar_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockMinuteBar& m) {
        o << "\"_meta\":{" << m.get<StockMinuteBar::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockMinuteBar::pkey>() << "}";
        o << ",\"date\":\"" << m.get<StockMinuteBar::date>() << "\"";
        o << ",\"time\":\"" << m.get<StockMinuteBar::time>() << "\"";
        o << ",\"prt_open\":" << m.get<StockMinuteBar::prt_open>();
        o << ",\"prt_high\":" << m.get<StockMinuteBar::prt_high>();
        o << ",\"prt_low\":" << m.get<StockMinuteBar::prt_low>();
        o << ",\"prt_last\":" << m.get<StockMinuteBar::prt_last>();
        o << ",\"prt_vwap\":" << m.get<StockMinuteBar::prt_vwap>();
        o << ",\"prt_volume\":" << m.get<StockMinuteBar::prt_volume>();
        o << ",\"prt_count\":" << m.get<StockMinuteBar::prt_count>();
        o << ",\"qte_hi_bid\":" << m.get<StockMinuteBar::qte_hi_bid>();
        o << ",\"qte_lo_ask\":" << m.get<StockMinuteBar::qte_lo_ask>();
        o << ",\"qte_twap\":" << m.get<StockMinuteBar::qte_twap>();
        o << ",\"qte_count\":" << m.get<StockMinuteBar::qte_count>();
        o << ",\"bid\":" << m.get<StockMinuteBar::bid>();
        o << ",\"ask\":" << m.get<StockMinuteBar::ask>();
        o << ",\"bid_sz\":" << m.get<StockMinuteBar::bid_sz>();
        o << ",\"ask_sz\":" << m.get<StockMinuteBar::ask_sz>();
        o << ",\"width\":" << m.get<StockMinuteBar::width>();
        o << ",\"is_eob\":" << (int64_t)m.get<StockMinuteBar::is_eob>();
        o << ",\"is_eoh\":" << (int64_t)m.get<StockMinuteBar::is_eoh>();
        {
            std::time_t tt = m.get<StockMinuteBar::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}