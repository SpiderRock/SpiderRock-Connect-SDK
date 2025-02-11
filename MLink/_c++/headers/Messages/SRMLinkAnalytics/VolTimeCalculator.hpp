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

    #ifndef _end_time__duration__GUARD__
    #define _end_time__duration__GUARD__
    DECL_STRONG_TYPE(end_time__duration, std::chrono::nanoseconds);
    #endif//_end_time__duration__GUARD__

    #ifndef _now_dttm__GUARD__
    #define _now_dttm__GUARD__
    DECL_STRONG_TYPE(now_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_now_dttm__GUARD__

    #ifndef _now_src__GUARD__
    #define _now_src__GUARD__
    DECL_STRONG_TYPE(now_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_now_src__GUARD__

    #ifndef _holiday_calendar__GUARD__
    #define _holiday_calendar__GUARD__
    DECL_STRONG_TYPE(holiday_calendar, spiderrock::protobuf::api::CalendarCode);
    #endif//_holiday_calendar__GUARD__

    #ifndef _holiday_calendar_src__GUARD__
    #define _holiday_calendar_src__GUARD__
    DECL_STRONG_TYPE(holiday_calendar_src, spiderrock::protobuf::api::FieldSrc);
    #endif//_holiday_calendar_src__GUARD__

    #ifndef _years_vt70__GUARD__
    #define _years_vt70__GUARD__
    DECL_STRONG_TYPE(years_vt70, double);
    #endif//_years_vt70__GUARD__

    #ifndef _years_y252__GUARD__
    #define _years_y252__GUARD__
    DECL_STRONG_TYPE(years_y252, double);
    #endif//_years_y252__GUARD__

    #ifndef _years_y365__GUARD__
    #define _years_y365__GUARD__
    DECL_STRONG_TYPE(years_y365, double);
    #endif//_years_y365__GUARD__

    #ifndef _partial_days__GUARD__
    #define _partial_days__GUARD__
    DECL_STRONG_TYPE(partial_days, int32);
    #endif//_partial_days__GUARD__

    #ifndef _holiday_days__GUARD__
    #define _holiday_days__GUARD__
    DECL_STRONG_TYPE(holiday_days, int32);
    #endif//_holiday_days__GUARD__

    #ifndef _complete_days__GUARD__
    #define _complete_days__GUARD__
    DECL_STRONG_TYPE(complete_days, int32);
    #endif//_complete_days__GUARD__

    #ifndef _error__string__GUARD__
    #define _error__string__GUARD__
    DECL_STRONG_TYPE(error__string, string);
    #endif//_error__string__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _end_date__GUARD__
    #define _end_date__GUARD__
    DECL_STRONG_TYPE(end_date, DateKey);
    #endif//_end_date__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    
    class VolTimeCalculator_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using end_date = spiderrock::protobuf::api::end_date;
        using user_name = spiderrock::protobuf::api::user_name;

        private:
        ticker m_ticker{};
        sec_type m_sec_type{};
        end_date m_end_date{};
        user_name m_user_name{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
		end_date get_end_date() const {
            return m_end_date;
        }
        user_name get_user_name() const {
            return m_user_name;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_end_date(const end_date& value)  {
            m_end_date = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to VolTimeCalculator_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to VolTimeCalculator_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const end_date & value) { set_end_date(value); }
        void set(const user_name & value) { set_user_name(value); }


        VolTimeCalculator_PKey() {}

        virtual ~VolTimeCalculator_PKey() {
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
        bool IncludeEndDate() const {
            return (m_end_date.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeEndDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_end_date.get_year(), m_end_date.get_month(), m_end_date.get_day());
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_user_name);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeEndDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_end_date.get_year(), m_end_date.get_month(), m_end_date.get_day());
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_user_name));
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
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_end_date.set_year(dateKey.year());
                        m_end_date.set_month(dateKey.month());
                        m_end_date.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class VolTimeCalculator {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::VolTimeCalculator_PKey;
        using end_time = spiderrock::protobuf::api::end_time__duration;
        using now_dttm = spiderrock::protobuf::api::now_dttm;
        using now_src = spiderrock::protobuf::api::now_src;
        using holiday_calendar = spiderrock::protobuf::api::holiday_calendar;
        using holiday_calendar_src = spiderrock::protobuf::api::holiday_calendar_src;
        using years_vt70 = spiderrock::protobuf::api::years_vt70;
        using years_y252 = spiderrock::protobuf::api::years_y252;
        using years_y365 = spiderrock::protobuf::api::years_y365;
        using partial_days = spiderrock::protobuf::api::partial_days;
        using holiday_days = spiderrock::protobuf::api::holiday_days;
        using complete_days = spiderrock::protobuf::api::complete_days;
        using error = spiderrock::protobuf::api::error__string;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        end_time m_end_time{};
        now_dttm m_now_dttm{};
        now_src m_now_src{};
        holiday_calendar m_holiday_calendar{};
        holiday_calendar_src m_holiday_calendar_src{};
        years_vt70 m_years_vt70{};
        years_y252 m_years_y252{};
        years_y365 m_years_y365{};
        partial_days m_partial_days{};
        holiday_days m_holiday_days{};
        complete_days m_complete_days{};
        error m_error{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        end_time get_end_time() const {
            return m_end_time;
        }		
        now_dttm get_now_dttm() const {
            return m_now_dttm;
        }		
        now_src get_now_src() const {
            return m_now_src;
        }		
        holiday_calendar get_holiday_calendar() const {
            return m_holiday_calendar;
        }		
        holiday_calendar_src get_holiday_calendar_src() const {
            return m_holiday_calendar_src;
        }		
        years_vt70 get_years_vt70() const {
            return m_years_vt70;
        }		
        years_y252 get_years_y252() const {
            return m_years_y252;
        }		
        years_y365 get_years_y365() const {
            return m_years_y365;
        }		
        partial_days get_partial_days() const {
            return m_partial_days;
        }		
        holiday_days get_holiday_days() const {
            return m_holiday_days;
        }		
        complete_days get_complete_days() const {
            return m_complete_days;
        }		
        error get_error() const {
            return m_error;
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
        void set_end_time(const end_time& value)  {
            m_end_time = value;
        }
        void set_now_dttm(const now_dttm& value)  {
            m_now_dttm = value;
        }
        void set_now_src(const now_src& value)  {
            m_now_src = value;
        }
        void set_holiday_calendar(const holiday_calendar& value)  {
            m_holiday_calendar = value;
        }
        void set_holiday_calendar_src(const holiday_calendar_src& value)  {
            m_holiday_calendar_src = value;
        }
        void set_years_vt70(const years_vt70& value)  {
            m_years_vt70 = value;
        }
        void set_years_y252(const years_y252& value)  {
            m_years_y252 = value;
        }
        void set_years_y365(const years_y365& value)  {
            m_years_y365 = value;
        }
        void set_partial_days(const partial_days& value)  {
            m_partial_days = value;
        }
        void set_holiday_days(const holiday_days& value)  {
            m_holiday_days = value;
        }
        void set_complete_days(const complete_days& value)  {
            m_complete_days = value;
        }
        void set_error(const error& value)  {
            m_error = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to VolTimeCalculator::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const end_time & value) {
            set_end_time(value);
        }
        void set(const now_dttm & value) {
            set_now_dttm(value);
        }
        void set(const now_src & value) {
            set_now_src(value);
        }
        void set(const holiday_calendar & value) {
            set_holiday_calendar(value);
        }
        void set(const holiday_calendar_src & value) {
            set_holiday_calendar_src(value);
        }
        void set(const years_vt70 & value) {
            set_years_vt70(value);
        }
        void set(const years_y252 & value) {
            set_years_y252(value);
        }
        void set(const years_y365 & value) {
            set_years_y365(value);
        }
        void set(const partial_days & value) {
            set_partial_days(value);
        }
        void set(const holiday_days & value) {
            set_holiday_days(value);
        }
        void set(const complete_days & value) {
            set_complete_days(value);
        }
        void set(const error & value) {
            set_error(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const VolTimeCalculator & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_end_time);
            set(value.m_now_dttm);
            set(value.m_now_src);
            set(value.m_holiday_calendar);
            set(value.m_holiday_calendar_src);
            set(value.m_years_vt70);
            set(value.m_years_y252);
            set(value.m_years_y365);
            set(value.m_partial_days);
            set(value.m_holiday_days);
            set(value.m_complete_days);
            set(value.m_error);
            set(value.m_timestamp);
        }

        VolTimeCalculator() {
            m__meta.set_message_type("VolTimeCalculator");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 5065, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 5065, length);
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
             *this = VolTimeCalculator{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeEndTime() const {
            return (m_end_time.count() != 0);
        }
        bool IncludeNowDttm() const {
            return (m_now_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeYearsVt70() const {
            return !(m_years_vt70 == 0.0);
        }
        bool IncludeYearsY252() const {
            return !(m_years_y252 == 0.0);
        }
        bool IncludeYearsY365() const {
            return !(m_years_y365 == 0.0);
        }
        bool IncludePartialDays() const {
            return !(m_partial_days == 0);
        }
        bool IncludeHolidayDays() const {
            return !(m_holiday_days == 0);
        }
        bool IncludeCompleteDays() const {
            return !(m_complete_days == 0);
        }
        bool IncludeError() const {
            return !(m_error.empty());
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
            if ( IncludeEndTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(100, m_end_time);
            }
            if ( IncludeNowDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_now_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_now_src)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalendarCode>(m_holiday_calendar)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_holiday_calendar_src)));
            if ( IncludeYearsVt70()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(152,m_years_vt70);
            }
            if ( IncludeYearsY252()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(153,m_years_y252);
            }
            if ( IncludeYearsY365()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_years_y365);
            }
            if ( IncludePartialDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_partial_days);
            }
            if ( IncludeHolidayDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_holiday_days);
            }
            if ( IncludeCompleteDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_complete_days);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_error);
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
            if ( IncludeEndTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 100, m_end_time);
            }
            if ( IncludeNowDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_now_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_now_src)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalendarCode>(m_holiday_calendar)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>(m_holiday_calendar_src)));
            if ( IncludeYearsVt70()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,152,m_years_vt70);
            }
            if ( IncludeYearsY252()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,153,m_years_y252);
            }
            if ( IncludeYearsY365()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_years_y365);
            }
            if ( IncludePartialDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_partial_days);
            }
            if ( IncludeHolidayDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_holiday_days);
            }
            if ( IncludeCompleteDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_complete_days);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_error));
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
                    case 100: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_end_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_now_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_now_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_holiday_calendar = static_cast<spiderrock::protobuf::api::CalendarCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_holiday_calendar_src = static_cast<spiderrock::protobuf::api::FieldSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 152: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_years_vt70 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 153: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_years_y252 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_years_y365 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_partial_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_holiday_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_complete_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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

    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::_meta>() const { return VolTimeCalculator::_meta{ m__meta}; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::pkey>() const { return VolTimeCalculator::pkey{ m_pkey}; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::end_time>() const { return m_end_time; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::now_dttm>() const { return m_now_dttm; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::now_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_now_src)); }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::holiday_calendar>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalendarCode>( m_holiday_calendar)); }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::holiday_calendar_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldSrc>( m_holiday_calendar_src)); }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::years_vt70>() const { return m_years_vt70; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::years_y252>() const { return m_years_y252; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::years_y365>() const { return m_years_y365; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::partial_days>() const { return m_partial_days; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::holiday_days>() const { return m_holiday_days; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::complete_days>() const { return m_complete_days; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::error>() const { return m_error; }
    template<> inline const auto VolTimeCalculator::get<VolTimeCalculator::timestamp>() const { return m_timestamp; }
    template<> inline const auto VolTimeCalculator_PKey::get<VolTimeCalculator_PKey::ticker>() const { return VolTimeCalculator_PKey::ticker{m_ticker}; }
    template<> inline const auto VolTimeCalculator_PKey::get<VolTimeCalculator_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto VolTimeCalculator_PKey::get<VolTimeCalculator_PKey::end_date>() const { return VolTimeCalculator_PKey::end_date{m_end_date}; }
    template<> inline const auto VolTimeCalculator_PKey::get<VolTimeCalculator_PKey::user_name>() const { return m_user_name; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const VolTimeCalculator_PKey& m) {
        o << "\"ticker\":{" << m.get<VolTimeCalculator_PKey::ticker>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<VolTimeCalculator_PKey::sec_type>();
        o << ",\"end_date\":{" << m.get<VolTimeCalculator_PKey::end_date>() << "}";
        o << ",\"user_name\":\"" << m.get<VolTimeCalculator_PKey::user_name>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const VolTimeCalculator& m) {
        o << "\"_meta\":{" << m.get<VolTimeCalculator::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<VolTimeCalculator::pkey>() << "}";
        o << ",\"end_time\":\"" << m.get<VolTimeCalculator::end_time>().count() << "\"";
        {
            std::time_t tt = m.get<VolTimeCalculator::now_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"now_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"now_src\":" << (int64_t)m.get<VolTimeCalculator::now_src>();
        o << ",\"holiday_calendar\":" << (int64_t)m.get<VolTimeCalculator::holiday_calendar>();
        o << ",\"holiday_calendar_src\":" << (int64_t)m.get<VolTimeCalculator::holiday_calendar_src>();
        o << ",\"years_vt70\":" << m.get<VolTimeCalculator::years_vt70>();
        o << ",\"years_y252\":" << m.get<VolTimeCalculator::years_y252>();
        o << ",\"years_y365\":" << m.get<VolTimeCalculator::years_y365>();
        o << ",\"partial_days\":" << m.get<VolTimeCalculator::partial_days>();
        o << ",\"holiday_days\":" << m.get<VolTimeCalculator::holiday_days>();
        o << ",\"complete_days\":" << m.get<VolTimeCalculator::complete_days>();
        o << ",\"error\":\"" << m.get<VolTimeCalculator::error>() << "\"";
        {
            std::time_t tt = m.get<VolTimeCalculator::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}