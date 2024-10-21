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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _cls_mark_state__GUARD__
    #define _cls_mark_state__GUARD__
    DECL_STRONG_TYPE(cls_mark_state, spiderrock::protobuf::api::ClsMarkState);
    #endif//_cls_mark_state__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _u_sr_cls__GUARD__
    #define _u_sr_cls__GUARD__
    DECL_STRONG_TYPE(u_sr_cls, double);
    #endif//_u_sr_cls__GUARD__

    #ifndef _u_close__GUARD__
    #define _u_close__GUARD__
    DECL_STRONG_TYPE(u_close, double);
    #endif//_u_close__GUARD__

    #ifndef _bid_prc__float__GUARD__
    #define _bid_prc__float__GUARD__
    DECL_STRONG_TYPE(bid_prc__float, float);
    #endif//_bid_prc__float__GUARD__

    #ifndef _ask_prc__float__GUARD__
    #define _ask_prc__float__GUARD__
    DECL_STRONG_TYPE(ask_prc__float, float);
    #endif//_ask_prc__float__GUARD__

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

    #ifndef _has_ucls_prc__GUARD__
    #define _has_ucls_prc__GUARD__
    DECL_STRONG_TYPE(has_ucls_prc, spiderrock::protobuf::api::YesNo);
    #endif//_has_ucls_prc__GUARD__

    #ifndef _bid_iv__GUARD__
    #define _bid_iv__GUARD__
    DECL_STRONG_TYPE(bid_iv, float);
    #endif//_bid_iv__GUARD__

    #ifndef _ask_iv__GUARD__
    #define _ask_iv__GUARD__
    DECL_STRONG_TYPE(ask_iv, float);
    #endif//_ask_iv__GUARD__

    #ifndef _sr_prc__GUARD__
    #define _sr_prc__GUARD__
    DECL_STRONG_TYPE(sr_prc, float);
    #endif//_sr_prc__GUARD__

    #ifndef _sr_vol__GUARD__
    #define _sr_vol__GUARD__
    DECL_STRONG_TYPE(sr_vol, float);
    #endif//_sr_vol__GUARD__

    #ifndef _sr_src__GUARD__
    #define _sr_src__GUARD__
    DECL_STRONG_TYPE(sr_src, spiderrock::protobuf::api::MarkSource);
    #endif//_sr_src__GUARD__

    #ifndef _de__GUARD__
    #define _de__GUARD__
    DECL_STRONG_TYPE(de, float);
    #endif//_de__GUARD__

    #ifndef _ga__GUARD__
    #define _ga__GUARD__
    DECL_STRONG_TYPE(ga, float);
    #endif//_ga__GUARD__

    #ifndef _th__GUARD__
    #define _th__GUARD__
    DECL_STRONG_TYPE(th, float);
    #endif//_th__GUARD__

    #ifndef _ve__GUARD__
    #define _ve__GUARD__
    DECL_STRONG_TYPE(ve, float);
    #endif//_ve__GUARD__

    #ifndef _vo__GUARD__
    #define _vo__GUARD__
    DECL_STRONG_TYPE(vo, float);
    #endif//_vo__GUARD__

    #ifndef _va__GUARD__
    #define _va__GUARD__
    DECL_STRONG_TYPE(va, float);
    #endif//_va__GUARD__

    #ifndef _rh__GUARD__
    #define _rh__GUARD__
    DECL_STRONG_TYPE(rh, float);
    #endif//_rh__GUARD__

    #ifndef _ph__GUARD__
    #define _ph__GUARD__
    DECL_STRONG_TYPE(ph, float);
    #endif//_ph__GUARD__

    #ifndef _sr_slope__GUARD__
    #define _sr_slope__GUARD__
    DECL_STRONG_TYPE(sr_slope, float);
    #endif//_sr_slope__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _ddiv__float__GUARD__
    #define _ddiv__float__GUARD__
    DECL_STRONG_TYPE(ddiv__float, float);
    #endif//_ddiv__float__GUARD__

    #ifndef _ddiv_pv__float__GUARD__
    #define _ddiv_pv__float__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__float, float);
    #endif//_ddiv_pv__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _i_days__int32__GUARD__
    #define _i_days__int32__GUARD__
    DECL_STRONG_TYPE(i_days__int32, int32);
    #endif//_i_days__int32__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _error__int32__GUARD__
    #define _error__int32__GUARD__
    DECL_STRONG_TYPE(error__int32, int32);
    #endif//_error__int32__GUARD__

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

    #ifndef _sr_close_mark_dttm__GUARD__
    #define _sr_close_mark_dttm__GUARD__
    DECL_STRONG_TYPE(sr_close_mark_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_sr_close_mark_dttm__GUARD__

    #ifndef _config_now__GUARD__
    #define _config_now__GUARD__
    DECL_STRONG_TYPE(config_now, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_config_now__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionCloseMark_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionCloseMark_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionCloseMark_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionCloseMark_PKey() {}

        virtual ~OptionCloseMark_PKey() {
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
    

    class OptionCloseMark {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionCloseMark_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using cls_mark_state = spiderrock::protobuf::api::cls_mark_state;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using u_sr_cls = spiderrock::protobuf::api::u_sr_cls;
        using u_close = spiderrock::protobuf::api::u_close;
        using bid_prc = spiderrock::protobuf::api::bid_prc__float;
        using ask_prc = spiderrock::protobuf::api::ask_prc__float;
        using sr_cls_prc = spiderrock::protobuf::api::sr_cls_prc__double;
        using close_prc = spiderrock::protobuf::api::close_prc__double;
        using has_srcls_prc = spiderrock::protobuf::api::has_srcls_prc;
        using has_close_prc = spiderrock::protobuf::api::has_close_prc;
        using has_ucls_prc = spiderrock::protobuf::api::has_ucls_prc;
        using bid_iv = spiderrock::protobuf::api::bid_iv;
        using ask_iv = spiderrock::protobuf::api::ask_iv;
        using sr_prc = spiderrock::protobuf::api::sr_prc;
        using sr_vol = spiderrock::protobuf::api::sr_vol;
        using sr_src = spiderrock::protobuf::api::sr_src;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using vo = spiderrock::protobuf::api::vo;
        using va = spiderrock::protobuf::api::va;
        using rh = spiderrock::protobuf::api::rh;
        using ph = spiderrock::protobuf::api::ph;
        using sr_slope = spiderrock::protobuf::api::sr_slope;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using i_days = spiderrock::protobuf::api::i_days__int32;
        using years = spiderrock::protobuf::api::years__float;
        using error = spiderrock::protobuf::api::error__int32;
        using open_interest = spiderrock::protobuf::api::open_interest;
        using prt_count = spiderrock::protobuf::api::prt_count;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using sr_close_mark_dttm = spiderrock::protobuf::api::sr_close_mark_dttm;
        using config_now = spiderrock::protobuf::api::config_now;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        cls_mark_state m_cls_mark_state{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        u_sr_cls m_u_sr_cls{};
        u_close m_u_close{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        sr_cls_prc m_sr_cls_prc{};
        close_prc m_close_prc{};
        has_srcls_prc m_has_srcls_prc{};
        has_close_prc m_has_close_prc{};
        has_ucls_prc m_has_ucls_prc{};
        bid_iv m_bid_iv{};
        ask_iv m_ask_iv{};
        sr_prc m_sr_prc{};
        sr_vol m_sr_vol{};
        sr_src m_sr_src{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        vo m_vo{};
        va m_va{};
        rh m_rh{};
        ph m_ph{};
        sr_slope m_sr_slope{};
        de_decay m_de_decay{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        ddiv_pv m_ddiv_pv{};
        rate m_rate{};
        i_days m_i_days{};
        years m_years{};
        error m_error{};
        open_interest m_open_interest{};
        prt_count m_prt_count{};
        prt_volume m_prt_volume{};
        sr_close_mark_dttm m_sr_close_mark_dttm{};
        config_now m_config_now{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        cls_mark_state get_cls_mark_state() const {
            return m_cls_mark_state;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        u_sr_cls get_u_sr_cls() const {
            return m_u_sr_cls;
        }		
        u_close get_u_close() const {
            return m_u_close;
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
        has_ucls_prc get_has_ucls_prc() const {
            return m_has_ucls_prc;
        }		
        bid_iv get_bid_iv() const {
            return m_bid_iv;
        }		
        ask_iv get_ask_iv() const {
            return m_ask_iv;
        }		
        sr_prc get_sr_prc() const {
            return m_sr_prc;
        }		
        sr_vol get_sr_vol() const {
            return m_sr_vol;
        }		
        sr_src get_sr_src() const {
            return m_sr_src;
        }		
        de get_de() const {
            return m_de;
        }		
        ga get_ga() const {
            return m_ga;
        }		
        th get_th() const {
            return m_th;
        }		
        ve get_ve() const {
            return m_ve;
        }		
        vo get_vo() const {
            return m_vo;
        }		
        va get_va() const {
            return m_va;
        }		
        rh get_rh() const {
            return m_rh;
        }		
        ph get_ph() const {
            return m_ph;
        }		
        sr_slope get_sr_slope() const {
            return m_sr_slope;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        years get_years() const {
            return m_years;
        }		
        error get_error() const {
            return m_error;
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
        sr_close_mark_dttm get_sr_close_mark_dttm() const {
            return m_sr_close_mark_dttm;
        }		
        config_now get_config_now() const {
            return m_config_now;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_cls_mark_state(const cls_mark_state& value)  {
            m_cls_mark_state = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_u_sr_cls(const u_sr_cls& value)  {
            m_u_sr_cls = value;
        }
        void set_u_close(const u_close& value)  {
            m_u_close = value;
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
        void set_has_ucls_prc(const has_ucls_prc& value)  {
            m_has_ucls_prc = value;
        }
        void set_bid_iv(const bid_iv& value)  {
            m_bid_iv = value;
        }
        void set_ask_iv(const ask_iv& value)  {
            m_ask_iv = value;
        }
        void set_sr_prc(const sr_prc& value)  {
            m_sr_prc = value;
        }
        void set_sr_vol(const sr_vol& value)  {
            m_sr_vol = value;
        }
        void set_sr_src(const sr_src& value)  {
            m_sr_src = value;
        }
        void set_de(const de& value)  {
            m_de = value;
        }
        void set_ga(const ga& value)  {
            m_ga = value;
        }
        void set_th(const th& value)  {
            m_th = value;
        }
        void set_ve(const ve& value)  {
            m_ve = value;
        }
        void set_vo(const vo& value)  {
            m_vo = value;
        }
        void set_va(const va& value)  {
            m_va = value;
        }
        void set_rh(const rh& value)  {
            m_rh = value;
        }
        void set_ph(const ph& value)  {
            m_ph = value;
        }
        void set_sr_slope(const sr_slope& value)  {
            m_sr_slope = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_error(const error& value)  {
            m_error = value;
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
        void set_sr_close_mark_dttm(const sr_close_mark_dttm& value)  {
            m_sr_close_mark_dttm = value;
        }
        void set_config_now(const config_now& value)  {
            m_config_now = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionCloseMark::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const cls_mark_state & value) {
            set_cls_mark_state(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const u_sr_cls & value) {
            set_u_sr_cls(value);
        }
        void set(const u_close & value) {
            set_u_close(value);
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
        void set(const has_ucls_prc & value) {
            set_has_ucls_prc(value);
        }
        void set(const bid_iv & value) {
            set_bid_iv(value);
        }
        void set(const ask_iv & value) {
            set_ask_iv(value);
        }
        void set(const sr_prc & value) {
            set_sr_prc(value);
        }
        void set(const sr_vol & value) {
            set_sr_vol(value);
        }
        void set(const sr_src & value) {
            set_sr_src(value);
        }
        void set(const de & value) {
            set_de(value);
        }
        void set(const ga & value) {
            set_ga(value);
        }
        void set(const th & value) {
            set_th(value);
        }
        void set(const ve & value) {
            set_ve(value);
        }
        void set(const vo & value) {
            set_vo(value);
        }
        void set(const va & value) {
            set_va(value);
        }
        void set(const rh & value) {
            set_rh(value);
        }
        void set(const ph & value) {
            set_ph(value);
        }
        void set(const sr_slope & value) {
            set_sr_slope(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const error & value) {
            set_error(value);
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
        void set(const sr_close_mark_dttm & value) {
            set_sr_close_mark_dttm(value);
        }
        void set(const config_now & value) {
            set_config_now(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionCloseMark & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_cls_mark_state);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_u_sr_cls);
            set(value.m_u_close);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_sr_cls_prc);
            set(value.m_close_prc);
            set(value.m_has_srcls_prc);
            set(value.m_has_close_prc);
            set(value.m_has_ucls_prc);
            set(value.m_bid_iv);
            set(value.m_ask_iv);
            set(value.m_sr_prc);
            set(value.m_sr_vol);
            set(value.m_sr_src);
            set(value.m_de);
            set(value.m_ga);
            set(value.m_th);
            set(value.m_ve);
            set(value.m_vo);
            set(value.m_va);
            set(value.m_rh);
            set(value.m_ph);
            set(value.m_sr_slope);
            set(value.m_de_decay);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_ddiv_pv);
            set(value.m_rate);
            set(value.m_i_days);
            set(value.m_years);
            set(value.m_error);
            set(value.m_open_interest);
            set(value.m_prt_count);
            set(value.m_prt_volume);
            set(value.m_sr_close_mark_dttm);
            set(value.m_config_now);
            set(value.m_timestamp);
        }

        OptionCloseMark() {
            m__meta.set_message_type("OptionCloseMark");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3140, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3140, length);
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
             *this = OptionCloseMark{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeUSrCls() const {
            return !(m_u_sr_cls == 0.0);
        }
        bool IncludeUClose() const {
            return !(m_u_close == 0.0);
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
        bool IncludeBidIv() const {
            return !(m_bid_iv == 0.0);
        }
        bool IncludeAskIv() const {
            return !(m_ask_iv == 0.0);
        }
        bool IncludeSrPrc() const {
            return !(m_sr_prc == 0.0);
        }
        bool IncludeSrVol() const {
            return !(m_sr_vol == 0.0);
        }
        bool IncludeDe() const {
            return !(m_de == 0.0);
        }
        bool IncludeGa() const {
            return !(m_ga == 0.0);
        }
        bool IncludeTh() const {
            return !(m_th == 0.0);
        }
        bool IncludeVe() const {
            return !(m_ve == 0.0);
        }
        bool IncludeVo() const {
            return !(m_vo == 0.0);
        }
        bool IncludeVa() const {
            return !(m_va == 0.0);
        }
        bool IncludeRh() const {
            return !(m_rh == 0.0);
        }
        bool IncludePh() const {
            return !(m_ph == 0.0);
        }
        bool IncludeSrSlope() const {
            return !(m_sr_slope == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeError() const {
            return !(m_error == 0);
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
        bool IncludeSrCloseMarkDttm() const {
            return (m_sr_close_mark_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeConfigNow() const {
            return (m_config_now.time_since_epoch().count() != 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(212, tickerKeyLayout);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_u_ask);
            }
            if ( IncludeUSrCls()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_u_sr_cls);
            }
            if ( IncludeUClose()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_u_close);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_close_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_srcls_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_close_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(209,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_ucls_prc)));
            if ( IncludeBidIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_bid_iv);
            }
            if ( IncludeAskIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_ask_iv);
            }
            if ( IncludeSrPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_sr_prc);
            }
            if ( IncludeSrVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_sr_vol);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>(m_sr_src)));
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_de);
            }
            if ( IncludeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_ga);
            }
            if ( IncludeTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_th);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_ve);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_vo);
            }
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_va);
            }
            if ( IncludeRh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_rh);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_ph);
            }
            if ( IncludeSrSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_sr_slope);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_de_decay);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(210,m_ddiv_pv);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_rate);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_i_days);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_years);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_error);
            }
            if ( IncludeOpenInterest()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_open_interest);
            }
            if ( IncludePrtCount()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_prt_volume);
            }
            if ( IncludeSrCloseMarkDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(205, m_sr_close_mark_dttm);
            }
            if ( IncludeConfigNow()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(213, m_config_now);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(208, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 212, tickerKeyLayout);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>(m_cls_mark_state)));
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_u_ask);
            }
            if ( IncludeUSrCls()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_u_sr_cls);
            }
            if ( IncludeUClose()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_u_close);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_close_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_srcls_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_close_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,209,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_ucls_prc)));
            if ( IncludeBidIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_bid_iv);
            }
            if ( IncludeAskIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_ask_iv);
            }
            if ( IncludeSrPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_sr_prc);
            }
            if ( IncludeSrVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_sr_vol);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>(m_sr_src)));
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_de);
            }
            if ( IncludeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_ga);
            }
            if ( IncludeTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_th);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_ve);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_vo);
            }
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_va);
            }
            if ( IncludeRh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_rh);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_ph);
            }
            if ( IncludeSrSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_sr_slope);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_de_decay);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,210,m_ddiv_pv);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_rate);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_i_days);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_years);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_error);
            }
            if ( IncludeOpenInterest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_open_interest);
            }
            if ( IncludePrtCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_prt_count);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_prt_volume);
            }
            if ( IncludeSrCloseMarkDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 205, m_sr_close_mark_dttm);
            }
            if ( IncludeConfigNow()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 213, m_config_now);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 208, m_timestamp);
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
                    case 212: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
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
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_sr_cls = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_close = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sr_cls_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_close_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_srcls_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_close_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 209: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_ucls_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sr_src = static_cast<spiderrock::protobuf::api::MarkSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 210: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_interest = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_count = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_sr_close_mark_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 213: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_config_now = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 208: {
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

    template<> inline const auto OptionCloseMark::get<OptionCloseMark::_meta>() const { return OptionCloseMark::_meta{ m__meta}; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::pkey>() const { return OptionCloseMark::pkey{ m_pkey}; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ticker>() const { return OptionCloseMark::ticker{ m_ticker}; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::trade_date>() const { return OptionCloseMark::trade_date{ m_trade_date}; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::cls_mark_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsMarkState>( m_cls_mark_state)); }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::u_bid>() const { return m_u_bid; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::u_ask>() const { return m_u_ask; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::u_sr_cls>() const { return m_u_sr_cls; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::u_close>() const { return m_u_close; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sr_cls_prc>() const { return m_sr_cls_prc; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::close_prc>() const { return m_close_prc; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::has_srcls_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_srcls_prc)); }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::has_close_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_close_prc)); }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::has_ucls_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_ucls_prc)); }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::bid_iv>() const { return m_bid_iv; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ask_iv>() const { return m_ask_iv; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sr_prc>() const { return m_sr_prc; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sr_vol>() const { return m_sr_vol; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sr_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>( m_sr_src)); }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::de>() const { return m_de; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ga>() const { return m_ga; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::th>() const { return m_th; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ve>() const { return m_ve; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::vo>() const { return m_vo; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::va>() const { return m_va; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::rh>() const { return m_rh; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ph>() const { return m_ph; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sr_slope>() const { return m_sr_slope; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::de_decay>() const { return m_de_decay; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::rate>() const { return m_rate; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::i_days>() const { return m_i_days; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::years>() const { return m_years; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::error>() const { return m_error; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::open_interest>() const { return m_open_interest; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::prt_count>() const { return m_prt_count; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::sr_close_mark_dttm>() const { return m_sr_close_mark_dttm; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::config_now>() const { return m_config_now; }
    template<> inline const auto OptionCloseMark::get<OptionCloseMark::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionCloseMark_PKey::get<OptionCloseMark_PKey::okey>() const { return OptionCloseMark_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionCloseMark_PKey& m) {
        o << "\"okey\":{" << m.get<OptionCloseMark_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionCloseMark& m) {
        o << "\"_meta\":{" << m.get<OptionCloseMark::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionCloseMark::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptionCloseMark::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<OptionCloseMark::trade_date>() << "}";
        o << ",\"cls_mark_state\":" << (int64_t)m.get<OptionCloseMark::cls_mark_state>();
        o << ",\"u_bid\":" << m.get<OptionCloseMark::u_bid>();
        o << ",\"u_ask\":" << m.get<OptionCloseMark::u_ask>();
        o << ",\"u_sr_cls\":" << m.get<OptionCloseMark::u_sr_cls>();
        o << ",\"u_close\":" << m.get<OptionCloseMark::u_close>();
        o << ",\"bid_prc\":" << m.get<OptionCloseMark::bid_prc>();
        o << ",\"ask_prc\":" << m.get<OptionCloseMark::ask_prc>();
        o << ",\"sr_cls_prc\":" << m.get<OptionCloseMark::sr_cls_prc>();
        o << ",\"close_prc\":" << m.get<OptionCloseMark::close_prc>();
        o << ",\"has_srcls_prc\":" << (int64_t)m.get<OptionCloseMark::has_srcls_prc>();
        o << ",\"has_close_prc\":" << (int64_t)m.get<OptionCloseMark::has_close_prc>();
        o << ",\"has_ucls_prc\":" << (int64_t)m.get<OptionCloseMark::has_ucls_prc>();
        o << ",\"bid_iv\":" << m.get<OptionCloseMark::bid_iv>();
        o << ",\"ask_iv\":" << m.get<OptionCloseMark::ask_iv>();
        o << ",\"sr_prc\":" << m.get<OptionCloseMark::sr_prc>();
        o << ",\"sr_vol\":" << m.get<OptionCloseMark::sr_vol>();
        o << ",\"sr_src\":" << (int64_t)m.get<OptionCloseMark::sr_src>();
        o << ",\"de\":" << m.get<OptionCloseMark::de>();
        o << ",\"ga\":" << m.get<OptionCloseMark::ga>();
        o << ",\"th\":" << m.get<OptionCloseMark::th>();
        o << ",\"ve\":" << m.get<OptionCloseMark::ve>();
        o << ",\"vo\":" << m.get<OptionCloseMark::vo>();
        o << ",\"va\":" << m.get<OptionCloseMark::va>();
        o << ",\"rh\":" << m.get<OptionCloseMark::rh>();
        o << ",\"ph\":" << m.get<OptionCloseMark::ph>();
        o << ",\"sr_slope\":" << m.get<OptionCloseMark::sr_slope>();
        o << ",\"de_decay\":" << m.get<OptionCloseMark::de_decay>();
        o << ",\"sdiv\":" << m.get<OptionCloseMark::sdiv>();
        o << ",\"ddiv\":" << m.get<OptionCloseMark::ddiv>();
        o << ",\"ddiv_pv\":" << m.get<OptionCloseMark::ddiv_pv>();
        o << ",\"rate\":" << m.get<OptionCloseMark::rate>();
        o << ",\"i_days\":" << m.get<OptionCloseMark::i_days>();
        o << ",\"years\":" << m.get<OptionCloseMark::years>();
        o << ",\"error\":" << m.get<OptionCloseMark::error>();
        o << ",\"open_interest\":" << m.get<OptionCloseMark::open_interest>();
        o << ",\"prt_count\":" << m.get<OptionCloseMark::prt_count>();
        o << ",\"prt_volume\":" << m.get<OptionCloseMark::prt_volume>();
        {
            std::time_t tt = m.get<OptionCloseMark::sr_close_mark_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"sr_close_mark_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<OptionCloseMark::config_now>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"config_now\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<OptionCloseMark::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}