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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _omni_accnt__GUARD__
    #define _omni_accnt__GUARD__
    DECL_STRONG_TYPE(omni_accnt, string);
    #endif//_omni_accnt__GUARD__

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

    #ifndef _notice_state__GUARD__
    #define _notice_state__GUARD__
    DECL_STRONG_TYPE(notice_state, spiderrock::protobuf::api::NoticeState);
    #endif//_notice_state__GUARD__

    #ifndef _notice_text__GUARD__
    #define _notice_text__GUARD__
    DECL_STRONG_TYPE(notice_text, string);
    #endif//_notice_text__GUARD__

    #ifndef _alloc_method__GUARD__
    #define _alloc_method__GUARD__
    DECL_STRONG_TYPE(alloc_method, spiderrock::protobuf::api::AllocMethod);
    #endif//_alloc_method__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _alloc_ex_dest__GUARD__
    #define _alloc_ex_dest__GUARD__
    DECL_STRONG_TYPE(alloc_ex_dest, string);
    #endif//_alloc_ex_dest__GUARD__

    #ifndef _order_shape__GUARD__
    #define _order_shape__GUARD__
    DECL_STRONG_TYPE(order_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_order_shape__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _net_money__GUARD__
    #define _net_money__GUARD__
    DECL_STRONG_TYPE(net_money, double);
    #endif//_net_money__GUARD__

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

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _street_cl_ord_id__GUARD__
    #define _street_cl_ord_id__GUARD__
    DECL_STRONG_TYPE(street_cl_ord_id, string);
    #endif//_street_cl_ord_id__GUARD__

    #ifndef _street_order_id__GUARD__
    #define _street_order_id__GUARD__
    DECL_STRONG_TYPE(street_order_id, string);
    #endif//_street_order_id__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _alloc_accnt__GUARD__
    #define _alloc_accnt__GUARD__
    DECL_STRONG_TYPE(alloc_accnt, string);
    #endif//_alloc_accnt__GUARD__

    #ifndef _alloc_frag_id__GUARD__
    #define _alloc_frag_id__GUARD__
    DECL_STRONG_TYPE(alloc_frag_id, int64);
    #endif//_alloc_frag_id__GUARD__

    #ifndef _alloc_size__GUARD__
    #define _alloc_size__GUARD__
    DECL_STRONG_TYPE(alloc_size, int32);
    #endif//_alloc_size__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _firm_position__GUARD__
    #define _firm_position__GUARD__
    DECL_STRONG_TYPE(firm_position, int32);
    #endif//_firm_position__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _mult__GUARD__
    #define _mult__GUARD__
    DECL_STRONG_TYPE(mult, uint32);
    #endif//_mult__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _leg_id__int64__GUARD__
    #define _leg_id__int64__GUARD__
    DECL_STRONG_TYPE(leg_id__int64, int64);
    #endif//_leg_id__int64__GUARD__

    #ifndef _alt_leg_id__GUARD__
    #define _alt_leg_id__GUARD__
    DECL_STRONG_TYPE(alt_leg_id, string);
    #endif//_alt_leg_id__GUARD__

    #ifndef _sum_leg_qty__GUARD__
    #define _sum_leg_qty__GUARD__
    DECL_STRONG_TYPE(sum_leg_qty, int32);
    #endif//_sum_leg_qty__GUARD__

    #ifndef _sum_leg_mny__GUARD__
    #define _sum_leg_mny__GUARD__
    DECL_STRONG_TYPE(sum_leg_mny, double);
    #endif//_sum_leg_mny__GUARD__

    
    class SpdrAllocationNotice_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const alloc_number & value) { set_alloc_number(value); }


        SpdrAllocationNotice_PKey() {}

        virtual ~SpdrAllocationNotice_PKey() {
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
    
    class SpdrAllocationNotice_ChildOrders {
        public:
        //using statements for all types used in this class
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__int64;
        using order_size = spiderrock::protobuf::api::order_size;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using street_cl_ord_id = spiderrock::protobuf::api::street_cl_ord_id;
        using street_order_id = spiderrock::protobuf::api::street_order_id;

        private:
        cl_ord_id m_cl_ord_id{};
        order_size m_order_size{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        street_cl_ord_id m_street_cl_ord_id{};
        street_order_id m_street_order_id{};

        public:
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }
        order_size get_order_size() const {
            return m_order_size;
        }
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }
        street_cl_ord_id get_street_cl_ord_id() const {
            return m_street_cl_ord_id;
        }
        street_order_id get_street_order_id() const {
            return m_street_order_id;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_street_cl_ord_id(const street_cl_ord_id& value)  {
            m_street_cl_ord_id = value;
        }
        void set_street_order_id(const street_order_id& value)  {
            m_street_order_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_ChildOrders::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_ChildOrders::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const cl_ord_id & value) { set_cl_ord_id(value); }
        void set(const order_size & value) { set_order_size(value); }
        void set(const cum_fill_quantity & value) { set_cum_fill_quantity(value); }
        void set(const avg_fill_price & value) { set_avg_fill_price(value); }
        void set(const street_cl_ord_id & value) { set_street_cl_ord_id(value); }
        void set(const street_order_id & value) { set_street_order_id(value); }


        SpdrAllocationNotice_ChildOrders() {}

        virtual ~SpdrAllocationNotice_ChildOrders() {
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
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(151,m_cl_ord_id);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_order_size);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_cum_fill_quantity);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_avg_fill_price);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_street_cl_ord_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_street_order_id);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,151,m_cl_ord_id);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_order_size);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_cum_fill_quantity);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_avg_fill_price);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_street_cl_ord_id));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_street_order_id));
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
                    case 151: {m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 154: {m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 157: {m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 160: {m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 163: {m_street_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 166: {m_street_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrAllocationNotice_Fragments {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using alloc_accnt = spiderrock::protobuf::api::alloc_accnt;
        using alloc_frag_id = spiderrock::protobuf::api::alloc_frag_id;
        using alloc_size = spiderrock::protobuf::api::alloc_size;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        alloc_accnt m_alloc_accnt{};
        alloc_frag_id m_alloc_frag_id{};
        alloc_size m_alloc_size{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        alloc_accnt get_alloc_accnt() const {
            return m_alloc_accnt;
        }
        alloc_frag_id get_alloc_frag_id() const {
            return m_alloc_frag_id;
        }
        alloc_size get_alloc_size() const {
            return m_alloc_size;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_alloc_accnt(const alloc_accnt& value)  {
            m_alloc_accnt = value;
        }
        void set_alloc_frag_id(const alloc_frag_id& value)  {
            m_alloc_frag_id = value;
        }
        void set_alloc_size(const alloc_size& value)  {
            m_alloc_size = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_Fragments::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_Fragments::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const alloc_accnt & value) { set_alloc_accnt(value); }
        void set(const alloc_frag_id & value) { set_alloc_frag_id(value); }
        void set(const alloc_size & value) { set_alloc_size(value); }


        SpdrAllocationNotice_Fragments() {}

        virtual ~SpdrAllocationNotice_Fragments() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_accnt);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(385,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(175,m_alloc_accnt);
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(178,m_alloc_frag_id);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_alloc_size);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,385,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,175,static_cast<string>(m_alloc_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,178,m_alloc_frag_id);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_alloc_size);
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
                    case 172: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 385: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 175: {m_alloc_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 178: {m_alloc_frag_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 181: {m_alloc_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrAllocationNotice_LegPosType {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using firm_position = spiderrock::protobuf::api::firm_position;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        firm_position m_firm_position{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }
        position_type get_position_type() const {
            return m_position_type;
        }
        firm_position get_firm_position() const {
            return m_firm_position;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_firm_position(const firm_position& value)  {
            m_firm_position = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_LegPosType::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_LegPosType::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const ssale_flag & value) { set_ssale_flag(value); }
        void set(const position_type & value) { set_position_type(value); }
        void set(const firm_position & value) { set_firm_position(value); }


        SpdrAllocationNotice_LegPosType() {}

        virtual ~SpdrAllocationNotice_LegPosType() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(395,optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(396,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(397,m_accnt);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(398,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(399,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(400,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(401,m_firm_position);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 395, optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,396,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,397,static_cast<string>(m_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,398,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,399,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,400,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,401,m_firm_position);
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
                    case 395: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 396: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 397: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 398: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 399: {m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 400: {m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 401: {m_firm_position = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrAllocationNotice_OrderLegs {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using mult = spiderrock::protobuf::api::mult;
        using side = spiderrock::protobuf::api::side;
        using leg_id = spiderrock::protobuf::api::leg_id__int64;
        using alt_leg_id = spiderrock::protobuf::api::alt_leg_id;
        using sum_leg_qty = spiderrock::protobuf::api::sum_leg_qty;
        using sum_leg_mny = spiderrock::protobuf::api::sum_leg_mny;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        mult m_mult{};
        side m_side{};
        leg_id m_leg_id{};
        alt_leg_id m_alt_leg_id{};
        sum_leg_qty m_sum_leg_qty{};
        sum_leg_mny m_sum_leg_mny{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        mult get_mult() const {
            return m_mult;
        }
        side get_side() const {
            return m_side;
        }
        leg_id get_leg_id() const {
            return m_leg_id;
        }
        alt_leg_id get_alt_leg_id() const {
            return m_alt_leg_id;
        }
        sum_leg_qty get_sum_leg_qty() const {
            return m_sum_leg_qty;
        }
        sum_leg_mny get_sum_leg_mny() const {
            return m_sum_leg_mny;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_mult(const mult& value)  {
            m_mult = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_leg_id(const leg_id& value)  {
            m_leg_id = value;
        }
        void set_alt_leg_id(const alt_leg_id& value)  {
            m_alt_leg_id = value;
        }
        void set_sum_leg_qty(const sum_leg_qty& value)  {
            m_sum_leg_qty = value;
        }
        void set_sum_leg_mny(const sum_leg_mny& value)  {
            m_sum_leg_mny = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const mult & value) { set_mult(value); }
        void set(const side & value) { set_side(value); }
        void set(const leg_id & value) { set_leg_id(value); }
        void set(const alt_leg_id & value) { set_alt_leg_id(value); }
        void set(const sum_leg_qty & value) { set_sum_leg_qty(value); }
        void set(const sum_leg_mny & value) { set_sum_leg_mny(value); }


        SpdrAllocationNotice_OrderLegs() {}

        virtual ~SpdrAllocationNotice_OrderLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(386,optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(387,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(388,m_mult);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(389,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(390,m_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(391,m_alt_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(392,m_sum_leg_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(393,m_sum_leg_mny);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 386, optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,387,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,388,m_mult);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,389,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,390,m_leg_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,391,static_cast<string>(m_alt_leg_id));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,392,m_sum_leg_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,393,m_sum_leg_mny);
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
                    case 386: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 387: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 388: {m_mult = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 389: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 390: {m_leg_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 391: {m_alt_leg_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 392: {m_sum_leg_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 393: {m_sum_leg_mny = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrAllocationNotice {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAllocationNotice_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using omni_accnt = spiderrock::protobuf::api::omni_accnt;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using mleg_leg_key = spiderrock::protobuf::api::mleg_leg_key;
        using order_side = spiderrock::protobuf::api::order_side;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using notice_state = spiderrock::protobuf::api::notice_state;
        using notice_text = spiderrock::protobuf::api::notice_text;
        using alloc_method = spiderrock::protobuf::api::alloc_method;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using alloc_ex_dest = spiderrock::protobuf::api::alloc_ex_dest;
        using order_shape = spiderrock::protobuf::api::order_shape;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using net_money = spiderrock::protobuf::api::net_money;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using child_orders = spiderrock::protobuf::api::SpdrAllocationNotice_ChildOrders;
        using fragments = spiderrock::protobuf::api::SpdrAllocationNotice_Fragments;
        using leg_pos_type = spiderrock::protobuf::api::SpdrAllocationNotice_LegPosType;
        using order_legs = spiderrock::protobuf::api::SpdrAllocationNotice_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        client_firm m_client_firm{};
        omni_accnt m_omni_accnt{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        mleg_leg_key m_mleg_leg_key{};
        order_side m_order_side{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        notice_state m_notice_state{};
        notice_text m_notice_text{};
        alloc_method m_alloc_method{};
        exec_brkr_code m_exec_brkr_code{};
        alloc_ex_dest m_alloc_ex_dest{};
        order_shape m_order_shape{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        net_money m_net_money{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<child_orders> m_child_orders{};
        std::vector<fragments> m_fragments{};
        std::vector<leg_pos_type> m_leg_pos_type{};
        std::vector<order_legs> m_order_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        omni_accnt get_omni_accnt() const {
            return m_omni_accnt;
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
        notice_state get_notice_state() const {
            return m_notice_state;
        }		
        notice_text get_notice_text() const {
            return m_notice_text;
        }		
        alloc_method get_alloc_method() const {
            return m_alloc_method;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        alloc_ex_dest get_alloc_ex_dest() const {
            return m_alloc_ex_dest;
        }		
        order_shape get_order_shape() const {
            return m_order_shape;
        }		
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        net_money get_net_money() const {
            return m_net_money;
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
        const std::vector<leg_pos_type>& get_leg_pos_type_list() const {
            return m_leg_pos_type;
        }
        const leg_pos_type& get_leg_pos_type(const int i) const {
            return m_leg_pos_type.at(i);
        }
        const std::vector<order_legs>& get_order_legs_list() const {
            return m_order_legs;
        }
        const order_legs& get_order_legs(const int i) const {
            return m_order_legs.at(i);
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_omni_accnt(const omni_accnt& value)  {
            m_omni_accnt = value;
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
        void set_notice_state(const notice_state& value)  {
            m_notice_state = value;
        }
        void set_notice_text(const notice_text& value)  {
            m_notice_text = value;
        }
        void set_alloc_method(const alloc_method& value)  {
            m_alloc_method = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_alloc_ex_dest(const alloc_ex_dest& value)  {
            m_alloc_ex_dest = value;
        }
        void set_order_shape(const order_shape& value)  {
            m_order_shape = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_net_money(const net_money& value)  {
            m_net_money = value;
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
        void set_leg_pos_type_list(const std::vector<leg_pos_type>& list)  {
            m_leg_pos_type = list;
        }
        void add_leg_pos_type(const leg_pos_type& item) {
            m_leg_pos_type.emplace_back(item);
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAllocationNotice::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const omni_accnt & value) {
            set_omni_accnt(value);
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
        void set(const notice_state & value) {
            set_notice_state(value);
        }
        void set(const notice_text & value) {
            set_notice_text(value);
        }
        void set(const alloc_method & value) {
            set_alloc_method(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const alloc_ex_dest & value) {
            set_alloc_ex_dest(value);
        }
        void set(const order_shape & value) {
            set_order_shape(value);
        }
        void set(const cum_fill_quantity & value) {
            set_cum_fill_quantity(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const net_money & value) {
            set_net_money(value);
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
        void set(const leg_pos_type & value) {
            add_leg_pos_type(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const SpdrAllocationNotice & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_client_firm);
            set(value.m_omni_accnt);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_mleg_leg_key);
            set(value.m_order_side);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_notice_state);
            set(value.m_notice_text);
            set(value.m_alloc_method);
            set(value.m_exec_brkr_code);
            set(value.m_alloc_ex_dest);
            set(value.m_order_shape);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_price);
            set(value.m_net_money);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_child_orders_list(value.m_child_orders);set_fragments_list(value.m_fragments);set_leg_pos_type_list(value.m_leg_pos_type);set_order_legs_list(value.m_order_legs);
        }

        SpdrAllocationNotice() {
            m__meta.set_message_type("SpdrAllocationNotice");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3695, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3695, length);
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
             *this = SpdrAllocationNotice{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeOmniAccnt() const {
            return !(m_omni_accnt.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeMlegLegKey() const {
            return !(m_mleg_leg_key.empty());
        }
        bool IncludeNoticeText() const {
            return !(m_notice_text.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeAllocExDest() const {
            return !(m_alloc_ex_dest.empty());
        }
        bool IncludeCumFillQuantity() const {
            return !(m_cum_fill_quantity == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeNetMoney() const {
            return !(m_net_money == 0.0);
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
        bool IncludeLegPosType() const {
            return (!m_leg_pos_type.empty());
        }
        bool IncludeOrderLegs() const {
            return (!m_order_legs.empty());
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_client_firm);
            }
            if ( IncludeOmniAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_omni_accnt);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(109, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeMlegLegKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_mleg_leg_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeState>(m_notice_state)));
            if ( IncludeNoticeText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_notice_text);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllocMethod>(m_alloc_method)));
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(402,m_exec_brkr_code);
            }
            if ( IncludeAllocExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(403,m_alloc_ex_dest);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_order_shape)));
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_avg_fill_price);
            }
            if ( IncludeNetMoney()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_net_money);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(376,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(379,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(382, m_timestamp);
            }
            if ( IncludeChildOrders()) {
                for (auto& item : m_child_orders) {
					totalSize += SRProtobufCPP::TagCodec::Size(148, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeFragments()) {
                for (auto& item : m_fragments) {
					totalSize += SRProtobufCPP::TagCodec::Size(169, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeLegPosType()) {
                for (auto& item : m_leg_pos_type) {
					totalSize += SRProtobufCPP::TagCodec::Size(394, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(184, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_client_firm));
            }
            if ( IncludeOmniAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_omni_accnt));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 109, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeMlegLegKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_mleg_leg_key));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeState>(m_notice_state)));
            if ( IncludeNoticeText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_notice_text));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllocMethod>(m_alloc_method)));
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,402,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeAllocExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,403,static_cast<string>(m_alloc_ex_dest));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_order_shape)));
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_avg_fill_price);
            }
            if ( IncludeNetMoney()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_net_money);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,376,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,379,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 382, m_timestamp);
            }
            if ( IncludeChildOrders()) {
                for (auto& item : m_child_orders) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 148, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeFragments()) {
                for (auto& item : m_fragments) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 169, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeLegPosType()) {
                for (auto& item : m_leg_pos_type) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 394, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 184, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_omni_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                            m_mleg_leg_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_notice_state = static_cast<spiderrock::protobuf::api::NoticeState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_notice_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_alloc_method = static_cast<spiderrock::protobuf::api::AllocMethod>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 402: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alloc_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_net_money = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 379: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            child_orders item_child_orders;
                            item_child_orders.Decode(pos, pos+length);  
                            m_child_orders.emplace_back(item_child_orders);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            fragments item_fragments;
                            item_fragments.Decode(pos, pos+length);  
                            m_fragments.emplace_back(item_fragments);
                        }
                        break;
                    }
                    case 394: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            leg_pos_type item_leg_pos_type;
                            item_leg_pos_type.Decode(pos, pos+length);  
                            m_leg_pos_type.emplace_back(item_leg_pos_type);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            order_legs item_order_legs;
                            item_order_legs.Decode(pos, pos+length);  
                            m_order_legs.emplace_back(item_order_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::_meta>() const { return SpdrAllocationNotice::_meta{ m__meta}; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::pkey>() const { return SpdrAllocationNotice::pkey{ m_pkey}; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::trade_date>() const { return SpdrAllocationNotice::trade_date{ m_trade_date}; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::omni_accnt>() const { return m_omni_accnt; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::sec_key>() const { return SpdrAllocationNotice::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::mleg_leg_key>() const { return m_mleg_leg_key; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::notice_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeState>( m_notice_state)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::notice_text>() const { return m_notice_text; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::alloc_method>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AllocMethod>( m_alloc_method)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::alloc_ex_dest>() const { return m_alloc_ex_dest; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::order_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_order_shape)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::net_money>() const { return m_net_money; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::child_orders>(int i) const { return SpdrAllocationNotice::child_orders{ get_child_orders(i)}; }
    template<> inline int SpdrAllocationNotice::count<SpdrAllocationNotice::child_orders>() const { return static_cast<int>( m_child_orders.size()); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::fragments>(int i) const { return SpdrAllocationNotice::fragments{ get_fragments(i)}; }
    template<> inline int SpdrAllocationNotice::count<SpdrAllocationNotice::fragments>() const { return static_cast<int>( m_fragments.size()); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::leg_pos_type>(int i) const { return SpdrAllocationNotice::leg_pos_type{ get_leg_pos_type(i)}; }
    template<> inline int SpdrAllocationNotice::count<SpdrAllocationNotice::leg_pos_type>() const { return static_cast<int>( m_leg_pos_type.size()); }
    template<> inline const auto SpdrAllocationNotice::get<SpdrAllocationNotice::order_legs>(int i) const { return SpdrAllocationNotice::order_legs{ get_order_legs(i)}; }
    template<> inline int SpdrAllocationNotice::count<SpdrAllocationNotice::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto SpdrAllocationNotice_PKey::get<SpdrAllocationNotice_PKey::alloc_number>() const { return m_alloc_number; }
    
    template<> inline const auto SpdrAllocationNotice_ChildOrders::get<SpdrAllocationNotice_ChildOrders::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto SpdrAllocationNotice_ChildOrders::get<SpdrAllocationNotice_ChildOrders::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrAllocationNotice_ChildOrders::get<SpdrAllocationNotice_ChildOrders::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrAllocationNotice_ChildOrders::get<SpdrAllocationNotice_ChildOrders::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrAllocationNotice_ChildOrders::get<SpdrAllocationNotice_ChildOrders::street_cl_ord_id>() const { return m_street_cl_ord_id; }
    template<> inline const auto SpdrAllocationNotice_ChildOrders::get<SpdrAllocationNotice_ChildOrders::street_order_id>() const { return m_street_order_id; }
    
    template<> inline const auto SpdrAllocationNotice_Fragments::get<SpdrAllocationNotice_Fragments::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrAllocationNotice_Fragments::get<SpdrAllocationNotice_Fragments::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrAllocationNotice_Fragments::get<SpdrAllocationNotice_Fragments::alloc_accnt>() const { return m_alloc_accnt; }
    template<> inline const auto SpdrAllocationNotice_Fragments::get<SpdrAllocationNotice_Fragments::alloc_frag_id>() const { return m_alloc_frag_id; }
    template<> inline const auto SpdrAllocationNotice_Fragments::get<SpdrAllocationNotice_Fragments::alloc_size>() const { return m_alloc_size; }
    
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::sec_key>() const { return SpdrAllocationNotice_LegPosType::sec_key{m_sec_key}; }
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag));}
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type));}
    template<> inline const auto SpdrAllocationNotice_LegPosType::get<SpdrAllocationNotice_LegPosType::firm_position>() const { return m_firm_position; }
    
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::sec_key>() const { return SpdrAllocationNotice_OrderLegs::sec_key{m_sec_key}; }
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::mult>() const { return m_mult; }
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::leg_id>() const { return m_leg_id; }
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::alt_leg_id>() const { return m_alt_leg_id; }
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::sum_leg_qty>() const { return m_sum_leg_qty; }
    template<> inline const auto SpdrAllocationNotice_OrderLegs::get<SpdrAllocationNotice_OrderLegs::sum_leg_mny>() const { return m_sum_leg_mny; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAllocationNotice_PKey& m) {
        o << "\"alloc_number\":" << m.get<SpdrAllocationNotice_PKey::alloc_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAllocationNotice_ChildOrders& m) {
        o << "\"cl_ord_id\":" << m.get<SpdrAllocationNotice_ChildOrders::cl_ord_id>();
        o << ",\"order_size\":" << m.get<SpdrAllocationNotice_ChildOrders::order_size>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrAllocationNotice_ChildOrders::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrAllocationNotice_ChildOrders::avg_fill_price>();
        o << ",\"street_cl_ord_id\":\"" << m.get<SpdrAllocationNotice_ChildOrders::street_cl_ord_id>() << "\"";
        o << ",\"street_order_id\":\"" << m.get<SpdrAllocationNotice_ChildOrders::street_order_id>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAllocationNotice_Fragments& m) {
        o << "\"accnt\":\"" << m.get<SpdrAllocationNotice_Fragments::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrAllocationNotice_Fragments::client_firm>() << "\"";
        o << ",\"alloc_accnt\":\"" << m.get<SpdrAllocationNotice_Fragments::alloc_accnt>() << "\"";
        o << ",\"alloc_frag_id\":" << m.get<SpdrAllocationNotice_Fragments::alloc_frag_id>();
        o << ",\"alloc_size\":" << m.get<SpdrAllocationNotice_Fragments::alloc_size>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAllocationNotice_LegPosType& m) {
        o << "\"sec_key\":{" << m.get<SpdrAllocationNotice_LegPosType::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAllocationNotice_LegPosType::sec_type>();
        o << ",\"accnt\":\"" << m.get<SpdrAllocationNotice_LegPosType::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrAllocationNotice_LegPosType::client_firm>() << "\"";
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrAllocationNotice_LegPosType::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrAllocationNotice_LegPosType::position_type>();
        o << ",\"firm_position\":" << m.get<SpdrAllocationNotice_LegPosType::firm_position>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAllocationNotice_OrderLegs& m) {
        o << "\"sec_key\":{" << m.get<SpdrAllocationNotice_OrderLegs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAllocationNotice_OrderLegs::sec_type>();
        o << ",\"mult\":" << m.get<SpdrAllocationNotice_OrderLegs::mult>();
        o << ",\"side\":" << (int64_t)m.get<SpdrAllocationNotice_OrderLegs::side>();
        o << ",\"leg_id\":" << m.get<SpdrAllocationNotice_OrderLegs::leg_id>();
        o << ",\"alt_leg_id\":\"" << m.get<SpdrAllocationNotice_OrderLegs::alt_leg_id>() << "\"";
        o << ",\"sum_leg_qty\":" << m.get<SpdrAllocationNotice_OrderLegs::sum_leg_qty>();
        o << ",\"sum_leg_mny\":" << m.get<SpdrAllocationNotice_OrderLegs::sum_leg_mny>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAllocationNotice& m) {
        o << "\"_meta\":{" << m.get<SpdrAllocationNotice::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAllocationNotice::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<SpdrAllocationNotice::trade_date>() << "}";
        o << ",\"client_firm\":\"" << m.get<SpdrAllocationNotice::client_firm>() << "\"";
        o << ",\"omni_accnt\":\"" << m.get<SpdrAllocationNotice::omni_accnt>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrAllocationNotice::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAllocationNotice::sec_type>();
        o << ",\"mleg_leg_key\":\"" << m.get<SpdrAllocationNotice::mleg_leg_key>() << "\"";
        o << ",\"order_side\":" << (int64_t)m.get<SpdrAllocationNotice::order_side>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrAllocationNotice::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrAllocationNotice::position_type>();
        o << ",\"notice_state\":" << (int64_t)m.get<SpdrAllocationNotice::notice_state>();
        o << ",\"notice_text\":\"" << m.get<SpdrAllocationNotice::notice_text>() << "\"";
        o << ",\"alloc_method\":" << (int64_t)m.get<SpdrAllocationNotice::alloc_method>();
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrAllocationNotice::exec_brkr_code>() << "\"";
        o << ",\"alloc_ex_dest\":\"" << m.get<SpdrAllocationNotice::alloc_ex_dest>() << "\"";
        o << ",\"order_shape\":" << (int64_t)m.get<SpdrAllocationNotice::order_shape>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrAllocationNotice::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrAllocationNotice::avg_fill_price>();
        o << ",\"net_money\":" << m.get<SpdrAllocationNotice::net_money>();
        o << ",\"modified_by\":\"" << m.get<SpdrAllocationNotice::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrAllocationNotice::modified_in>();
        {
            std::time_t tt = m.get<SpdrAllocationNotice::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"child_orders\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAllocationNotice::child_orders>(); ++i) {
                o << delim << m.get<SpdrAllocationNotice::child_orders>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"fragments\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAllocationNotice::fragments>(); ++i) {
                o << delim << m.get<SpdrAllocationNotice::fragments>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"leg_pos_type\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAllocationNotice::leg_pos_type>(); ++i) {
                o << delim << m.get<SpdrAllocationNotice::leg_pos_type>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAllocationNotice::order_legs>(); ++i) {
                o << delim << m.get<SpdrAllocationNotice::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}