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

    #ifndef _date__string__GUARD__
    #define _date__string__GUARD__
    DECL_STRONG_TYPE(date__string, string);
    #endif//_date__string__GUARD__

    #ifndef _time__string__GUARD__
    #define _time__string__GUARD__
    DECL_STRONG_TYPE(time__string, string);
    #endif//_time__string__GUARD__

    #ifndef _s_div__GUARD__
    #define _s_div__GUARD__
    DECL_STRONG_TYPE(s_div, float);
    #endif//_s_div__GUARD__

    #ifndef _fwd_uprc__GUARD__
    #define _fwd_uprc__GUARD__
    DECL_STRONG_TYPE(fwd_uprc, float);
    #endif//_fwd_uprc__GUARD__

    #ifndef _e_cnt__GUARD__
    #define _e_cnt__GUARD__
    DECL_STRONG_TYPE(e_cnt, int32);
    #endif//_e_cnt__GUARD__

    #ifndef _e_move__GUARD__
    #define _e_move__GUARD__
    DECL_STRONG_TYPE(e_move, float);
    #endif//_e_move__GUARD__

    #ifndef _e_move_hist__GUARD__
    #define _e_move_hist__GUARD__
    DECL_STRONG_TYPE(e_move_hist, float);
    #endif//_e_move_hist__GUARD__

    #ifndef _vol_d45__GUARD__
    #define _vol_d45__GUARD__
    DECL_STRONG_TYPE(vol_d45, float);
    #endif//_vol_d45__GUARD__

    #ifndef _vol_d40__GUARD__
    #define _vol_d40__GUARD__
    DECL_STRONG_TYPE(vol_d40, float);
    #endif//_vol_d40__GUARD__

    #ifndef _vol_d35__GUARD__
    #define _vol_d35__GUARD__
    DECL_STRONG_TYPE(vol_d35, float);
    #endif//_vol_d35__GUARD__

    #ifndef _vol_d30__GUARD__
    #define _vol_d30__GUARD__
    DECL_STRONG_TYPE(vol_d30, float);
    #endif//_vol_d30__GUARD__

    #ifndef _vol_d25__GUARD__
    #define _vol_d25__GUARD__
    DECL_STRONG_TYPE(vol_d25, float);
    #endif//_vol_d25__GUARD__

    #ifndef _vol_d20__GUARD__
    #define _vol_d20__GUARD__
    DECL_STRONG_TYPE(vol_d20, float);
    #endif//_vol_d20__GUARD__

    #ifndef _vol_d15__GUARD__
    #define _vol_d15__GUARD__
    DECL_STRONG_TYPE(vol_d15, float);
    #endif//_vol_d15__GUARD__

    #ifndef _vol_d10__GUARD__
    #define _vol_d10__GUARD__
    DECL_STRONG_TYPE(vol_d10, float);
    #endif//_vol_d10__GUARD__

    #ifndef _vol_d05__GUARD__
    #define _vol_d05__GUARD__
    DECL_STRONG_TYPE(vol_d05, float);
    #endif//_vol_d05__GUARD__

    #ifndef _vol_a00__GUARD__
    #define _vol_a00__GUARD__
    DECL_STRONG_TYPE(vol_a00, float);
    #endif//_vol_a00__GUARD__

    #ifndef _vol_u05__GUARD__
    #define _vol_u05__GUARD__
    DECL_STRONG_TYPE(vol_u05, float);
    #endif//_vol_u05__GUARD__

    #ifndef _vol_u10__GUARD__
    #define _vol_u10__GUARD__
    DECL_STRONG_TYPE(vol_u10, float);
    #endif//_vol_u10__GUARD__

    #ifndef _vol_u15__GUARD__
    #define _vol_u15__GUARD__
    DECL_STRONG_TYPE(vol_u15, float);
    #endif//_vol_u15__GUARD__

    #ifndef _vol_u20__GUARD__
    #define _vol_u20__GUARD__
    DECL_STRONG_TYPE(vol_u20, float);
    #endif//_vol_u20__GUARD__

    #ifndef _vol_u25__GUARD__
    #define _vol_u25__GUARD__
    DECL_STRONG_TYPE(vol_u25, float);
    #endif//_vol_u25__GUARD__

    #ifndef _vol_u30__GUARD__
    #define _vol_u30__GUARD__
    DECL_STRONG_TYPE(vol_u30, float);
    #endif//_vol_u30__GUARD__

    #ifndef _vol_u35__GUARD__
    #define _vol_u35__GUARD__
    DECL_STRONG_TYPE(vol_u35, float);
    #endif//_vol_u35__GUARD__

    #ifndef _vol_u40__GUARD__
    #define _vol_u40__GUARD__
    DECL_STRONG_TYPE(vol_u40, float);
    #endif//_vol_u40__GUARD__

    #ifndef _vol_u45__GUARD__
    #define _vol_u45__GUARD__
    DECL_STRONG_TYPE(vol_u45, float);
    #endif//_vol_u45__GUARD__

    #ifndef _v_width__GUARD__
    #define _v_width__GUARD__
    DECL_STRONG_TYPE(v_width, float);
    #endif//_v_width__GUARD__

    #ifndef _v_slope__GUARD__
    #define _v_slope__GUARD__
    DECL_STRONG_TYPE(v_slope, float);
    #endif//_v_slope__GUARD__

    #ifndef _lo_years__GUARD__
    #define _lo_years__GUARD__
    DECL_STRONG_TYPE(lo_years, float);
    #endif//_lo_years__GUARD__

    #ifndef _hi_years__GUARD__
    #define _hi_years__GUARD__
    DECL_STRONG_TYPE(hi_years, float);
    #endif//_hi_years__GUARD__

    #ifndef _min_delta__GUARD__
    #define _min_delta__GUARD__
    DECL_STRONG_TYPE(min_delta, float);
    #endif//_min_delta__GUARD__

    #ifndef _max_delta__GUARD__
    #define _max_delta__GUARD__
    DECL_STRONG_TYPE(max_delta, float);
    #endif//_max_delta__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _days__GUARD__
    #define _days__GUARD__
    DECL_STRONG_TYPE(days, int32);
    #endif//_days__GUARD__

    #ifndef _surface_type__GUARD__
    #define _surface_type__GUARD__
    DECL_STRONG_TYPE(surface_type, spiderrock::protobuf::api::SurfaceCurveType);
    #endif//_surface_type__GUARD__

    
    class LiveSurfaceFixedGrid_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using days = spiderrock::protobuf::api::days;
        using surface_type = spiderrock::protobuf::api::surface_type;

        private:
        ticker m_ticker{};
        days m_days{};
        surface_type m_surface_type{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        days get_days() const {
            return m_days;
        }
        surface_type get_surface_type() const {
            return m_surface_type;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_days(const days& value)  {
            m_days = value;
        }
        void set_surface_type(const surface_type& value)  {
            m_surface_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceFixedGrid_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceFixedGrid_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const days & value) { set_days(value); }
        void set(const surface_type & value) { set_surface_type(value); }


        LiveSurfaceFixedGrid_PKey() {}

        virtual ~LiveSurfaceFixedGrid_PKey() {
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
        bool IncludeDays() const {
            return !(m_days == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            if ( IncludeDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(11,m_days);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            if ( IncludeDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,11,m_days);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
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
                    case 11: {m_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 12: {m_surface_type = static_cast<spiderrock::protobuf::api::SurfaceCurveType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class LiveSurfaceFixedGrid {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveSurfaceFixedGrid_PKey;
        using date = spiderrock::protobuf::api::date__string;
        using time = spiderrock::protobuf::api::time__string;
        using s_div = spiderrock::protobuf::api::s_div;
        using fwd_uprc = spiderrock::protobuf::api::fwd_uprc;
        using e_cnt = spiderrock::protobuf::api::e_cnt;
        using e_move = spiderrock::protobuf::api::e_move;
        using e_move_hist = spiderrock::protobuf::api::e_move_hist;
        using vol_d45 = spiderrock::protobuf::api::vol_d45;
        using vol_d40 = spiderrock::protobuf::api::vol_d40;
        using vol_d35 = spiderrock::protobuf::api::vol_d35;
        using vol_d30 = spiderrock::protobuf::api::vol_d30;
        using vol_d25 = spiderrock::protobuf::api::vol_d25;
        using vol_d20 = spiderrock::protobuf::api::vol_d20;
        using vol_d15 = spiderrock::protobuf::api::vol_d15;
        using vol_d10 = spiderrock::protobuf::api::vol_d10;
        using vol_d05 = spiderrock::protobuf::api::vol_d05;
        using vol_a00 = spiderrock::protobuf::api::vol_a00;
        using vol_u05 = spiderrock::protobuf::api::vol_u05;
        using vol_u10 = spiderrock::protobuf::api::vol_u10;
        using vol_u15 = spiderrock::protobuf::api::vol_u15;
        using vol_u20 = spiderrock::protobuf::api::vol_u20;
        using vol_u25 = spiderrock::protobuf::api::vol_u25;
        using vol_u30 = spiderrock::protobuf::api::vol_u30;
        using vol_u35 = spiderrock::protobuf::api::vol_u35;
        using vol_u40 = spiderrock::protobuf::api::vol_u40;
        using vol_u45 = spiderrock::protobuf::api::vol_u45;
        using v_width = spiderrock::protobuf::api::v_width;
        using v_slope = spiderrock::protobuf::api::v_slope;
        using lo_years = spiderrock::protobuf::api::lo_years;
        using hi_years = spiderrock::protobuf::api::hi_years;
        using min_delta = spiderrock::protobuf::api::min_delta;
        using max_delta = spiderrock::protobuf::api::max_delta;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        date m_date{};
        time m_time{};
        s_div m_s_div{};
        fwd_uprc m_fwd_uprc{};
        e_cnt m_e_cnt{};
        e_move m_e_move{};
        e_move_hist m_e_move_hist{};
        vol_d45 m_vol_d45{};
        vol_d40 m_vol_d40{};
        vol_d35 m_vol_d35{};
        vol_d30 m_vol_d30{};
        vol_d25 m_vol_d25{};
        vol_d20 m_vol_d20{};
        vol_d15 m_vol_d15{};
        vol_d10 m_vol_d10{};
        vol_d05 m_vol_d05{};
        vol_a00 m_vol_a00{};
        vol_u05 m_vol_u05{};
        vol_u10 m_vol_u10{};
        vol_u15 m_vol_u15{};
        vol_u20 m_vol_u20{};
        vol_u25 m_vol_u25{};
        vol_u30 m_vol_u30{};
        vol_u35 m_vol_u35{};
        vol_u40 m_vol_u40{};
        vol_u45 m_vol_u45{};
        v_width m_v_width{};
        v_slope m_v_slope{};
        lo_years m_lo_years{};
        hi_years m_hi_years{};
        min_delta m_min_delta{};
        max_delta m_max_delta{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        date get_date() const {
            return m_date;
        }		
        time get_time() const {
            return m_time;
        }		
        s_div get_s_div() const {
            return m_s_div;
        }		
        fwd_uprc get_fwd_uprc() const {
            return m_fwd_uprc;
        }		
        e_cnt get_e_cnt() const {
            return m_e_cnt;
        }		
        e_move get_e_move() const {
            return m_e_move;
        }		
        e_move_hist get_e_move_hist() const {
            return m_e_move_hist;
        }		
        vol_d45 get_vol_d45() const {
            return m_vol_d45;
        }		
        vol_d40 get_vol_d40() const {
            return m_vol_d40;
        }		
        vol_d35 get_vol_d35() const {
            return m_vol_d35;
        }		
        vol_d30 get_vol_d30() const {
            return m_vol_d30;
        }		
        vol_d25 get_vol_d25() const {
            return m_vol_d25;
        }		
        vol_d20 get_vol_d20() const {
            return m_vol_d20;
        }		
        vol_d15 get_vol_d15() const {
            return m_vol_d15;
        }		
        vol_d10 get_vol_d10() const {
            return m_vol_d10;
        }		
        vol_d05 get_vol_d05() const {
            return m_vol_d05;
        }		
        vol_a00 get_vol_a00() const {
            return m_vol_a00;
        }		
        vol_u05 get_vol_u05() const {
            return m_vol_u05;
        }		
        vol_u10 get_vol_u10() const {
            return m_vol_u10;
        }		
        vol_u15 get_vol_u15() const {
            return m_vol_u15;
        }		
        vol_u20 get_vol_u20() const {
            return m_vol_u20;
        }		
        vol_u25 get_vol_u25() const {
            return m_vol_u25;
        }		
        vol_u30 get_vol_u30() const {
            return m_vol_u30;
        }		
        vol_u35 get_vol_u35() const {
            return m_vol_u35;
        }		
        vol_u40 get_vol_u40() const {
            return m_vol_u40;
        }		
        vol_u45 get_vol_u45() const {
            return m_vol_u45;
        }		
        v_width get_v_width() const {
            return m_v_width;
        }		
        v_slope get_v_slope() const {
            return m_v_slope;
        }		
        lo_years get_lo_years() const {
            return m_lo_years;
        }		
        hi_years get_hi_years() const {
            return m_hi_years;
        }		
        min_delta get_min_delta() const {
            return m_min_delta;
        }		
        max_delta get_max_delta() const {
            return m_max_delta;
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
        void set_date(const date& value)  {
            m_date = value;
        }
        void set_time(const time& value)  {
            m_time = value;
        }
        void set_s_div(const s_div& value)  {
            m_s_div = value;
        }
        void set_fwd_uprc(const fwd_uprc& value)  {
            m_fwd_uprc = value;
        }
        void set_e_cnt(const e_cnt& value)  {
            m_e_cnt = value;
        }
        void set_e_move(const e_move& value)  {
            m_e_move = value;
        }
        void set_e_move_hist(const e_move_hist& value)  {
            m_e_move_hist = value;
        }
        void set_vol_d45(const vol_d45& value)  {
            m_vol_d45 = value;
        }
        void set_vol_d40(const vol_d40& value)  {
            m_vol_d40 = value;
        }
        void set_vol_d35(const vol_d35& value)  {
            m_vol_d35 = value;
        }
        void set_vol_d30(const vol_d30& value)  {
            m_vol_d30 = value;
        }
        void set_vol_d25(const vol_d25& value)  {
            m_vol_d25 = value;
        }
        void set_vol_d20(const vol_d20& value)  {
            m_vol_d20 = value;
        }
        void set_vol_d15(const vol_d15& value)  {
            m_vol_d15 = value;
        }
        void set_vol_d10(const vol_d10& value)  {
            m_vol_d10 = value;
        }
        void set_vol_d05(const vol_d05& value)  {
            m_vol_d05 = value;
        }
        void set_vol_a00(const vol_a00& value)  {
            m_vol_a00 = value;
        }
        void set_vol_u05(const vol_u05& value)  {
            m_vol_u05 = value;
        }
        void set_vol_u10(const vol_u10& value)  {
            m_vol_u10 = value;
        }
        void set_vol_u15(const vol_u15& value)  {
            m_vol_u15 = value;
        }
        void set_vol_u20(const vol_u20& value)  {
            m_vol_u20 = value;
        }
        void set_vol_u25(const vol_u25& value)  {
            m_vol_u25 = value;
        }
        void set_vol_u30(const vol_u30& value)  {
            m_vol_u30 = value;
        }
        void set_vol_u35(const vol_u35& value)  {
            m_vol_u35 = value;
        }
        void set_vol_u40(const vol_u40& value)  {
            m_vol_u40 = value;
        }
        void set_vol_u45(const vol_u45& value)  {
            m_vol_u45 = value;
        }
        void set_v_width(const v_width& value)  {
            m_v_width = value;
        }
        void set_v_slope(const v_slope& value)  {
            m_v_slope = value;
        }
        void set_lo_years(const lo_years& value)  {
            m_lo_years = value;
        }
        void set_hi_years(const hi_years& value)  {
            m_hi_years = value;
        }
        void set_min_delta(const min_delta& value)  {
            m_min_delta = value;
        }
        void set_max_delta(const max_delta& value)  {
            m_max_delta = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfaceFixedGrid::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const date & value) {
            set_date(value);
        }
        void set(const time & value) {
            set_time(value);
        }
        void set(const s_div & value) {
            set_s_div(value);
        }
        void set(const fwd_uprc & value) {
            set_fwd_uprc(value);
        }
        void set(const e_cnt & value) {
            set_e_cnt(value);
        }
        void set(const e_move & value) {
            set_e_move(value);
        }
        void set(const e_move_hist & value) {
            set_e_move_hist(value);
        }
        void set(const vol_d45 & value) {
            set_vol_d45(value);
        }
        void set(const vol_d40 & value) {
            set_vol_d40(value);
        }
        void set(const vol_d35 & value) {
            set_vol_d35(value);
        }
        void set(const vol_d30 & value) {
            set_vol_d30(value);
        }
        void set(const vol_d25 & value) {
            set_vol_d25(value);
        }
        void set(const vol_d20 & value) {
            set_vol_d20(value);
        }
        void set(const vol_d15 & value) {
            set_vol_d15(value);
        }
        void set(const vol_d10 & value) {
            set_vol_d10(value);
        }
        void set(const vol_d05 & value) {
            set_vol_d05(value);
        }
        void set(const vol_a00 & value) {
            set_vol_a00(value);
        }
        void set(const vol_u05 & value) {
            set_vol_u05(value);
        }
        void set(const vol_u10 & value) {
            set_vol_u10(value);
        }
        void set(const vol_u15 & value) {
            set_vol_u15(value);
        }
        void set(const vol_u20 & value) {
            set_vol_u20(value);
        }
        void set(const vol_u25 & value) {
            set_vol_u25(value);
        }
        void set(const vol_u30 & value) {
            set_vol_u30(value);
        }
        void set(const vol_u35 & value) {
            set_vol_u35(value);
        }
        void set(const vol_u40 & value) {
            set_vol_u40(value);
        }
        void set(const vol_u45 & value) {
            set_vol_u45(value);
        }
        void set(const v_width & value) {
            set_v_width(value);
        }
        void set(const v_slope & value) {
            set_v_slope(value);
        }
        void set(const lo_years & value) {
            set_lo_years(value);
        }
        void set(const hi_years & value) {
            set_hi_years(value);
        }
        void set(const min_delta & value) {
            set_min_delta(value);
        }
        void set(const max_delta & value) {
            set_max_delta(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveSurfaceFixedGrid & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_date);
            set(value.m_time);
            set(value.m_s_div);
            set(value.m_fwd_uprc);
            set(value.m_e_cnt);
            set(value.m_e_move);
            set(value.m_e_move_hist);
            set(value.m_vol_d45);
            set(value.m_vol_d40);
            set(value.m_vol_d35);
            set(value.m_vol_d30);
            set(value.m_vol_d25);
            set(value.m_vol_d20);
            set(value.m_vol_d15);
            set(value.m_vol_d10);
            set(value.m_vol_d05);
            set(value.m_vol_a00);
            set(value.m_vol_u05);
            set(value.m_vol_u10);
            set(value.m_vol_u15);
            set(value.m_vol_u20);
            set(value.m_vol_u25);
            set(value.m_vol_u30);
            set(value.m_vol_u35);
            set(value.m_vol_u40);
            set(value.m_vol_u45);
            set(value.m_v_width);
            set(value.m_v_slope);
            set(value.m_lo_years);
            set(value.m_hi_years);
            set(value.m_min_delta);
            set(value.m_max_delta);
            set(value.m_timestamp);
        }

        LiveSurfaceFixedGrid() {
            m__meta.set_message_type("LiveSurfaceFixedGrid");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1040, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1040, length);
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
             *this = LiveSurfaceFixedGrid{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeDate() const {
            return !(m_date.empty());
        }
        bool IncludeTime() const {
            return !(m_time.empty());
        }
        bool IncludeSDiv() const {
            return !(m_s_div == 0.0);
        }
        bool IncludeFwdUprc() const {
            return !(m_fwd_uprc == 0.0);
        }
        bool IncludeECnt() const {
            return !(m_e_cnt == 0);
        }
        bool IncludeEMove() const {
            return !(m_e_move == 0.0);
        }
        bool IncludeEMoveHist() const {
            return !(m_e_move_hist == 0.0);
        }
        bool IncludeVolD45() const {
            return !(m_vol_d45 == 0.0);
        }
        bool IncludeVolD40() const {
            return !(m_vol_d40 == 0.0);
        }
        bool IncludeVolD35() const {
            return !(m_vol_d35 == 0.0);
        }
        bool IncludeVolD30() const {
            return !(m_vol_d30 == 0.0);
        }
        bool IncludeVolD25() const {
            return !(m_vol_d25 == 0.0);
        }
        bool IncludeVolD20() const {
            return !(m_vol_d20 == 0.0);
        }
        bool IncludeVolD15() const {
            return !(m_vol_d15 == 0.0);
        }
        bool IncludeVolD10() const {
            return !(m_vol_d10 == 0.0);
        }
        bool IncludeVolD05() const {
            return !(m_vol_d05 == 0.0);
        }
        bool IncludeVolA00() const {
            return !(m_vol_a00 == 0.0);
        }
        bool IncludeVolU05() const {
            return !(m_vol_u05 == 0.0);
        }
        bool IncludeVolU10() const {
            return !(m_vol_u10 == 0.0);
        }
        bool IncludeVolU15() const {
            return !(m_vol_u15 == 0.0);
        }
        bool IncludeVolU20() const {
            return !(m_vol_u20 == 0.0);
        }
        bool IncludeVolU25() const {
            return !(m_vol_u25 == 0.0);
        }
        bool IncludeVolU30() const {
            return !(m_vol_u30 == 0.0);
        }
        bool IncludeVolU35() const {
            return !(m_vol_u35 == 0.0);
        }
        bool IncludeVolU40() const {
            return !(m_vol_u40 == 0.0);
        }
        bool IncludeVolU45() const {
            return !(m_vol_u45 == 0.0);
        }
        bool IncludeVWidth() const {
            return !(m_v_width == 0.0);
        }
        bool IncludeVSlope() const {
            return !(m_v_slope == 0.0);
        }
        bool IncludeLoYears() const {
            return !(m_lo_years == 0.0);
        }
        bool IncludeHiYears() const {
            return !(m_hi_years == 0.0);
        }
        bool IncludeMinDelta() const {
            return !(m_min_delta == 0.0);
        }
        bool IncludeMaxDelta() const {
            return !(m_max_delta == 0.0);
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
            if ( IncludeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_date);
            }
            if ( IncludeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_time);
            }
            if ( IncludeSDiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_s_div);
            }
            if ( IncludeFwdUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_fwd_uprc);
            }
            if ( IncludeECnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_e_cnt);
            }
            if ( IncludeEMove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_e_move_hist);
            }
            if ( IncludeVolD45()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_vol_d45);
            }
            if ( IncludeVolD40()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_vol_d40);
            }
            if ( IncludeVolD35()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_vol_d35);
            }
            if ( IncludeVolD30()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_vol_d30);
            }
            if ( IncludeVolD25()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_vol_d25);
            }
            if ( IncludeVolD20()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_vol_d20);
            }
            if ( IncludeVolD15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_vol_d15);
            }
            if ( IncludeVolD10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_vol_d10);
            }
            if ( IncludeVolD05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_vol_d05);
            }
            if ( IncludeVolA00()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_vol_a00);
            }
            if ( IncludeVolU05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_vol_u05);
            }
            if ( IncludeVolU10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_vol_u10);
            }
            if ( IncludeVolU15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_vol_u15);
            }
            if ( IncludeVolU20()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_vol_u20);
            }
            if ( IncludeVolU25()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_vol_u25);
            }
            if ( IncludeVolU30()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_vol_u30);
            }
            if ( IncludeVolU35()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_vol_u35);
            }
            if ( IncludeVolU40()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_vol_u40);
            }
            if ( IncludeVolU45()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_vol_u45);
            }
            if ( IncludeVWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_v_width);
            }
            if ( IncludeVSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_v_slope);
            }
            if ( IncludeLoYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_lo_years);
            }
            if ( IncludeHiYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_hi_years);
            }
            if ( IncludeMinDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_min_delta);
            }
            if ( IncludeMaxDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_max_delta);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(196, m_timestamp);
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
            if ( IncludeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_date));
            }
            if ( IncludeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_time));
            }
            if ( IncludeSDiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_s_div);
            }
            if ( IncludeFwdUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_fwd_uprc);
            }
            if ( IncludeECnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_e_cnt);
            }
            if ( IncludeEMove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_e_move);
            }
            if ( IncludeEMoveHist()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_e_move_hist);
            }
            if ( IncludeVolD45()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_vol_d45);
            }
            if ( IncludeVolD40()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_vol_d40);
            }
            if ( IncludeVolD35()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_vol_d35);
            }
            if ( IncludeVolD30()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_vol_d30);
            }
            if ( IncludeVolD25()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_vol_d25);
            }
            if ( IncludeVolD20()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_vol_d20);
            }
            if ( IncludeVolD15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_vol_d15);
            }
            if ( IncludeVolD10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_vol_d10);
            }
            if ( IncludeVolD05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_vol_d05);
            }
            if ( IncludeVolA00()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_vol_a00);
            }
            if ( IncludeVolU05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_vol_u05);
            }
            if ( IncludeVolU10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_vol_u10);
            }
            if ( IncludeVolU15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_vol_u15);
            }
            if ( IncludeVolU20()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_vol_u20);
            }
            if ( IncludeVolU25()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_vol_u25);
            }
            if ( IncludeVolU30()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_vol_u30);
            }
            if ( IncludeVolU35()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_vol_u35);
            }
            if ( IncludeVolU40()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_vol_u40);
            }
            if ( IncludeVolU45()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_vol_u45);
            }
            if ( IncludeVWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_v_width);
            }
            if ( IncludeVSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_v_slope);
            }
            if ( IncludeLoYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_lo_years);
            }
            if ( IncludeHiYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_hi_years);
            }
            if ( IncludeMinDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_min_delta);
            }
            if ( IncludeMaxDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_max_delta);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 196, m_timestamp);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_date = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_time = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fwd_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_e_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_e_move_hist = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d45 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d40 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d35 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d30 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d25 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d20 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_d05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_a00 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u20 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u25 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u30 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u35 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u40 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vol_u45 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_lo_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hi_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
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

    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::_meta>() const { return LiveSurfaceFixedGrid::_meta{ m__meta}; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::pkey>() const { return LiveSurfaceFixedGrid::pkey{ m_pkey}; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::date>() const { return m_date; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::time>() const { return m_time; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::s_div>() const { return m_s_div; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::fwd_uprc>() const { return m_fwd_uprc; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::e_cnt>() const { return m_e_cnt; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::e_move>() const { return m_e_move; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::e_move_hist>() const { return m_e_move_hist; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d45>() const { return m_vol_d45; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d40>() const { return m_vol_d40; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d35>() const { return m_vol_d35; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d30>() const { return m_vol_d30; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d25>() const { return m_vol_d25; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d20>() const { return m_vol_d20; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d15>() const { return m_vol_d15; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d10>() const { return m_vol_d10; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_d05>() const { return m_vol_d05; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_a00>() const { return m_vol_a00; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u05>() const { return m_vol_u05; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u10>() const { return m_vol_u10; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u15>() const { return m_vol_u15; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u20>() const { return m_vol_u20; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u25>() const { return m_vol_u25; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u30>() const { return m_vol_u30; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u35>() const { return m_vol_u35; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u40>() const { return m_vol_u40; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::vol_u45>() const { return m_vol_u45; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::v_width>() const { return m_v_width; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::v_slope>() const { return m_v_slope; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::lo_years>() const { return m_lo_years; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::hi_years>() const { return m_hi_years; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::min_delta>() const { return m_min_delta; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::max_delta>() const { return m_max_delta; }
    template<> inline const auto LiveSurfaceFixedGrid::get<LiveSurfaceFixedGrid::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveSurfaceFixedGrid_PKey::get<LiveSurfaceFixedGrid_PKey::ticker>() const { return LiveSurfaceFixedGrid_PKey::ticker{m_ticker}; }
    template<> inline const auto LiveSurfaceFixedGrid_PKey::get<LiveSurfaceFixedGrid_PKey::days>() const { return m_days; }
    template<> inline const auto LiveSurfaceFixedGrid_PKey::get<LiveSurfaceFixedGrid_PKey::surface_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceFixedGrid_PKey& m) {
        o << "\"ticker\":{" << m.get<LiveSurfaceFixedGrid_PKey::ticker>() << "}";
        o << ",\"days\":" << m.get<LiveSurfaceFixedGrid_PKey::days>();
        o << ",\"surface_type\":" << (int64_t)m.get<LiveSurfaceFixedGrid_PKey::surface_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfaceFixedGrid& m) {
        o << "\"_meta\":{" << m.get<LiveSurfaceFixedGrid::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveSurfaceFixedGrid::pkey>() << "}";
        o << ",\"date\":\"" << m.get<LiveSurfaceFixedGrid::date>() << "\"";
        o << ",\"time\":\"" << m.get<LiveSurfaceFixedGrid::time>() << "\"";
        o << ",\"s_div\":" << m.get<LiveSurfaceFixedGrid::s_div>();
        o << ",\"fwd_uprc\":" << m.get<LiveSurfaceFixedGrid::fwd_uprc>();
        o << ",\"e_cnt\":" << m.get<LiveSurfaceFixedGrid::e_cnt>();
        o << ",\"e_move\":" << m.get<LiveSurfaceFixedGrid::e_move>();
        o << ",\"e_move_hist\":" << m.get<LiveSurfaceFixedGrid::e_move_hist>();
        o << ",\"vol_d45\":" << m.get<LiveSurfaceFixedGrid::vol_d45>();
        o << ",\"vol_d40\":" << m.get<LiveSurfaceFixedGrid::vol_d40>();
        o << ",\"vol_d35\":" << m.get<LiveSurfaceFixedGrid::vol_d35>();
        o << ",\"vol_d30\":" << m.get<LiveSurfaceFixedGrid::vol_d30>();
        o << ",\"vol_d25\":" << m.get<LiveSurfaceFixedGrid::vol_d25>();
        o << ",\"vol_d20\":" << m.get<LiveSurfaceFixedGrid::vol_d20>();
        o << ",\"vol_d15\":" << m.get<LiveSurfaceFixedGrid::vol_d15>();
        o << ",\"vol_d10\":" << m.get<LiveSurfaceFixedGrid::vol_d10>();
        o << ",\"vol_d05\":" << m.get<LiveSurfaceFixedGrid::vol_d05>();
        o << ",\"vol_a00\":" << m.get<LiveSurfaceFixedGrid::vol_a00>();
        o << ",\"vol_u05\":" << m.get<LiveSurfaceFixedGrid::vol_u05>();
        o << ",\"vol_u10\":" << m.get<LiveSurfaceFixedGrid::vol_u10>();
        o << ",\"vol_u15\":" << m.get<LiveSurfaceFixedGrid::vol_u15>();
        o << ",\"vol_u20\":" << m.get<LiveSurfaceFixedGrid::vol_u20>();
        o << ",\"vol_u25\":" << m.get<LiveSurfaceFixedGrid::vol_u25>();
        o << ",\"vol_u30\":" << m.get<LiveSurfaceFixedGrid::vol_u30>();
        o << ",\"vol_u35\":" << m.get<LiveSurfaceFixedGrid::vol_u35>();
        o << ",\"vol_u40\":" << m.get<LiveSurfaceFixedGrid::vol_u40>();
        o << ",\"vol_u45\":" << m.get<LiveSurfaceFixedGrid::vol_u45>();
        o << ",\"v_width\":" << m.get<LiveSurfaceFixedGrid::v_width>();
        o << ",\"v_slope\":" << m.get<LiveSurfaceFixedGrid::v_slope>();
        o << ",\"lo_years\":" << m.get<LiveSurfaceFixedGrid::lo_years>();
        o << ",\"hi_years\":" << m.get<LiveSurfaceFixedGrid::hi_years>();
        o << ",\"min_delta\":" << m.get<LiveSurfaceFixedGrid::min_delta>();
        o << ",\"max_delta\":" << m.get<LiveSurfaceFixedGrid::max_delta>();
        {
            std::time_t tt = m.get<LiveSurfaceFixedGrid::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}