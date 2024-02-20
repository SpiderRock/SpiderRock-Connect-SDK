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

    #ifndef _event_id__GUARD__
    #define _event_id__GUARD__
    DECL_STRONG_TYPE(event_id, int32);
    #endif//_event_id__GUARD__

    #ifndef _prt_exch__OptExch__GUARD__
    #define _prt_exch__OptExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_prt_exch__OptExch__GUARD__

    #ifndef _prt_root__GUARD__
    #define _prt_root__GUARD__
    DECL_STRONG_TYPE(prt_root, string);
    #endif//_prt_root__GUARD__

    #ifndef _request_id__GUARD__
    #define _request_id__GUARD__
    DECL_STRONG_TYPE(request_id, int32);
    #endif//_request_id__GUARD__

    #ifndef _event_type__GUARD__
    #define _event_type__GUARD__
    DECL_STRONG_TYPE(event_type, spiderrock::protobuf::api::FlexEventType);
    #endif//_event_type__GUARD__

    #ifndef _total_quantity__GUARD__
    #define _total_quantity__GUARD__
    DECL_STRONG_TYPE(total_quantity, int32);
    #endif//_total_quantity__GUARD__

    #ifndef _package_price__GUARD__
    #define _package_price__GUARD__
    DECL_STRONG_TYPE(package_price, double);
    #endif//_package_price__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _sequence_number__GUARD__
    #define _sequence_number__GUARD__
    DECL_STRONG_TYPE(sequence_number, int32);
    #endif//_sequence_number__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _flex_type__GUARD__
    #define _flex_type__GUARD__
    DECL_STRONG_TYPE(flex_type, spiderrock::protobuf::api::FlexType);
    #endif//_flex_type__GUARD__

    #ifndef _quantity__GUARD__
    #define _quantity__GUARD__
    DECL_STRONG_TYPE(quantity, int32);
    #endif//_quantity__GUARD__

    #ifndef _price__GUARD__
    #define _price__GUARD__
    DECL_STRONG_TYPE(price, double);
    #endif//_price__GUARD__

    #ifndef _price_type__FlexPriceType__GUARD__
    #define _price_type__FlexPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__FlexPriceType, spiderrock::protobuf::api::FlexPriceType);
    #endif//_price_type__FlexPriceType__GUARD__

    #ifndef _delta__double__GUARD__
    #define _delta__double__GUARD__
    DECL_STRONG_TYPE(delta__double, double);
    #endif//_delta__double__GUARD__

    #ifndef _ref_price__GUARD__
    #define _ref_price__GUARD__
    DECL_STRONG_TYPE(ref_price, double);
    #endif//_ref_price__GUARD__

    #ifndef _close_price__GUARD__
    #define _close_price__GUARD__
    DECL_STRONG_TYPE(close_price, double);
    #endif//_close_price__GUARD__

    #ifndef _price_adj__GUARD__
    #define _price_adj__GUARD__
    DECL_STRONG_TYPE(price_adj, double);
    #endif//_price_adj__GUARD__

    #ifndef _strike_adj__GUARD__
    #define _strike_adj__GUARD__
    DECL_STRONG_TYPE(strike_adj, double);
    #endif//_strike_adj__GUARD__

    #ifndef _bid_price__double__GUARD__
    #define _bid_price__double__GUARD__
    DECL_STRONG_TYPE(bid_price__double, double);
    #endif//_bid_price__double__GUARD__

    #ifndef _bid_size__double__GUARD__
    #define _bid_size__double__GUARD__
    DECL_STRONG_TYPE(bid_size__double, double);
    #endif//_bid_size__double__GUARD__

    #ifndef _ask_price__double__GUARD__
    #define _ask_price__double__GUARD__
    DECL_STRONG_TYPE(ask_price__double, double);
    #endif//_ask_price__double__GUARD__

    #ifndef _ask_size__double__GUARD__
    #define _ask_size__double__GUARD__
    DECL_STRONG_TYPE(ask_size__double, double);
    #endif//_ask_size__double__GUARD__

    #ifndef _raw_text__GUARD__
    #define _raw_text__GUARD__
    DECL_STRONG_TYPE(raw_text, string);
    #endif//_raw_text__GUARD__

    
    class OptionFlexEvent_PKey {
        public:
        //using statements for all types used in this class
        using sequence_number = spiderrock::protobuf::api::sequence_number;

        private:
        sequence_number m_sequence_number{};

        public:
        sequence_number get_sequence_number() const {
            return m_sequence_number;
        }
        void set_sequence_number(const sequence_number& value)  {
            m_sequence_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sequence_number & value) { set_sequence_number(value); }


        OptionFlexEvent_PKey() {}

        virtual ~OptionFlexEvent_PKey() {
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
        bool IncludeSequenceNumber() const {
            return !(m_sequence_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSequenceNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(10,m_sequence_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSequenceNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,10,m_sequence_number);
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
                    case 10: {m_sequence_number = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class OptionFlexEvent_Legs {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using flex_type = spiderrock::protobuf::api::flex_type;
        using quantity = spiderrock::protobuf::api::quantity;
        using price = spiderrock::protobuf::api::price;
        using price_type = spiderrock::protobuf::api::price_type__FlexPriceType;
        using delta = spiderrock::protobuf::api::delta__double;
        using ref_price = spiderrock::protobuf::api::ref_price;
        using close_price = spiderrock::protobuf::api::close_price;
        using price_adj = spiderrock::protobuf::api::price_adj;
        using strike_adj = spiderrock::protobuf::api::strike_adj;
        using bid_price = spiderrock::protobuf::api::bid_price__double;
        using bid_size = spiderrock::protobuf::api::bid_size__double;
        using ask_price = spiderrock::protobuf::api::ask_price__double;
        using ask_size = spiderrock::protobuf::api::ask_size__double;
        using raw_text = spiderrock::protobuf::api::raw_text;

        private:
        okey m_okey{};
        flex_type m_flex_type{};
        quantity m_quantity{};
        price m_price{};
        price_type m_price_type{};
        delta m_delta{};
        ref_price m_ref_price{};
        close_price m_close_price{};
        price_adj m_price_adj{};
        strike_adj m_strike_adj{};
        bid_price m_bid_price{};
        bid_size m_bid_size{};
        ask_price m_ask_price{};
        ask_size m_ask_size{};
        raw_text m_raw_text{};

        public:
        flex_type get_flex_type() const {
            return m_flex_type;
        }
        quantity get_quantity() const {
            return m_quantity;
        }
        price get_price() const {
            return m_price;
        }
        price_type get_price_type() const {
            return m_price_type;
        }
        delta get_delta() const {
            return m_delta;
        }
        ref_price get_ref_price() const {
            return m_ref_price;
        }
        close_price get_close_price() const {
            return m_close_price;
        }
        price_adj get_price_adj() const {
            return m_price_adj;
        }
        strike_adj get_strike_adj() const {
            return m_strike_adj;
        }
        bid_price get_bid_price() const {
            return m_bid_price;
        }
        bid_size get_bid_size() const {
            return m_bid_size;
        }
        ask_price get_ask_price() const {
            return m_ask_price;
        }
        ask_size get_ask_size() const {
            return m_ask_size;
        }
        raw_text get_raw_text() const {
            return m_raw_text;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_flex_type(const flex_type& value)  {
            m_flex_type = value;
        }
        void set_quantity(const quantity& value)  {
            m_quantity = value;
        }
        void set_price(const price& value)  {
            m_price = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_delta(const delta& value)  {
            m_delta = value;
        }
        void set_ref_price(const ref_price& value)  {
            m_ref_price = value;
        }
        void set_close_price(const close_price& value)  {
            m_close_price = value;
        }
        void set_price_adj(const price_adj& value)  {
            m_price_adj = value;
        }
        void set_strike_adj(const strike_adj& value)  {
            m_strike_adj = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_raw_text(const raw_text& value)  {
            m_raw_text = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent_Legs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent_Legs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const flex_type & value) { set_flex_type(value); }
        void set(const quantity & value) { set_quantity(value); }
        void set(const price & value) { set_price(value); }
        void set(const price_type & value) { set_price_type(value); }
        void set(const delta & value) { set_delta(value); }
        void set(const ref_price & value) { set_ref_price(value); }
        void set(const close_price & value) { set_close_price(value); }
        void set(const price_adj & value) { set_price_adj(value); }
        void set(const strike_adj & value) { set_strike_adj(value); }
        void set(const bid_price & value) { set_bid_price(value); }
        void set(const bid_size & value) { set_bid_size(value); }
        void set(const ask_price & value) { set_ask_price(value); }
        void set(const ask_size & value) { set_ask_size(value); }
        void set(const raw_text & value) { set_raw_text(value); }


        OptionFlexEvent_Legs() {}

        virtual ~OptionFlexEvent_Legs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_okey.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(130,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexType>(m_flex_type)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_quantity);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_price);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexPriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_delta);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_ref_price);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_close_price);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_price_adj);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_strike_adj);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_bid_price);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_bid_size);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_ask_price);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(169,m_ask_size);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_raw_text);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_okey.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 130, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexType>(m_flex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_quantity);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_price);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexPriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_delta);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_ref_price);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_close_price);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_price_adj);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_strike_adj);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_bid_price);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_bid_size);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_ask_price);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,169,m_ask_size);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_raw_text));
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
                    case 130: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                    case 133: {m_flex_type = static_cast<spiderrock::protobuf::api::FlexType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 136: {m_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 139: {m_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 142: {m_price_type = static_cast<spiderrock::protobuf::api::FlexPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 145: {m_delta = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 148: {m_ref_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 151: {m_close_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 154: {m_price_adj = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 157: {m_strike_adj = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 160: {m_bid_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 163: {m_bid_size = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 166: {m_ask_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 169: {m_ask_size = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 172: {m_raw_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionFlexEvent {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionFlexEvent_PKey;
        using event_id = spiderrock::protobuf::api::event_id;
        using prt_exch = spiderrock::protobuf::api::prt_exch__OptExch;
        using prt_root = spiderrock::protobuf::api::prt_root;
        using request_id = spiderrock::protobuf::api::request_id;
        using event_type = spiderrock::protobuf::api::event_type;
        using total_quantity = spiderrock::protobuf::api::total_quantity;
        using package_price = spiderrock::protobuf::api::package_price;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using legs = spiderrock::protobuf::api::OptionFlexEvent_Legs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        event_id m_event_id{};
        prt_exch m_prt_exch{};
        prt_root m_prt_root{};
        request_id m_request_id{};
        event_type m_event_type{};
        total_quantity m_total_quantity{};
        package_price m_package_price{};
        net_timestamp m_net_timestamp{};
        src_timestamp m_src_timestamp{};
        std::vector<legs> m_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        event_id get_event_id() const {
            return m_event_id;
        }		
        prt_exch get_prt_exch() const {
            return m_prt_exch;
        }		
        prt_root get_prt_root() const {
            return m_prt_root;
        }		
        request_id get_request_id() const {
            return m_request_id;
        }		
        event_type get_event_type() const {
            return m_event_type;
        }		
        total_quantity get_total_quantity() const {
            return m_total_quantity;
        }		
        package_price get_package_price() const {
            return m_package_price;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }
        const std::vector<legs>& get_legs_list() const {
            return m_legs;
        }
        const legs& get_legs(const int i) const {
            return m_legs.at(i);
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
        void set_event_id(const event_id& value)  {
            m_event_id = value;
        }
        void set_prt_exch(const prt_exch& value)  {
            m_prt_exch = value;
        }
        void set_prt_root(const prt_root& value)  {
            m_prt_root = value;
        }
        void set_request_id(const request_id& value)  {
            m_request_id = value;
        }
        void set_event_type(const event_type& value)  {
            m_event_type = value;
        }
        void set_total_quantity(const total_quantity& value)  {
            m_total_quantity = value;
        }
        void set_package_price(const package_price& value)  {
            m_package_price = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_legs_list(const std::vector<legs>& list)  {
            m_legs = list;
        }
        void add_legs(const legs& item) {
            m_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionFlexEvent::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const event_id & value) {
            set_event_id(value);
        }
        void set(const prt_exch & value) {
            set_prt_exch(value);
        }
        void set(const prt_root & value) {
            set_prt_root(value);
        }
        void set(const request_id & value) {
            set_request_id(value);
        }
        void set(const event_type & value) {
            set_event_type(value);
        }
        void set(const total_quantity & value) {
            set_total_quantity(value);
        }
        void set(const package_price & value) {
            set_package_price(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const legs & value) {
            add_legs(value);
        }

        void set(const OptionFlexEvent & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_event_id);
            set(value.m_prt_exch);
            set(value.m_prt_root);
            set(value.m_request_id);
            set(value.m_event_type);
            set(value.m_total_quantity);
            set(value.m_package_price);
            set(value.m_net_timestamp);
            set(value.m_src_timestamp);set_legs_list(value.m_legs);
        }

        OptionFlexEvent() {
            m__meta.set_message_type("OptionFlexEvent");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2845, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2845, length);
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
             *this = OptionFlexEvent{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeEventId() const {
            return !(m_event_id == 0);
        }
        bool IncludePrtRoot() const {
            return !(m_prt_root.empty());
        }
        bool IncludeRequestId() const {
            return !(m_request_id == 0);
        }
        bool IncludeTotalQuantity() const {
            return !(m_total_quantity == 0);
        }
        bool IncludePackagePrice() const {
            return !(m_package_price == 0.0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeLegs() const {
            return (!m_legs.empty());
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
            if ( IncludeEventId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_event_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludePrtRoot()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_prt_root);
            }
            if ( IncludeRequestId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_request_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexEventType>(m_event_type)));
            if ( IncludeTotalQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_total_quantity);
            }
            if ( IncludePackagePrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_package_price);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_net_timestamp);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(124,m_src_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(127, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeEventId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_event_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludePrtRoot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_prt_root));
            }
            if ( IncludeRequestId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_request_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexEventType>(m_event_type)));
            if ( IncludeTotalQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_total_quantity);
            }
            if ( IncludePackagePrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_package_price);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_net_timestamp);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,124,m_src_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 127, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_event_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_prt_root = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_request_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_event_type = static_cast<spiderrock::protobuf::api::FlexEventType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_total_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_package_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            legs item_legs;
                            item_legs.Decode(pos, pos+length);  
                            m_legs.emplace_back(item_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::_meta>() const { return OptionFlexEvent::_meta{ m__meta}; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::pkey>() const { return OptionFlexEvent::pkey{ m_pkey}; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::event_id>() const { return m_event_id; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_prt_exch)); }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::prt_root>() const { return m_prt_root; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::request_id>() const { return m_request_id; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::event_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexEventType>( m_event_type)); }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::total_quantity>() const { return m_total_quantity; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::package_price>() const { return m_package_price; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto OptionFlexEvent::get<OptionFlexEvent::legs>(int i) const { return OptionFlexEvent::legs{ get_legs(i)}; }
    template<> inline int OptionFlexEvent::count<OptionFlexEvent::legs>() const { return static_cast<int>( m_legs.size()); }
    template<> inline const auto OptionFlexEvent_PKey::get<OptionFlexEvent_PKey::sequence_number>() const { return m_sequence_number; }
    
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::okey>() const { return OptionFlexEvent_Legs::okey{m_okey}; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::flex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexType>(m_flex_type));}
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::quantity>() const { return m_quantity; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::price>() const { return m_price; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexPriceType>(m_price_type));}
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::delta>() const { return m_delta; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::ref_price>() const { return m_ref_price; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::close_price>() const { return m_close_price; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::price_adj>() const { return m_price_adj; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::strike_adj>() const { return m_strike_adj; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::bid_price>() const { return m_bid_price; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::bid_size>() const { return m_bid_size; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::ask_price>() const { return m_ask_price; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::ask_size>() const { return m_ask_size; }
    template<> inline const auto OptionFlexEvent_Legs::get<OptionFlexEvent_Legs::raw_text>() const { return m_raw_text; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionFlexEvent_PKey& m) {
        o << "\"sequence_number\":" << m.get<OptionFlexEvent_PKey::sequence_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionFlexEvent_Legs& m) {
        o << "\"okey\":{" << m.get<OptionFlexEvent_Legs::okey>() << "}";
        o << ",\"flex_type\":" << (int64_t)m.get<OptionFlexEvent_Legs::flex_type>();
        o << ",\"quantity\":" << m.get<OptionFlexEvent_Legs::quantity>();
        o << ",\"price\":" << m.get<OptionFlexEvent_Legs::price>();
        o << ",\"price_type\":" << (int64_t)m.get<OptionFlexEvent_Legs::price_type>();
        o << ",\"delta\":" << m.get<OptionFlexEvent_Legs::delta>();
        o << ",\"ref_price\":" << m.get<OptionFlexEvent_Legs::ref_price>();
        o << ",\"close_price\":" << m.get<OptionFlexEvent_Legs::close_price>();
        o << ",\"price_adj\":" << m.get<OptionFlexEvent_Legs::price_adj>();
        o << ",\"strike_adj\":" << m.get<OptionFlexEvent_Legs::strike_adj>();
        o << ",\"bid_price\":" << m.get<OptionFlexEvent_Legs::bid_price>();
        o << ",\"bid_size\":" << m.get<OptionFlexEvent_Legs::bid_size>();
        o << ",\"ask_price\":" << m.get<OptionFlexEvent_Legs::ask_price>();
        o << ",\"ask_size\":" << m.get<OptionFlexEvent_Legs::ask_size>();
        o << ",\"raw_text\":\"" << m.get<OptionFlexEvent_Legs::raw_text>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionFlexEvent& m) {
        o << "\"_meta\":{" << m.get<OptionFlexEvent::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionFlexEvent::pkey>() << "}";
        o << ",\"event_id\":" << m.get<OptionFlexEvent::event_id>();
        o << ",\"prt_exch\":" << (int64_t)m.get<OptionFlexEvent::prt_exch>();
        o << ",\"prt_root\":\"" << m.get<OptionFlexEvent::prt_root>() << "\"";
        o << ",\"request_id\":" << m.get<OptionFlexEvent::request_id>();
        o << ",\"event_type\":" << (int64_t)m.get<OptionFlexEvent::event_type>();
        o << ",\"total_quantity\":" << m.get<OptionFlexEvent::total_quantity>();
        o << ",\"package_price\":" << m.get<OptionFlexEvent::package_price>();
        o << ",\"net_timestamp\":" << m.get<OptionFlexEvent::net_timestamp>();
        o << ",\"src_timestamp\":" << m.get<OptionFlexEvent::src_timestamp>();
        o << ",\"legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<OptionFlexEvent::legs>(); ++i) {
                o << delim << m.get<OptionFlexEvent::legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}