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

    #ifndef _opn_price__GUARD__
    #define _opn_price__GUARD__
    DECL_STRONG_TYPE(opn_price, double);
    #endif//_opn_price__GUARD__

    #ifndef _opn_volatility__GUARD__
    #define _opn_volatility__GUARD__
    DECL_STRONG_TYPE(opn_volatility, double);
    #endif//_opn_volatility__GUARD__

    #ifndef _cls_price__double__GUARD__
    #define _cls_price__double__GUARD__
    DECL_STRONG_TYPE(cls_price__double, double);
    #endif//_cls_price__double__GUARD__

    #ifndef _cls_volatility__GUARD__
    #define _cls_volatility__GUARD__
    DECL_STRONG_TYPE(cls_volatility, double);
    #endif//_cls_volatility__GUARD__

    #ifndef _min_prt_prc__GUARD__
    #define _min_prt_prc__GUARD__
    DECL_STRONG_TYPE(min_prt_prc, double);
    #endif//_min_prt_prc__GUARD__

    #ifndef _min_prt_vol__GUARD__
    #define _min_prt_vol__GUARD__
    DECL_STRONG_TYPE(min_prt_vol, double);
    #endif//_min_prt_vol__GUARD__

    #ifndef _max_prt_prc__GUARD__
    #define _max_prt_prc__GUARD__
    DECL_STRONG_TYPE(max_prt_prc, double);
    #endif//_max_prt_prc__GUARD__

    #ifndef _max_prt_vol__GUARD__
    #define _max_prt_vol__GUARD__
    DECL_STRONG_TYPE(max_prt_vol, double);
    #endif//_max_prt_vol__GUARD__

    #ifndef _open_interest__GUARD__
    #define _open_interest__GUARD__
    DECL_STRONG_TYPE(open_interest, int32);
    #endif//_open_interest__GUARD__

    #ifndef _bid_count__int32__GUARD__
    #define _bid_count__int32__GUARD__
    DECL_STRONG_TYPE(bid_count__int32, int32);
    #endif//_bid_count__int32__GUARD__

    #ifndef _bid_volume__GUARD__
    #define _bid_volume__GUARD__
    DECL_STRONG_TYPE(bid_volume, int32);
    #endif//_bid_volume__GUARD__

    #ifndef _ask_count__int32__GUARD__
    #define _ask_count__int32__GUARD__
    DECL_STRONG_TYPE(ask_count__int32, int32);
    #endif//_ask_count__int32__GUARD__

    #ifndef _ask_volume__GUARD__
    #define _ask_volume__GUARD__
    DECL_STRONG_TYPE(ask_volume, int32);
    #endif//_ask_volume__GUARD__

    #ifndef _mid_count__GUARD__
    #define _mid_count__GUARD__
    DECL_STRONG_TYPE(mid_count, int32);
    #endif//_mid_count__GUARD__

    #ifndef _mid_volume__GUARD__
    #define _mid_volume__GUARD__
    DECL_STRONG_TYPE(mid_volume, int32);
    #endif//_mid_volume__GUARD__

    #ifndef _prt_count__GUARD__
    #define _prt_count__GUARD__
    DECL_STRONG_TYPE(prt_count, int32);
    #endif//_prt_count__GUARD__

    #ifndef _last_prt_price__GUARD__
    #define _last_prt_price__GUARD__
    DECL_STRONG_TYPE(last_prt_price, double);
    #endif//_last_prt_price__GUARD__

    #ifndef _last_prt_volatility__GUARD__
    #define _last_prt_volatility__GUARD__
    DECL_STRONG_TYPE(last_prt_volatility, float);
    #endif//_last_prt_volatility__GUARD__

    #ifndef _avg_width__GUARD__
    #define _avg_width__GUARD__
    DECL_STRONG_TYPE(avg_width, double);
    #endif//_avg_width__GUARD__

    #ifndef _avg_bid_size__GUARD__
    #define _avg_bid_size__GUARD__
    DECL_STRONG_TYPE(avg_bid_size, float);
    #endif//_avg_bid_size__GUARD__

    #ifndef _avg_ask_size__GUARD__
    #define _avg_ask_size__GUARD__
    DECL_STRONG_TYPE(avg_ask_size, float);
    #endif//_avg_ask_size__GUARD__

    #ifndef _last_print__GUARD__
    #define _last_print__GUARD__
    DECL_STRONG_TYPE(last_print, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_print__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionMarketSummary_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionMarketSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionMarketSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionMarketSummary_PKey() {}

        virtual ~OptionMarketSummary_PKey() {
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
    

    class OptionMarketSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionMarketSummary_PKey;
        using opn_price = spiderrock::protobuf::api::opn_price;
        using opn_volatility = spiderrock::protobuf::api::opn_volatility;
        using cls_price = spiderrock::protobuf::api::cls_price__double;
        using cls_volatility = spiderrock::protobuf::api::cls_volatility;
        using min_prt_prc = spiderrock::protobuf::api::min_prt_prc;
        using min_prt_vol = spiderrock::protobuf::api::min_prt_vol;
        using max_prt_prc = spiderrock::protobuf::api::max_prt_prc;
        using max_prt_vol = spiderrock::protobuf::api::max_prt_vol;
        using open_interest = spiderrock::protobuf::api::open_interest;
        using bid_count = spiderrock::protobuf::api::bid_count__int32;
        using bid_volume = spiderrock::protobuf::api::bid_volume;
        using ask_count = spiderrock::protobuf::api::ask_count__int32;
        using ask_volume = spiderrock::protobuf::api::ask_volume;
        using mid_count = spiderrock::protobuf::api::mid_count;
        using mid_volume = spiderrock::protobuf::api::mid_volume;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using last_prt_price = spiderrock::protobuf::api::last_prt_price;
        using last_prt_volatility = spiderrock::protobuf::api::last_prt_volatility;
        using avg_width = spiderrock::protobuf::api::avg_width;
        using avg_bid_size = spiderrock::protobuf::api::avg_bid_size;
        using avg_ask_size = spiderrock::protobuf::api::avg_ask_size;
        using last_print = spiderrock::protobuf::api::last_print;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        opn_price m_opn_price{};
        opn_volatility m_opn_volatility{};
        cls_price m_cls_price{};
        cls_volatility m_cls_volatility{};
        min_prt_prc m_min_prt_prc{};
        min_prt_vol m_min_prt_vol{};
        max_prt_prc m_max_prt_prc{};
        max_prt_vol m_max_prt_vol{};
        open_interest m_open_interest{};
        bid_count m_bid_count{};
        bid_volume m_bid_volume{};
        ask_count m_ask_count{};
        ask_volume m_ask_volume{};
        mid_count m_mid_count{};
        mid_volume m_mid_volume{};
        prt_count m_prt_count{};
        last_prt_price m_last_prt_price{};
        last_prt_volatility m_last_prt_volatility{};
        avg_width m_avg_width{};
        avg_bid_size m_avg_bid_size{};
        avg_ask_size m_avg_ask_size{};
        last_print m_last_print{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        opn_price get_opn_price() const {
            return m_opn_price;
        }		
        opn_volatility get_opn_volatility() const {
            return m_opn_volatility;
        }		
        cls_price get_cls_price() const {
            return m_cls_price;
        }		
        cls_volatility get_cls_volatility() const {
            return m_cls_volatility;
        }		
        min_prt_prc get_min_prt_prc() const {
            return m_min_prt_prc;
        }		
        min_prt_vol get_min_prt_vol() const {
            return m_min_prt_vol;
        }		
        max_prt_prc get_max_prt_prc() const {
            return m_max_prt_prc;
        }		
        max_prt_vol get_max_prt_vol() const {
            return m_max_prt_vol;
        }		
        open_interest get_open_interest() const {
            return m_open_interest;
        }		
        bid_count get_bid_count() const {
            return m_bid_count;
        }		
        bid_volume get_bid_volume() const {
            return m_bid_volume;
        }		
        ask_count get_ask_count() const {
            return m_ask_count;
        }		
        ask_volume get_ask_volume() const {
            return m_ask_volume;
        }		
        mid_count get_mid_count() const {
            return m_mid_count;
        }		
        mid_volume get_mid_volume() const {
            return m_mid_volume;
        }		
        prt_count get_prt_count() const {
            return m_prt_count;
        }		
        last_prt_price get_last_prt_price() const {
            return m_last_prt_price;
        }		
        last_prt_volatility get_last_prt_volatility() const {
            return m_last_prt_volatility;
        }		
        avg_width get_avg_width() const {
            return m_avg_width;
        }		
        avg_bid_size get_avg_bid_size() const {
            return m_avg_bid_size;
        }		
        avg_ask_size get_avg_ask_size() const {
            return m_avg_ask_size;
        }		
        last_print get_last_print() const {
            return m_last_print;
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
        void set_opn_price(const opn_price& value)  {
            m_opn_price = value;
        }
        void set_opn_volatility(const opn_volatility& value)  {
            m_opn_volatility = value;
        }
        void set_cls_price(const cls_price& value)  {
            m_cls_price = value;
        }
        void set_cls_volatility(const cls_volatility& value)  {
            m_cls_volatility = value;
        }
        void set_min_prt_prc(const min_prt_prc& value)  {
            m_min_prt_prc = value;
        }
        void set_min_prt_vol(const min_prt_vol& value)  {
            m_min_prt_vol = value;
        }
        void set_max_prt_prc(const max_prt_prc& value)  {
            m_max_prt_prc = value;
        }
        void set_max_prt_vol(const max_prt_vol& value)  {
            m_max_prt_vol = value;
        }
        void set_open_interest(const open_interest& value)  {
            m_open_interest = value;
        }
        void set_bid_count(const bid_count& value)  {
            m_bid_count = value;
        }
        void set_bid_volume(const bid_volume& value)  {
            m_bid_volume = value;
        }
        void set_ask_count(const ask_count& value)  {
            m_ask_count = value;
        }
        void set_ask_volume(const ask_volume& value)  {
            m_ask_volume = value;
        }
        void set_mid_count(const mid_count& value)  {
            m_mid_count = value;
        }
        void set_mid_volume(const mid_volume& value)  {
            m_mid_volume = value;
        }
        void set_prt_count(const prt_count& value)  {
            m_prt_count = value;
        }
        void set_last_prt_price(const last_prt_price& value)  {
            m_last_prt_price = value;
        }
        void set_last_prt_volatility(const last_prt_volatility& value)  {
            m_last_prt_volatility = value;
        }
        void set_avg_width(const avg_width& value)  {
            m_avg_width = value;
        }
        void set_avg_bid_size(const avg_bid_size& value)  {
            m_avg_bid_size = value;
        }
        void set_avg_ask_size(const avg_ask_size& value)  {
            m_avg_ask_size = value;
        }
        void set_last_print(const last_print& value)  {
            m_last_print = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionMarketSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const opn_price & value) {
            set_opn_price(value);
        }
        void set(const opn_volatility & value) {
            set_opn_volatility(value);
        }
        void set(const cls_price & value) {
            set_cls_price(value);
        }
        void set(const cls_volatility & value) {
            set_cls_volatility(value);
        }
        void set(const min_prt_prc & value) {
            set_min_prt_prc(value);
        }
        void set(const min_prt_vol & value) {
            set_min_prt_vol(value);
        }
        void set(const max_prt_prc & value) {
            set_max_prt_prc(value);
        }
        void set(const max_prt_vol & value) {
            set_max_prt_vol(value);
        }
        void set(const open_interest & value) {
            set_open_interest(value);
        }
        void set(const bid_count & value) {
            set_bid_count(value);
        }
        void set(const bid_volume & value) {
            set_bid_volume(value);
        }
        void set(const ask_count & value) {
            set_ask_count(value);
        }
        void set(const ask_volume & value) {
            set_ask_volume(value);
        }
        void set(const mid_count & value) {
            set_mid_count(value);
        }
        void set(const mid_volume & value) {
            set_mid_volume(value);
        }
        void set(const prt_count & value) {
            set_prt_count(value);
        }
        void set(const last_prt_price & value) {
            set_last_prt_price(value);
        }
        void set(const last_prt_volatility & value) {
            set_last_prt_volatility(value);
        }
        void set(const avg_width & value) {
            set_avg_width(value);
        }
        void set(const avg_bid_size & value) {
            set_avg_bid_size(value);
        }
        void set(const avg_ask_size & value) {
            set_avg_ask_size(value);
        }
        void set(const last_print & value) {
            set_last_print(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionMarketSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_opn_price);
            set(value.m_opn_volatility);
            set(value.m_cls_price);
            set(value.m_cls_volatility);
            set(value.m_min_prt_prc);
            set(value.m_min_prt_vol);
            set(value.m_max_prt_prc);
            set(value.m_max_prt_vol);
            set(value.m_open_interest);
            set(value.m_bid_count);
            set(value.m_bid_volume);
            set(value.m_ask_count);
            set(value.m_ask_volume);
            set(value.m_mid_count);
            set(value.m_mid_volume);
            set(value.m_prt_count);
            set(value.m_last_prt_price);
            set(value.m_last_prt_volatility);
            set(value.m_avg_width);
            set(value.m_avg_bid_size);
            set(value.m_avg_ask_size);
            set(value.m_last_print);
            set(value.m_timestamp);
        }

        OptionMarketSummary() {
            m__meta.set_message_type("OptionMarketSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2780, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2780, length);
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
             *this = OptionMarketSummary{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOpnPrice() const {
            return !(m_opn_price == 0.0);
        }
        bool IncludeOpnVolatility() const {
            return !(m_opn_volatility == 0.0);
        }
        bool IncludeClsPrice() const {
            return !(m_cls_price == 0.0);
        }
        bool IncludeClsVolatility() const {
            return !(m_cls_volatility == 0.0);
        }
        bool IncludeMinPrtPrc() const {
            return !(m_min_prt_prc == 0.0);
        }
        bool IncludeMinPrtVol() const {
            return !(m_min_prt_vol == 0.0);
        }
        bool IncludeMaxPrtPrc() const {
            return !(m_max_prt_prc == 0.0);
        }
        bool IncludeMaxPrtVol() const {
            return !(m_max_prt_vol == 0.0);
        }
        bool IncludeOpenInterest() const {
            return !(m_open_interest == 0);
        }
        bool IncludeBidCount() const {
            return !(m_bid_count == 0);
        }
        bool IncludeBidVolume() const {
            return !(m_bid_volume == 0);
        }
        bool IncludeAskCount() const {
            return !(m_ask_count == 0);
        }
        bool IncludeAskVolume() const {
            return !(m_ask_volume == 0);
        }
        bool IncludeMidCount() const {
            return !(m_mid_count == 0);
        }
        bool IncludeMidVolume() const {
            return !(m_mid_volume == 0);
        }
        bool IncludePrtCount() const {
            return !(m_prt_count == 0);
        }
        bool IncludeLastPrtPrice() const {
            return !(m_last_prt_price == 0.0);
        }
        bool IncludeLastPrtVolatility() const {
            return !(m_last_prt_volatility == 0.0);
        }
        bool IncludeAvgWidth() const {
            return !(m_avg_width == 0.0);
        }
        bool IncludeAvgBidSize() const {
            return !(m_avg_bid_size == 0.0);
        }
        bool IncludeAvgAskSize() const {
            return !(m_avg_ask_size == 0.0);
        }
        bool IncludeLastPrint() const {
            return (m_last_print.time_since_epoch().count() != 0);
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
            if ( IncludeOpnPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_opn_price);
            }
            if ( IncludeOpnVolatility()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_opn_volatility);
            }
            if ( IncludeClsPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_cls_price);
            }
            if ( IncludeClsVolatility()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_cls_volatility);
            }
            if ( IncludeMinPrtPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_min_prt_prc);
            }
            if ( IncludeMinPrtVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_min_prt_vol);
            }
            if ( IncludeMaxPrtPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_max_prt_prc);
            }
            if ( IncludeMaxPrtVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_max_prt_vol);
            }
            if ( IncludeOpenInterest()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_open_interest);
            }
            if ( IncludeBidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_bid_count);
            }
            if ( IncludeBidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_bid_volume);
            }
            if ( IncludeAskCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_ask_count);
            }
            if ( IncludeAskVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_ask_volume);
            }
            if ( IncludeMidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_mid_count);
            }
            if ( IncludeMidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_mid_volume);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_prt_count);
            }
            if ( IncludeLastPrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_last_prt_price);
            }
            if ( IncludeLastPrtVolatility()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_last_prt_volatility);
            }
            if ( IncludeAvgWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_avg_width);
            }
            if ( IncludeAvgBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_avg_bid_size);
            }
            if ( IncludeAvgAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_avg_ask_size);
            }
            if ( IncludeLastPrint()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(163, m_last_print);
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
            if ( IncludeOpnPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_opn_price);
            }
            if ( IncludeOpnVolatility()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_opn_volatility);
            }
            if ( IncludeClsPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_cls_price);
            }
            if ( IncludeClsVolatility()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_cls_volatility);
            }
            if ( IncludeMinPrtPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_min_prt_prc);
            }
            if ( IncludeMinPrtVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_min_prt_vol);
            }
            if ( IncludeMaxPrtPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_max_prt_prc);
            }
            if ( IncludeMaxPrtVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_max_prt_vol);
            }
            if ( IncludeOpenInterest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_open_interest);
            }
            if ( IncludeBidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_bid_count);
            }
            if ( IncludeBidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_bid_volume);
            }
            if ( IncludeAskCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_ask_count);
            }
            if ( IncludeAskVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_ask_volume);
            }
            if ( IncludeMidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_mid_count);
            }
            if ( IncludeMidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_mid_volume);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_prt_count);
            }
            if ( IncludeLastPrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_last_prt_price);
            }
            if ( IncludeLastPrtVolatility()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_last_prt_volatility);
            }
            if ( IncludeAvgWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_avg_width);
            }
            if ( IncludeAvgBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_avg_bid_size);
            }
            if ( IncludeAvgAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_avg_ask_size);
            }
            if ( IncludeLastPrint()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 163, m_last_print);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_volatility = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cls_volatility = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_prt_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_prt_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_prt_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_prt_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_interest = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mid_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_last_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_last_prt_volatility = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_width = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_bid_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_ask_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_print = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
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

    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::_meta>() const { return OptionMarketSummary::_meta{ m__meta}; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::pkey>() const { return OptionMarketSummary::pkey{ m_pkey}; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::opn_price>() const { return m_opn_price; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::opn_volatility>() const { return m_opn_volatility; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::cls_price>() const { return m_cls_price; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::cls_volatility>() const { return m_cls_volatility; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::min_prt_prc>() const { return m_min_prt_prc; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::min_prt_vol>() const { return m_min_prt_vol; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::max_prt_prc>() const { return m_max_prt_prc; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::max_prt_vol>() const { return m_max_prt_vol; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::open_interest>() const { return m_open_interest; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::bid_count>() const { return m_bid_count; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::bid_volume>() const { return m_bid_volume; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::ask_count>() const { return m_ask_count; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::ask_volume>() const { return m_ask_volume; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::mid_count>() const { return m_mid_count; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::mid_volume>() const { return m_mid_volume; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::prt_count>() const { return m_prt_count; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::last_prt_price>() const { return m_last_prt_price; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::last_prt_volatility>() const { return m_last_prt_volatility; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::avg_width>() const { return m_avg_width; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::avg_bid_size>() const { return m_avg_bid_size; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::avg_ask_size>() const { return m_avg_ask_size; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::last_print>() const { return m_last_print; }
    template<> inline const auto OptionMarketSummary::get<OptionMarketSummary::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionMarketSummary_PKey::get<OptionMarketSummary_PKey::okey>() const { return OptionMarketSummary_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionMarketSummary_PKey& m) {
        o << "\"okey\":{" << m.get<OptionMarketSummary_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionMarketSummary& m) {
        o << "\"_meta\":{" << m.get<OptionMarketSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionMarketSummary::pkey>() << "}";
        o << ",\"opn_price\":" << m.get<OptionMarketSummary::opn_price>();
        o << ",\"opn_volatility\":" << m.get<OptionMarketSummary::opn_volatility>();
        o << ",\"cls_price\":" << m.get<OptionMarketSummary::cls_price>();
        o << ",\"cls_volatility\":" << m.get<OptionMarketSummary::cls_volatility>();
        o << ",\"min_prt_prc\":" << m.get<OptionMarketSummary::min_prt_prc>();
        o << ",\"min_prt_vol\":" << m.get<OptionMarketSummary::min_prt_vol>();
        o << ",\"max_prt_prc\":" << m.get<OptionMarketSummary::max_prt_prc>();
        o << ",\"max_prt_vol\":" << m.get<OptionMarketSummary::max_prt_vol>();
        o << ",\"open_interest\":" << m.get<OptionMarketSummary::open_interest>();
        o << ",\"bid_count\":" << m.get<OptionMarketSummary::bid_count>();
        o << ",\"bid_volume\":" << m.get<OptionMarketSummary::bid_volume>();
        o << ",\"ask_count\":" << m.get<OptionMarketSummary::ask_count>();
        o << ",\"ask_volume\":" << m.get<OptionMarketSummary::ask_volume>();
        o << ",\"mid_count\":" << m.get<OptionMarketSummary::mid_count>();
        o << ",\"mid_volume\":" << m.get<OptionMarketSummary::mid_volume>();
        o << ",\"prt_count\":" << m.get<OptionMarketSummary::prt_count>();
        o << ",\"last_prt_price\":" << m.get<OptionMarketSummary::last_prt_price>();
        o << ",\"last_prt_volatility\":" << m.get<OptionMarketSummary::last_prt_volatility>();
        o << ",\"avg_width\":" << m.get<OptionMarketSummary::avg_width>();
        o << ",\"avg_bid_size\":" << m.get<OptionMarketSummary::avg_bid_size>();
        o << ",\"avg_ask_size\":" << m.get<OptionMarketSummary::avg_ask_size>();
        {
            std::time_t tt = m.get<OptionMarketSummary::last_print>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_print\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<OptionMarketSummary::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}