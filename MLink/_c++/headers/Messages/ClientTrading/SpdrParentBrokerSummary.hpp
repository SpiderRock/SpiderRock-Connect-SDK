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

    #ifndef _num_orders__GUARD__
    #define _num_orders__GUARD__
    DECL_STRONG_TYPE(num_orders, int32);
    #endif//_num_orders__GUARD__

    #ifndef _num_brokers__GUARD__
    #define _num_brokers__GUARD__
    DECL_STRONG_TYPE(num_brokers, int32);
    #endif//_num_brokers__GUARD__

    #ifndef _num_sec_keys__GUARD__
    #define _num_sec_keys__GUARD__
    DECL_STRONG_TYPE(num_sec_keys, int32);
    #endif//_num_sec_keys__GUARD__

    #ifndef _num_underliers__GUARD__
    #define _num_underliers__GUARD__
    DECL_STRONG_TYPE(num_underliers, int32);
    #endif//_num_underliers__GUARD__

    #ifndef _sum_order_size__GUARD__
    #define _sum_order_size__GUARD__
    DECL_STRONG_TYPE(sum_order_size, int32);
    #endif//_sum_order_size__GUARD__

    #ifndef _sum_sweep_mkt_size__GUARD__
    #define _sum_sweep_mkt_size__GUARD__
    DECL_STRONG_TYPE(sum_sweep_mkt_size, int32);
    #endif//_sum_sweep_mkt_size__GUARD__

    #ifndef _sum_sweep_fill_qty__GUARD__
    #define _sum_sweep_fill_qty__GUARD__
    DECL_STRONG_TYPE(sum_sweep_fill_qty, int32);
    #endif//_sum_sweep_fill_qty__GUARD__

    #ifndef _sum_active_seconds__GUARD__
    #define _sum_active_seconds__GUARD__
    DECL_STRONG_TYPE(sum_active_seconds, float);
    #endif//_sum_active_seconds__GUARD__

    #ifndef _sum_working_seconds__GUARD__
    #define _sum_working_seconds__GUARD__
    DECL_STRONG_TYPE(sum_working_seconds, float);
    #endif//_sum_working_seconds__GUARD__

    #ifndef _num_child_orders__int32__GUARD__
    #define _num_child_orders__int32__GUARD__
    DECL_STRONG_TYPE(num_child_orders__int32, int32);
    #endif//_num_child_orders__int32__GUARD__

    #ifndef _cum_fill_qty__GUARD__
    #define _cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(cum_fill_qty, int32);
    #endif//_cum_fill_qty__GUARD__

    #ifndef _sum_vwap_qty__GUARD__
    #define _sum_vwap_qty__GUARD__
    DECL_STRONG_TYPE(sum_vwap_qty, int32);
    #endif//_sum_vwap_qty__GUARD__

    #ifndef _sum_vwap_pn_l__GUARD__
    #define _sum_vwap_pn_l__GUARD__
    DECL_STRONG_TYPE(sum_vwap_pn_l, float);
    #endif//_sum_vwap_pn_l__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _ticker_src__GUARD__
    #define _ticker_src__GUARD__
    DECL_STRONG_TYPE(ticker_src, spiderrock::protobuf::api::TickerSrc);
    #endif//_ticker_src__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _parent_order_handling__GUARD__
    #define _parent_order_handling__GUARD__
    DECL_STRONG_TYPE(parent_order_handling, spiderrock::protobuf::api::ParentOrderHandling);
    #endif//_parent_order_handling__GUARD__

    #ifndef _trading_period__DateKey__GUARD__
    #define _trading_period__DateKey__GUARD__
    DECL_STRONG_TYPE(trading_period__DateKey, DateKey);
    #endif//_trading_period__DateKey__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrParentBrokerSummary_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using ticker_src = spiderrock::protobuf::api::ticker_src;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using trading_period = spiderrock::protobuf::api::trading_period__DateKey;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        sec_type m_sec_type{};
        ticker_src m_ticker_src{};
        spdr_source m_spdr_source{};
        parent_order_handling m_parent_order_handling{};
        trading_period m_trading_period{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        ticker_src get_ticker_src() const {
            return m_ticker_src;
        }
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }
        parent_order_handling get_parent_order_handling() const {
            return m_parent_order_handling;
        }
		trading_period get_trading_period() const {
            return m_trading_period;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_ticker_src(const ticker_src& value)  {
            m_ticker_src = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_parent_order_handling(const parent_order_handling& value)  {
            m_parent_order_handling = value;
        }
        void set_trading_period(const trading_period& value)  {
            m_trading_period = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrokerSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrokerSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const ticker_src & value) { set_ticker_src(value); }
        void set(const spdr_source & value) { set_spdr_source(value); }
        void set(const parent_order_handling & value) { set_parent_order_handling(value); }
        void set(const trading_period & value) { set_trading_period(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrParentBrokerSummary_PKey() {}

        virtual ~SpdrParentBrokerSummary_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeTradingPeriod() const {
            return (m_trading_period.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            if ( IncludeTradingPeriod()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(15, m_trading_period.get_year(), m_trading_period.get_month(), m_trading_period.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(16,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            if ( IncludeTradingPeriod()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,15, m_trading_period.get_year(), m_trading_period.get_month(), m_trading_period.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,16,static_cast<string>(m_client_firm));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_ticker_src = static_cast<spiderrock::protobuf::api::TickerSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 15: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trading_period.set_year(dateKey.year());
                        m_trading_period.set_month(dateKey.month());
                        m_trading_period.set_day(dateKey.day());
                        break;
                    }
                    case 16: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentBrokerSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentBrokerSummary_PKey;
        using num_orders = spiderrock::protobuf::api::num_orders;
        using num_brokers = spiderrock::protobuf::api::num_brokers;
        using num_sec_keys = spiderrock::protobuf::api::num_sec_keys;
        using num_underliers = spiderrock::protobuf::api::num_underliers;
        using sum_order_size = spiderrock::protobuf::api::sum_order_size;
        using sum_sweep_mkt_size = spiderrock::protobuf::api::sum_sweep_mkt_size;
        using sum_sweep_fill_qty = spiderrock::protobuf::api::sum_sweep_fill_qty;
        using sum_active_seconds = spiderrock::protobuf::api::sum_active_seconds;
        using sum_working_seconds = spiderrock::protobuf::api::sum_working_seconds;
        using num_child_orders = spiderrock::protobuf::api::num_child_orders__int32;
        using cum_fill_qty = spiderrock::protobuf::api::cum_fill_qty;
        using sum_vwap_qty = spiderrock::protobuf::api::sum_vwap_qty;
        using sum_vwap_pn_l = spiderrock::protobuf::api::sum_vwap_pn_l;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        num_orders m_num_orders{};
        num_brokers m_num_brokers{};
        num_sec_keys m_num_sec_keys{};
        num_underliers m_num_underliers{};
        sum_order_size m_sum_order_size{};
        sum_sweep_mkt_size m_sum_sweep_mkt_size{};
        sum_sweep_fill_qty m_sum_sweep_fill_qty{};
        sum_active_seconds m_sum_active_seconds{};
        sum_working_seconds m_sum_working_seconds{};
        num_child_orders m_num_child_orders{};
        cum_fill_qty m_cum_fill_qty{};
        sum_vwap_qty m_sum_vwap_qty{};
        sum_vwap_pn_l m_sum_vwap_pn_l{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        num_orders get_num_orders() const {
            return m_num_orders;
        }		
        num_brokers get_num_brokers() const {
            return m_num_brokers;
        }		
        num_sec_keys get_num_sec_keys() const {
            return m_num_sec_keys;
        }		
        num_underliers get_num_underliers() const {
            return m_num_underliers;
        }		
        sum_order_size get_sum_order_size() const {
            return m_sum_order_size;
        }		
        sum_sweep_mkt_size get_sum_sweep_mkt_size() const {
            return m_sum_sweep_mkt_size;
        }		
        sum_sweep_fill_qty get_sum_sweep_fill_qty() const {
            return m_sum_sweep_fill_qty;
        }		
        sum_active_seconds get_sum_active_seconds() const {
            return m_sum_active_seconds;
        }		
        sum_working_seconds get_sum_working_seconds() const {
            return m_sum_working_seconds;
        }		
        num_child_orders get_num_child_orders() const {
            return m_num_child_orders;
        }		
        cum_fill_qty get_cum_fill_qty() const {
            return m_cum_fill_qty;
        }		
        sum_vwap_qty get_sum_vwap_qty() const {
            return m_sum_vwap_qty;
        }		
        sum_vwap_pn_l get_sum_vwap_pn_l() const {
            return m_sum_vwap_pn_l;
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
        void set_num_orders(const num_orders& value)  {
            m_num_orders = value;
        }
        void set_num_brokers(const num_brokers& value)  {
            m_num_brokers = value;
        }
        void set_num_sec_keys(const num_sec_keys& value)  {
            m_num_sec_keys = value;
        }
        void set_num_underliers(const num_underliers& value)  {
            m_num_underliers = value;
        }
        void set_sum_order_size(const sum_order_size& value)  {
            m_sum_order_size = value;
        }
        void set_sum_sweep_mkt_size(const sum_sweep_mkt_size& value)  {
            m_sum_sweep_mkt_size = value;
        }
        void set_sum_sweep_fill_qty(const sum_sweep_fill_qty& value)  {
            m_sum_sweep_fill_qty = value;
        }
        void set_sum_active_seconds(const sum_active_seconds& value)  {
            m_sum_active_seconds = value;
        }
        void set_sum_working_seconds(const sum_working_seconds& value)  {
            m_sum_working_seconds = value;
        }
        void set_num_child_orders(const num_child_orders& value)  {
            m_num_child_orders = value;
        }
        void set_cum_fill_qty(const cum_fill_qty& value)  {
            m_cum_fill_qty = value;
        }
        void set_sum_vwap_qty(const sum_vwap_qty& value)  {
            m_sum_vwap_qty = value;
        }
        void set_sum_vwap_pn_l(const sum_vwap_pn_l& value)  {
            m_sum_vwap_pn_l = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentBrokerSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const num_orders & value) {
            set_num_orders(value);
        }
        void set(const num_brokers & value) {
            set_num_brokers(value);
        }
        void set(const num_sec_keys & value) {
            set_num_sec_keys(value);
        }
        void set(const num_underliers & value) {
            set_num_underliers(value);
        }
        void set(const sum_order_size & value) {
            set_sum_order_size(value);
        }
        void set(const sum_sweep_mkt_size & value) {
            set_sum_sweep_mkt_size(value);
        }
        void set(const sum_sweep_fill_qty & value) {
            set_sum_sweep_fill_qty(value);
        }
        void set(const sum_active_seconds & value) {
            set_sum_active_seconds(value);
        }
        void set(const sum_working_seconds & value) {
            set_sum_working_seconds(value);
        }
        void set(const num_child_orders & value) {
            set_num_child_orders(value);
        }
        void set(const cum_fill_qty & value) {
            set_cum_fill_qty(value);
        }
        void set(const sum_vwap_qty & value) {
            set_sum_vwap_qty(value);
        }
        void set(const sum_vwap_pn_l & value) {
            set_sum_vwap_pn_l(value);
        }

        void set(const SpdrParentBrokerSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_num_orders);
            set(value.m_num_brokers);
            set(value.m_num_sec_keys);
            set(value.m_num_underliers);
            set(value.m_sum_order_size);
            set(value.m_sum_sweep_mkt_size);
            set(value.m_sum_sweep_fill_qty);
            set(value.m_sum_active_seconds);
            set(value.m_sum_working_seconds);
            set(value.m_num_child_orders);
            set(value.m_cum_fill_qty);
            set(value.m_sum_vwap_qty);
            set(value.m_sum_vwap_pn_l);
        }

        SpdrParentBrokerSummary() {
            m__meta.set_message_type("SpdrParentBrokerSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4075, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4075, length);
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
             *this = SpdrParentBrokerSummary{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeNumOrders() const {
            return !(m_num_orders == 0);
        }
        bool IncludeNumBrokers() const {
            return !(m_num_brokers == 0);
        }
        bool IncludeNumSecKeys() const {
            return !(m_num_sec_keys == 0);
        }
        bool IncludeNumUnderliers() const {
            return !(m_num_underliers == 0);
        }
        bool IncludeSumOrderSize() const {
            return !(m_sum_order_size == 0);
        }
        bool IncludeSumSweepMktSize() const {
            return !(m_sum_sweep_mkt_size == 0);
        }
        bool IncludeSumSweepFillQty() const {
            return !(m_sum_sweep_fill_qty == 0);
        }
        bool IncludeSumActiveSeconds() const {
            return !(m_sum_active_seconds == 0.0);
        }
        bool IncludeSumWorkingSeconds() const {
            return !(m_sum_working_seconds == 0.0);
        }
        bool IncludeNumChildOrders() const {
            return !(m_num_child_orders == 0);
        }
        bool IncludeCumFillQty() const {
            return !(m_cum_fill_qty == 0);
        }
        bool IncludeSumVwapQty() const {
            return !(m_sum_vwap_qty == 0);
        }
        bool IncludeSumVwapPnL() const {
            return !(m_sum_vwap_pn_l == 0.0);
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
            if ( IncludeNumOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_num_orders);
            }
            if ( IncludeNumBrokers()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_num_brokers);
            }
            if ( IncludeNumSecKeys()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_num_sec_keys);
            }
            if ( IncludeNumUnderliers()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_num_underliers);
            }
            if ( IncludeSumOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_sum_order_size);
            }
            if ( IncludeSumSweepMktSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_sum_sweep_mkt_size);
            }
            if ( IncludeSumSweepFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_sum_sweep_fill_qty);
            }
            if ( IncludeSumActiveSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_sum_active_seconds);
            }
            if ( IncludeSumWorkingSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_sum_working_seconds);
            }
            if ( IncludeNumChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_num_child_orders);
            }
            if ( IncludeCumFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_cum_fill_qty);
            }
            if ( IncludeSumVwapQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_sum_vwap_qty);
            }
            if ( IncludeSumVwapPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_sum_vwap_pn_l);
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
            if ( IncludeNumOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_num_orders);
            }
            if ( IncludeNumBrokers()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_num_brokers);
            }
            if ( IncludeNumSecKeys()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_num_sec_keys);
            }
            if ( IncludeNumUnderliers()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_num_underliers);
            }
            if ( IncludeSumOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_sum_order_size);
            }
            if ( IncludeSumSweepMktSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_sum_sweep_mkt_size);
            }
            if ( IncludeSumSweepFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_sum_sweep_fill_qty);
            }
            if ( IncludeSumActiveSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_sum_active_seconds);
            }
            if ( IncludeSumWorkingSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_sum_working_seconds);
            }
            if ( IncludeNumChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_num_child_orders);
            }
            if ( IncludeCumFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_cum_fill_qty);
            }
            if ( IncludeSumVwapQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_sum_vwap_qty);
            }
            if ( IncludeSumVwapPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_sum_vwap_pn_l);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_brokers = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_sec_keys = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_underliers = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sum_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sum_sweep_mkt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sum_sweep_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_active_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_working_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sum_vwap_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_vwap_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::_meta>() const { return SpdrParentBrokerSummary::_meta{ m__meta}; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::pkey>() const { return SpdrParentBrokerSummary::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::num_orders>() const { return m_num_orders; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::num_brokers>() const { return m_num_brokers; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::num_sec_keys>() const { return m_num_sec_keys; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::num_underliers>() const { return m_num_underliers; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_order_size>() const { return m_sum_order_size; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_sweep_mkt_size>() const { return m_sum_sweep_mkt_size; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_sweep_fill_qty>() const { return m_sum_sweep_fill_qty; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_active_seconds>() const { return m_sum_active_seconds; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_working_seconds>() const { return m_sum_working_seconds; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::num_child_orders>() const { return m_num_child_orders; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::cum_fill_qty>() const { return m_cum_fill_qty; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_vwap_qty>() const { return m_sum_vwap_qty; }
    template<> inline const auto SpdrParentBrokerSummary::get<SpdrParentBrokerSummary::sum_vwap_pn_l>() const { return m_sum_vwap_pn_l; }
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::ticker_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src));}
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source));}
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling));}
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::trading_period>() const { return SpdrParentBrokerSummary_PKey::trading_period{m_trading_period}; }
    template<> inline const auto SpdrParentBrokerSummary_PKey::get<SpdrParentBrokerSummary_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentBrokerSummary_PKey& m) {
        o << "\"accnt\":\"" << m.get<SpdrParentBrokerSummary_PKey::accnt>() << "\"";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentBrokerSummary_PKey::sec_type>();
        o << ",\"ticker_src\":" << (int64_t)m.get<SpdrParentBrokerSummary_PKey::ticker_src>();
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentBrokerSummary_PKey::spdr_source>();
        o << ",\"parent_order_handling\":" << (int64_t)m.get<SpdrParentBrokerSummary_PKey::parent_order_handling>();
        o << ",\"trading_period\":{" << m.get<SpdrParentBrokerSummary_PKey::trading_period>() << "}";
        o << ",\"client_firm\":\"" << m.get<SpdrParentBrokerSummary_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentBrokerSummary& m) {
        o << "\"_meta\":{" << m.get<SpdrParentBrokerSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentBrokerSummary::pkey>() << "}";
        o << ",\"num_orders\":" << m.get<SpdrParentBrokerSummary::num_orders>();
        o << ",\"num_brokers\":" << m.get<SpdrParentBrokerSummary::num_brokers>();
        o << ",\"num_sec_keys\":" << m.get<SpdrParentBrokerSummary::num_sec_keys>();
        o << ",\"num_underliers\":" << m.get<SpdrParentBrokerSummary::num_underliers>();
        o << ",\"sum_order_size\":" << m.get<SpdrParentBrokerSummary::sum_order_size>();
        o << ",\"sum_sweep_mkt_size\":" << m.get<SpdrParentBrokerSummary::sum_sweep_mkt_size>();
        o << ",\"sum_sweep_fill_qty\":" << m.get<SpdrParentBrokerSummary::sum_sweep_fill_qty>();
        o << ",\"sum_active_seconds\":" << m.get<SpdrParentBrokerSummary::sum_active_seconds>();
        o << ",\"sum_working_seconds\":" << m.get<SpdrParentBrokerSummary::sum_working_seconds>();
        o << ",\"num_child_orders\":" << m.get<SpdrParentBrokerSummary::num_child_orders>();
        o << ",\"cum_fill_qty\":" << m.get<SpdrParentBrokerSummary::cum_fill_qty>();
        o << ",\"sum_vwap_qty\":" << m.get<SpdrParentBrokerSummary::sum_vwap_qty>();
        o << ",\"sum_vwap_pn_l\":" << m.get<SpdrParentBrokerSummary::sum_vwap_pn_l>();
        return o;
    }

}
}
}