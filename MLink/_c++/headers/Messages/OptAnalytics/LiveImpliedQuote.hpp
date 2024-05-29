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

    #ifndef _u_prc__float__GUARD__
    #define _u_prc__float__GUARD__
    DECL_STRONG_TYPE(u_prc__float, float);
    #endif//_u_prc__float__GUARD__

    #ifndef _u_off__GUARD__
    #define _u_off__GUARD__
    DECL_STRONG_TYPE(u_off, float);
    #endif//_u_off__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _x_axis__GUARD__
    #define _x_axis__GUARD__
    DECL_STRONG_TYPE(x_axis, float);
    #endif//_x_axis__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _ddiv__GUARD__
    #define _ddiv__GUARD__
    DECL_STRONG_TYPE(ddiv, float);
    #endif//_ddiv__GUARD__

    #ifndef _o_bid__GUARD__
    #define _o_bid__GUARD__
    DECL_STRONG_TYPE(o_bid, float);
    #endif//_o_bid__GUARD__

    #ifndef _o_ask__GUARD__
    #define _o_ask__GUARD__
    DECL_STRONG_TYPE(o_ask, float);
    #endif//_o_ask__GUARD__

    #ifndef _o_bid_iv__float__GUARD__
    #define _o_bid_iv__float__GUARD__
    DECL_STRONG_TYPE(o_bid_iv__float, float);
    #endif//_o_bid_iv__float__GUARD__

    #ifndef _o_ask_iv__float__GUARD__
    #define _o_ask_iv__float__GUARD__
    DECL_STRONG_TYPE(o_ask_iv__float, float);
    #endif//_o_ask_iv__float__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _s_vol__float__GUARD__
    #define _s_vol__float__GUARD__
    DECL_STRONG_TYPE(s_vol__float, float);
    #endif//_s_vol__float__GUARD__

    #ifndef _s_prc__GUARD__
    #define _s_prc__GUARD__
    DECL_STRONG_TYPE(s_prc, float);
    #endif//_s_prc__GUARD__

    #ifndef _s_mark__GUARD__
    #define _s_mark__GUARD__
    DECL_STRONG_TYPE(s_mark, float);
    #endif//_s_mark__GUARD__

    #ifndef _ve_slope__GUARD__
    #define _ve_slope__GUARD__
    DECL_STRONG_TYPE(ve_slope, float);
    #endif//_ve_slope__GUARD__

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

    #ifndef _va__GUARD__
    #define _va__GUARD__
    DECL_STRONG_TYPE(va, float);
    #endif//_va__GUARD__

    #ifndef _vo__GUARD__
    #define _vo__GUARD__
    DECL_STRONG_TYPE(vo, float);
    #endif//_vo__GUARD__

    #ifndef _ro__GUARD__
    #define _ro__GUARD__
    DECL_STRONG_TYPE(ro, float);
    #endif//_ro__GUARD__

    #ifndef _ph__GUARD__
    #define _ph__GUARD__
    DECL_STRONG_TYPE(ph, float);
    #endif//_ph__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _up50__GUARD__
    #define _up50__GUARD__
    DECL_STRONG_TYPE(up50, float);
    #endif//_up50__GUARD__

    #ifndef _dn50__GUARD__
    #define _dn50__GUARD__
    DECL_STRONG_TYPE(dn50, float);
    #endif//_dn50__GUARD__

    #ifndef _up15__GUARD__
    #define _up15__GUARD__
    DECL_STRONG_TYPE(up15, float);
    #endif//_up15__GUARD__

    #ifndef _dn15__GUARD__
    #define _dn15__GUARD__
    DECL_STRONG_TYPE(dn15, float);
    #endif//_dn15__GUARD__

    #ifndef _up06__GUARD__
    #define _up06__GUARD__
    DECL_STRONG_TYPE(up06, float);
    #endif//_up06__GUARD__

    #ifndef _dn08__GUARD__
    #define _dn08__GUARD__
    DECL_STRONG_TYPE(dn08, float);
    #endif//_dn08__GUARD__

    #ifndef _syn_spot__GUARD__
    #define _syn_spot__GUARD__
    DECL_STRONG_TYPE(syn_spot, double);
    #endif//_syn_spot__GUARD__

    #ifndef _price_type__CalcPriceType__GUARD__
    #define _price_type__CalcPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__CalcPriceType, spiderrock::protobuf::api::CalcPriceType);
    #endif//_price_type__CalcPriceType__GUARD__

    #ifndef _calc_err__ImpliedQuoteError__GUARD__
    #define _calc_err__ImpliedQuoteError__GUARD__
    DECL_STRONG_TYPE(calc_err__ImpliedQuoteError, spiderrock::protobuf::api::ImpliedQuoteError);
    #endif//_calc_err__ImpliedQuoteError__GUARD__

    #ifndef _calc_source__GUARD__
    #define _calc_source__GUARD__
    DECL_STRONG_TYPE(calc_source, spiderrock::protobuf::api::CalcSource);
    #endif//_calc_source__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class LiveImpliedQuote_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuote_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuote_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        LiveImpliedQuote_PKey() {}

        virtual ~LiveImpliedQuote_PKey() {
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
    

    class LiveImpliedQuote {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveImpliedQuote_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using u_prc = spiderrock::protobuf::api::u_prc__float;
        using u_off = spiderrock::protobuf::api::u_off;
        using years = spiderrock::protobuf::api::years__float;
        using x_axis = spiderrock::protobuf::api::x_axis;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using o_bid = spiderrock::protobuf::api::o_bid;
        using o_ask = spiderrock::protobuf::api::o_ask;
        using o_bid_iv = spiderrock::protobuf::api::o_bid_iv__float;
        using o_ask_iv = spiderrock::protobuf::api::o_ask_iv__float;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using s_vol = spiderrock::protobuf::api::s_vol__float;
        using s_prc = spiderrock::protobuf::api::s_prc;
        using s_mark = spiderrock::protobuf::api::s_mark;
        using ve_slope = spiderrock::protobuf::api::ve_slope;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using va = spiderrock::protobuf::api::va;
        using vo = spiderrock::protobuf::api::vo;
        using ro = spiderrock::protobuf::api::ro;
        using ph = spiderrock::protobuf::api::ph;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using up50 = spiderrock::protobuf::api::up50;
        using dn50 = spiderrock::protobuf::api::dn50;
        using up15 = spiderrock::protobuf::api::up15;
        using dn15 = spiderrock::protobuf::api::dn15;
        using up06 = spiderrock::protobuf::api::up06;
        using dn08 = spiderrock::protobuf::api::dn08;
        using syn_spot = spiderrock::protobuf::api::syn_spot;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using calc_err = spiderrock::protobuf::api::calc_err__ImpliedQuoteError;
        using calc_source = spiderrock::protobuf::api::calc_source;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        u_prc m_u_prc{};
        u_off m_u_off{};
        years m_years{};
        x_axis m_x_axis{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        o_bid m_o_bid{};
        o_ask m_o_ask{};
        o_bid_iv m_o_bid_iv{};
        o_ask_iv m_o_ask_iv{};
        atm_vol m_atm_vol{};
        s_vol m_s_vol{};
        s_prc m_s_prc{};
        s_mark m_s_mark{};
        ve_slope m_ve_slope{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        va m_va{};
        vo m_vo{};
        ro m_ro{};
        ph m_ph{};
        de_decay m_de_decay{};
        up50 m_up50{};
        dn50 m_dn50{};
        up15 m_up15{};
        dn15 m_dn15{};
        up06 m_up06{};
        dn08 m_dn08{};
        syn_spot m_syn_spot{};
        price_type m_price_type{};
        calc_err m_calc_err{};
        calc_source m_calc_source{};
        src_timestamp m_src_timestamp{};
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
        ticker get_ticker() const {
            return m_ticker;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        u_off get_u_off() const {
            return m_u_off;
        }		
        years get_years() const {
            return m_years;
        }		
        x_axis get_x_axis() const {
            return m_x_axis;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        o_bid get_o_bid() const {
            return m_o_bid;
        }		
        o_ask get_o_ask() const {
            return m_o_ask;
        }		
        o_bid_iv get_o_bid_iv() const {
            return m_o_bid_iv;
        }		
        o_ask_iv get_o_ask_iv() const {
            return m_o_ask_iv;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        s_vol get_s_vol() const {
            return m_s_vol;
        }		
        s_prc get_s_prc() const {
            return m_s_prc;
        }		
        s_mark get_s_mark() const {
            return m_s_mark;
        }		
        ve_slope get_ve_slope() const {
            return m_ve_slope;
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
        va get_va() const {
            return m_va;
        }		
        vo get_vo() const {
            return m_vo;
        }		
        ro get_ro() const {
            return m_ro;
        }		
        ph get_ph() const {
            return m_ph;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        up50 get_up50() const {
            return m_up50;
        }		
        dn50 get_dn50() const {
            return m_dn50;
        }		
        up15 get_up15() const {
            return m_up15;
        }		
        dn15 get_dn15() const {
            return m_dn15;
        }		
        up06 get_up06() const {
            return m_up06;
        }		
        dn08 get_dn08() const {
            return m_dn08;
        }		
        syn_spot get_syn_spot() const {
            return m_syn_spot;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        calc_err get_calc_err() const {
            return m_calc_err;
        }		
        calc_source get_calc_source() const {
            return m_calc_source;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_u_off(const u_off& value)  {
            m_u_off = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_x_axis(const x_axis& value)  {
            m_x_axis = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_o_bid(const o_bid& value)  {
            m_o_bid = value;
        }
        void set_o_ask(const o_ask& value)  {
            m_o_ask = value;
        }
        void set_o_bid_iv(const o_bid_iv& value)  {
            m_o_bid_iv = value;
        }
        void set_o_ask_iv(const o_ask_iv& value)  {
            m_o_ask_iv = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_s_vol(const s_vol& value)  {
            m_s_vol = value;
        }
        void set_s_prc(const s_prc& value)  {
            m_s_prc = value;
        }
        void set_s_mark(const s_mark& value)  {
            m_s_mark = value;
        }
        void set_ve_slope(const ve_slope& value)  {
            m_ve_slope = value;
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
        void set_va(const va& value)  {
            m_va = value;
        }
        void set_vo(const vo& value)  {
            m_vo = value;
        }
        void set_ro(const ro& value)  {
            m_ro = value;
        }
        void set_ph(const ph& value)  {
            m_ph = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_up50(const up50& value)  {
            m_up50 = value;
        }
        void set_dn50(const dn50& value)  {
            m_dn50 = value;
        }
        void set_up15(const up15& value)  {
            m_up15 = value;
        }
        void set_dn15(const dn15& value)  {
            m_dn15 = value;
        }
        void set_up06(const up06& value)  {
            m_up06 = value;
        }
        void set_dn08(const dn08& value)  {
            m_dn08 = value;
        }
        void set_syn_spot(const syn_spot& value)  {
            m_syn_spot = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_calc_err(const calc_err& value)  {
            m_calc_err = value;
        }
        void set_calc_source(const calc_source& value)  {
            m_calc_source = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuote::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const u_off & value) {
            set_u_off(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const x_axis & value) {
            set_x_axis(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const o_bid & value) {
            set_o_bid(value);
        }
        void set(const o_ask & value) {
            set_o_ask(value);
        }
        void set(const o_bid_iv & value) {
            set_o_bid_iv(value);
        }
        void set(const o_ask_iv & value) {
            set_o_ask_iv(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const s_vol & value) {
            set_s_vol(value);
        }
        void set(const s_prc & value) {
            set_s_prc(value);
        }
        void set(const s_mark & value) {
            set_s_mark(value);
        }
        void set(const ve_slope & value) {
            set_ve_slope(value);
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
        void set(const va & value) {
            set_va(value);
        }
        void set(const vo & value) {
            set_vo(value);
        }
        void set(const ro & value) {
            set_ro(value);
        }
        void set(const ph & value) {
            set_ph(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const up50 & value) {
            set_up50(value);
        }
        void set(const dn50 & value) {
            set_dn50(value);
        }
        void set(const up15 & value) {
            set_up15(value);
        }
        void set(const dn15 & value) {
            set_dn15(value);
        }
        void set(const up06 & value) {
            set_up06(value);
        }
        void set(const dn08 & value) {
            set_dn08(value);
        }
        void set(const syn_spot & value) {
            set_syn_spot(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const calc_err & value) {
            set_calc_err(value);
        }
        void set(const calc_source & value) {
            set_calc_source(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveImpliedQuote & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_u_prc);
            set(value.m_u_off);
            set(value.m_years);
            set(value.m_x_axis);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_o_bid);
            set(value.m_o_ask);
            set(value.m_o_bid_iv);
            set(value.m_o_ask_iv);
            set(value.m_atm_vol);
            set(value.m_s_vol);
            set(value.m_s_prc);
            set(value.m_s_mark);
            set(value.m_ve_slope);
            set(value.m_de);
            set(value.m_ga);
            set(value.m_th);
            set(value.m_ve);
            set(value.m_va);
            set(value.m_vo);
            set(value.m_ro);
            set(value.m_ph);
            set(value.m_de_decay);
            set(value.m_up50);
            set(value.m_dn50);
            set(value.m_up15);
            set(value.m_dn15);
            set(value.m_up06);
            set(value.m_dn08);
            set(value.m_syn_spot);
            set(value.m_price_type);
            set(value.m_calc_err);
            set(value.m_calc_source);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        LiveImpliedQuote() {
            m__meta.set_message_type("LiveImpliedQuote");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1015, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1015, length);
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
             *this = LiveImpliedQuote{};
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
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeUOff() const {
            return !(m_u_off == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeXAxis() const {
            return !(m_x_axis == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeOBid() const {
            return !(m_o_bid == 0.0);
        }
        bool IncludeOAsk() const {
            return !(m_o_ask == 0.0);
        }
        bool IncludeOBidIv() const {
            return !(m_o_bid_iv == 0.0);
        }
        bool IncludeOAskIv() const {
            return !(m_o_ask_iv == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeSVol() const {
            return !(m_s_vol == 0.0);
        }
        bool IncludeSPrc() const {
            return !(m_s_prc == 0.0);
        }
        bool IncludeSMark() const {
            return !(m_s_mark == 0.0);
        }
        bool IncludeVeSlope() const {
            return !(m_ve_slope == 0.0);
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
        bool IncludeVa() const {
            return !(m_va == 0.0);
        }
        bool IncludeVo() const {
            return !(m_vo == 0.0);
        }
        bool IncludeRo() const {
            return !(m_ro == 0.0);
        }
        bool IncludePh() const {
            return !(m_ph == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeUp50() const {
            return !(m_up50 == 0.0);
        }
        bool IncludeDn50() const {
            return !(m_dn50 == 0.0);
        }
        bool IncludeUp15() const {
            return !(m_up15 == 0.0);
        }
        bool IncludeDn15() const {
            return !(m_dn15 == 0.0);
        }
        bool IncludeUp06() const {
            return !(m_up06 == 0.0);
        }
        bool IncludeDn08() const {
            return !(m_dn08 == 0.0);
        }
        bool IncludeSynSpot() const {
            return !(m_syn_spot == 0.0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_u_prc);
            }
            if ( IncludeUOff()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_u_off);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_years);
            }
            if ( IncludeXAxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_x_axis);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ddiv);
            }
            if ( IncludeOBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_o_bid);
            }
            if ( IncludeOAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_o_ask);
            }
            if ( IncludeOBidIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_o_bid_iv);
            }
            if ( IncludeOAskIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_o_ask_iv);
            }
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_atm_vol);
            }
            if ( IncludeSVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_s_vol);
            }
            if ( IncludeSPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_s_prc);
            }
            if ( IncludeSMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_s_mark);
            }
            if ( IncludeVeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_ve_slope);
            }
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
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_va);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_vo);
            }
            if ( IncludeRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_ro);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_ph);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_de_decay);
            }
            if ( IncludeUp50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_up50);
            }
            if ( IncludeDn50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_dn50);
            }
            if ( IncludeUp15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_up15);
            }
            if ( IncludeDn15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_dn15);
            }
            if ( IncludeUp06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_up06);
            }
            if ( IncludeDn08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_dn08);
            }
            if ( IncludeSynSpot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_syn_spot);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImpliedQuoteError>(m_calc_err)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(208,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(211,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(214, m_timestamp);
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
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_u_prc);
            }
            if ( IncludeUOff()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_u_off);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_years);
            }
            if ( IncludeXAxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_x_axis);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ddiv);
            }
            if ( IncludeOBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_o_bid);
            }
            if ( IncludeOAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_o_ask);
            }
            if ( IncludeOBidIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_o_bid_iv);
            }
            if ( IncludeOAskIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_o_ask_iv);
            }
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_atm_vol);
            }
            if ( IncludeSVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_s_vol);
            }
            if ( IncludeSPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_s_prc);
            }
            if ( IncludeSMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_s_mark);
            }
            if ( IncludeVeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_ve_slope);
            }
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
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_va);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_vo);
            }
            if ( IncludeRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_ro);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_ph);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_de_decay);
            }
            if ( IncludeUp50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_up50);
            }
            if ( IncludeDn50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_dn50);
            }
            if ( IncludeUp15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_up15);
            }
            if ( IncludeDn15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_dn15);
            }
            if ( IncludeUp06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_up06);
            }
            if ( IncludeDn08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_dn08);
            }
            if ( IncludeSynSpot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_syn_spot);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImpliedQuoteError>(m_calc_err)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,208,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,211,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 214, m_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_off = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_axis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_syn_spot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_err = static_cast<spiderrock::protobuf::api::ImpliedQuoteError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_source = static_cast<spiderrock::protobuf::api::CalcSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 214: {
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

    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::_meta>() const { return LiveImpliedQuote::_meta{ m__meta}; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::pkey>() const { return LiveImpliedQuote::pkey{ m_pkey}; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ticker>() const { return LiveImpliedQuote::ticker{ m_ticker}; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::u_off>() const { return m_u_off; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::years>() const { return m_years; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::x_axis>() const { return m_x_axis; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::rate>() const { return m_rate; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::sdiv>() const { return m_sdiv; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::o_bid>() const { return m_o_bid; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::o_ask>() const { return m_o_ask; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::o_bid_iv>() const { return m_o_bid_iv; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::o_ask_iv>() const { return m_o_ask_iv; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::s_vol>() const { return m_s_vol; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::s_prc>() const { return m_s_prc; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::s_mark>() const { return m_s_mark; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ve_slope>() const { return m_ve_slope; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::de>() const { return m_de; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ga>() const { return m_ga; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::th>() const { return m_th; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ve>() const { return m_ve; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::va>() const { return m_va; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::vo>() const { return m_vo; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ro>() const { return m_ro; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::ph>() const { return m_ph; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::de_decay>() const { return m_de_decay; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::up50>() const { return m_up50; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::dn50>() const { return m_dn50; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::up15>() const { return m_up15; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::dn15>() const { return m_dn15; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::up06>() const { return m_up06; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::dn08>() const { return m_dn08; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::syn_spot>() const { return m_syn_spot; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::calc_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImpliedQuoteError>( m_calc_err)); }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::calc_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>( m_calc_source)); }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto LiveImpliedQuote::get<LiveImpliedQuote::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveImpliedQuote_PKey::get<LiveImpliedQuote_PKey::okey>() const { return LiveImpliedQuote_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveImpliedQuote_PKey& m) {
        o << "\"okey\":{" << m.get<LiveImpliedQuote_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveImpliedQuote& m) {
        o << "\"_meta\":{" << m.get<LiveImpliedQuote::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveImpliedQuote::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveImpliedQuote::ticker>() << "}";
        o << ",\"u_prc\":" << m.get<LiveImpliedQuote::u_prc>();
        o << ",\"u_off\":" << m.get<LiveImpliedQuote::u_off>();
        o << ",\"years\":" << m.get<LiveImpliedQuote::years>();
        o << ",\"x_axis\":" << m.get<LiveImpliedQuote::x_axis>();
        o << ",\"rate\":" << m.get<LiveImpliedQuote::rate>();
        o << ",\"sdiv\":" << m.get<LiveImpliedQuote::sdiv>();
        o << ",\"ddiv\":" << m.get<LiveImpliedQuote::ddiv>();
        o << ",\"o_bid\":" << m.get<LiveImpliedQuote::o_bid>();
        o << ",\"o_ask\":" << m.get<LiveImpliedQuote::o_ask>();
        o << ",\"o_bid_iv\":" << m.get<LiveImpliedQuote::o_bid_iv>();
        o << ",\"o_ask_iv\":" << m.get<LiveImpliedQuote::o_ask_iv>();
        o << ",\"atm_vol\":" << m.get<LiveImpliedQuote::atm_vol>();
        o << ",\"s_vol\":" << m.get<LiveImpliedQuote::s_vol>();
        o << ",\"s_prc\":" << m.get<LiveImpliedQuote::s_prc>();
        o << ",\"s_mark\":" << m.get<LiveImpliedQuote::s_mark>();
        o << ",\"ve_slope\":" << m.get<LiveImpliedQuote::ve_slope>();
        o << ",\"de\":" << m.get<LiveImpliedQuote::de>();
        o << ",\"ga\":" << m.get<LiveImpliedQuote::ga>();
        o << ",\"th\":" << m.get<LiveImpliedQuote::th>();
        o << ",\"ve\":" << m.get<LiveImpliedQuote::ve>();
        o << ",\"va\":" << m.get<LiveImpliedQuote::va>();
        o << ",\"vo\":" << m.get<LiveImpliedQuote::vo>();
        o << ",\"ro\":" << m.get<LiveImpliedQuote::ro>();
        o << ",\"ph\":" << m.get<LiveImpliedQuote::ph>();
        o << ",\"de_decay\":" << m.get<LiveImpliedQuote::de_decay>();
        o << ",\"up50\":" << m.get<LiveImpliedQuote::up50>();
        o << ",\"dn50\":" << m.get<LiveImpliedQuote::dn50>();
        o << ",\"up15\":" << m.get<LiveImpliedQuote::up15>();
        o << ",\"dn15\":" << m.get<LiveImpliedQuote::dn15>();
        o << ",\"up06\":" << m.get<LiveImpliedQuote::up06>();
        o << ",\"dn08\":" << m.get<LiveImpliedQuote::dn08>();
        o << ",\"syn_spot\":" << m.get<LiveImpliedQuote::syn_spot>();
        o << ",\"price_type\":" << (int64_t)m.get<LiveImpliedQuote::price_type>();
        o << ",\"calc_err\":" << (int64_t)m.get<LiveImpliedQuote::calc_err>();
        o << ",\"calc_source\":" << (int64_t)m.get<LiveImpliedQuote::calc_source>();
        o << ",\"src_timestamp\":" << m.get<LiveImpliedQuote::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<LiveImpliedQuote::net_timestamp>();
        {
            std::time_t tt = m.get<LiveImpliedQuote::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}