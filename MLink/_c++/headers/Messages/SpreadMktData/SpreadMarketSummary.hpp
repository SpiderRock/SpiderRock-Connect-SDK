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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _ini_price__GUARD__
    #define _ini_price__GUARD__
    DECL_STRONG_TYPE(ini_price, double);
    #endif//_ini_price__GUARD__

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

    #ifndef _open_int__GUARD__
    #define _open_int__GUARD__
    DECL_STRONG_TYPE(open_int, int32);
    #endif//_open_int__GUARD__

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

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

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

    #ifndef _last_print__GUARD__
    #define _last_print__GUARD__
    DECL_STRONG_TYPE(last_print, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_print__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _skey__GUARD__
    #define _skey__GUARD__
    DECL_STRONG_TYPE(skey, TickerKey);
    #endif//_skey__GUARD__

    
    class SpreadMarketSummary_PKey {
        public:
        //using statements for all types used in this class
        using skey = spiderrock::protobuf::api::skey;

        private:
        skey m_skey{};

        public:
		skey get_skey() const {
            return m_skey;
        }
        void set_skey(const skey& value)  {
            m_skey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadMarketSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadMarketSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const skey & value) { set_skey(value); }


        SpreadMarketSummary_PKey() {}

        virtual ~SpreadMarketSummary_PKey() {
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
        bool IncludeSkey() const {
            return (m_skey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_skey;
                m_skey.setCodecTickerKey(tickerKeyLayout_skey);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_skey);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_skey;
                m_skey.setCodecTickerKey(tickerKeyLayout_skey);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_skey);
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
                        m_skey.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadMarketSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadMarketSummary_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using ini_price = spiderrock::protobuf::api::ini_price;
        using mrk_price = spiderrock::protobuf::api::mrk_price__double;
        using cls_price = spiderrock::protobuf::api::cls_price__double;
        using min_price = spiderrock::protobuf::api::min_price;
        using max_price = spiderrock::protobuf::api::max_price;
        using open_int = spiderrock::protobuf::api::open_int;
        using bid_count = spiderrock::protobuf::api::bid_count__int32;
        using bid_volume = spiderrock::protobuf::api::bid_volume;
        using ask_count = spiderrock::protobuf::api::ask_count__int32;
        using ask_volume = spiderrock::protobuf::api::ask_volume;
        using mid_count = spiderrock::protobuf::api::mid_count;
        using mid_volume = spiderrock::protobuf::api::mid_volume;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using exp_count = spiderrock::protobuf::api::exp_count;
        using exp_width = spiderrock::protobuf::api::exp_width;
        using exp_bid_size = spiderrock::protobuf::api::exp_bid_size;
        using exp_ask_size = spiderrock::protobuf::api::exp_ask_size;
        using last_print = spiderrock::protobuf::api::last_print;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        ini_price m_ini_price{};
        mrk_price m_mrk_price{};
        cls_price m_cls_price{};
        min_price m_min_price{};
        max_price m_max_price{};
        open_int m_open_int{};
        bid_count m_bid_count{};
        bid_volume m_bid_volume{};
        ask_count m_ask_count{};
        ask_volume m_ask_volume{};
        mid_count m_mid_count{};
        mid_volume m_mid_volume{};
        prt_count m_prt_count{};
        prt_price m_prt_price{};
        exp_count m_exp_count{};
        exp_width m_exp_width{};
        exp_bid_size m_exp_bid_size{};
        exp_ask_size m_exp_ask_size{};
        last_print m_last_print{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        ini_price get_ini_price() const {
            return m_ini_price;
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
        open_int get_open_int() const {
            return m_open_int;
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
        prt_price get_prt_price() const {
            return m_prt_price;
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
        last_print get_last_print() const {
            return m_last_print;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_ini_price(const ini_price& value)  {
            m_ini_price = value;
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
        void set_open_int(const open_int& value)  {
            m_open_int = value;
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
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
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
        void set_last_print(const last_print& value)  {
            m_last_print = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadMarketSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const ini_price & value) {
            set_ini_price(value);
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
        void set(const open_int & value) {
            set_open_int(value);
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
        void set(const prt_price & value) {
            set_prt_price(value);
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
        void set(const last_print & value) {
            set_last_print(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpreadMarketSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_ini_price);
            set(value.m_mrk_price);
            set(value.m_cls_price);
            set(value.m_min_price);
            set(value.m_max_price);
            set(value.m_open_int);
            set(value.m_bid_count);
            set(value.m_bid_volume);
            set(value.m_ask_count);
            set(value.m_ask_volume);
            set(value.m_mid_count);
            set(value.m_mid_volume);
            set(value.m_prt_count);
            set(value.m_prt_price);
            set(value.m_exp_count);
            set(value.m_exp_width);
            set(value.m_exp_bid_size);
            set(value.m_exp_ask_size);
            set(value.m_last_print);
            set(value.m_timestamp);
        }

        SpreadMarketSummary() {
            m__meta.set_message_type("SpreadMarketSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2925, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2925, length);
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
             *this = SpreadMarketSummary{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeIniPrice() const {
            return !(m_ini_price == 0.0);
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
        bool IncludeOpenInt() const {
            return !(m_open_int == 0);
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
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
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
        bool IncludeLastPrint() const {
            return (m_last_print.time_since_epoch().count() != 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeIniPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_ini_price);
            }
            if ( IncludeMrkPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_mrk_price);
            }
            if ( IncludeClsPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_cls_price);
            }
            if ( IncludeMinPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_min_price);
            }
            if ( IncludeMaxPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_max_price);
            }
            if ( IncludeOpenInt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_open_int);
            }
            if ( IncludeBidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_bid_count);
            }
            if ( IncludeBidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_bid_volume);
            }
            if ( IncludeAskCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_ask_count);
            }
            if ( IncludeAskVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_ask_volume);
            }
            if ( IncludeMidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_mid_count);
            }
            if ( IncludeMidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_mid_volume);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_prt_count);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_prt_price);
            }
            if ( IncludeExpCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_exp_count);
            }
            if ( IncludeExpWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_exp_width);
            }
            if ( IncludeExpBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_exp_bid_size);
            }
            if ( IncludeExpAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_exp_ask_size);
            }
            if ( IncludeLastPrint()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_last_print);
            }
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            if ( IncludeIniPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_ini_price);
            }
            if ( IncludeMrkPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_mrk_price);
            }
            if ( IncludeClsPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_cls_price);
            }
            if ( IncludeMinPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_min_price);
            }
            if ( IncludeMaxPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_max_price);
            }
            if ( IncludeOpenInt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_open_int);
            }
            if ( IncludeBidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_bid_count);
            }
            if ( IncludeBidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_bid_volume);
            }
            if ( IncludeAskCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_ask_count);
            }
            if ( IncludeAskVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_ask_volume);
            }
            if ( IncludeMidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_mid_count);
            }
            if ( IncludeMidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_mid_volume);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_prt_count);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_prt_price);
            }
            if ( IncludeExpCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_exp_count);
            }
            if ( IncludeExpWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_exp_width);
            }
            if ( IncludeExpBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_exp_bid_size);
            }
            if ( IncludeExpAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_exp_ask_size);
            }
            if ( IncludeLastPrint()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_last_print);
            }
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ini_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_mrk_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_int = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mid_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exp_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_exp_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_bid_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_ask_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_print = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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

    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::_meta>() const { return SpreadMarketSummary::_meta{ m__meta}; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::pkey>() const { return SpreadMarketSummary::pkey{ m_pkey}; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::ticker>() const { return SpreadMarketSummary::ticker{ m_ticker}; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::ini_price>() const { return m_ini_price; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::mrk_price>() const { return m_mrk_price; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::cls_price>() const { return m_cls_price; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::min_price>() const { return m_min_price; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::max_price>() const { return m_max_price; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::open_int>() const { return m_open_int; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::bid_count>() const { return m_bid_count; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::bid_volume>() const { return m_bid_volume; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::ask_count>() const { return m_ask_count; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::ask_volume>() const { return m_ask_volume; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::mid_count>() const { return m_mid_count; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::mid_volume>() const { return m_mid_volume; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::prt_count>() const { return m_prt_count; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::prt_price>() const { return m_prt_price; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::exp_count>() const { return m_exp_count; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::exp_width>() const { return m_exp_width; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::exp_bid_size>() const { return m_exp_bid_size; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::exp_ask_size>() const { return m_exp_ask_size; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::last_print>() const { return m_last_print; }
    template<> inline const auto SpreadMarketSummary::get<SpreadMarketSummary::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadMarketSummary_PKey::get<SpreadMarketSummary_PKey::skey>() const { return SpreadMarketSummary_PKey::skey{m_skey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadMarketSummary_PKey& m) {
        o << "\"skey\":{" << m.get<SpreadMarketSummary_PKey::skey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadMarketSummary& m) {
        o << "\"_meta\":{" << m.get<SpreadMarketSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadMarketSummary::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpreadMarketSummary::ticker>() << "}";
        o << ",\"ini_price\":" << m.get<SpreadMarketSummary::ini_price>();
        o << ",\"mrk_price\":" << m.get<SpreadMarketSummary::mrk_price>();
        o << ",\"cls_price\":" << m.get<SpreadMarketSummary::cls_price>();
        o << ",\"min_price\":" << m.get<SpreadMarketSummary::min_price>();
        o << ",\"max_price\":" << m.get<SpreadMarketSummary::max_price>();
        o << ",\"open_int\":" << m.get<SpreadMarketSummary::open_int>();
        o << ",\"bid_count\":" << m.get<SpreadMarketSummary::bid_count>();
        o << ",\"bid_volume\":" << m.get<SpreadMarketSummary::bid_volume>();
        o << ",\"ask_count\":" << m.get<SpreadMarketSummary::ask_count>();
        o << ",\"ask_volume\":" << m.get<SpreadMarketSummary::ask_volume>();
        o << ",\"mid_count\":" << m.get<SpreadMarketSummary::mid_count>();
        o << ",\"mid_volume\":" << m.get<SpreadMarketSummary::mid_volume>();
        o << ",\"prt_count\":" << m.get<SpreadMarketSummary::prt_count>();
        o << ",\"prt_price\":" << m.get<SpreadMarketSummary::prt_price>();
        o << ",\"exp_count\":" << m.get<SpreadMarketSummary::exp_count>();
        o << ",\"exp_width\":" << m.get<SpreadMarketSummary::exp_width>();
        o << ",\"exp_bid_size\":" << m.get<SpreadMarketSummary::exp_bid_size>();
        o << ",\"exp_ask_size\":" << m.get<SpreadMarketSummary::exp_ask_size>();
        {
            std::time_t tt = m.get<SpreadMarketSummary::last_print>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_print\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpreadMarketSummary::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}