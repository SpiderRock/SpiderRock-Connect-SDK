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

    #ifndef _auction_price__float__GUARD__
    #define _auction_price__float__GUARD__
    DECL_STRONG_TYPE(auction_price__float, float);
    #endif//_auction_price__float__GUARD__

    #ifndef _auction_volume__GUARD__
    #define _auction_volume__GUARD__
    DECL_STRONG_TYPE(auction_volume, int32);
    #endif//_auction_volume__GUARD__

    #ifndef _auction_date__GUARD__
    #define _auction_date__GUARD__
    DECL_STRONG_TYPE(auction_date, DateKey);
    #endif//_auction_date__GUARD__

    #ifndef _auction_price1__GUARD__
    #define _auction_price1__GUARD__
    DECL_STRONG_TYPE(auction_price1, float);
    #endif//_auction_price1__GUARD__

    #ifndef _auction_volume1__GUARD__
    #define _auction_volume1__GUARD__
    DECL_STRONG_TYPE(auction_volume1, int32);
    #endif//_auction_volume1__GUARD__

    #ifndef _auction_date1__GUARD__
    #define _auction_date1__GUARD__
    DECL_STRONG_TYPE(auction_date1, DateKey);
    #endif//_auction_date1__GUARD__

    #ifndef _auction_price2__GUARD__
    #define _auction_price2__GUARD__
    DECL_STRONG_TYPE(auction_price2, float);
    #endif//_auction_price2__GUARD__

    #ifndef _auction_volume2__GUARD__
    #define _auction_volume2__GUARD__
    DECL_STRONG_TYPE(auction_volume2, int32);
    #endif//_auction_volume2__GUARD__

    #ifndef _auction_date2__GUARD__
    #define _auction_date2__GUARD__
    DECL_STRONG_TYPE(auction_date2, DateKey);
    #endif//_auction_date2__GUARD__

    #ifndef _auction_price3__GUARD__
    #define _auction_price3__GUARD__
    DECL_STRONG_TYPE(auction_price3, float);
    #endif//_auction_price3__GUARD__

    #ifndef _auction_volume3__GUARD__
    #define _auction_volume3__GUARD__
    DECL_STRONG_TYPE(auction_volume3, int32);
    #endif//_auction_volume3__GUARD__

    #ifndef _auction_date3__GUARD__
    #define _auction_date3__GUARD__
    DECL_STRONG_TYPE(auction_date3, DateKey);
    #endif//_auction_date3__GUARD__

    #ifndef _auction_price4__GUARD__
    #define _auction_price4__GUARD__
    DECL_STRONG_TYPE(auction_price4, float);
    #endif//_auction_price4__GUARD__

    #ifndef _auction_volume4__GUARD__
    #define _auction_volume4__GUARD__
    DECL_STRONG_TYPE(auction_volume4, int32);
    #endif//_auction_volume4__GUARD__

    #ifndef _auction_date4__GUARD__
    #define _auction_date4__GUARD__
    DECL_STRONG_TYPE(auction_date4, DateKey);
    #endif//_auction_date4__GUARD__

    #ifndef _auction_price5__GUARD__
    #define _auction_price5__GUARD__
    DECL_STRONG_TYPE(auction_price5, float);
    #endif//_auction_price5__GUARD__

    #ifndef _auction_volume5__GUARD__
    #define _auction_volume5__GUARD__
    DECL_STRONG_TYPE(auction_volume5, int32);
    #endif//_auction_volume5__GUARD__

    #ifndef _auction_date5__GUARD__
    #define _auction_date5__GUARD__
    DECL_STRONG_TYPE(auction_date5, DateKey);
    #endif//_auction_date5__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _auction_type__StockAuctionType__GUARD__
    #define _auction_type__StockAuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__StockAuctionType, spiderrock::protobuf::api::StockAuctionType);
    #endif//_auction_type__StockAuctionType__GUARD__

    
    class StockAuctionSummary_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using auction_type = spiderrock::protobuf::api::auction_type__StockAuctionType;

        private:
        ticker m_ticker{};
        auction_type m_auction_type{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        auction_type get_auction_type() const {
            return m_auction_type;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockAuctionSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockAuctionSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const auction_type & value) { set_auction_type(value); }


        StockAuctionSummary_PKey() {}

        virtual ~StockAuctionSummary_PKey() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StockAuctionType>(m_auction_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StockAuctionType>(m_auction_type)));
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
                    case 11: {m_auction_type = static_cast<spiderrock::protobuf::api::StockAuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class StockAuctionSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockAuctionSummary_PKey;
        using auction_price = spiderrock::protobuf::api::auction_price__float;
        using auction_volume = spiderrock::protobuf::api::auction_volume;
        using auction_date = spiderrock::protobuf::api::auction_date;
        using auction_price1 = spiderrock::protobuf::api::auction_price1;
        using auction_volume1 = spiderrock::protobuf::api::auction_volume1;
        using auction_date1 = spiderrock::protobuf::api::auction_date1;
        using auction_price2 = spiderrock::protobuf::api::auction_price2;
        using auction_volume2 = spiderrock::protobuf::api::auction_volume2;
        using auction_date2 = spiderrock::protobuf::api::auction_date2;
        using auction_price3 = spiderrock::protobuf::api::auction_price3;
        using auction_volume3 = spiderrock::protobuf::api::auction_volume3;
        using auction_date3 = spiderrock::protobuf::api::auction_date3;
        using auction_price4 = spiderrock::protobuf::api::auction_price4;
        using auction_volume4 = spiderrock::protobuf::api::auction_volume4;
        using auction_date4 = spiderrock::protobuf::api::auction_date4;
        using auction_price5 = spiderrock::protobuf::api::auction_price5;
        using auction_volume5 = spiderrock::protobuf::api::auction_volume5;
        using auction_date5 = spiderrock::protobuf::api::auction_date5;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        auction_price m_auction_price{};
        auction_volume m_auction_volume{};
        auction_date m_auction_date{};
        auction_price1 m_auction_price1{};
        auction_volume1 m_auction_volume1{};
        auction_date1 m_auction_date1{};
        auction_price2 m_auction_price2{};
        auction_volume2 m_auction_volume2{};
        auction_date2 m_auction_date2{};
        auction_price3 m_auction_price3{};
        auction_volume3 m_auction_volume3{};
        auction_date3 m_auction_date3{};
        auction_price4 m_auction_price4{};
        auction_volume4 m_auction_volume4{};
        auction_date4 m_auction_date4{};
        auction_price5 m_auction_price5{};
        auction_volume5 m_auction_volume5{};
        auction_date5 m_auction_date5{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        auction_price get_auction_price() const {
            return m_auction_price;
        }		
        auction_volume get_auction_volume() const {
            return m_auction_volume;
        }		
        auction_date get_auction_date() const {
            return m_auction_date;
        }		
        auction_price1 get_auction_price1() const {
            return m_auction_price1;
        }		
        auction_volume1 get_auction_volume1() const {
            return m_auction_volume1;
        }		
        auction_date1 get_auction_date1() const {
            return m_auction_date1;
        }		
        auction_price2 get_auction_price2() const {
            return m_auction_price2;
        }		
        auction_volume2 get_auction_volume2() const {
            return m_auction_volume2;
        }		
        auction_date2 get_auction_date2() const {
            return m_auction_date2;
        }		
        auction_price3 get_auction_price3() const {
            return m_auction_price3;
        }		
        auction_volume3 get_auction_volume3() const {
            return m_auction_volume3;
        }		
        auction_date3 get_auction_date3() const {
            return m_auction_date3;
        }		
        auction_price4 get_auction_price4() const {
            return m_auction_price4;
        }		
        auction_volume4 get_auction_volume4() const {
            return m_auction_volume4;
        }		
        auction_date4 get_auction_date4() const {
            return m_auction_date4;
        }		
        auction_price5 get_auction_price5() const {
            return m_auction_price5;
        }		
        auction_volume5 get_auction_volume5() const {
            return m_auction_volume5;
        }		
        auction_date5 get_auction_date5() const {
            return m_auction_date5;
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
        void set_auction_price(const auction_price& value)  {
            m_auction_price = value;
        }
        void set_auction_volume(const auction_volume& value)  {
            m_auction_volume = value;
        }
        void set_auction_date(const auction_date& value)  {
            m_auction_date = value;
        }
        void set_auction_price1(const auction_price1& value)  {
            m_auction_price1 = value;
        }
        void set_auction_volume1(const auction_volume1& value)  {
            m_auction_volume1 = value;
        }
        void set_auction_date1(const auction_date1& value)  {
            m_auction_date1 = value;
        }
        void set_auction_price2(const auction_price2& value)  {
            m_auction_price2 = value;
        }
        void set_auction_volume2(const auction_volume2& value)  {
            m_auction_volume2 = value;
        }
        void set_auction_date2(const auction_date2& value)  {
            m_auction_date2 = value;
        }
        void set_auction_price3(const auction_price3& value)  {
            m_auction_price3 = value;
        }
        void set_auction_volume3(const auction_volume3& value)  {
            m_auction_volume3 = value;
        }
        void set_auction_date3(const auction_date3& value)  {
            m_auction_date3 = value;
        }
        void set_auction_price4(const auction_price4& value)  {
            m_auction_price4 = value;
        }
        void set_auction_volume4(const auction_volume4& value)  {
            m_auction_volume4 = value;
        }
        void set_auction_date4(const auction_date4& value)  {
            m_auction_date4 = value;
        }
        void set_auction_price5(const auction_price5& value)  {
            m_auction_price5 = value;
        }
        void set_auction_volume5(const auction_volume5& value)  {
            m_auction_volume5 = value;
        }
        void set_auction_date5(const auction_date5& value)  {
            m_auction_date5 = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockAuctionSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const auction_price & value) {
            set_auction_price(value);
        }
        void set(const auction_volume & value) {
            set_auction_volume(value);
        }
        void set(const auction_date & value) {
            set_auction_date(value);
        }
        void set(const auction_price1 & value) {
            set_auction_price1(value);
        }
        void set(const auction_volume1 & value) {
            set_auction_volume1(value);
        }
        void set(const auction_date1 & value) {
            set_auction_date1(value);
        }
        void set(const auction_price2 & value) {
            set_auction_price2(value);
        }
        void set(const auction_volume2 & value) {
            set_auction_volume2(value);
        }
        void set(const auction_date2 & value) {
            set_auction_date2(value);
        }
        void set(const auction_price3 & value) {
            set_auction_price3(value);
        }
        void set(const auction_volume3 & value) {
            set_auction_volume3(value);
        }
        void set(const auction_date3 & value) {
            set_auction_date3(value);
        }
        void set(const auction_price4 & value) {
            set_auction_price4(value);
        }
        void set(const auction_volume4 & value) {
            set_auction_volume4(value);
        }
        void set(const auction_date4 & value) {
            set_auction_date4(value);
        }
        void set(const auction_price5 & value) {
            set_auction_price5(value);
        }
        void set(const auction_volume5 & value) {
            set_auction_volume5(value);
        }
        void set(const auction_date5 & value) {
            set_auction_date5(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockAuctionSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_auction_price);
            set(value.m_auction_volume);
            set(value.m_auction_date);
            set(value.m_auction_price1);
            set(value.m_auction_volume1);
            set(value.m_auction_date1);
            set(value.m_auction_price2);
            set(value.m_auction_volume2);
            set(value.m_auction_date2);
            set(value.m_auction_price3);
            set(value.m_auction_volume3);
            set(value.m_auction_date3);
            set(value.m_auction_price4);
            set(value.m_auction_volume4);
            set(value.m_auction_date4);
            set(value.m_auction_price5);
            set(value.m_auction_volume5);
            set(value.m_auction_date5);
            set(value.m_timestamp);
        }

        StockAuctionSummary() {
            m__meta.set_message_type("StockAuctionSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2995, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2995, length);
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
             *this = StockAuctionSummary{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAuctionPrice() const {
            return !(m_auction_price == 0.0);
        }
        bool IncludeAuctionVolume() const {
            return !(m_auction_volume == 0);
        }
        bool IncludeAuctionDate() const {
            return (m_auction_date.ByteSizeLong() > 0);
        }
        bool IncludeAuctionPrice1() const {
            return !(m_auction_price1 == 0.0);
        }
        bool IncludeAuctionVolume1() const {
            return !(m_auction_volume1 == 0);
        }
        bool IncludeAuctionDate1() const {
            return (m_auction_date1.ByteSizeLong() > 0);
        }
        bool IncludeAuctionPrice2() const {
            return !(m_auction_price2 == 0.0);
        }
        bool IncludeAuctionVolume2() const {
            return !(m_auction_volume2 == 0);
        }
        bool IncludeAuctionDate2() const {
            return (m_auction_date2.ByteSizeLong() > 0);
        }
        bool IncludeAuctionPrice3() const {
            return !(m_auction_price3 == 0.0);
        }
        bool IncludeAuctionVolume3() const {
            return !(m_auction_volume3 == 0);
        }
        bool IncludeAuctionDate3() const {
            return (m_auction_date3.ByteSizeLong() > 0);
        }
        bool IncludeAuctionPrice4() const {
            return !(m_auction_price4 == 0.0);
        }
        bool IncludeAuctionVolume4() const {
            return !(m_auction_volume4 == 0);
        }
        bool IncludeAuctionDate4() const {
            return (m_auction_date4.ByteSizeLong() > 0);
        }
        bool IncludeAuctionPrice5() const {
            return !(m_auction_price5 == 0.0);
        }
        bool IncludeAuctionVolume5() const {
            return !(m_auction_volume5 == 0);
        }
        bool IncludeAuctionDate5() const {
            return (m_auction_date5.ByteSizeLong() > 0);
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
            if ( IncludeAuctionPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_auction_price);
            }
            if ( IncludeAuctionVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_auction_volume);
            }
            if ( IncludeAuctionDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(106, m_auction_date.get_year(), m_auction_date.get_month(), m_auction_date.get_day());
            }
            if ( IncludeAuctionPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_auction_price1);
            }
            if ( IncludeAuctionVolume1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_auction_volume1);
            }
            if ( IncludeAuctionDate1()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(115, m_auction_date1.get_year(), m_auction_date1.get_month(), m_auction_date1.get_day());
            }
            if ( IncludeAuctionPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_auction_price2);
            }
            if ( IncludeAuctionVolume2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_auction_volume2);
            }
            if ( IncludeAuctionDate2()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(124, m_auction_date2.get_year(), m_auction_date2.get_month(), m_auction_date2.get_day());
            }
            if ( IncludeAuctionPrice3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_auction_price3);
            }
            if ( IncludeAuctionVolume3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_auction_volume3);
            }
            if ( IncludeAuctionDate3()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(133, m_auction_date3.get_year(), m_auction_date3.get_month(), m_auction_date3.get_day());
            }
            if ( IncludeAuctionPrice4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_auction_price4);
            }
            if ( IncludeAuctionVolume4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_auction_volume4);
            }
            if ( IncludeAuctionDate4()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(142, m_auction_date4.get_year(), m_auction_date4.get_month(), m_auction_date4.get_day());
            }
            if ( IncludeAuctionPrice5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_auction_price5);
            }
            if ( IncludeAuctionVolume5()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_auction_volume5);
            }
            if ( IncludeAuctionDate5()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(151, m_auction_date5.get_year(), m_auction_date5.get_month(), m_auction_date5.get_day());
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(154, m_timestamp);
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
            if ( IncludeAuctionPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_auction_price);
            }
            if ( IncludeAuctionVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_auction_volume);
            }
            if ( IncludeAuctionDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,106, m_auction_date.get_year(), m_auction_date.get_month(), m_auction_date.get_day());
            }
            if ( IncludeAuctionPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_auction_price1);
            }
            if ( IncludeAuctionVolume1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_auction_volume1);
            }
            if ( IncludeAuctionDate1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,115, m_auction_date1.get_year(), m_auction_date1.get_month(), m_auction_date1.get_day());
            }
            if ( IncludeAuctionPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_auction_price2);
            }
            if ( IncludeAuctionVolume2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_auction_volume2);
            }
            if ( IncludeAuctionDate2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,124, m_auction_date2.get_year(), m_auction_date2.get_month(), m_auction_date2.get_day());
            }
            if ( IncludeAuctionPrice3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_auction_price3);
            }
            if ( IncludeAuctionVolume3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_auction_volume3);
            }
            if ( IncludeAuctionDate3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,133, m_auction_date3.get_year(), m_auction_date3.get_month(), m_auction_date3.get_day());
            }
            if ( IncludeAuctionPrice4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_auction_price4);
            }
            if ( IncludeAuctionVolume4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_auction_volume4);
            }
            if ( IncludeAuctionDate4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,142, m_auction_date4.get_year(), m_auction_date4.get_month(), m_auction_date4.get_day());
            }
            if ( IncludeAuctionPrice5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_auction_price5);
            }
            if ( IncludeAuctionVolume5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_auction_volume5);
            }
            if ( IncludeAuctionDate5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,151, m_auction_date5.get_year(), m_auction_date5.get_month(), m_auction_date5.get_day());
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 154, m_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_auction_date.set_year(dateKey.year());
                            m_auction_date.set_month(dateKey.month());
                            m_auction_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_price1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_volume1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_auction_date1.set_year(dateKey.year());
                            m_auction_date1.set_month(dateKey.month());
                            m_auction_date1.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_price2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_volume2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_auction_date2.set_year(dateKey.year());
                            m_auction_date2.set_month(dateKey.month());
                            m_auction_date2.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_price3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_volume3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_auction_date3.set_year(dateKey.year());
                            m_auction_date3.set_month(dateKey.month());
                            m_auction_date3.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_price4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_volume4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_auction_date4.set_year(dateKey.year());
                            m_auction_date4.set_month(dateKey.month());
                            m_auction_date4.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_auction_price5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_volume5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_auction_date5.set_year(dateKey.year());
                            m_auction_date5.set_month(dateKey.month());
                            m_auction_date5.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 154: {
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

    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::_meta>() const { return StockAuctionSummary::_meta{ m__meta}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::pkey>() const { return StockAuctionSummary::pkey{ m_pkey}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_price>() const { return m_auction_price; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_volume>() const { return m_auction_volume; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_date>() const { return StockAuctionSummary::auction_date{ m_auction_date}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_price1>() const { return m_auction_price1; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_volume1>() const { return m_auction_volume1; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_date1>() const { return StockAuctionSummary::auction_date1{ m_auction_date1}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_price2>() const { return m_auction_price2; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_volume2>() const { return m_auction_volume2; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_date2>() const { return StockAuctionSummary::auction_date2{ m_auction_date2}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_price3>() const { return m_auction_price3; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_volume3>() const { return m_auction_volume3; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_date3>() const { return StockAuctionSummary::auction_date3{ m_auction_date3}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_price4>() const { return m_auction_price4; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_volume4>() const { return m_auction_volume4; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_date4>() const { return StockAuctionSummary::auction_date4{ m_auction_date4}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_price5>() const { return m_auction_price5; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_volume5>() const { return m_auction_volume5; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::auction_date5>() const { return StockAuctionSummary::auction_date5{ m_auction_date5}; }
    template<> inline const auto StockAuctionSummary::get<StockAuctionSummary::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockAuctionSummary_PKey::get<StockAuctionSummary_PKey::ticker>() const { return StockAuctionSummary_PKey::ticker{m_ticker}; }
    template<> inline const auto StockAuctionSummary_PKey::get<StockAuctionSummary_PKey::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StockAuctionType>(m_auction_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockAuctionSummary_PKey& m) {
        o << "\"ticker\":{" << m.get<StockAuctionSummary_PKey::ticker>() << "}";
        o << ",\"auction_type\":" << (int64_t)m.get<StockAuctionSummary_PKey::auction_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockAuctionSummary& m) {
        o << "\"_meta\":{" << m.get<StockAuctionSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockAuctionSummary::pkey>() << "}";
        o << ",\"auction_price\":" << m.get<StockAuctionSummary::auction_price>();
        o << ",\"auction_volume\":" << m.get<StockAuctionSummary::auction_volume>();
        o << ",\"auction_date\":{" << m.get<StockAuctionSummary::auction_date>() << "}";
        o << ",\"auction_price1\":" << m.get<StockAuctionSummary::auction_price1>();
        o << ",\"auction_volume1\":" << m.get<StockAuctionSummary::auction_volume1>();
        o << ",\"auction_date1\":{" << m.get<StockAuctionSummary::auction_date1>() << "}";
        o << ",\"auction_price2\":" << m.get<StockAuctionSummary::auction_price2>();
        o << ",\"auction_volume2\":" << m.get<StockAuctionSummary::auction_volume2>();
        o << ",\"auction_date2\":{" << m.get<StockAuctionSummary::auction_date2>() << "}";
        o << ",\"auction_price3\":" << m.get<StockAuctionSummary::auction_price3>();
        o << ",\"auction_volume3\":" << m.get<StockAuctionSummary::auction_volume3>();
        o << ",\"auction_date3\":{" << m.get<StockAuctionSummary::auction_date3>() << "}";
        o << ",\"auction_price4\":" << m.get<StockAuctionSummary::auction_price4>();
        o << ",\"auction_volume4\":" << m.get<StockAuctionSummary::auction_volume4>();
        o << ",\"auction_date4\":{" << m.get<StockAuctionSummary::auction_date4>() << "}";
        o << ",\"auction_price5\":" << m.get<StockAuctionSummary::auction_price5>();
        o << ",\"auction_volume5\":" << m.get<StockAuctionSummary::auction_volume5>();
        o << ",\"auction_date5\":{" << m.get<StockAuctionSummary::auction_date5>() << "}";
        {
            std::time_t tt = m.get<StockAuctionSummary::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}