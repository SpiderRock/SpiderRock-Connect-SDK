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

    #ifndef _print_codes__GUARD__
    #define _print_codes__GUARD__
    DECL_STRONG_TYPE(print_codes, string);
    #endif//_print_codes__GUARD__

    #ifndef _prt_orders__GUARD__
    #define _prt_orders__GUARD__
    DECL_STRONG_TYPE(prt_orders, uint32);
    #endif//_prt_orders__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _oos_volume__GUARD__
    #define _oos_volume__GUARD__
    DECL_STRONG_TYPE(oos_volume, int32);
    #endif//_oos_volume__GUARD__

    #ifndef _iso_volume__GUARD__
    #define _iso_volume__GUARD__
    DECL_STRONG_TYPE(iso_volume, int32);
    #endif//_iso_volume__GUARD__

    #ifndef _sla_volume__GUARD__
    #define _sla_volume__GUARD__
    DECL_STRONG_TYPE(sla_volume, int32);
    #endif//_sla_volume__GUARD__

    #ifndef _mla_volume__GUARD__
    #define _mla_volume__GUARD__
    DECL_STRONG_TYPE(mla_volume, int32);
    #endif//_mla_volume__GUARD__

    #ifndef _crx_volume__GUARD__
    #define _crx_volume__GUARD__
    DECL_STRONG_TYPE(crx_volume, int32);
    #endif//_crx_volume__GUARD__

    #ifndef _flr_volume__GUARD__
    #define _flr_volume__GUARD__
    DECL_STRONG_TYPE(flr_volume, int32);
    #endif//_flr_volume__GUARD__

    #ifndef _mlg_volume__GUARD__
    #define _mlg_volume__GUARD__
    DECL_STRONG_TYPE(mlg_volume, int32);
    #endif//_mlg_volume__GUARD__

    #ifndef _ukn_volume__GUARD__
    #define _ukn_volume__GUARD__
    DECL_STRONG_TYPE(ukn_volume, int32);
    #endif//_ukn_volume__GUARD__

    #ifndef _cxl_volume__GUARD__
    #define _cxl_volume__GUARD__
    DECL_STRONG_TYPE(cxl_volume, int32);
    #endif//_cxl_volume__GUARD__

    #ifndef _total_volume__GUARD__
    #define _total_volume__GUARD__
    DECL_STRONG_TYPE(total_volume, int32);
    #endif//_total_volume__GUARD__

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

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionPrint2_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrint2_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrint2_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionPrint2_PKey() {}

        virtual ~OptionPrint2_PKey() {
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
    

    class OptionPrint2 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPrint2_PKey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__OptExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__float;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using print_codes = spiderrock::protobuf::api::print_codes;
        using prt_orders = spiderrock::protobuf::api::prt_orders;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using oos_volume = spiderrock::protobuf::api::oos_volume;
        using iso_volume = spiderrock::protobuf::api::iso_volume;
        using sla_volume = spiderrock::protobuf::api::sla_volume;
        using mla_volume = spiderrock::protobuf::api::mla_volume;
        using crx_volume = spiderrock::protobuf::api::crx_volume;
        using flr_volume = spiderrock::protobuf::api::flr_volume;
        using mlg_volume = spiderrock::protobuf::api::mlg_volume;
        using ukn_volume = spiderrock::protobuf::api::ukn_volume;
        using cxl_volume = spiderrock::protobuf::api::cxl_volume;
        using total_volume = spiderrock::protobuf::api::total_volume;
        using bid_count = spiderrock::protobuf::api::bid_count__uint32;
        using ask_count = spiderrock::protobuf::api::ask_count__uint32;
        using bid_volume = spiderrock::protobuf::api::bid_volume;
        using ask_volume = spiderrock::protobuf::api::ask_volume;
        using ebid = spiderrock::protobuf::api::ebid;
        using eask = spiderrock::protobuf::api::eask;
        using ebsz = spiderrock::protobuf::api::ebsz;
        using easz = spiderrock::protobuf::api::easz;
        using eage = spiderrock::protobuf::api::eage;
        using prt_side = spiderrock::protobuf::api::prt_side__PrtSide;
        using prt_timestamp = spiderrock::protobuf::api::prt_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
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
        print_codes m_print_codes{};
        prt_orders m_prt_orders{};
        prt_volume m_prt_volume{};
        oos_volume m_oos_volume{};
        iso_volume m_iso_volume{};
        sla_volume m_sla_volume{};
        mla_volume m_mla_volume{};
        crx_volume m_crx_volume{};
        flr_volume m_flr_volume{};
        mlg_volume m_mlg_volume{};
        ukn_volume m_ukn_volume{};
        cxl_volume m_cxl_volume{};
        total_volume m_total_volume{};
        bid_count m_bid_count{};
        ask_count m_ask_count{};
        bid_volume m_bid_volume{};
        ask_volume m_ask_volume{};
        ebid m_ebid{};
        eask m_eask{};
        ebsz m_ebsz{};
        easz m_easz{};
        eage m_eage{};
        prt_side m_prt_side{};
        prt_timestamp m_prt_timestamp{};
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
        print_codes get_print_codes() const {
            return m_print_codes;
        }		
        prt_orders get_prt_orders() const {
            return m_prt_orders;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        oos_volume get_oos_volume() const {
            return m_oos_volume;
        }		
        iso_volume get_iso_volume() const {
            return m_iso_volume;
        }		
        sla_volume get_sla_volume() const {
            return m_sla_volume;
        }		
        mla_volume get_mla_volume() const {
            return m_mla_volume;
        }		
        crx_volume get_crx_volume() const {
            return m_crx_volume;
        }		
        flr_volume get_flr_volume() const {
            return m_flr_volume;
        }		
        mlg_volume get_mlg_volume() const {
            return m_mlg_volume;
        }		
        ukn_volume get_ukn_volume() const {
            return m_ukn_volume;
        }		
        cxl_volume get_cxl_volume() const {
            return m_cxl_volume;
        }		
        total_volume get_total_volume() const {
            return m_total_volume;
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
        void set_print_codes(const print_codes& value)  {
            m_print_codes = value;
        }
        void set_prt_orders(const prt_orders& value)  {
            m_prt_orders = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_oos_volume(const oos_volume& value)  {
            m_oos_volume = value;
        }
        void set_iso_volume(const iso_volume& value)  {
            m_iso_volume = value;
        }
        void set_sla_volume(const sla_volume& value)  {
            m_sla_volume = value;
        }
        void set_mla_volume(const mla_volume& value)  {
            m_mla_volume = value;
        }
        void set_crx_volume(const crx_volume& value)  {
            m_crx_volume = value;
        }
        void set_flr_volume(const flr_volume& value)  {
            m_flr_volume = value;
        }
        void set_mlg_volume(const mlg_volume& value)  {
            m_mlg_volume = value;
        }
        void set_ukn_volume(const ukn_volume& value)  {
            m_ukn_volume = value;
        }
        void set_cxl_volume(const cxl_volume& value)  {
            m_cxl_volume = value;
        }
        void set_total_volume(const total_volume& value)  {
            m_total_volume = value;
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

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrint2::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const print_codes & value) {
            set_print_codes(value);
        }
        void set(const prt_orders & value) {
            set_prt_orders(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const oos_volume & value) {
            set_oos_volume(value);
        }
        void set(const iso_volume & value) {
            set_iso_volume(value);
        }
        void set(const sla_volume & value) {
            set_sla_volume(value);
        }
        void set(const mla_volume & value) {
            set_mla_volume(value);
        }
        void set(const crx_volume & value) {
            set_crx_volume(value);
        }
        void set(const flr_volume & value) {
            set_flr_volume(value);
        }
        void set(const mlg_volume & value) {
            set_mlg_volume(value);
        }
        void set(const ukn_volume & value) {
            set_ukn_volume(value);
        }
        void set(const cxl_volume & value) {
            set_cxl_volume(value);
        }
        void set(const total_volume & value) {
            set_total_volume(value);
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

        void set(const OptionPrint2 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_type);
            set(value.m_print_codes);
            set(value.m_prt_orders);
            set(value.m_prt_volume);
            set(value.m_oos_volume);
            set(value.m_iso_volume);
            set(value.m_sla_volume);
            set(value.m_mla_volume);
            set(value.m_crx_volume);
            set(value.m_flr_volume);
            set(value.m_mlg_volume);
            set(value.m_ukn_volume);
            set(value.m_cxl_volume);
            set(value.m_total_volume);
            set(value.m_bid_count);
            set(value.m_ask_count);
            set(value.m_bid_volume);
            set(value.m_ask_volume);
            set(value.m_ebid);
            set(value.m_eask);
            set(value.m_ebsz);
            set(value.m_easz);
            set(value.m_eage);
            set(value.m_prt_side);
            set(value.m_prt_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        OptionPrint2() {
            m__meta.set_message_type("OptionPrint2");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2805, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2805, length);
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
             *this = OptionPrint2{};
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
        bool IncludePrintCodes() const {
            return !(m_print_codes.empty());
        }
        bool IncludePrtOrders() const {
            return !(m_prt_orders == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeOosVolume() const {
            return !(m_oos_volume == 0);
        }
        bool IncludeIsoVolume() const {
            return !(m_iso_volume == 0);
        }
        bool IncludeSlaVolume() const {
            return !(m_sla_volume == 0);
        }
        bool IncludeMlaVolume() const {
            return !(m_mla_volume == 0);
        }
        bool IncludeCrxVolume() const {
            return !(m_crx_volume == 0);
        }
        bool IncludeFlrVolume() const {
            return !(m_flr_volume == 0);
        }
        bool IncludeMlgVolume() const {
            return !(m_mlg_volume == 0);
        }
        bool IncludeUknVolume() const {
            return !(m_ukn_volume == 0);
        }
        bool IncludeCxlVolume() const {
            return !(m_cxl_volume == 0);
        }
        bool IncludeTotalVolume() const {
            return !(m_total_volume == 0);
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
        bool IncludePrtTimestamp() const {
            return !(m_prt_timestamp == 0);
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
            if ( IncludePrintCodes()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(191,m_print_codes);
            }
            if ( IncludePrtOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(118,m_prt_orders);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_volume);
            }
            if ( IncludeOosVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_oos_volume);
            }
            if ( IncludeIsoVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_iso_volume);
            }
            if ( IncludeSlaVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_sla_volume);
            }
            if ( IncludeMlaVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_mla_volume);
            }
            if ( IncludeCrxVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_crx_volume);
            }
            if ( IncludeFlrVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_flr_volume);
            }
            if ( IncludeMlgVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_mlg_volume);
            }
            if ( IncludeUknVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_ukn_volume);
            }
            if ( IncludeCxlVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_cxl_volume);
            }
            if ( IncludeTotalVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_total_volume);
            }
            if ( IncludeBidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(154,m_bid_count);
            }
            if ( IncludeAskCount()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(157,m_ask_count);
            }
            if ( IncludeBidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_bid_volume);
            }
            if ( IncludeAskVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_ask_volume);
            }
            if ( IncludeEbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_ebid);
            }
            if ( IncludeEask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_eask);
            }
            if ( IncludeEbsz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_ebsz);
            }
            if ( IncludeEasz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_easz);
            }
            if ( IncludeEage()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_eage);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(184,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(187,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(190, m_timestamp);
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
            if ( IncludePrintCodes()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,191,static_cast<string>(m_print_codes));
            }
            if ( IncludePrtOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,118,m_prt_orders);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_volume);
            }
            if ( IncludeOosVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_oos_volume);
            }
            if ( IncludeIsoVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_iso_volume);
            }
            if ( IncludeSlaVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_sla_volume);
            }
            if ( IncludeMlaVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_mla_volume);
            }
            if ( IncludeCrxVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_crx_volume);
            }
            if ( IncludeFlrVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_flr_volume);
            }
            if ( IncludeMlgVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_mlg_volume);
            }
            if ( IncludeUknVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_ukn_volume);
            }
            if ( IncludeCxlVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_cxl_volume);
            }
            if ( IncludeTotalVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_total_volume);
            }
            if ( IncludeBidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,154,m_bid_count);
            }
            if ( IncludeAskCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,157,m_ask_count);
            }
            if ( IncludeBidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_bid_volume);
            }
            if ( IncludeAskVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_ask_volume);
            }
            if ( IncludeEbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_ebid);
            }
            if ( IncludeEask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_eask);
            }
            if ( IncludeEbsz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_ebsz);
            }
            if ( IncludeEasz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_easz);
            }
            if ( IncludeEage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_eage);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,184,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,187,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 190, m_timestamp);
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
                    case 191: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_print_codes = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                            m_oos_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_iso_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sla_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mla_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_crx_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_flr_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mlg_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ukn_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cxl_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_total_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_count = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_count = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ebid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ebsz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_easz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eage = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 190: {
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

    template<> inline const auto OptionPrint2::get<OptionPrint2::_meta>() const { return OptionPrint2::_meta{ m__meta}; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::pkey>() const { return OptionPrint2::pkey{ m_pkey}; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_prt_exch)); }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_size>() const { return m_prt_size; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_price>() const { return m_prt_price; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_prt_type)); }
    template<> inline const auto OptionPrint2::get<OptionPrint2::print_codes>() const { return m_print_codes; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_orders>() const { return m_prt_orders; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::oos_volume>() const { return m_oos_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::iso_volume>() const { return m_iso_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::sla_volume>() const { return m_sla_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::mla_volume>() const { return m_mla_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::crx_volume>() const { return m_crx_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::flr_volume>() const { return m_flr_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::mlg_volume>() const { return m_mlg_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::ukn_volume>() const { return m_ukn_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::cxl_volume>() const { return m_cxl_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::total_volume>() const { return m_total_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::bid_count>() const { return m_bid_count; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::ask_count>() const { return m_ask_count; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::bid_volume>() const { return m_bid_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::ask_volume>() const { return m_ask_volume; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::ebid>() const { return m_ebid; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::eask>() const { return m_eask; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::ebsz>() const { return m_ebsz; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::easz>() const { return m_easz; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::eage>() const { return m_eage; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto OptionPrint2::get<OptionPrint2::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionPrint2::get<OptionPrint2::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionPrint2_PKey::get<OptionPrint2_PKey::okey>() const { return OptionPrint2_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPrint2_PKey& m) {
        o << "\"okey\":{" << m.get<OptionPrint2_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPrint2& m) {
        o << "\"_meta\":{" << m.get<OptionPrint2::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPrint2::pkey>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<OptionPrint2::prt_exch>();
        o << ",\"prt_size\":" << m.get<OptionPrint2::prt_size>();
        o << ",\"prt_price\":" << m.get<OptionPrint2::prt_price>();
        o << ",\"prt_cluster_num\":" << m.get<OptionPrint2::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<OptionPrint2::prt_cluster_size>();
        o << ",\"prt_type\":" << (int64_t)m.get<OptionPrint2::prt_type>();
        o << ",\"print_codes\":\"" << m.get<OptionPrint2::print_codes>() << "\"";
        o << ",\"prt_orders\":" << m.get<OptionPrint2::prt_orders>();
        o << ",\"prt_volume\":" << m.get<OptionPrint2::prt_volume>();
        o << ",\"oos_volume\":" << m.get<OptionPrint2::oos_volume>();
        o << ",\"iso_volume\":" << m.get<OptionPrint2::iso_volume>();
        o << ",\"sla_volume\":" << m.get<OptionPrint2::sla_volume>();
        o << ",\"mla_volume\":" << m.get<OptionPrint2::mla_volume>();
        o << ",\"crx_volume\":" << m.get<OptionPrint2::crx_volume>();
        o << ",\"flr_volume\":" << m.get<OptionPrint2::flr_volume>();
        o << ",\"mlg_volume\":" << m.get<OptionPrint2::mlg_volume>();
        o << ",\"ukn_volume\":" << m.get<OptionPrint2::ukn_volume>();
        o << ",\"cxl_volume\":" << m.get<OptionPrint2::cxl_volume>();
        o << ",\"total_volume\":" << m.get<OptionPrint2::total_volume>();
        o << ",\"bid_count\":" << m.get<OptionPrint2::bid_count>();
        o << ",\"ask_count\":" << m.get<OptionPrint2::ask_count>();
        o << ",\"bid_volume\":" << m.get<OptionPrint2::bid_volume>();
        o << ",\"ask_volume\":" << m.get<OptionPrint2::ask_volume>();
        o << ",\"ebid\":" << m.get<OptionPrint2::ebid>();
        o << ",\"eask\":" << m.get<OptionPrint2::eask>();
        o << ",\"ebsz\":" << m.get<OptionPrint2::ebsz>();
        o << ",\"easz\":" << m.get<OptionPrint2::easz>();
        o << ",\"eage\":" << m.get<OptionPrint2::eage>();
        o << ",\"prt_side\":" << (int64_t)m.get<OptionPrint2::prt_side>();
        o << ",\"prt_timestamp\":" << m.get<OptionPrint2::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionPrint2::net_timestamp>();
        {
            std::time_t tt = m.get<OptionPrint2::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}