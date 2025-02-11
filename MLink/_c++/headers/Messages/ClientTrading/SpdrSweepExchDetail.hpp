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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _parent_order_size__GUARD__
    #define _parent_order_size__GUARD__
    DECL_STRONG_TYPE(parent_order_size, int32);
    #endif//_parent_order_size__GUARD__

    #ifndef _parent_limit_price__GUARD__
    #define _parent_limit_price__GUARD__
    DECL_STRONG_TYPE(parent_limit_price, double);
    #endif//_parent_limit_price__GUARD__

    #ifndef _exch_bid__GUARD__
    #define _exch_bid__GUARD__
    DECL_STRONG_TYPE(exch_bid, double);
    #endif//_exch_bid__GUARD__

    #ifndef _exch_ask__GUARD__
    #define _exch_ask__GUARD__
    DECL_STRONG_TYPE(exch_ask, double);
    #endif//_exch_ask__GUARD__

    #ifndef _exch_bid_sz__GUARD__
    #define _exch_bid_sz__GUARD__
    DECL_STRONG_TYPE(exch_bid_sz, int32);
    #endif//_exch_bid_sz__GUARD__

    #ifndef _exch_ask_sz__GUARD__
    #define _exch_ask_sz__GUARD__
    DECL_STRONG_TYPE(exch_ask_sz, int32);
    #endif//_exch_ask_sz__GUARD__

    #ifndef _cl_ord_id__int64__GUARD__
    #define _cl_ord_id__int64__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__int64, int64);
    #endif//_cl_ord_id__int64__GUARD__

    #ifndef _child_prc__GUARD__
    #define _child_prc__GUARD__
    DECL_STRONG_TYPE(child_prc, double);
    #endif//_child_prc__GUARD__

    #ifndef _child_size__GUARD__
    #define _child_size__GUARD__
    DECL_STRONG_TYPE(child_size, int32);
    #endif//_child_size__GUARD__

    #ifndef _max_child_size__GUARD__
    #define _max_child_size__GUARD__
    DECL_STRONG_TYPE(max_child_size, int32);
    #endif//_max_child_size__GUARD__

    #ifndef _is_isochild__GUARD__
    #define _is_isochild__GUARD__
    DECL_STRONG_TYPE(is_isochild, spiderrock::protobuf::api::YesNo);
    #endif//_is_isochild__GUARD__

    #ifndef _child_result__GUARD__
    #define _child_result__GUARD__
    DECL_STRONG_TYPE(child_result, spiderrock::protobuf::api::SweepResult);
    #endif//_child_result__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _exchange__string__GUARD__
    #define _exchange__string__GUARD__
    DECL_STRONG_TYPE(exchange__string, string);
    #endif//_exchange__string__GUARD__

    
    class SpdrSweepExchDetail_PKey {
        public:
        //using statements for all types used in this class
        using parent_number = spiderrock::protobuf::api::parent_number;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using exchange = spiderrock::protobuf::api::exchange__string;

        private:
        parent_number m_parent_number{};
        trigger_group_id m_trigger_group_id{};
        exchange m_exchange{};

        public:
        parent_number get_parent_number() const {
            return m_parent_number;
        }
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }
        exchange get_exchange() const {
            return m_exchange;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrSweepExchDetail_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrSweepExchDetail_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }
        void set(const trigger_group_id & value) { set_trigger_group_id(value); }
        void set(const exchange & value) { set_exchange(value); }


        SpdrSweepExchDetail_PKey() {}

        virtual ~SpdrSweepExchDetail_PKey() {
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
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
        }
        bool IncludeExchange() const {
            return !(m_exchange.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_parent_number);
            }
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_trigger_group_id);
            }
            if ( IncludeExchange()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_exchange);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_parent_number);
            }
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_trigger_group_id);
            }
            if ( IncludeExchange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_exchange));
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
                    case 10: {m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 12: {m_exchange = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrSweepExchDetail {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrSweepExchDetail_PKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using order_side = spiderrock::protobuf::api::order_side;
        using parent_order_size = spiderrock::protobuf::api::parent_order_size;
        using parent_limit_price = spiderrock::protobuf::api::parent_limit_price;
        using exch_bid = spiderrock::protobuf::api::exch_bid;
        using exch_ask = spiderrock::protobuf::api::exch_ask;
        using exch_bid_sz = spiderrock::protobuf::api::exch_bid_sz;
        using exch_ask_sz = spiderrock::protobuf::api::exch_ask_sz;
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__int64;
        using child_prc = spiderrock::protobuf::api::child_prc;
        using child_size = spiderrock::protobuf::api::child_size;
        using max_child_size = spiderrock::protobuf::api::max_child_size;
        using is_isochild = spiderrock::protobuf::api::is_isochild;
        using child_result = spiderrock::protobuf::api::child_result;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        order_side m_order_side{};
        parent_order_size m_parent_order_size{};
        parent_limit_price m_parent_limit_price{};
        exch_bid m_exch_bid{};
        exch_ask m_exch_ask{};
        exch_bid_sz m_exch_bid_sz{};
        exch_ask_sz m_exch_ask_sz{};
        cl_ord_id m_cl_ord_id{};
        child_prc m_child_prc{};
        child_size m_child_size{};
        max_child_size m_max_child_size{};
        is_isochild m_is_isochild{};
        child_result m_child_result{};
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
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        parent_order_size get_parent_order_size() const {
            return m_parent_order_size;
        }		
        parent_limit_price get_parent_limit_price() const {
            return m_parent_limit_price;
        }		
        exch_bid get_exch_bid() const {
            return m_exch_bid;
        }		
        exch_ask get_exch_ask() const {
            return m_exch_ask;
        }		
        exch_bid_sz get_exch_bid_sz() const {
            return m_exch_bid_sz;
        }		
        exch_ask_sz get_exch_ask_sz() const {
            return m_exch_ask_sz;
        }		
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }		
        child_prc get_child_prc() const {
            return m_child_prc;
        }		
        child_size get_child_size() const {
            return m_child_size;
        }		
        max_child_size get_max_child_size() const {
            return m_max_child_size;
        }		
        is_isochild get_is_isochild() const {
            return m_is_isochild;
        }		
        child_result get_child_result() const {
            return m_child_result;
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
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_parent_order_size(const parent_order_size& value)  {
            m_parent_order_size = value;
        }
        void set_parent_limit_price(const parent_limit_price& value)  {
            m_parent_limit_price = value;
        }
        void set_exch_bid(const exch_bid& value)  {
            m_exch_bid = value;
        }
        void set_exch_ask(const exch_ask& value)  {
            m_exch_ask = value;
        }
        void set_exch_bid_sz(const exch_bid_sz& value)  {
            m_exch_bid_sz = value;
        }
        void set_exch_ask_sz(const exch_ask_sz& value)  {
            m_exch_ask_sz = value;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_child_prc(const child_prc& value)  {
            m_child_prc = value;
        }
        void set_child_size(const child_size& value)  {
            m_child_size = value;
        }
        void set_max_child_size(const max_child_size& value)  {
            m_max_child_size = value;
        }
        void set_is_isochild(const is_isochild& value)  {
            m_is_isochild = value;
        }
        void set_child_result(const child_result& value)  {
            m_child_result = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrSweepExchDetail::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const parent_order_size & value) {
            set_parent_order_size(value);
        }
        void set(const parent_limit_price & value) {
            set_parent_limit_price(value);
        }
        void set(const exch_bid & value) {
            set_exch_bid(value);
        }
        void set(const exch_ask & value) {
            set_exch_ask(value);
        }
        void set(const exch_bid_sz & value) {
            set_exch_bid_sz(value);
        }
        void set(const exch_ask_sz & value) {
            set_exch_ask_sz(value);
        }
        void set(const cl_ord_id & value) {
            set_cl_ord_id(value);
        }
        void set(const child_prc & value) {
            set_child_prc(value);
        }
        void set(const child_size & value) {
            set_child_size(value);
        }
        void set(const max_child_size & value) {
            set_max_child_size(value);
        }
        void set(const is_isochild & value) {
            set_is_isochild(value);
        }
        void set(const child_result & value) {
            set_child_result(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrSweepExchDetail & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_order_side);
            set(value.m_parent_order_size);
            set(value.m_parent_limit_price);
            set(value.m_exch_bid);
            set(value.m_exch_ask);
            set(value.m_exch_bid_sz);
            set(value.m_exch_ask_sz);
            set(value.m_cl_ord_id);
            set(value.m_child_prc);
            set(value.m_child_size);
            set(value.m_max_child_size);
            set(value.m_is_isochild);
            set(value.m_child_result);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        SpdrSweepExchDetail() {
            m__meta.set_message_type("SpdrSweepExchDetail");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2335, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2335, length);
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
             *this = SpdrSweepExchDetail{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeParentOrderSize() const {
            return !(m_parent_order_size == 0);
        }
        bool IncludeParentLimitPrice() const {
            return !(m_parent_limit_price == 0.0);
        }
        bool IncludeExchBid() const {
            return !(m_exch_bid == 0.0);
        }
        bool IncludeExchAsk() const {
            return !(m_exch_ask == 0.0);
        }
        bool IncludeExchBidSz() const {
            return !(m_exch_bid_sz == 0);
        }
        bool IncludeExchAskSz() const {
            return !(m_exch_ask_sz == 0);
        }
        bool IncludeClOrdId() const {
            return !(m_cl_ord_id == 0);
        }
        bool IncludeChildPrc() const {
            return !(m_child_prc == 0.0);
        }
        bool IncludeChildSize() const {
            return !(m_child_size == 0);
        }
        bool IncludeMaxChildSize() const {
            return !(m_max_child_size == 0);
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
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_client_firm);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(106, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeParentOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_parent_order_size);
            }
            if ( IncludeParentLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_parent_limit_price);
            }
            if ( IncludeExchBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_exch_bid);
            }
            if ( IncludeExchAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_exch_ask);
            }
            if ( IncludeExchBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_exch_bid_sz);
            }
            if ( IncludeExchAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_exch_ask_sz);
            }
            if ( IncludeClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_cl_ord_id);
            }
            if ( IncludeChildPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_child_prc);
            }
            if ( IncludeChildSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_child_size);
            }
            if ( IncludeMaxChildSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_max_child_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_isochild)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SweepResult>(m_child_result)));
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(151,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(154, m_timestamp);
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
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_client_firm));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 106, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeParentOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_parent_order_size);
            }
            if ( IncludeParentLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_parent_limit_price);
            }
            if ( IncludeExchBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_exch_bid);
            }
            if ( IncludeExchAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_exch_ask);
            }
            if ( IncludeExchBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_exch_bid_sz);
            }
            if ( IncludeExchAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_exch_ask_sz);
            }
            if ( IncludeClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_cl_ord_id);
            }
            if ( IncludeChildPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_child_prc);
            }
            if ( IncludeChildSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_child_size);
            }
            if ( IncludeMaxChildSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_max_child_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_isochild)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SweepResult>(m_child_result)));
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,151,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 154, m_timestamp);
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
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_exch_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_exch_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_child_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_child_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_isochild = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_result = static_cast<spiderrock::protobuf::api::SweepResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 154: {
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

    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::_meta>() const { return SpdrSweepExchDetail::_meta{ m__meta}; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::pkey>() const { return SpdrSweepExchDetail::pkey{ m_pkey}; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::sec_key>() const { return SpdrSweepExchDetail::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::parent_order_size>() const { return m_parent_order_size; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::parent_limit_price>() const { return m_parent_limit_price; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::exch_bid>() const { return m_exch_bid; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::exch_ask>() const { return m_exch_ask; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::exch_bid_sz>() const { return m_exch_bid_sz; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::exch_ask_sz>() const { return m_exch_ask_sz; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::child_prc>() const { return m_child_prc; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::child_size>() const { return m_child_size; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::max_child_size>() const { return m_max_child_size; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::is_isochild>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_isochild)); }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::child_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SweepResult>( m_child_result)); }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpdrSweepExchDetail::get<SpdrSweepExchDetail::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrSweepExchDetail_PKey::get<SpdrSweepExchDetail_PKey::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrSweepExchDetail_PKey::get<SpdrSweepExchDetail_PKey::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrSweepExchDetail_PKey::get<SpdrSweepExchDetail_PKey::exchange>() const { return m_exchange; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrSweepExchDetail_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrSweepExchDetail_PKey::parent_number>();
        o << ",\"trigger_group_id\":" << m.get<SpdrSweepExchDetail_PKey::trigger_group_id>();
        o << ",\"exchange\":\"" << m.get<SpdrSweepExchDetail_PKey::exchange>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrSweepExchDetail& m) {
        o << "\"_meta\":{" << m.get<SpdrSweepExchDetail::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrSweepExchDetail::pkey>() << "}";
        o << ",\"accnt\":\"" << m.get<SpdrSweepExchDetail::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrSweepExchDetail::client_firm>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrSweepExchDetail::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrSweepExchDetail::sec_type>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrSweepExchDetail::order_side>();
        o << ",\"parent_order_size\":" << m.get<SpdrSweepExchDetail::parent_order_size>();
        o << ",\"parent_limit_price\":" << m.get<SpdrSweepExchDetail::parent_limit_price>();
        o << ",\"exch_bid\":" << m.get<SpdrSweepExchDetail::exch_bid>();
        o << ",\"exch_ask\":" << m.get<SpdrSweepExchDetail::exch_ask>();
        o << ",\"exch_bid_sz\":" << m.get<SpdrSweepExchDetail::exch_bid_sz>();
        o << ",\"exch_ask_sz\":" << m.get<SpdrSweepExchDetail::exch_ask_sz>();
        o << ",\"cl_ord_id\":" << m.get<SpdrSweepExchDetail::cl_ord_id>();
        o << ",\"child_prc\":" << m.get<SpdrSweepExchDetail::child_prc>();
        o << ",\"child_size\":" << m.get<SpdrSweepExchDetail::child_size>();
        o << ",\"max_child_size\":" << m.get<SpdrSweepExchDetail::max_child_size>();
        o << ",\"is_isochild\":" << (int64_t)m.get<SpdrSweepExchDetail::is_isochild>();
        o << ",\"child_result\":" << (int64_t)m.get<SpdrSweepExchDetail::child_result>();
        o << ",\"net_timestamp\":" << m.get<SpdrSweepExchDetail::net_timestamp>();
        {
            std::time_t tt = m.get<SpdrSweepExchDetail::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}