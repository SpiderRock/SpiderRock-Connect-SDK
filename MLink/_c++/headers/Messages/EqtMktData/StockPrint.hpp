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

    #ifndef _prt_exch__StkExch__GUARD__
    #define _prt_exch__StkExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_prt_exch__StkExch__GUARD__

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

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _mrk_price__float__GUARD__
    #define _mrk_price__float__GUARD__
    DECL_STRONG_TYPE(mrk_price__float, float);
    #endif//_mrk_price__float__GUARD__

    #ifndef _cls_price__float__GUARD__
    #define _cls_price__float__GUARD__
    DECL_STRONG_TYPE(cls_price__float, float);
    #endif//_cls_price__float__GUARD__

    #ifndef _prt_type__StkPrintType__GUARD__
    #define _prt_type__StkPrintType__GUARD__
    DECL_STRONG_TYPE(prt_type__StkPrintType, spiderrock::protobuf::api::StkPrintType);
    #endif//_prt_type__StkPrintType__GUARD__

    #ifndef _print_codes__GUARD__
    #define _print_codes__GUARD__
    DECL_STRONG_TYPE(print_codes, string);
    #endif//_print_codes__GUARD__

    #ifndef _prt_cond1__GUARD__
    #define _prt_cond1__GUARD__
    DECL_STRONG_TYPE(prt_cond1, int32);
    #endif//_prt_cond1__GUARD__

    #ifndef _prt_cond2__GUARD__
    #define _prt_cond2__GUARD__
    DECL_STRONG_TYPE(prt_cond2, int32);
    #endif//_prt_cond2__GUARD__

    #ifndef _prt_cond3__GUARD__
    #define _prt_cond3__GUARD__
    DECL_STRONG_TYPE(prt_cond3, int32);
    #endif//_prt_cond3__GUARD__

    #ifndef _prt_cond4__GUARD__
    #define _prt_cond4__GUARD__
    DECL_STRONG_TYPE(prt_cond4, int32);
    #endif//_prt_cond4__GUARD__

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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockPrint_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPrint_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPrint_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockPrint_PKey() {}

        virtual ~StockPrint_PKey() {
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class StockPrint {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockPrint_PKey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__StkExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__float;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using mrk_price = spiderrock::protobuf::api::mrk_price__float;
        using cls_price = spiderrock::protobuf::api::cls_price__float;
        using prt_type = spiderrock::protobuf::api::prt_type__StkPrintType;
        using print_codes = spiderrock::protobuf::api::print_codes;
        using prt_cond1 = spiderrock::protobuf::api::prt_cond1;
        using prt_cond2 = spiderrock::protobuf::api::prt_cond2;
        using prt_cond3 = spiderrock::protobuf::api::prt_cond3;
        using prt_cond4 = spiderrock::protobuf::api::prt_cond4;
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
        prt_volume m_prt_volume{};
        mrk_price m_mrk_price{};
        cls_price m_cls_price{};
        prt_type m_prt_type{};
        print_codes m_print_codes{};
        prt_cond1 m_prt_cond1{};
        prt_cond2 m_prt_cond2{};
        prt_cond3 m_prt_cond3{};
        prt_cond4 m_prt_cond4{};
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
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        mrk_price get_mrk_price() const {
            return m_mrk_price;
        }		
        cls_price get_cls_price() const {
            return m_cls_price;
        }		
        prt_type get_prt_type() const {
            return m_prt_type;
        }		
        print_codes get_print_codes() const {
            return m_print_codes;
        }		
        prt_cond1 get_prt_cond1() const {
            return m_prt_cond1;
        }		
        prt_cond2 get_prt_cond2() const {
            return m_prt_cond2;
        }		
        prt_cond3 get_prt_cond3() const {
            return m_prt_cond3;
        }		
        prt_cond4 get_prt_cond4() const {
            return m_prt_cond4;
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
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_mrk_price(const mrk_price& value)  {
            m_mrk_price = value;
        }
        void set_cls_price(const cls_price& value)  {
            m_cls_price = value;
        }
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_print_codes(const print_codes& value)  {
            m_print_codes = value;
        }
        void set_prt_cond1(const prt_cond1& value)  {
            m_prt_cond1 = value;
        }
        void set_prt_cond2(const prt_cond2& value)  {
            m_prt_cond2 = value;
        }
        void set_prt_cond3(const prt_cond3& value)  {
            m_prt_cond3 = value;
        }
        void set_prt_cond4(const prt_cond4& value)  {
            m_prt_cond4 = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockPrint::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const mrk_price & value) {
            set_mrk_price(value);
        }
        void set(const cls_price & value) {
            set_cls_price(value);
        }
        void set(const prt_type & value) {
            set_prt_type(value);
        }
        void set(const print_codes & value) {
            set_print_codes(value);
        }
        void set(const prt_cond1 & value) {
            set_prt_cond1(value);
        }
        void set(const prt_cond2 & value) {
            set_prt_cond2(value);
        }
        void set(const prt_cond3 & value) {
            set_prt_cond3(value);
        }
        void set(const prt_cond4 & value) {
            set_prt_cond4(value);
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

        void set(const StockPrint & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_volume);
            set(value.m_mrk_price);
            set(value.m_cls_price);
            set(value.m_prt_type);
            set(value.m_print_codes);
            set(value.m_prt_cond1);
            set(value.m_prt_cond2);
            set(value.m_prt_cond3);
            set(value.m_prt_cond4);
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

        StockPrint() {
            m__meta.set_message_type("StockPrint");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3045, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3045, length);
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
             *this = StockPrint{};
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
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeMrkPrice() const {
            return !(m_mrk_price == 0.0);
        }
        bool IncludeClsPrice() const {
            return !(m_cls_price == 0.0);
        }
        bool IncludePrintCodes() const {
            return !(m_print_codes.empty());
        }
        bool IncludePrtCond1() const {
            return !(m_prt_cond1 == 0);
        }
        bool IncludePrtCond2() const {
            return !(m_prt_cond2 == 0);
        }
        bool IncludePrtCond3() const {
            return !(m_prt_cond3 == 0);
        }
        bool IncludePrtCond4() const {
            return !(m_prt_cond4 == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_prt_exch)));
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
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_prt_volume);
            }
            if ( IncludeMrkPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_mrk_price);
            }
            if ( IncludeClsPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_cls_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkPrintType>(m_prt_type)));
            if ( IncludePrintCodes()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(164,m_print_codes);
            }
            if ( IncludePrtCond1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_prt_cond1);
            }
            if ( IncludePrtCond2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_prt_cond2);
            }
            if ( IncludePrtCond3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_prt_cond3);
            }
            if ( IncludePrtCond4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_prt_cond4);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(163, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_prt_exch)));
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
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_prt_volume);
            }
            if ( IncludeMrkPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_mrk_price);
            }
            if ( IncludeClsPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_cls_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkPrintType>(m_prt_type)));
            if ( IncludePrintCodes()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,164,static_cast<string>(m_print_codes));
            }
            if ( IncludePrtCond1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_prt_cond1);
            }
            if ( IncludePrtCond2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_prt_cond2);
            }
            if ( IncludePrtCond3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_prt_cond3);
            }
            if ( IncludePrtCond4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_prt_cond4);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 163, m_timestamp);
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
                            m_prt_exch = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mrk_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_type = static_cast<spiderrock::protobuf::api::StkPrintType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 164: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_print_codes = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cond4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 163: {
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

    template<> inline const auto StockPrint::get<StockPrint::_meta>() const { return StockPrint::_meta{ m__meta}; }
    template<> inline const auto StockPrint::get<StockPrint::pkey>() const { return StockPrint::pkey{ m_pkey}; }
    template<> inline const auto StockPrint::get<StockPrint::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>( m_prt_exch)); }
    template<> inline const auto StockPrint::get<StockPrint::prt_size>() const { return m_prt_size; }
    template<> inline const auto StockPrint::get<StockPrint::prt_price>() const { return m_prt_price; }
    template<> inline const auto StockPrint::get<StockPrint::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto StockPrint::get<StockPrint::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto StockPrint::get<StockPrint::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto StockPrint::get<StockPrint::mrk_price>() const { return m_mrk_price; }
    template<> inline const auto StockPrint::get<StockPrint::cls_price>() const { return m_cls_price; }
    template<> inline const auto StockPrint::get<StockPrint::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkPrintType>( m_prt_type)); }
    template<> inline const auto StockPrint::get<StockPrint::print_codes>() const { return m_print_codes; }
    template<> inline const auto StockPrint::get<StockPrint::prt_cond1>() const { return m_prt_cond1; }
    template<> inline const auto StockPrint::get<StockPrint::prt_cond2>() const { return m_prt_cond2; }
    template<> inline const auto StockPrint::get<StockPrint::prt_cond3>() const { return m_prt_cond3; }
    template<> inline const auto StockPrint::get<StockPrint::prt_cond4>() const { return m_prt_cond4; }
    template<> inline const auto StockPrint::get<StockPrint::ebid>() const { return m_ebid; }
    template<> inline const auto StockPrint::get<StockPrint::eask>() const { return m_eask; }
    template<> inline const auto StockPrint::get<StockPrint::ebsz>() const { return m_ebsz; }
    template<> inline const auto StockPrint::get<StockPrint::easz>() const { return m_easz; }
    template<> inline const auto StockPrint::get<StockPrint::eage>() const { return m_eage; }
    template<> inline const auto StockPrint::get<StockPrint::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto StockPrint::get<StockPrint::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto StockPrint::get<StockPrint::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto StockPrint::get<StockPrint::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockPrint_PKey::get<StockPrint_PKey::ticker>() const { return StockPrint_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockPrint_PKey& m) {
        o << "\"ticker\":{" << m.get<StockPrint_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockPrint& m) {
        o << "\"_meta\":{" << m.get<StockPrint::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockPrint::pkey>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<StockPrint::prt_exch>();
        o << ",\"prt_size\":" << m.get<StockPrint::prt_size>();
        o << ",\"prt_price\":" << m.get<StockPrint::prt_price>();
        o << ",\"prt_cluster_num\":" << m.get<StockPrint::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<StockPrint::prt_cluster_size>();
        o << ",\"prt_volume\":" << m.get<StockPrint::prt_volume>();
        o << ",\"mrk_price\":" << m.get<StockPrint::mrk_price>();
        o << ",\"cls_price\":" << m.get<StockPrint::cls_price>();
        o << ",\"prt_type\":" << (int64_t)m.get<StockPrint::prt_type>();
        o << ",\"print_codes\":\"" << m.get<StockPrint::print_codes>() << "\"";
        o << ",\"prt_cond1\":" << m.get<StockPrint::prt_cond1>();
        o << ",\"prt_cond2\":" << m.get<StockPrint::prt_cond2>();
        o << ",\"prt_cond3\":" << m.get<StockPrint::prt_cond3>();
        o << ",\"prt_cond4\":" << m.get<StockPrint::prt_cond4>();
        o << ",\"ebid\":" << m.get<StockPrint::ebid>();
        o << ",\"eask\":" << m.get<StockPrint::eask>();
        o << ",\"ebsz\":" << m.get<StockPrint::ebsz>();
        o << ",\"easz\":" << m.get<StockPrint::easz>();
        o << ",\"eage\":" << m.get<StockPrint::eage>();
        o << ",\"prt_side\":" << (int64_t)m.get<StockPrint::prt_side>();
        o << ",\"prt_timestamp\":" << m.get<StockPrint::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<StockPrint::net_timestamp>();
        {
            std::time_t tt = m.get<StockPrint::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}