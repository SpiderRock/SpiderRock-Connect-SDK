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

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _client_firm_out__GUARD__
    #define _client_firm_out__GUARD__
    DECL_STRONG_TYPE(client_firm_out, string);
    #endif//_client_firm_out__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _uprc__GUARD__
    #define _uprc__GUARD__
    DECL_STRONG_TYPE(uprc, float);
    #endif//_uprc__GUARD__

    #ifndef _ubid__GUARD__
    #define _ubid__GUARD__
    DECL_STRONG_TYPE(ubid, float);
    #endif//_ubid__GUARD__

    #ifndef _uask__GUARD__
    #define _uask__GUARD__
    DECL_STRONG_TYPE(uask, float);
    #endif//_uask__GUARD__

    #ifndef _obid__GUARD__
    #define _obid__GUARD__
    DECL_STRONG_TYPE(obid, float);
    #endif//_obid__GUARD__

    #ifndef _oask__GUARD__
    #define _oask__GUARD__
    DECL_STRONG_TYPE(oask, float);
    #endif//_oask__GUARD__

    #ifndef _tvol__GUARD__
    #define _tvol__GUARD__
    DECL_STRONG_TYPE(tvol, float);
    #endif//_tvol__GUARD__

    #ifndef _tvol_bopn__GUARD__
    #define _tvol_bopn__GUARD__
    DECL_STRONG_TYPE(tvol_bopn, float);
    #endif//_tvol_bopn__GUARD__

    #ifndef _tvol_sopn__GUARD__
    #define _tvol_sopn__GUARD__
    DECL_STRONG_TYPE(tvol_sopn, float);
    #endif//_tvol_sopn__GUARD__

    #ifndef _tprc__GUARD__
    #define _tprc__GUARD__
    DECL_STRONG_TYPE(tprc, float);
    #endif//_tprc__GUARD__

    #ifndef _tb_prc__GUARD__
    #define _tb_prc__GUARD__
    DECL_STRONG_TYPE(tb_prc, float);
    #endif//_tb_prc__GUARD__

    #ifndef _ts_prc__GUARD__
    #define _ts_prc__GUARD__
    DECL_STRONG_TYPE(ts_prc, float);
    #endif//_ts_prc__GUARD__

    #ifndef _tb_cls_prc__GUARD__
    #define _tb_cls_prc__GUARD__
    DECL_STRONG_TYPE(tb_cls_prc, float);
    #endif//_tb_cls_prc__GUARD__

    #ifndef _ts_cls_prc__GUARD__
    #define _ts_cls_prc__GUARD__
    DECL_STRONG_TYPE(ts_cls_prc, float);
    #endif//_ts_cls_prc__GUARD__

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

    #ifndef _vo__GUARD__
    #define _vo__GUARD__
    DECL_STRONG_TYPE(vo, float);
    #endif//_vo__GUARD__

    #ifndef _va__GUARD__
    #define _va__GUARD__
    DECL_STRONG_TYPE(va, float);
    #endif//_va__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _ro__GUARD__
    #define _ro__GUARD__
    DECL_STRONG_TYPE(ro, float);
    #endif//_ro__GUARD__

    #ifndef _ph__GUARD__
    #define _ph__GUARD__
    DECL_STRONG_TYPE(ph, float);
    #endif//_ph__GUARD__

    #ifndef _sdiv_b__GUARD__
    #define _sdiv_b__GUARD__
    DECL_STRONG_TYPE(sdiv_b, float);
    #endif//_sdiv_b__GUARD__

    #ifndef _sdiv_s__GUARD__
    #define _sdiv_s__GUARD__
    DECL_STRONG_TYPE(sdiv_s, float);
    #endif//_sdiv_s__GUARD__

    #ifndef _x_axis__GUARD__
    #define _x_axis__GUARD__
    DECL_STRONG_TYPE(x_axis, float);
    #endif//_x_axis__GUARD__

    #ifndef _tvol_atm__GUARD__
    #define _tvol_atm__GUARD__
    DECL_STRONG_TYPE(tvol_atm, float);
    #endif//_tvol_atm__GUARD__

    #ifndef _ivol_atm__GUARD__
    #define _ivol_atm__GUARD__
    DECL_STRONG_TYPE(ivol_atm, float);
    #endif//_ivol_atm__GUARD__

    #ifndef _svol__GUARD__
    #define _svol__GUARD__
    DECL_STRONG_TYPE(svol, float);
    #endif//_svol__GUARD__

    #ifndef _sprc__GUARD__
    #define _sprc__GUARD__
    DECL_STRONG_TYPE(sprc, float);
    #endif//_sprc__GUARD__

    #ifndef _s_de__GUARD__
    #define _s_de__GUARD__
    DECL_STRONG_TYPE(s_de, float);
    #endif//_s_de__GUARD__

    #ifndef _s_ve__GUARD__
    #define _s_ve__GUARD__
    DECL_STRONG_TYPE(s_ve, float);
    #endif//_s_ve__GUARD__

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

    #ifndef _err__GUARD__
    #define _err__GUARD__
    DECL_STRONG_TYPE(err, int32);
    #endif//_err__GUARD__

    #ifndef _theo_err__GUARD__
    #define _theo_err__GUARD__
    DECL_STRONG_TYPE(theo_err, string);
    #endif//_theo_err__GUARD__

    #ifndef _calc_err__string__GUARD__
    #define _calc_err__string__GUARD__
    DECL_STRONG_TYPE(calc_err__string, string);
    #endif//_calc_err__string__GUARD__

    #ifndef _theo_status__GUARD__
    #define _theo_status__GUARD__
    DECL_STRONG_TYPE(theo_status, spiderrock::protobuf::api::TheoStatus);
    #endif//_theo_status__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionTheoVol_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionTheoVol_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionTheoVol_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionTheoVol_PKey() {}

        virtual ~OptionTheoVol_PKey() {
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
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_okey);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_okey);
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
    

    class OptionTheoVol {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionTheoVol_PKey;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using client_firm_out = spiderrock::protobuf::api::client_firm_out;
        using years = spiderrock::protobuf::api::years__float;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using uprc = spiderrock::protobuf::api::uprc;
        using ubid = spiderrock::protobuf::api::ubid;
        using uask = spiderrock::protobuf::api::uask;
        using obid = spiderrock::protobuf::api::obid;
        using oask = spiderrock::protobuf::api::oask;
        using tvol = spiderrock::protobuf::api::tvol;
        using tvol_bopn = spiderrock::protobuf::api::tvol_bopn;
        using tvol_sopn = spiderrock::protobuf::api::tvol_sopn;
        using tprc = spiderrock::protobuf::api::tprc;
        using tb_prc = spiderrock::protobuf::api::tb_prc;
        using ts_prc = spiderrock::protobuf::api::ts_prc;
        using tb_cls_prc = spiderrock::protobuf::api::tb_cls_prc;
        using ts_cls_prc = spiderrock::protobuf::api::ts_cls_prc;
        using ve_slope = spiderrock::protobuf::api::ve_slope;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using vo = spiderrock::protobuf::api::vo;
        using va = spiderrock::protobuf::api::va;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using ro = spiderrock::protobuf::api::ro;
        using ph = spiderrock::protobuf::api::ph;
        using sdiv_b = spiderrock::protobuf::api::sdiv_b;
        using sdiv_s = spiderrock::protobuf::api::sdiv_s;
        using x_axis = spiderrock::protobuf::api::x_axis;
        using tvol_atm = spiderrock::protobuf::api::tvol_atm;
        using ivol_atm = spiderrock::protobuf::api::ivol_atm;
        using svol = spiderrock::protobuf::api::svol;
        using sprc = spiderrock::protobuf::api::sprc;
        using s_de = spiderrock::protobuf::api::s_de;
        using s_ve = spiderrock::protobuf::api::s_ve;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using err = spiderrock::protobuf::api::err;
        using theo_err = spiderrock::protobuf::api::theo_err;
        using calc_err = spiderrock::protobuf::api::calc_err__string;
        using theo_status = spiderrock::protobuf::api::theo_status;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        theo_model m_theo_model{};
        client_firm_out m_client_firm_out{};
        years m_years{};
        ticker m_ticker{};
        uprc m_uprc{};
        ubid m_ubid{};
        uask m_uask{};
        obid m_obid{};
        oask m_oask{};
        tvol m_tvol{};
        tvol_bopn m_tvol_bopn{};
        tvol_sopn m_tvol_sopn{};
        tprc m_tprc{};
        tb_prc m_tb_prc{};
        ts_prc m_ts_prc{};
        tb_cls_prc m_tb_cls_prc{};
        ts_cls_prc m_ts_cls_prc{};
        ve_slope m_ve_slope{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        vo m_vo{};
        va m_va{};
        de_decay m_de_decay{};
        ro m_ro{};
        ph m_ph{};
        sdiv_b m_sdiv_b{};
        sdiv_s m_sdiv_s{};
        x_axis m_x_axis{};
        tvol_atm m_tvol_atm{};
        ivol_atm m_ivol_atm{};
        svol m_svol{};
        sprc m_sprc{};
        s_de m_s_de{};
        s_ve m_s_ve{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        err m_err{};
        theo_err m_theo_err{};
        calc_err m_calc_err{};
        theo_status m_theo_status{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        theo_model get_theo_model() const {
            return m_theo_model;
        }		
        client_firm_out get_client_firm_out() const {
            return m_client_firm_out;
        }		
        years get_years() const {
            return m_years;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        uprc get_uprc() const {
            return m_uprc;
        }		
        ubid get_ubid() const {
            return m_ubid;
        }		
        uask get_uask() const {
            return m_uask;
        }		
        obid get_obid() const {
            return m_obid;
        }		
        oask get_oask() const {
            return m_oask;
        }		
        tvol get_tvol() const {
            return m_tvol;
        }		
        tvol_bopn get_tvol_bopn() const {
            return m_tvol_bopn;
        }		
        tvol_sopn get_tvol_sopn() const {
            return m_tvol_sopn;
        }		
        tprc get_tprc() const {
            return m_tprc;
        }		
        tb_prc get_tb_prc() const {
            return m_tb_prc;
        }		
        ts_prc get_ts_prc() const {
            return m_ts_prc;
        }		
        tb_cls_prc get_tb_cls_prc() const {
            return m_tb_cls_prc;
        }		
        ts_cls_prc get_ts_cls_prc() const {
            return m_ts_cls_prc;
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
        vo get_vo() const {
            return m_vo;
        }		
        va get_va() const {
            return m_va;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        ro get_ro() const {
            return m_ro;
        }		
        ph get_ph() const {
            return m_ph;
        }		
        sdiv_b get_sdiv_b() const {
            return m_sdiv_b;
        }		
        sdiv_s get_sdiv_s() const {
            return m_sdiv_s;
        }		
        x_axis get_x_axis() const {
            return m_x_axis;
        }		
        tvol_atm get_tvol_atm() const {
            return m_tvol_atm;
        }		
        ivol_atm get_ivol_atm() const {
            return m_ivol_atm;
        }		
        svol get_svol() const {
            return m_svol;
        }		
        sprc get_sprc() const {
            return m_sprc;
        }		
        s_de get_s_de() const {
            return m_s_de;
        }		
        s_ve get_s_ve() const {
            return m_s_ve;
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
        err get_err() const {
            return m_err;
        }		
        theo_err get_theo_err() const {
            return m_theo_err;
        }		
        calc_err get_calc_err() const {
            return m_calc_err;
        }		
        theo_status get_theo_status() const {
            return m_theo_status;
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
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_client_firm_out(const client_firm_out& value)  {
            m_client_firm_out = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_uprc(const uprc& value)  {
            m_uprc = value;
        }
        void set_ubid(const ubid& value)  {
            m_ubid = value;
        }
        void set_uask(const uask& value)  {
            m_uask = value;
        }
        void set_obid(const obid& value)  {
            m_obid = value;
        }
        void set_oask(const oask& value)  {
            m_oask = value;
        }
        void set_tvol(const tvol& value)  {
            m_tvol = value;
        }
        void set_tvol_bopn(const tvol_bopn& value)  {
            m_tvol_bopn = value;
        }
        void set_tvol_sopn(const tvol_sopn& value)  {
            m_tvol_sopn = value;
        }
        void set_tprc(const tprc& value)  {
            m_tprc = value;
        }
        void set_tb_prc(const tb_prc& value)  {
            m_tb_prc = value;
        }
        void set_ts_prc(const ts_prc& value)  {
            m_ts_prc = value;
        }
        void set_tb_cls_prc(const tb_cls_prc& value)  {
            m_tb_cls_prc = value;
        }
        void set_ts_cls_prc(const ts_cls_prc& value)  {
            m_ts_cls_prc = value;
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
        void set_vo(const vo& value)  {
            m_vo = value;
        }
        void set_va(const va& value)  {
            m_va = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_ro(const ro& value)  {
            m_ro = value;
        }
        void set_ph(const ph& value)  {
            m_ph = value;
        }
        void set_sdiv_b(const sdiv_b& value)  {
            m_sdiv_b = value;
        }
        void set_sdiv_s(const sdiv_s& value)  {
            m_sdiv_s = value;
        }
        void set_x_axis(const x_axis& value)  {
            m_x_axis = value;
        }
        void set_tvol_atm(const tvol_atm& value)  {
            m_tvol_atm = value;
        }
        void set_ivol_atm(const ivol_atm& value)  {
            m_ivol_atm = value;
        }
        void set_svol(const svol& value)  {
            m_svol = value;
        }
        void set_sprc(const sprc& value)  {
            m_sprc = value;
        }
        void set_s_de(const s_de& value)  {
            m_s_de = value;
        }
        void set_s_ve(const s_ve& value)  {
            m_s_ve = value;
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
        void set_err(const err& value)  {
            m_err = value;
        }
        void set_theo_err(const theo_err& value)  {
            m_theo_err = value;
        }
        void set_calc_err(const calc_err& value)  {
            m_calc_err = value;
        }
        void set_theo_status(const theo_status& value)  {
            m_theo_status = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionTheoVol::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const theo_model & value) {
            set_theo_model(value);
        }
        void set(const client_firm_out & value) {
            set_client_firm_out(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const uprc & value) {
            set_uprc(value);
        }
        void set(const ubid & value) {
            set_ubid(value);
        }
        void set(const uask & value) {
            set_uask(value);
        }
        void set(const obid & value) {
            set_obid(value);
        }
        void set(const oask & value) {
            set_oask(value);
        }
        void set(const tvol & value) {
            set_tvol(value);
        }
        void set(const tvol_bopn & value) {
            set_tvol_bopn(value);
        }
        void set(const tvol_sopn & value) {
            set_tvol_sopn(value);
        }
        void set(const tprc & value) {
            set_tprc(value);
        }
        void set(const tb_prc & value) {
            set_tb_prc(value);
        }
        void set(const ts_prc & value) {
            set_ts_prc(value);
        }
        void set(const tb_cls_prc & value) {
            set_tb_cls_prc(value);
        }
        void set(const ts_cls_prc & value) {
            set_ts_cls_prc(value);
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
        void set(const vo & value) {
            set_vo(value);
        }
        void set(const va & value) {
            set_va(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const ro & value) {
            set_ro(value);
        }
        void set(const ph & value) {
            set_ph(value);
        }
        void set(const sdiv_b & value) {
            set_sdiv_b(value);
        }
        void set(const sdiv_s & value) {
            set_sdiv_s(value);
        }
        void set(const x_axis & value) {
            set_x_axis(value);
        }
        void set(const tvol_atm & value) {
            set_tvol_atm(value);
        }
        void set(const ivol_atm & value) {
            set_ivol_atm(value);
        }
        void set(const svol & value) {
            set_svol(value);
        }
        void set(const sprc & value) {
            set_sprc(value);
        }
        void set(const s_de & value) {
            set_s_de(value);
        }
        void set(const s_ve & value) {
            set_s_ve(value);
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
        void set(const err & value) {
            set_err(value);
        }
        void set(const theo_err & value) {
            set_theo_err(value);
        }
        void set(const calc_err & value) {
            set_calc_err(value);
        }
        void set(const theo_status & value) {
            set_theo_status(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionTheoVol & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_theo_model);
            set(value.m_client_firm_out);
            set(value.m_years);
            set(value.m_ticker);
            set(value.m_uprc);
            set(value.m_ubid);
            set(value.m_uask);
            set(value.m_obid);
            set(value.m_oask);
            set(value.m_tvol);
            set(value.m_tvol_bopn);
            set(value.m_tvol_sopn);
            set(value.m_tprc);
            set(value.m_tb_prc);
            set(value.m_ts_prc);
            set(value.m_tb_cls_prc);
            set(value.m_ts_cls_prc);
            set(value.m_ve_slope);
            set(value.m_de);
            set(value.m_ga);
            set(value.m_th);
            set(value.m_ve);
            set(value.m_vo);
            set(value.m_va);
            set(value.m_de_decay);
            set(value.m_ro);
            set(value.m_ph);
            set(value.m_sdiv_b);
            set(value.m_sdiv_s);
            set(value.m_x_axis);
            set(value.m_tvol_atm);
            set(value.m_ivol_atm);
            set(value.m_svol);
            set(value.m_sprc);
            set(value.m_s_de);
            set(value.m_s_ve);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_err);
            set(value.m_theo_err);
            set(value.m_calc_err);
            set(value.m_theo_status);
            set(value.m_timestamp);
        }

        OptionTheoVol() {
            m__meta.set_message_type("OptionTheoVol");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 5055, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 5055, length);
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
             *this = OptionTheoVol{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeClientFirmOut() const {
            return !(m_client_firm_out.empty());
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeUprc() const {
            return !(m_uprc == 0.0);
        }
        bool IncludeUbid() const {
            return !(m_ubid == 0.0);
        }
        bool IncludeUask() const {
            return !(m_uask == 0.0);
        }
        bool IncludeObid() const {
            return !(m_obid == 0.0);
        }
        bool IncludeOask() const {
            return !(m_oask == 0.0);
        }
        bool IncludeTvol() const {
            return !(m_tvol == 0.0);
        }
        bool IncludeTvolBopn() const {
            return !(m_tvol_bopn == 0.0);
        }
        bool IncludeTvolSopn() const {
            return !(m_tvol_sopn == 0.0);
        }
        bool IncludeTprc() const {
            return !(m_tprc == 0.0);
        }
        bool IncludeTbPrc() const {
            return !(m_tb_prc == 0.0);
        }
        bool IncludeTsPrc() const {
            return !(m_ts_prc == 0.0);
        }
        bool IncludeTbClsPrc() const {
            return !(m_tb_cls_prc == 0.0);
        }
        bool IncludeTsClsPrc() const {
            return !(m_ts_cls_prc == 0.0);
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
        bool IncludeVo() const {
            return !(m_vo == 0.0);
        }
        bool IncludeVa() const {
            return !(m_va == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeRo() const {
            return !(m_ro == 0.0);
        }
        bool IncludePh() const {
            return !(m_ph == 0.0);
        }
        bool IncludeSdivB() const {
            return !(m_sdiv_b == 0.0);
        }
        bool IncludeSdivS() const {
            return !(m_sdiv_s == 0.0);
        }
        bool IncludeXAxis() const {
            return !(m_x_axis == 0.0);
        }
        bool IncludeTvolAtm() const {
            return !(m_tvol_atm == 0.0);
        }
        bool IncludeIvolAtm() const {
            return !(m_ivol_atm == 0.0);
        }
        bool IncludeSvol() const {
            return !(m_svol == 0.0);
        }
        bool IncludeSprc() const {
            return !(m_sprc == 0.0);
        }
        bool IncludeSDe() const {
            return !(m_s_de == 0.0);
        }
        bool IncludeSVe() const {
            return !(m_s_ve == 0.0);
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
        bool IncludeErr() const {
            return !(m_err == 0);
        }
        bool IncludeTheoErr() const {
            return !(m_theo_err.empty());
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
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_theo_model);
            }
            if ( IncludeClientFirmOut()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_client_firm_out);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_years);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(109, tickerKeyLayout_ticker);
            }
            if ( IncludeUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_uprc);
            }
            if ( IncludeUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ubid);
            }
            if ( IncludeUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_uask);
            }
            if ( IncludeObid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_obid);
            }
            if ( IncludeOask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_oask);
            }
            if ( IncludeTvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_tvol);
            }
            if ( IncludeTvolBopn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_tvol_bopn);
            }
            if ( IncludeTvolSopn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_tvol_sopn);
            }
            if ( IncludeTprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_tprc);
            }
            if ( IncludeTbPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_tb_prc);
            }
            if ( IncludeTsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_ts_prc);
            }
            if ( IncludeTbClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_tb_cls_prc);
            }
            if ( IncludeTsClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_ts_cls_prc);
            }
            if ( IncludeVeSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_ve_slope);
            }
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_de);
            }
            if ( IncludeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ga);
            }
            if ( IncludeTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_th);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_ve);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_vo);
            }
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_va);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_de_decay);
            }
            if ( IncludeRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_ro);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_ph);
            }
            if ( IncludeSdivB()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_sdiv_b);
            }
            if ( IncludeSdivS()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_sdiv_s);
            }
            if ( IncludeXAxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_x_axis);
            }
            if ( IncludeTvolAtm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_tvol_atm);
            }
            if ( IncludeIvolAtm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_ivol_atm);
            }
            if ( IncludeSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_svol);
            }
            if ( IncludeSprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_sprc);
            }
            if ( IncludeSDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_s_de);
            }
            if ( IncludeSVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_s_ve);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_ddiv);
            }
            if ( IncludeErr()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_err);
            }
            if ( IncludeTheoErr()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(220,m_theo_err);
            }
            if ( IncludeCalcErr()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_calc_err);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>(m_theo_status)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(229, m_timestamp);
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
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_theo_model));
            }
            if ( IncludeClientFirmOut()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_client_firm_out));
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_years);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 109, tickerKeyLayout_ticker);
            }
            if ( IncludeUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_uprc);
            }
            if ( IncludeUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ubid);
            }
            if ( IncludeUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_uask);
            }
            if ( IncludeObid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_obid);
            }
            if ( IncludeOask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_oask);
            }
            if ( IncludeTvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_tvol);
            }
            if ( IncludeTvolBopn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_tvol_bopn);
            }
            if ( IncludeTvolSopn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_tvol_sopn);
            }
            if ( IncludeTprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_tprc);
            }
            if ( IncludeTbPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_tb_prc);
            }
            if ( IncludeTsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_ts_prc);
            }
            if ( IncludeTbClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_tb_cls_prc);
            }
            if ( IncludeTsClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_ts_cls_prc);
            }
            if ( IncludeVeSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_ve_slope);
            }
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_de);
            }
            if ( IncludeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ga);
            }
            if ( IncludeTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_th);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_ve);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_vo);
            }
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_va);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_de_decay);
            }
            if ( IncludeRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_ro);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_ph);
            }
            if ( IncludeSdivB()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_sdiv_b);
            }
            if ( IncludeSdivS()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_sdiv_s);
            }
            if ( IncludeXAxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_x_axis);
            }
            if ( IncludeTvolAtm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_tvol_atm);
            }
            if ( IncludeIvolAtm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_ivol_atm);
            }
            if ( IncludeSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_svol);
            }
            if ( IncludeSprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_sprc);
            }
            if ( IncludeSDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_s_de);
            }
            if ( IncludeSVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_s_ve);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_ddiv);
            }
            if ( IncludeErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_err);
            }
            if ( IncludeTheoErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,220,static_cast<string>(m_theo_err));
            }
            if ( IncludeCalcErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_calc_err));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>(m_theo_status)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 229, m_timestamp);
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
                            m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm_out = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_obid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_oask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tvol_bopn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tvol_sopn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tb_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ts_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tb_cls_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ts_cls_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_b = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_s = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_axis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tvol_atm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_atm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_err = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_theo_err = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_calc_err = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 226: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_theo_status = static_cast<spiderrock::protobuf::api::TheoStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {
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

    template<> inline const auto OptionTheoVol::get<OptionTheoVol::_meta>() const { return OptionTheoVol::_meta{ m__meta}; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::pkey>() const { return OptionTheoVol::pkey{ m_pkey}; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::theo_model>() const { return m_theo_model; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::client_firm_out>() const { return m_client_firm_out; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::years>() const { return m_years; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ticker>() const { return OptionTheoVol::ticker{ m_ticker}; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::uprc>() const { return m_uprc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ubid>() const { return m_ubid; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::uask>() const { return m_uask; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::obid>() const { return m_obid; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::oask>() const { return m_oask; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tvol>() const { return m_tvol; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tvol_bopn>() const { return m_tvol_bopn; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tvol_sopn>() const { return m_tvol_sopn; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tprc>() const { return m_tprc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tb_prc>() const { return m_tb_prc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ts_prc>() const { return m_ts_prc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tb_cls_prc>() const { return m_tb_cls_prc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ts_cls_prc>() const { return m_ts_cls_prc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ve_slope>() const { return m_ve_slope; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::de>() const { return m_de; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ga>() const { return m_ga; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::th>() const { return m_th; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ve>() const { return m_ve; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::vo>() const { return m_vo; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::va>() const { return m_va; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::de_decay>() const { return m_de_decay; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ro>() const { return m_ro; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ph>() const { return m_ph; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::sdiv_b>() const { return m_sdiv_b; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::sdiv_s>() const { return m_sdiv_s; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::x_axis>() const { return m_x_axis; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::tvol_atm>() const { return m_tvol_atm; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ivol_atm>() const { return m_ivol_atm; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::svol>() const { return m_svol; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::sprc>() const { return m_sprc; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::s_de>() const { return m_s_de; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::s_ve>() const { return m_s_ve; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::rate>() const { return m_rate; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::err>() const { return m_err; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::theo_err>() const { return m_theo_err; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::calc_err>() const { return m_calc_err; }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::theo_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>( m_theo_status)); }
    template<> inline const auto OptionTheoVol::get<OptionTheoVol::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionTheoVol_PKey::get<OptionTheoVol_PKey::okey>() const { return OptionTheoVol_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionTheoVol_PKey& m) {
        o << "\"okey\":{" << m.get<OptionTheoVol_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionTheoVol& m) {
        o << "\"_meta\":{" << m.get<OptionTheoVol::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionTheoVol::pkey>() << "}";
        o << ",\"theo_model\":\"" << m.get<OptionTheoVol::theo_model>() << "\"";
        o << ",\"client_firm_out\":\"" << m.get<OptionTheoVol::client_firm_out>() << "\"";
        o << ",\"years\":" << m.get<OptionTheoVol::years>();
        o << ",\"ticker\":{" << m.get<OptionTheoVol::ticker>() << "}";
        o << ",\"uprc\":" << m.get<OptionTheoVol::uprc>();
        o << ",\"ubid\":" << m.get<OptionTheoVol::ubid>();
        o << ",\"uask\":" << m.get<OptionTheoVol::uask>();
        o << ",\"obid\":" << m.get<OptionTheoVol::obid>();
        o << ",\"oask\":" << m.get<OptionTheoVol::oask>();
        o << ",\"tvol\":" << m.get<OptionTheoVol::tvol>();
        o << ",\"tvol_bopn\":" << m.get<OptionTheoVol::tvol_bopn>();
        o << ",\"tvol_sopn\":" << m.get<OptionTheoVol::tvol_sopn>();
        o << ",\"tprc\":" << m.get<OptionTheoVol::tprc>();
        o << ",\"tb_prc\":" << m.get<OptionTheoVol::tb_prc>();
        o << ",\"ts_prc\":" << m.get<OptionTheoVol::ts_prc>();
        o << ",\"tb_cls_prc\":" << m.get<OptionTheoVol::tb_cls_prc>();
        o << ",\"ts_cls_prc\":" << m.get<OptionTheoVol::ts_cls_prc>();
        o << ",\"ve_slope\":" << m.get<OptionTheoVol::ve_slope>();
        o << ",\"de\":" << m.get<OptionTheoVol::de>();
        o << ",\"ga\":" << m.get<OptionTheoVol::ga>();
        o << ",\"th\":" << m.get<OptionTheoVol::th>();
        o << ",\"ve\":" << m.get<OptionTheoVol::ve>();
        o << ",\"vo\":" << m.get<OptionTheoVol::vo>();
        o << ",\"va\":" << m.get<OptionTheoVol::va>();
        o << ",\"de_decay\":" << m.get<OptionTheoVol::de_decay>();
        o << ",\"ro\":" << m.get<OptionTheoVol::ro>();
        o << ",\"ph\":" << m.get<OptionTheoVol::ph>();
        o << ",\"sdiv_b\":" << m.get<OptionTheoVol::sdiv_b>();
        o << ",\"sdiv_s\":" << m.get<OptionTheoVol::sdiv_s>();
        o << ",\"x_axis\":" << m.get<OptionTheoVol::x_axis>();
        o << ",\"tvol_atm\":" << m.get<OptionTheoVol::tvol_atm>();
        o << ",\"ivol_atm\":" << m.get<OptionTheoVol::ivol_atm>();
        o << ",\"svol\":" << m.get<OptionTheoVol::svol>();
        o << ",\"sprc\":" << m.get<OptionTheoVol::sprc>();
        o << ",\"s_de\":" << m.get<OptionTheoVol::s_de>();
        o << ",\"s_ve\":" << m.get<OptionTheoVol::s_ve>();
        o << ",\"rate\":" << m.get<OptionTheoVol::rate>();
        o << ",\"sdiv\":" << m.get<OptionTheoVol::sdiv>();
        o << ",\"ddiv\":" << m.get<OptionTheoVol::ddiv>();
        o << ",\"err\":" << m.get<OptionTheoVol::err>();
        o << ",\"theo_err\":\"" << m.get<OptionTheoVol::theo_err>() << "\"";
        o << ",\"calc_err\":\"" << m.get<OptionTheoVol::calc_err>() << "\"";
        o << ",\"theo_status\":" << (int64_t)m.get<OptionTheoVol::theo_status>();
        {
            std::time_t tt = m.get<OptionTheoVol::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}