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

    #ifndef _e_move_hist__GUARD__
    #define _e_move_hist__GUARD__
    DECL_STRONG_TYPE(e_move_hist, float);
    #endif//_e_move_hist__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _source__GUARD__
    #define _source__GUARD__
    DECL_STRONG_TYPE(source, spiderrock::protobuf::api::EventSource);
    #endif//_source__GUARD__

    #ifndef _event_date__GUARD__
    #define _event_date__GUARD__
    DECL_STRONG_TYPE(event_date, DateKey);
    #endif//_event_date__GUARD__

    #ifndef _event_time__GUARD__
    #define _event_time__GUARD__
    DECL_STRONG_TYPE(event_time, string);
    #endif//_event_time__GUARD__

    #ifndef _earn_status__GUARD__
    #define _earn_status__GUARD__
    DECL_STRONG_TYPE(earn_status, spiderrock::protobuf::api::EarnStatus);
    #endif//_earn_status__GUARD__

    #ifndef _guidance_issued__GUARD__
    #define _guidance_issued__GUARD__
    DECL_STRONG_TYPE(guidance_issued, spiderrock::protobuf::api::GuidanceIssued);
    #endif//_guidance_issued__GUARD__

    #ifndef _earn_fiscal_qtr__GUARD__
    #define _earn_fiscal_qtr__GUARD__
    DECL_STRONG_TYPE(earn_fiscal_qtr, DateKey);
    #endif//_earn_fiscal_qtr__GUARD__

    #ifndef _earn_change__GUARD__
    #define _earn_change__GUARD__
    DECL_STRONG_TYPE(earn_change, spiderrock::protobuf::api::earnChange);
    #endif//_earn_change__GUARD__

    #ifndef _earn_pct_move__GUARD__
    #define _earn_pct_move__GUARD__
    DECL_STRONG_TYPE(earn_pct_move, float);
    #endif//_earn_pct_move__GUARD__

    #ifndef _prv_close__GUARD__
    #define _prv_close__GUARD__
    DECL_STRONG_TYPE(prv_close, float);
    #endif//_prv_close__GUARD__

    #ifndef _open__GUARD__
    #define _open__GUARD__
    DECL_STRONG_TYPE(open, float);
    #endif//_open__GUARD__

    #ifndef _high__GUARD__
    #define _high__GUARD__
    DECL_STRONG_TYPE(high, float);
    #endif//_high__GUARD__

    #ifndef _low__GUARD__
    #define _low__GUARD__
    DECL_STRONG_TYPE(low, float);
    #endif//_low__GUARD__

    #ifndef _close__GUARD__
    #define _close__GUARD__
    DECL_STRONG_TYPE(close, float);
    #endif//_close__GUARD__

    #ifndef _move_date__GUARD__
    #define _move_date__GUARD__
    DECL_STRONG_TYPE(move_date, DateKey);
    #endif//_move_date__GUARD__

    #ifndef _h_emove__GUARD__
    #define _h_emove__GUARD__
    DECL_STRONG_TYPE(h_emove, float);
    #endif//_h_emove__GUARD__

    
    class StockEarningsCalendar_Extern_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const source & value) { set_source(value); }


        StockEarningsCalendar_Extern_PKey() {}

        virtual ~StockEarningsCalendar_Extern_PKey() {
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
    
    class StockEarningsCalendar_Extern_Event {
        public:
        //using statements for all types used in this class
        using event_date = spiderrock::protobuf::api::event_date;
        using event_time = spiderrock::protobuf::api::event_time;
        using earn_status = spiderrock::protobuf::api::earn_status;
        using guidance_issued = spiderrock::protobuf::api::guidance_issued;
        using earn_fiscal_qtr = spiderrock::protobuf::api::earn_fiscal_qtr;
        using earn_change = spiderrock::protobuf::api::earn_change;
        using earn_pct_move = spiderrock::protobuf::api::earn_pct_move;
        using prv_close = spiderrock::protobuf::api::prv_close;
        using open = spiderrock::protobuf::api::open;
        using high = spiderrock::protobuf::api::high;
        using low = spiderrock::protobuf::api::low;
        using close = spiderrock::protobuf::api::close;
        using move_date = spiderrock::protobuf::api::move_date;
        using h_emove = spiderrock::protobuf::api::h_emove;

        private:
        event_date m_event_date{};
        event_time m_event_time{};
        earn_status m_earn_status{};
        guidance_issued m_guidance_issued{};
        earn_fiscal_qtr m_earn_fiscal_qtr{};
        earn_change m_earn_change{};
        earn_pct_move m_earn_pct_move{};
        prv_close m_prv_close{};
        open m_open{};
        high m_high{};
        low m_low{};
        close m_close{};
        move_date m_move_date{};
        h_emove m_h_emove{};

        public:
        event_time get_event_time() const {
            return m_event_time;
        }
        earn_status get_earn_status() const {
            return m_earn_status;
        }
        guidance_issued get_guidance_issued() const {
            return m_guidance_issued;
        }
        earn_change get_earn_change() const {
            return m_earn_change;
        }
        earn_pct_move get_earn_pct_move() const {
            return m_earn_pct_move;
        }
        prv_close get_prv_close() const {
            return m_prv_close;
        }
        open get_open() const {
            return m_open;
        }
        high get_high() const {
            return m_high;
        }
        low get_low() const {
            return m_low;
        }
        close get_close() const {
            return m_close;
        }
        h_emove get_h_emove() const {
            return m_h_emove;
        }
        void set_event_date(const event_date& value)  {
            m_event_date = value;
        }
        void set_event_time(const event_time& value)  {
            m_event_time = value;
        }
        void set_earn_status(const earn_status& value)  {
            m_earn_status = value;
        }
        void set_guidance_issued(const guidance_issued& value)  {
            m_guidance_issued = value;
        }
        void set_earn_fiscal_qtr(const earn_fiscal_qtr& value)  {
            m_earn_fiscal_qtr = value;
        }
        void set_earn_change(const earn_change& value)  {
            m_earn_change = value;
        }
        void set_earn_pct_move(const earn_pct_move& value)  {
            m_earn_pct_move = value;
        }
        void set_prv_close(const prv_close& value)  {
            m_prv_close = value;
        }
        void set_open(const open& value)  {
            m_open = value;
        }
        void set_high(const high& value)  {
            m_high = value;
        }
        void set_low(const low& value)  {
            m_low = value;
        }
        void set_close(const close& value)  {
            m_close = value;
        }
        void set_move_date(const move_date& value)  {
            m_move_date = value;
        }
        void set_h_emove(const h_emove& value)  {
            m_h_emove = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern_Event::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern_Event::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const event_date & value) { set_event_date(value); }
        void set(const event_time & value) { set_event_time(value); }
        void set(const earn_status & value) { set_earn_status(value); }
        void set(const guidance_issued & value) { set_guidance_issued(value); }
        void set(const earn_fiscal_qtr & value) { set_earn_fiscal_qtr(value); }
        void set(const earn_change & value) { set_earn_change(value); }
        void set(const earn_pct_move & value) { set_earn_pct_move(value); }
        void set(const prv_close & value) { set_prv_close(value); }
        void set(const open & value) { set_open(value); }
        void set(const high & value) { set_high(value); }
        void set(const low & value) { set_low(value); }
        void set(const close & value) { set_close(value); }
        void set(const move_date & value) { set_move_date(value); }
        void set(const h_emove & value) { set_h_emove(value); }


        StockEarningsCalendar_Extern_Event() {}

        virtual ~StockEarningsCalendar_Extern_Event() {
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
            totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(109, m_event_date.get_year(), m_event_date.get_month(), m_event_date.get_day());
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_event_time);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EarnStatus>(m_earn_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::GuidanceIssued>(m_guidance_issued)));
            totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(121, m_earn_fiscal_qtr.get_year(), m_earn_fiscal_qtr.get_month(), m_earn_fiscal_qtr.get_day());
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::earnChange>(m_earn_change)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_earn_pct_move);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_prv_close);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_open);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_high);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_low);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_close);
            totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(145, m_move_date.get_year(), m_move_date.get_month(), m_move_date.get_day());
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_h_emove);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,109, m_event_date.get_year(), m_event_date.get_month(), m_event_date.get_day());
            
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_event_time));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EarnStatus>(m_earn_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::GuidanceIssued>(m_guidance_issued)));
            dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,121, m_earn_fiscal_qtr.get_year(), m_earn_fiscal_qtr.get_month(), m_earn_fiscal_qtr.get_day());
            
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::earnChange>(m_earn_change)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_earn_pct_move);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_prv_close);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_open);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_high);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_low);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_close);
            dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,145, m_move_date.get_year(), m_move_date.get_month(), m_move_date.get_day());
            
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_h_emove);
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
                    case 109: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_event_date.set_year(dateKey.year());
                        m_event_date.set_month(dateKey.month());
                        m_event_date.set_day(dateKey.day());
                        break;
                    }
                    case 112: {m_event_time = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 115: {m_earn_status = static_cast<spiderrock::protobuf::api::EarnStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 118: {m_guidance_issued = static_cast<spiderrock::protobuf::api::GuidanceIssued>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 121: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_earn_fiscal_qtr.set_year(dateKey.year());
                        m_earn_fiscal_qtr.set_month(dateKey.month());
                        m_earn_fiscal_qtr.set_day(dateKey.day());
                        break;
                    }
                    case 124: {m_earn_change = static_cast<spiderrock::protobuf::api::earnChange>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 127: {m_earn_pct_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 130: {m_prv_close = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 133: {m_open = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 136: {m_high = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 139: {m_low = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 142: {m_close = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 145: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_move_date.set_year(dateKey.year());
                        m_move_date.set_month(dateKey.month());
                        m_move_date.set_day(dateKey.day());
                        break;
                    }
                    case 148: {m_h_emove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class StockEarningsCalendar_Extern {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockEarningsCalendar_Extern_PKey;
        using e_move_hist = spiderrock::protobuf::api::e_move_hist;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using event = spiderrock::protobuf::api::StockEarningsCalendar_Extern_Event;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        e_move_hist m_e_move_hist{};
        timestamp m_timestamp{};
        std::vector<event> m_event{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        e_move_hist get_e_move_hist() const {
            return m_e_move_hist;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<event>& get_event_list() const {
            return m_event;
        }
        const event& get_event(const int i) const {
            return m_event.at(i);
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
        void set_e_move_hist(const e_move_hist& value)  {
            m_e_move_hist = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_event_list(const std::vector<event>& list)  {
            m_event = list;
        }
        void add_event(const event& item) {
            m_event.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockEarningsCalendar_Extern::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const e_move_hist & value) {
            set_e_move_hist(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const event & value) {
            add_event(value);
        }

        void set(const StockEarningsCalendar_Extern & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_e_move_hist);
            set(value.m_timestamp);set_event_list(value.m_event);
        }

        StockEarningsCalendar_Extern() {
            m__meta.set_message_type("StockEarningsCalendar_Extern");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2150, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2150, length);
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
             *this = StockEarningsCalendar_Extern{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeEMoveHist() const {
            return !(m_e_move_hist == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeEvent() const {
            return (!m_event.empty());
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
            if ( IncludeEMoveHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_e_move_hist);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_timestamp);
            }
            if ( IncludeEvent()) {
                for (auto& item : m_event) {
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
            if ( IncludeEMoveHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_e_move_hist);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_timestamp);
            }
            if ( IncludeEvent()) {
                for (auto& item : m_event) {
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
                            m_e_move_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            event item_event;
                            item_event.Decode(pos, pos+length);  
                            m_event.emplace_back(item_event);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto StockEarningsCalendar_Extern::get<StockEarningsCalendar_Extern::_meta>() const { return StockEarningsCalendar_Extern::_meta{ m__meta}; }
    template<> inline const auto StockEarningsCalendar_Extern::get<StockEarningsCalendar_Extern::pkey>() const { return StockEarningsCalendar_Extern::pkey{ m_pkey}; }
    template<> inline const auto StockEarningsCalendar_Extern::get<StockEarningsCalendar_Extern::e_move_hist>() const { return m_e_move_hist; }
    template<> inline const auto StockEarningsCalendar_Extern::get<StockEarningsCalendar_Extern::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockEarningsCalendar_Extern::get<StockEarningsCalendar_Extern::event>(int i) const { return StockEarningsCalendar_Extern::event{ get_event(i)}; }
    template<> inline int StockEarningsCalendar_Extern::count<StockEarningsCalendar_Extern::event>() const { return static_cast<int>( m_event.size()); }
    template<> inline const auto StockEarningsCalendar_Extern_PKey::get<StockEarningsCalendar_Extern_PKey::ticker>() const { return StockEarningsCalendar_Extern_PKey::ticker{m_ticker}; }
    template<> inline const auto StockEarningsCalendar_Extern_PKey::get<StockEarningsCalendar_Extern_PKey::source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EventSource>(m_source));}
    
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::event_date>() const { return StockEarningsCalendar_Extern_Event::event_date{m_event_date}; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::event_time>() const { return m_event_time; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::earn_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::EarnStatus>(m_earn_status));}
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::guidance_issued>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::GuidanceIssued>(m_guidance_issued));}
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::earn_fiscal_qtr>() const { return StockEarningsCalendar_Extern_Event::earn_fiscal_qtr{m_earn_fiscal_qtr}; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::earn_change>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::earnChange>(m_earn_change));}
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::earn_pct_move>() const { return m_earn_pct_move; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::prv_close>() const { return m_prv_close; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::open>() const { return m_open; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::high>() const { return m_high; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::low>() const { return m_low; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::close>() const { return m_close; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::move_date>() const { return StockEarningsCalendar_Extern_Event::move_date{m_move_date}; }
    template<> inline const auto StockEarningsCalendar_Extern_Event::get<StockEarningsCalendar_Extern_Event::h_emove>() const { return m_h_emove; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockEarningsCalendar_Extern_PKey& m) {
        o << "\"ticker\":{" << m.get<StockEarningsCalendar_Extern_PKey::ticker>() << "}";
        o << ",\"source\":" << (int64_t)m.get<StockEarningsCalendar_Extern_PKey::source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockEarningsCalendar_Extern_Event& m) {
        o << "\"event_date\":{" << m.get<StockEarningsCalendar_Extern_Event::event_date>() << "}";
        o << ",\"event_time\":\"" << m.get<StockEarningsCalendar_Extern_Event::event_time>() << "\"";
        o << ",\"earn_status\":" << (int64_t)m.get<StockEarningsCalendar_Extern_Event::earn_status>();
        o << ",\"guidance_issued\":" << (int64_t)m.get<StockEarningsCalendar_Extern_Event::guidance_issued>();
        o << ",\"earn_fiscal_qtr\":{" << m.get<StockEarningsCalendar_Extern_Event::earn_fiscal_qtr>() << "}";
        o << ",\"earn_change\":" << (int64_t)m.get<StockEarningsCalendar_Extern_Event::earn_change>();
        o << ",\"earn_pct_move\":" << m.get<StockEarningsCalendar_Extern_Event::earn_pct_move>();
        o << ",\"prv_close\":" << m.get<StockEarningsCalendar_Extern_Event::prv_close>();
        o << ",\"open\":" << m.get<StockEarningsCalendar_Extern_Event::open>();
        o << ",\"high\":" << m.get<StockEarningsCalendar_Extern_Event::high>();
        o << ",\"low\":" << m.get<StockEarningsCalendar_Extern_Event::low>();
        o << ",\"close\":" << m.get<StockEarningsCalendar_Extern_Event::close>();
        o << ",\"move_date\":{" << m.get<StockEarningsCalendar_Extern_Event::move_date>() << "}";
        o << ",\"h_emove\":" << m.get<StockEarningsCalendar_Extern_Event::h_emove>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockEarningsCalendar_Extern& m) {
        o << "\"_meta\":{" << m.get<StockEarningsCalendar_Extern::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockEarningsCalendar_Extern::pkey>() << "}";
        o << ",\"e_move_hist\":" << m.get<StockEarningsCalendar_Extern::e_move_hist>();
        {
            std::time_t tt = m.get<StockEarningsCalendar_Extern::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"event\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<StockEarningsCalendar_Extern::event>(); ++i) {
                o << delim << m.get<StockEarningsCalendar_Extern::event>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}