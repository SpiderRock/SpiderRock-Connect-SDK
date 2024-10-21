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

    #ifndef _update_type__PrtUpdateType__GUARD__
    #define _update_type__PrtUpdateType__GUARD__
    DECL_STRONG_TYPE(update_type__PrtUpdateType, spiderrock::protobuf::api::PrtUpdateType);
    #endif//_update_type__PrtUpdateType__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _prt_exch__FutExch__GUARD__
    #define _prt_exch__FutExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__FutExch, spiderrock::protobuf::api::FutExch);
    #endif//_prt_exch__FutExch__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

    #ifndef _prt_type__int32__GUARD__
    #define _prt_type__int32__GUARD__
    DECL_STRONG_TYPE(prt_type__int32, int32);
    #endif//_prt_type__int32__GUARD__

    #ifndef _prt_orders__GUARD__
    #define _prt_orders__GUARD__
    DECL_STRONG_TYPE(prt_orders, uint32);
    #endif//_prt_orders__GUARD__

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

    #ifndef _prt_side__PrtSide__GUARD__
    #define _prt_side__PrtSide__GUARD__
    DECL_STRONG_TYPE(prt_side__PrtSide, spiderrock::protobuf::api::PrtSide);
    #endif//_prt_side__PrtSide__GUARD__

    #ifndef _prt_timestamp__GUARD__
    #define _prt_timestamp__GUARD__
    DECL_STRONG_TYPE(prt_timestamp, int64);
    #endif//_prt_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _bid_price__double__GUARD__
    #define _bid_price__double__GUARD__
    DECL_STRONG_TYPE(bid_price__double, double);
    #endif//_bid_price__double__GUARD__

    #ifndef _ask_price__double__GUARD__
    #define _ask_price__double__GUARD__
    DECL_STRONG_TYPE(ask_price__double, double);
    #endif//_ask_price__double__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _bid_price2__double__GUARD__
    #define _bid_price2__double__GUARD__
    DECL_STRONG_TYPE(bid_price2__double, double);
    #endif//_bid_price2__double__GUARD__

    #ifndef _ask_price2__double__GUARD__
    #define _ask_price2__double__GUARD__
    DECL_STRONG_TYPE(ask_price2__double, double);
    #endif//_ask_price2__double__GUARD__

    #ifndef _bid_size2__GUARD__
    #define _bid_size2__GUARD__
    DECL_STRONG_TYPE(bid_size2, int32);
    #endif//_bid_size2__GUARD__

    #ifndef _ask_size2__GUARD__
    #define _ask_size2__GUARD__
    DECL_STRONG_TYPE(ask_size2, int32);
    #endif//_ask_size2__GUARD__

    #ifndef _prt_probability__GUARD__
    #define _prt_probability__GUARD__
    DECL_STRONG_TYPE(prt_probability, float);
    #endif//_prt_probability__GUARD__

    #ifndef _bid_price_m1__double__GUARD__
    #define _bid_price_m1__double__GUARD__
    DECL_STRONG_TYPE(bid_price_m1__double, double);
    #endif//_bid_price_m1__double__GUARD__

    #ifndef _ask_price_m1__double__GUARD__
    #define _ask_price_m1__double__GUARD__
    DECL_STRONG_TYPE(ask_price_m1__double, double);
    #endif//_ask_price_m1__double__GUARD__

    #ifndef _prt_price_m1__double__GUARD__
    #define _prt_price_m1__double__GUARD__
    DECL_STRONG_TYPE(prt_price_m1__double, double);
    #endif//_prt_price_m1__double__GUARD__

    #ifndef _pnl_m1__GUARD__
    #define _pnl_m1__GUARD__
    DECL_STRONG_TYPE(pnl_m1, float);
    #endif//_pnl_m1__GUARD__

    #ifndef _pnl_m1_err__GUARD__
    #define _pnl_m1_err__GUARD__
    DECL_STRONG_TYPE(pnl_m1_err, spiderrock::protobuf::api::YesNo);
    #endif//_pnl_m1_err__GUARD__

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    #ifndef _prt_number__GUARD__
    #define _prt_number__GUARD__
    DECL_STRONG_TYPE(prt_number, int64);
    #endif//_prt_number__GUARD__

    
    class FuturePrintSet_PKey {
        public:
        //using statements for all types used in this class
        using fkey = spiderrock::protobuf::api::fkey;
        using prt_number = spiderrock::protobuf::api::prt_number;

        private:
        fkey m_fkey{};
        prt_number m_prt_number{};

        public:
		fkey get_fkey() const {
            return m_fkey;
        }
        prt_number get_prt_number() const {
            return m_prt_number;
        }
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        void set_prt_number(const prt_number& value)  {
            m_prt_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePrintSet_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePrintSet_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fkey & value) { set_fkey(value); }
        void set(const prt_number & value) { set_prt_number(value); }


        FuturePrintSet_PKey() {}

        virtual ~FuturePrintSet_PKey() {
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
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }
        bool IncludePrtNumber() const {
            return !(m_prt_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            if ( IncludePrtNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_prt_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
            }
            if ( IncludePrtNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_prt_number);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_fkey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_prt_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class FuturePrintSet {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::FuturePrintSet_PKey;
        using update_type = spiderrock::protobuf::api::update_type__PrtUpdateType;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__FutExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_type = spiderrock::protobuf::api::prt_type__int32;
        using prt_orders = spiderrock::protobuf::api::prt_orders;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using prt_side = spiderrock::protobuf::api::prt_side__PrtSide;
        using prt_timestamp = spiderrock::protobuf::api::prt_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using bid_price = spiderrock::protobuf::api::bid_price__double;
        using ask_price = spiderrock::protobuf::api::ask_price__double;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__double;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__double;
        using bid_size2 = spiderrock::protobuf::api::bid_size2;
        using ask_size2 = spiderrock::protobuf::api::ask_size2;
        using prt_probability = spiderrock::protobuf::api::prt_probability;
        using bid_price_m1 = spiderrock::protobuf::api::bid_price_m1__double;
        using ask_price_m1 = spiderrock::protobuf::api::ask_price_m1__double;
        using prt_price_m1 = spiderrock::protobuf::api::prt_price_m1__double;
        using pnl_m1 = spiderrock::protobuf::api::pnl_m1;
        using pnl_m1_err = spiderrock::protobuf::api::pnl_m1_err;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        update_type m_update_type{};
        ticker m_ticker{};
        prt_exch m_prt_exch{};
        prt_size m_prt_size{};
        prt_price m_prt_price{};
        prt_type m_prt_type{};
        prt_orders m_prt_orders{};
        prt_cluster_num m_prt_cluster_num{};
        prt_cluster_size m_prt_cluster_size{};
        prt_volume m_prt_volume{};
        prt_side m_prt_side{};
        prt_timestamp m_prt_timestamp{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        bid_price2 m_bid_price2{};
        ask_price2 m_ask_price2{};
        bid_size2 m_bid_size2{};
        ask_size2 m_ask_size2{};
        prt_probability m_prt_probability{};
        bid_price_m1 m_bid_price_m1{};
        ask_price_m1 m_ask_price_m1{};
        prt_price_m1 m_prt_price_m1{};
        pnl_m1 m_pnl_m1{};
        pnl_m1_err m_pnl_m1_err{};

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
        ticker get_ticker() const {
            return m_ticker;
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
        prt_type get_prt_type() const {
            return m_prt_type;
        }		
        prt_orders get_prt_orders() const {
            return m_prt_orders;
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
        prt_side get_prt_side() const {
            return m_prt_side;
        }		
        prt_timestamp get_prt_timestamp() const {
            return m_prt_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
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
        prt_probability get_prt_probability() const {
            return m_prt_probability;
        }		
        bid_price_m1 get_bid_price_m1() const {
            return m_bid_price_m1;
        }		
        ask_price_m1 get_ask_price_m1() const {
            return m_ask_price_m1;
        }		
        prt_price_m1 get_prt_price_m1() const {
            return m_prt_price_m1;
        }		
        pnl_m1 get_pnl_m1() const {
            return m_pnl_m1;
        }		
        pnl_m1_err get_pnl_m1_err() const {
            return m_pnl_m1_err;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
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
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_prt_orders(const prt_orders& value)  {
            m_prt_orders = value;
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
        void set_prt_side(const prt_side& value)  {
            m_prt_side = value;
        }
        void set_prt_timestamp(const prt_timestamp& value)  {
            m_prt_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
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
        void set_prt_probability(const prt_probability& value)  {
            m_prt_probability = value;
        }
        void set_bid_price_m1(const bid_price_m1& value)  {
            m_bid_price_m1 = value;
        }
        void set_ask_price_m1(const ask_price_m1& value)  {
            m_ask_price_m1 = value;
        }
        void set_prt_price_m1(const prt_price_m1& value)  {
            m_prt_price_m1 = value;
        }
        void set_pnl_m1(const pnl_m1& value)  {
            m_pnl_m1 = value;
        }
        void set_pnl_m1_err(const pnl_m1_err& value)  {
            m_pnl_m1_err = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePrintSet::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const ticker & value) {
            set_ticker(value);
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
        void set(const prt_type & value) {
            set_prt_type(value);
        }
        void set(const prt_orders & value) {
            set_prt_orders(value);
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
        void set(const prt_side & value) {
            set_prt_side(value);
        }
        void set(const prt_timestamp & value) {
            set_prt_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
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
        void set(const prt_probability & value) {
            set_prt_probability(value);
        }
        void set(const bid_price_m1 & value) {
            set_bid_price_m1(value);
        }
        void set(const ask_price_m1 & value) {
            set_ask_price_m1(value);
        }
        void set(const prt_price_m1 & value) {
            set_prt_price_m1(value);
        }
        void set(const pnl_m1 & value) {
            set_pnl_m1(value);
        }
        void set(const pnl_m1_err & value) {
            set_pnl_m1_err(value);
        }

        void set(const FuturePrintSet & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_update_type);
            set(value.m_ticker);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_type);
            set(value.m_prt_orders);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_volume);
            set(value.m_prt_side);
            set(value.m_prt_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_bid_price2);
            set(value.m_ask_price2);
            set(value.m_bid_size2);
            set(value.m_ask_size2);
            set(value.m_prt_probability);
            set(value.m_bid_price_m1);
            set(value.m_ask_price_m1);
            set(value.m_prt_price_m1);
            set(value.m_pnl_m1);
            set(value.m_pnl_m1_err);
        }

        FuturePrintSet() {
            m__meta.set_message_type("FuturePrintSet");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2610, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2610, length);
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
             *this = FuturePrintSet{};
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
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtType() const {
            return !(m_prt_type == 0);
        }
        bool IncludePrtOrders() const {
            return !(m_prt_orders == 0);
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
        bool IncludePrtTimestamp() const {
            return !(m_prt_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
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
        bool IncludePrtProbability() const {
            return !(m_prt_probability == 0.0);
        }
        bool IncludeBidPriceM1() const {
            return !(m_bid_price_m1 == 0.0);
        }
        bool IncludeAskPriceM1() const {
            return !(m_ask_price_m1 == 0.0);
        }
        bool IncludePrtPriceM1() const {
            return !(m_prt_price_m1 == 0.0);
        }
        bool IncludePnlM1() const {
            return !(m_pnl_m1 == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(203,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtUpdateType>(m_update_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(103, tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_prt_price);
            }
            if ( IncludePrtType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_prt_type);
            }
            if ( IncludePrtOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(118,m_prt_orders);
            }
            if ( IncludePrtClusterNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_prt_cluster_size);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_prt_volume);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(136,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_timestamp);
            }
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_ask_size);
            }
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_ask_price2);
            }
            if ( IncludeBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_ask_size2);
            }
            if ( IncludePrtProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_prt_probability);
            }
            if ( IncludeBidPriceM1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_bid_price_m1);
            }
            if ( IncludeAskPriceM1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_ask_price_m1);
            }
            if ( IncludePrtPriceM1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_prt_price_m1);
            }
            if ( IncludePnlM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_pnl_m1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m1_err)));
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,203,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtUpdateType>(m_update_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 103, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_prt_price);
            }
            if ( IncludePrtType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_prt_type);
            }
            if ( IncludePrtOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,118,m_prt_orders);
            }
            if ( IncludePrtClusterNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_prt_cluster_size);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_prt_volume);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,136,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_timestamp);
            }
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_ask_size);
            }
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_ask_price2);
            }
            if ( IncludeBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_ask_size2);
            }
            if ( IncludePrtProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_prt_probability);
            }
            if ( IncludeBidPriceM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_bid_price_m1);
            }
            if ( IncludeAskPriceM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_ask_price_m1);
            }
            if ( IncludePrtPriceM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_prt_price_m1);
            }
            if ( IncludePnlM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_pnl_m1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m1_err)));
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
                    case 203: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_update_type = static_cast<spiderrock::protobuf::api::PrtUpdateType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_exch = static_cast<spiderrock::protobuf::api::FutExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_prt_orders = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price_m1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price_m1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price_m1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pnl_m1_err = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto FuturePrintSet::get<FuturePrintSet::_meta>() const { return FuturePrintSet::_meta{ m__meta}; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::pkey>() const { return FuturePrintSet::pkey{ m_pkey}; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::update_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtUpdateType>( m_update_type)); }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::ticker>() const { return FuturePrintSet::ticker{ m_ticker}; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>( m_prt_exch)); }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_size>() const { return m_prt_size; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_price>() const { return m_prt_price; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_type>() const { return m_prt_type; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_orders>() const { return m_prt_orders; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::timestamp>() const { return m_timestamp; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::bid_price>() const { return m_bid_price; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::ask_price>() const { return m_ask_price; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::bid_size>() const { return m_bid_size; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::ask_size>() const { return m_ask_size; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::bid_size2>() const { return m_bid_size2; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::ask_size2>() const { return m_ask_size2; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_probability>() const { return m_prt_probability; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::bid_price_m1>() const { return m_bid_price_m1; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::ask_price_m1>() const { return m_ask_price_m1; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::prt_price_m1>() const { return m_prt_price_m1; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::pnl_m1>() const { return m_pnl_m1; }
    template<> inline const auto FuturePrintSet::get<FuturePrintSet::pnl_m1_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_pnl_m1_err)); }
    template<> inline const auto FuturePrintSet_PKey::get<FuturePrintSet_PKey::fkey>() const { return FuturePrintSet_PKey::fkey{m_fkey}; }
    template<> inline const auto FuturePrintSet_PKey::get<FuturePrintSet_PKey::prt_number>() const { return m_prt_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const FuturePrintSet_PKey& m) {
        o << "\"fkey\":{" << m.get<FuturePrintSet_PKey::fkey>() << "}";
        o << ",\"prt_number\":" << m.get<FuturePrintSet_PKey::prt_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const FuturePrintSet& m) {
        o << "\"_meta\":{" << m.get<FuturePrintSet::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<FuturePrintSet::pkey>() << "}";
        o << ",\"update_type\":" << (int64_t)m.get<FuturePrintSet::update_type>();
        o << ",\"ticker\":{" << m.get<FuturePrintSet::ticker>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<FuturePrintSet::prt_exch>();
        o << ",\"prt_size\":" << m.get<FuturePrintSet::prt_size>();
        o << ",\"prt_price\":" << m.get<FuturePrintSet::prt_price>();
        o << ",\"prt_type\":" << m.get<FuturePrintSet::prt_type>();
        o << ",\"prt_orders\":" << m.get<FuturePrintSet::prt_orders>();
        o << ",\"prt_cluster_num\":" << m.get<FuturePrintSet::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<FuturePrintSet::prt_cluster_size>();
        o << ",\"prt_volume\":" << m.get<FuturePrintSet::prt_volume>();
        o << ",\"prt_side\":" << (int64_t)m.get<FuturePrintSet::prt_side>();
        o << ",\"prt_timestamp\":" << m.get<FuturePrintSet::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<FuturePrintSet::net_timestamp>();
        {
            std::time_t tt = m.get<FuturePrintSet::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"bid_price\":" << m.get<FuturePrintSet::bid_price>();
        o << ",\"ask_price\":" << m.get<FuturePrintSet::ask_price>();
        o << ",\"bid_size\":" << m.get<FuturePrintSet::bid_size>();
        o << ",\"ask_size\":" << m.get<FuturePrintSet::ask_size>();
        o << ",\"bid_price2\":" << m.get<FuturePrintSet::bid_price2>();
        o << ",\"ask_price2\":" << m.get<FuturePrintSet::ask_price2>();
        o << ",\"bid_size2\":" << m.get<FuturePrintSet::bid_size2>();
        o << ",\"ask_size2\":" << m.get<FuturePrintSet::ask_size2>();
        o << ",\"prt_probability\":" << m.get<FuturePrintSet::prt_probability>();
        o << ",\"bid_price_m1\":" << m.get<FuturePrintSet::bid_price_m1>();
        o << ",\"ask_price_m1\":" << m.get<FuturePrintSet::ask_price_m1>();
        o << ",\"prt_price_m1\":" << m.get<FuturePrintSet::prt_price_m1>();
        o << ",\"pnl_m1\":" << m.get<FuturePrintSet::pnl_m1>();
        o << ",\"pnl_m1_err\":" << (int64_t)m.get<FuturePrintSet::pnl_m1_err>();
        return o;
    }

}
}
}