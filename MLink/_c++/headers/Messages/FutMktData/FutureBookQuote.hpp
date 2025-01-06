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

    #ifndef _update_type__UpdateType__GUARD__
    #define _update_type__UpdateType__GUARD__
    DECL_STRONG_TYPE(update_type__UpdateType, spiderrock::protobuf::api::UpdateType);
    #endif//_update_type__UpdateType__GUARD__

    #ifndef _market_status__GUARD__
    #define _market_status__GUARD__
    DECL_STRONG_TYPE(market_status, spiderrock::protobuf::api::MarketStatus);
    #endif//_market_status__GUARD__

    #ifndef _bid_price1__double__GUARD__
    #define _bid_price1__double__GUARD__
    DECL_STRONG_TYPE(bid_price1__double, double);
    #endif//_bid_price1__double__GUARD__

    #ifndef _ask_price1__double__GUARD__
    #define _ask_price1__double__GUARD__
    DECL_STRONG_TYPE(ask_price1__double, double);
    #endif//_ask_price1__double__GUARD__

    #ifndef _bid_size1__GUARD__
    #define _bid_size1__GUARD__
    DECL_STRONG_TYPE(bid_size1, int32);
    #endif//_bid_size1__GUARD__

    #ifndef _ask_size1__GUARD__
    #define _ask_size1__GUARD__
    DECL_STRONG_TYPE(ask_size1, int32);
    #endif//_ask_size1__GUARD__

    #ifndef _bid_orders1__GUARD__
    #define _bid_orders1__GUARD__
    DECL_STRONG_TYPE(bid_orders1, uint32);
    #endif//_bid_orders1__GUARD__

    #ifndef _ask_orders1__GUARD__
    #define _ask_orders1__GUARD__
    DECL_STRONG_TYPE(ask_orders1, uint32);
    #endif//_ask_orders1__GUARD__

    #ifndef _bid_price2__double__GUARD__
    #define _bid_price2__double__GUARD__
    DECL_STRONG_TYPE(bid_price2__double, double);
    #endif//_bid_price2__double__GUARD__

    #ifndef _ask_price2__double__GUARD__
    #define _ask_price2__double__GUARD__
    DECL_STRONG_TYPE(ask_price2__double, double);
    #endif//_ask_price2__double__GUARD__

    #ifndef _bid_size2__GUARD__
    #define _bid_size2__GUARD__
    DECL_STRONG_TYPE(bid_size2, int32);
    #endif//_bid_size2__GUARD__

    #ifndef _ask_size2__GUARD__
    #define _ask_size2__GUARD__
    DECL_STRONG_TYPE(ask_size2, int32);
    #endif//_ask_size2__GUARD__

    #ifndef _bid_orders2__GUARD__
    #define _bid_orders2__GUARD__
    DECL_STRONG_TYPE(bid_orders2, uint32);
    #endif//_bid_orders2__GUARD__

    #ifndef _ask_orders2__GUARD__
    #define _ask_orders2__GUARD__
    DECL_STRONG_TYPE(ask_orders2, uint32);
    #endif//_ask_orders2__GUARD__

    #ifndef _bid_price3__GUARD__
    #define _bid_price3__GUARD__
    DECL_STRONG_TYPE(bid_price3, double);
    #endif//_bid_price3__GUARD__

    #ifndef _ask_price3__GUARD__
    #define _ask_price3__GUARD__
    DECL_STRONG_TYPE(ask_price3, double);
    #endif//_ask_price3__GUARD__

    #ifndef _bid_size3__GUARD__
    #define _bid_size3__GUARD__
    DECL_STRONG_TYPE(bid_size3, int32);
    #endif//_bid_size3__GUARD__

    #ifndef _ask_size3__GUARD__
    #define _ask_size3__GUARD__
    DECL_STRONG_TYPE(ask_size3, int32);
    #endif//_ask_size3__GUARD__

    #ifndef _bid_orders3__GUARD__
    #define _bid_orders3__GUARD__
    DECL_STRONG_TYPE(bid_orders3, uint32);
    #endif//_bid_orders3__GUARD__

    #ifndef _ask_orders3__GUARD__
    #define _ask_orders3__GUARD__
    DECL_STRONG_TYPE(ask_orders3, uint32);
    #endif//_ask_orders3__GUARD__

    #ifndef _bid_price4__GUARD__
    #define _bid_price4__GUARD__
    DECL_STRONG_TYPE(bid_price4, double);
    #endif//_bid_price4__GUARD__

    #ifndef _ask_price4__GUARD__
    #define _ask_price4__GUARD__
    DECL_STRONG_TYPE(ask_price4, double);
    #endif//_ask_price4__GUARD__

    #ifndef _bid_size4__GUARD__
    #define _bid_size4__GUARD__
    DECL_STRONG_TYPE(bid_size4, int32);
    #endif//_bid_size4__GUARD__

    #ifndef _ask_size4__GUARD__
    #define _ask_size4__GUARD__
    DECL_STRONG_TYPE(ask_size4, int32);
    #endif//_ask_size4__GUARD__

    #ifndef _bid_orders4__GUARD__
    #define _bid_orders4__GUARD__
    DECL_STRONG_TYPE(bid_orders4, uint32);
    #endif//_bid_orders4__GUARD__

    #ifndef _ask_orders4__GUARD__
    #define _ask_orders4__GUARD__
    DECL_STRONG_TYPE(ask_orders4, uint32);
    #endif//_ask_orders4__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    
    class FutureBookQuote_PKey {
        public:
        //using statements for all types used in this class
        using fkey = spiderrock::protobuf::api::fkey;

        private:
        fkey m_fkey{};

        public:
		fkey get_fkey() const {
            return m_fkey;
        }
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FutureBookQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to FutureBookQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fkey & value) { set_fkey(value); }


        FutureBookQuote_PKey() {}

        virtual ~FutureBookQuote_PKey() {
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
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey;
                m_fkey.setCodecExpiryKey(expiryKeyLayout_fkey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_fkey);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_fkey;
                m_fkey.setCodecExpiryKey(expiryKeyLayout_fkey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_fkey);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_fkey.setFromCodec(expiryKey);
                        break;
                    }
                }
            }
        }

    };
    

    class FutureBookQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::FutureBookQuote_PKey;
        using update_type = spiderrock::protobuf::api::update_type__UpdateType;
        using market_status = spiderrock::protobuf::api::market_status;
        using bid_price1 = spiderrock::protobuf::api::bid_price1__double;
        using ask_price1 = spiderrock::protobuf::api::ask_price1__double;
        using bid_size1 = spiderrock::protobuf::api::bid_size1;
        using ask_size1 = spiderrock::protobuf::api::ask_size1;
        using bid_orders1 = spiderrock::protobuf::api::bid_orders1;
        using ask_orders1 = spiderrock::protobuf::api::ask_orders1;
        using bid_price2 = spiderrock::protobuf::api::bid_price2__double;
        using ask_price2 = spiderrock::protobuf::api::ask_price2__double;
        using bid_size2 = spiderrock::protobuf::api::bid_size2;
        using ask_size2 = spiderrock::protobuf::api::ask_size2;
        using bid_orders2 = spiderrock::protobuf::api::bid_orders2;
        using ask_orders2 = spiderrock::protobuf::api::ask_orders2;
        using bid_price3 = spiderrock::protobuf::api::bid_price3;
        using ask_price3 = spiderrock::protobuf::api::ask_price3;
        using bid_size3 = spiderrock::protobuf::api::bid_size3;
        using ask_size3 = spiderrock::protobuf::api::ask_size3;
        using bid_orders3 = spiderrock::protobuf::api::bid_orders3;
        using ask_orders3 = spiderrock::protobuf::api::ask_orders3;
        using bid_price4 = spiderrock::protobuf::api::bid_price4;
        using ask_price4 = spiderrock::protobuf::api::ask_price4;
        using bid_size4 = spiderrock::protobuf::api::bid_size4;
        using ask_size4 = spiderrock::protobuf::api::ask_size4;
        using bid_orders4 = spiderrock::protobuf::api::bid_orders4;
        using ask_orders4 = spiderrock::protobuf::api::ask_orders4;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        update_type m_update_type{};
        market_status m_market_status{};
        bid_price1 m_bid_price1{};
        ask_price1 m_ask_price1{};
        bid_size1 m_bid_size1{};
        ask_size1 m_ask_size1{};
        bid_orders1 m_bid_orders1{};
        ask_orders1 m_ask_orders1{};
        bid_price2 m_bid_price2{};
        ask_price2 m_ask_price2{};
        bid_size2 m_bid_size2{};
        ask_size2 m_ask_size2{};
        bid_orders2 m_bid_orders2{};
        ask_orders2 m_ask_orders2{};
        bid_price3 m_bid_price3{};
        ask_price3 m_ask_price3{};
        bid_size3 m_bid_size3{};
        ask_size3 m_ask_size3{};
        bid_orders3 m_bid_orders3{};
        ask_orders3 m_ask_orders3{};
        bid_price4 m_bid_price4{};
        ask_price4 m_ask_price4{};
        bid_size4 m_bid_size4{};
        ask_size4 m_ask_size4{};
        bid_orders4 m_bid_orders4{};
        ask_orders4 m_ask_orders4{};
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
        market_status get_market_status() const {
            return m_market_status;
        }		
        bid_price1 get_bid_price1() const {
            return m_bid_price1;
        }		
        ask_price1 get_ask_price1() const {
            return m_ask_price1;
        }		
        bid_size1 get_bid_size1() const {
            return m_bid_size1;
        }		
        ask_size1 get_ask_size1() const {
            return m_ask_size1;
        }		
        bid_orders1 get_bid_orders1() const {
            return m_bid_orders1;
        }		
        ask_orders1 get_ask_orders1() const {
            return m_ask_orders1;
        }		
        bid_price2 get_bid_price2() const {
            return m_bid_price2;
        }		
        ask_price2 get_ask_price2() const {
            return m_ask_price2;
        }		
        bid_size2 get_bid_size2() const {
            return m_bid_size2;
        }		
        ask_size2 get_ask_size2() const {
            return m_ask_size2;
        }		
        bid_orders2 get_bid_orders2() const {
            return m_bid_orders2;
        }		
        ask_orders2 get_ask_orders2() const {
            return m_ask_orders2;
        }		
        bid_price3 get_bid_price3() const {
            return m_bid_price3;
        }		
        ask_price3 get_ask_price3() const {
            return m_ask_price3;
        }		
        bid_size3 get_bid_size3() const {
            return m_bid_size3;
        }		
        ask_size3 get_ask_size3() const {
            return m_ask_size3;
        }		
        bid_orders3 get_bid_orders3() const {
            return m_bid_orders3;
        }		
        ask_orders3 get_ask_orders3() const {
            return m_ask_orders3;
        }		
        bid_price4 get_bid_price4() const {
            return m_bid_price4;
        }		
        ask_price4 get_ask_price4() const {
            return m_ask_price4;
        }		
        bid_size4 get_bid_size4() const {
            return m_bid_size4;
        }		
        ask_size4 get_ask_size4() const {
            return m_ask_size4;
        }		
        bid_orders4 get_bid_orders4() const {
            return m_bid_orders4;
        }		
        ask_orders4 get_ask_orders4() const {
            return m_ask_orders4;
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
        void set_market_status(const market_status& value)  {
            m_market_status = value;
        }
        void set_bid_price1(const bid_price1& value)  {
            m_bid_price1 = value;
        }
        void set_ask_price1(const ask_price1& value)  {
            m_ask_price1 = value;
        }
        void set_bid_size1(const bid_size1& value)  {
            m_bid_size1 = value;
        }
        void set_ask_size1(const ask_size1& value)  {
            m_ask_size1 = value;
        }
        void set_bid_orders1(const bid_orders1& value)  {
            m_bid_orders1 = value;
        }
        void set_ask_orders1(const ask_orders1& value)  {
            m_ask_orders1 = value;
        }
        void set_bid_price2(const bid_price2& value)  {
            m_bid_price2 = value;
        }
        void set_ask_price2(const ask_price2& value)  {
            m_ask_price2 = value;
        }
        void set_bid_size2(const bid_size2& value)  {
            m_bid_size2 = value;
        }
        void set_ask_size2(const ask_size2& value)  {
            m_ask_size2 = value;
        }
        void set_bid_orders2(const bid_orders2& value)  {
            m_bid_orders2 = value;
        }
        void set_ask_orders2(const ask_orders2& value)  {
            m_ask_orders2 = value;
        }
        void set_bid_price3(const bid_price3& value)  {
            m_bid_price3 = value;
        }
        void set_ask_price3(const ask_price3& value)  {
            m_ask_price3 = value;
        }
        void set_bid_size3(const bid_size3& value)  {
            m_bid_size3 = value;
        }
        void set_ask_size3(const ask_size3& value)  {
            m_ask_size3 = value;
        }
        void set_bid_orders3(const bid_orders3& value)  {
            m_bid_orders3 = value;
        }
        void set_ask_orders3(const ask_orders3& value)  {
            m_ask_orders3 = value;
        }
        void set_bid_price4(const bid_price4& value)  {
            m_bid_price4 = value;
        }
        void set_ask_price4(const ask_price4& value)  {
            m_ask_price4 = value;
        }
        void set_bid_size4(const bid_size4& value)  {
            m_bid_size4 = value;
        }
        void set_ask_size4(const ask_size4& value)  {
            m_ask_size4 = value;
        }
        void set_bid_orders4(const bid_orders4& value)  {
            m_bid_orders4 = value;
        }
        void set_ask_orders4(const ask_orders4& value)  {
            m_ask_orders4 = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FutureBookQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const market_status & value) {
            set_market_status(value);
        }
        void set(const bid_price1 & value) {
            set_bid_price1(value);
        }
        void set(const ask_price1 & value) {
            set_ask_price1(value);
        }
        void set(const bid_size1 & value) {
            set_bid_size1(value);
        }
        void set(const ask_size1 & value) {
            set_ask_size1(value);
        }
        void set(const bid_orders1 & value) {
            set_bid_orders1(value);
        }
        void set(const ask_orders1 & value) {
            set_ask_orders1(value);
        }
        void set(const bid_price2 & value) {
            set_bid_price2(value);
        }
        void set(const ask_price2 & value) {
            set_ask_price2(value);
        }
        void set(const bid_size2 & value) {
            set_bid_size2(value);
        }
        void set(const ask_size2 & value) {
            set_ask_size2(value);
        }
        void set(const bid_orders2 & value) {
            set_bid_orders2(value);
        }
        void set(const ask_orders2 & value) {
            set_ask_orders2(value);
        }
        void set(const bid_price3 & value) {
            set_bid_price3(value);
        }
        void set(const ask_price3 & value) {
            set_ask_price3(value);
        }
        void set(const bid_size3 & value) {
            set_bid_size3(value);
        }
        void set(const ask_size3 & value) {
            set_ask_size3(value);
        }
        void set(const bid_orders3 & value) {
            set_bid_orders3(value);
        }
        void set(const ask_orders3 & value) {
            set_ask_orders3(value);
        }
        void set(const bid_price4 & value) {
            set_bid_price4(value);
        }
        void set(const ask_price4 & value) {
            set_ask_price4(value);
        }
        void set(const bid_size4 & value) {
            set_bid_size4(value);
        }
        void set(const ask_size4 & value) {
            set_ask_size4(value);
        }
        void set(const bid_orders4 & value) {
            set_bid_orders4(value);
        }
        void set(const ask_orders4 & value) {
            set_ask_orders4(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }

        void set(const FutureBookQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_update_type);
            set(value.m_market_status);
            set(value.m_bid_price1);
            set(value.m_ask_price1);
            set(value.m_bid_size1);
            set(value.m_ask_size1);
            set(value.m_bid_orders1);
            set(value.m_ask_orders1);
            set(value.m_bid_price2);
            set(value.m_ask_price2);
            set(value.m_bid_size2);
            set(value.m_ask_size2);
            set(value.m_bid_orders2);
            set(value.m_ask_orders2);
            set(value.m_bid_price3);
            set(value.m_ask_price3);
            set(value.m_bid_size3);
            set(value.m_ask_size3);
            set(value.m_bid_orders3);
            set(value.m_ask_orders3);
            set(value.m_bid_price4);
            set(value.m_ask_price4);
            set(value.m_bid_size4);
            set(value.m_ask_size4);
            set(value.m_bid_orders4);
            set(value.m_ask_orders4);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
        }

        FutureBookQuote() {
            m__meta.set_message_type("FutureBookQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2580, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2580, length);
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
             *this = FutureBookQuote{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
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
        bool IncludeBidOrders1() const {
            return !(m_bid_orders1 == 0);
        }
        bool IncludeAskOrders1() const {
            return !(m_ask_orders1 == 0);
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
        bool IncludeBidOrders2() const {
            return !(m_bid_orders2 == 0);
        }
        bool IncludeAskOrders2() const {
            return !(m_ask_orders2 == 0);
        }
        bool IncludeBidPrice3() const {
            return !(m_bid_price3 == 0.0);
        }
        bool IncludeAskPrice3() const {
            return !(m_ask_price3 == 0.0);
        }
        bool IncludeBidSize3() const {
            return !(m_bid_size3 == 0);
        }
        bool IncludeAskSize3() const {
            return !(m_ask_size3 == 0);
        }
        bool IncludeBidOrders3() const {
            return !(m_bid_orders3 == 0);
        }
        bool IncludeAskOrders3() const {
            return !(m_ask_orders3 == 0);
        }
        bool IncludeBidPrice4() const {
            return !(m_bid_price4 == 0.0);
        }
        bool IncludeAskPrice4() const {
            return !(m_ask_price4 == 0.0);
        }
        bool IncludeBidSize4() const {
            return !(m_bid_size4 == 0);
        }
        bool IncludeAskSize4() const {
            return !(m_ask_size4 == 0);
        }
        bool IncludeBidOrders4() const {
            return !(m_bid_orders4 == 0);
        }
        bool IncludeAskOrders4() const {
            return !(m_ask_orders4 == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeBidPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_bid_price1);
            }
            if ( IncludeAskPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_ask_price1);
            }
            if ( IncludeBidSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_bid_size1);
            }
            if ( IncludeAskSize1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_ask_size1);
            }
            if ( IncludeBidOrders1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(118,m_bid_orders1);
            }
            if ( IncludeAskOrders1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(121,m_ask_orders1);
            }
            if ( IncludeBidPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_ask_price2);
            }
            if ( IncludeBidSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_ask_size2);
            }
            if ( IncludeBidOrders2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(136,m_bid_orders2);
            }
            if ( IncludeAskOrders2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(139,m_ask_orders2);
            }
            if ( IncludeBidPrice3()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_bid_price3);
            }
            if ( IncludeAskPrice3()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_ask_price3);
            }
            if ( IncludeBidSize3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_bid_size3);
            }
            if ( IncludeAskSize3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_ask_size3);
            }
            if ( IncludeBidOrders3()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(154,m_bid_orders3);
            }
            if ( IncludeAskOrders3()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(157,m_ask_orders3);
            }
            if ( IncludeBidPrice4()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_bid_price4);
            }
            if ( IncludeAskPrice4()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_ask_price4);
            }
            if ( IncludeBidSize4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_bid_size4);
            }
            if ( IncludeAskSize4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_ask_size4);
            }
            if ( IncludeBidOrders4()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(172,m_bid_orders4);
            }
            if ( IncludeAskOrders4()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(175,m_ask_orders4);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(178,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(181,m_net_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeBidPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_bid_price1);
            }
            if ( IncludeAskPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_ask_price1);
            }
            if ( IncludeBidSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_bid_size1);
            }
            if ( IncludeAskSize1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_ask_size1);
            }
            if ( IncludeBidOrders1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,118,m_bid_orders1);
            }
            if ( IncludeAskOrders1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,121,m_ask_orders1);
            }
            if ( IncludeBidPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_bid_price2);
            }
            if ( IncludeAskPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_ask_price2);
            }
            if ( IncludeBidSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_bid_size2);
            }
            if ( IncludeAskSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_ask_size2);
            }
            if ( IncludeBidOrders2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,136,m_bid_orders2);
            }
            if ( IncludeAskOrders2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,139,m_ask_orders2);
            }
            if ( IncludeBidPrice3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_bid_price3);
            }
            if ( IncludeAskPrice3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_ask_price3);
            }
            if ( IncludeBidSize3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_bid_size3);
            }
            if ( IncludeAskSize3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_ask_size3);
            }
            if ( IncludeBidOrders3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,154,m_bid_orders3);
            }
            if ( IncludeAskOrders3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,157,m_ask_orders3);
            }
            if ( IncludeBidPrice4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_bid_price4);
            }
            if ( IncludeAskPrice4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_ask_price4);
            }
            if ( IncludeBidSize4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_bid_size4);
            }
            if ( IncludeAskSize4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_ask_size4);
            }
            if ( IncludeBidOrders4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,172,m_bid_orders4);
            }
            if ( IncludeAskOrders4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,175,m_ask_orders4);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,178,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,181,m_net_timestamp);
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
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_status = static_cast<spiderrock::protobuf::api::MarketStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_orders1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_orders1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_orders2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_orders2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_orders3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_orders3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_price4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_price4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_orders4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_orders4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 181: {
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

    template<> inline const auto FutureBookQuote::get<FutureBookQuote::_meta>() const { return FutureBookQuote::_meta{ m__meta}; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::pkey>() const { return FutureBookQuote::pkey{ m_pkey}; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::update_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UpdateType>( m_update_type)); }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::market_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>( m_market_status)); }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_price1>() const { return m_bid_price1; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_price1>() const { return m_ask_price1; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_size1>() const { return m_bid_size1; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_size1>() const { return m_ask_size1; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_orders1>() const { return m_bid_orders1; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_orders1>() const { return m_ask_orders1; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_price2>() const { return m_bid_price2; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_price2>() const { return m_ask_price2; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_size2>() const { return m_bid_size2; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_size2>() const { return m_ask_size2; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_orders2>() const { return m_bid_orders2; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_orders2>() const { return m_ask_orders2; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_price3>() const { return m_bid_price3; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_price3>() const { return m_ask_price3; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_size3>() const { return m_bid_size3; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_size3>() const { return m_ask_size3; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_orders3>() const { return m_bid_orders3; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_orders3>() const { return m_ask_orders3; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_price4>() const { return m_bid_price4; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_price4>() const { return m_ask_price4; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_size4>() const { return m_bid_size4; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_size4>() const { return m_ask_size4; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::bid_orders4>() const { return m_bid_orders4; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::ask_orders4>() const { return m_ask_orders4; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto FutureBookQuote::get<FutureBookQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto FutureBookQuote_PKey::get<FutureBookQuote_PKey::fkey>() const { return FutureBookQuote_PKey::fkey{m_fkey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const FutureBookQuote_PKey& m) {
        o << "\"fkey\":{" << m.get<FutureBookQuote_PKey::fkey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const FutureBookQuote& m) {
        o << "\"_meta\":{" << m.get<FutureBookQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<FutureBookQuote::pkey>() << "}";
        o << ",\"update_type\":" << (int64_t)m.get<FutureBookQuote::update_type>();
        o << ",\"market_status\":" << (int64_t)m.get<FutureBookQuote::market_status>();
        o << ",\"bid_price1\":" << m.get<FutureBookQuote::bid_price1>();
        o << ",\"ask_price1\":" << m.get<FutureBookQuote::ask_price1>();
        o << ",\"bid_size1\":" << m.get<FutureBookQuote::bid_size1>();
        o << ",\"ask_size1\":" << m.get<FutureBookQuote::ask_size1>();
        o << ",\"bid_orders1\":" << m.get<FutureBookQuote::bid_orders1>();
        o << ",\"ask_orders1\":" << m.get<FutureBookQuote::ask_orders1>();
        o << ",\"bid_price2\":" << m.get<FutureBookQuote::bid_price2>();
        o << ",\"ask_price2\":" << m.get<FutureBookQuote::ask_price2>();
        o << ",\"bid_size2\":" << m.get<FutureBookQuote::bid_size2>();
        o << ",\"ask_size2\":" << m.get<FutureBookQuote::ask_size2>();
        o << ",\"bid_orders2\":" << m.get<FutureBookQuote::bid_orders2>();
        o << ",\"ask_orders2\":" << m.get<FutureBookQuote::ask_orders2>();
        o << ",\"bid_price3\":" << m.get<FutureBookQuote::bid_price3>();
        o << ",\"ask_price3\":" << m.get<FutureBookQuote::ask_price3>();
        o << ",\"bid_size3\":" << m.get<FutureBookQuote::bid_size3>();
        o << ",\"ask_size3\":" << m.get<FutureBookQuote::ask_size3>();
        o << ",\"bid_orders3\":" << m.get<FutureBookQuote::bid_orders3>();
        o << ",\"ask_orders3\":" << m.get<FutureBookQuote::ask_orders3>();
        o << ",\"bid_price4\":" << m.get<FutureBookQuote::bid_price4>();
        o << ",\"ask_price4\":" << m.get<FutureBookQuote::ask_price4>();
        o << ",\"bid_size4\":" << m.get<FutureBookQuote::bid_size4>();
        o << ",\"ask_size4\":" << m.get<FutureBookQuote::ask_size4>();
        o << ",\"bid_orders4\":" << m.get<FutureBookQuote::bid_orders4>();
        o << ",\"ask_orders4\":" << m.get<FutureBookQuote::ask_orders4>();
        o << ",\"src_timestamp\":" << m.get<FutureBookQuote::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<FutureBookQuote::net_timestamp>();
        return o;
    }

}
}
}