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

    #ifndef _order_id__GUARD__
    #define _order_id__GUARD__
    DECL_STRONG_TYPE(order_id, string);
    #endif//_order_id__GUARD__

    #ifndef _size__GUARD__
    #define _size__GUARD__
    DECL_STRONG_TYPE(size, int32);
    #endif//_size__GUARD__

    #ifndef _price__GUARD__
    #define _price__GUARD__
    DECL_STRONG_TYPE(price, double);
    #endif//_price__GUARD__

    #ifndef _is_price_valid__GUARD__
    #define _is_price_valid__GUARD__
    DECL_STRONG_TYPE(is_price_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_price_valid__GUARD__

    #ifndef _flip_side__GUARD__
    #define _flip_side__GUARD__
    DECL_STRONG_TYPE(flip_side, spiderrock::protobuf::api::YesNo);
    #endif//_flip_side__GUARD__

    #ifndef _orig_order_size__GUARD__
    #define _orig_order_size__GUARD__
    DECL_STRONG_TYPE(orig_order_size, int32);
    #endif//_orig_order_size__GUARD__

    #ifndef _order_type__GUARD__
    #define _order_type__GUARD__
    DECL_STRONG_TYPE(order_type, spiderrock::protobuf::api::ExchOrderType);
    #endif//_order_type__GUARD__

    #ifndef _order_status__GUARD__
    #define _order_status__GUARD__
    DECL_STRONG_TYPE(order_status, spiderrock::protobuf::api::ExchOrderStatus);
    #endif//_order_status__GUARD__

    #ifndef _market_qualifier__GUARD__
    #define _market_qualifier__GUARD__
    DECL_STRONG_TYPE(market_qualifier, spiderrock::protobuf::api::MarketQualifier);
    #endif//_market_qualifier__GUARD__

    #ifndef _exec_qualifier__GUARD__
    #define _exec_qualifier__GUARD__
    DECL_STRONG_TYPE(exec_qualifier, spiderrock::protobuf::api::ExecQualifier);
    #endif//_exec_qualifier__GUARD__

    #ifndef _time_in_force__GUARD__
    #define _time_in_force__GUARD__
    DECL_STRONG_TYPE(time_in_force, spiderrock::protobuf::api::TimeInForce);
    #endif//_time_in_force__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _clearing_firm__GUARD__
    #define _clearing_firm__GUARD__
    DECL_STRONG_TYPE(clearing_firm, string);
    #endif//_clearing_firm__GUARD__

    #ifndef _clearing_accnt__GUARD__
    #define _clearing_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_accnt, string);
    #endif//_clearing_accnt__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _dgw_timestamp__GUARD__
    #define _dgw_timestamp__GUARD__
    DECL_STRONG_TYPE(dgw_timestamp, int64);
    #endif//_dgw_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _exch_spr_id__GUARD__
    #define _exch_spr_id__GUARD__
    DECL_STRONG_TYPE(exch_spr_id, string);
    #endif//_exch_spr_id__GUARD__

    #ifndef _skey__GUARD__
    #define _skey__GUARD__
    DECL_STRONG_TYPE(skey, TickerKey);
    #endif//_skey__GUARD__

    #ifndef _exch__GUARD__
    #define _exch__GUARD__
    DECL_STRONG_TYPE(exch, spiderrock::protobuf::api::OptExch);
    #endif//_exch__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _is_test__GUARD__
    #define _is_test__GUARD__
    DECL_STRONG_TYPE(is_test, spiderrock::protobuf::api::YesNo);
    #endif//_is_test__GUARD__

    
    class SpreadExchOrder_PKey {
        public:
        //using statements for all types used in this class
        using skey = spiderrock::protobuf::api::skey;
        using exch = spiderrock::protobuf::api::exch;
        using side = spiderrock::protobuf::api::side;
        using is_test = spiderrock::protobuf::api::is_test;

        private:
        skey m_skey{};
        exch m_exch{};
        side m_side{};
        is_test m_is_test{};

        public:
		skey get_skey() const {
            return m_skey;
        }
        exch get_exch() const {
            return m_exch;
        }
        side get_side() const {
            return m_side;
        }
        is_test get_is_test() const {
            return m_is_test;
        }
        void set_skey(const skey& value)  {
            m_skey = value;
        }
        void set_exch(const exch& value)  {
            m_exch = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_is_test(const is_test& value)  {
            m_is_test = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchOrder_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchOrder_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const skey & value) { set_skey(value); }
        void set(const exch & value) { set_exch(value); }
        void set(const side & value) { set_side(value); }
        void set(const is_test & value) { set_is_test(value); }


        SpreadExchOrder_PKey() {}

        virtual ~SpreadExchOrder_PKey() {
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_skey.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test)));
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
                    case 11: {m_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_is_test = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadExchOrder {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadExchOrder_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using order_id = spiderrock::protobuf::api::order_id;
        using size = spiderrock::protobuf::api::size;
        using price = spiderrock::protobuf::api::price;
        using is_price_valid = spiderrock::protobuf::api::is_price_valid;
        using flip_side = spiderrock::protobuf::api::flip_side;
        using orig_order_size = spiderrock::protobuf::api::orig_order_size;
        using order_type = spiderrock::protobuf::api::order_type;
        using order_status = spiderrock::protobuf::api::order_status;
        using market_qualifier = spiderrock::protobuf::api::market_qualifier;
        using exec_qualifier = spiderrock::protobuf::api::exec_qualifier;
        using time_in_force = spiderrock::protobuf::api::time_in_force;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using clearing_firm = spiderrock::protobuf::api::clearing_firm;
        using clearing_accnt = spiderrock::protobuf::api::clearing_accnt;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using dgw_timestamp = spiderrock::protobuf::api::dgw_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using exch_spr_id = spiderrock::protobuf::api::exch_spr_id;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        order_id m_order_id{};
        size m_size{};
        price m_price{};
        is_price_valid m_is_price_valid{};
        flip_side m_flip_side{};
        orig_order_size m_orig_order_size{};
        order_type m_order_type{};
        order_status m_order_status{};
        market_qualifier m_market_qualifier{};
        exec_qualifier m_exec_qualifier{};
        time_in_force m_time_in_force{};
        firm_type m_firm_type{};
        clearing_firm m_clearing_firm{};
        clearing_accnt m_clearing_accnt{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        dgw_timestamp m_dgw_timestamp{};
        timestamp m_timestamp{};
        exch_spr_id m_exch_spr_id{};

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
        order_id get_order_id() const {
            return m_order_id;
        }		
        size get_size() const {
            return m_size;
        }		
        price get_price() const {
            return m_price;
        }		
        is_price_valid get_is_price_valid() const {
            return m_is_price_valid;
        }		
        flip_side get_flip_side() const {
            return m_flip_side;
        }		
        orig_order_size get_orig_order_size() const {
            return m_orig_order_size;
        }		
        order_type get_order_type() const {
            return m_order_type;
        }		
        order_status get_order_status() const {
            return m_order_status;
        }		
        market_qualifier get_market_qualifier() const {
            return m_market_qualifier;
        }		
        exec_qualifier get_exec_qualifier() const {
            return m_exec_qualifier;
        }		
        time_in_force get_time_in_force() const {
            return m_time_in_force;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        clearing_firm get_clearing_firm() const {
            return m_clearing_firm;
        }		
        clearing_accnt get_clearing_accnt() const {
            return m_clearing_accnt;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        dgw_timestamp get_dgw_timestamp() const {
            return m_dgw_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        exch_spr_id get_exch_spr_id() const {
            return m_exch_spr_id;
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
        void set_order_id(const order_id& value)  {
            m_order_id = value;
        }
        void set_size(const size& value)  {
            m_size = value;
        }
        void set_price(const price& value)  {
            m_price = value;
        }
        void set_is_price_valid(const is_price_valid& value)  {
            m_is_price_valid = value;
        }
        void set_flip_side(const flip_side& value)  {
            m_flip_side = value;
        }
        void set_orig_order_size(const orig_order_size& value)  {
            m_orig_order_size = value;
        }
        void set_order_type(const order_type& value)  {
            m_order_type = value;
        }
        void set_order_status(const order_status& value)  {
            m_order_status = value;
        }
        void set_market_qualifier(const market_qualifier& value)  {
            m_market_qualifier = value;
        }
        void set_exec_qualifier(const exec_qualifier& value)  {
            m_exec_qualifier = value;
        }
        void set_time_in_force(const time_in_force& value)  {
            m_time_in_force = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_clearing_firm(const clearing_firm& value)  {
            m_clearing_firm = value;
        }
        void set_clearing_accnt(const clearing_accnt& value)  {
            m_clearing_accnt = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_dgw_timestamp(const dgw_timestamp& value)  {
            m_dgw_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_exch_spr_id(const exch_spr_id& value)  {
            m_exch_spr_id = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchOrder::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const order_id & value) {
            set_order_id(value);
        }
        void set(const size & value) {
            set_size(value);
        }
        void set(const price & value) {
            set_price(value);
        }
        void set(const is_price_valid & value) {
            set_is_price_valid(value);
        }
        void set(const flip_side & value) {
            set_flip_side(value);
        }
        void set(const orig_order_size & value) {
            set_orig_order_size(value);
        }
        void set(const order_type & value) {
            set_order_type(value);
        }
        void set(const order_status & value) {
            set_order_status(value);
        }
        void set(const market_qualifier & value) {
            set_market_qualifier(value);
        }
        void set(const exec_qualifier & value) {
            set_exec_qualifier(value);
        }
        void set(const time_in_force & value) {
            set_time_in_force(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const clearing_firm & value) {
            set_clearing_firm(value);
        }
        void set(const clearing_accnt & value) {
            set_clearing_accnt(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const dgw_timestamp & value) {
            set_dgw_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const exch_spr_id & value) {
            set_exch_spr_id(value);
        }

        void set(const SpreadExchOrder & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_order_id);
            set(value.m_size);
            set(value.m_price);
            set(value.m_is_price_valid);
            set(value.m_flip_side);
            set(value.m_orig_order_size);
            set(value.m_order_type);
            set(value.m_order_status);
            set(value.m_market_qualifier);
            set(value.m_exec_qualifier);
            set(value.m_time_in_force);
            set(value.m_firm_type);
            set(value.m_clearing_firm);
            set(value.m_clearing_accnt);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_dgw_timestamp);
            set(value.m_timestamp);
            set(value.m_exch_spr_id);
        }

        SpreadExchOrder() {
            m__meta.set_message_type("SpreadExchOrder");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2915, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2915, length);
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
             *this = SpreadExchOrder{};
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
        bool IncludeOrderId() const {
            return !(m_order_id.empty());
        }
        bool IncludeSize() const {
            return !(m_size == 0);
        }
        bool IncludePrice() const {
            return !(m_price == 0.0);
        }
        bool IncludeOrigOrderSize() const {
            return !(m_orig_order_size == 0);
        }
        bool IncludeClearingFirm() const {
            return !(m_clearing_firm.empty());
        }
        bool IncludeClearingAccnt() const {
            return !(m_clearing_accnt.empty());
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeDgwTimestamp() const {
            return !(m_dgw_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeExchSprId() const {
            return !(m_exch_spr_id.empty());
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_order_id);
            }
            if ( IncludeSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_size);
            }
            if ( IncludePrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_price_valid)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(113,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_flip_side)));
            if ( IncludeOrigOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_orig_order_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchOrderType>(m_order_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchOrderStatus>(m_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketQualifier>(m_market_qualifier)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecQualifier>(m_exec_qualifier)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_time_in_force)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludeClearingFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_clearing_firm);
            }
            if ( IncludeClearingAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_clearing_accnt);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(142,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(145,m_net_timestamp);
            }
            if ( IncludeDgwTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(148,m_dgw_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(151, m_timestamp);
            }
            if ( IncludeExchSprId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(170,m_exch_spr_id);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_order_id));
            }
            if ( IncludeSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_size);
            }
            if ( IncludePrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_price_valid)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,113,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_flip_side)));
            if ( IncludeOrigOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_orig_order_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchOrderType>(m_order_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchOrderStatus>(m_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketQualifier>(m_market_qualifier)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecQualifier>(m_exec_qualifier)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>(m_time_in_force)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludeClearingFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_clearing_firm));
            }
            if ( IncludeClearingAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_clearing_accnt));
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,142,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,145,m_net_timestamp);
            }
            if ( IncludeDgwTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,148,m_dgw_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 151, m_timestamp);
            }
            if ( IncludeExchSprId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,170,static_cast<string>(m_exch_spr_id));
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_price_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 113: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_flip_side = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_orig_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_type = static_cast<spiderrock::protobuf::api::ExchOrderType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_status = static_cast<spiderrock::protobuf::api::ExchOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_qualifier = static_cast<spiderrock::protobuf::api::MarketQualifier>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_qualifier = static_cast<spiderrock::protobuf::api::ExecQualifier>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_in_force = static_cast<spiderrock::protobuf::api::TimeInForce>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_dgw_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 170: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_spr_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::_meta>() const { return SpreadExchOrder::_meta{ m__meta}; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::pkey>() const { return SpreadExchOrder::pkey{ m_pkey}; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::ticker>() const { return SpreadExchOrder::ticker{ m_ticker}; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::order_id>() const { return m_order_id; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::size>() const { return m_size; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::price>() const { return m_price; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::is_price_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_price_valid)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::flip_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_flip_side)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::orig_order_size>() const { return m_orig_order_size; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::order_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchOrderType>( m_order_type)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchOrderStatus>( m_order_status)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::market_qualifier>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketQualifier>( m_market_qualifier)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::exec_qualifier>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecQualifier>( m_exec_qualifier)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::time_in_force>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeInForce>( m_time_in_force)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::clearing_firm>() const { return m_clearing_firm; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::clearing_accnt>() const { return m_clearing_accnt; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::dgw_timestamp>() const { return m_dgw_timestamp; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadExchOrder::get<SpreadExchOrder::exch_spr_id>() const { return m_exch_spr_id; }
    template<> inline const auto SpreadExchOrder_PKey::get<SpreadExchOrder_PKey::skey>() const { return SpreadExchOrder_PKey::skey{m_skey}; }
    template<> inline const auto SpreadExchOrder_PKey::get<SpreadExchOrder_PKey::exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exch));}
    template<> inline const auto SpreadExchOrder_PKey::get<SpreadExchOrder_PKey::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto SpreadExchOrder_PKey::get<SpreadExchOrder_PKey::is_test>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadExchOrder_PKey& m) {
        o << "\"skey\":{" << m.get<SpreadExchOrder_PKey::skey>() << "}";
        o << ",\"exch\":" << (int64_t)m.get<SpreadExchOrder_PKey::exch>();
        o << ",\"side\":" << (int64_t)m.get<SpreadExchOrder_PKey::side>();
        o << ",\"is_test\":" << (int64_t)m.get<SpreadExchOrder_PKey::is_test>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadExchOrder& m) {
        o << "\"_meta\":{" << m.get<SpreadExchOrder::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadExchOrder::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpreadExchOrder::ticker>() << "}";
        o << ",\"order_id\":\"" << m.get<SpreadExchOrder::order_id>() << "\"";
        o << ",\"size\":" << m.get<SpreadExchOrder::size>();
        o << ",\"price\":" << m.get<SpreadExchOrder::price>();
        o << ",\"is_price_valid\":" << (int64_t)m.get<SpreadExchOrder::is_price_valid>();
        o << ",\"flip_side\":" << (int64_t)m.get<SpreadExchOrder::flip_side>();
        o << ",\"orig_order_size\":" << m.get<SpreadExchOrder::orig_order_size>();
        o << ",\"order_type\":" << (int64_t)m.get<SpreadExchOrder::order_type>();
        o << ",\"order_status\":" << (int64_t)m.get<SpreadExchOrder::order_status>();
        o << ",\"market_qualifier\":" << (int64_t)m.get<SpreadExchOrder::market_qualifier>();
        o << ",\"exec_qualifier\":" << (int64_t)m.get<SpreadExchOrder::exec_qualifier>();
        o << ",\"time_in_force\":" << (int64_t)m.get<SpreadExchOrder::time_in_force>();
        o << ",\"firm_type\":" << (int64_t)m.get<SpreadExchOrder::firm_type>();
        o << ",\"clearing_firm\":\"" << m.get<SpreadExchOrder::clearing_firm>() << "\"";
        o << ",\"clearing_accnt\":\"" << m.get<SpreadExchOrder::clearing_accnt>() << "\"";
        o << ",\"src_timestamp\":" << m.get<SpreadExchOrder::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<SpreadExchOrder::net_timestamp>();
        o << ",\"dgw_timestamp\":" << m.get<SpreadExchOrder::dgw_timestamp>();
        {
            std::time_t tt = m.get<SpreadExchOrder::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"exch_spr_id\":\"" << m.get<SpreadExchOrder::exch_spr_id>() << "\"";
        return o;
    }

}
}
}