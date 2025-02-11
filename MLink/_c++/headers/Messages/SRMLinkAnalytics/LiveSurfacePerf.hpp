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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _ex_type__ExerciseType__GUARD__
    #define _ex_type__ExerciseType__GUARD__
    DECL_STRONG_TYPE(ex_type__ExerciseType, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__ExerciseType__GUARD__

    #ifndef _model_type__CalcModelType__GUARD__
    #define _model_type__CalcModelType__GUARD__
    DECL_STRONG_TYPE(model_type__CalcModelType, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__CalcModelType__GUARD__

    #ifndef _u_mark__float__GUARD__
    #define _u_mark__float__GUARD__
    DECL_STRONG_TYPE(u_mark__float, float);
    #endif//_u_mark__float__GUARD__

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

    #ifndef _event_cnt__GUARD__
    #define _event_cnt__GUARD__
    DECL_STRONG_TYPE(event_cnt, float);
    #endif//_event_cnt__GUARD__

    #ifndef _i_emove__GUARD__
    #define _i_emove__GUARD__
    DECL_STRONG_TYPE(i_emove, float);
    #endif//_i_emove__GUARD__

    #ifndef _h_emove__GUARD__
    #define _h_emove__GUARD__
    DECL_STRONG_TYPE(h_emove, float);
    #endif//_h_emove__GUARD__

    #ifndef _strike__float__GUARD__
    #define _strike__float__GUARD__
    DECL_STRONG_TYPE(strike__float, float);
    #endif//_strike__float__GUARD__

    #ifndef _c_ivol__GUARD__
    #define _c_ivol__GUARD__
    DECL_STRONG_TYPE(c_ivol, float);
    #endif//_c_ivol__GUARD__

    #ifndef _p_ivol__GUARD__
    #define _p_ivol__GUARD__
    DECL_STRONG_TYPE(p_ivol, float);
    #endif//_p_ivol__GUARD__

    #ifndef _c_sopx__GUARD__
    #define _c_sopx__GUARD__
    DECL_STRONG_TYPE(c_sopx, float);
    #endif//_c_sopx__GUARD__

    #ifndef _p_sopx__GUARD__
    #define _p_sopx__GUARD__
    DECL_STRONG_TYPE(p_sopx, float);
    #endif//_p_sopx__GUARD__

    #ifndef _c_de__GUARD__
    #define _c_de__GUARD__
    DECL_STRONG_TYPE(c_de, float);
    #endif//_c_de__GUARD__

    #ifndef _c_ga__GUARD__
    #define _c_ga__GUARD__
    DECL_STRONG_TYPE(c_ga, float);
    #endif//_c_ga__GUARD__

    #ifndef _c_th__GUARD__
    #define _c_th__GUARD__
    DECL_STRONG_TYPE(c_th, float);
    #endif//_c_th__GUARD__

    #ifndef _c_ve__GUARD__
    #define _c_ve__GUARD__
    DECL_STRONG_TYPE(c_ve, float);
    #endif//_c_ve__GUARD__

    #ifndef _c_ro__GUARD__
    #define _c_ro__GUARD__
    DECL_STRONG_TYPE(c_ro, float);
    #endif//_c_ro__GUARD__

    #ifndef _p_de__GUARD__
    #define _p_de__GUARD__
    DECL_STRONG_TYPE(p_de, float);
    #endif//_p_de__GUARD__

    #ifndef _p_ga__GUARD__
    #define _p_ga__GUARD__
    DECL_STRONG_TYPE(p_ga, float);
    #endif//_p_ga__GUARD__

    #ifndef _p_th__GUARD__
    #define _p_th__GUARD__
    DECL_STRONG_TYPE(p_th, float);
    #endif//_p_th__GUARD__

    #ifndef _p_ve__GUARD__
    #define _p_ve__GUARD__
    DECL_STRONG_TYPE(p_ve, float);
    #endif//_p_ve__GUARD__

    #ifndef _p_ro__GUARD__
    #define _p_ro__GUARD__
    DECL_STRONG_TYPE(p_ro, float);
    #endif//_p_ro__GUARD__

    #ifndef _xx_cnt__GUARD__
    #define _xx_cnt__GUARD__
    DECL_STRONG_TYPE(xx_cnt, int32);
    #endif//_xx_cnt__GUARD__

    #ifndef _pwidth__GUARD__
    #define _pwidth__GUARD__
    DECL_STRONG_TYPE(pwidth, float);
    #endif//_pwidth__GUARD__

    #ifndef _vwidth__GUARD__
    #define _vwidth__GUARD__
    DECL_STRONG_TYPE(vwidth, float);
    #endif//_vwidth__GUARD__

    #ifndef _fix_civol__GUARD__
    #define _fix_civol__GUARD__
    DECL_STRONG_TYPE(fix_civol, float);
    #endif//_fix_civol__GUARD__

    #ifndef _fix_pivol__GUARD__
    #define _fix_pivol__GUARD__
    DECL_STRONG_TYPE(fix_pivol, float);
    #endif//_fix_pivol__GUARD__

    #ifndef _fix_csopx__GUARD__
    #define _fix_csopx__GUARD__
    DECL_STRONG_TYPE(fix_csopx, float);
    #endif//_fix_csopx__GUARD__

    #ifndef _fix_psopx__GUARD__
    #define _fix_psopx__GUARD__
    DECL_STRONG_TYPE(fix_psopx, float);
    #endif//_fix_psopx__GUARD__

    #ifndef _prv_umark__GUARD__
    #define _prv_umark__GUARD__
    DECL_STRONG_TYPE(prv_umark, float);
    #endif//_prv_umark__GUARD__

    #ifndef _prv_years__GUARD__
    #define _prv_years__GUARD__
    DECL_STRONG_TYPE(prv_years, float);
    #endif//_prv_years__GUARD__

    #ifndef _prv_sdiv__GUARD__
    #define _prv_sdiv__GUARD__
    DECL_STRONG_TYPE(prv_sdiv, float);
    #endif//_prv_sdiv__GUARD__

    #ifndef _prv_rate__GUARD__
    #define _prv_rate__GUARD__
    DECL_STRONG_TYPE(prv_rate, float);
    #endif//_prv_rate__GUARD__

    #ifndef _prv_ddiv__GUARD__
    #define _prv_ddiv__GUARD__
    DECL_STRONG_TYPE(prv_ddiv, float);
    #endif//_prv_ddiv__GUARD__

    #ifndef _prv_strike__GUARD__
    #define _prv_strike__GUARD__
    DECL_STRONG_TYPE(prv_strike, float);
    #endif//_prv_strike__GUARD__

    #ifndef _prv_event_cnt__GUARD__
    #define _prv_event_cnt__GUARD__
    DECL_STRONG_TYPE(prv_event_cnt, float);
    #endif//_prv_event_cnt__GUARD__

    #ifndef _prv_iemove__GUARD__
    #define _prv_iemove__GUARD__
    DECL_STRONG_TYPE(prv_iemove, float);
    #endif//_prv_iemove__GUARD__

    #ifndef _prv_civol__GUARD__
    #define _prv_civol__GUARD__
    DECL_STRONG_TYPE(prv_civol, float);
    #endif//_prv_civol__GUARD__

    #ifndef _prv_pivol__GUARD__
    #define _prv_pivol__GUARD__
    DECL_STRONG_TYPE(prv_pivol, float);
    #endif//_prv_pivol__GUARD__

    #ifndef _prv_csopx__GUARD__
    #define _prv_csopx__GUARD__
    DECL_STRONG_TYPE(prv_csopx, float);
    #endif//_prv_csopx__GUARD__

    #ifndef _prv_psopx__GUARD__
    #define _prv_psopx__GUARD__
    DECL_STRONG_TYPE(prv_psopx, float);
    #endif//_prv_psopx__GUARD__

    #ifndef _prv_cde__GUARD__
    #define _prv_cde__GUARD__
    DECL_STRONG_TYPE(prv_cde, float);
    #endif//_prv_cde__GUARD__

    #ifndef _prv_cga__GUARD__
    #define _prv_cga__GUARD__
    DECL_STRONG_TYPE(prv_cga, float);
    #endif//_prv_cga__GUARD__

    #ifndef _prv_cth__GUARD__
    #define _prv_cth__GUARD__
    DECL_STRONG_TYPE(prv_cth, float);
    #endif//_prv_cth__GUARD__

    #ifndef _prv_cve__GUARD__
    #define _prv_cve__GUARD__
    DECL_STRONG_TYPE(prv_cve, float);
    #endif//_prv_cve__GUARD__

    #ifndef _prv_cro__GUARD__
    #define _prv_cro__GUARD__
    DECL_STRONG_TYPE(prv_cro, float);
    #endif//_prv_cro__GUARD__

    #ifndef _prv_pde__GUARD__
    #define _prv_pde__GUARD__
    DECL_STRONG_TYPE(prv_pde, float);
    #endif//_prv_pde__GUARD__

    #ifndef _prv_pga__GUARD__
    #define _prv_pga__GUARD__
    DECL_STRONG_TYPE(prv_pga, float);
    #endif//_prv_pga__GUARD__

    #ifndef _prv_pth__GUARD__
    #define _prv_pth__GUARD__
    DECL_STRONG_TYPE(prv_pth, float);
    #endif//_prv_pth__GUARD__

    #ifndef _prv_pve__GUARD__
    #define _prv_pve__GUARD__
    DECL_STRONG_TYPE(prv_pve, float);
    #endif//_prv_pve__GUARD__

    #ifndef _prv_pro__GUARD__
    #define _prv_pro__GUARD__
    DECL_STRONG_TYPE(prv_pro, float);
    #endif//_prv_pro__GUARD__

    #ifndef _prv_xxcnt__GUARD__
    #define _prv_xxcnt__GUARD__
    DECL_STRONG_TYPE(prv_xxcnt, int32);
    #endif//_prv_xxcnt__GUARD__

    #ifndef _prv_pwidth__GUARD__
    #define _prv_pwidth__GUARD__
    DECL_STRONG_TYPE(prv_pwidth, float);
    #endif//_prv_pwidth__GUARD__

    #ifndef _prv_vwidth__GUARD__
    #define _prv_vwidth__GUARD__
    DECL_STRONG_TYPE(prv_vwidth, float);
    #endif//_prv_vwidth__GUARD__

    #ifndef _c_opt_pn_l__GUARD__
    #define _c_opt_pn_l__GUARD__
    DECL_STRONG_TYPE(c_opt_pn_l, float);
    #endif//_c_opt_pn_l__GUARD__

    #ifndef _p_opt_pn_l__GUARD__
    #define _p_opt_pn_l__GUARD__
    DECL_STRONG_TYPE(p_opt_pn_l, float);
    #endif//_p_opt_pn_l__GUARD__

    #ifndef _d_uprc__GUARD__
    #define _d_uprc__GUARD__
    DECL_STRONG_TYPE(d_uprc, float);
    #endif//_d_uprc__GUARD__

    #ifndef _c_de_pn_l__GUARD__
    #define _c_de_pn_l__GUARD__
    DECL_STRONG_TYPE(c_de_pn_l, float);
    #endif//_c_de_pn_l__GUARD__

    #ifndef _c_ga_pn_l__GUARD__
    #define _c_ga_pn_l__GUARD__
    DECL_STRONG_TYPE(c_ga_pn_l, float);
    #endif//_c_ga_pn_l__GUARD__

    #ifndef _c_th_pn_l__GUARD__
    #define _c_th_pn_l__GUARD__
    DECL_STRONG_TYPE(c_th_pn_l, float);
    #endif//_c_th_pn_l__GUARD__

    #ifndef _c_ve_pn_l__GUARD__
    #define _c_ve_pn_l__GUARD__
    DECL_STRONG_TYPE(c_ve_pn_l, float);
    #endif//_c_ve_pn_l__GUARD__

    #ifndef _c_ro_pn_l__GUARD__
    #define _c_ro_pn_l__GUARD__
    DECL_STRONG_TYPE(c_ro_pn_l, float);
    #endif//_c_ro_pn_l__GUARD__

    #ifndef _p_de_pn_l__GUARD__
    #define _p_de_pn_l__GUARD__
    DECL_STRONG_TYPE(p_de_pn_l, float);
    #endif//_p_de_pn_l__GUARD__

    #ifndef _p_ga_pn_l__GUARD__
    #define _p_ga_pn_l__GUARD__
    DECL_STRONG_TYPE(p_ga_pn_l, float);
    #endif//_p_ga_pn_l__GUARD__

    #ifndef _p_th_pn_l__GUARD__
    #define _p_th_pn_l__GUARD__
    DECL_STRONG_TYPE(p_th_pn_l, float);
    #endif//_p_th_pn_l__GUARD__

    #ifndef _p_ve_pn_l__GUARD__
    #define _p_ve_pn_l__GUARD__
    DECL_STRONG_TYPE(p_ve_pn_l, float);
    #endif//_p_ve_pn_l__GUARD__

    #ifndef _p_ro_pn_l__GUARD__
    #define _p_ro_pn_l__GUARD__
    DECL_STRONG_TYPE(p_ro_pn_l, float);
    #endif//_p_ro_pn_l__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _perf_surf_type__GUARD__
    #define _perf_surf_type__GUARD__
    DECL_STRONG_TYPE(perf_surf_type, spiderrock::protobuf::api::PerfSurfaceType);
    #endif//_perf_surf_type__GUARD__

    
    class LiveSurfacePerf_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using perf_surf_type = spiderrock::protobuf::api::perf_surf_type;

        private:
        ekey m_ekey{};
        perf_surf_type m_perf_surf_type{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        perf_surf_type get_perf_surf_type() const {
            return m_perf_surf_type;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_perf_surf_type(const perf_surf_type& value)  {
            m_perf_surf_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfacePerf_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfacePerf_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const perf_surf_type & value) { set_perf_surf_type(value); }


        LiveSurfacePerf_PKey() {}

        virtual ~LiveSurfacePerf_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_ekey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PerfSurfaceType>(m_perf_surf_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_ekey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PerfSurfaceType>(m_perf_surf_type)));
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
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_perf_surf_type = static_cast<spiderrock::protobuf::api::PerfSurfaceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class LiveSurfacePerf {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveSurfacePerf_PKey;
        using date = spiderrock::protobuf::api::date__string;
        using time = spiderrock::protobuf::api::time__string;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using ex_type = spiderrock::protobuf::api::ex_type__ExerciseType;
        using model_type = spiderrock::protobuf::api::model_type__CalcModelType;
        using u_mark = spiderrock::protobuf::api::u_mark__float;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv__float;
        using event_cnt = spiderrock::protobuf::api::event_cnt;
        using i_emove = spiderrock::protobuf::api::i_emove;
        using h_emove = spiderrock::protobuf::api::h_emove;
        using strike = spiderrock::protobuf::api::strike__float;
        using c_ivol = spiderrock::protobuf::api::c_ivol;
        using p_ivol = spiderrock::protobuf::api::p_ivol;
        using c_sopx = spiderrock::protobuf::api::c_sopx;
        using p_sopx = spiderrock::protobuf::api::p_sopx;
        using c_de = spiderrock::protobuf::api::c_de;
        using c_ga = spiderrock::protobuf::api::c_ga;
        using c_th = spiderrock::protobuf::api::c_th;
        using c_ve = spiderrock::protobuf::api::c_ve;
        using c_ro = spiderrock::protobuf::api::c_ro;
        using p_de = spiderrock::protobuf::api::p_de;
        using p_ga = spiderrock::protobuf::api::p_ga;
        using p_th = spiderrock::protobuf::api::p_th;
        using p_ve = spiderrock::protobuf::api::p_ve;
        using p_ro = spiderrock::protobuf::api::p_ro;
        using xx_cnt = spiderrock::protobuf::api::xx_cnt;
        using pwidth = spiderrock::protobuf::api::pwidth;
        using vwidth = spiderrock::protobuf::api::vwidth;
        using fix_civol = spiderrock::protobuf::api::fix_civol;
        using fix_pivol = spiderrock::protobuf::api::fix_pivol;
        using fix_csopx = spiderrock::protobuf::api::fix_csopx;
        using fix_psopx = spiderrock::protobuf::api::fix_psopx;
        using prv_umark = spiderrock::protobuf::api::prv_umark;
        using prv_years = spiderrock::protobuf::api::prv_years;
        using prv_sdiv = spiderrock::protobuf::api::prv_sdiv;
        using prv_rate = spiderrock::protobuf::api::prv_rate;
        using prv_ddiv = spiderrock::protobuf::api::prv_ddiv;
        using prv_strike = spiderrock::protobuf::api::prv_strike;
        using prv_event_cnt = spiderrock::protobuf::api::prv_event_cnt;
        using prv_iemove = spiderrock::protobuf::api::prv_iemove;
        using prv_civol = spiderrock::protobuf::api::prv_civol;
        using prv_pivol = spiderrock::protobuf::api::prv_pivol;
        using prv_csopx = spiderrock::protobuf::api::prv_csopx;
        using prv_psopx = spiderrock::protobuf::api::prv_psopx;
        using prv_cde = spiderrock::protobuf::api::prv_cde;
        using prv_cga = spiderrock::protobuf::api::prv_cga;
        using prv_cth = spiderrock::protobuf::api::prv_cth;
        using prv_cve = spiderrock::protobuf::api::prv_cve;
        using prv_cro = spiderrock::protobuf::api::prv_cro;
        using prv_pde = spiderrock::protobuf::api::prv_pde;
        using prv_pga = spiderrock::protobuf::api::prv_pga;
        using prv_pth = spiderrock::protobuf::api::prv_pth;
        using prv_pve = spiderrock::protobuf::api::prv_pve;
        using prv_pro = spiderrock::protobuf::api::prv_pro;
        using prv_xxcnt = spiderrock::protobuf::api::prv_xxcnt;
        using prv_pwidth = spiderrock::protobuf::api::prv_pwidth;
        using prv_vwidth = spiderrock::protobuf::api::prv_vwidth;
        using c_opt_pn_l = spiderrock::protobuf::api::c_opt_pn_l;
        using p_opt_pn_l = spiderrock::protobuf::api::p_opt_pn_l;
        using d_uprc = spiderrock::protobuf::api::d_uprc;
        using c_de_pn_l = spiderrock::protobuf::api::c_de_pn_l;
        using c_ga_pn_l = spiderrock::protobuf::api::c_ga_pn_l;
        using c_th_pn_l = spiderrock::protobuf::api::c_th_pn_l;
        using c_ve_pn_l = spiderrock::protobuf::api::c_ve_pn_l;
        using c_ro_pn_l = spiderrock::protobuf::api::c_ro_pn_l;
        using p_de_pn_l = spiderrock::protobuf::api::p_de_pn_l;
        using p_ga_pn_l = spiderrock::protobuf::api::p_ga_pn_l;
        using p_th_pn_l = spiderrock::protobuf::api::p_th_pn_l;
        using p_ve_pn_l = spiderrock::protobuf::api::p_ve_pn_l;
        using p_ro_pn_l = spiderrock::protobuf::api::p_ro_pn_l;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        date m_date{};
        time m_time{};
        ticker m_ticker{};
        ex_type m_ex_type{};
        model_type m_model_type{};
        u_mark m_u_mark{};
        years m_years{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        event_cnt m_event_cnt{};
        i_emove m_i_emove{};
        h_emove m_h_emove{};
        strike m_strike{};
        c_ivol m_c_ivol{};
        p_ivol m_p_ivol{};
        c_sopx m_c_sopx{};
        p_sopx m_p_sopx{};
        c_de m_c_de{};
        c_ga m_c_ga{};
        c_th m_c_th{};
        c_ve m_c_ve{};
        c_ro m_c_ro{};
        p_de m_p_de{};
        p_ga m_p_ga{};
        p_th m_p_th{};
        p_ve m_p_ve{};
        p_ro m_p_ro{};
        xx_cnt m_xx_cnt{};
        pwidth m_pwidth{};
        vwidth m_vwidth{};
        fix_civol m_fix_civol{};
        fix_pivol m_fix_pivol{};
        fix_csopx m_fix_csopx{};
        fix_psopx m_fix_psopx{};
        prv_umark m_prv_umark{};
        prv_years m_prv_years{};
        prv_sdiv m_prv_sdiv{};
        prv_rate m_prv_rate{};
        prv_ddiv m_prv_ddiv{};
        prv_strike m_prv_strike{};
        prv_event_cnt m_prv_event_cnt{};
        prv_iemove m_prv_iemove{};
        prv_civol m_prv_civol{};
        prv_pivol m_prv_pivol{};
        prv_csopx m_prv_csopx{};
        prv_psopx m_prv_psopx{};
        prv_cde m_prv_cde{};
        prv_cga m_prv_cga{};
        prv_cth m_prv_cth{};
        prv_cve m_prv_cve{};
        prv_cro m_prv_cro{};
        prv_pde m_prv_pde{};
        prv_pga m_prv_pga{};
        prv_pth m_prv_pth{};
        prv_pve m_prv_pve{};
        prv_pro m_prv_pro{};
        prv_xxcnt m_prv_xxcnt{};
        prv_pwidth m_prv_pwidth{};
        prv_vwidth m_prv_vwidth{};
        c_opt_pn_l m_c_opt_pn_l{};
        p_opt_pn_l m_p_opt_pn_l{};
        d_uprc m_d_uprc{};
        c_de_pn_l m_c_de_pn_l{};
        c_ga_pn_l m_c_ga_pn_l{};
        c_th_pn_l m_c_th_pn_l{};
        c_ve_pn_l m_c_ve_pn_l{};
        c_ro_pn_l m_c_ro_pn_l{};
        p_de_pn_l m_p_de_pn_l{};
        p_ga_pn_l m_p_ga_pn_l{};
        p_th_pn_l m_p_th_pn_l{};
        p_ve_pn_l m_p_ve_pn_l{};
        p_ro_pn_l m_p_ro_pn_l{};
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
        ticker get_ticker() const {
            return m_ticker;
        }		
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        u_mark get_u_mark() const {
            return m_u_mark;
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
        event_cnt get_event_cnt() const {
            return m_event_cnt;
        }		
        i_emove get_i_emove() const {
            return m_i_emove;
        }		
        h_emove get_h_emove() const {
            return m_h_emove;
        }		
        strike get_strike() const {
            return m_strike;
        }		
        c_ivol get_c_ivol() const {
            return m_c_ivol;
        }		
        p_ivol get_p_ivol() const {
            return m_p_ivol;
        }		
        c_sopx get_c_sopx() const {
            return m_c_sopx;
        }		
        p_sopx get_p_sopx() const {
            return m_p_sopx;
        }		
        c_de get_c_de() const {
            return m_c_de;
        }		
        c_ga get_c_ga() const {
            return m_c_ga;
        }		
        c_th get_c_th() const {
            return m_c_th;
        }		
        c_ve get_c_ve() const {
            return m_c_ve;
        }		
        c_ro get_c_ro() const {
            return m_c_ro;
        }		
        p_de get_p_de() const {
            return m_p_de;
        }		
        p_ga get_p_ga() const {
            return m_p_ga;
        }		
        p_th get_p_th() const {
            return m_p_th;
        }		
        p_ve get_p_ve() const {
            return m_p_ve;
        }		
        p_ro get_p_ro() const {
            return m_p_ro;
        }		
        xx_cnt get_xx_cnt() const {
            return m_xx_cnt;
        }		
        pwidth get_pwidth() const {
            return m_pwidth;
        }		
        vwidth get_vwidth() const {
            return m_vwidth;
        }		
        fix_civol get_fix_civol() const {
            return m_fix_civol;
        }		
        fix_pivol get_fix_pivol() const {
            return m_fix_pivol;
        }		
        fix_csopx get_fix_csopx() const {
            return m_fix_csopx;
        }		
        fix_psopx get_fix_psopx() const {
            return m_fix_psopx;
        }		
        prv_umark get_prv_umark() const {
            return m_prv_umark;
        }		
        prv_years get_prv_years() const {
            return m_prv_years;
        }		
        prv_sdiv get_prv_sdiv() const {
            return m_prv_sdiv;
        }		
        prv_rate get_prv_rate() const {
            return m_prv_rate;
        }		
        prv_ddiv get_prv_ddiv() const {
            return m_prv_ddiv;
        }		
        prv_strike get_prv_strike() const {
            return m_prv_strike;
        }		
        prv_event_cnt get_prv_event_cnt() const {
            return m_prv_event_cnt;
        }		
        prv_iemove get_prv_iemove() const {
            return m_prv_iemove;
        }		
        prv_civol get_prv_civol() const {
            return m_prv_civol;
        }		
        prv_pivol get_prv_pivol() const {
            return m_prv_pivol;
        }		
        prv_csopx get_prv_csopx() const {
            return m_prv_csopx;
        }		
        prv_psopx get_prv_psopx() const {
            return m_prv_psopx;
        }		
        prv_cde get_prv_cde() const {
            return m_prv_cde;
        }		
        prv_cga get_prv_cga() const {
            return m_prv_cga;
        }		
        prv_cth get_prv_cth() const {
            return m_prv_cth;
        }		
        prv_cve get_prv_cve() const {
            return m_prv_cve;
        }		
        prv_cro get_prv_cro() const {
            return m_prv_cro;
        }		
        prv_pde get_prv_pde() const {
            return m_prv_pde;
        }		
        prv_pga get_prv_pga() const {
            return m_prv_pga;
        }		
        prv_pth get_prv_pth() const {
            return m_prv_pth;
        }		
        prv_pve get_prv_pve() const {
            return m_prv_pve;
        }		
        prv_pro get_prv_pro() const {
            return m_prv_pro;
        }		
        prv_xxcnt get_prv_xxcnt() const {
            return m_prv_xxcnt;
        }		
        prv_pwidth get_prv_pwidth() const {
            return m_prv_pwidth;
        }		
        prv_vwidth get_prv_vwidth() const {
            return m_prv_vwidth;
        }		
        c_opt_pn_l get_c_opt_pn_l() const {
            return m_c_opt_pn_l;
        }		
        p_opt_pn_l get_p_opt_pn_l() const {
            return m_p_opt_pn_l;
        }		
        d_uprc get_d_uprc() const {
            return m_d_uprc;
        }		
        c_de_pn_l get_c_de_pn_l() const {
            return m_c_de_pn_l;
        }		
        c_ga_pn_l get_c_ga_pn_l() const {
            return m_c_ga_pn_l;
        }		
        c_th_pn_l get_c_th_pn_l() const {
            return m_c_th_pn_l;
        }		
        c_ve_pn_l get_c_ve_pn_l() const {
            return m_c_ve_pn_l;
        }		
        c_ro_pn_l get_c_ro_pn_l() const {
            return m_c_ro_pn_l;
        }		
        p_de_pn_l get_p_de_pn_l() const {
            return m_p_de_pn_l;
        }		
        p_ga_pn_l get_p_ga_pn_l() const {
            return m_p_ga_pn_l;
        }		
        p_th_pn_l get_p_th_pn_l() const {
            return m_p_th_pn_l;
        }		
        p_ve_pn_l get_p_ve_pn_l() const {
            return m_p_ve_pn_l;
        }		
        p_ro_pn_l get_p_ro_pn_l() const {
            return m_p_ro_pn_l;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_u_mark(const u_mark& value)  {
            m_u_mark = value;
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
        void set_event_cnt(const event_cnt& value)  {
            m_event_cnt = value;
        }
        void set_i_emove(const i_emove& value)  {
            m_i_emove = value;
        }
        void set_h_emove(const h_emove& value)  {
            m_h_emove = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
        }
        void set_c_ivol(const c_ivol& value)  {
            m_c_ivol = value;
        }
        void set_p_ivol(const p_ivol& value)  {
            m_p_ivol = value;
        }
        void set_c_sopx(const c_sopx& value)  {
            m_c_sopx = value;
        }
        void set_p_sopx(const p_sopx& value)  {
            m_p_sopx = value;
        }
        void set_c_de(const c_de& value)  {
            m_c_de = value;
        }
        void set_c_ga(const c_ga& value)  {
            m_c_ga = value;
        }
        void set_c_th(const c_th& value)  {
            m_c_th = value;
        }
        void set_c_ve(const c_ve& value)  {
            m_c_ve = value;
        }
        void set_c_ro(const c_ro& value)  {
            m_c_ro = value;
        }
        void set_p_de(const p_de& value)  {
            m_p_de = value;
        }
        void set_p_ga(const p_ga& value)  {
            m_p_ga = value;
        }
        void set_p_th(const p_th& value)  {
            m_p_th = value;
        }
        void set_p_ve(const p_ve& value)  {
            m_p_ve = value;
        }
        void set_p_ro(const p_ro& value)  {
            m_p_ro = value;
        }
        void set_xx_cnt(const xx_cnt& value)  {
            m_xx_cnt = value;
        }
        void set_pwidth(const pwidth& value)  {
            m_pwidth = value;
        }
        void set_vwidth(const vwidth& value)  {
            m_vwidth = value;
        }
        void set_fix_civol(const fix_civol& value)  {
            m_fix_civol = value;
        }
        void set_fix_pivol(const fix_pivol& value)  {
            m_fix_pivol = value;
        }
        void set_fix_csopx(const fix_csopx& value)  {
            m_fix_csopx = value;
        }
        void set_fix_psopx(const fix_psopx& value)  {
            m_fix_psopx = value;
        }
        void set_prv_umark(const prv_umark& value)  {
            m_prv_umark = value;
        }
        void set_prv_years(const prv_years& value)  {
            m_prv_years = value;
        }
        void set_prv_sdiv(const prv_sdiv& value)  {
            m_prv_sdiv = value;
        }
        void set_prv_rate(const prv_rate& value)  {
            m_prv_rate = value;
        }
        void set_prv_ddiv(const prv_ddiv& value)  {
            m_prv_ddiv = value;
        }
        void set_prv_strike(const prv_strike& value)  {
            m_prv_strike = value;
        }
        void set_prv_event_cnt(const prv_event_cnt& value)  {
            m_prv_event_cnt = value;
        }
        void set_prv_iemove(const prv_iemove& value)  {
            m_prv_iemove = value;
        }
        void set_prv_civol(const prv_civol& value)  {
            m_prv_civol = value;
        }
        void set_prv_pivol(const prv_pivol& value)  {
            m_prv_pivol = value;
        }
        void set_prv_csopx(const prv_csopx& value)  {
            m_prv_csopx = value;
        }
        void set_prv_psopx(const prv_psopx& value)  {
            m_prv_psopx = value;
        }
        void set_prv_cde(const prv_cde& value)  {
            m_prv_cde = value;
        }
        void set_prv_cga(const prv_cga& value)  {
            m_prv_cga = value;
        }
        void set_prv_cth(const prv_cth& value)  {
            m_prv_cth = value;
        }
        void set_prv_cve(const prv_cve& value)  {
            m_prv_cve = value;
        }
        void set_prv_cro(const prv_cro& value)  {
            m_prv_cro = value;
        }
        void set_prv_pde(const prv_pde& value)  {
            m_prv_pde = value;
        }
        void set_prv_pga(const prv_pga& value)  {
            m_prv_pga = value;
        }
        void set_prv_pth(const prv_pth& value)  {
            m_prv_pth = value;
        }
        void set_prv_pve(const prv_pve& value)  {
            m_prv_pve = value;
        }
        void set_prv_pro(const prv_pro& value)  {
            m_prv_pro = value;
        }
        void set_prv_xxcnt(const prv_xxcnt& value)  {
            m_prv_xxcnt = value;
        }
        void set_prv_pwidth(const prv_pwidth& value)  {
            m_prv_pwidth = value;
        }
        void set_prv_vwidth(const prv_vwidth& value)  {
            m_prv_vwidth = value;
        }
        void set_c_opt_pn_l(const c_opt_pn_l& value)  {
            m_c_opt_pn_l = value;
        }
        void set_p_opt_pn_l(const p_opt_pn_l& value)  {
            m_p_opt_pn_l = value;
        }
        void set_d_uprc(const d_uprc& value)  {
            m_d_uprc = value;
        }
        void set_c_de_pn_l(const c_de_pn_l& value)  {
            m_c_de_pn_l = value;
        }
        void set_c_ga_pn_l(const c_ga_pn_l& value)  {
            m_c_ga_pn_l = value;
        }
        void set_c_th_pn_l(const c_th_pn_l& value)  {
            m_c_th_pn_l = value;
        }
        void set_c_ve_pn_l(const c_ve_pn_l& value)  {
            m_c_ve_pn_l = value;
        }
        void set_c_ro_pn_l(const c_ro_pn_l& value)  {
            m_c_ro_pn_l = value;
        }
        void set_p_de_pn_l(const p_de_pn_l& value)  {
            m_p_de_pn_l = value;
        }
        void set_p_ga_pn_l(const p_ga_pn_l& value)  {
            m_p_ga_pn_l = value;
        }
        void set_p_th_pn_l(const p_th_pn_l& value)  {
            m_p_th_pn_l = value;
        }
        void set_p_ve_pn_l(const p_ve_pn_l& value)  {
            m_p_ve_pn_l = value;
        }
        void set_p_ro_pn_l(const p_ro_pn_l& value)  {
            m_p_ro_pn_l = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveSurfacePerf::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const u_mark & value) {
            set_u_mark(value);
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
        void set(const event_cnt & value) {
            set_event_cnt(value);
        }
        void set(const i_emove & value) {
            set_i_emove(value);
        }
        void set(const h_emove & value) {
            set_h_emove(value);
        }
        void set(const strike & value) {
            set_strike(value);
        }
        void set(const c_ivol & value) {
            set_c_ivol(value);
        }
        void set(const p_ivol & value) {
            set_p_ivol(value);
        }
        void set(const c_sopx & value) {
            set_c_sopx(value);
        }
        void set(const p_sopx & value) {
            set_p_sopx(value);
        }
        void set(const c_de & value) {
            set_c_de(value);
        }
        void set(const c_ga & value) {
            set_c_ga(value);
        }
        void set(const c_th & value) {
            set_c_th(value);
        }
        void set(const c_ve & value) {
            set_c_ve(value);
        }
        void set(const c_ro & value) {
            set_c_ro(value);
        }
        void set(const p_de & value) {
            set_p_de(value);
        }
        void set(const p_ga & value) {
            set_p_ga(value);
        }
        void set(const p_th & value) {
            set_p_th(value);
        }
        void set(const p_ve & value) {
            set_p_ve(value);
        }
        void set(const p_ro & value) {
            set_p_ro(value);
        }
        void set(const xx_cnt & value) {
            set_xx_cnt(value);
        }
        void set(const pwidth & value) {
            set_pwidth(value);
        }
        void set(const vwidth & value) {
            set_vwidth(value);
        }
        void set(const fix_civol & value) {
            set_fix_civol(value);
        }
        void set(const fix_pivol & value) {
            set_fix_pivol(value);
        }
        void set(const fix_csopx & value) {
            set_fix_csopx(value);
        }
        void set(const fix_psopx & value) {
            set_fix_psopx(value);
        }
        void set(const prv_umark & value) {
            set_prv_umark(value);
        }
        void set(const prv_years & value) {
            set_prv_years(value);
        }
        void set(const prv_sdiv & value) {
            set_prv_sdiv(value);
        }
        void set(const prv_rate & value) {
            set_prv_rate(value);
        }
        void set(const prv_ddiv & value) {
            set_prv_ddiv(value);
        }
        void set(const prv_strike & value) {
            set_prv_strike(value);
        }
        void set(const prv_event_cnt & value) {
            set_prv_event_cnt(value);
        }
        void set(const prv_iemove & value) {
            set_prv_iemove(value);
        }
        void set(const prv_civol & value) {
            set_prv_civol(value);
        }
        void set(const prv_pivol & value) {
            set_prv_pivol(value);
        }
        void set(const prv_csopx & value) {
            set_prv_csopx(value);
        }
        void set(const prv_psopx & value) {
            set_prv_psopx(value);
        }
        void set(const prv_cde & value) {
            set_prv_cde(value);
        }
        void set(const prv_cga & value) {
            set_prv_cga(value);
        }
        void set(const prv_cth & value) {
            set_prv_cth(value);
        }
        void set(const prv_cve & value) {
            set_prv_cve(value);
        }
        void set(const prv_cro & value) {
            set_prv_cro(value);
        }
        void set(const prv_pde & value) {
            set_prv_pde(value);
        }
        void set(const prv_pga & value) {
            set_prv_pga(value);
        }
        void set(const prv_pth & value) {
            set_prv_pth(value);
        }
        void set(const prv_pve & value) {
            set_prv_pve(value);
        }
        void set(const prv_pro & value) {
            set_prv_pro(value);
        }
        void set(const prv_xxcnt & value) {
            set_prv_xxcnt(value);
        }
        void set(const prv_pwidth & value) {
            set_prv_pwidth(value);
        }
        void set(const prv_vwidth & value) {
            set_prv_vwidth(value);
        }
        void set(const c_opt_pn_l & value) {
            set_c_opt_pn_l(value);
        }
        void set(const p_opt_pn_l & value) {
            set_p_opt_pn_l(value);
        }
        void set(const d_uprc & value) {
            set_d_uprc(value);
        }
        void set(const c_de_pn_l & value) {
            set_c_de_pn_l(value);
        }
        void set(const c_ga_pn_l & value) {
            set_c_ga_pn_l(value);
        }
        void set(const c_th_pn_l & value) {
            set_c_th_pn_l(value);
        }
        void set(const c_ve_pn_l & value) {
            set_c_ve_pn_l(value);
        }
        void set(const c_ro_pn_l & value) {
            set_c_ro_pn_l(value);
        }
        void set(const p_de_pn_l & value) {
            set_p_de_pn_l(value);
        }
        void set(const p_ga_pn_l & value) {
            set_p_ga_pn_l(value);
        }
        void set(const p_th_pn_l & value) {
            set_p_th_pn_l(value);
        }
        void set(const p_ve_pn_l & value) {
            set_p_ve_pn_l(value);
        }
        void set(const p_ro_pn_l & value) {
            set_p_ro_pn_l(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveSurfacePerf & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_date);
            set(value.m_time);
            set(value.m_ticker);
            set(value.m_ex_type);
            set(value.m_model_type);
            set(value.m_u_mark);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_event_cnt);
            set(value.m_i_emove);
            set(value.m_h_emove);
            set(value.m_strike);
            set(value.m_c_ivol);
            set(value.m_p_ivol);
            set(value.m_c_sopx);
            set(value.m_p_sopx);
            set(value.m_c_de);
            set(value.m_c_ga);
            set(value.m_c_th);
            set(value.m_c_ve);
            set(value.m_c_ro);
            set(value.m_p_de);
            set(value.m_p_ga);
            set(value.m_p_th);
            set(value.m_p_ve);
            set(value.m_p_ro);
            set(value.m_xx_cnt);
            set(value.m_pwidth);
            set(value.m_vwidth);
            set(value.m_fix_civol);
            set(value.m_fix_pivol);
            set(value.m_fix_csopx);
            set(value.m_fix_psopx);
            set(value.m_prv_umark);
            set(value.m_prv_years);
            set(value.m_prv_sdiv);
            set(value.m_prv_rate);
            set(value.m_prv_ddiv);
            set(value.m_prv_strike);
            set(value.m_prv_event_cnt);
            set(value.m_prv_iemove);
            set(value.m_prv_civol);
            set(value.m_prv_pivol);
            set(value.m_prv_csopx);
            set(value.m_prv_psopx);
            set(value.m_prv_cde);
            set(value.m_prv_cga);
            set(value.m_prv_cth);
            set(value.m_prv_cve);
            set(value.m_prv_cro);
            set(value.m_prv_pde);
            set(value.m_prv_pga);
            set(value.m_prv_pth);
            set(value.m_prv_pve);
            set(value.m_prv_pro);
            set(value.m_prv_xxcnt);
            set(value.m_prv_pwidth);
            set(value.m_prv_vwidth);
            set(value.m_c_opt_pn_l);
            set(value.m_p_opt_pn_l);
            set(value.m_d_uprc);
            set(value.m_c_de_pn_l);
            set(value.m_c_ga_pn_l);
            set(value.m_c_th_pn_l);
            set(value.m_c_ve_pn_l);
            set(value.m_c_ro_pn_l);
            set(value.m_p_de_pn_l);
            set(value.m_p_ga_pn_l);
            set(value.m_p_th_pn_l);
            set(value.m_p_ve_pn_l);
            set(value.m_p_ro_pn_l);
            set(value.m_timestamp);
        }

        LiveSurfacePerf() {
            m__meta.set_message_type("LiveSurfacePerf");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1055, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1055, length);
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
             *this = LiveSurfacePerf{};
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeUMark() const {
            return !(m_u_mark == 0.0);
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
        bool IncludeEventCnt() const {
            return !(m_event_cnt == 0.0);
        }
        bool IncludeIEmove() const {
            return !(m_i_emove == 0.0);
        }
        bool IncludeHEmove() const {
            return !(m_h_emove == 0.0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
        }
        bool IncludeCIvol() const {
            return !(m_c_ivol == 0.0);
        }
        bool IncludePIvol() const {
            return !(m_p_ivol == 0.0);
        }
        bool IncludeCSopx() const {
            return !(m_c_sopx == 0.0);
        }
        bool IncludePSopx() const {
            return !(m_p_sopx == 0.0);
        }
        bool IncludeCDe() const {
            return !(m_c_de == 0.0);
        }
        bool IncludeCGa() const {
            return !(m_c_ga == 0.0);
        }
        bool IncludeCTh() const {
            return !(m_c_th == 0.0);
        }
        bool IncludeCVe() const {
            return !(m_c_ve == 0.0);
        }
        bool IncludeCRo() const {
            return !(m_c_ro == 0.0);
        }
        bool IncludePDe() const {
            return !(m_p_de == 0.0);
        }
        bool IncludePGa() const {
            return !(m_p_ga == 0.0);
        }
        bool IncludePTh() const {
            return !(m_p_th == 0.0);
        }
        bool IncludePVe() const {
            return !(m_p_ve == 0.0);
        }
        bool IncludePRo() const {
            return !(m_p_ro == 0.0);
        }
        bool IncludeXxCnt() const {
            return !(m_xx_cnt == 0);
        }
        bool IncludePwidth() const {
            return !(m_pwidth == 0.0);
        }
        bool IncludeVwidth() const {
            return !(m_vwidth == 0.0);
        }
        bool IncludeFixCivol() const {
            return !(m_fix_civol == 0.0);
        }
        bool IncludeFixPivol() const {
            return !(m_fix_pivol == 0.0);
        }
        bool IncludeFixCsopx() const {
            return !(m_fix_csopx == 0.0);
        }
        bool IncludeFixPsopx() const {
            return !(m_fix_psopx == 0.0);
        }
        bool IncludePrvUmark() const {
            return !(m_prv_umark == 0.0);
        }
        bool IncludePrvYears() const {
            return !(m_prv_years == 0.0);
        }
        bool IncludePrvSdiv() const {
            return !(m_prv_sdiv == 0.0);
        }
        bool IncludePrvRate() const {
            return !(m_prv_rate == 0.0);
        }
        bool IncludePrvDdiv() const {
            return !(m_prv_ddiv == 0.0);
        }
        bool IncludePrvStrike() const {
            return !(m_prv_strike == 0.0);
        }
        bool IncludePrvEventCnt() const {
            return !(m_prv_event_cnt == 0.0);
        }
        bool IncludePrvIemove() const {
            return !(m_prv_iemove == 0.0);
        }
        bool IncludePrvCivol() const {
            return !(m_prv_civol == 0.0);
        }
        bool IncludePrvPivol() const {
            return !(m_prv_pivol == 0.0);
        }
        bool IncludePrvCsopx() const {
            return !(m_prv_csopx == 0.0);
        }
        bool IncludePrvPsopx() const {
            return !(m_prv_psopx == 0.0);
        }
        bool IncludePrvCde() const {
            return !(m_prv_cde == 0.0);
        }
        bool IncludePrvCga() const {
            return !(m_prv_cga == 0.0);
        }
        bool IncludePrvCth() const {
            return !(m_prv_cth == 0.0);
        }
        bool IncludePrvCve() const {
            return !(m_prv_cve == 0.0);
        }
        bool IncludePrvCro() const {
            return !(m_prv_cro == 0.0);
        }
        bool IncludePrvPde() const {
            return !(m_prv_pde == 0.0);
        }
        bool IncludePrvPga() const {
            return !(m_prv_pga == 0.0);
        }
        bool IncludePrvPth() const {
            return !(m_prv_pth == 0.0);
        }
        bool IncludePrvPve() const {
            return !(m_prv_pve == 0.0);
        }
        bool IncludePrvPro() const {
            return !(m_prv_pro == 0.0);
        }
        bool IncludePrvXxcnt() const {
            return !(m_prv_xxcnt == 0);
        }
        bool IncludePrvPwidth() const {
            return !(m_prv_pwidth == 0.0);
        }
        bool IncludePrvVwidth() const {
            return !(m_prv_vwidth == 0.0);
        }
        bool IncludeCOptPnL() const {
            return !(m_c_opt_pn_l == 0.0);
        }
        bool IncludePOptPnL() const {
            return !(m_p_opt_pn_l == 0.0);
        }
        bool IncludeDUprc() const {
            return !(m_d_uprc == 0.0);
        }
        bool IncludeCDePnL() const {
            return !(m_c_de_pn_l == 0.0);
        }
        bool IncludeCGaPnL() const {
            return !(m_c_ga_pn_l == 0.0);
        }
        bool IncludeCThPnL() const {
            return !(m_c_th_pn_l == 0.0);
        }
        bool IncludeCVePnL() const {
            return !(m_c_ve_pn_l == 0.0);
        }
        bool IncludeCRoPnL() const {
            return !(m_c_ro_pn_l == 0.0);
        }
        bool IncludePDePnL() const {
            return !(m_p_de_pn_l == 0.0);
        }
        bool IncludePGaPnL() const {
            return !(m_p_ga_pn_l == 0.0);
        }
        bool IncludePThPnL() const {
            return !(m_p_th_pn_l == 0.0);
        }
        bool IncludePVePnL() const {
            return !(m_p_ve_pn_l == 0.0);
        }
        bool IncludePRoPnL() const {
            return !(m_p_ro_pn_l == 0.0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(106, tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            if ( IncludeUMark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_u_mark);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_ddiv);
            }
            if ( IncludeEventCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_event_cnt);
            }
            if ( IncludeIEmove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_i_emove);
            }
            if ( IncludeHEmove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_h_emove);
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_strike);
            }
            if ( IncludeCIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_c_ivol);
            }
            if ( IncludePIvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_p_ivol);
            }
            if ( IncludeCSopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_c_sopx);
            }
            if ( IncludePSopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_p_sopx);
            }
            if ( IncludeCDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_c_de);
            }
            if ( IncludeCGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_c_ga);
            }
            if ( IncludeCTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_c_th);
            }
            if ( IncludeCVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_c_ve);
            }
            if ( IncludeCRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_c_ro);
            }
            if ( IncludePDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_p_de);
            }
            if ( IncludePGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_p_ga);
            }
            if ( IncludePTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_p_th);
            }
            if ( IncludePVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_p_ve);
            }
            if ( IncludePRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_p_ro);
            }
            if ( IncludeXxCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_xx_cnt);
            }
            if ( IncludePwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_pwidth);
            }
            if ( IncludeVwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_vwidth);
            }
            if ( IncludeFixCivol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_fix_civol);
            }
            if ( IncludeFixPivol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_fix_pivol);
            }
            if ( IncludeFixCsopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_fix_csopx);
            }
            if ( IncludeFixPsopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_fix_psopx);
            }
            if ( IncludePrvUmark()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_prv_umark);
            }
            if ( IncludePrvYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_prv_years);
            }
            if ( IncludePrvSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_prv_sdiv);
            }
            if ( IncludePrvRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_prv_rate);
            }
            if ( IncludePrvDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_prv_ddiv);
            }
            if ( IncludePrvStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_prv_strike);
            }
            if ( IncludePrvEventCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_prv_event_cnt);
            }
            if ( IncludePrvIemove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_prv_iemove);
            }
            if ( IncludePrvCivol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_prv_civol);
            }
            if ( IncludePrvPivol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_prv_pivol);
            }
            if ( IncludePrvCsopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_prv_csopx);
            }
            if ( IncludePrvPsopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_prv_psopx);
            }
            if ( IncludePrvCde()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_prv_cde);
            }
            if ( IncludePrvCga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_prv_cga);
            }
            if ( IncludePrvCth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_prv_cth);
            }
            if ( IncludePrvCve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_prv_cve);
            }
            if ( IncludePrvCro()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_prv_cro);
            }
            if ( IncludePrvPde()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_prv_pde);
            }
            if ( IncludePrvPga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_prv_pga);
            }
            if ( IncludePrvPth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_prv_pth);
            }
            if ( IncludePrvPve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_prv_pve);
            }
            if ( IncludePrvPro()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_prv_pro);
            }
            if ( IncludePrvXxcnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(271,m_prv_xxcnt);
            }
            if ( IncludePrvPwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_prv_pwidth);
            }
            if ( IncludePrvVwidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_prv_vwidth);
            }
            if ( IncludeCOptPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_c_opt_pn_l);
            }
            if ( IncludePOptPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_p_opt_pn_l);
            }
            if ( IncludeDUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_d_uprc);
            }
            if ( IncludeCDePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_c_de_pn_l);
            }
            if ( IncludeCGaPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_c_ga_pn_l);
            }
            if ( IncludeCThPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_c_th_pn_l);
            }
            if ( IncludeCVePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_c_ve_pn_l);
            }
            if ( IncludeCRoPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_c_ro_pn_l);
            }
            if ( IncludePDePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_p_de_pn_l);
            }
            if ( IncludePGaPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_p_ga_pn_l);
            }
            if ( IncludePThPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_p_th_pn_l);
            }
            if ( IncludePVePnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_p_ve_pn_l);
            }
            if ( IncludePRoPnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_p_ro_pn_l);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(319, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 106, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            if ( IncludeUMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_u_mark);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_ddiv);
            }
            if ( IncludeEventCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_event_cnt);
            }
            if ( IncludeIEmove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_i_emove);
            }
            if ( IncludeHEmove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_h_emove);
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_strike);
            }
            if ( IncludeCIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_c_ivol);
            }
            if ( IncludePIvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_p_ivol);
            }
            if ( IncludeCSopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_c_sopx);
            }
            if ( IncludePSopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_p_sopx);
            }
            if ( IncludeCDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_c_de);
            }
            if ( IncludeCGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_c_ga);
            }
            if ( IncludeCTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_c_th);
            }
            if ( IncludeCVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_c_ve);
            }
            if ( IncludeCRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_c_ro);
            }
            if ( IncludePDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_p_de);
            }
            if ( IncludePGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_p_ga);
            }
            if ( IncludePTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_p_th);
            }
            if ( IncludePVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_p_ve);
            }
            if ( IncludePRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_p_ro);
            }
            if ( IncludeXxCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_xx_cnt);
            }
            if ( IncludePwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_pwidth);
            }
            if ( IncludeVwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_vwidth);
            }
            if ( IncludeFixCivol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_fix_civol);
            }
            if ( IncludeFixPivol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_fix_pivol);
            }
            if ( IncludeFixCsopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_fix_csopx);
            }
            if ( IncludeFixPsopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_fix_psopx);
            }
            if ( IncludePrvUmark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_prv_umark);
            }
            if ( IncludePrvYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_prv_years);
            }
            if ( IncludePrvSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_prv_sdiv);
            }
            if ( IncludePrvRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_prv_rate);
            }
            if ( IncludePrvDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_prv_ddiv);
            }
            if ( IncludePrvStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_prv_strike);
            }
            if ( IncludePrvEventCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_prv_event_cnt);
            }
            if ( IncludePrvIemove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_prv_iemove);
            }
            if ( IncludePrvCivol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_prv_civol);
            }
            if ( IncludePrvPivol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_prv_pivol);
            }
            if ( IncludePrvCsopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_prv_csopx);
            }
            if ( IncludePrvPsopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_prv_psopx);
            }
            if ( IncludePrvCde()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_prv_cde);
            }
            if ( IncludePrvCga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_prv_cga);
            }
            if ( IncludePrvCth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_prv_cth);
            }
            if ( IncludePrvCve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_prv_cve);
            }
            if ( IncludePrvCro()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_prv_cro);
            }
            if ( IncludePrvPde()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_prv_pde);
            }
            if ( IncludePrvPga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_prv_pga);
            }
            if ( IncludePrvPth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_prv_pth);
            }
            if ( IncludePrvPve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_prv_pve);
            }
            if ( IncludePrvPro()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_prv_pro);
            }
            if ( IncludePrvXxcnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,271,m_prv_xxcnt);
            }
            if ( IncludePrvPwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_prv_pwidth);
            }
            if ( IncludePrvVwidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_prv_vwidth);
            }
            if ( IncludeCOptPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_c_opt_pn_l);
            }
            if ( IncludePOptPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_p_opt_pn_l);
            }
            if ( IncludeDUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_d_uprc);
            }
            if ( IncludeCDePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_c_de_pn_l);
            }
            if ( IncludeCGaPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_c_ga_pn_l);
            }
            if ( IncludeCThPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_c_th_pn_l);
            }
            if ( IncludeCVePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_c_ve_pn_l);
            }
            if ( IncludeCRoPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_c_ro_pn_l);
            }
            if ( IncludePDePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_p_de_pn_l);
            }
            if ( IncludePGaPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_p_ga_pn_l);
            }
            if ( IncludePThPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_p_th_pn_l);
            }
            if ( IncludePVePnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_p_ve_pn_l);
            }
            if ( IncludePRoPnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_p_ro_pn_l);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 319, m_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_mark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_event_cnt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_emove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_h_emove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_sopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_sopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_xx_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_civol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_pivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_csopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_psopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_umark = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_event_cnt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_iemove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_civol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pivol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_csopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_psopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_cde = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_cga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_cth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_cve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_cro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pde = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prv_xxcnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_pwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_vwidth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_opt_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_opt_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_de_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ga_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_th_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ve_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_ro_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_de_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ga_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_th_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ve_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_ro_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
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

    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::_meta>() const { return LiveSurfacePerf::_meta{ m__meta}; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::pkey>() const { return LiveSurfacePerf::pkey{ m_pkey}; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::date>() const { return m_date; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::time>() const { return m_time; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::ticker>() const { return LiveSurfacePerf::ticker{ m_ticker}; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::u_mark>() const { return m_u_mark; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::years>() const { return m_years; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::rate>() const { return m_rate; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::sdiv>() const { return m_sdiv; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::event_cnt>() const { return m_event_cnt; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::i_emove>() const { return m_i_emove; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::h_emove>() const { return m_h_emove; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::strike>() const { return m_strike; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ivol>() const { return m_c_ivol; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ivol>() const { return m_p_ivol; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_sopx>() const { return m_c_sopx; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_sopx>() const { return m_p_sopx; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_de>() const { return m_c_de; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ga>() const { return m_c_ga; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_th>() const { return m_c_th; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ve>() const { return m_c_ve; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ro>() const { return m_c_ro; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_de>() const { return m_p_de; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ga>() const { return m_p_ga; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_th>() const { return m_p_th; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ve>() const { return m_p_ve; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ro>() const { return m_p_ro; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::xx_cnt>() const { return m_xx_cnt; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::pwidth>() const { return m_pwidth; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::vwidth>() const { return m_vwidth; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::fix_civol>() const { return m_fix_civol; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::fix_pivol>() const { return m_fix_pivol; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::fix_csopx>() const { return m_fix_csopx; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::fix_psopx>() const { return m_fix_psopx; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_umark>() const { return m_prv_umark; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_years>() const { return m_prv_years; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_sdiv>() const { return m_prv_sdiv; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_rate>() const { return m_prv_rate; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_ddiv>() const { return m_prv_ddiv; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_strike>() const { return m_prv_strike; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_event_cnt>() const { return m_prv_event_cnt; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_iemove>() const { return m_prv_iemove; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_civol>() const { return m_prv_civol; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pivol>() const { return m_prv_pivol; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_csopx>() const { return m_prv_csopx; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_psopx>() const { return m_prv_psopx; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_cde>() const { return m_prv_cde; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_cga>() const { return m_prv_cga; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_cth>() const { return m_prv_cth; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_cve>() const { return m_prv_cve; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_cro>() const { return m_prv_cro; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pde>() const { return m_prv_pde; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pga>() const { return m_prv_pga; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pth>() const { return m_prv_pth; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pve>() const { return m_prv_pve; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pro>() const { return m_prv_pro; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_xxcnt>() const { return m_prv_xxcnt; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_pwidth>() const { return m_prv_pwidth; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::prv_vwidth>() const { return m_prv_vwidth; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_opt_pn_l>() const { return m_c_opt_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_opt_pn_l>() const { return m_p_opt_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::d_uprc>() const { return m_d_uprc; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_de_pn_l>() const { return m_c_de_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ga_pn_l>() const { return m_c_ga_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_th_pn_l>() const { return m_c_th_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ve_pn_l>() const { return m_c_ve_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::c_ro_pn_l>() const { return m_c_ro_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_de_pn_l>() const { return m_p_de_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ga_pn_l>() const { return m_p_ga_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_th_pn_l>() const { return m_p_th_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ve_pn_l>() const { return m_p_ve_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::p_ro_pn_l>() const { return m_p_ro_pn_l; }
    template<> inline const auto LiveSurfacePerf::get<LiveSurfacePerf::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveSurfacePerf_PKey::get<LiveSurfacePerf_PKey::ekey>() const { return LiveSurfacePerf_PKey::ekey{m_ekey}; }
    template<> inline const auto LiveSurfacePerf_PKey::get<LiveSurfacePerf_PKey::perf_surf_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PerfSurfaceType>(m_perf_surf_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfacePerf_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveSurfacePerf_PKey::ekey>() << "}";
        o << ",\"perf_surf_type\":" << (int64_t)m.get<LiveSurfacePerf_PKey::perf_surf_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveSurfacePerf& m) {
        o << "\"_meta\":{" << m.get<LiveSurfacePerf::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveSurfacePerf::pkey>() << "}";
        o << ",\"date\":\"" << m.get<LiveSurfacePerf::date>() << "\"";
        o << ",\"time\":\"" << m.get<LiveSurfacePerf::time>() << "\"";
        o << ",\"ticker\":{" << m.get<LiveSurfacePerf::ticker>() << "}";
        o << ",\"ex_type\":" << (int64_t)m.get<LiveSurfacePerf::ex_type>();
        o << ",\"model_type\":" << (int64_t)m.get<LiveSurfacePerf::model_type>();
        o << ",\"u_mark\":" << m.get<LiveSurfacePerf::u_mark>();
        o << ",\"years\":" << m.get<LiveSurfacePerf::years>();
        o << ",\"rate\":" << m.get<LiveSurfacePerf::rate>();
        o << ",\"sdiv\":" << m.get<LiveSurfacePerf::sdiv>();
        o << ",\"ddiv\":" << m.get<LiveSurfacePerf::ddiv>();
        o << ",\"event_cnt\":" << m.get<LiveSurfacePerf::event_cnt>();
        o << ",\"i_emove\":" << m.get<LiveSurfacePerf::i_emove>();
        o << ",\"h_emove\":" << m.get<LiveSurfacePerf::h_emove>();
        o << ",\"strike\":" << m.get<LiveSurfacePerf::strike>();
        o << ",\"c_ivol\":" << m.get<LiveSurfacePerf::c_ivol>();
        o << ",\"p_ivol\":" << m.get<LiveSurfacePerf::p_ivol>();
        o << ",\"c_sopx\":" << m.get<LiveSurfacePerf::c_sopx>();
        o << ",\"p_sopx\":" << m.get<LiveSurfacePerf::p_sopx>();
        o << ",\"c_de\":" << m.get<LiveSurfacePerf::c_de>();
        o << ",\"c_ga\":" << m.get<LiveSurfacePerf::c_ga>();
        o << ",\"c_th\":" << m.get<LiveSurfacePerf::c_th>();
        o << ",\"c_ve\":" << m.get<LiveSurfacePerf::c_ve>();
        o << ",\"c_ro\":" << m.get<LiveSurfacePerf::c_ro>();
        o << ",\"p_de\":" << m.get<LiveSurfacePerf::p_de>();
        o << ",\"p_ga\":" << m.get<LiveSurfacePerf::p_ga>();
        o << ",\"p_th\":" << m.get<LiveSurfacePerf::p_th>();
        o << ",\"p_ve\":" << m.get<LiveSurfacePerf::p_ve>();
        o << ",\"p_ro\":" << m.get<LiveSurfacePerf::p_ro>();
        o << ",\"xx_cnt\":" << m.get<LiveSurfacePerf::xx_cnt>();
        o << ",\"pwidth\":" << m.get<LiveSurfacePerf::pwidth>();
        o << ",\"vwidth\":" << m.get<LiveSurfacePerf::vwidth>();
        o << ",\"fix_civol\":" << m.get<LiveSurfacePerf::fix_civol>();
        o << ",\"fix_pivol\":" << m.get<LiveSurfacePerf::fix_pivol>();
        o << ",\"fix_csopx\":" << m.get<LiveSurfacePerf::fix_csopx>();
        o << ",\"fix_psopx\":" << m.get<LiveSurfacePerf::fix_psopx>();
        o << ",\"prv_umark\":" << m.get<LiveSurfacePerf::prv_umark>();
        o << ",\"prv_years\":" << m.get<LiveSurfacePerf::prv_years>();
        o << ",\"prv_sdiv\":" << m.get<LiveSurfacePerf::prv_sdiv>();
        o << ",\"prv_rate\":" << m.get<LiveSurfacePerf::prv_rate>();
        o << ",\"prv_ddiv\":" << m.get<LiveSurfacePerf::prv_ddiv>();
        o << ",\"prv_strike\":" << m.get<LiveSurfacePerf::prv_strike>();
        o << ",\"prv_event_cnt\":" << m.get<LiveSurfacePerf::prv_event_cnt>();
        o << ",\"prv_iemove\":" << m.get<LiveSurfacePerf::prv_iemove>();
        o << ",\"prv_civol\":" << m.get<LiveSurfacePerf::prv_civol>();
        o << ",\"prv_pivol\":" << m.get<LiveSurfacePerf::prv_pivol>();
        o << ",\"prv_csopx\":" << m.get<LiveSurfacePerf::prv_csopx>();
        o << ",\"prv_psopx\":" << m.get<LiveSurfacePerf::prv_psopx>();
        o << ",\"prv_cde\":" << m.get<LiveSurfacePerf::prv_cde>();
        o << ",\"prv_cga\":" << m.get<LiveSurfacePerf::prv_cga>();
        o << ",\"prv_cth\":" << m.get<LiveSurfacePerf::prv_cth>();
        o << ",\"prv_cve\":" << m.get<LiveSurfacePerf::prv_cve>();
        o << ",\"prv_cro\":" << m.get<LiveSurfacePerf::prv_cro>();
        o << ",\"prv_pde\":" << m.get<LiveSurfacePerf::prv_pde>();
        o << ",\"prv_pga\":" << m.get<LiveSurfacePerf::prv_pga>();
        o << ",\"prv_pth\":" << m.get<LiveSurfacePerf::prv_pth>();
        o << ",\"prv_pve\":" << m.get<LiveSurfacePerf::prv_pve>();
        o << ",\"prv_pro\":" << m.get<LiveSurfacePerf::prv_pro>();
        o << ",\"prv_xxcnt\":" << m.get<LiveSurfacePerf::prv_xxcnt>();
        o << ",\"prv_pwidth\":" << m.get<LiveSurfacePerf::prv_pwidth>();
        o << ",\"prv_vwidth\":" << m.get<LiveSurfacePerf::prv_vwidth>();
        o << ",\"c_opt_pn_l\":" << m.get<LiveSurfacePerf::c_opt_pn_l>();
        o << ",\"p_opt_pn_l\":" << m.get<LiveSurfacePerf::p_opt_pn_l>();
        o << ",\"d_uprc\":" << m.get<LiveSurfacePerf::d_uprc>();
        o << ",\"c_de_pn_l\":" << m.get<LiveSurfacePerf::c_de_pn_l>();
        o << ",\"c_ga_pn_l\":" << m.get<LiveSurfacePerf::c_ga_pn_l>();
        o << ",\"c_th_pn_l\":" << m.get<LiveSurfacePerf::c_th_pn_l>();
        o << ",\"c_ve_pn_l\":" << m.get<LiveSurfacePerf::c_ve_pn_l>();
        o << ",\"c_ro_pn_l\":" << m.get<LiveSurfacePerf::c_ro_pn_l>();
        o << ",\"p_de_pn_l\":" << m.get<LiveSurfacePerf::p_de_pn_l>();
        o << ",\"p_ga_pn_l\":" << m.get<LiveSurfacePerf::p_ga_pn_l>();
        o << ",\"p_th_pn_l\":" << m.get<LiveSurfacePerf::p_th_pn_l>();
        o << ",\"p_ve_pn_l\":" << m.get<LiveSurfacePerf::p_ve_pn_l>();
        o << ",\"p_ro_pn_l\":" << m.get<LiveSurfacePerf::p_ro_pn_l>();
        {
            std::time_t tt = m.get<LiveSurfacePerf::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}