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

    #ifndef _prt_exch__FutExch__GUARD__
    #define _prt_exch__FutExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__FutExch, spiderrock::protobuf::api::FutExch);
    #endif//_prt_exch__FutExch__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

    #ifndef _prt_cluster_num__GUARD__
    #define _prt_cluster_num__GUARD__
    DECL_STRONG_TYPE(prt_cluster_num, int32);
    #endif//_prt_cluster_num__GUARD__

    #ifndef _prt_cluster_size__GUARD__
    #define _prt_cluster_size__GUARD__
    DECL_STRONG_TYPE(prt_cluster_size, int32);
    #endif//_prt_cluster_size__GUARD__

    #ifndef _prt_type__int32__GUARD__
    #define _prt_type__int32__GUARD__
    DECL_STRONG_TYPE(prt_type__int32, int32);
    #endif//_prt_type__int32__GUARD__

    #ifndef _prt_orders__GUARD__
    #define _prt_orders__GUARD__
    DECL_STRONG_TYPE(prt_orders, uint32);
    #endif//_prt_orders__GUARD__

    #ifndef _prt_quan__GUARD__
    #define _prt_quan__GUARD__
    DECL_STRONG_TYPE(prt_quan, int32);
    #endif//_prt_quan__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _bid__float__GUARD__
    #define _bid__float__GUARD__
    DECL_STRONG_TYPE(bid__float, float);
    #endif//_bid__float__GUARD__

    #ifndef _ask__float__GUARD__
    #define _ask__float__GUARD__
    DECL_STRONG_TYPE(ask__float, float);
    #endif//_ask__float__GUARD__

    #ifndef _bsz__GUARD__
    #define _bsz__GUARD__
    DECL_STRONG_TYPE(bsz, int32);
    #endif//_bsz__GUARD__

    #ifndef _asz__GUARD__
    #define _asz__GUARD__
    DECL_STRONG_TYPE(asz, int32);
    #endif//_asz__GUARD__

    #ifndef _age__GUARD__
    #define _age__GUARD__
    DECL_STRONG_TYPE(age, float);
    #endif//_age__GUARD__

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

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    
    class FuturePrint_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePrint_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePrint_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fkey & value) { set_fkey(value); }


        FuturePrint_PKey() {}

        virtual ~FuturePrint_PKey() {
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
    

    class FuturePrint {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::FuturePrint_PKey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__FutExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_type = spiderrock::protobuf::api::prt_type__int32;
        using prt_orders = spiderrock::protobuf::api::prt_orders;
        using prt_quan = spiderrock::protobuf::api::prt_quan;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using bid = spiderrock::protobuf::api::bid__float;
        using ask = spiderrock::protobuf::api::ask__float;
        using bsz = spiderrock::protobuf::api::bsz;
        using asz = spiderrock::protobuf::api::asz;
        using age = spiderrock::protobuf::api::age;
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
        prt_orders m_prt_orders{};
        prt_quan m_prt_quan{};
        prt_volume m_prt_volume{};
        bid m_bid{};
        ask m_ask{};
        bsz m_bsz{};
        asz m_asz{};
        age m_age{};
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
        prt_orders get_prt_orders() const {
            return m_prt_orders;
        }		
        prt_quan get_prt_quan() const {
            return m_prt_quan;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        bid get_bid() const {
            return m_bid;
        }		
        ask get_ask() const {
            return m_ask;
        }		
        bsz get_bsz() const {
            return m_bsz;
        }		
        asz get_asz() const {
            return m_asz;
        }		
        age get_age() const {
            return m_age;
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
        void set_prt_orders(const prt_orders& value)  {
            m_prt_orders = value;
        }
        void set_prt_quan(const prt_quan& value)  {
            m_prt_quan = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_bid(const bid& value)  {
            m_bid = value;
        }
        void set_ask(const ask& value)  {
            m_ask = value;
        }
        void set_bsz(const bsz& value)  {
            m_bsz = value;
        }
        void set_asz(const asz& value)  {
            m_asz = value;
        }
        void set_age(const age& value)  {
            m_age = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FuturePrint::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const prt_quan & value) {
            set_prt_quan(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const bid & value) {
            set_bid(value);
        }
        void set(const ask & value) {
            set_ask(value);
        }
        void set(const bsz & value) {
            set_bsz(value);
        }
        void set(const asz & value) {
            set_asz(value);
        }
        void set(const age & value) {
            set_age(value);
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

        void set(const FuturePrint & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_type);
            set(value.m_prt_orders);
            set(value.m_prt_quan);
            set(value.m_prt_volume);
            set(value.m_bid);
            set(value.m_ask);
            set(value.m_bsz);
            set(value.m_asz);
            set(value.m_age);
            set(value.m_prt_side);
            set(value.m_prt_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        FuturePrint() {
            m__meta.set_message_type("FuturePrint");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2595, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2595, length);
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
             *this = FuturePrint{};
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
        bool IncludePrtType() const {
            return !(m_prt_type == 0);
        }
        bool IncludePrtOrders() const {
            return !(m_prt_orders == 0);
        }
        bool IncludePrtQuan() const {
            return !(m_prt_quan == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeBid() const {
            return !(m_bid == 0.0);
        }
        bool IncludeAsk() const {
            return !(m_ask == 0.0);
        }
        bool IncludeBsz() const {
            return !(m_bsz == 0);
        }
        bool IncludeAsz() const {
            return !(m_asz == 0);
        }
        bool IncludeAge() const {
            return !(m_age == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_prt_price);
            }
            if ( IncludePrtClusterNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_prt_cluster_size);
            }
            if ( IncludePrtType()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_prt_type);
            }
            if ( IncludePrtOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(118,m_prt_orders);
            }
            if ( IncludePrtQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_quan);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_prt_volume);
            }
            if ( IncludeBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_bid);
            }
            if ( IncludeAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_ask);
            }
            if ( IncludeBsz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_bsz);
            }
            if ( IncludeAsz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_asz);
            }
            if ( IncludeAge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_age);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(145,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(148,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(151, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_prt_price);
            }
            if ( IncludePrtClusterNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_prt_cluster_size);
            }
            if ( IncludePrtType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_prt_type);
            }
            if ( IncludePrtOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,118,m_prt_orders);
            }
            if ( IncludePrtQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_quan);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_prt_volume);
            }
            if ( IncludeBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_bid);
            }
            if ( IncludeAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_ask);
            }
            if ( IncludeBsz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_bsz);
            }
            if ( IncludeAsz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_asz);
            }
            if ( IncludeAge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_age);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,145,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,148,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 151, m_timestamp);
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
                            m_prt_exch = static_cast<spiderrock::protobuf::api::FutExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
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
                            m_prt_type = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
                            m_prt_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bsz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_asz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_age = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 151: {
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

    template<> inline const auto FuturePrint::get<FuturePrint::_meta>() const { return FuturePrint::_meta{ m__meta}; }
    template<> inline const auto FuturePrint::get<FuturePrint::pkey>() const { return FuturePrint::pkey{ m_pkey}; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FutExch>( m_prt_exch)); }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_size>() const { return m_prt_size; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_price>() const { return m_prt_price; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_type>() const { return m_prt_type; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_orders>() const { return m_prt_orders; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_quan>() const { return m_prt_quan; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto FuturePrint::get<FuturePrint::bid>() const { return m_bid; }
    template<> inline const auto FuturePrint::get<FuturePrint::ask>() const { return m_ask; }
    template<> inline const auto FuturePrint::get<FuturePrint::bsz>() const { return m_bsz; }
    template<> inline const auto FuturePrint::get<FuturePrint::asz>() const { return m_asz; }
    template<> inline const auto FuturePrint::get<FuturePrint::age>() const { return m_age; }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto FuturePrint::get<FuturePrint::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto FuturePrint::get<FuturePrint::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto FuturePrint::get<FuturePrint::timestamp>() const { return m_timestamp; }
    template<> inline const auto FuturePrint_PKey::get<FuturePrint_PKey::fkey>() const { return FuturePrint_PKey::fkey{m_fkey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const FuturePrint_PKey& m) {
        o << "\"fkey\":{" << m.get<FuturePrint_PKey::fkey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const FuturePrint& m) {
        o << "\"_meta\":{" << m.get<FuturePrint::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<FuturePrint::pkey>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<FuturePrint::prt_exch>();
        o << ",\"prt_size\":" << m.get<FuturePrint::prt_size>();
        o << ",\"prt_price\":" << m.get<FuturePrint::prt_price>();
        o << ",\"prt_cluster_num\":" << m.get<FuturePrint::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<FuturePrint::prt_cluster_size>();
        o << ",\"prt_type\":" << m.get<FuturePrint::prt_type>();
        o << ",\"prt_orders\":" << m.get<FuturePrint::prt_orders>();
        o << ",\"prt_quan\":" << m.get<FuturePrint::prt_quan>();
        o << ",\"prt_volume\":" << m.get<FuturePrint::prt_volume>();
        o << ",\"bid\":" << m.get<FuturePrint::bid>();
        o << ",\"ask\":" << m.get<FuturePrint::ask>();
        o << ",\"bsz\":" << m.get<FuturePrint::bsz>();
        o << ",\"asz\":" << m.get<FuturePrint::asz>();
        o << ",\"age\":" << m.get<FuturePrint::age>();
        o << ",\"prt_side\":" << (int64_t)m.get<FuturePrint::prt_side>();
        o << ",\"prt_timestamp\":" << m.get<FuturePrint::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<FuturePrint::net_timestamp>();
        {
            std::time_t tt = m.get<FuturePrint::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}