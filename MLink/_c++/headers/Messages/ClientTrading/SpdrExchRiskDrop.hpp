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

    #ifndef _routing_code__GUARD__
    #define _routing_code__GUARD__
    DECL_STRONG_TYPE(routing_code, string);
    #endif//_routing_code__GUARD__

    #ifndef _routing_seq_num__GUARD__
    #define _routing_seq_num__GUARD__
    DECL_STRONG_TYPE(routing_seq_num, int32);
    #endif//_routing_seq_num__GUARD__

    #ifndef _route_risk_group__GUARD__
    #define _route_risk_group__GUARD__
    DECL_STRONG_TYPE(route_risk_group, string);
    #endif//_route_risk_group__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _account__GUARD__
    #define _account__GUARD__
    DECL_STRONG_TYPE(account, string);
    #endif//_account__GUARD__

    #ifndef _drop_data1__GUARD__
    #define _drop_data1__GUARD__
    DECL_STRONG_TYPE(drop_data1, string);
    #endif//_drop_data1__GUARD__

    #ifndef _drop_data2__GUARD__
    #define _drop_data2__GUARD__
    DECL_STRONG_TYPE(drop_data2, string);
    #endif//_drop_data2__GUARD__

    #ifndef _cl_ord_id__string__GUARD__
    #define _cl_ord_id__string__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__string, string);
    #endif//_cl_ord_id__string__GUARD__

    #ifndef _fill_version__GUARD__
    #define _fill_version__GUARD__
    DECL_STRONG_TYPE(fill_version, int32);
    #endif//_fill_version__GUARD__

    #ifndef _fill_exec_status__GUARD__
    #define _fill_exec_status__GUARD__
    DECL_STRONG_TYPE(fill_exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_fill_exec_status__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_quantity__GUARD__
    #define _fill_quantity__GUARD__
    DECL_STRONG_TYPE(fill_quantity, int32);
    #endif//_fill_quantity__GUARD__

    #ifndef _fill_side__GUARD__
    #define _fill_side__GUARD__
    DECL_STRONG_TYPE(fill_side, spiderrock::protobuf::api::BuySell);
    #endif//_fill_side__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_transact_dttm__GUARD__
    #define _fill_transact_dttm__GUARD__
    DECL_STRONG_TYPE(fill_transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_transact_dttm__GUARD__

    #ifndef _fill_market__GUARD__
    #define _fill_market__GUARD__
    DECL_STRONG_TYPE(fill_market, string);
    #endif//_fill_market__GUARD__

    #ifndef _fill_exec_id__GUARD__
    #define _fill_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_exec_id, string);
    #endif//_fill_exec_id__GUARD__

    #ifndef _fill_ref_exec_id__GUARD__
    #define _fill_ref_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_ref_exec_id, string);
    #endif//_fill_ref_exec_id__GUARD__

    #ifndef _fill_leg_ref_id__GUARD__
    #define _fill_leg_ref_id__GUARD__
    DECL_STRONG_TYPE(fill_leg_ref_id, int64);
    #endif//_fill_leg_ref_id__GUARD__

    #ifndef _fill_street_text__GUARD__
    #define _fill_street_text__GUARD__
    DECL_STRONG_TYPE(fill_street_text, string);
    #endif//_fill_street_text__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _exch_drop_number__GUARD__
    #define _exch_drop_number__GUARD__
    DECL_STRONG_TYPE(exch_drop_number, int64);
    #endif//_exch_drop_number__GUARD__

    
    class SpdrExchRiskDrop_PKey {
        public:
        //using statements for all types used in this class
        using exch_drop_number = spiderrock::protobuf::api::exch_drop_number;

        private:
        exch_drop_number m_exch_drop_number{};

        public:
        exch_drop_number get_exch_drop_number() const {
            return m_exch_drop_number;
        }
        void set_exch_drop_number(const exch_drop_number& value)  {
            m_exch_drop_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExchRiskDrop_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExchRiskDrop_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exch_drop_number & value) { set_exch_drop_number(value); }


        SpdrExchRiskDrop_PKey() {}

        virtual ~SpdrExchRiskDrop_PKey() {
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
        bool IncludeExchDropNumber() const {
            return !(m_exch_drop_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeExchDropNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_exch_drop_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeExchDropNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_exch_drop_number);
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
                    case 10: {m_exch_drop_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrExchRiskDrop {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrExchRiskDrop_PKey;
        using routing_code = spiderrock::protobuf::api::routing_code;
        using routing_seq_num = spiderrock::protobuf::api::routing_seq_num;
        using route_risk_group = spiderrock::protobuf::api::route_risk_group;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using account = spiderrock::protobuf::api::account;
        using drop_data1 = spiderrock::protobuf::api::drop_data1;
        using drop_data2 = spiderrock::protobuf::api::drop_data2;
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__string;
        using fill_version = spiderrock::protobuf::api::fill_version;
        using fill_exec_status = spiderrock::protobuf::api::fill_exec_status;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_quantity = spiderrock::protobuf::api::fill_quantity;
        using fill_side = spiderrock::protobuf::api::fill_side;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_transact_dttm = spiderrock::protobuf::api::fill_transact_dttm;
        using fill_market = spiderrock::protobuf::api::fill_market;
        using fill_exec_id = spiderrock::protobuf::api::fill_exec_id;
        using fill_ref_exec_id = spiderrock::protobuf::api::fill_ref_exec_id;
        using fill_leg_ref_id = spiderrock::protobuf::api::fill_leg_ref_id;
        using fill_street_text = spiderrock::protobuf::api::fill_street_text;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        routing_code m_routing_code{};
        routing_seq_num m_routing_seq_num{};
        route_risk_group m_route_risk_group{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        account m_account{};
        drop_data1 m_drop_data1{};
        drop_data2 m_drop_data2{};
        cl_ord_id m_cl_ord_id{};
        fill_version m_fill_version{};
        fill_exec_status m_fill_exec_status{};
        fill_dttm m_fill_dttm{};
        fill_quantity m_fill_quantity{};
        fill_side m_fill_side{};
        fill_price m_fill_price{};
        fill_transact_dttm m_fill_transact_dttm{};
        fill_market m_fill_market{};
        fill_exec_id m_fill_exec_id{};
        fill_ref_exec_id m_fill_ref_exec_id{};
        fill_leg_ref_id m_fill_leg_ref_id{};
        fill_street_text m_fill_street_text{};
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
        routing_code get_routing_code() const {
            return m_routing_code;
        }		
        routing_seq_num get_routing_seq_num() const {
            return m_routing_seq_num;
        }		
        route_risk_group get_route_risk_group() const {
            return m_route_risk_group;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        account get_account() const {
            return m_account;
        }		
        drop_data1 get_drop_data1() const {
            return m_drop_data1;
        }		
        drop_data2 get_drop_data2() const {
            return m_drop_data2;
        }		
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }		
        fill_version get_fill_version() const {
            return m_fill_version;
        }		
        fill_exec_status get_fill_exec_status() const {
            return m_fill_exec_status;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_quantity get_fill_quantity() const {
            return m_fill_quantity;
        }		
        fill_side get_fill_side() const {
            return m_fill_side;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_transact_dttm get_fill_transact_dttm() const {
            return m_fill_transact_dttm;
        }		
        fill_market get_fill_market() const {
            return m_fill_market;
        }		
        fill_exec_id get_fill_exec_id() const {
            return m_fill_exec_id;
        }		
        fill_ref_exec_id get_fill_ref_exec_id() const {
            return m_fill_ref_exec_id;
        }		
        fill_leg_ref_id get_fill_leg_ref_id() const {
            return m_fill_leg_ref_id;
        }		
        fill_street_text get_fill_street_text() const {
            return m_fill_street_text;
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
        void set_routing_code(const routing_code& value)  {
            m_routing_code = value;
        }
        void set_routing_seq_num(const routing_seq_num& value)  {
            m_routing_seq_num = value;
        }
        void set_route_risk_group(const route_risk_group& value)  {
            m_route_risk_group = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_account(const account& value)  {
            m_account = value;
        }
        void set_drop_data1(const drop_data1& value)  {
            m_drop_data1 = value;
        }
        void set_drop_data2(const drop_data2& value)  {
            m_drop_data2 = value;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_fill_version(const fill_version& value)  {
            m_fill_version = value;
        }
        void set_fill_exec_status(const fill_exec_status& value)  {
            m_fill_exec_status = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_quantity(const fill_quantity& value)  {
            m_fill_quantity = value;
        }
        void set_fill_side(const fill_side& value)  {
            m_fill_side = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_transact_dttm(const fill_transact_dttm& value)  {
            m_fill_transact_dttm = value;
        }
        void set_fill_market(const fill_market& value)  {
            m_fill_market = value;
        }
        void set_fill_exec_id(const fill_exec_id& value)  {
            m_fill_exec_id = value;
        }
        void set_fill_ref_exec_id(const fill_ref_exec_id& value)  {
            m_fill_ref_exec_id = value;
        }
        void set_fill_leg_ref_id(const fill_leg_ref_id& value)  {
            m_fill_leg_ref_id = value;
        }
        void set_fill_street_text(const fill_street_text& value)  {
            m_fill_street_text = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExchRiskDrop::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const routing_code & value) {
            set_routing_code(value);
        }
        void set(const routing_seq_num & value) {
            set_routing_seq_num(value);
        }
        void set(const route_risk_group & value) {
            set_route_risk_group(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const account & value) {
            set_account(value);
        }
        void set(const drop_data1 & value) {
            set_drop_data1(value);
        }
        void set(const drop_data2 & value) {
            set_drop_data2(value);
        }
        void set(const cl_ord_id & value) {
            set_cl_ord_id(value);
        }
        void set(const fill_version & value) {
            set_fill_version(value);
        }
        void set(const fill_exec_status & value) {
            set_fill_exec_status(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_quantity & value) {
            set_fill_quantity(value);
        }
        void set(const fill_side & value) {
            set_fill_side(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_transact_dttm & value) {
            set_fill_transact_dttm(value);
        }
        void set(const fill_market & value) {
            set_fill_market(value);
        }
        void set(const fill_exec_id & value) {
            set_fill_exec_id(value);
        }
        void set(const fill_ref_exec_id & value) {
            set_fill_ref_exec_id(value);
        }
        void set(const fill_leg_ref_id & value) {
            set_fill_leg_ref_id(value);
        }
        void set(const fill_street_text & value) {
            set_fill_street_text(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrExchRiskDrop & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_routing_code);
            set(value.m_routing_seq_num);
            set(value.m_route_risk_group);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_account);
            set(value.m_drop_data1);
            set(value.m_drop_data2);
            set(value.m_cl_ord_id);
            set(value.m_fill_version);
            set(value.m_fill_exec_status);
            set(value.m_fill_dttm);
            set(value.m_fill_quantity);
            set(value.m_fill_side);
            set(value.m_fill_price);
            set(value.m_fill_transact_dttm);
            set(value.m_fill_market);
            set(value.m_fill_exec_id);
            set(value.m_fill_ref_exec_id);
            set(value.m_fill_leg_ref_id);
            set(value.m_fill_street_text);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        SpdrExchRiskDrop() {
            m__meta.set_message_type("SpdrExchRiskDrop");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1470, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1470, length);
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
             *this = SpdrExchRiskDrop{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRoutingCode() const {
            return !(m_routing_code.empty());
        }
        bool IncludeRoutingSeqNum() const {
            return !(m_routing_seq_num == 0);
        }
        bool IncludeRouteRiskGroup() const {
            return !(m_route_risk_group.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAccount() const {
            return !(m_account.empty());
        }
        bool IncludeDropData1() const {
            return !(m_drop_data1.empty());
        }
        bool IncludeDropData2() const {
            return !(m_drop_data2.empty());
        }
        bool IncludeClOrdId() const {
            return !(m_cl_ord_id.empty());
        }
        bool IncludeFillVersion() const {
            return !(m_fill_version == 0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillQuantity() const {
            return !(m_fill_quantity == 0);
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillTransactDttm() const {
            return (m_fill_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillMarket() const {
            return !(m_fill_market.empty());
        }
        bool IncludeFillExecId() const {
            return !(m_fill_exec_id.empty());
        }
        bool IncludeFillRefExecId() const {
            return !(m_fill_ref_exec_id.empty());
        }
        bool IncludeFillLegRefId() const {
            return !(m_fill_leg_ref_id == 0);
        }
        bool IncludeFillStreetText() const {
            return !(m_fill_street_text.empty());
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
            if ( IncludeRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_routing_code);
            }
            if ( IncludeRoutingSeqNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_routing_seq_num);
            }
            if ( IncludeRouteRiskGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_route_risk_group);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(109, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccount()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_account);
            }
            if ( IncludeDropData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_drop_data1);
            }
            if ( IncludeDropData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_drop_data2);
            }
            if ( IncludeClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_cl_ord_id);
            }
            if ( IncludeFillVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_fill_version);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_fill_exec_status)));
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(133, m_fill_dttm);
            }
            if ( IncludeFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_fill_quantity);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_fill_side)));
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_fill_price);
            }
            if ( IncludeFillTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(145, m_fill_transact_dttm);
            }
            if ( IncludeFillMarket()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_fill_market);
            }
            if ( IncludeFillExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_fill_exec_id);
            }
            if ( IncludeFillRefExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_fill_ref_exec_id);
            }
            if ( IncludeFillLegRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_fill_leg_ref_id);
            }
            if ( IncludeFillStreetText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_fill_street_text);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(166, m_timestamp);
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
            if ( IncludeRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_routing_code));
            }
            if ( IncludeRoutingSeqNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_routing_seq_num);
            }
            if ( IncludeRouteRiskGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_route_risk_group));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 109, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeAccount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_account));
            }
            if ( IncludeDropData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_drop_data1));
            }
            if ( IncludeDropData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_drop_data2));
            }
            if ( IncludeClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_cl_ord_id));
            }
            if ( IncludeFillVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_fill_version);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_fill_exec_status)));
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 133, m_fill_dttm);
            }
            if ( IncludeFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_fill_quantity);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_fill_side)));
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_fill_price);
            }
            if ( IncludeFillTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 145, m_fill_transact_dttm);
            }
            if ( IncludeFillMarket()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_fill_market));
            }
            if ( IncludeFillExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_fill_exec_id));
            }
            if ( IncludeFillRefExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_fill_ref_exec_id));
            }
            if ( IncludeFillLegRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_fill_leg_ref_id);
            }
            if ( IncludeFillStreetText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_fill_street_text));
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 166, m_timestamp);
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
                            m_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_routing_seq_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_route_risk_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_account = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_drop_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_drop_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_market = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_ref_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_fill_leg_ref_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_street_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 166: {
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

    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::_meta>() const { return SpdrExchRiskDrop::_meta{ m__meta}; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::pkey>() const { return SpdrExchRiskDrop::pkey{ m_pkey}; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::routing_code>() const { return m_routing_code; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::routing_seq_num>() const { return m_routing_seq_num; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::route_risk_group>() const { return m_route_risk_group; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::sec_key>() const { return SpdrExchRiskDrop::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::account>() const { return m_account; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::drop_data1>() const { return m_drop_data1; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::drop_data2>() const { return m_drop_data2; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_version>() const { return m_fill_version; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_fill_exec_status)); }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_quantity>() const { return m_fill_quantity; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_fill_side)); }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_price>() const { return m_fill_price; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_transact_dttm>() const { return m_fill_transact_dttm; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_market>() const { return m_fill_market; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_exec_id>() const { return m_fill_exec_id; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_ref_exec_id>() const { return m_fill_ref_exec_id; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_leg_ref_id>() const { return m_fill_leg_ref_id; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::fill_street_text>() const { return m_fill_street_text; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpdrExchRiskDrop::get<SpdrExchRiskDrop::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrExchRiskDrop_PKey::get<SpdrExchRiskDrop_PKey::exch_drop_number>() const { return m_exch_drop_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrExchRiskDrop_PKey& m) {
        o << "\"exch_drop_number\":" << m.get<SpdrExchRiskDrop_PKey::exch_drop_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrExchRiskDrop& m) {
        o << "\"_meta\":{" << m.get<SpdrExchRiskDrop::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrExchRiskDrop::pkey>() << "}";
        o << ",\"routing_code\":\"" << m.get<SpdrExchRiskDrop::routing_code>() << "\"";
        o << ",\"routing_seq_num\":" << m.get<SpdrExchRiskDrop::routing_seq_num>();
        o << ",\"route_risk_group\":\"" << m.get<SpdrExchRiskDrop::route_risk_group>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrExchRiskDrop::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrExchRiskDrop::sec_type>();
        o << ",\"account\":\"" << m.get<SpdrExchRiskDrop::account>() << "\"";
        o << ",\"drop_data1\":\"" << m.get<SpdrExchRiskDrop::drop_data1>() << "\"";
        o << ",\"drop_data2\":\"" << m.get<SpdrExchRiskDrop::drop_data2>() << "\"";
        o << ",\"cl_ord_id\":\"" << m.get<SpdrExchRiskDrop::cl_ord_id>() << "\"";
        o << ",\"fill_version\":" << m.get<SpdrExchRiskDrop::fill_version>();
        o << ",\"fill_exec_status\":" << (int64_t)m.get<SpdrExchRiskDrop::fill_exec_status>();
        {
            std::time_t tt = m.get<SpdrExchRiskDrop::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_quantity\":" << m.get<SpdrExchRiskDrop::fill_quantity>();
        o << ",\"fill_side\":" << (int64_t)m.get<SpdrExchRiskDrop::fill_side>();
        o << ",\"fill_price\":" << m.get<SpdrExchRiskDrop::fill_price>();
        {
            std::time_t tt = m.get<SpdrExchRiskDrop::fill_transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_market\":\"" << m.get<SpdrExchRiskDrop::fill_market>() << "\"";
        o << ",\"fill_exec_id\":\"" << m.get<SpdrExchRiskDrop::fill_exec_id>() << "\"";
        o << ",\"fill_ref_exec_id\":\"" << m.get<SpdrExchRiskDrop::fill_ref_exec_id>() << "\"";
        o << ",\"fill_leg_ref_id\":" << m.get<SpdrExchRiskDrop::fill_leg_ref_id>();
        o << ",\"fill_street_text\":\"" << m.get<SpdrExchRiskDrop::fill_street_text>() << "\"";
        o << ",\"net_timestamp\":" << m.get<SpdrExchRiskDrop::net_timestamp>();
        {
            std::time_t tt = m.get<SpdrExchRiskDrop::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}