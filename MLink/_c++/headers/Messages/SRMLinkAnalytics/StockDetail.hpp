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

    #ifndef _e_move__GUARD__
    #define _e_move__GUARD__
    DECL_STRONG_TYPE(e_move, float);
    #endif//_e_move__GUARD__

    #ifndef _e_move_hist__GUARD__
    #define _e_move_hist__GUARD__
    DECL_STRONG_TYPE(e_move_hist, float);
    #endif//_e_move_hist__GUARD__

    #ifndef _next_earn_days__GUARD__
    #define _next_earn_days__GUARD__
    DECL_STRONG_TYPE(next_earn_days, int32);
    #endif//_next_earn_days__GUARD__

    #ifndef _near_earn_days__GUARD__
    #define _near_earn_days__GUARD__
    DECL_STRONG_TYPE(near_earn_days, int32);
    #endif//_near_earn_days__GUARD__

    #ifndef _next_earn_time__GUARD__
    #define _next_earn_time__GUARD__
    DECL_STRONG_TYPE(next_earn_time, string);
    #endif//_next_earn_time__GUARD__

    #ifndef _next_earn_date__GUARD__
    #define _next_earn_date__GUARD__
    DECL_STRONG_TYPE(next_earn_date, DateKey);
    #endif//_next_earn_date__GUARD__

    #ifndef _is_next_earn_date_confirmed__GUARD__
    #define _is_next_earn_date_confirmed__GUARD__
    DECL_STRONG_TYPE(is_next_earn_date_confirmed, spiderrock::protobuf::api::YesNo);
    #endif//_is_next_earn_date_confirmed__GUARD__

    #ifndef _next_ddiv_amt__GUARD__
    #define _next_ddiv_amt__GUARD__
    DECL_STRONG_TYPE(next_ddiv_amt, float);
    #endif//_next_ddiv_amt__GUARD__

    #ifndef _next_ddiv_days__GUARD__
    #define _next_ddiv_days__GUARD__
    DECL_STRONG_TYPE(next_ddiv_days, int32);
    #endif//_next_ddiv_days__GUARD__

    #ifndef _num_options__GUARD__
    #define _num_options__GUARD__
    DECL_STRONG_TYPE(num_options, int32);
    #endif//_num_options__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockDetail_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockDetail_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockDetail_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockDetail_PKey() {}

        virtual ~StockDetail_PKey() {
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
    

    class StockDetail {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockDetail_PKey;
        using e_move = spiderrock::protobuf::api::e_move;
        using e_move_hist = spiderrock::protobuf::api::e_move_hist;
        using next_earn_days = spiderrock::protobuf::api::next_earn_days;
        using near_earn_days = spiderrock::protobuf::api::near_earn_days;
        using next_earn_time = spiderrock::protobuf::api::next_earn_time;
        using next_earn_date = spiderrock::protobuf::api::next_earn_date;
        using is_next_earn_date_confirmed = spiderrock::protobuf::api::is_next_earn_date_confirmed;
        using next_ddiv_amt = spiderrock::protobuf::api::next_ddiv_amt;
        using next_ddiv_days = spiderrock::protobuf::api::next_ddiv_days;
        using num_options = spiderrock::protobuf::api::num_options;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        e_move m_e_move{};
        e_move_hist m_e_move_hist{};
        next_earn_days m_next_earn_days{};
        near_earn_days m_near_earn_days{};
        next_earn_time m_next_earn_time{};
        next_earn_date m_next_earn_date{};
        is_next_earn_date_confirmed m_is_next_earn_date_confirmed{};
        next_ddiv_amt m_next_ddiv_amt{};
        next_ddiv_days m_next_ddiv_days{};
        num_options m_num_options{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        e_move get_e_move() const {
            return m_e_move;
        }		
        e_move_hist get_e_move_hist() const {
            return m_e_move_hist;
        }		
        next_earn_days get_next_earn_days() const {
            return m_next_earn_days;
        }		
        near_earn_days get_near_earn_days() const {
            return m_near_earn_days;
        }		
        next_earn_time get_next_earn_time() const {
            return m_next_earn_time;
        }		
        next_earn_date get_next_earn_date() const {
            return m_next_earn_date;
        }		
        is_next_earn_date_confirmed get_is_next_earn_date_confirmed() const {
            return m_is_next_earn_date_confirmed;
        }		
        next_ddiv_amt get_next_ddiv_amt() const {
            return m_next_ddiv_amt;
        }		
        next_ddiv_days get_next_ddiv_days() const {
            return m_next_ddiv_days;
        }		
        num_options get_num_options() const {
            return m_num_options;
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
        void set_e_move(const e_move& value)  {
            m_e_move = value;
        }
        void set_e_move_hist(const e_move_hist& value)  {
            m_e_move_hist = value;
        }
        void set_next_earn_days(const next_earn_days& value)  {
            m_next_earn_days = value;
        }
        void set_near_earn_days(const near_earn_days& value)  {
            m_near_earn_days = value;
        }
        void set_next_earn_time(const next_earn_time& value)  {
            m_next_earn_time = value;
        }
        void set_next_earn_date(const next_earn_date& value)  {
            m_next_earn_date = value;
        }
        void set_is_next_earn_date_confirmed(const is_next_earn_date_confirmed& value)  {
            m_is_next_earn_date_confirmed = value;
        }
        void set_next_ddiv_amt(const next_ddiv_amt& value)  {
            m_next_ddiv_amt = value;
        }
        void set_next_ddiv_days(const next_ddiv_days& value)  {
            m_next_ddiv_days = value;
        }
        void set_num_options(const num_options& value)  {
            m_num_options = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockDetail::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const e_move & value) {
            set_e_move(value);
        }
        void set(const e_move_hist & value) {
            set_e_move_hist(value);
        }
        void set(const next_earn_days & value) {
            set_next_earn_days(value);
        }
        void set(const near_earn_days & value) {
            set_near_earn_days(value);
        }
        void set(const next_earn_time & value) {
            set_next_earn_time(value);
        }
        void set(const next_earn_date & value) {
            set_next_earn_date(value);
        }
        void set(const is_next_earn_date_confirmed & value) {
            set_is_next_earn_date_confirmed(value);
        }
        void set(const next_ddiv_amt & value) {
            set_next_ddiv_amt(value);
        }
        void set(const next_ddiv_days & value) {
            set_next_ddiv_days(value);
        }
        void set(const num_options & value) {
            set_num_options(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockDetail & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_e_move);
            set(value.m_e_move_hist);
            set(value.m_next_earn_days);
            set(value.m_near_earn_days);
            set(value.m_next_earn_time);
            set(value.m_next_earn_date);
            set(value.m_is_next_earn_date_confirmed);
            set(value.m_next_ddiv_amt);
            set(value.m_next_ddiv_days);
            set(value.m_num_options);
            set(value.m_timestamp);
        }

        StockDetail() {
            m__meta.set_message_type("StockDetail");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3250, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3250, length);
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
             *this = StockDetail{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeEMove() const {
            return !(m_e_move == 0.0);
        }
        bool IncludeEMoveHist() const {
            return !(m_e_move_hist == 0.0);
        }
        bool IncludeNextEarnDays() const {
            return !(m_next_earn_days == 0);
        }
        bool IncludeNearEarnDays() const {
            return !(m_near_earn_days == 0);
        }
        bool IncludeNextEarnTime() const {
            return !(m_next_earn_time.empty());
        }
        bool IncludeNextEarnDate() const {
            return (m_next_earn_date.ByteSizeLong() > 0);
        }
        bool IncludeNextDdivAmt() const {
            return !(m_next_ddiv_amt == 0.0);
        }
        bool IncludeNextDdivDays() const {
            return !(m_next_ddiv_days == 0);
        }
        bool IncludeNumOptions() const {
            return !(m_num_options == 0);
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
            if ( IncludeEMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_e_move_hist);
            }
            if ( IncludeNextEarnDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_next_earn_days);
            }
            if ( IncludeNearEarnDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_near_earn_days);
            }
            if ( IncludeNextEarnTime()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_next_earn_time);
            }
            if ( IncludeNextEarnDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(115, m_next_earn_date.get_year(), m_next_earn_date.get_month(), m_next_earn_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_next_earn_date_confirmed)));
            if ( IncludeNextDdivAmt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_next_ddiv_amt);
            }
            if ( IncludeNextDdivDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_next_ddiv_days);
            }
            if ( IncludeNumOptions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_num_options);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(130, m_timestamp);
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
            if ( IncludeEMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_e_move_hist);
            }
            if ( IncludeNextEarnDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_next_earn_days);
            }
            if ( IncludeNearEarnDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_near_earn_days);
            }
            if ( IncludeNextEarnTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_next_earn_time));
            }
            if ( IncludeNextEarnDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,115, m_next_earn_date.get_year(), m_next_earn_date.get_month(), m_next_earn_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_next_earn_date_confirmed)));
            if ( IncludeNextDdivAmt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_next_ddiv_amt);
            }
            if ( IncludeNextDdivDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_next_ddiv_days);
            }
            if ( IncludeNumOptions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_num_options);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 130, m_timestamp);
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
                            m_e_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_next_earn_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_near_earn_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_next_earn_time = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_next_earn_date.set_year(dateKey.year());
                            m_next_earn_date.set_month(dateKey.month());
                            m_next_earn_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_next_earn_date_confirmed = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_next_ddiv_amt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_next_ddiv_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_options = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
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

    template<> inline const auto StockDetail::get<StockDetail::_meta>() const { return StockDetail::_meta{ m__meta}; }
    template<> inline const auto StockDetail::get<StockDetail::pkey>() const { return StockDetail::pkey{ m_pkey}; }
    template<> inline const auto StockDetail::get<StockDetail::e_move>() const { return m_e_move; }
    template<> inline const auto StockDetail::get<StockDetail::e_move_hist>() const { return m_e_move_hist; }
    template<> inline const auto StockDetail::get<StockDetail::next_earn_days>() const { return m_next_earn_days; }
    template<> inline const auto StockDetail::get<StockDetail::near_earn_days>() const { return m_near_earn_days; }
    template<> inline const auto StockDetail::get<StockDetail::next_earn_time>() const { return m_next_earn_time; }
    template<> inline const auto StockDetail::get<StockDetail::next_earn_date>() const { return StockDetail::next_earn_date{ m_next_earn_date}; }
    template<> inline const auto StockDetail::get<StockDetail::is_next_earn_date_confirmed>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_next_earn_date_confirmed)); }
    template<> inline const auto StockDetail::get<StockDetail::next_ddiv_amt>() const { return m_next_ddiv_amt; }
    template<> inline const auto StockDetail::get<StockDetail::next_ddiv_days>() const { return m_next_ddiv_days; }
    template<> inline const auto StockDetail::get<StockDetail::num_options>() const { return m_num_options; }
    template<> inline const auto StockDetail::get<StockDetail::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockDetail_PKey::get<StockDetail_PKey::ticker>() const { return StockDetail_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockDetail_PKey& m) {
        o << "\"ticker\":{" << m.get<StockDetail_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockDetail& m) {
        o << "\"_meta\":{" << m.get<StockDetail::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockDetail::pkey>() << "}";
        o << ",\"e_move\":" << m.get<StockDetail::e_move>();
        o << ",\"e_move_hist\":" << m.get<StockDetail::e_move_hist>();
        o << ",\"next_earn_days\":" << m.get<StockDetail::next_earn_days>();
        o << ",\"near_earn_days\":" << m.get<StockDetail::near_earn_days>();
        o << ",\"next_earn_time\":\"" << m.get<StockDetail::next_earn_time>() << "\"";
        o << ",\"next_earn_date\":{" << m.get<StockDetail::next_earn_date>() << "}";
        o << ",\"is_next_earn_date_confirmed\":" << (int64_t)m.get<StockDetail::is_next_earn_date_confirmed>();
        o << ",\"next_ddiv_amt\":" << m.get<StockDetail::next_ddiv_amt>();
        o << ",\"next_ddiv_days\":" << m.get<StockDetail::next_ddiv_days>();
        o << ",\"num_options\":" << m.get<StockDetail::num_options>();
        {
            std::time_t tt = m.get<StockDetail::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}