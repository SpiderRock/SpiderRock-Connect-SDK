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

    #ifndef _uprc__GUARD__
    #define _uprc__GUARD__
    DECL_STRONG_TYPE(uprc, float);
    #endif//_uprc__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _ddiv__float__GUARD__
    #define _ddiv__float__GUARD__
    DECL_STRONG_TYPE(ddiv__float, float);
    #endif//_ddiv__float__GUARD__

    #ifndef _obid__GUARD__
    #define _obid__GUARD__
    DECL_STRONG_TYPE(obid, float);
    #endif//_obid__GUARD__

    #ifndef _oask__GUARD__
    #define _oask__GUARD__
    DECL_STRONG_TYPE(oask, float);
    #endif//_oask__GUARD__

    #ifndef _obiv__GUARD__
    #define _obiv__GUARD__
    DECL_STRONG_TYPE(obiv, float);
    #endif//_obiv__GUARD__

    #ifndef _oaiv__GUARD__
    #define _oaiv__GUARD__
    DECL_STRONG_TYPE(oaiv, float);
    #endif//_oaiv__GUARD__

    #ifndef _satm__GUARD__
    #define _satm__GUARD__
    DECL_STRONG_TYPE(satm, float);
    #endif//_satm__GUARD__

    #ifndef _smny__GUARD__
    #define _smny__GUARD__
    DECL_STRONG_TYPE(smny, float);
    #endif//_smny__GUARD__

    #ifndef _svol__GUARD__
    #define _svol__GUARD__
    DECL_STRONG_TYPE(svol, float);
    #endif//_svol__GUARD__

    #ifndef _sprc__GUARD__
    #define _sprc__GUARD__
    DECL_STRONG_TYPE(sprc, float);
    #endif//_sprc__GUARD__

    #ifndef _smrk__GUARD__
    #define _smrk__GUARD__
    DECL_STRONG_TYPE(smrk, float);
    #endif//_smrk__GUARD__

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

    #ifndef _syn_spot__double__GUARD__
    #define _syn_spot__double__GUARD__
    DECL_STRONG_TYPE(syn_spot__double, double);
    #endif//_syn_spot__double__GUARD__

    #ifndef _price_type__CalcPriceType__GUARD__
    #define _price_type__CalcPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__CalcPriceType, spiderrock::protobuf::api::CalcPriceType);
    #endif//_price_type__CalcPriceType__GUARD__

    #ifndef _calc_err__string__GUARD__
    #define _calc_err__string__GUARD__
    DECL_STRONG_TYPE(calc_err__string, string);
    #endif//_calc_err__string__GUARD__

    #ifndef _calc_source__GUARD__
    #define _calc_source__GUARD__
    DECL_STRONG_TYPE(calc_source, spiderrock::protobuf::api::CalcSource);
    #endif//_calc_source__GUARD__

    #ifndef _u_prc_adj_result__GUARD__
    #define _u_prc_adj_result__GUARD__
    DECL_STRONG_TYPE(u_prc_adj_result, spiderrock::protobuf::api::AdjResult);
    #endif//_u_prc_adj_result__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class LiveImpliedQuoteAdj_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuoteAdj_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuoteAdj_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        LiveImpliedQuoteAdj_PKey() {}

        virtual ~LiveImpliedQuoteAdj_PKey() {
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
    

    class LiveImpliedQuoteAdj {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveImpliedQuoteAdj_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using uprc = spiderrock::protobuf::api::uprc;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using obid = spiderrock::protobuf::api::obid;
        using oask = spiderrock::protobuf::api::oask;
        using obiv = spiderrock::protobuf::api::obiv;
        using oaiv = spiderrock::protobuf::api::oaiv;
        using satm = spiderrock::protobuf::api::satm;
        using smny = spiderrock::protobuf::api::smny;
        using svol = spiderrock::protobuf::api::svol;
        using sprc = spiderrock::protobuf::api::sprc;
        using smrk = spiderrock::protobuf::api::smrk;
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
        using syn_spot = spiderrock::protobuf::api::syn_spot__double;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using calc_err = spiderrock::protobuf::api::calc_err__string;
        using calc_source = spiderrock::protobuf::api::calc_source;
        using u_prc_adj_result = spiderrock::protobuf::api::u_prc_adj_result;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        uprc m_uprc{};
        years m_years{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        obid m_obid{};
        oask m_oask{};
        obiv m_obiv{};
        oaiv m_oaiv{};
        satm m_satm{};
        smny m_smny{};
        svol m_svol{};
        sprc m_sprc{};
        smrk m_smrk{};
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
        u_prc_adj_result m_u_prc_adj_result{};
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
        uprc get_uprc() const {
            return m_uprc;
        }		
        years get_years() const {
            return m_years;
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
        obid get_obid() const {
            return m_obid;
        }		
        oask get_oask() const {
            return m_oask;
        }		
        obiv get_obiv() const {
            return m_obiv;
        }		
        oaiv get_oaiv() const {
            return m_oaiv;
        }		
        satm get_satm() const {
            return m_satm;
        }		
        smny get_smny() const {
            return m_smny;
        }		
        svol get_svol() const {
            return m_svol;
        }		
        sprc get_sprc() const {
            return m_sprc;
        }		
        smrk get_smrk() const {
            return m_smrk;
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
        u_prc_adj_result get_u_prc_adj_result() const {
            return m_u_prc_adj_result;
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
        void set_uprc(const uprc& value)  {
            m_uprc = value;
        }
        void set_years(const years& value)  {
            m_years = value;
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
        void set_obid(const obid& value)  {
            m_obid = value;
        }
        void set_oask(const oask& value)  {
            m_oask = value;
        }
        void set_obiv(const obiv& value)  {
            m_obiv = value;
        }
        void set_oaiv(const oaiv& value)  {
            m_oaiv = value;
        }
        void set_satm(const satm& value)  {
            m_satm = value;
        }
        void set_smny(const smny& value)  {
            m_smny = value;
        }
        void set_svol(const svol& value)  {
            m_svol = value;
        }
        void set_sprc(const sprc& value)  {
            m_sprc = value;
        }
        void set_smrk(const smrk& value)  {
            m_smrk = value;
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
        void set_u_prc_adj_result(const u_prc_adj_result& value)  {
            m_u_prc_adj_result = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuoteAdj::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const uprc & value) {
            set_uprc(value);
        }
        void set(const years & value) {
            set_years(value);
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
        void set(const obid & value) {
            set_obid(value);
        }
        void set(const oask & value) {
            set_oask(value);
        }
        void set(const obiv & value) {
            set_obiv(value);
        }
        void set(const oaiv & value) {
            set_oaiv(value);
        }
        void set(const satm & value) {
            set_satm(value);
        }
        void set(const smny & value) {
            set_smny(value);
        }
        void set(const svol & value) {
            set_svol(value);
        }
        void set(const sprc & value) {
            set_sprc(value);
        }
        void set(const smrk & value) {
            set_smrk(value);
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
        void set(const u_prc_adj_result & value) {
            set_u_prc_adj_result(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveImpliedQuoteAdj & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_uprc);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_obid);
            set(value.m_oask);
            set(value.m_obiv);
            set(value.m_oaiv);
            set(value.m_satm);
            set(value.m_smny);
            set(value.m_svol);
            set(value.m_sprc);
            set(value.m_smrk);
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
            set(value.m_u_prc_adj_result);
            set(value.m_timestamp);
        }

        LiveImpliedQuoteAdj() {
            m__meta.set_message_type("LiveImpliedQuoteAdj");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1020, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1020, length);
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
             *this = LiveImpliedQuoteAdj{};
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
        bool IncludeUprc() const {
            return !(m_uprc == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
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
        bool IncludeObid() const {
            return !(m_obid == 0.0);
        }
        bool IncludeOask() const {
            return !(m_oask == 0.0);
        }
        bool IncludeObiv() const {
            return !(m_obiv == 0.0);
        }
        bool IncludeOaiv() const {
            return !(m_oaiv == 0.0);
        }
        bool IncludeSatm() const {
            return !(m_satm == 0.0);
        }
        bool IncludeSmny() const {
            return !(m_smny == 0.0);
        }
        bool IncludeSvol() const {
            return !(m_svol == 0.0);
        }
        bool IncludeSprc() const {
            return !(m_sprc == 0.0);
        }
        bool IncludeSmrk() const {
            return !(m_smrk == 0.0);
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
        bool IncludeCalcErr() const {
            return !(m_calc_err.empty());
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
            if ( IncludeUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_uprc);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ddiv);
            }
            if ( IncludeObid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_obid);
            }
            if ( IncludeOask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_oask);
            }
            if ( IncludeObiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_obiv);
            }
            if ( IncludeOaiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_oaiv);
            }
            if ( IncludeSatm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_satm);
            }
            if ( IncludeSmny()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_smny);
            }
            if ( IncludeSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_svol);
            }
            if ( IncludeSprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_sprc);
            }
            if ( IncludeSmrk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_smrk);
            }
            if ( IncludeVeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_ve_slope);
            }
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_de);
            }
            if ( IncludeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_ga);
            }
            if ( IncludeTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_th);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ve);
            }
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_va);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_vo);
            }
            if ( IncludeRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_ro);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_ph);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_de_decay);
            }
            if ( IncludeUp50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_up50);
            }
            if ( IncludeDn50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_dn50);
            }
            if ( IncludeUp15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_up15);
            }
            if ( IncludeDn15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_dn15);
            }
            if ( IncludeUp06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_up06);
            }
            if ( IncludeDn08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_dn08);
            }
            if ( IncludeSynSpot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_syn_spot);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeCalcErr()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_calc_err);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AdjResult>(m_u_prc_adj_result)));
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
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_uprc);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ddiv);
            }
            if ( IncludeObid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_obid);
            }
            if ( IncludeOask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_oask);
            }
            if ( IncludeObiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_obiv);
            }
            if ( IncludeOaiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_oaiv);
            }
            if ( IncludeSatm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_satm);
            }
            if ( IncludeSmny()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_smny);
            }
            if ( IncludeSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_svol);
            }
            if ( IncludeSprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_sprc);
            }
            if ( IncludeSmrk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_smrk);
            }
            if ( IncludeVeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_ve_slope);
            }
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_de);
            }
            if ( IncludeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_ga);
            }
            if ( IncludeTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_th);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ve);
            }
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_va);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_vo);
            }
            if ( IncludeRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_ro);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_ph);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_de_decay);
            }
            if ( IncludeUp50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_up50);
            }
            if ( IncludeDn50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_dn50);
            }
            if ( IncludeUp15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_up15);
            }
            if ( IncludeDn15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_dn15);
            }
            if ( IncludeUp06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_up06);
            }
            if ( IncludeDn08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_dn08);
            }
            if ( IncludeSynSpot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_syn_spot);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeCalcErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_calc_err));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AdjResult>(m_u_prc_adj_result)));
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
                    case 100: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_obid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_oask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_obiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_oaiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_satm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_smny = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_smrk = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_syn_spot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_calc_err = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_source = static_cast<spiderrock::protobuf::api::CalcSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_adj_result = static_cast<spiderrock::protobuf::api::AdjResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::_meta>() const { return LiveImpliedQuoteAdj::_meta{ m__meta}; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::pkey>() const { return LiveImpliedQuoteAdj::pkey{ m_pkey}; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ticker>() const { return LiveImpliedQuoteAdj::ticker{ m_ticker}; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::uprc>() const { return m_uprc; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::years>() const { return m_years; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::rate>() const { return m_rate; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::sdiv>() const { return m_sdiv; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::obid>() const { return m_obid; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::oask>() const { return m_oask; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::obiv>() const { return m_obiv; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::oaiv>() const { return m_oaiv; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::satm>() const { return m_satm; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::smny>() const { return m_smny; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::svol>() const { return m_svol; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::sprc>() const { return m_sprc; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::smrk>() const { return m_smrk; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ve_slope>() const { return m_ve_slope; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::de>() const { return m_de; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ga>() const { return m_ga; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::th>() const { return m_th; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ve>() const { return m_ve; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::va>() const { return m_va; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::vo>() const { return m_vo; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ro>() const { return m_ro; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::ph>() const { return m_ph; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::de_decay>() const { return m_de_decay; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::up50>() const { return m_up50; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::dn50>() const { return m_dn50; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::up15>() const { return m_up15; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::dn15>() const { return m_dn15; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::up06>() const { return m_up06; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::dn08>() const { return m_dn08; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::syn_spot>() const { return m_syn_spot; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::calc_err>() const { return m_calc_err; }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::calc_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>( m_calc_source)); }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::u_prc_adj_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AdjResult>( m_u_prc_adj_result)); }
    template<> inline const auto LiveImpliedQuoteAdj::get<LiveImpliedQuoteAdj::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveImpliedQuoteAdj_PKey::get<LiveImpliedQuoteAdj_PKey::okey>() const { return LiveImpliedQuoteAdj_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveImpliedQuoteAdj_PKey& m) {
        o << "\"okey\":{" << m.get<LiveImpliedQuoteAdj_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveImpliedQuoteAdj& m) {
        o << "\"_meta\":{" << m.get<LiveImpliedQuoteAdj::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveImpliedQuoteAdj::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveImpliedQuoteAdj::ticker>() << "}";
        o << ",\"uprc\":" << m.get<LiveImpliedQuoteAdj::uprc>();
        o << ",\"years\":" << m.get<LiveImpliedQuoteAdj::years>();
        o << ",\"rate\":" << m.get<LiveImpliedQuoteAdj::rate>();
        o << ",\"sdiv\":" << m.get<LiveImpliedQuoteAdj::sdiv>();
        o << ",\"ddiv\":" << m.get<LiveImpliedQuoteAdj::ddiv>();
        o << ",\"obid\":" << m.get<LiveImpliedQuoteAdj::obid>();
        o << ",\"oask\":" << m.get<LiveImpliedQuoteAdj::oask>();
        o << ",\"obiv\":" << m.get<LiveImpliedQuoteAdj::obiv>();
        o << ",\"oaiv\":" << m.get<LiveImpliedQuoteAdj::oaiv>();
        o << ",\"satm\":" << m.get<LiveImpliedQuoteAdj::satm>();
        o << ",\"smny\":" << m.get<LiveImpliedQuoteAdj::smny>();
        o << ",\"svol\":" << m.get<LiveImpliedQuoteAdj::svol>();
        o << ",\"sprc\":" << m.get<LiveImpliedQuoteAdj::sprc>();
        o << ",\"smrk\":" << m.get<LiveImpliedQuoteAdj::smrk>();
        o << ",\"ve_slope\":" << m.get<LiveImpliedQuoteAdj::ve_slope>();
        o << ",\"de\":" << m.get<LiveImpliedQuoteAdj::de>();
        o << ",\"ga\":" << m.get<LiveImpliedQuoteAdj::ga>();
        o << ",\"th\":" << m.get<LiveImpliedQuoteAdj::th>();
        o << ",\"ve\":" << m.get<LiveImpliedQuoteAdj::ve>();
        o << ",\"va\":" << m.get<LiveImpliedQuoteAdj::va>();
        o << ",\"vo\":" << m.get<LiveImpliedQuoteAdj::vo>();
        o << ",\"ro\":" << m.get<LiveImpliedQuoteAdj::ro>();
        o << ",\"ph\":" << m.get<LiveImpliedQuoteAdj::ph>();
        o << ",\"de_decay\":" << m.get<LiveImpliedQuoteAdj::de_decay>();
        o << ",\"up50\":" << m.get<LiveImpliedQuoteAdj::up50>();
        o << ",\"dn50\":" << m.get<LiveImpliedQuoteAdj::dn50>();
        o << ",\"up15\":" << m.get<LiveImpliedQuoteAdj::up15>();
        o << ",\"dn15\":" << m.get<LiveImpliedQuoteAdj::dn15>();
        o << ",\"up06\":" << m.get<LiveImpliedQuoteAdj::up06>();
        o << ",\"dn08\":" << m.get<LiveImpliedQuoteAdj::dn08>();
        o << ",\"syn_spot\":" << m.get<LiveImpliedQuoteAdj::syn_spot>();
        o << ",\"price_type\":" << (int64_t)m.get<LiveImpliedQuoteAdj::price_type>();
        o << ",\"calc_err\":\"" << m.get<LiveImpliedQuoteAdj::calc_err>() << "\"";
        o << ",\"calc_source\":" << (int64_t)m.get<LiveImpliedQuoteAdj::calc_source>();
        o << ",\"u_prc_adj_result\":" << (int64_t)m.get<LiveImpliedQuoteAdj::u_prc_adj_result>();
        {
            std::time_t tt = m.get<LiveImpliedQuoteAdj::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}