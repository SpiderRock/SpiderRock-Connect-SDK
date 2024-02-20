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

    #ifndef _stk_exch__GUARD__
    #define _stk_exch__GUARD__
    DECL_STRONG_TYPE(stk_exch, float);
    #endif//_stk_exch__GUARD__

    #ifndef _ts__GUARD__
    #define _ts__GUARD__
    DECL_STRONG_TYPE(ts, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_ts__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _source__GUARD__
    #define _source__GUARD__
    DECL_STRONG_TYPE(source, spiderrock::protobuf::api::EventSource);
    #endif//_source__GUARD__

    #ifndef _confidence_ind__GUARD__
    #define _confidence_ind__GUARD__
    DECL_STRONG_TYPE(confidence_ind, string);
    #endif//_confidence_ind__GUARD__

    #ifndef _earning_date__GUARD__
    #define _earning_date__GUARD__
    DECL_STRONG_TYPE(earning_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_earning_date__GUARD__

    #ifndef _quarter__GUARD__
    #define _quarter__GUARD__
    DECL_STRONG_TYPE(quarter, string);
    #endif//_quarter__GUARD__

    #ifndef _fiscal_yr__GUARD__
    #define _fiscal_yr__GUARD__
    DECL_STRONG_TYPE(fiscal_yr, int32);
    #endif//_fiscal_yr__GUARD__

    #ifndef _earning_date_status__GUARD__
    #define _earning_date_status__GUARD__
    DECL_STRONG_TYPE(earning_date_status, string);
    #endif//_earning_date_status__GUARD__

    #ifndef _quarter_end_date__GUARD__
    #define _quarter_end_date__GUARD__
    DECL_STRONG_TYPE(quarter_end_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_quarter_end_date__GUARD__

    #ifndef _filling_due_date__GUARD__
    #define _filling_due_date__GUARD__
    DECL_STRONG_TYPE(filling_due_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_filling_due_date__GUARD__

    #ifndef _time_of_day__GUARD__
    #define _time_of_day__GUARD__
    DECL_STRONG_TYPE(time_of_day, string);
    #endif//_time_of_day__GUARD__

    #ifndef _disclaimer__GUARD__
    #define _disclaimer__GUARD__
    DECL_STRONG_TYPE(disclaimer, string);
    #endif//_disclaimer__GUARD__

    #ifndef _audit_src__GUARD__
    #define _audit_src__GUARD__
    DECL_STRONG_TYPE(audit_src, string);
    #endif//_audit_src__GUARD__

    
    class WshFutureQuarters_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using source = spiderrock::protobuf::api::source;

        private:
        ticker m_ticker{};
        source m_source{};

        public:
        source get_source() const {
            return m_source;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_source(const source& value)  {
            m_source = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const source & value) { set_source(value); }


        WshFutureQuarters_PKey() {}

        virtual ~WshFutureQuarters_PKey() {
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventSource>(m_source)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventSource>(m_source)));
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
                    case 11: {m_source = static_cast<spiderrock::protobuf::api::EventSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class WshFutureQuarters_Earnings {
        public:
        //using statements for all types used in this class
        using confidence_ind = spiderrock::protobuf::api::confidence_ind;
        using earning_date = spiderrock::protobuf::api::earning_date;
        using quarter = spiderrock::protobuf::api::quarter;
        using fiscal_yr = spiderrock::protobuf::api::fiscal_yr;
        using earning_date_status = spiderrock::protobuf::api::earning_date_status;
        using quarter_end_date = spiderrock::protobuf::api::quarter_end_date;
        using filling_due_date = spiderrock::protobuf::api::filling_due_date;
        using time_of_day = spiderrock::protobuf::api::time_of_day;
        using disclaimer = spiderrock::protobuf::api::disclaimer;
        using audit_src = spiderrock::protobuf::api::audit_src;

        private:
        confidence_ind m_confidence_ind{};
        earning_date m_earning_date{};
        quarter m_quarter{};
        fiscal_yr m_fiscal_yr{};
        earning_date_status m_earning_date_status{};
        quarter_end_date m_quarter_end_date{};
        filling_due_date m_filling_due_date{};
        time_of_day m_time_of_day{};
        disclaimer m_disclaimer{};
        audit_src m_audit_src{};

        public:
        confidence_ind get_confidence_ind() const {
            return m_confidence_ind;
        }
        earning_date get_earning_date() const {
            return m_earning_date;
        }
        quarter get_quarter() const {
            return m_quarter;
        }
        fiscal_yr get_fiscal_yr() const {
            return m_fiscal_yr;
        }
        earning_date_status get_earning_date_status() const {
            return m_earning_date_status;
        }
        quarter_end_date get_quarter_end_date() const {
            return m_quarter_end_date;
        }
        filling_due_date get_filling_due_date() const {
            return m_filling_due_date;
        }
        time_of_day get_time_of_day() const {
            return m_time_of_day;
        }
        disclaimer get_disclaimer() const {
            return m_disclaimer;
        }
        audit_src get_audit_src() const {
            return m_audit_src;
        }
        void set_confidence_ind(const confidence_ind& value)  {
            m_confidence_ind = value;
        }
        void set_earning_date(const earning_date& value)  {
            m_earning_date = value;
        }
        void set_quarter(const quarter& value)  {
            m_quarter = value;
        }
        void set_fiscal_yr(const fiscal_yr& value)  {
            m_fiscal_yr = value;
        }
        void set_earning_date_status(const earning_date_status& value)  {
            m_earning_date_status = value;
        }
        void set_quarter_end_date(const quarter_end_date& value)  {
            m_quarter_end_date = value;
        }
        void set_filling_due_date(const filling_due_date& value)  {
            m_filling_due_date = value;
        }
        void set_time_of_day(const time_of_day& value)  {
            m_time_of_day = value;
        }
        void set_disclaimer(const disclaimer& value)  {
            m_disclaimer = value;
        }
        void set_audit_src(const audit_src& value)  {
            m_audit_src = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters_Earnings::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters_Earnings::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const confidence_ind & value) { set_confidence_ind(value); }
        void set(const earning_date & value) { set_earning_date(value); }
        void set(const quarter & value) { set_quarter(value); }
        void set(const fiscal_yr & value) { set_fiscal_yr(value); }
        void set(const earning_date_status & value) { set_earning_date_status(value); }
        void set(const quarter_end_date & value) { set_quarter_end_date(value); }
        void set(const filling_due_date & value) { set_filling_due_date(value); }
        void set(const time_of_day & value) { set_time_of_day(value); }
        void set(const disclaimer & value) { set_disclaimer(value); }
        void set(const audit_src & value) { set_audit_src(value); }


        WshFutureQuarters_Earnings() {}

        virtual ~WshFutureQuarters_Earnings() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_confidence_ind);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(112, m_earning_date);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_quarter);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_fiscal_yr);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_earning_date_status);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(124, m_quarter_end_date);
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_filling_due_date);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_time_of_day);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_disclaimer);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_audit_src);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_confidence_ind));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 112, m_earning_date);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_quarter));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_fiscal_yr);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_earning_date_status));
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 124, m_quarter_end_date);
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_filling_due_date);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_time_of_day));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_disclaimer));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_audit_src));
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
                    case 109: {m_confidence_ind = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 112: {
                        m_earning_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 115: {m_quarter = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 118: {m_fiscal_yr = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 121: {m_earning_date_status = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 124: {
                        m_quarter_end_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 127: {
                        m_filling_due_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 130: {m_time_of_day = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 133: {m_disclaimer = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 136: {m_audit_src = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class WshFutureQuarters {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::WshFutureQuarters_PKey;
        using stk_exch = spiderrock::protobuf::api::stk_exch;
        using ts = spiderrock::protobuf::api::ts;
        using earnings = spiderrock::protobuf::api::WshFutureQuarters_Earnings;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        stk_exch m_stk_exch{};
        ts m_ts{};
        std::vector<earnings> m_earnings{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        stk_exch get_stk_exch() const {
            return m_stk_exch;
        }		
        ts get_ts() const {
            return m_ts;
        }
        const std::vector<earnings>& get_earnings_list() const {
            return m_earnings;
        }
        const earnings& get_earnings(const int i) const {
            return m_earnings.at(i);
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
        void set_stk_exch(const stk_exch& value)  {
            m_stk_exch = value;
        }
        void set_ts(const ts& value)  {
            m_ts = value;
        }
        void set_earnings_list(const std::vector<earnings>& list)  {
            m_earnings = list;
        }
        void add_earnings(const earnings& item) {
            m_earnings.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to WshFutureQuarters::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const stk_exch & value) {
            set_stk_exch(value);
        }
        void set(const ts & value) {
            set_ts(value);
        }
        void set(const earnings & value) {
            add_earnings(value);
        }

        void set(const WshFutureQuarters & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_stk_exch);
            set(value.m_ts);set_earnings_list(value.m_earnings);
        }

        WshFutureQuarters() {
            m__meta.set_message_type("WshFutureQuarters");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 7600, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 7600, length);
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
             *this = WshFutureQuarters{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeStkExch() const {
            return !(m_stk_exch == 0.0);
        }
        bool IncludeTs() const {
            return (m_ts.time_since_epoch().count() != 0);
        }
        bool IncludeEarnings() const {
            return (!m_earnings.empty());
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
            if ( IncludeStkExch()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_stk_exch);
            }
            if ( IncludeTs()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_ts);
            }
            if ( IncludeEarnings()) {
                for (auto& item : m_earnings) {
					totalSize += SRProtobufCPP::TagCodec::Size(106, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeStkExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_stk_exch);
            }
            if ( IncludeTs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_ts);
            }
            if ( IncludeEarnings()) {
                for (auto& item : m_earnings) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 106, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_exch = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_ts = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            earnings item_earnings;
                            item_earnings.Decode(pos, pos+length);  
                            m_earnings.emplace_back(item_earnings);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto WshFutureQuarters::get<WshFutureQuarters::_meta>() const { return WshFutureQuarters::_meta{ m__meta}; }
    template<> inline const auto WshFutureQuarters::get<WshFutureQuarters::pkey>() const { return WshFutureQuarters::pkey{ m_pkey}; }
    template<> inline const auto WshFutureQuarters::get<WshFutureQuarters::stk_exch>() const { return m_stk_exch; }
    template<> inline const auto WshFutureQuarters::get<WshFutureQuarters::ts>() const { return m_ts; }
    template<> inline const auto WshFutureQuarters::get<WshFutureQuarters::earnings>(int i) const { return WshFutureQuarters::earnings{ get_earnings(i)}; }
    template<> inline int WshFutureQuarters::count<WshFutureQuarters::earnings>() const { return static_cast<int>( m_earnings.size()); }
    template<> inline const auto WshFutureQuarters_PKey::get<WshFutureQuarters_PKey::ticker>() const { return WshFutureQuarters_PKey::ticker{m_ticker}; }
    template<> inline const auto WshFutureQuarters_PKey::get<WshFutureQuarters_PKey::source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventSource>(m_source));}
    
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::confidence_ind>() const { return m_confidence_ind; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::earning_date>() const { return m_earning_date; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::quarter>() const { return m_quarter; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::fiscal_yr>() const { return m_fiscal_yr; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::earning_date_status>() const { return m_earning_date_status; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::quarter_end_date>() const { return m_quarter_end_date; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::filling_due_date>() const { return m_filling_due_date; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::time_of_day>() const { return m_time_of_day; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::disclaimer>() const { return m_disclaimer; }
    template<> inline const auto WshFutureQuarters_Earnings::get<WshFutureQuarters_Earnings::audit_src>() const { return m_audit_src; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const WshFutureQuarters_PKey& m) {
        o << "\"ticker\":{" << m.get<WshFutureQuarters_PKey::ticker>() << "}";
        o << ",\"source\":" << (int64_t)m.get<WshFutureQuarters_PKey::source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const WshFutureQuarters_Earnings& m) {
        o << "\"confidence_ind\":\"" << m.get<WshFutureQuarters_Earnings::confidence_ind>() << "\"";
        {
            std::time_t tt = m.get<WshFutureQuarters_Earnings::earning_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"earning_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"quarter\":\"" << m.get<WshFutureQuarters_Earnings::quarter>() << "\"";
        o << ",\"fiscal_yr\":" << m.get<WshFutureQuarters_Earnings::fiscal_yr>();
        o << ",\"earning_date_status\":\"" << m.get<WshFutureQuarters_Earnings::earning_date_status>() << "\"";
        {
            std::time_t tt = m.get<WshFutureQuarters_Earnings::quarter_end_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"quarter_end_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<WshFutureQuarters_Earnings::filling_due_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"filling_due_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"time_of_day\":\"" << m.get<WshFutureQuarters_Earnings::time_of_day>() << "\"";
        o << ",\"disclaimer\":\"" << m.get<WshFutureQuarters_Earnings::disclaimer>() << "\"";
        o << ",\"audit_src\":\"" << m.get<WshFutureQuarters_Earnings::audit_src>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const WshFutureQuarters& m) {
        o << "\"_meta\":{" << m.get<WshFutureQuarters::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<WshFutureQuarters::pkey>() << "}";
        o << ",\"stk_exch\":" << m.get<WshFutureQuarters::stk_exch>();
        {
            std::time_t tt = m.get<WshFutureQuarters::ts>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"ts\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"earnings\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<WshFutureQuarters::earnings>(); ++i) {
                o << delim << m.get<WshFutureQuarters::earnings>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}