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

    #ifndef _prt_number__GUARD__
    #define _prt_number__GUARD__
    DECL_STRONG_TYPE(prt_number, int64);
    #endif//_prt_number__GUARD__

    #ifndef _prt_exch__StkExch__GUARD__
    #define _prt_exch__StkExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_prt_exch__StkExch__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_price__float__GUARD__
    #define _prt_price__float__GUARD__
    DECL_STRONG_TYPE(prt_price__float, float);
    #endif//_prt_price__float__GUARD__

    #ifndef _prt_cluster_num__GUARD__
    #define _prt_cluster_num__GUARD__
    DECL_STRONG_TYPE(prt_cluster_num, int32);
    #endif//_prt_cluster_num__GUARD__

    #ifndef _prt_cluster_size__GUARD__
    #define _prt_cluster_size__GUARD__
    DECL_STRONG_TYPE(prt_cluster_size, int32);
    #endif//_prt_cluster_size__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _mrk_price__float__GUARD__
    #define _mrk_price__float__GUARD__
    DECL_STRONG_TYPE(mrk_price__float, float);
    #endif//_mrk_price__float__GUARD__

    #ifndef _prt_type__int32__GUARD__
    #define _prt_type__int32__GUARD__
    DECL_STRONG_TYPE(prt_type__int32, int32);
    #endif//_prt_type__int32__GUARD__

    #ifndef _prt_cond1__GUARD__
    #define _prt_cond1__GUARD__
    DECL_STRONG_TYPE(prt_cond1, int32);
    #endif//_prt_cond1__GUARD__

    #ifndef _prt_cond2__GUARD__
    #define _prt_cond2__GUARD__
    DECL_STRONG_TYPE(prt_cond2, int32);
    #endif//_prt_cond2__GUARD__

    #ifndef _prt_cond3__GUARD__
    #define _prt_cond3__GUARD__
    DECL_STRONG_TYPE(prt_cond3, int32);
    #endif//_prt_cond3__GUARD__

    #ifndef _prt_cond4__GUARD__
    #define _prt_cond4__GUARD__
    DECL_STRONG_TYPE(prt_cond4, int32);
    #endif//_prt_cond4__GUARD__

    #ifndef _prt_side__PrtSide__GUARD__
    #define _prt_side__PrtSide__GUARD__
    DECL_STRONG_TYPE(prt_side__PrtSide, spiderrock::protobuf::api::PrtSide);
    #endif//_prt_side__PrtSide__GUARD__

    #ifndef _bid_price__float__GUARD__
    #define _bid_price__float__GUARD__
    DECL_STRONG_TYPE(bid_price__float, float);
    #endif//_bid_price__float__GUARD__

    #ifndef _ask_price__float__GUARD__
    #define _ask_price__float__GUARD__
    DECL_STRONG_TYPE(ask_price__float, float);
    #endif//_ask_price__float__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _bid_price2__float__GUARD__
    #define _bid_price2__float__GUARD__
    DECL_STRONG_TYPE(bid_price2__float, float);
    #endif//_bid_price2__float__GUARD__

    #ifndef _ask_price2__float__GUARD__
    #define _ask_price2__float__GUARD__
    DECL_STRONG_TYPE(ask_price2__float, float);
    #endif//_ask_price2__float__GUARD__

    #ifndef _bid_size2__GUARD__
    #define _bid_size2__GUARD__
    DECL_STRONG_TYPE(bid_size2, int32);
    #endif//_bid_size2__GUARD__

    #ifndef _ask_size2__GUARD__
    #define _ask_size2__GUARD__
    DECL_STRONG_TYPE(ask_size2, int32);
    #endif//_ask_size2__GUARD__

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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockPrintMarkup_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPrintMarkup_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPrintMarkup_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockPrintMarkup_PKey() {}

        virtual ~StockPrintMarkup_PKey() {
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
    

    class StockPrintMarkup {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockPrintMarkup_PKey;
        using prt_number = spiderrock::protobuf::api::prt_number;
        using prt_exch = spiderrock::protobuf::api::prt_exch__StkExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__float;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using mrk_price = spiderrock::protobuf::api::mrk_price__float;
        using prt_type = spiderrock::protobuf::api::prt_type__int32;
        using prt_cond1 = spiderrock::protobuf::api::prt_cond1;
        using prt_cond2 = spiderrock::protobuf::api::prt_cond2;
        using prt_cond3 = spiderrock::protobuf::api::prt_cond3;
        using prt_cond4 = spiderrock::protobuf::api::prt_cond4;
        using prt_side = spiderrock::protobuf::api::prt_side__PrtSide;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__float;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__float;
        using bid_size2 = spiderrock::protobuf::api::bid_size2;
        using ask_size2 = spiderrock::protobuf::api::ask_size2;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        prt_number m_prt_number{};
        prt_exch m_prt_exch{};
        prt_size m_prt_size{};
        prt_price m_prt_price{};
        prt_cluster_num m_prt_cluster_num{};
        prt_cluster_size m_prt_cluster_size{};
        prt_volume m_prt_volume{};
        mrk_price m_mrk_price{};
        prt_type m_prt_type{};
        prt_cond1 m_prt_cond1{};
        prt_cond2 m_prt_cond2{};
        prt_cond3 m_prt_cond3{};
        prt_cond4 m_prt_cond4{};
        prt_side m_prt_side{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        bid_price2 m_bid_price2{};
        ask_price2 m_ask_price2{};
        bid_size2 m_bid_size2{};
        ask_size2 m_ask_size2{};
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
        prt_number get_prt_number() const {
            return m_prt_number;
        }		
        prt_exch get_prt_exch() const {
            return m_prt_exch;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_cluster_num get_prt_cluster_num() const {
            return m_prt_cluster_num;
        }		
        prt_cluster_size get_prt_cluster_size() const {
            return m_prt_cluster_size;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        mrk_price get_mrk_price() const {
            return m_mrk_price;
        }		
        prt_type get_prt_type() const {
            return m_prt_type;
        }		
        prt_cond1 get_prt_cond1() const {
            return m_prt_cond1;
        }		
        prt_cond2 get_prt_cond2() const {
            return m_prt_cond2;
        }		
        prt_cond3 get_prt_cond3() const {
            return m_prt_cond3;
        }		
        prt_cond4 get_prt_cond4() const {
            return m_prt_cond4;
        }		
        prt_side get_prt_side() const {
            return m_prt_side;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        bid_size get_bid_size() const {
            return m_bid_size;
        }		
        ask_size get_ask_size() const {
            return m_ask_size;
        }		
        bid_price2 get_bid_price2() const {
            return m_bid_price2;
        }		
        ask_price2 get_ask_price2() const {
            return m_ask_price2;
        }		
        bid_size2 get_bid_size2() const {
            return m_bid_size2;
        }		
        ask_size2 get_ask_size2() const {
            return m_ask_size2;
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
        void set_prt_number(const prt_number& value)  {
            m_prt_number = value;
        }
        void set_prt_exch(const prt_exch& value)  {
            m_prt_exch = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_cluster_num(const prt_cluster_num& value)  {
            m_prt_cluster_num = value;
        }
        void set_prt_cluster_size(const prt_cluster_size& value)  {
            m_prt_cluster_size = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_mrk_price(const mrk_price& value)  {
            m_mrk_price = value;
        }
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_prt_cond1(const prt_cond1& value)  {
            m_prt_cond1 = value;
        }
        void set_prt_cond2(const prt_cond2& value)  {
            m_prt_cond2 = value;
        }
        void set_prt_cond3(const prt_cond3& value)  {
            m_prt_cond3 = value;
        }
        void set_prt_cond4(const prt_cond4& value)  {
            m_prt_cond4 = value;
        }
        void set_prt_side(const prt_side& value)  {
            m_prt_side = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_bid_price2(const bid_price2& value)  {
            m_bid_price2 = value;
        }
        void set_ask_price2(const ask_price2& value)  {
            m_ask_price2 = value;
        }
        void set_bid_size2(const bid_size2& value)  {
            m_bid_size2 = value;
        }
        void set_ask_size2(const ask_size2& value)  {
            m_ask_size2 = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPrintMarkup::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const prt_number & value) {
            set_prt_number(value);
        }
        void set(const prt_exch & value) {
            set_prt_exch(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_cluster_num & value) {
            set_prt_cluster_num(value);
        }
        void set(const prt_cluster_size & value) {
            set_prt_cluster_size(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const mrk_price & value) {
            set_mrk_price(value);
        }
        void set(const prt_type & value) {
            set_prt_type(value);
        }
        void set(const prt_cond1 & value) {
            set_prt_cond1(value);
        }
        void set(const prt_cond2 & value) {
            set_prt_cond2(value);
        }
        void set(const prt_cond3 & value) {
            set_prt_cond3(value);
        }
        void set(const prt_cond4 & value) {
            set_prt_cond4(value);
        }
        void set(const prt_side & value) {
            set_prt_side(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const bid_size & value) {
            set_bid_size(value);
        }
        void set(const ask_size & value) {
            set_ask_size(value);
        }
        void set(const bid_price2 & value) {
            set_bid_price2(value);
        }
        void set(const ask_price2 & value) {
            set_ask_price2(value);
        }
        void set(const bid_size2 & value) {
            set_bid_size2(value);
        }
        void set(const ask_size2 & value) {
            set_ask_size2(value);
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

        void set(const StockPrintMarkup & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_prt_number);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_volume);
            set(value.m_mrk_price);
            set(value.m_prt_type);
            set(value.m_prt_cond1);
            set(value.m_prt_cond2);
            set(value.m_prt_cond3);
            set(value.m_prt_cond4);
            set(value.m_prt_side);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_bid_price2);
            set(value.m_ask_price2);
            set(value.m_bid_size2);
            set(value.m_ask_size2);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        StockPrintMarkup() {
            m__meta.set_message_type("StockPrintMarkup");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3055, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3055, length);
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
             *this = StockPrintMarkup{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludePrtNumber() const {
            return !(m_prt_number == 0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtClusterNum() const {
            return !(m_prt_cluster_num == 0);
        }
        bool IncludePrtClusterSize() const {
            return !(m_prt_cluster_size == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeMrkPrice() const {
            return !(m_mrk_price == 0.0);
        }
        bool IncludePrtType() const {
            return !(m_prt_type == 0);
        }
        bool IncludePrtCond1() const {
            return !(m_prt_cond1 == 0);
        }
        bool IncludePrtCond2() const {
            return !(m_prt_cond2 == 0);
        }
        bool IncludePrtCond3() const {
            return !(m_prt_cond3 == 0);
        }
        bool IncludePrtCond4() const {
            return !(m_prt_cond4 == 0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeBidSize() const {
            return !(m_bid_size == 0);
        }
        bool IncludeAskSize() const {
            return !(m_ask_size == 0);
        }
        bool IncludeBidPrice2() const {
            return !(m_bid_price2 == 0.0);
        }
        bool IncludeAskPrice2() const {
            return !(m_ask_price2 == 0.0);
        }
        bool IncludeBidSize2() const {
            return !(m_bid_size2 == 0);
        }
        bool IncludeAskSize2() const {
            return !(m_ask_size2 == 0);
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
            if ( IncludePrtNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_prt_number);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_prt_price);
            }
            if ( IncludePrtClusterNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_prt_cluster_size);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_prt_volume);
            }
            if ( IncludeMrkPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_mrk_price);
            }
            if ( IncludePrtType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_prt_type);
            }
            if ( IncludePrtCond1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_prt_cond1);
            }
            if ( IncludePrtCond2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_prt_cond2);
            }
            if ( IncludePrtCond3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_prt_cond3);
            }
            if ( IncludePrtCond4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_prt_cond4);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_ask_size);
            }
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ask_price2);
            }
            if ( IncludeBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_ask_size2);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(166,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(169,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(172, m_timestamp);
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
            if ( IncludePrtNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_prt_number);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_prt_price);
            }
            if ( IncludePrtClusterNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_prt_cluster_size);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_prt_volume);
            }
            if ( IncludeMrkPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_mrk_price);
            }
            if ( IncludePrtType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_prt_type);
            }
            if ( IncludePrtCond1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_prt_cond1);
            }
            if ( IncludePrtCond2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_prt_cond2);
            }
            if ( IncludePrtCond3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_prt_cond3);
            }
            if ( IncludePrtCond4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_prt_cond4);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_ask_size);
            }
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ask_price2);
            }
            if ( IncludeBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_ask_size2);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,166,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,169,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 172, m_timestamp);
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_exch = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mrk_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 172: {
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

    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::_meta>() const { return StockPrintMarkup::_meta{ m__meta}; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::pkey>() const { return StockPrintMarkup::pkey{ m_pkey}; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_number>() const { return m_prt_number; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_prt_exch)); }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_size>() const { return m_prt_size; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_price>() const { return m_prt_price; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::mrk_price>() const { return m_mrk_price; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_type>() const { return m_prt_type; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_cond1>() const { return m_prt_cond1; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_cond2>() const { return m_prt_cond2; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_cond3>() const { return m_prt_cond3; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_cond4>() const { return m_prt_cond4; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::bid_price>() const { return m_bid_price; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::ask_price>() const { return m_ask_price; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::bid_size>() const { return m_bid_size; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::ask_size>() const { return m_ask_size; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::bid_size2>() const { return m_bid_size2; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::ask_size2>() const { return m_ask_size2; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto StockPrintMarkup::get<StockPrintMarkup::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockPrintMarkup_PKey::get<StockPrintMarkup_PKey::ticker>() const { return StockPrintMarkup_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockPrintMarkup_PKey& m) {
        o << "\"ticker\":{" << m.get<StockPrintMarkup_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockPrintMarkup& m) {
        o << "\"_meta\":{" << m.get<StockPrintMarkup::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockPrintMarkup::pkey>() << "}";
        o << ",\"prt_number\":" << m.get<StockPrintMarkup::prt_number>();
        o << ",\"prt_exch\":" << (int64_t)m.get<StockPrintMarkup::prt_exch>();
        o << ",\"prt_size\":" << m.get<StockPrintMarkup::prt_size>();
        o << ",\"prt_price\":" << m.get<StockPrintMarkup::prt_price>();
        o << ",\"prt_cluster_num\":" << m.get<StockPrintMarkup::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<StockPrintMarkup::prt_cluster_size>();
        o << ",\"prt_volume\":" << m.get<StockPrintMarkup::prt_volume>();
        o << ",\"mrk_price\":" << m.get<StockPrintMarkup::mrk_price>();
        o << ",\"prt_type\":" << m.get<StockPrintMarkup::prt_type>();
        o << ",\"prt_cond1\":" << m.get<StockPrintMarkup::prt_cond1>();
        o << ",\"prt_cond2\":" << m.get<StockPrintMarkup::prt_cond2>();
        o << ",\"prt_cond3\":" << m.get<StockPrintMarkup::prt_cond3>();
        o << ",\"prt_cond4\":" << m.get<StockPrintMarkup::prt_cond4>();
        o << ",\"prt_side\":" << (int64_t)m.get<StockPrintMarkup::prt_side>();
        o << ",\"bid_price\":" << m.get<StockPrintMarkup::bid_price>();
        o << ",\"ask_price\":" << m.get<StockPrintMarkup::ask_price>();
        o << ",\"bid_size\":" << m.get<StockPrintMarkup::bid_size>();
        o << ",\"ask_size\":" << m.get<StockPrintMarkup::ask_size>();
        o << ",\"bid_price2\":" << m.get<StockPrintMarkup::bid_price2>();
        o << ",\"ask_price2\":" << m.get<StockPrintMarkup::ask_price2>();
        o << ",\"bid_size2\":" << m.get<StockPrintMarkup::bid_size2>();
        o << ",\"ask_size2\":" << m.get<StockPrintMarkup::ask_size2>();
        o << ",\"src_timestamp\":" << m.get<StockPrintMarkup::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<StockPrintMarkup::net_timestamp>();
        {
            std::time_t tt = m.get<StockPrintMarkup::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}