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

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _parent_order_size__GUARD__
    #define _parent_order_size__GUARD__
    DECL_STRONG_TYPE(parent_order_size, int32);
    #endif//_parent_order_size__GUARD__

    #ifndef _parent_limit_price__GUARD__
    #define _parent_limit_price__GUARD__
    DECL_STRONG_TYPE(parent_limit_price, double);
    #endif//_parent_limit_price__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _is_isosweep__GUARD__
    #define _is_isosweep__GUARD__
    DECL_STRONG_TYPE(is_isosweep, spiderrock::protobuf::api::YesNo);
    #endif//_is_isosweep__GUARD__

    #ifndef _risk_limit_size__GUARD__
    #define _risk_limit_size__GUARD__
    DECL_STRONG_TYPE(risk_limit_size, int32);
    #endif//_risk_limit_size__GUARD__

    #ifndef _risk_limit_reason__GUARD__
    #define _risk_limit_reason__GUARD__
    DECL_STRONG_TYPE(risk_limit_reason, spiderrock::protobuf::api::SpdrRisk);
    #endif//_risk_limit_reason__GUARD__

    #ifndef _risk_limit_detail__GUARD__
    #define _risk_limit_detail__GUARD__
    DECL_STRONG_TYPE(risk_limit_detail, string);
    #endif//_risk_limit_detail__GUARD__

    #ifndef _nbbo_bid1__GUARD__
    #define _nbbo_bid1__GUARD__
    DECL_STRONG_TYPE(nbbo_bid1, double);
    #endif//_nbbo_bid1__GUARD__

    #ifndef _nbbo_ask1__GUARD__
    #define _nbbo_ask1__GUARD__
    DECL_STRONG_TYPE(nbbo_ask1, double);
    #endif//_nbbo_ask1__GUARD__

    #ifndef _nbbo_bid_size1__GUARD__
    #define _nbbo_bid_size1__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_size1, int32);
    #endif//_nbbo_bid_size1__GUARD__

    #ifndef _nbbo_ask_size1__GUARD__
    #define _nbbo_ask_size1__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_size1, int32);
    #endif//_nbbo_ask_size1__GUARD__

    #ifndef _nbbo_bid_cnt1__GUARD__
    #define _nbbo_bid_cnt1__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_cnt1, int32);
    #endif//_nbbo_bid_cnt1__GUARD__

    #ifndef _nbbo_ask_cnt1__GUARD__
    #define _nbbo_ask_cnt1__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_cnt1, int32);
    #endif//_nbbo_ask_cnt1__GUARD__

    #ifndef _nbbo_bid_mask1__GUARD__
    #define _nbbo_bid_mask1__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_mask1, uint32);
    #endif//_nbbo_bid_mask1__GUARD__

    #ifndef _nbbo_ask_mask1__GUARD__
    #define _nbbo_ask_mask1__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_mask1, uint32);
    #endif//_nbbo_ask_mask1__GUARD__

    #ifndef _nbbo_bid2__GUARD__
    #define _nbbo_bid2__GUARD__
    DECL_STRONG_TYPE(nbbo_bid2, double);
    #endif//_nbbo_bid2__GUARD__

    #ifndef _nbbo_ask2__GUARD__
    #define _nbbo_ask2__GUARD__
    DECL_STRONG_TYPE(nbbo_ask2, double);
    #endif//_nbbo_ask2__GUARD__

    #ifndef _nbbo_bid_size2__GUARD__
    #define _nbbo_bid_size2__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_size2, int32);
    #endif//_nbbo_bid_size2__GUARD__

    #ifndef _nbbo_ask_size2__GUARD__
    #define _nbbo_ask_size2__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_size2, int32);
    #endif//_nbbo_ask_size2__GUARD__

    #ifndef _nbbo_bid_cnt2__GUARD__
    #define _nbbo_bid_cnt2__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_cnt2, int32);
    #endif//_nbbo_bid_cnt2__GUARD__

    #ifndef _nbbo_ask_cnt2__GUARD__
    #define _nbbo_ask_cnt2__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_cnt2, int32);
    #endif//_nbbo_ask_cnt2__GUARD__

    #ifndef _nbbo_bid_mask2__GUARD__
    #define _nbbo_bid_mask2__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_mask2, uint32);
    #endif//_nbbo_bid_mask2__GUARD__

    #ifndef _nbbo_ask_mask2__GUARD__
    #define _nbbo_ask_mask2__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_mask2, uint32);
    #endif//_nbbo_ask_mask2__GUARD__

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

    
    class SpdrSweepDetail_PKey {
        public:
        //using statements for all types used in this class
        using parent_number = spiderrock::protobuf::api::parent_number;

        private:
        parent_number m_parent_number{};

        public:
        parent_number get_parent_number() const {
            return m_parent_number;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrSweepDetail_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrSweepDetail_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }


        SpdrSweepDetail_PKey() {}

        virtual ~SpdrSweepDetail_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_parent_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_parent_number);
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
                }
            }
        }

    };
    

    class SpdrSweepDetail {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrSweepDetail_PKey;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using parent_order_size = spiderrock::protobuf::api::parent_order_size;
        using parent_limit_price = spiderrock::protobuf::api::parent_limit_price;
        using order_side = spiderrock::protobuf::api::order_side;
        using is_isosweep = spiderrock::protobuf::api::is_isosweep;
        using risk_limit_size = spiderrock::protobuf::api::risk_limit_size;
        using risk_limit_reason = spiderrock::protobuf::api::risk_limit_reason;
        using risk_limit_detail = spiderrock::protobuf::api::risk_limit_detail;
        using nbbo_bid1 = spiderrock::protobuf::api::nbbo_bid1;
        using nbbo_ask1 = spiderrock::protobuf::api::nbbo_ask1;
        using nbbo_bid_size1 = spiderrock::protobuf::api::nbbo_bid_size1;
        using nbbo_ask_size1 = spiderrock::protobuf::api::nbbo_ask_size1;
        using nbbo_bid_cnt1 = spiderrock::protobuf::api::nbbo_bid_cnt1;
        using nbbo_ask_cnt1 = spiderrock::protobuf::api::nbbo_ask_cnt1;
        using nbbo_bid_mask1 = spiderrock::protobuf::api::nbbo_bid_mask1;
        using nbbo_ask_mask1 = spiderrock::protobuf::api::nbbo_ask_mask1;
        using nbbo_bid2 = spiderrock::protobuf::api::nbbo_bid2;
        using nbbo_ask2 = spiderrock::protobuf::api::nbbo_ask2;
        using nbbo_bid_size2 = spiderrock::protobuf::api::nbbo_bid_size2;
        using nbbo_ask_size2 = spiderrock::protobuf::api::nbbo_ask_size2;
        using nbbo_bid_cnt2 = spiderrock::protobuf::api::nbbo_bid_cnt2;
        using nbbo_ask_cnt2 = spiderrock::protobuf::api::nbbo_ask_cnt2;
        using nbbo_bid_mask2 = spiderrock::protobuf::api::nbbo_bid_mask2;
        using nbbo_ask_mask2 = spiderrock::protobuf::api::nbbo_ask_mask2;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        engine_name m_engine_name{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        risk_group_id m_risk_group_id{};
        trigger_group_id m_trigger_group_id{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        parent_order_size m_parent_order_size{};
        parent_limit_price m_parent_limit_price{};
        order_side m_order_side{};
        is_isosweep m_is_isosweep{};
        risk_limit_size m_risk_limit_size{};
        risk_limit_reason m_risk_limit_reason{};
        risk_limit_detail m_risk_limit_detail{};
        nbbo_bid1 m_nbbo_bid1{};
        nbbo_ask1 m_nbbo_ask1{};
        nbbo_bid_size1 m_nbbo_bid_size1{};
        nbbo_ask_size1 m_nbbo_ask_size1{};
        nbbo_bid_cnt1 m_nbbo_bid_cnt1{};
        nbbo_ask_cnt1 m_nbbo_ask_cnt1{};
        nbbo_bid_mask1 m_nbbo_bid_mask1{};
        nbbo_ask_mask1 m_nbbo_ask_mask1{};
        nbbo_bid2 m_nbbo_bid2{};
        nbbo_ask2 m_nbbo_ask2{};
        nbbo_bid_size2 m_nbbo_bid_size2{};
        nbbo_ask_size2 m_nbbo_ask_size2{};
        nbbo_bid_cnt2 m_nbbo_bid_cnt2{};
        nbbo_ask_cnt2 m_nbbo_ask_cnt2{};
        nbbo_bid_mask2 m_nbbo_bid_mask2{};
        nbbo_ask_mask2 m_nbbo_ask_mask2{};
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
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        parent_order_size get_parent_order_size() const {
            return m_parent_order_size;
        }		
        parent_limit_price get_parent_limit_price() const {
            return m_parent_limit_price;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        is_isosweep get_is_isosweep() const {
            return m_is_isosweep;
        }		
        risk_limit_size get_risk_limit_size() const {
            return m_risk_limit_size;
        }		
        risk_limit_reason get_risk_limit_reason() const {
            return m_risk_limit_reason;
        }		
        risk_limit_detail get_risk_limit_detail() const {
            return m_risk_limit_detail;
        }		
        nbbo_bid1 get_nbbo_bid1() const {
            return m_nbbo_bid1;
        }		
        nbbo_ask1 get_nbbo_ask1() const {
            return m_nbbo_ask1;
        }		
        nbbo_bid_size1 get_nbbo_bid_size1() const {
            return m_nbbo_bid_size1;
        }		
        nbbo_ask_size1 get_nbbo_ask_size1() const {
            return m_nbbo_ask_size1;
        }		
        nbbo_bid_cnt1 get_nbbo_bid_cnt1() const {
            return m_nbbo_bid_cnt1;
        }		
        nbbo_ask_cnt1 get_nbbo_ask_cnt1() const {
            return m_nbbo_ask_cnt1;
        }		
        nbbo_bid_mask1 get_nbbo_bid_mask1() const {
            return m_nbbo_bid_mask1;
        }		
        nbbo_ask_mask1 get_nbbo_ask_mask1() const {
            return m_nbbo_ask_mask1;
        }		
        nbbo_bid2 get_nbbo_bid2() const {
            return m_nbbo_bid2;
        }		
        nbbo_ask2 get_nbbo_ask2() const {
            return m_nbbo_ask2;
        }		
        nbbo_bid_size2 get_nbbo_bid_size2() const {
            return m_nbbo_bid_size2;
        }		
        nbbo_ask_size2 get_nbbo_ask_size2() const {
            return m_nbbo_ask_size2;
        }		
        nbbo_bid_cnt2 get_nbbo_bid_cnt2() const {
            return m_nbbo_bid_cnt2;
        }		
        nbbo_ask_cnt2 get_nbbo_ask_cnt2() const {
            return m_nbbo_ask_cnt2;
        }		
        nbbo_bid_mask2 get_nbbo_bid_mask2() const {
            return m_nbbo_bid_mask2;
        }		
        nbbo_ask_mask2 get_nbbo_ask_mask2() const {
            return m_nbbo_ask_mask2;
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
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_parent_order_size(const parent_order_size& value)  {
            m_parent_order_size = value;
        }
        void set_parent_limit_price(const parent_limit_price& value)  {
            m_parent_limit_price = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_is_isosweep(const is_isosweep& value)  {
            m_is_isosweep = value;
        }
        void set_risk_limit_size(const risk_limit_size& value)  {
            m_risk_limit_size = value;
        }
        void set_risk_limit_reason(const risk_limit_reason& value)  {
            m_risk_limit_reason = value;
        }
        void set_risk_limit_detail(const risk_limit_detail& value)  {
            m_risk_limit_detail = value;
        }
        void set_nbbo_bid1(const nbbo_bid1& value)  {
            m_nbbo_bid1 = value;
        }
        void set_nbbo_ask1(const nbbo_ask1& value)  {
            m_nbbo_ask1 = value;
        }
        void set_nbbo_bid_size1(const nbbo_bid_size1& value)  {
            m_nbbo_bid_size1 = value;
        }
        void set_nbbo_ask_size1(const nbbo_ask_size1& value)  {
            m_nbbo_ask_size1 = value;
        }
        void set_nbbo_bid_cnt1(const nbbo_bid_cnt1& value)  {
            m_nbbo_bid_cnt1 = value;
        }
        void set_nbbo_ask_cnt1(const nbbo_ask_cnt1& value)  {
            m_nbbo_ask_cnt1 = value;
        }
        void set_nbbo_bid_mask1(const nbbo_bid_mask1& value)  {
            m_nbbo_bid_mask1 = value;
        }
        void set_nbbo_ask_mask1(const nbbo_ask_mask1& value)  {
            m_nbbo_ask_mask1 = value;
        }
        void set_nbbo_bid2(const nbbo_bid2& value)  {
            m_nbbo_bid2 = value;
        }
        void set_nbbo_ask2(const nbbo_ask2& value)  {
            m_nbbo_ask2 = value;
        }
        void set_nbbo_bid_size2(const nbbo_bid_size2& value)  {
            m_nbbo_bid_size2 = value;
        }
        void set_nbbo_ask_size2(const nbbo_ask_size2& value)  {
            m_nbbo_ask_size2 = value;
        }
        void set_nbbo_bid_cnt2(const nbbo_bid_cnt2& value)  {
            m_nbbo_bid_cnt2 = value;
        }
        void set_nbbo_ask_cnt2(const nbbo_ask_cnt2& value)  {
            m_nbbo_ask_cnt2 = value;
        }
        void set_nbbo_bid_mask2(const nbbo_bid_mask2& value)  {
            m_nbbo_bid_mask2 = value;
        }
        void set_nbbo_ask_mask2(const nbbo_ask_mask2& value)  {
            m_nbbo_ask_mask2 = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrSweepDetail::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const trigger_group_id & value) {
            set_trigger_group_id(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const parent_order_size & value) {
            set_parent_order_size(value);
        }
        void set(const parent_limit_price & value) {
            set_parent_limit_price(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const is_isosweep & value) {
            set_is_isosweep(value);
        }
        void set(const risk_limit_size & value) {
            set_risk_limit_size(value);
        }
        void set(const risk_limit_reason & value) {
            set_risk_limit_reason(value);
        }
        void set(const risk_limit_detail & value) {
            set_risk_limit_detail(value);
        }
        void set(const nbbo_bid1 & value) {
            set_nbbo_bid1(value);
        }
        void set(const nbbo_ask1 & value) {
            set_nbbo_ask1(value);
        }
        void set(const nbbo_bid_size1 & value) {
            set_nbbo_bid_size1(value);
        }
        void set(const nbbo_ask_size1 & value) {
            set_nbbo_ask_size1(value);
        }
        void set(const nbbo_bid_cnt1 & value) {
            set_nbbo_bid_cnt1(value);
        }
        void set(const nbbo_ask_cnt1 & value) {
            set_nbbo_ask_cnt1(value);
        }
        void set(const nbbo_bid_mask1 & value) {
            set_nbbo_bid_mask1(value);
        }
        void set(const nbbo_ask_mask1 & value) {
            set_nbbo_ask_mask1(value);
        }
        void set(const nbbo_bid2 & value) {
            set_nbbo_bid2(value);
        }
        void set(const nbbo_ask2 & value) {
            set_nbbo_ask2(value);
        }
        void set(const nbbo_bid_size2 & value) {
            set_nbbo_bid_size2(value);
        }
        void set(const nbbo_ask_size2 & value) {
            set_nbbo_ask_size2(value);
        }
        void set(const nbbo_bid_cnt2 & value) {
            set_nbbo_bid_cnt2(value);
        }
        void set(const nbbo_ask_cnt2 & value) {
            set_nbbo_ask_cnt2(value);
        }
        void set(const nbbo_bid_mask2 & value) {
            set_nbbo_bid_mask2(value);
        }
        void set(const nbbo_ask_mask2 & value) {
            set_nbbo_ask_mask2(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrSweepDetail & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_engine_name);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_risk_group_id);
            set(value.m_trigger_group_id);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_parent_order_size);
            set(value.m_parent_limit_price);
            set(value.m_order_side);
            set(value.m_is_isosweep);
            set(value.m_risk_limit_size);
            set(value.m_risk_limit_reason);
            set(value.m_risk_limit_detail);
            set(value.m_nbbo_bid1);
            set(value.m_nbbo_ask1);
            set(value.m_nbbo_bid_size1);
            set(value.m_nbbo_ask_size1);
            set(value.m_nbbo_bid_cnt1);
            set(value.m_nbbo_ask_cnt1);
            set(value.m_nbbo_bid_mask1);
            set(value.m_nbbo_ask_mask1);
            set(value.m_nbbo_bid2);
            set(value.m_nbbo_ask2);
            set(value.m_nbbo_bid_size2);
            set(value.m_nbbo_ask_size2);
            set(value.m_nbbo_bid_cnt2);
            set(value.m_nbbo_ask_cnt2);
            set(value.m_nbbo_bid_mask2);
            set(value.m_nbbo_ask_mask2);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        SpdrSweepDetail() {
            m__meta.set_message_type("SpdrSweepDetail");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2330, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2330, length);
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
             *this = SpdrSweepDetail{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
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
        bool IncludeRiskLimitSize() const {
            return !(m_risk_limit_size == 0);
        }
        bool IncludeRiskLimitDetail() const {
            return !(m_risk_limit_detail.empty());
        }
        bool IncludeNbboBid1() const {
            return !(m_nbbo_bid1 == 0.0);
        }
        bool IncludeNbboAsk1() const {
            return !(m_nbbo_ask1 == 0.0);
        }
        bool IncludeNbboBidSize1() const {
            return !(m_nbbo_bid_size1 == 0);
        }
        bool IncludeNbboAskSize1() const {
            return !(m_nbbo_ask_size1 == 0);
        }
        bool IncludeNbboBidCnt1() const {
            return !(m_nbbo_bid_cnt1 == 0);
        }
        bool IncludeNbboAskCnt1() const {
            return !(m_nbbo_ask_cnt1 == 0);
        }
        bool IncludeNbboBidMask1() const {
            return !(m_nbbo_bid_mask1 == 0);
        }
        bool IncludeNbboAskMask1() const {
            return !(m_nbbo_ask_mask1 == 0);
        }
        bool IncludeNbboBid2() const {
            return !(m_nbbo_bid2 == 0.0);
        }
        bool IncludeNbboAsk2() const {
            return !(m_nbbo_ask2 == 0.0);
        }
        bool IncludeNbboBidSize2() const {
            return !(m_nbbo_bid_size2 == 0);
        }
        bool IncludeNbboAskSize2() const {
            return !(m_nbbo_ask_size2 == 0);
        }
        bool IncludeNbboBidCnt2() const {
            return !(m_nbbo_bid_cnt2 == 0);
        }
        bool IncludeNbboAskCnt2() const {
            return !(m_nbbo_ask_cnt2 == 0);
        }
        bool IncludeNbboBidMask2() const {
            return !(m_nbbo_bid_mask2 == 0);
        }
        bool IncludeNbboAskMask2() const {
            return !(m_nbbo_ask_mask2 == 0);
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
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(194,m_engine_name);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_client_firm);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_trigger_group_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(115, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeParentOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_parent_order_size);
            }
            if ( IncludeParentLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_parent_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_isosweep)));
            if ( IncludeRiskLimitSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_risk_limit_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_reason)));
            if ( IncludeRiskLimitDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_risk_limit_detail);
            }
            if ( IncludeNbboBid1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_nbbo_bid1);
            }
            if ( IncludeNbboAsk1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_nbbo_ask1);
            }
            if ( IncludeNbboBidSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_nbbo_bid_size1);
            }
            if ( IncludeNbboAskSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_nbbo_ask_size1);
            }
            if ( IncludeNbboBidCnt1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_nbbo_bid_cnt1);
            }
            if ( IncludeNbboAskCnt1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_nbbo_ask_cnt1);
            }
            if ( IncludeNbboBidMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(160,m_nbbo_bid_mask1);
            }
            if ( IncludeNbboAskMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(163,m_nbbo_ask_mask1);
            }
            if ( IncludeNbboBid2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_nbbo_bid2);
            }
            if ( IncludeNbboAsk2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(169,m_nbbo_ask2);
            }
            if ( IncludeNbboBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_nbbo_bid_size2);
            }
            if ( IncludeNbboAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_nbbo_ask_size2);
            }
            if ( IncludeNbboBidCnt2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_nbbo_bid_cnt2);
            }
            if ( IncludeNbboAskCnt2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_nbbo_ask_cnt2);
            }
            if ( IncludeNbboBidMask2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(184,m_nbbo_bid_mask2);
            }
            if ( IncludeNbboAskMask2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(187,m_nbbo_ask_mask2);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(190,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(193, m_timestamp);
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
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,194,static_cast<string>(m_engine_name));
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_client_firm));
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_trigger_group_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 115, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeParentOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_parent_order_size);
            }
            if ( IncludeParentLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_parent_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_isosweep)));
            if ( IncludeRiskLimitSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_risk_limit_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_reason)));
            if ( IncludeRiskLimitDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_risk_limit_detail));
            }
            if ( IncludeNbboBid1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_nbbo_bid1);
            }
            if ( IncludeNbboAsk1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_nbbo_ask1);
            }
            if ( IncludeNbboBidSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_nbbo_bid_size1);
            }
            if ( IncludeNbboAskSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_nbbo_ask_size1);
            }
            if ( IncludeNbboBidCnt1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_nbbo_bid_cnt1);
            }
            if ( IncludeNbboAskCnt1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_nbbo_ask_cnt1);
            }
            if ( IncludeNbboBidMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,160,m_nbbo_bid_mask1);
            }
            if ( IncludeNbboAskMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,163,m_nbbo_ask_mask1);
            }
            if ( IncludeNbboBid2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_nbbo_bid2);
            }
            if ( IncludeNbboAsk2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,169,m_nbbo_ask2);
            }
            if ( IncludeNbboBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_nbbo_bid_size2);
            }
            if ( IncludeNbboAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_nbbo_ask_size2);
            }
            if ( IncludeNbboBidCnt2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_nbbo_bid_cnt2);
            }
            if ( IncludeNbboAskCnt2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_nbbo_ask_cnt2);
            }
            if ( IncludeNbboBidMask2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,184,m_nbbo_bid_mask2);
            }
            if ( IncludeNbboAskMask2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,187,m_nbbo_ask_mask2);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,190,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 193, m_timestamp);
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
                    case 194: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_parent_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_isosweep = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_risk_limit_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_reason = static_cast<spiderrock::protobuf::api::SpdrRisk>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_limit_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_bid1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_ask1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_cnt1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_cnt1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_nbbo_bid_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_nbbo_ask_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_bid2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_nbbo_ask2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_cnt2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_cnt2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_nbbo_bid_mask2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_nbbo_ask_mask2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 193: {
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

    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::_meta>() const { return SpdrSweepDetail::_meta{ m__meta}; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::pkey>() const { return SpdrSweepDetail::pkey{ m_pkey}; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::sec_key>() const { return SpdrSweepDetail::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::parent_order_size>() const { return m_parent_order_size; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::parent_limit_price>() const { return m_parent_limit_price; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::is_isosweep>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_isosweep)); }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::risk_limit_size>() const { return m_risk_limit_size; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::risk_limit_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>( m_risk_limit_reason)); }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::risk_limit_detail>() const { return m_risk_limit_detail; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid1>() const { return m_nbbo_bid1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask1>() const { return m_nbbo_ask1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid_size1>() const { return m_nbbo_bid_size1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask_size1>() const { return m_nbbo_ask_size1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid_cnt1>() const { return m_nbbo_bid_cnt1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask_cnt1>() const { return m_nbbo_ask_cnt1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid_mask1>() const { return m_nbbo_bid_mask1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask_mask1>() const { return m_nbbo_ask_mask1; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid2>() const { return m_nbbo_bid2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask2>() const { return m_nbbo_ask2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid_size2>() const { return m_nbbo_bid_size2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask_size2>() const { return m_nbbo_ask_size2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid_cnt2>() const { return m_nbbo_bid_cnt2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask_cnt2>() const { return m_nbbo_ask_cnt2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_bid_mask2>() const { return m_nbbo_bid_mask2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::nbbo_ask_mask2>() const { return m_nbbo_ask_mask2; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpdrSweepDetail::get<SpdrSweepDetail::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrSweepDetail_PKey::get<SpdrSweepDetail_PKey::parent_number>() const { return m_parent_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrSweepDetail_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrSweepDetail_PKey::parent_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrSweepDetail& m) {
        o << "\"_meta\":{" << m.get<SpdrSweepDetail::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrSweepDetail::pkey>() << "}";
        o << ",\"engine_name\":\"" << m.get<SpdrSweepDetail::engine_name>() << "\"";
        o << ",\"accnt\":\"" << m.get<SpdrSweepDetail::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrSweepDetail::client_firm>() << "\"";
        o << ",\"risk_group_id\":" << m.get<SpdrSweepDetail::risk_group_id>();
        o << ",\"trigger_group_id\":" << m.get<SpdrSweepDetail::trigger_group_id>();
        o << ",\"sec_key\":{" << m.get<SpdrSweepDetail::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrSweepDetail::sec_type>();
        o << ",\"parent_order_size\":" << m.get<SpdrSweepDetail::parent_order_size>();
        o << ",\"parent_limit_price\":" << m.get<SpdrSweepDetail::parent_limit_price>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrSweepDetail::order_side>();
        o << ",\"is_isosweep\":" << (int64_t)m.get<SpdrSweepDetail::is_isosweep>();
        o << ",\"risk_limit_size\":" << m.get<SpdrSweepDetail::risk_limit_size>();
        o << ",\"risk_limit_reason\":" << (int64_t)m.get<SpdrSweepDetail::risk_limit_reason>();
        o << ",\"risk_limit_detail\":\"" << m.get<SpdrSweepDetail::risk_limit_detail>() << "\"";
        o << ",\"nbbo_bid1\":" << m.get<SpdrSweepDetail::nbbo_bid1>();
        o << ",\"nbbo_ask1\":" << m.get<SpdrSweepDetail::nbbo_ask1>();
        o << ",\"nbbo_bid_size1\":" << m.get<SpdrSweepDetail::nbbo_bid_size1>();
        o << ",\"nbbo_ask_size1\":" << m.get<SpdrSweepDetail::nbbo_ask_size1>();
        o << ",\"nbbo_bid_cnt1\":" << m.get<SpdrSweepDetail::nbbo_bid_cnt1>();
        o << ",\"nbbo_ask_cnt1\":" << m.get<SpdrSweepDetail::nbbo_ask_cnt1>();
        o << ",\"nbbo_bid_mask1\":" << m.get<SpdrSweepDetail::nbbo_bid_mask1>();
        o << ",\"nbbo_ask_mask1\":" << m.get<SpdrSweepDetail::nbbo_ask_mask1>();
        o << ",\"nbbo_bid2\":" << m.get<SpdrSweepDetail::nbbo_bid2>();
        o << ",\"nbbo_ask2\":" << m.get<SpdrSweepDetail::nbbo_ask2>();
        o << ",\"nbbo_bid_size2\":" << m.get<SpdrSweepDetail::nbbo_bid_size2>();
        o << ",\"nbbo_ask_size2\":" << m.get<SpdrSweepDetail::nbbo_ask_size2>();
        o << ",\"nbbo_bid_cnt2\":" << m.get<SpdrSweepDetail::nbbo_bid_cnt2>();
        o << ",\"nbbo_ask_cnt2\":" << m.get<SpdrSweepDetail::nbbo_ask_cnt2>();
        o << ",\"nbbo_bid_mask2\":" << m.get<SpdrSweepDetail::nbbo_bid_mask2>();
        o << ",\"nbbo_ask_mask2\":" << m.get<SpdrSweepDetail::nbbo_ask_mask2>();
        o << ",\"net_timestamp\":" << m.get<SpdrSweepDetail::net_timestamp>();
        {
            std::time_t tt = m.get<SpdrSweepDetail::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}