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

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

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

    #ifndef _mleg_leg_key__GUARD__
    #define _mleg_leg_key__GUARD__
    DECL_STRONG_TYPE(mleg_leg_key, string);
    #endif//_mleg_leg_key__GUARD__

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

    #ifndef _allocation_rule__GUARD__
    #define _allocation_rule__GUARD__
    DECL_STRONG_TYPE(allocation_rule, spiderrock::protobuf::api::AllocationRule);
    #endif//_allocation_rule__GUARD__

    #ifndef _ready_to_send__GUARD__
    #define _ready_to_send__GUARD__
    DECL_STRONG_TYPE(ready_to_send, spiderrock::protobuf::api::YesNo);
    #endif//_ready_to_send__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _alloc_number__GUARD__
    #define _alloc_number__GUARD__
    DECL_STRONG_TYPE(alloc_number, int64);
    #endif//_alloc_number__GUARD__

    #ifndef _cl_ord_id__int64__GUARD__
    #define _cl_ord_id__int64__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__int64, int64);
    #endif//_cl_ord_id__int64__GUARD__

    #ifndef _alloc_accnt__GUARD__
    #define _alloc_accnt__GUARD__
    DECL_STRONG_TYPE(alloc_accnt, string);
    #endif//_alloc_accnt__GUARD__

    #ifndef _alloc_size__GUARD__
    #define _alloc_size__GUARD__
    DECL_STRONG_TYPE(alloc_size, int32);
    #endif//_alloc_size__GUARD__

    
    class SpdrExecutionAllocation_PKey {
        public:
        //using statements for all types used in this class
        using alloc_number = spiderrock::protobuf::api::alloc_number;

        private:
        alloc_number m_alloc_number{};

        public:
        alloc_number get_alloc_number() const {
            return m_alloc_number;
        }
        void set_alloc_number(const alloc_number& value)  {
            m_alloc_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const alloc_number & value) { set_alloc_number(value); }


        SpdrExecutionAllocation_PKey() {}

        virtual ~SpdrExecutionAllocation_PKey() {
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
        bool IncludeAllocNumber() const {
            return !(m_alloc_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAllocNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_alloc_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAllocNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_alloc_number);
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
                    case 10: {m_alloc_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrExecutionAllocation_ChildOrders {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation_ChildOrders::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation_ChildOrders::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const cl_ord_id & value) { set_cl_ord_id(value); }


        SpdrExecutionAllocation_ChildOrders() {}

        virtual ~SpdrExecutionAllocation_ChildOrders() {
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
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_cl_ord_id);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_cl_ord_id);
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
                    case 133: {m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrExecutionAllocation_Fragments {
        public:
        //using statements for all types used in this class
        using alloc_accnt = spiderrock::protobuf::api::alloc_accnt;
        using alloc_size = spiderrock::protobuf::api::alloc_size;

        private:
        alloc_accnt m_alloc_accnt{};
        alloc_size m_alloc_size{};

        public:
        alloc_accnt get_alloc_accnt() const {
            return m_alloc_accnt;
        }
        alloc_size get_alloc_size() const {
            return m_alloc_size;
        }
        void set_alloc_accnt(const alloc_accnt& value)  {
            m_alloc_accnt = value;
        }
        void set_alloc_size(const alloc_size& value)  {
            m_alloc_size = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation_Fragments::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation_Fragments::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const alloc_accnt & value) { set_alloc_accnt(value); }
        void set(const alloc_size & value) { set_alloc_size(value); }


        SpdrExecutionAllocation_Fragments() {}

        virtual ~SpdrExecutionAllocation_Fragments() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_alloc_accnt);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_alloc_size);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_alloc_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_alloc_size);
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
                    case 139: {m_alloc_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 142: {m_alloc_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrExecutionAllocation {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrExecutionAllocation_PKey;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using omni_accnt = spiderrock::protobuf::api::omni_accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using mleg_leg_key = spiderrock::protobuf::api::mleg_leg_key;
        using order_side = spiderrock::protobuf::api::order_side;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using allocation_rule = spiderrock::protobuf::api::allocation_rule;
        using ready_to_send = spiderrock::protobuf::api::ready_to_send;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using child_orders = spiderrock::protobuf::api::SpdrExecutionAllocation_ChildOrders;
        using fragments = spiderrock::protobuf::api::SpdrExecutionAllocation_Fragments;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        base_parent_number m_base_parent_number{};
        omni_accnt m_omni_accnt{};
        client_firm m_client_firm{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        mleg_leg_key m_mleg_leg_key{};
        order_side m_order_side{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        allocation_rule m_allocation_rule{};
        ready_to_send m_ready_to_send{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<child_orders> m_child_orders{};
        std::vector<fragments> m_fragments{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
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
        mleg_leg_key get_mleg_leg_key() const {
            return m_mleg_leg_key;
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
        allocation_rule get_allocation_rule() const {
            return m_allocation_rule;
        }		
        ready_to_send get_ready_to_send() const {
            return m_ready_to_send;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        const std::vector<fragments>& get_fragments_list() const {
            return m_fragments;
        }
        const fragments& get_fragments(const int i) const {
            return m_fragments.at(i);
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
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
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
        void set_mleg_leg_key(const mleg_leg_key& value)  {
            m_mleg_leg_key = value;
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
        void set_allocation_rule(const allocation_rule& value)  {
            m_allocation_rule = value;
        }
        void set_ready_to_send(const ready_to_send& value)  {
            m_ready_to_send = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
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
        void set_fragments_list(const std::vector<fragments>& list)  {
            m_fragments = list;
        }
        void add_fragments(const fragments& item) {
            m_fragments.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrExecutionAllocation::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
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
        void set(const mleg_leg_key & value) {
            set_mleg_leg_key(value);
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
        void set(const allocation_rule & value) {
            set_allocation_rule(value);
        }
        void set(const ready_to_send & value) {
            set_ready_to_send(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const child_orders & value) {
            add_child_orders(value);
        }
        void set(const fragments & value) {
            add_fragments(value);
        }

        void set(const SpdrExecutionAllocation & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_base_parent_number);
            set(value.m_omni_accnt);
            set(value.m_client_firm);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_mleg_leg_key);
            set(value.m_order_side);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_allocation_rule);
            set(value.m_ready_to_send);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_child_orders_list(value.m_child_orders);set_fragments_list(value.m_fragments);
        }

        SpdrExecutionAllocation() {
            m__meta.set_message_type("SpdrExecutionAllocation");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3710, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3710, length);
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
             *this = SpdrExecutionAllocation{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
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
        bool IncludeMlegLegKey() const {
            return !(m_mleg_leg_key.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeChildOrders() const {
            return (!m_child_orders.empty());
        }
        bool IncludeFragments() const {
            return (!m_fragments.empty());
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
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_base_parent_number);
            }
            if ( IncludeOmniAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_omni_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(152,m_client_firm);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(106, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeMlegLegKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_mleg_leg_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllocationRule>(m_allocation_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_ready_to_send)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(151, m_timestamp);
            }
            if ( IncludeChildOrders()) {
                for (auto& item : m_child_orders) {
					totalSize += SRProtobufCPP::TagCodec::Size(130, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeFragments()) {
                for (auto& item : m_fragments) {
					totalSize += SRProtobufCPP::TagCodec::Size(136, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_base_parent_number);
            }
            if ( IncludeOmniAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_omni_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,152,static_cast<string>(m_client_firm));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 106, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeMlegLegKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_mleg_leg_key));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllocationRule>(m_allocation_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_ready_to_send)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 151, m_timestamp);
            }
            if ( IncludeChildOrders()) {
                for (auto& item : m_child_orders) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 130, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeFragments()) {
                for (auto& item : m_fragments) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 136, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_omni_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 152: {
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
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mleg_leg_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allocation_rule = static_cast<spiderrock::protobuf::api::AllocationRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ready_to_send = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            child_orders item_child_orders;
                            item_child_orders.Decode(pos, pos+length);  
                            m_child_orders.emplace_back(item_child_orders);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            fragments item_fragments;
                            item_fragments.Decode(pos, pos+length);  
                            m_fragments.emplace_back(item_fragments);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::_meta>() const { return SpdrExecutionAllocation::_meta{ m__meta}; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::pkey>() const { return SpdrExecutionAllocation::pkey{ m_pkey}; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::omni_accnt>() const { return m_omni_accnt; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::sec_key>() const { return SpdrExecutionAllocation::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::mleg_leg_key>() const { return m_mleg_leg_key; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::allocation_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllocationRule>( m_allocation_rule)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::ready_to_send>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_ready_to_send)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::child_orders>(int i) const { return SpdrExecutionAllocation::child_orders{ get_child_orders(i)}; }
    template<> inline int SpdrExecutionAllocation::count<SpdrExecutionAllocation::child_orders>() const { return static_cast<int>( m_child_orders.size()); }
    template<> inline const auto SpdrExecutionAllocation::get<SpdrExecutionAllocation::fragments>(int i) const { return SpdrExecutionAllocation::fragments{ get_fragments(i)}; }
    template<> inline int SpdrExecutionAllocation::count<SpdrExecutionAllocation::fragments>() const { return static_cast<int>( m_fragments.size()); }
    template<> inline const auto SpdrExecutionAllocation_PKey::get<SpdrExecutionAllocation_PKey::alloc_number>() const { return m_alloc_number; }
    
    template<> inline const auto SpdrExecutionAllocation_ChildOrders::get<SpdrExecutionAllocation_ChildOrders::cl_ord_id>() const { return m_cl_ord_id; }
    
    template<> inline const auto SpdrExecutionAllocation_Fragments::get<SpdrExecutionAllocation_Fragments::alloc_accnt>() const { return m_alloc_accnt; }
    template<> inline const auto SpdrExecutionAllocation_Fragments::get<SpdrExecutionAllocation_Fragments::alloc_size>() const { return m_alloc_size; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrExecutionAllocation_PKey& m) {
        o << "\"alloc_number\":" << m.get<SpdrExecutionAllocation_PKey::alloc_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrExecutionAllocation_ChildOrders& m) {
        o << "\"cl_ord_id\":" << m.get<SpdrExecutionAllocation_ChildOrders::cl_ord_id>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrExecutionAllocation_Fragments& m) {
        o << "\"alloc_accnt\":\"" << m.get<SpdrExecutionAllocation_Fragments::alloc_accnt>() << "\"";
        o << ",\"alloc_size\":" << m.get<SpdrExecutionAllocation_Fragments::alloc_size>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrExecutionAllocation& m) {
        o << "\"_meta\":{" << m.get<SpdrExecutionAllocation::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrExecutionAllocation::pkey>() << "}";
        o << ",\"base_parent_number\":" << m.get<SpdrExecutionAllocation::base_parent_number>();
        o << ",\"omni_accnt\":\"" << m.get<SpdrExecutionAllocation::omni_accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrExecutionAllocation::client_firm>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrExecutionAllocation::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrExecutionAllocation::sec_type>();
        o << ",\"mleg_leg_key\":\"" << m.get<SpdrExecutionAllocation::mleg_leg_key>() << "\"";
        o << ",\"order_side\":" << (int64_t)m.get<SpdrExecutionAllocation::order_side>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrExecutionAllocation::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrExecutionAllocation::position_type>();
        o << ",\"allocation_rule\":" << (int64_t)m.get<SpdrExecutionAllocation::allocation_rule>();
        o << ",\"ready_to_send\":" << (int64_t)m.get<SpdrExecutionAllocation::ready_to_send>();
        o << ",\"modified_by\":\"" << m.get<SpdrExecutionAllocation::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrExecutionAllocation::modified_in>();
        {
            std::time_t tt = m.get<SpdrExecutionAllocation::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"child_orders\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrExecutionAllocation::child_orders>(); ++i) {
                o << delim << m.get<SpdrExecutionAllocation::child_orders>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"fragments\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrExecutionAllocation::fragments>(); ++i) {
                o << delim << m.get<SpdrExecutionAllocation::fragments>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}