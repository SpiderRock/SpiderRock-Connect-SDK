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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _srspread_id__GUARD__
    #define _srspread_id__GUARD__
    DECL_STRONG_TYPE(srspread_id, int64);
    #endif//_srspread_id__GUARD__

    #ifndef _bid_price1__double__GUARD__
    #define _bid_price1__double__GUARD__
    DECL_STRONG_TYPE(bid_price1__double, double);
    #endif//_bid_price1__double__GUARD__

    #ifndef _is_bid_price1_valid__GUARD__
    #define _is_bid_price1_valid__GUARD__
    DECL_STRONG_TYPE(is_bid_price1_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_bid_price1_valid__GUARD__

    #ifndef _ask_price1__double__GUARD__
    #define _ask_price1__double__GUARD__
    DECL_STRONG_TYPE(ask_price1__double, double);
    #endif//_ask_price1__double__GUARD__

    #ifndef _is_ask_price1_valid__GUARD__
    #define _is_ask_price1_valid__GUARD__
    DECL_STRONG_TYPE(is_ask_price1_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_ask_price1_valid__GUARD__

    #ifndef _bid_size1__GUARD__
    #define _bid_size1__GUARD__
    DECL_STRONG_TYPE(bid_size1, int32);
    #endif//_bid_size1__GUARD__

    #ifndef _ask_size1__GUARD__
    #define _ask_size1__GUARD__
    DECL_STRONG_TYPE(ask_size1, int32);
    #endif//_ask_size1__GUARD__

    #ifndef _bid_price2__double__GUARD__
    #define _bid_price2__double__GUARD__
    DECL_STRONG_TYPE(bid_price2__double, double);
    #endif//_bid_price2__double__GUARD__

    #ifndef _is_bid_price2_valid__GUARD__
    #define _is_bid_price2_valid__GUARD__
    DECL_STRONG_TYPE(is_bid_price2_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_bid_price2_valid__GUARD__

    #ifndef _ask_price2__double__GUARD__
    #define _ask_price2__double__GUARD__
    DECL_STRONG_TYPE(ask_price2__double, double);
    #endif//_ask_price2__double__GUARD__

    #ifndef _is_ask_price2_valid__GUARD__
    #define _is_ask_price2_valid__GUARD__
    DECL_STRONG_TYPE(is_ask_price2_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_ask_price2_valid__GUARD__

    #ifndef _bid_size2__GUARD__
    #define _bid_size2__GUARD__
    DECL_STRONG_TYPE(bid_size2, int32);
    #endif//_bid_size2__GUARD__

    #ifndef _ask_size2__GUARD__
    #define _ask_size2__GUARD__
    DECL_STRONG_TYPE(ask_size2, int32);
    #endif//_ask_size2__GUARD__

    #ifndef _bid_exch1__OptExch__GUARD__
    #define _bid_exch1__OptExch__GUARD__
    DECL_STRONG_TYPE(bid_exch1__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_bid_exch1__OptExch__GUARD__

    #ifndef _ask_exch1__OptExch__GUARD__
    #define _ask_exch1__OptExch__GUARD__
    DECL_STRONG_TYPE(ask_exch1__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_ask_exch1__OptExch__GUARD__

    #ifndef _bid_mask1__GUARD__
    #define _bid_mask1__GUARD__
    DECL_STRONG_TYPE(bid_mask1, uint32);
    #endif//_bid_mask1__GUARD__

    #ifndef _ask_mask1__GUARD__
    #define _ask_mask1__GUARD__
    DECL_STRONG_TYPE(ask_mask1, uint32);
    #endif//_ask_mask1__GUARD__

    #ifndef _bid_time__timestamp__GUARD__
    #define _bid_time__timestamp__GUARD__
    DECL_STRONG_TYPE(bid_time__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_bid_time__timestamp__GUARD__

    #ifndef _ask_time__timestamp__GUARD__
    #define _ask_time__timestamp__GUARD__
    DECL_STRONG_TYPE(ask_time__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_ask_time__timestamp__GUARD__

    #ifndef _print_volume__GUARD__
    #define _print_volume__GUARD__
    DECL_STRONG_TYPE(print_volume, int32);
    #endif//_print_volume__GUARD__

    #ifndef _update_type__UpdateType__GUARD__
    #define _update_type__UpdateType__GUARD__
    DECL_STRONG_TYPE(update_type__UpdateType, spiderrock::protobuf::api::UpdateType);
    #endif//_update_type__UpdateType__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _skey__GUARD__
    #define _skey__GUARD__
    DECL_STRONG_TYPE(skey, TickerKey);
    #endif//_skey__GUARD__

    #ifndef _is_test__GUARD__
    #define _is_test__GUARD__
    DECL_STRONG_TYPE(is_test, spiderrock::protobuf::api::YesNo);
    #endif//_is_test__GUARD__

    
    class SpreadBookQuote_PKey {
        public:
        //using statements for all types used in this class
        using skey = spiderrock::protobuf::api::skey;
        using is_test = spiderrock::protobuf::api::is_test;

        private:
        skey m_skey{};
        is_test m_is_test{};

        public:
		skey get_skey() const {
            return m_skey;
        }
        is_test get_is_test() const {
            return m_is_test;
        }
        void set_skey(const skey& value)  {
            m_skey = value;
        }
        void set_is_test(const is_test& value)  {
            m_is_test = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const skey & value) { set_skey(value); }
        void set(const is_test & value) { set_is_test(value); }


        SpreadBookQuote_PKey() {}

        virtual ~SpreadBookQuote_PKey() {
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
        bool IncludeSkey() const {
            return (m_skey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_skey;
                m_skey.setCodecTickerKey(tickerKeyLayout_skey);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_skey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_skey;
                m_skey.setCodecTickerKey(tickerKeyLayout_skey);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_skey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test)));
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
                        m_skey.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_is_test = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadBookQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadBookQuote_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using srspread_id = spiderrock::protobuf::api::srspread_id;
        using bid_price1 = spiderrock::protobuf::api::bid_price1__double;
        using is_bid_price1_valid = spiderrock::protobuf::api::is_bid_price1_valid;
        using ask_price1 = spiderrock::protobuf::api::ask_price1__double;
        using is_ask_price1_valid = spiderrock::protobuf::api::is_ask_price1_valid;
        using bid_size1 = spiderrock::protobuf::api::bid_size1;
        using ask_size1 = spiderrock::protobuf::api::ask_size1;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__double;
        using is_bid_price2_valid = spiderrock::protobuf::api::is_bid_price2_valid;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__double;
        using is_ask_price2_valid = spiderrock::protobuf::api::is_ask_price2_valid;
        using bid_size2 = spiderrock::protobuf::api::bid_size2;
        using ask_size2 = spiderrock::protobuf::api::ask_size2;
        using bid_exch1 = spiderrock::protobuf::api::bid_exch1__OptExch;
        using ask_exch1 = spiderrock::protobuf::api::ask_exch1__OptExch;
        using bid_mask1 = spiderrock::protobuf::api::bid_mask1;
        using ask_mask1 = spiderrock::protobuf::api::ask_mask1;
        using bid_time = spiderrock::protobuf::api::bid_time__timestamp;
        using ask_time = spiderrock::protobuf::api::ask_time__timestamp;
        using print_volume = spiderrock::protobuf::api::print_volume;
        using update_type = spiderrock::protobuf::api::update_type__UpdateType;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        srspread_id m_srspread_id{};
        bid_price1 m_bid_price1{};
        is_bid_price1_valid m_is_bid_price1_valid{};
        ask_price1 m_ask_price1{};
        is_ask_price1_valid m_is_ask_price1_valid{};
        bid_size1 m_bid_size1{};
        ask_size1 m_ask_size1{};
        bid_price2 m_bid_price2{};
        is_bid_price2_valid m_is_bid_price2_valid{};
        ask_price2 m_ask_price2{};
        is_ask_price2_valid m_is_ask_price2_valid{};
        bid_size2 m_bid_size2{};
        ask_size2 m_ask_size2{};
        bid_exch1 m_bid_exch1{};
        ask_exch1 m_ask_exch1{};
        bid_mask1 m_bid_mask1{};
        ask_mask1 m_ask_mask1{};
        bid_time m_bid_time{};
        ask_time m_ask_time{};
        print_volume m_print_volume{};
        update_type m_update_type{};
        src_timestamp m_src_timestamp{};
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
        ticker get_ticker() const {
            return m_ticker;
        }		
        srspread_id get_srspread_id() const {
            return m_srspread_id;
        }		
        bid_price1 get_bid_price1() const {
            return m_bid_price1;
        }		
        is_bid_price1_valid get_is_bid_price1_valid() const {
            return m_is_bid_price1_valid;
        }		
        ask_price1 get_ask_price1() const {
            return m_ask_price1;
        }		
        is_ask_price1_valid get_is_ask_price1_valid() const {
            return m_is_ask_price1_valid;
        }		
        bid_size1 get_bid_size1() const {
            return m_bid_size1;
        }		
        ask_size1 get_ask_size1() const {
            return m_ask_size1;
        }		
        bid_price2 get_bid_price2() const {
            return m_bid_price2;
        }		
        is_bid_price2_valid get_is_bid_price2_valid() const {
            return m_is_bid_price2_valid;
        }		
        ask_price2 get_ask_price2() const {
            return m_ask_price2;
        }		
        is_ask_price2_valid get_is_ask_price2_valid() const {
            return m_is_ask_price2_valid;
        }		
        bid_size2 get_bid_size2() const {
            return m_bid_size2;
        }		
        ask_size2 get_ask_size2() const {
            return m_ask_size2;
        }		
        bid_exch1 get_bid_exch1() const {
            return m_bid_exch1;
        }		
        ask_exch1 get_ask_exch1() const {
            return m_ask_exch1;
        }		
        bid_mask1 get_bid_mask1() const {
            return m_bid_mask1;
        }		
        ask_mask1 get_ask_mask1() const {
            return m_ask_mask1;
        }		
        bid_time get_bid_time() const {
            return m_bid_time;
        }		
        ask_time get_ask_time() const {
            return m_ask_time;
        }		
        print_volume get_print_volume() const {
            return m_print_volume;
        }		
        update_type get_update_type() const {
            return m_update_type;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_srspread_id(const srspread_id& value)  {
            m_srspread_id = value;
        }
        void set_bid_price1(const bid_price1& value)  {
            m_bid_price1 = value;
        }
        void set_is_bid_price1_valid(const is_bid_price1_valid& value)  {
            m_is_bid_price1_valid = value;
        }
        void set_ask_price1(const ask_price1& value)  {
            m_ask_price1 = value;
        }
        void set_is_ask_price1_valid(const is_ask_price1_valid& value)  {
            m_is_ask_price1_valid = value;
        }
        void set_bid_size1(const bid_size1& value)  {
            m_bid_size1 = value;
        }
        void set_ask_size1(const ask_size1& value)  {
            m_ask_size1 = value;
        }
        void set_bid_price2(const bid_price2& value)  {
            m_bid_price2 = value;
        }
        void set_is_bid_price2_valid(const is_bid_price2_valid& value)  {
            m_is_bid_price2_valid = value;
        }
        void set_ask_price2(const ask_price2& value)  {
            m_ask_price2 = value;
        }
        void set_is_ask_price2_valid(const is_ask_price2_valid& value)  {
            m_is_ask_price2_valid = value;
        }
        void set_bid_size2(const bid_size2& value)  {
            m_bid_size2 = value;
        }
        void set_ask_size2(const ask_size2& value)  {
            m_ask_size2 = value;
        }
        void set_bid_exch1(const bid_exch1& value)  {
            m_bid_exch1 = value;
        }
        void set_ask_exch1(const ask_exch1& value)  {
            m_ask_exch1 = value;
        }
        void set_bid_mask1(const bid_mask1& value)  {
            m_bid_mask1 = value;
        }
        void set_ask_mask1(const ask_mask1& value)  {
            m_ask_mask1 = value;
        }
        void set_bid_time(const bid_time& value)  {
            m_bid_time = value;
        }
        void set_ask_time(const ask_time& value)  {
            m_ask_time = value;
        }
        void set_print_volume(const print_volume& value)  {
            m_print_volume = value;
        }
        void set_update_type(const update_type& value)  {
            m_update_type = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadBookQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const srspread_id & value) {
            set_srspread_id(value);
        }
        void set(const bid_price1 & value) {
            set_bid_price1(value);
        }
        void set(const is_bid_price1_valid & value) {
            set_is_bid_price1_valid(value);
        }
        void set(const ask_price1 & value) {
            set_ask_price1(value);
        }
        void set(const is_ask_price1_valid & value) {
            set_is_ask_price1_valid(value);
        }
        void set(const bid_size1 & value) {
            set_bid_size1(value);
        }
        void set(const ask_size1 & value) {
            set_ask_size1(value);
        }
        void set(const bid_price2 & value) {
            set_bid_price2(value);
        }
        void set(const is_bid_price2_valid & value) {
            set_is_bid_price2_valid(value);
        }
        void set(const ask_price2 & value) {
            set_ask_price2(value);
        }
        void set(const is_ask_price2_valid & value) {
            set_is_ask_price2_valid(value);
        }
        void set(const bid_size2 & value) {
            set_bid_size2(value);
        }
        void set(const ask_size2 & value) {
            set_ask_size2(value);
        }
        void set(const bid_exch1 & value) {
            set_bid_exch1(value);
        }
        void set(const ask_exch1 & value) {
            set_ask_exch1(value);
        }
        void set(const bid_mask1 & value) {
            set_bid_mask1(value);
        }
        void set(const ask_mask1 & value) {
            set_ask_mask1(value);
        }
        void set(const bid_time & value) {
            set_bid_time(value);
        }
        void set(const ask_time & value) {
            set_ask_time(value);
        }
        void set(const print_volume & value) {
            set_print_volume(value);
        }
        void set(const update_type & value) {
            set_update_type(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpreadBookQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_srspread_id);
            set(value.m_bid_price1);
            set(value.m_is_bid_price1_valid);
            set(value.m_ask_price1);
            set(value.m_is_ask_price1_valid);
            set(value.m_bid_size1);
            set(value.m_ask_size1);
            set(value.m_bid_price2);
            set(value.m_is_bid_price2_valid);
            set(value.m_ask_price2);
            set(value.m_is_ask_price2_valid);
            set(value.m_bid_size2);
            set(value.m_ask_size2);
            set(value.m_bid_exch1);
            set(value.m_ask_exch1);
            set(value.m_bid_mask1);
            set(value.m_ask_mask1);
            set(value.m_bid_time);
            set(value.m_ask_time);
            set(value.m_print_volume);
            set(value.m_update_type);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        SpreadBookQuote() {
            m__meta.set_message_type("SpreadBookQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2900, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2900, length);
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
             *this = SpreadBookQuote{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeSrspreadId() const {
            return !(m_srspread_id == 0);
        }
        bool IncludeBidPrice1() const {
            return !(m_bid_price1 == 0.0);
        }
        bool IncludeAskPrice1() const {
            return !(m_ask_price1 == 0.0);
        }
        bool IncludeBidSize1() const {
            return !(m_bid_size1 == 0);
        }
        bool IncludeAskSize1() const {
            return !(m_ask_size1 == 0);
        }
        bool IncludeBidPrice2() const {
            return !(m_bid_price2 == 0.0);
        }
        bool IncludeAskPrice2() const {
            return !(m_ask_price2 == 0.0);
        }
        bool IncludeBidSize2() const {
            return !(m_bid_size2 == 0);
        }
        bool IncludeAskSize2() const {
            return !(m_ask_size2 == 0);
        }
        bool IncludeBidMask1() const {
            return !(m_bid_mask1 == 0);
        }
        bool IncludeAskMask1() const {
            return !(m_ask_mask1 == 0);
        }
        bool IncludeBidTime() const {
            return (m_bid_time.time_since_epoch().count() != 0);
        }
        bool IncludeAskTime() const {
            return (m_ask_time.time_since_epoch().count() != 0);
        }
        bool IncludePrintVolume() const {
            return !(m_print_volume == 0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeSrspreadId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(167,m_srspread_id);
            }
            if ( IncludeBidPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_bid_price1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_bid_price1_valid)));
            if ( IncludeAskPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_ask_price1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_ask_price1_valid)));
            if ( IncludeBidSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_bid_size1);
            }
            if ( IncludeAskSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_ask_size1);
            }
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_bid_price2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_bid_price2_valid)));
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_ask_price2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_ask_price2_valid)));
            if ( IncludeBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_ask_size2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_bid_exch1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_ask_exch1)));
            if ( IncludeBidMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(145,m_bid_mask1);
            }
            if ( IncludeAskMask1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(148,m_ask_mask1);
            }
            if ( IncludeBidTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(151, m_bid_time);
            }
            if ( IncludeAskTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(154, m_ask_time);
            }
            if ( IncludePrintVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(168,m_print_volume);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_src_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            if ( IncludeSrspreadId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,167,m_srspread_id);
            }
            if ( IncludeBidPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_bid_price1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_bid_price1_valid)));
            if ( IncludeAskPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_ask_price1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_ask_price1_valid)));
            if ( IncludeBidSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_bid_size1);
            }
            if ( IncludeAskSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_ask_size1);
            }
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_bid_price2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_bid_price2_valid)));
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_ask_price2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_ask_price2_valid)));
            if ( IncludeBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_ask_size2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_bid_exch1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_ask_exch1)));
            if ( IncludeBidMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,145,m_bid_mask1);
            }
            if ( IncludeAskMask1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,148,m_ask_mask1);
            }
            if ( IncludeBidTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 151, m_bid_time);
            }
            if ( IncludeAskTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 154, m_ask_time);
            }
            if ( IncludePrintVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,168,m_print_volume);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>(m_update_type)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_src_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 167: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_srspread_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_bid_price1_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_ask_price1_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_bid_price2_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_ask_price2_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_exch1 = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_exch1 = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_bid_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ask_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 168: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_print_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_update_type = static_cast<spiderrock::protobuf::api::UpdateType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
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

    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::_meta>() const { return SpreadBookQuote::_meta{ m__meta}; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::pkey>() const { return SpreadBookQuote::pkey{ m_pkey}; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ticker>() const { return SpreadBookQuote::ticker{ m_ticker}; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::srspread_id>() const { return m_srspread_id; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_price1>() const { return m_bid_price1; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::is_bid_price1_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_bid_price1_valid)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_price1>() const { return m_ask_price1; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::is_ask_price1_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_ask_price1_valid)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_size1>() const { return m_bid_size1; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_size1>() const { return m_ask_size1; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::is_bid_price2_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_bid_price2_valid)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::is_ask_price2_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_ask_price2_valid)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_size2>() const { return m_bid_size2; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_size2>() const { return m_ask_size2; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_exch1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_bid_exch1)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_exch1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_ask_exch1)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_mask1>() const { return m_bid_mask1; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_mask1>() const { return m_ask_mask1; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::bid_time>() const { return m_bid_time; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::ask_time>() const { return m_ask_time; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::print_volume>() const { return m_print_volume; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::update_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>( m_update_type)); }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpreadBookQuote::get<SpreadBookQuote::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadBookQuote_PKey::get<SpreadBookQuote_PKey::skey>() const { return SpreadBookQuote_PKey::skey{m_skey}; }
    template<> inline const auto SpreadBookQuote_PKey::get<SpreadBookQuote_PKey::is_test>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadBookQuote_PKey& m) {
        o << "\"skey\":{" << m.get<SpreadBookQuote_PKey::skey>() << "}";
        o << ",\"is_test\":" << (int64_t)m.get<SpreadBookQuote_PKey::is_test>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadBookQuote& m) {
        o << "\"_meta\":{" << m.get<SpreadBookQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadBookQuote::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpreadBookQuote::ticker>() << "}";
        o << ",\"srspread_id\":" << m.get<SpreadBookQuote::srspread_id>();
        o << ",\"bid_price1\":" << m.get<SpreadBookQuote::bid_price1>();
        o << ",\"is_bid_price1_valid\":" << (int64_t)m.get<SpreadBookQuote::is_bid_price1_valid>();
        o << ",\"ask_price1\":" << m.get<SpreadBookQuote::ask_price1>();
        o << ",\"is_ask_price1_valid\":" << (int64_t)m.get<SpreadBookQuote::is_ask_price1_valid>();
        o << ",\"bid_size1\":" << m.get<SpreadBookQuote::bid_size1>();
        o << ",\"ask_size1\":" << m.get<SpreadBookQuote::ask_size1>();
        o << ",\"bid_price2\":" << m.get<SpreadBookQuote::bid_price2>();
        o << ",\"is_bid_price2_valid\":" << (int64_t)m.get<SpreadBookQuote::is_bid_price2_valid>();
        o << ",\"ask_price2\":" << m.get<SpreadBookQuote::ask_price2>();
        o << ",\"is_ask_price2_valid\":" << (int64_t)m.get<SpreadBookQuote::is_ask_price2_valid>();
        o << ",\"bid_size2\":" << m.get<SpreadBookQuote::bid_size2>();
        o << ",\"ask_size2\":" << m.get<SpreadBookQuote::ask_size2>();
        o << ",\"bid_exch1\":" << (int64_t)m.get<SpreadBookQuote::bid_exch1>();
        o << ",\"ask_exch1\":" << (int64_t)m.get<SpreadBookQuote::ask_exch1>();
        o << ",\"bid_mask1\":" << m.get<SpreadBookQuote::bid_mask1>();
        o << ",\"ask_mask1\":" << m.get<SpreadBookQuote::ask_mask1>();
        {
            std::time_t tt = m.get<SpreadBookQuote::bid_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"bid_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpreadBookQuote::ask_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ask_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"print_volume\":" << m.get<SpreadBookQuote::print_volume>();
        o << ",\"update_type\":" << (int64_t)m.get<SpreadBookQuote::update_type>();
        o << ",\"src_timestamp\":" << m.get<SpreadBookQuote::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<SpreadBookQuote::net_timestamp>();
        {
            std::time_t tt = m.get<SpreadBookQuote::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}