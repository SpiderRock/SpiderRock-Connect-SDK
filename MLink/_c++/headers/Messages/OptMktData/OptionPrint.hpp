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

    #ifndef _prt_exch__OptExch__GUARD__
    #define _prt_exch__OptExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_prt_exch__OptExch__GUARD__

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

    #ifndef _prt_type__PrtType__GUARD__
    #define _prt_type__PrtType__GUARD__
    DECL_STRONG_TYPE(prt_type__PrtType, spiderrock::protobuf::api::PrtType);
    #endif//_prt_type__PrtType__GUARD__

    #ifndef _prt_orders__GUARD__
    #define _prt_orders__GUARD__
    DECL_STRONG_TYPE(prt_orders, uint32);
    #endif//_prt_orders__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _cxl_volume__GUARD__
    #define _cxl_volume__GUARD__
    DECL_STRONG_TYPE(cxl_volume, int32);
    #endif//_cxl_volume__GUARD__

    #ifndef _bid_count__uint32__GUARD__
    #define _bid_count__uint32__GUARD__
    DECL_STRONG_TYPE(bid_count__uint32, uint32);
    #endif//_bid_count__uint32__GUARD__

    #ifndef _ask_count__uint32__GUARD__
    #define _ask_count__uint32__GUARD__
    DECL_STRONG_TYPE(ask_count__uint32, uint32);
    #endif//_ask_count__uint32__GUARD__

    #ifndef _bid_volume__GUARD__
    #define _bid_volume__GUARD__
    DECL_STRONG_TYPE(bid_volume, int32);
    #endif//_bid_volume__GUARD__

    #ifndef _ask_volume__GUARD__
    #define _ask_volume__GUARD__
    DECL_STRONG_TYPE(ask_volume, int32);
    #endif//_ask_volume__GUARD__

    #ifndef _ebid__GUARD__
    #define _ebid__GUARD__
    DECL_STRONG_TYPE(ebid, float);
    #endif//_ebid__GUARD__

    #ifndef _eask__GUARD__
    #define _eask__GUARD__
    DECL_STRONG_TYPE(eask, float);
    #endif//_eask__GUARD__

    #ifndef _ebsz__GUARD__
    #define _ebsz__GUARD__
    DECL_STRONG_TYPE(ebsz, int32);
    #endif//_ebsz__GUARD__

    #ifndef _easz__GUARD__
    #define _easz__GUARD__
    DECL_STRONG_TYPE(easz, int32);
    #endif//_easz__GUARD__

    #ifndef _eage__GUARD__
    #define _eage__GUARD__
    DECL_STRONG_TYPE(eage, float);
    #endif//_eage__GUARD__

    #ifndef _bid_price__float__GUARD__
    #define _bid_price__float__GUARD__
    DECL_STRONG_TYPE(bid_price__float, float);
    #endif//_bid_price__float__GUARD__

    #ifndef _ask_price__float__GUARD__
    #define _ask_price__float__GUARD__
    DECL_STRONG_TYPE(ask_price__float, float);
    #endif//_ask_price__float__GUARD__

    #ifndef _bid_price2__float__GUARD__
    #define _bid_price2__float__GUARD__
    DECL_STRONG_TYPE(bid_price2__float, float);
    #endif//_bid_price2__float__GUARD__

    #ifndef _ask_price2__float__GUARD__
    #define _ask_price2__float__GUARD__
    DECL_STRONG_TYPE(ask_price2__float, float);
    #endif//_ask_price2__float__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _cum_bid_size__GUARD__
    #define _cum_bid_size__GUARD__
    DECL_STRONG_TYPE(cum_bid_size, int32);
    #endif//_cum_bid_size__GUARD__

    #ifndef _cum_ask_size__GUARD__
    #define _cum_ask_size__GUARD__
    DECL_STRONG_TYPE(cum_ask_size, int32);
    #endif//_cum_ask_size__GUARD__

    #ifndef _cum_bid_size2__GUARD__
    #define _cum_bid_size2__GUARD__
    DECL_STRONG_TYPE(cum_bid_size2, int32);
    #endif//_cum_bid_size2__GUARD__

    #ifndef _cum_ask_size2__GUARD__
    #define _cum_ask_size2__GUARD__
    DECL_STRONG_TYPE(cum_ask_size2, int32);
    #endif//_cum_ask_size2__GUARD__

    #ifndef _bid_mask__GUARD__
    #define _bid_mask__GUARD__
    DECL_STRONG_TYPE(bid_mask, uint32);
    #endif//_bid_mask__GUARD__

    #ifndef _ask_mask__GUARD__
    #define _ask_mask__GUARD__
    DECL_STRONG_TYPE(ask_mask, uint32);
    #endif//_ask_mask__GUARD__

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

    #ifndef _oq_net_timestamp__GUARD__
    #define _oq_net_timestamp__GUARD__
    DECL_STRONG_TYPE(oq_net_timestamp, int64);
    #endif//_oq_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionPrint_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrint_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrint_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionPrint_PKey() {}

        virtual ~OptionPrint_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionPrint {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPrint_PKey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__OptExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__float;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using prt_orders = spiderrock::protobuf::api::prt_orders;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using cxl_volume = spiderrock::protobuf::api::cxl_volume;
        using bid_count = spiderrock::protobuf::api::bid_count__uint32;
        using ask_count = spiderrock::protobuf::api::ask_count__uint32;
        using bid_volume = spiderrock::protobuf::api::bid_volume;
        using ask_volume = spiderrock::protobuf::api::ask_volume;
        using ebid = spiderrock::protobuf::api::ebid;
        using eask = spiderrock::protobuf::api::eask;
        using ebsz = spiderrock::protobuf::api::ebsz;
        using easz = spiderrock::protobuf::api::easz;
        using eage = spiderrock::protobuf::api::eage;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__float;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__float;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using cum_bid_size = spiderrock::protobuf::api::cum_bid_size;
        using cum_ask_size = spiderrock::protobuf::api::cum_ask_size;
        using cum_bid_size2 = spiderrock::protobuf::api::cum_bid_size2;
        using cum_ask_size2 = spiderrock::protobuf::api::cum_ask_size2;
        using bid_mask = spiderrock::protobuf::api::bid_mask;
        using ask_mask = spiderrock::protobuf::api::ask_mask;
        using prt_side = spiderrock::protobuf::api::prt_side__PrtSide;
        using prt_timestamp = spiderrock::protobuf::api::prt_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using oq_net_timestamp = spiderrock::protobuf::api::oq_net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        prt_exch m_prt_exch{};
        prt_size m_prt_size{};
        prt_price m_prt_price{};
        prt_cluster_num m_prt_cluster_num{};
        prt_cluster_size m_prt_cluster_size{};
        prt_type m_prt_type{};
        prt_orders m_prt_orders{};
        prt_volume m_prt_volume{};
        cxl_volume m_cxl_volume{};
        bid_count m_bid_count{};
        ask_count m_ask_count{};
        bid_volume m_bid_volume{};
        ask_volume m_ask_volume{};
        ebid m_ebid{};
        eask m_eask{};
        ebsz m_ebsz{};
        easz m_easz{};
        eage m_eage{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_price2 m_bid_price2{};
        ask_price2 m_ask_price2{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        cum_bid_size m_cum_bid_size{};
        cum_ask_size m_cum_ask_size{};
        cum_bid_size2 m_cum_bid_size2{};
        cum_ask_size2 m_cum_ask_size2{};
        bid_mask m_bid_mask{};
        ask_mask m_ask_mask{};
        prt_side m_prt_side{};
        prt_timestamp m_prt_timestamp{};
        net_timestamp m_net_timestamp{};
        oq_net_timestamp m_oq_net_timestamp{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
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
        prt_type get_prt_type() const {
            return m_prt_type;
        }		
        prt_orders get_prt_orders() const {
            return m_prt_orders;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        cxl_volume get_cxl_volume() const {
            return m_cxl_volume;
        }		
        bid_count get_bid_count() const {
            return m_bid_count;
        }		
        ask_count get_ask_count() const {
            return m_ask_count;
        }		
        bid_volume get_bid_volume() const {
            return m_bid_volume;
        }		
        ask_volume get_ask_volume() const {
            return m_ask_volume;
        }		
        ebid get_ebid() const {
            return m_ebid;
        }		
        eask get_eask() const {
            return m_eask;
        }		
        ebsz get_ebsz() const {
            return m_ebsz;
        }		
        easz get_easz() const {
            return m_easz;
        }		
        eage get_eage() const {
            return m_eage;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        bid_price2 get_bid_price2() const {
            return m_bid_price2;
        }		
        ask_price2 get_ask_price2() const {
            return m_ask_price2;
        }		
        bid_size get_bid_size() const {
            return m_bid_size;
        }		
        ask_size get_ask_size() const {
            return m_ask_size;
        }		
        cum_bid_size get_cum_bid_size() const {
            return m_cum_bid_size;
        }		
        cum_ask_size get_cum_ask_size() const {
            return m_cum_ask_size;
        }		
        cum_bid_size2 get_cum_bid_size2() const {
            return m_cum_bid_size2;
        }		
        cum_ask_size2 get_cum_ask_size2() const {
            return m_cum_ask_size2;
        }		
        bid_mask get_bid_mask() const {
            return m_bid_mask;
        }		
        ask_mask get_ask_mask() const {
            return m_ask_mask;
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
        oq_net_timestamp get_oq_net_timestamp() const {
            return m_oq_net_timestamp;
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
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_prt_orders(const prt_orders& value)  {
            m_prt_orders = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_cxl_volume(const cxl_volume& value)  {
            m_cxl_volume = value;
        }
        void set_bid_count(const bid_count& value)  {
            m_bid_count = value;
        }
        void set_ask_count(const ask_count& value)  {
            m_ask_count = value;
        }
        void set_bid_volume(const bid_volume& value)  {
            m_bid_volume = value;
        }
        void set_ask_volume(const ask_volume& value)  {
            m_ask_volume = value;
        }
        void set_ebid(const ebid& value)  {
            m_ebid = value;
        }
        void set_eask(const eask& value)  {
            m_eask = value;
        }
        void set_ebsz(const ebsz& value)  {
            m_ebsz = value;
        }
        void set_easz(const easz& value)  {
            m_easz = value;
        }
        void set_eage(const eage& value)  {
            m_eage = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_bid_price2(const bid_price2& value)  {
            m_bid_price2 = value;
        }
        void set_ask_price2(const ask_price2& value)  {
            m_ask_price2 = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_cum_bid_size(const cum_bid_size& value)  {
            m_cum_bid_size = value;
        }
        void set_cum_ask_size(const cum_ask_size& value)  {
            m_cum_ask_size = value;
        }
        void set_cum_bid_size2(const cum_bid_size2& value)  {
            m_cum_bid_size2 = value;
        }
        void set_cum_ask_size2(const cum_ask_size2& value)  {
            m_cum_ask_size2 = value;
        }
        void set_bid_mask(const bid_mask& value)  {
            m_bid_mask = value;
        }
        void set_ask_mask(const ask_mask& value)  {
            m_ask_mask = value;
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
        void set_oq_net_timestamp(const oq_net_timestamp& value)  {
            m_oq_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrint::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
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
        void set(const prt_type & value) {
            set_prt_type(value);
        }
        void set(const prt_orders & value) {
            set_prt_orders(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const cxl_volume & value) {
            set_cxl_volume(value);
        }
        void set(const bid_count & value) {
            set_bid_count(value);
        }
        void set(const ask_count & value) {
            set_ask_count(value);
        }
        void set(const bid_volume & value) {
            set_bid_volume(value);
        }
        void set(const ask_volume & value) {
            set_ask_volume(value);
        }
        void set(const ebid & value) {
            set_ebid(value);
        }
        void set(const eask & value) {
            set_eask(value);
        }
        void set(const ebsz & value) {
            set_ebsz(value);
        }
        void set(const easz & value) {
            set_easz(value);
        }
        void set(const eage & value) {
            set_eage(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const bid_price2 & value) {
            set_bid_price2(value);
        }
        void set(const ask_price2 & value) {
            set_ask_price2(value);
        }
        void set(const bid_size & value) {
            set_bid_size(value);
        }
        void set(const ask_size & value) {
            set_ask_size(value);
        }
        void set(const cum_bid_size & value) {
            set_cum_bid_size(value);
        }
        void set(const cum_ask_size & value) {
            set_cum_ask_size(value);
        }
        void set(const cum_bid_size2 & value) {
            set_cum_bid_size2(value);
        }
        void set(const cum_ask_size2 & value) {
            set_cum_ask_size2(value);
        }
        void set(const bid_mask & value) {
            set_bid_mask(value);
        }
        void set(const ask_mask & value) {
            set_ask_mask(value);
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
        void set(const oq_net_timestamp & value) {
            set_oq_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionPrint & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_type);
            set(value.m_prt_orders);
            set(value.m_prt_volume);
            set(value.m_cxl_volume);
            set(value.m_bid_count);
            set(value.m_ask_count);
            set(value.m_bid_volume);
            set(value.m_ask_volume);
            set(value.m_ebid);
            set(value.m_eask);
            set(value.m_ebsz);
            set(value.m_easz);
            set(value.m_eage);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_price2);
            set(value.m_ask_price2);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_cum_bid_size);
            set(value.m_cum_ask_size);
            set(value.m_cum_bid_size2);
            set(value.m_cum_ask_size2);
            set(value.m_bid_mask);
            set(value.m_ask_mask);
            set(value.m_prt_side);
            set(value.m_prt_timestamp);
            set(value.m_net_timestamp);
            set(value.m_oq_net_timestamp);
            set(value.m_timestamp);
        }

        OptionPrint() {
            m__meta.set_message_type("OptionPrint");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2800, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2800, length);
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
             *this = OptionPrint{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
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
        bool IncludePrtOrders() const {
            return !(m_prt_orders == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeCxlVolume() const {
            return !(m_cxl_volume == 0);
        }
        bool IncludeBidCount() const {
            return !(m_bid_count == 0);
        }
        bool IncludeAskCount() const {
            return !(m_ask_count == 0);
        }
        bool IncludeBidVolume() const {
            return !(m_bid_volume == 0);
        }
        bool IncludeAskVolume() const {
            return !(m_ask_volume == 0);
        }
        bool IncludeEbid() const {
            return !(m_ebid == 0.0);
        }
        bool IncludeEask() const {
            return !(m_eask == 0.0);
        }
        bool IncludeEbsz() const {
            return !(m_ebsz == 0);
        }
        bool IncludeEasz() const {
            return !(m_easz == 0);
        }
        bool IncludeEage() const {
            return !(m_eage == 0.0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeBidPrice2() const {
            return !(m_bid_price2 == 0.0);
        }
        bool IncludeAskPrice2() const {
            return !(m_ask_price2 == 0.0);
        }
        bool IncludeBidSize() const {
            return !(m_bid_size == 0);
        }
        bool IncludeAskSize() const {
            return !(m_ask_size == 0);
        }
        bool IncludeCumBidSize() const {
            return !(m_cum_bid_size == 0);
        }
        bool IncludeCumAskSize() const {
            return !(m_cum_ask_size == 0);
        }
        bool IncludeCumBidSize2() const {
            return !(m_cum_bid_size2 == 0);
        }
        bool IncludeCumAskSize2() const {
            return !(m_cum_ask_size2 == 0);
        }
        bool IncludeBidMask() const {
            return !(m_bid_mask == 0);
        }
        bool IncludeAskMask() const {
            return !(m_ask_mask == 0);
        }
        bool IncludePrtTimestamp() const {
            return !(m_prt_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeOqNetTimestamp() const {
            return !(m_oq_net_timestamp == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_prt_price);
            }
            if ( IncludePrtClusterNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_prt_cluster_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(118,m_prt_orders);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_volume);
            }
            if ( IncludeCxlVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_cxl_volume);
            }
            if ( IncludeBidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(127,m_bid_count);
            }
            if ( IncludeAskCount()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(130,m_ask_count);
            }
            if ( IncludeBidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_bid_volume);
            }
            if ( IncludeAskVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_ask_volume);
            }
            if ( IncludeEbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_ebid);
            }
            if ( IncludeEask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_eask);
            }
            if ( IncludeEbsz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_ebsz);
            }
            if ( IncludeEasz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_easz);
            }
            if ( IncludeEage()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_eage);
            }
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ask_price);
            }
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_ask_price2);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_ask_size);
            }
            if ( IncludeCumBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_cum_bid_size);
            }
            if ( IncludeCumAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_cum_ask_size);
            }
            if ( IncludeCumBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_cum_bid_size2);
            }
            if ( IncludeCumAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_cum_ask_size2);
            }
            if ( IncludeBidMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(184,m_bid_mask);
            }
            if ( IncludeAskMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(187,m_ask_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(193,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(196,m_net_timestamp);
            }
            if ( IncludeOqNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(199,m_oq_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(202, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_prt_price);
            }
            if ( IncludePrtClusterNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_prt_cluster_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,118,m_prt_orders);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_volume);
            }
            if ( IncludeCxlVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_cxl_volume);
            }
            if ( IncludeBidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,127,m_bid_count);
            }
            if ( IncludeAskCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,130,m_ask_count);
            }
            if ( IncludeBidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_bid_volume);
            }
            if ( IncludeAskVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_ask_volume);
            }
            if ( IncludeEbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_ebid);
            }
            if ( IncludeEask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_eask);
            }
            if ( IncludeEbsz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_ebsz);
            }
            if ( IncludeEasz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_easz);
            }
            if ( IncludeEage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_eage);
            }
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ask_price);
            }
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_ask_price2);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_ask_size);
            }
            if ( IncludeCumBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_cum_bid_size);
            }
            if ( IncludeCumAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_cum_ask_size);
            }
            if ( IncludeCumBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_cum_bid_size2);
            }
            if ( IncludeCumAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_cum_ask_size2);
            }
            if ( IncludeBidMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,184,m_bid_mask);
            }
            if ( IncludeAskMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,187,m_ask_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,193,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,196,m_net_timestamp);
            }
            if ( IncludeOqNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,199,m_oq_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 202, m_timestamp);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cxl_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_count = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_count = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ebid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ebsz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_easz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eage = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_oq_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 202: {
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

    template<> inline const auto OptionPrint::get<OptionPrint::_meta>() const { return OptionPrint::_meta{ m__meta}; }
    template<> inline const auto OptionPrint::get<OptionPrint::pkey>() const { return OptionPrint::pkey{ m_pkey}; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_prt_exch)); }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_size>() const { return m_prt_size; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_price>() const { return m_prt_price; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_prt_type)); }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_orders>() const { return m_prt_orders; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto OptionPrint::get<OptionPrint::cxl_volume>() const { return m_cxl_volume; }
    template<> inline const auto OptionPrint::get<OptionPrint::bid_count>() const { return m_bid_count; }
    template<> inline const auto OptionPrint::get<OptionPrint::ask_count>() const { return m_ask_count; }
    template<> inline const auto OptionPrint::get<OptionPrint::bid_volume>() const { return m_bid_volume; }
    template<> inline const auto OptionPrint::get<OptionPrint::ask_volume>() const { return m_ask_volume; }
    template<> inline const auto OptionPrint::get<OptionPrint::ebid>() const { return m_ebid; }
    template<> inline const auto OptionPrint::get<OptionPrint::eask>() const { return m_eask; }
    template<> inline const auto OptionPrint::get<OptionPrint::ebsz>() const { return m_ebsz; }
    template<> inline const auto OptionPrint::get<OptionPrint::easz>() const { return m_easz; }
    template<> inline const auto OptionPrint::get<OptionPrint::eage>() const { return m_eage; }
    template<> inline const auto OptionPrint::get<OptionPrint::bid_price>() const { return m_bid_price; }
    template<> inline const auto OptionPrint::get<OptionPrint::ask_price>() const { return m_ask_price; }
    template<> inline const auto OptionPrint::get<OptionPrint::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto OptionPrint::get<OptionPrint::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto OptionPrint::get<OptionPrint::bid_size>() const { return m_bid_size; }
    template<> inline const auto OptionPrint::get<OptionPrint::ask_size>() const { return m_ask_size; }
    template<> inline const auto OptionPrint::get<OptionPrint::cum_bid_size>() const { return m_cum_bid_size; }
    template<> inline const auto OptionPrint::get<OptionPrint::cum_ask_size>() const { return m_cum_ask_size; }
    template<> inline const auto OptionPrint::get<OptionPrint::cum_bid_size2>() const { return m_cum_bid_size2; }
    template<> inline const auto OptionPrint::get<OptionPrint::cum_ask_size2>() const { return m_cum_ask_size2; }
    template<> inline const auto OptionPrint::get<OptionPrint::bid_mask>() const { return m_bid_mask; }
    template<> inline const auto OptionPrint::get<OptionPrint::ask_mask>() const { return m_ask_mask; }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto OptionPrint::get<OptionPrint::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto OptionPrint::get<OptionPrint::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionPrint::get<OptionPrint::oq_net_timestamp>() const { return m_oq_net_timestamp; }
    template<> inline const auto OptionPrint::get<OptionPrint::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionPrint_PKey::get<OptionPrint_PKey::okey>() const { return OptionPrint_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPrint_PKey& m) {
        o << "\"okey\":{" << m.get<OptionPrint_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPrint& m) {
        o << "\"_meta\":{" << m.get<OptionPrint::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPrint::pkey>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<OptionPrint::prt_exch>();
        o << ",\"prt_size\":" << m.get<OptionPrint::prt_size>();
        o << ",\"prt_price\":" << m.get<OptionPrint::prt_price>();
        o << ",\"prt_cluster_num\":" << m.get<OptionPrint::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<OptionPrint::prt_cluster_size>();
        o << ",\"prt_type\":" << (int64_t)m.get<OptionPrint::prt_type>();
        o << ",\"prt_orders\":" << m.get<OptionPrint::prt_orders>();
        o << ",\"prt_volume\":" << m.get<OptionPrint::prt_volume>();
        o << ",\"cxl_volume\":" << m.get<OptionPrint::cxl_volume>();
        o << ",\"bid_count\":" << m.get<OptionPrint::bid_count>();
        o << ",\"ask_count\":" << m.get<OptionPrint::ask_count>();
        o << ",\"bid_volume\":" << m.get<OptionPrint::bid_volume>();
        o << ",\"ask_volume\":" << m.get<OptionPrint::ask_volume>();
        o << ",\"ebid\":" << m.get<OptionPrint::ebid>();
        o << ",\"eask\":" << m.get<OptionPrint::eask>();
        o << ",\"ebsz\":" << m.get<OptionPrint::ebsz>();
        o << ",\"easz\":" << m.get<OptionPrint::easz>();
        o << ",\"eage\":" << m.get<OptionPrint::eage>();
        o << ",\"bid_price\":" << m.get<OptionPrint::bid_price>();
        o << ",\"ask_price\":" << m.get<OptionPrint::ask_price>();
        o << ",\"bid_price2\":" << m.get<OptionPrint::bid_price2>();
        o << ",\"ask_price2\":" << m.get<OptionPrint::ask_price2>();
        o << ",\"bid_size\":" << m.get<OptionPrint::bid_size>();
        o << ",\"ask_size\":" << m.get<OptionPrint::ask_size>();
        o << ",\"cum_bid_size\":" << m.get<OptionPrint::cum_bid_size>();
        o << ",\"cum_ask_size\":" << m.get<OptionPrint::cum_ask_size>();
        o << ",\"cum_bid_size2\":" << m.get<OptionPrint::cum_bid_size2>();
        o << ",\"cum_ask_size2\":" << m.get<OptionPrint::cum_ask_size2>();
        o << ",\"bid_mask\":" << m.get<OptionPrint::bid_mask>();
        o << ",\"ask_mask\":" << m.get<OptionPrint::ask_mask>();
        o << ",\"prt_side\":" << (int64_t)m.get<OptionPrint::prt_side>();
        o << ",\"prt_timestamp\":" << m.get<OptionPrint::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionPrint::net_timestamp>();
        o << ",\"oq_net_timestamp\":" << m.get<OptionPrint::oq_net_timestamp>();
        {
            std::time_t tt = m.get<OptionPrint::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}