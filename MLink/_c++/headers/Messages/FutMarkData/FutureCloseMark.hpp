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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _cls_mark_state__GUARD__
    #define _cls_mark_state__GUARD__
    DECL_STRONG_TYPE(cls_mark_state, spiderrock::protobuf::api::ClsMarkState);
    #endif//_cls_mark_state__GUARD__

    #ifndef _opn_prc__double__GUARD__
    #define _opn_prc__double__GUARD__
    DECL_STRONG_TYPE(opn_prc__double, double);
    #endif//_opn_prc__double__GUARD__

    #ifndef _min_prc__double__GUARD__
    #define _min_prc__double__GUARD__
    DECL_STRONG_TYPE(min_prc__double, double);
    #endif//_min_prc__double__GUARD__

    #ifndef _max_prc__double__GUARD__
    #define _max_prc__double__GUARD__
    DECL_STRONG_TYPE(max_prc__double, double);
    #endif//_max_prc__double__GUARD__

    #ifndef _open_interest__GUARD__
    #define _open_interest__GUARD__
    DECL_STRONG_TYPE(open_interest, int32);
    #endif//_open_interest__GUARD__

    #ifndef _prt_count__GUARD__
    #define _prt_count__GUARD__
    DECL_STRONG_TYPE(prt_count, int32);
    #endif//_prt_count__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _realized_cnt__GUARD__
    #define _realized_cnt__GUARD__
    DECL_STRONG_TYPE(realized_cnt, int32);
    #endif//_realized_cnt__GUARD__

    #ifndef _realized_var__GUARD__
    #define _realized_var__GUARD__
    DECL_STRONG_TYPE(realized_var, float);
    #endif//_realized_var__GUARD__

    #ifndef _avg_mkt_size__GUARD__
    #define _avg_mkt_size__GUARD__
    DECL_STRONG_TYPE(avg_mkt_size, float);
    #endif//_avg_mkt_size__GUARD__

    #ifndef _avg_mkt_width__GUARD__
    #define _avg_mkt_width__GUARD__
    DECL_STRONG_TYPE(avg_mkt_width, float);
    #endif//_avg_mkt_width__GUARD__

    #ifndef _bid_prc__double__GUARD__
    #define _bid_prc__double__GUARD__
    DECL_STRONG_TYPE(bid_prc__double, double);
    #endif//_bid_prc__double__GUARD__

    #ifndef _ask_prc__double__GUARD__
    #define _ask_prc__double__GUARD__
    DECL_STRONG_TYPE(ask_prc__double, double);
    #endif//_ask_prc__double__GUARD__

    #ifndef _sr_cls_prc__double__GUARD__
    #define _sr_cls_prc__double__GUARD__
    DECL_STRONG_TYPE(sr_cls_prc__double, double);
    #endif//_sr_cls_prc__double__GUARD__

    #ifndef _close_prc__double__GUARD__
    #define _close_prc__double__GUARD__
    DECL_STRONG_TYPE(close_prc__double, double);
    #endif//_close_prc__double__GUARD__

    #ifndef _has_srcls_prc__GUARD__
    #define _has_srcls_prc__GUARD__
    DECL_STRONG_TYPE(has_srcls_prc, spiderrock::protobuf::api::YesNo);
    #endif//_has_srcls_prc__GUARD__

    #ifndef _has_close_prc__GUARD__
    #define _has_close_prc__GUARD__
    DECL_STRONG_TYPE(has_close_prc, spiderrock::protobuf::api::YesNo);
    #endif//_has_close_prc__GUARD__

    #ifndef _sr_close_mark_dttm__GUARD__
    #define _sr_close_mark_dttm__GUARD__
    DECL_STRONG_TYPE(sr_close_mark_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_sr_close_mark_dttm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    
    class FutureCloseMark_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FutureCloseMark_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to FutureCloseMark_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fkey & value) { set_fkey(value); }


        FutureCloseMark_PKey() {}

        virtual ~FutureCloseMark_PKey() {
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
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
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
    

    class FutureCloseMark {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::FutureCloseMark_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using cls_mark_state = spiderrock::protobuf::api::cls_mark_state;
        using opn_prc = spiderrock::protobuf::api::opn_prc__double;
        using min_prc = spiderrock::protobuf::api::min_prc__double;
        using max_prc = spiderrock::protobuf::api::max_prc__double;
        using open_interest = spiderrock::protobuf::api::open_interest;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using realized_cnt = spiderrock::protobuf::api::realized_cnt;
        using realized_var = spiderrock::protobuf::api::realized_var;
        using avg_mkt_size = spiderrock::protobuf::api::avg_mkt_size;
        using avg_mkt_width = spiderrock::protobuf::api::avg_mkt_width;
        using bid_prc = spiderrock::protobuf::api::bid_prc__double;
        using ask_prc = spiderrock::protobuf::api::ask_prc__double;
        using sr_cls_prc = spiderrock::protobuf::api::sr_cls_prc__double;
        using close_prc = spiderrock::protobuf::api::close_prc__double;
        using has_srcls_prc = spiderrock::protobuf::api::has_srcls_prc;
        using has_close_prc = spiderrock::protobuf::api::has_close_prc;
        using sr_close_mark_dttm = spiderrock::protobuf::api::sr_close_mark_dttm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        cls_mark_state m_cls_mark_state{};
        opn_prc m_opn_prc{};
        min_prc m_min_prc{};
        max_prc m_max_prc{};
        open_interest m_open_interest{};
        prt_count m_prt_count{};
        prt_volume m_prt_volume{};
        realized_cnt m_realized_cnt{};
        realized_var m_realized_var{};
        avg_mkt_size m_avg_mkt_size{};
        avg_mkt_width m_avg_mkt_width{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        sr_cls_prc m_sr_cls_prc{};
        close_prc m_close_prc{};
        has_srcls_prc m_has_srcls_prc{};
        has_close_prc m_has_close_prc{};
        sr_close_mark_dttm m_sr_close_mark_dttm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        cls_mark_state get_cls_mark_state() const {
            return m_cls_mark_state;
        }		
        opn_prc get_opn_prc() const {
            return m_opn_prc;
        }		
        min_prc get_min_prc() const {
            return m_min_prc;
        }		
        max_prc get_max_prc() const {
            return m_max_prc;
        }		
        open_interest get_open_interest() const {
            return m_open_interest;
        }		
        prt_count get_prt_count() const {
            return m_prt_count;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        realized_cnt get_realized_cnt() const {
            return m_realized_cnt;
        }		
        realized_var get_realized_var() const {
            return m_realized_var;
        }		
        avg_mkt_size get_avg_mkt_size() const {
            return m_avg_mkt_size;
        }		
        avg_mkt_width get_avg_mkt_width() const {
            return m_avg_mkt_width;
        }		
        bid_prc get_bid_prc() const {
            return m_bid_prc;
        }		
        ask_prc get_ask_prc() const {
            return m_ask_prc;
        }		
        sr_cls_prc get_sr_cls_prc() const {
            return m_sr_cls_prc;
        }		
        close_prc get_close_prc() const {
            return m_close_prc;
        }		
        has_srcls_prc get_has_srcls_prc() const {
            return m_has_srcls_prc;
        }		
        has_close_prc get_has_close_prc() const {
            return m_has_close_prc;
        }		
        sr_close_mark_dttm get_sr_close_mark_dttm() const {
            return m_sr_close_mark_dttm;
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_cls_mark_state(const cls_mark_state& value)  {
            m_cls_mark_state = value;
        }
        void set_opn_prc(const opn_prc& value)  {
            m_opn_prc = value;
        }
        void set_min_prc(const min_prc& value)  {
            m_min_prc = value;
        }
        void set_max_prc(const max_prc& value)  {
            m_max_prc = value;
        }
        void set_open_interest(const open_interest& value)  {
            m_open_interest = value;
        }
        void set_prt_count(const prt_count& value)  {
            m_prt_count = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_realized_cnt(const realized_cnt& value)  {
            m_realized_cnt = value;
        }
        void set_realized_var(const realized_var& value)  {
            m_realized_var = value;
        }
        void set_avg_mkt_size(const avg_mkt_size& value)  {
            m_avg_mkt_size = value;
        }
        void set_avg_mkt_width(const avg_mkt_width& value)  {
            m_avg_mkt_width = value;
        }
        void set_bid_prc(const bid_prc& value)  {
            m_bid_prc = value;
        }
        void set_ask_prc(const ask_prc& value)  {
            m_ask_prc = value;
        }
        void set_sr_cls_prc(const sr_cls_prc& value)  {
            m_sr_cls_prc = value;
        }
        void set_close_prc(const close_prc& value)  {
            m_close_prc = value;
        }
        void set_has_srcls_prc(const has_srcls_prc& value)  {
            m_has_srcls_prc = value;
        }
        void set_has_close_prc(const has_close_prc& value)  {
            m_has_close_prc = value;
        }
        void set_sr_close_mark_dttm(const sr_close_mark_dttm& value)  {
            m_sr_close_mark_dttm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FutureCloseMark::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const cls_mark_state & value) {
            set_cls_mark_state(value);
        }
        void set(const opn_prc & value) {
            set_opn_prc(value);
        }
        void set(const min_prc & value) {
            set_min_prc(value);
        }
        void set(const max_prc & value) {
            set_max_prc(value);
        }
        void set(const open_interest & value) {
            set_open_interest(value);
        }
        void set(const prt_count & value) {
            set_prt_count(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const realized_cnt & value) {
            set_realized_cnt(value);
        }
        void set(const realized_var & value) {
            set_realized_var(value);
        }
        void set(const avg_mkt_size & value) {
            set_avg_mkt_size(value);
        }
        void set(const avg_mkt_width & value) {
            set_avg_mkt_width(value);
        }
        void set(const bid_prc & value) {
            set_bid_prc(value);
        }
        void set(const ask_prc & value) {
            set_ask_prc(value);
        }
        void set(const sr_cls_prc & value) {
            set_sr_cls_prc(value);
        }
        void set(const close_prc & value) {
            set_close_prc(value);
        }
        void set(const has_srcls_prc & value) {
            set_has_srcls_prc(value);
        }
        void set(const has_close_prc & value) {
            set_has_close_prc(value);
        }
        void set(const sr_close_mark_dttm & value) {
            set_sr_close_mark_dttm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const FutureCloseMark & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_cls_mark_state);
            set(value.m_opn_prc);
            set(value.m_min_prc);
            set(value.m_max_prc);
            set(value.m_open_interest);
            set(value.m_prt_count);
            set(value.m_prt_volume);
            set(value.m_realized_cnt);
            set(value.m_realized_var);
            set(value.m_avg_mkt_size);
            set(value.m_avg_mkt_width);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_sr_cls_prc);
            set(value.m_close_prc);
            set(value.m_has_srcls_prc);
            set(value.m_has_close_prc);
            set(value.m_sr_close_mark_dttm);
            set(value.m_timestamp);
        }

        FutureCloseMark() {
            m__meta.set_message_type("FutureCloseMark");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3120, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3120, length);
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
             *this = FutureCloseMark{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeOpnPrc() const {
            return !(m_opn_prc == 0.0);
        }
        bool IncludeMinPrc() const {
            return !(m_min_prc == 0.0);
        }
        bool IncludeMaxPrc() const {
            return !(m_max_prc == 0.0);
        }
        bool IncludeOpenInterest() const {
            return !(m_open_interest == 0);
        }
        bool IncludePrtCount() const {
            return !(m_prt_count == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeRealizedCnt() const {
            return !(m_realized_cnt == 0);
        }
        bool IncludeRealizedVar() const {
            return !(m_realized_var == 0.0);
        }
        bool IncludeAvgMktSize() const {
            return !(m_avg_mkt_size == 0.0);
        }
        bool IncludeAvgMktWidth() const {
            return !(m_avg_mkt_width == 0.0);
        }
        bool IncludeBidPrc() const {
            return !(m_bid_prc == 0.0);
        }
        bool IncludeAskPrc() const {
            return !(m_ask_prc == 0.0);
        }
        bool IncludeSrClsPrc() const {
            return !(m_sr_cls_prc == 0.0);
        }
        bool IncludeClosePrc() const {
            return !(m_close_prc == 0.0);
        }
        bool IncludeSrCloseMarkDttm() const {
            return (m_sr_close_mark_dttm.time_since_epoch().count() != 0);
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeOpnPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_opn_prc);
            }
            if ( IncludeMinPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_min_prc);
            }
            if ( IncludeMaxPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_max_prc);
            }
            if ( IncludeOpenInterest()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_open_interest);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_volume);
            }
            if ( IncludeRealizedCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_realized_cnt);
            }
            if ( IncludeRealizedVar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_realized_var);
            }
            if ( IncludeAvgMktSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_avg_mkt_size);
            }
            if ( IncludeAvgMktWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_avg_mkt_width);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_close_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_srcls_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_close_prc)));
            if ( IncludeSrCloseMarkDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(154, m_sr_close_mark_dttm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_timestamp);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeOpnPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_opn_prc);
            }
            if ( IncludeMinPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_min_prc);
            }
            if ( IncludeMaxPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_max_prc);
            }
            if ( IncludeOpenInterest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_open_interest);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_volume);
            }
            if ( IncludeRealizedCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_realized_cnt);
            }
            if ( IncludeRealizedVar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_realized_var);
            }
            if ( IncludeAvgMktSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_avg_mkt_size);
            }
            if ( IncludeAvgMktWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_avg_mkt_width);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_close_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_srcls_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_close_prc)));
            if ( IncludeSrCloseMarkDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 154, m_sr_close_mark_dttm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_timestamp);
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cls_mark_state = static_cast<spiderrock::protobuf::api::ClsMarkState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_opn_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_interest = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
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
                            m_realized_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_realized_var = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_mkt_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_mkt_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sr_cls_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_close_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_srcls_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_close_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_sr_close_mark_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 157: {
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

    template<> inline const auto FutureCloseMark::get<FutureCloseMark::_meta>() const { return FutureCloseMark::_meta{ m__meta}; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::pkey>() const { return FutureCloseMark::pkey{ m_pkey}; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::trade_date>() const { return FutureCloseMark::trade_date{ m_trade_date}; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::cls_mark_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>( m_cls_mark_state)); }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::opn_prc>() const { return m_opn_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::min_prc>() const { return m_min_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::max_prc>() const { return m_max_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::open_interest>() const { return m_open_interest; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::prt_count>() const { return m_prt_count; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::realized_cnt>() const { return m_realized_cnt; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::realized_var>() const { return m_realized_var; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::avg_mkt_size>() const { return m_avg_mkt_size; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::avg_mkt_width>() const { return m_avg_mkt_width; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::sr_cls_prc>() const { return m_sr_cls_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::close_prc>() const { return m_close_prc; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::has_srcls_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_srcls_prc)); }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::has_close_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_close_prc)); }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::sr_close_mark_dttm>() const { return m_sr_close_mark_dttm; }
    template<> inline const auto FutureCloseMark::get<FutureCloseMark::timestamp>() const { return m_timestamp; }
    template<> inline const auto FutureCloseMark_PKey::get<FutureCloseMark_PKey::fkey>() const { return FutureCloseMark_PKey::fkey{m_fkey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const FutureCloseMark_PKey& m) {
        o << "\"fkey\":{" << m.get<FutureCloseMark_PKey::fkey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const FutureCloseMark& m) {
        o << "\"_meta\":{" << m.get<FutureCloseMark::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<FutureCloseMark::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<FutureCloseMark::trade_date>() << "}";
        o << ",\"cls_mark_state\":" << (int64_t)m.get<FutureCloseMark::cls_mark_state>();
        o << ",\"opn_prc\":" << m.get<FutureCloseMark::opn_prc>();
        o << ",\"min_prc\":" << m.get<FutureCloseMark::min_prc>();
        o << ",\"max_prc\":" << m.get<FutureCloseMark::max_prc>();
        o << ",\"open_interest\":" << m.get<FutureCloseMark::open_interest>();
        o << ",\"prt_count\":" << m.get<FutureCloseMark::prt_count>();
        o << ",\"prt_volume\":" << m.get<FutureCloseMark::prt_volume>();
        o << ",\"realized_cnt\":" << m.get<FutureCloseMark::realized_cnt>();
        o << ",\"realized_var\":" << m.get<FutureCloseMark::realized_var>();
        o << ",\"avg_mkt_size\":" << m.get<FutureCloseMark::avg_mkt_size>();
        o << ",\"avg_mkt_width\":" << m.get<FutureCloseMark::avg_mkt_width>();
        o << ",\"bid_prc\":" << m.get<FutureCloseMark::bid_prc>();
        o << ",\"ask_prc\":" << m.get<FutureCloseMark::ask_prc>();
        o << ",\"sr_cls_prc\":" << m.get<FutureCloseMark::sr_cls_prc>();
        o << ",\"close_prc\":" << m.get<FutureCloseMark::close_prc>();
        o << ",\"has_srcls_prc\":" << (int64_t)m.get<FutureCloseMark::has_srcls_prc>();
        o << ",\"has_close_prc\":" << (int64_t)m.get<FutureCloseMark::has_close_prc>();
        {
            std::time_t tt = m.get<FutureCloseMark::sr_close_mark_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"sr_close_mark_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<FutureCloseMark::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}