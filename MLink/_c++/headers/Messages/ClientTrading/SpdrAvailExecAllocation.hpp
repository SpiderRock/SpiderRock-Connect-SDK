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

    #ifndef _omni_accnt__GUARD__
    #define _omni_accnt__GUARD__
    DECL_STRONG_TYPE(omni_accnt, string);
    #endif//_omni_accnt__GUARD__

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

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _mleg_leg_key__GUARD__
    #define _mleg_leg_key__GUARD__
    DECL_STRONG_TYPE(mleg_leg_key, string);
    #endif//_mleg_leg_key__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _cum_fill_qty__GUARD__
    #define _cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(cum_fill_qty, int32);
    #endif//_cum_fill_qty__GUARD__

    #ifndef _avg_fill_prc__GUARD__
    #define _avg_fill_prc__GUARD__
    DECL_STRONG_TYPE(avg_fill_prc, double);
    #endif//_avg_fill_prc__GUARD__

    #ifndef _alloc_status__ExecAllocStatus__GUARD__
    #define _alloc_status__ExecAllocStatus__GUARD__
    DECL_STRONG_TYPE(alloc_status__ExecAllocStatus, spiderrock::protobuf::api::ExecAllocStatus);
    #endif//_alloc_status__ExecAllocStatus__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _avail_exec_number__GUARD__
    #define _avail_exec_number__GUARD__
    DECL_STRONG_TYPE(avail_exec_number, int64);
    #endif//_avail_exec_number__GUARD__

    #ifndef _cl_ord_id__int64__GUARD__
    #define _cl_ord_id__int64__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__int64, int64);
    #endif//_cl_ord_id__int64__GUARD__

    
    class SpdrAvailExecAllocation_PKey {
        public:
        //using statements for all types used in this class
        using avail_exec_number = spiderrock::protobuf::api::avail_exec_number;

        private:
        avail_exec_number m_avail_exec_number{};

        public:
        avail_exec_number get_avail_exec_number() const {
            return m_avail_exec_number;
        }
        void set_avail_exec_number(const avail_exec_number& value)  {
            m_avail_exec_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const avail_exec_number & value) { set_avail_exec_number(value); }


        SpdrAvailExecAllocation_PKey() {}

        virtual ~SpdrAvailExecAllocation_PKey() {
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
        bool IncludeAvailExecNumber() const {
            return !(m_avail_exec_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAvailExecNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_avail_exec_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAvailExecNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_avail_exec_number);
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
                    case 10: {m_avail_exec_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrAvailExecAllocation_ChildOrders {
        public:
        //using statements for all types used in this class
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__int64;

        private:
        cl_ord_id m_cl_ord_id{};

        public:
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation_ChildOrders::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation_ChildOrders::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const cl_ord_id & value) { set_cl_ord_id(value); }


        SpdrAvailExecAllocation_ChildOrders() {}

        virtual ~SpdrAvailExecAllocation_ChildOrders() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(145,m_cl_ord_id);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,145,m_cl_ord_id);
            return dest;
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
                    case 145: {m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrAvailExecAllocation {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAvailExecAllocation_PKey;
        using omni_accnt = spiderrock::protobuf::api::omni_accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using order_side = spiderrock::protobuf::api::order_side;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using mleg_leg_key = spiderrock::protobuf::api::mleg_leg_key;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using cum_fill_qty = spiderrock::protobuf::api::cum_fill_qty;
        using avg_fill_prc = spiderrock::protobuf::api::avg_fill_prc;
        using alloc_status = spiderrock::protobuf::api::alloc_status__ExecAllocStatus;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using child_orders = spiderrock::protobuf::api::SpdrAvailExecAllocation_ChildOrders;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        omni_accnt m_omni_accnt{};
        client_firm m_client_firm{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        order_side m_order_side{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        mleg_leg_key m_mleg_leg_key{};
        base_parent_number m_base_parent_number{};
        cum_fill_qty m_cum_fill_qty{};
        avg_fill_prc m_avg_fill_prc{};
        alloc_status m_alloc_status{};
        timestamp m_timestamp{};
        std::vector<child_orders> m_child_orders{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        omni_accnt get_omni_accnt() const {
            return m_omni_accnt;
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
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        mleg_leg_key get_mleg_leg_key() const {
            return m_mleg_leg_key;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        cum_fill_qty get_cum_fill_qty() const {
            return m_cum_fill_qty;
        }		
        avg_fill_prc get_avg_fill_prc() const {
            return m_avg_fill_prc;
        }		
        alloc_status get_alloc_status() const {
            return m_alloc_status;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<child_orders>& get_child_orders_list() const {
            return m_child_orders;
        }
        const child_orders& get_child_orders(const int i) const {
            return m_child_orders.at(i);
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
        void set_omni_accnt(const omni_accnt& value)  {
            m_omni_accnt = value;
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
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_mleg_leg_key(const mleg_leg_key& value)  {
            m_mleg_leg_key = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_cum_fill_qty(const cum_fill_qty& value)  {
            m_cum_fill_qty = value;
        }
        void set_avg_fill_prc(const avg_fill_prc& value)  {
            m_avg_fill_prc = value;
        }
        void set_alloc_status(const alloc_status& value)  {
            m_alloc_status = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_child_orders_list(const std::vector<child_orders>& list)  {
            m_child_orders = list;
        }
        void add_child_orders(const child_orders& item) {
            m_child_orders.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAvailExecAllocation::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const omni_accnt & value) {
            set_omni_accnt(value);
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
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const mleg_leg_key & value) {
            set_mleg_leg_key(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const cum_fill_qty & value) {
            set_cum_fill_qty(value);
        }
        void set(const avg_fill_prc & value) {
            set_avg_fill_prc(value);
        }
        void set(const alloc_status & value) {
            set_alloc_status(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const child_orders & value) {
            add_child_orders(value);
        }

        void set(const SpdrAvailExecAllocation & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_omni_accnt);
            set(value.m_client_firm);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_order_side);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_mleg_leg_key);
            set(value.m_base_parent_number);
            set(value.m_cum_fill_qty);
            set(value.m_avg_fill_prc);
            set(value.m_alloc_status);
            set(value.m_timestamp);set_child_orders_list(value.m_child_orders);
        }

        SpdrAvailExecAllocation() {
            m__meta.set_message_type("SpdrAvailExecAllocation");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3705, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3705, length);
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
             *this = SpdrAvailExecAllocation{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOmniAccnt() const {
            return !(m_omni_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeMlegLegKey() const {
            return !(m_mleg_leg_key.empty());
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludeCumFillQty() const {
            return !(m_cum_fill_qty == 0);
        }
        bool IncludeAvgFillPrc() const {
            return !(m_avg_fill_prc == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeChildOrders() const {
            return (!m_child_orders.empty());
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
            if ( IncludeOmniAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_omni_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(146,m_client_firm);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(103, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_grouping_code);
            }
            if ( IncludeMlegLegKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_mleg_leg_key);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_base_parent_number);
            }
            if ( IncludeCumFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_cum_fill_qty);
            }
            if ( IncludeAvgFillPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(133,m_avg_fill_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecAllocStatus>(m_alloc_status)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_timestamp);
            }
            if ( IncludeChildOrders()) {
                for (auto& item : m_child_orders) {
					totalSize += SRProtobufCPP::TagCodec::Size(142, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
            if ( IncludeOmniAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_omni_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,146,static_cast<string>(m_client_firm));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 103, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_grouping_code);
            }
            if ( IncludeMlegLegKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_mleg_leg_key));
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_base_parent_number);
            }
            if ( IncludeCumFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_cum_fill_qty);
            }
            if ( IncludeAvgFillPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,133,m_avg_fill_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecAllocStatus>(m_alloc_status)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_timestamp);
            }
            if ( IncludeChildOrders()) {
                for (auto& item : m_child_orders) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 142, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                            m_omni_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mleg_leg_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_alloc_status = static_cast<spiderrock::protobuf::api::ExecAllocStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            child_orders item_child_orders;
                            item_child_orders.Decode(pos, pos+length);  
                            m_child_orders.emplace_back(item_child_orders);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::_meta>() const { return SpdrAvailExecAllocation::_meta{ m__meta}; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::pkey>() const { return SpdrAvailExecAllocation::pkey{ m_pkey}; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::omni_accnt>() const { return m_omni_accnt; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::sec_key>() const { return SpdrAvailExecAllocation::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::mleg_leg_key>() const { return m_mleg_leg_key; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::cum_fill_qty>() const { return m_cum_fill_qty; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::avg_fill_prc>() const { return m_avg_fill_prc; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::alloc_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecAllocStatus>( m_alloc_status)); }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAvailExecAllocation::get<SpdrAvailExecAllocation::child_orders>(int i) const { return SpdrAvailExecAllocation::child_orders{ get_child_orders(i)}; }
    template<> inline int SpdrAvailExecAllocation::count<SpdrAvailExecAllocation::child_orders>() const { return static_cast<int>( m_child_orders.size()); }
    template<> inline const auto SpdrAvailExecAllocation_PKey::get<SpdrAvailExecAllocation_PKey::avail_exec_number>() const { return m_avail_exec_number; }
    
    template<> inline const auto SpdrAvailExecAllocation_ChildOrders::get<SpdrAvailExecAllocation_ChildOrders::cl_ord_id>() const { return m_cl_ord_id; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAvailExecAllocation_PKey& m) {
        o << "\"avail_exec_number\":" << m.get<SpdrAvailExecAllocation_PKey::avail_exec_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAvailExecAllocation_ChildOrders& m) {
        o << "\"cl_ord_id\":" << m.get<SpdrAvailExecAllocation_ChildOrders::cl_ord_id>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAvailExecAllocation& m) {
        o << "\"_meta\":{" << m.get<SpdrAvailExecAllocation::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAvailExecAllocation::pkey>() << "}";
        o << ",\"omni_accnt\":\"" << m.get<SpdrAvailExecAllocation::omni_accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrAvailExecAllocation::client_firm>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrAvailExecAllocation::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAvailExecAllocation::sec_type>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrAvailExecAllocation::order_side>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrAvailExecAllocation::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrAvailExecAllocation::position_type>();
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrAvailExecAllocation::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrAvailExecAllocation::grouping_code>();
        o << ",\"mleg_leg_key\":\"" << m.get<SpdrAvailExecAllocation::mleg_leg_key>() << "\"";
        o << ",\"base_parent_number\":" << m.get<SpdrAvailExecAllocation::base_parent_number>();
        o << ",\"cum_fill_qty\":" << m.get<SpdrAvailExecAllocation::cum_fill_qty>();
        o << ",\"avg_fill_prc\":" << m.get<SpdrAvailExecAllocation::avg_fill_prc>();
        o << ",\"alloc_status\":" << (int64_t)m.get<SpdrAvailExecAllocation::alloc_status>();
        {
            std::time_t tt = m.get<SpdrAvailExecAllocation::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"child_orders\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAvailExecAllocation::child_orders>(); ++i) {
                o << delim << m.get<SpdrAvailExecAllocation::child_orders>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}