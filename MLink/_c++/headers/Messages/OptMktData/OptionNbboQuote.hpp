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

    #ifndef _update_type__GUARD__
    #define _update_type__GUARD__
    DECL_STRONG_TYPE(update_type, spiderrock::protobuf::api::UpdateType);
    #endif//_update_type__GUARD__

    #ifndef _bid_price__float__GUARD__
    #define _bid_price__float__GUARD__
    DECL_STRONG_TYPE(bid_price__float, float);
    #endif//_bid_price__float__GUARD__

    #ifndef _ask_price__float__GUARD__
    #define _ask_price__float__GUARD__
    DECL_STRONG_TYPE(ask_price__float, float);
    #endif//_ask_price__float__GUARD__

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

    #ifndef _bid_exch__GUARD__
    #define _bid_exch__GUARD__
    DECL_STRONG_TYPE(bid_exch, spiderrock::protobuf::api::OptExch);
    #endif//_bid_exch__GUARD__

    #ifndef _ask_exch__GUARD__
    #define _ask_exch__GUARD__
    DECL_STRONG_TYPE(ask_exch, spiderrock::protobuf::api::OptExch);
    #endif//_ask_exch__GUARD__

    #ifndef _bid_mask__GUARD__
    #define _bid_mask__GUARD__
    DECL_STRONG_TYPE(bid_mask, uint32);
    #endif//_bid_mask__GUARD__

    #ifndef _ask_mask__GUARD__
    #define _ask_mask__GUARD__
    DECL_STRONG_TYPE(ask_mask, uint32);
    #endif//_ask_mask__GUARD__

    #ifndef _bid_mkt_type__GUARD__
    #define _bid_mkt_type__GUARD__
    DECL_STRONG_TYPE(bid_mkt_type, spiderrock::protobuf::api::OptMktType);
    #endif//_bid_mkt_type__GUARD__

    #ifndef _ask_mkt_type__GUARD__
    #define _ask_mkt_type__GUARD__
    DECL_STRONG_TYPE(ask_mkt_type, spiderrock::protobuf::api::OptMktType);
    #endif//_ask_mkt_type__GUARD__

    #ifndef _bid_price2__float__GUARD__
    #define _bid_price2__float__GUARD__
    DECL_STRONG_TYPE(bid_price2__float, float);
    #endif//_bid_price2__float__GUARD__

    #ifndef _ask_price2__float__GUARD__
    #define _ask_price2__float__GUARD__
    DECL_STRONG_TYPE(ask_price2__float, float);
    #endif//_ask_price2__float__GUARD__

    #ifndef _cum_bid_size2__GUARD__
    #define _cum_bid_size2__GUARD__
    DECL_STRONG_TYPE(cum_bid_size2, int32);
    #endif//_cum_bid_size2__GUARD__

    #ifndef _cum_ask_size2__GUARD__
    #define _cum_ask_size2__GUARD__
    DECL_STRONG_TYPE(cum_ask_size2, int32);
    #endif//_cum_ask_size2__GUARD__

    #ifndef _bid_time__int32__GUARD__
    #define _bid_time__int32__GUARD__
    DECL_STRONG_TYPE(bid_time__int32, int32);
    #endif//_bid_time__int32__GUARD__

    #ifndef _ask_time__int32__GUARD__
    #define _ask_time__int32__GUARD__
    DECL_STRONG_TYPE(ask_time__int32, int32);
    #endif//_ask_time__int32__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionNbboQuote_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionNbboQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionNbboQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionNbboQuote_PKey() {}

        virtual ~OptionNbboQuote_PKey() {
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
    

    class OptionNbboQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionNbboQuote_PKey;
        using update_type = spiderrock::protobuf::api::update_type;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using cum_bid_size = spiderrock::protobuf::api::cum_bid_size;
        using cum_ask_size = spiderrock::protobuf::api::cum_ask_size;
        using bid_exch = spiderrock::protobuf::api::bid_exch;
        using ask_exch = spiderrock::protobuf::api::ask_exch;
        using bid_mask = spiderrock::protobuf::api::bid_mask;
        using ask_mask = spiderrock::protobuf::api::ask_mask;
        using bid_mkt_type = spiderrock::protobuf::api::bid_mkt_type;
        using ask_mkt_type = spiderrock::protobuf::api::ask_mkt_type;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__float;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__float;
        using cum_bid_size2 = spiderrock::protobuf::api::cum_bid_size2;
        using cum_ask_size2 = spiderrock::protobuf::api::cum_ask_size2;
        using bid_time = spiderrock::protobuf::api::bid_time__int32;
        using ask_time = spiderrock::protobuf::api::ask_time__int32;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        update_type m_update_type{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        cum_bid_size m_cum_bid_size{};
        cum_ask_size m_cum_ask_size{};
        bid_exch m_bid_exch{};
        ask_exch m_ask_exch{};
        bid_mask m_bid_mask{};
        ask_mask m_ask_mask{};
        bid_mkt_type m_bid_mkt_type{};
        ask_mkt_type m_ask_mkt_type{};
        bid_price2 m_bid_price2{};
        ask_price2 m_ask_price2{};
        cum_bid_size2 m_cum_bid_size2{};
        cum_ask_size2 m_cum_ask_size2{};
        bid_time m_bid_time{};
        ask_time m_ask_time{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        update_type get_update_type() const {
            return m_update_type;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
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
        bid_exch get_bid_exch() const {
            return m_bid_exch;
        }		
        ask_exch get_ask_exch() const {
            return m_ask_exch;
        }		
        bid_mask get_bid_mask() const {
            return m_bid_mask;
        }		
        ask_mask get_ask_mask() const {
            return m_ask_mask;
        }		
        bid_mkt_type get_bid_mkt_type() const {
            return m_bid_mkt_type;
        }		
        ask_mkt_type get_ask_mkt_type() const {
            return m_ask_mkt_type;
        }		
        bid_price2 get_bid_price2() const {
            return m_bid_price2;
        }		
        ask_price2 get_ask_price2() const {
            return m_ask_price2;
        }		
        cum_bid_size2 get_cum_bid_size2() const {
            return m_cum_bid_size2;
        }		
        cum_ask_size2 get_cum_ask_size2() const {
            return m_cum_ask_size2;
        }		
        bid_time get_bid_time() const {
            return m_bid_time;
        }		
        ask_time get_ask_time() const {
            return m_ask_time;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
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
        void set_update_type(const update_type& value)  {
            m_update_type = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
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
        void set_bid_exch(const bid_exch& value)  {
            m_bid_exch = value;
        }
        void set_ask_exch(const ask_exch& value)  {
            m_ask_exch = value;
        }
        void set_bid_mask(const bid_mask& value)  {
            m_bid_mask = value;
        }
        void set_ask_mask(const ask_mask& value)  {
            m_ask_mask = value;
        }
        void set_bid_mkt_type(const bid_mkt_type& value)  {
            m_bid_mkt_type = value;
        }
        void set_ask_mkt_type(const ask_mkt_type& value)  {
            m_ask_mkt_type = value;
        }
        void set_bid_price2(const bid_price2& value)  {
            m_bid_price2 = value;
        }
        void set_ask_price2(const ask_price2& value)  {
            m_ask_price2 = value;
        }
        void set_cum_bid_size2(const cum_bid_size2& value)  {
            m_cum_bid_size2 = value;
        }
        void set_cum_ask_size2(const cum_ask_size2& value)  {
            m_cum_ask_size2 = value;
        }
        void set_bid_time(const bid_time& value)  {
            m_bid_time = value;
        }
        void set_ask_time(const ask_time& value)  {
            m_ask_time = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionNbboQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const update_type & value) {
            set_update_type(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
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
        void set(const bid_exch & value) {
            set_bid_exch(value);
        }
        void set(const ask_exch & value) {
            set_ask_exch(value);
        }
        void set(const bid_mask & value) {
            set_bid_mask(value);
        }
        void set(const ask_mask & value) {
            set_ask_mask(value);
        }
        void set(const bid_mkt_type & value) {
            set_bid_mkt_type(value);
        }
        void set(const ask_mkt_type & value) {
            set_ask_mkt_type(value);
        }
        void set(const bid_price2 & value) {
            set_bid_price2(value);
        }
        void set(const ask_price2 & value) {
            set_ask_price2(value);
        }
        void set(const cum_bid_size2 & value) {
            set_cum_bid_size2(value);
        }
        void set(const cum_ask_size2 & value) {
            set_cum_ask_size2(value);
        }
        void set(const bid_time & value) {
            set_bid_time(value);
        }
        void set(const ask_time & value) {
            set_ask_time(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }

        void set(const OptionNbboQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_update_type);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_cum_bid_size);
            set(value.m_cum_ask_size);
            set(value.m_bid_exch);
            set(value.m_ask_exch);
            set(value.m_bid_mask);
            set(value.m_ask_mask);
            set(value.m_bid_mkt_type);
            set(value.m_ask_mkt_type);
            set(value.m_bid_price2);
            set(value.m_ask_price2);
            set(value.m_cum_bid_size2);
            set(value.m_cum_ask_size2);
            set(value.m_bid_time);
            set(value.m_ask_time);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
        }

        OptionNbboQuote() {
            m__meta.set_message_type("OptionNbboQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2785, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2785, length);
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
             *this = OptionNbboQuote{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
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
        bool IncludeBidMask() const {
            return !(m_bid_mask == 0);
        }
        bool IncludeAskMask() const {
            return !(m_ask_mask == 0);
        }
        bool IncludeBidPrice2() const {
            return !(m_bid_price2 == 0.0);
        }
        bool IncludeAskPrice2() const {
            return !(m_ask_price2 == 0.0);
        }
        bool IncludeCumBidSize2() const {
            return !(m_cum_bid_size2 == 0);
        }
        bool IncludeCumAskSize2() const {
            return !(m_cum_ask_size2 == 0);
        }
        bool IncludeBidTime() const {
            return !(m_bid_time == 0);
        }
        bool IncludeAskTime() const {
            return !(m_ask_time == 0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_ask_size);
            }
            if ( IncludeCumBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_cum_bid_size);
            }
            if ( IncludeCumAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_cum_ask_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_bid_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_ask_exch)));
            if ( IncludeBidMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(127,m_bid_mask);
            }
            if ( IncludeAskMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(130,m_ask_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptMktType>(m_bid_mkt_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptMktType>(m_ask_mkt_type)));
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_ask_price2);
            }
            if ( IncludeCumBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_cum_bid_size2);
            }
            if ( IncludeCumAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_cum_ask_size2);
            }
            if ( IncludeBidTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_bid_time);
            }
            if ( IncludeAskTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_ask_time);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_net_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_ask_size);
            }
            if ( IncludeCumBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_cum_bid_size);
            }
            if ( IncludeCumAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_cum_ask_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_bid_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_ask_exch)));
            if ( IncludeBidMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,127,m_bid_mask);
            }
            if ( IncludeAskMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,130,m_ask_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptMktType>(m_bid_mkt_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptMktType>(m_ask_mkt_type)));
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_ask_price2);
            }
            if ( IncludeCumBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_cum_bid_size2);
            }
            if ( IncludeCumAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_cum_ask_size2);
            }
            if ( IncludeBidTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_bid_time);
            }
            if ( IncludeAskTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_ask_time);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_net_timestamp);
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
                            m_update_type = static_cast<spiderrock::protobuf::api::UpdateType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_mkt_type = static_cast<spiderrock::protobuf::api::OptMktType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_mkt_type = static_cast<spiderrock::protobuf::api::OptMktType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::_meta>() const { return OptionNbboQuote::_meta{ m__meta}; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::pkey>() const { return OptionNbboQuote::pkey{ m_pkey}; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::update_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>( m_update_type)); }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_price>() const { return m_bid_price; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_price>() const { return m_ask_price; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_size>() const { return m_bid_size; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_size>() const { return m_ask_size; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::cum_bid_size>() const { return m_cum_bid_size; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::cum_ask_size>() const { return m_cum_ask_size; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_bid_exch)); }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_ask_exch)); }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_mask>() const { return m_bid_mask; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_mask>() const { return m_ask_mask; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_mkt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptMktType>( m_bid_mkt_type)); }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_mkt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptMktType>( m_ask_mkt_type)); }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::cum_bid_size2>() const { return m_cum_bid_size2; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::cum_ask_size2>() const { return m_cum_ask_size2; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::bid_time>() const { return m_bid_time; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::ask_time>() const { return m_ask_time; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto OptionNbboQuote::get<OptionNbboQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionNbboQuote_PKey::get<OptionNbboQuote_PKey::okey>() const { return OptionNbboQuote_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionNbboQuote_PKey& m) {
        o << "\"okey\":{" << m.get<OptionNbboQuote_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionNbboQuote& m) {
        o << "\"_meta\":{" << m.get<OptionNbboQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionNbboQuote::pkey>() << "}";
        o << ",\"update_type\":" << (int64_t)m.get<OptionNbboQuote::update_type>();
        o << ",\"bid_price\":" << m.get<OptionNbboQuote::bid_price>();
        o << ",\"ask_price\":" << m.get<OptionNbboQuote::ask_price>();
        o << ",\"bid_size\":" << m.get<OptionNbboQuote::bid_size>();
        o << ",\"ask_size\":" << m.get<OptionNbboQuote::ask_size>();
        o << ",\"cum_bid_size\":" << m.get<OptionNbboQuote::cum_bid_size>();
        o << ",\"cum_ask_size\":" << m.get<OptionNbboQuote::cum_ask_size>();
        o << ",\"bid_exch\":" << (int64_t)m.get<OptionNbboQuote::bid_exch>();
        o << ",\"ask_exch\":" << (int64_t)m.get<OptionNbboQuote::ask_exch>();
        o << ",\"bid_mask\":" << m.get<OptionNbboQuote::bid_mask>();
        o << ",\"ask_mask\":" << m.get<OptionNbboQuote::ask_mask>();
        o << ",\"bid_mkt_type\":" << (int64_t)m.get<OptionNbboQuote::bid_mkt_type>();
        o << ",\"ask_mkt_type\":" << (int64_t)m.get<OptionNbboQuote::ask_mkt_type>();
        o << ",\"bid_price2\":" << m.get<OptionNbboQuote::bid_price2>();
        o << ",\"ask_price2\":" << m.get<OptionNbboQuote::ask_price2>();
        o << ",\"cum_bid_size2\":" << m.get<OptionNbboQuote::cum_bid_size2>();
        o << ",\"cum_ask_size2\":" << m.get<OptionNbboQuote::cum_ask_size2>();
        o << ",\"bid_time\":" << m.get<OptionNbboQuote::bid_time>();
        o << ",\"ask_time\":" << m.get<OptionNbboQuote::ask_time>();
        o << ",\"src_timestamp\":" << m.get<OptionNbboQuote::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionNbboQuote::net_timestamp>();
        return o;
    }

}
}
}