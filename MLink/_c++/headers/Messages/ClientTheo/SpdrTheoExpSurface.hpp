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

    #ifndef _skew_func__GUARD__
    #define _skew_func__GUARD__
    DECL_STRONG_TYPE(skew_func, spiderrock::protobuf::api::SkewFunc);
    #endif//_skew_func__GUARD__

    #ifndef _vol_time_units__GUARD__
    #define _vol_time_units__GUARD__
    DECL_STRONG_TYPE(vol_time_units, spiderrock::protobuf::api::VolTimeUnits);
    #endif//_vol_time_units__GUARD__

    #ifndef _u_prc_ref_rule__GUARD__
    #define _u_prc_ref_rule__GUARD__
    DECL_STRONG_TYPE(u_prc_ref_rule, spiderrock::protobuf::api::uPrcRefRule);
    #endif//_u_prc_ref_rule__GUARD__

    #ifndef _ref_uprc__float__GUARD__
    #define _ref_uprc__float__GUARD__
    DECL_STRONG_TYPE(ref_uprc__float, float);
    #endif//_ref_uprc__float__GUARD__

    #ifndef _ref_uprc_weight__GUARD__
    #define _ref_uprc_weight__GUARD__
    DECL_STRONG_TYPE(ref_uprc_weight, float);
    #endif//_ref_uprc_weight__GUARD__

    #ifndef _ref_sratm__GUARD__
    #define _ref_sratm__GUARD__
    DECL_STRONG_TYPE(ref_sratm, float);
    #endif//_ref_sratm__GUARD__

    #ifndef _ref_sratm_weight__GUARD__
    #define _ref_sratm_weight__GUARD__
    DECL_STRONG_TYPE(ref_sratm_weight, float);
    #endif//_ref_sratm_weight__GUARD__

    #ifndef _param_a__GUARD__
    #define _param_a__GUARD__
    DECL_STRONG_TYPE(param_a, float);
    #endif//_param_a__GUARD__

    #ifndef _param_b__GUARD__
    #define _param_b__GUARD__
    DECL_STRONG_TYPE(param_b, float);
    #endif//_param_b__GUARD__

    #ifndef _param_c__GUARD__
    #define _param_c__GUARD__
    DECL_STRONG_TYPE(param_c, float);
    #endif//_param_c__GUARD__

    #ifndef _param_d__GUARD__
    #define _param_d__GUARD__
    DECL_STRONG_TYPE(param_d, float);
    #endif//_param_d__GUARD__

    #ifndef _param_e__GUARD__
    #define _param_e__GUARD__
    DECL_STRONG_TYPE(param_e, float);
    #endif//_param_e__GUARD__

    #ifndef _param_f__GUARD__
    #define _param_f__GUARD__
    DECL_STRONG_TYPE(param_f, float);
    #endif//_param_f__GUARD__

    #ifndef _param_g__GUARD__
    #define _param_g__GUARD__
    DECL_STRONG_TYPE(param_g, float);
    #endif//_param_g__GUARD__

    #ifndef _param_h__GUARD__
    #define _param_h__GUARD__
    DECL_STRONG_TYPE(param_h, float);
    #endif//_param_h__GUARD__

    #ifndef _param_i__GUARD__
    #define _param_i__GUARD__
    DECL_STRONG_TYPE(param_i, float);
    #endif//_param_i__GUARD__

    #ifndef _param_j__GUARD__
    #define _param_j__GUARD__
    DECL_STRONG_TYPE(param_j, float);
    #endif//_param_j__GUARD__

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _b_opn_vol__GUARD__
    #define _b_opn_vol__GUARD__
    DECL_STRONG_TYPE(b_opn_vol, float);
    #endif//_b_opn_vol__GUARD__

    #ifndef _b_cls_vol__GUARD__
    #define _b_cls_vol__GUARD__
    DECL_STRONG_TYPE(b_cls_vol, float);
    #endif//_b_cls_vol__GUARD__

    #ifndef _s_opn_vol__GUARD__
    #define _s_opn_vol__GUARD__
    DECL_STRONG_TYPE(s_opn_vol, float);
    #endif//_s_opn_vol__GUARD__

    #ifndef _s_cls_vol__GUARD__
    #define _s_cls_vol__GUARD__
    DECL_STRONG_TYPE(s_cls_vol, float);
    #endif//_s_cls_vol__GUARD__

    #ifndef _b_opn_edge__GUARD__
    #define _b_opn_edge__GUARD__
    DECL_STRONG_TYPE(b_opn_edge, float);
    #endif//_b_opn_edge__GUARD__

    #ifndef _b_cls_edge__GUARD__
    #define _b_cls_edge__GUARD__
    DECL_STRONG_TYPE(b_cls_edge, float);
    #endif//_b_cls_edge__GUARD__

    #ifndef _s_opn_edge__GUARD__
    #define _s_opn_edge__GUARD__
    DECL_STRONG_TYPE(s_opn_edge, float);
    #endif//_s_opn_edge__GUARD__

    #ifndef _s_cls_edge__GUARD__
    #define _s_cls_edge__GUARD__
    DECL_STRONG_TYPE(s_cls_edge, float);
    #endif//_s_cls_edge__GUARD__

    #ifndef _buy_sell_convention__GUARD__
    #define _buy_sell_convention__GUARD__
    DECL_STRONG_TYPE(buy_sell_convention, spiderrock::protobuf::api::BuySellConvention);
    #endif//_buy_sell_convention__GUARD__

    #ifndef _ln_ddiv__GUARD__
    #define _ln_ddiv__GUARD__
    DECL_STRONG_TYPE(ln_ddiv, float);
    #endif//_ln_ddiv__GUARD__

    #ifndef _sh_ddiv__GUARD__
    #define _sh_ddiv__GUARD__
    DECL_STRONG_TYPE(sh_ddiv, float);
    #endif//_sh_ddiv__GUARD__

    #ifndef _ln_sdiv__GUARD__
    #define _ln_sdiv__GUARD__
    DECL_STRONG_TYPE(ln_sdiv, float);
    #endif//_ln_sdiv__GUARD__

    #ifndef _sh_sdiv__GUARD__
    #define _sh_sdiv__GUARD__
    DECL_STRONG_TYPE(sh_sdiv, float);
    #endif//_sh_sdiv__GUARD__

    #ifndef _tv_slope__GUARD__
    #define _tv_slope__GUARD__
    DECL_STRONG_TYPE(tv_slope, float);
    #endif//_tv_slope__GUARD__

    #ifndef _div_rule__GUARD__
    #define _div_rule__GUARD__
    DECL_STRONG_TYPE(div_rule, spiderrock::protobuf::api::DivRule);
    #endif//_div_rule__GUARD__

    #ifndef _user_rate_override__GUARD__
    #define _user_rate_override__GUARD__
    DECL_STRONG_TYPE(user_rate_override, spiderrock::protobuf::api::YesNo);
    #endif//_user_rate_override__GUARD__

    #ifndef _user_sdiv_override__GUARD__
    #define _user_sdiv_override__GUARD__
    DECL_STRONG_TYPE(user_sdiv_override, spiderrock::protobuf::api::YesNo);
    #endif//_user_sdiv_override__GUARD__

    #ifndef _user_ddiv_override__GUARD__
    #define _user_ddiv_override__GUARD__
    DECL_STRONG_TYPE(user_ddiv_override, spiderrock::protobuf::api::YesNo);
    #endif//_user_ddiv_override__GUARD__

    #ifndef _min_ubid__GUARD__
    #define _min_ubid__GUARD__
    DECL_STRONG_TYPE(min_ubid, float);
    #endif//_min_ubid__GUARD__

    #ifndef _max_uask__GUARD__
    #define _max_uask__GUARD__
    DECL_STRONG_TYPE(max_uask, float);
    #endif//_max_uask__GUARD__

    #ifndef _theo_status__GUARD__
    #define _theo_status__GUARD__
    DECL_STRONG_TYPE(theo_status, spiderrock::protobuf::api::TheoStatus);
    #endif//_theo_status__GUARD__

    #ifndef _comment__GUARD__
    #define _comment__GUARD__
    DECL_STRONG_TYPE(comment, string);
    #endif//_comment__GUARD__

    #ifndef _updated__GUARD__
    #define _updated__GUARD__
    DECL_STRONG_TYPE(updated, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_updated__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrTheoExpSurface_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ekey m_ekey{};
        theo_model m_theo_model{};
        client_firm m_client_firm{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        theo_model get_theo_model() const {
            return m_theo_model;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrTheoExpSurface_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrTheoExpSurface_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const theo_model & value) { set_theo_model(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrTheoExpSurface_PKey() {}

        virtual ~SpdrTheoExpSurface_PKey() {
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
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_theo_model);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_theo_model));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_client_firm));
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrTheoExpSurface {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrTheoExpSurface_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using skew_func = spiderrock::protobuf::api::skew_func;
        using vol_time_units = spiderrock::protobuf::api::vol_time_units;
        using u_prc_ref_rule = spiderrock::protobuf::api::u_prc_ref_rule;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__float;
        using ref_uprc_weight = spiderrock::protobuf::api::ref_uprc_weight;
        using ref_sratm = spiderrock::protobuf::api::ref_sratm;
        using ref_sratm_weight = spiderrock::protobuf::api::ref_sratm_weight;
        using param_a = spiderrock::protobuf::api::param_a;
        using param_b = spiderrock::protobuf::api::param_b;
        using param_c = spiderrock::protobuf::api::param_c;
        using param_d = spiderrock::protobuf::api::param_d;
        using param_e = spiderrock::protobuf::api::param_e;
        using param_f = spiderrock::protobuf::api::param_f;
        using param_g = spiderrock::protobuf::api::param_g;
        using param_h = spiderrock::protobuf::api::param_h;
        using param_i = spiderrock::protobuf::api::param_i;
        using param_j = spiderrock::protobuf::api::param_j;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using b_opn_vol = spiderrock::protobuf::api::b_opn_vol;
        using b_cls_vol = spiderrock::protobuf::api::b_cls_vol;
        using s_opn_vol = spiderrock::protobuf::api::s_opn_vol;
        using s_cls_vol = spiderrock::protobuf::api::s_cls_vol;
        using b_opn_edge = spiderrock::protobuf::api::b_opn_edge;
        using b_cls_edge = spiderrock::protobuf::api::b_cls_edge;
        using s_opn_edge = spiderrock::protobuf::api::s_opn_edge;
        using s_cls_edge = spiderrock::protobuf::api::s_cls_edge;
        using buy_sell_convention = spiderrock::protobuf::api::buy_sell_convention;
        using ln_ddiv = spiderrock::protobuf::api::ln_ddiv;
        using sh_ddiv = spiderrock::protobuf::api::sh_ddiv;
        using ln_sdiv = spiderrock::protobuf::api::ln_sdiv;
        using sh_sdiv = spiderrock::protobuf::api::sh_sdiv;
        using tv_slope = spiderrock::protobuf::api::tv_slope;
        using div_rule = spiderrock::protobuf::api::div_rule;
        using user_rate_override = spiderrock::protobuf::api::user_rate_override;
        using user_sdiv_override = spiderrock::protobuf::api::user_sdiv_override;
        using user_ddiv_override = spiderrock::protobuf::api::user_ddiv_override;
        using min_ubid = spiderrock::protobuf::api::min_ubid;
        using max_uask = spiderrock::protobuf::api::max_uask;
        using theo_status = spiderrock::protobuf::api::theo_status;
        using comment = spiderrock::protobuf::api::comment;
        using updated = spiderrock::protobuf::api::updated;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        skew_func m_skew_func{};
        vol_time_units m_vol_time_units{};
        u_prc_ref_rule m_u_prc_ref_rule{};
        ref_uprc m_ref_uprc{};
        ref_uprc_weight m_ref_uprc_weight{};
        ref_sratm m_ref_sratm{};
        ref_sratm_weight m_ref_sratm_weight{};
        param_a m_param_a{};
        param_b m_param_b{};
        param_c m_param_c{};
        param_d m_param_d{};
        param_e m_param_e{};
        param_f m_param_f{};
        param_g m_param_g{};
        param_h m_param_h{};
        param_i m_param_i{};
        param_j m_param_j{};
        theo_vol m_theo_vol{};
        b_opn_vol m_b_opn_vol{};
        b_cls_vol m_b_cls_vol{};
        s_opn_vol m_s_opn_vol{};
        s_cls_vol m_s_cls_vol{};
        b_opn_edge m_b_opn_edge{};
        b_cls_edge m_b_cls_edge{};
        s_opn_edge m_s_opn_edge{};
        s_cls_edge m_s_cls_edge{};
        buy_sell_convention m_buy_sell_convention{};
        ln_ddiv m_ln_ddiv{};
        sh_ddiv m_sh_ddiv{};
        ln_sdiv m_ln_sdiv{};
        sh_sdiv m_sh_sdiv{};
        tv_slope m_tv_slope{};
        div_rule m_div_rule{};
        user_rate_override m_user_rate_override{};
        user_sdiv_override m_user_sdiv_override{};
        user_ddiv_override m_user_ddiv_override{};
        min_ubid m_min_ubid{};
        max_uask m_max_uask{};
        theo_status m_theo_status{};
        comment m_comment{};
        updated m_updated{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
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
        skew_func get_skew_func() const {
            return m_skew_func;
        }		
        vol_time_units get_vol_time_units() const {
            return m_vol_time_units;
        }		
        u_prc_ref_rule get_u_prc_ref_rule() const {
            return m_u_prc_ref_rule;
        }		
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
        }		
        ref_uprc_weight get_ref_uprc_weight() const {
            return m_ref_uprc_weight;
        }		
        ref_sratm get_ref_sratm() const {
            return m_ref_sratm;
        }		
        ref_sratm_weight get_ref_sratm_weight() const {
            return m_ref_sratm_weight;
        }		
        param_a get_param_a() const {
            return m_param_a;
        }		
        param_b get_param_b() const {
            return m_param_b;
        }		
        param_c get_param_c() const {
            return m_param_c;
        }		
        param_d get_param_d() const {
            return m_param_d;
        }		
        param_e get_param_e() const {
            return m_param_e;
        }		
        param_f get_param_f() const {
            return m_param_f;
        }		
        param_g get_param_g() const {
            return m_param_g;
        }		
        param_h get_param_h() const {
            return m_param_h;
        }		
        param_i get_param_i() const {
            return m_param_i;
        }		
        param_j get_param_j() const {
            return m_param_j;
        }		
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        b_opn_vol get_b_opn_vol() const {
            return m_b_opn_vol;
        }		
        b_cls_vol get_b_cls_vol() const {
            return m_b_cls_vol;
        }		
        s_opn_vol get_s_opn_vol() const {
            return m_s_opn_vol;
        }		
        s_cls_vol get_s_cls_vol() const {
            return m_s_cls_vol;
        }		
        b_opn_edge get_b_opn_edge() const {
            return m_b_opn_edge;
        }		
        b_cls_edge get_b_cls_edge() const {
            return m_b_cls_edge;
        }		
        s_opn_edge get_s_opn_edge() const {
            return m_s_opn_edge;
        }		
        s_cls_edge get_s_cls_edge() const {
            return m_s_cls_edge;
        }		
        buy_sell_convention get_buy_sell_convention() const {
            return m_buy_sell_convention;
        }		
        ln_ddiv get_ln_ddiv() const {
            return m_ln_ddiv;
        }		
        sh_ddiv get_sh_ddiv() const {
            return m_sh_ddiv;
        }		
        ln_sdiv get_ln_sdiv() const {
            return m_ln_sdiv;
        }		
        sh_sdiv get_sh_sdiv() const {
            return m_sh_sdiv;
        }		
        tv_slope get_tv_slope() const {
            return m_tv_slope;
        }		
        div_rule get_div_rule() const {
            return m_div_rule;
        }		
        user_rate_override get_user_rate_override() const {
            return m_user_rate_override;
        }		
        user_sdiv_override get_user_sdiv_override() const {
            return m_user_sdiv_override;
        }		
        user_ddiv_override get_user_ddiv_override() const {
            return m_user_ddiv_override;
        }		
        min_ubid get_min_ubid() const {
            return m_min_ubid;
        }		
        max_uask get_max_uask() const {
            return m_max_uask;
        }		
        theo_status get_theo_status() const {
            return m_theo_status;
        }		
        comment get_comment() const {
            return m_comment;
        }		
        updated get_updated() const {
            return m_updated;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_skew_func(const skew_func& value)  {
            m_skew_func = value;
        }
        void set_vol_time_units(const vol_time_units& value)  {
            m_vol_time_units = value;
        }
        void set_u_prc_ref_rule(const u_prc_ref_rule& value)  {
            m_u_prc_ref_rule = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
        }
        void set_ref_uprc_weight(const ref_uprc_weight& value)  {
            m_ref_uprc_weight = value;
        }
        void set_ref_sratm(const ref_sratm& value)  {
            m_ref_sratm = value;
        }
        void set_ref_sratm_weight(const ref_sratm_weight& value)  {
            m_ref_sratm_weight = value;
        }
        void set_param_a(const param_a& value)  {
            m_param_a = value;
        }
        void set_param_b(const param_b& value)  {
            m_param_b = value;
        }
        void set_param_c(const param_c& value)  {
            m_param_c = value;
        }
        void set_param_d(const param_d& value)  {
            m_param_d = value;
        }
        void set_param_e(const param_e& value)  {
            m_param_e = value;
        }
        void set_param_f(const param_f& value)  {
            m_param_f = value;
        }
        void set_param_g(const param_g& value)  {
            m_param_g = value;
        }
        void set_param_h(const param_h& value)  {
            m_param_h = value;
        }
        void set_param_i(const param_i& value)  {
            m_param_i = value;
        }
        void set_param_j(const param_j& value)  {
            m_param_j = value;
        }
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_b_opn_vol(const b_opn_vol& value)  {
            m_b_opn_vol = value;
        }
        void set_b_cls_vol(const b_cls_vol& value)  {
            m_b_cls_vol = value;
        }
        void set_s_opn_vol(const s_opn_vol& value)  {
            m_s_opn_vol = value;
        }
        void set_s_cls_vol(const s_cls_vol& value)  {
            m_s_cls_vol = value;
        }
        void set_b_opn_edge(const b_opn_edge& value)  {
            m_b_opn_edge = value;
        }
        void set_b_cls_edge(const b_cls_edge& value)  {
            m_b_cls_edge = value;
        }
        void set_s_opn_edge(const s_opn_edge& value)  {
            m_s_opn_edge = value;
        }
        void set_s_cls_edge(const s_cls_edge& value)  {
            m_s_cls_edge = value;
        }
        void set_buy_sell_convention(const buy_sell_convention& value)  {
            m_buy_sell_convention = value;
        }
        void set_ln_ddiv(const ln_ddiv& value)  {
            m_ln_ddiv = value;
        }
        void set_sh_ddiv(const sh_ddiv& value)  {
            m_sh_ddiv = value;
        }
        void set_ln_sdiv(const ln_sdiv& value)  {
            m_ln_sdiv = value;
        }
        void set_sh_sdiv(const sh_sdiv& value)  {
            m_sh_sdiv = value;
        }
        void set_tv_slope(const tv_slope& value)  {
            m_tv_slope = value;
        }
        void set_div_rule(const div_rule& value)  {
            m_div_rule = value;
        }
        void set_user_rate_override(const user_rate_override& value)  {
            m_user_rate_override = value;
        }
        void set_user_sdiv_override(const user_sdiv_override& value)  {
            m_user_sdiv_override = value;
        }
        void set_user_ddiv_override(const user_ddiv_override& value)  {
            m_user_ddiv_override = value;
        }
        void set_min_ubid(const min_ubid& value)  {
            m_min_ubid = value;
        }
        void set_max_uask(const max_uask& value)  {
            m_max_uask = value;
        }
        void set_theo_status(const theo_status& value)  {
            m_theo_status = value;
        }
        void set_comment(const comment& value)  {
            m_comment = value;
        }
        void set_updated(const updated& value)  {
            m_updated = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrTheoExpSurface::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const skew_func & value) {
            set_skew_func(value);
        }
        void set(const vol_time_units & value) {
            set_vol_time_units(value);
        }
        void set(const u_prc_ref_rule & value) {
            set_u_prc_ref_rule(value);
        }
        void set(const ref_uprc & value) {
            set_ref_uprc(value);
        }
        void set(const ref_uprc_weight & value) {
            set_ref_uprc_weight(value);
        }
        void set(const ref_sratm & value) {
            set_ref_sratm(value);
        }
        void set(const ref_sratm_weight & value) {
            set_ref_sratm_weight(value);
        }
        void set(const param_a & value) {
            set_param_a(value);
        }
        void set(const param_b & value) {
            set_param_b(value);
        }
        void set(const param_c & value) {
            set_param_c(value);
        }
        void set(const param_d & value) {
            set_param_d(value);
        }
        void set(const param_e & value) {
            set_param_e(value);
        }
        void set(const param_f & value) {
            set_param_f(value);
        }
        void set(const param_g & value) {
            set_param_g(value);
        }
        void set(const param_h & value) {
            set_param_h(value);
        }
        void set(const param_i & value) {
            set_param_i(value);
        }
        void set(const param_j & value) {
            set_param_j(value);
        }
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const b_opn_vol & value) {
            set_b_opn_vol(value);
        }
        void set(const b_cls_vol & value) {
            set_b_cls_vol(value);
        }
        void set(const s_opn_vol & value) {
            set_s_opn_vol(value);
        }
        void set(const s_cls_vol & value) {
            set_s_cls_vol(value);
        }
        void set(const b_opn_edge & value) {
            set_b_opn_edge(value);
        }
        void set(const b_cls_edge & value) {
            set_b_cls_edge(value);
        }
        void set(const s_opn_edge & value) {
            set_s_opn_edge(value);
        }
        void set(const s_cls_edge & value) {
            set_s_cls_edge(value);
        }
        void set(const buy_sell_convention & value) {
            set_buy_sell_convention(value);
        }
        void set(const ln_ddiv & value) {
            set_ln_ddiv(value);
        }
        void set(const sh_ddiv & value) {
            set_sh_ddiv(value);
        }
        void set(const ln_sdiv & value) {
            set_ln_sdiv(value);
        }
        void set(const sh_sdiv & value) {
            set_sh_sdiv(value);
        }
        void set(const tv_slope & value) {
            set_tv_slope(value);
        }
        void set(const div_rule & value) {
            set_div_rule(value);
        }
        void set(const user_rate_override & value) {
            set_user_rate_override(value);
        }
        void set(const user_sdiv_override & value) {
            set_user_sdiv_override(value);
        }
        void set(const user_ddiv_override & value) {
            set_user_ddiv_override(value);
        }
        void set(const min_ubid & value) {
            set_min_ubid(value);
        }
        void set(const max_uask & value) {
            set_max_uask(value);
        }
        void set(const theo_status & value) {
            set_theo_status(value);
        }
        void set(const comment & value) {
            set_comment(value);
        }
        void set(const updated & value) {
            set_updated(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrTheoExpSurface & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_skew_func);
            set(value.m_vol_time_units);
            set(value.m_u_prc_ref_rule);
            set(value.m_ref_uprc);
            set(value.m_ref_uprc_weight);
            set(value.m_ref_sratm);
            set(value.m_ref_sratm_weight);
            set(value.m_param_a);
            set(value.m_param_b);
            set(value.m_param_c);
            set(value.m_param_d);
            set(value.m_param_e);
            set(value.m_param_f);
            set(value.m_param_g);
            set(value.m_param_h);
            set(value.m_param_i);
            set(value.m_param_j);
            set(value.m_theo_vol);
            set(value.m_b_opn_vol);
            set(value.m_b_cls_vol);
            set(value.m_s_opn_vol);
            set(value.m_s_cls_vol);
            set(value.m_b_opn_edge);
            set(value.m_b_cls_edge);
            set(value.m_s_opn_edge);
            set(value.m_s_cls_edge);
            set(value.m_buy_sell_convention);
            set(value.m_ln_ddiv);
            set(value.m_sh_ddiv);
            set(value.m_ln_sdiv);
            set(value.m_sh_sdiv);
            set(value.m_tv_slope);
            set(value.m_div_rule);
            set(value.m_user_rate_override);
            set(value.m_user_sdiv_override);
            set(value.m_user_ddiv_override);
            set(value.m_min_ubid);
            set(value.m_max_uask);
            set(value.m_theo_status);
            set(value.m_comment);
            set(value.m_updated);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrTheoExpSurface() {
            m__meta.set_message_type("SpdrTheoExpSurface");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1960, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1960, length);
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
             *this = SpdrTheoExpSurface{};
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
        bool IncludeRefUprc() const {
            return !(m_ref_uprc == 0.0);
        }
        bool IncludeRefUprcWeight() const {
            return !(m_ref_uprc_weight == 0.0);
        }
        bool IncludeRefSratm() const {
            return !(m_ref_sratm == 0.0);
        }
        bool IncludeRefSratmWeight() const {
            return !(m_ref_sratm_weight == 0.0);
        }
        bool IncludeParamA() const {
            return !(m_param_a == 0.0);
        }
        bool IncludeParamB() const {
            return !(m_param_b == 0.0);
        }
        bool IncludeParamC() const {
            return !(m_param_c == 0.0);
        }
        bool IncludeParamD() const {
            return !(m_param_d == 0.0);
        }
        bool IncludeParamE() const {
            return !(m_param_e == 0.0);
        }
        bool IncludeParamF() const {
            return !(m_param_f == 0.0);
        }
        bool IncludeParamG() const {
            return !(m_param_g == 0.0);
        }
        bool IncludeParamH() const {
            return !(m_param_h == 0.0);
        }
        bool IncludeParamI() const {
            return !(m_param_i == 0.0);
        }
        bool IncludeParamJ() const {
            return !(m_param_j == 0.0);
        }
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeBOpnVol() const {
            return !(m_b_opn_vol == 0.0);
        }
        bool IncludeBClsVol() const {
            return !(m_b_cls_vol == 0.0);
        }
        bool IncludeSOpnVol() const {
            return !(m_s_opn_vol == 0.0);
        }
        bool IncludeSClsVol() const {
            return !(m_s_cls_vol == 0.0);
        }
        bool IncludeBOpnEdge() const {
            return !(m_b_opn_edge == 0.0);
        }
        bool IncludeBClsEdge() const {
            return !(m_b_cls_edge == 0.0);
        }
        bool IncludeSOpnEdge() const {
            return !(m_s_opn_edge == 0.0);
        }
        bool IncludeSClsEdge() const {
            return !(m_s_cls_edge == 0.0);
        }
        bool IncludeLnDdiv() const {
            return !(m_ln_ddiv == 0.0);
        }
        bool IncludeShDdiv() const {
            return !(m_sh_ddiv == 0.0);
        }
        bool IncludeLnSdiv() const {
            return !(m_ln_sdiv == 0.0);
        }
        bool IncludeShSdiv() const {
            return !(m_sh_sdiv == 0.0);
        }
        bool IncludeTvSlope() const {
            return !(m_tv_slope == 0.0);
        }
        bool IncludeMinUbid() const {
            return !(m_min_ubid == 0.0);
        }
        bool IncludeMaxUask() const {
            return !(m_max_uask == 0.0);
        }
        bool IncludeComment() const {
            return !(m_comment.empty());
        }
        bool IncludeUpdated() const {
            return (m_updated.time_since_epoch().count() != 0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewFunc>(m_skew_func)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolTimeUnits>(m_vol_time_units)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::uPrcRefRule>(m_u_prc_ref_rule)));
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_ref_uprc);
            }
            if ( IncludeRefUprcWeight()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ref_uprc_weight);
            }
            if ( IncludeRefSratm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ref_sratm);
            }
            if ( IncludeRefSratmWeight()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ref_sratm_weight);
            }
            if ( IncludeParamA()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_param_a);
            }
            if ( IncludeParamB()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_param_b);
            }
            if ( IncludeParamC()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_param_c);
            }
            if ( IncludeParamD()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_param_d);
            }
            if ( IncludeParamE()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_param_e);
            }
            if ( IncludeParamF()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_param_f);
            }
            if ( IncludeParamG()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_param_g);
            }
            if ( IncludeParamH()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_param_h);
            }
            if ( IncludeParamI()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_param_i);
            }
            if ( IncludeParamJ()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_param_j);
            }
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_theo_vol);
            }
            if ( IncludeBOpnVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_b_opn_vol);
            }
            if ( IncludeBClsVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_b_cls_vol);
            }
            if ( IncludeSOpnVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_s_opn_vol);
            }
            if ( IncludeSClsVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_s_cls_vol);
            }
            if ( IncludeBOpnEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_b_opn_edge);
            }
            if ( IncludeBClsEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_b_cls_edge);
            }
            if ( IncludeSOpnEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_s_opn_edge);
            }
            if ( IncludeSClsEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_s_cls_edge);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySellConvention>(m_buy_sell_convention)));
            if ( IncludeLnDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_ln_ddiv);
            }
            if ( IncludeShDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_sh_ddiv);
            }
            if ( IncludeLnSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_ln_sdiv);
            }
            if ( IncludeShSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_sh_sdiv);
            }
            if ( IncludeTvSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_tv_slope);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivRule>(m_div_rule)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_rate_override)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_sdiv_override)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_ddiv_override)));
            if ( IncludeMinUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_max_uask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>(m_theo_status)));
            if ( IncludeComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(220,m_comment);
            }
            if ( IncludeUpdated()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(223, m_updated);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(232, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewFunc>(m_skew_func)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolTimeUnits>(m_vol_time_units)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::uPrcRefRule>(m_u_prc_ref_rule)));
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_ref_uprc);
            }
            if ( IncludeRefUprcWeight()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ref_uprc_weight);
            }
            if ( IncludeRefSratm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ref_sratm);
            }
            if ( IncludeRefSratmWeight()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ref_sratm_weight);
            }
            if ( IncludeParamA()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_param_a);
            }
            if ( IncludeParamB()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_param_b);
            }
            if ( IncludeParamC()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_param_c);
            }
            if ( IncludeParamD()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_param_d);
            }
            if ( IncludeParamE()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_param_e);
            }
            if ( IncludeParamF()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_param_f);
            }
            if ( IncludeParamG()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_param_g);
            }
            if ( IncludeParamH()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_param_h);
            }
            if ( IncludeParamI()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_param_i);
            }
            if ( IncludeParamJ()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_param_j);
            }
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_theo_vol);
            }
            if ( IncludeBOpnVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_b_opn_vol);
            }
            if ( IncludeBClsVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_b_cls_vol);
            }
            if ( IncludeSOpnVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_s_opn_vol);
            }
            if ( IncludeSClsVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_s_cls_vol);
            }
            if ( IncludeBOpnEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_b_opn_edge);
            }
            if ( IncludeBClsEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_b_cls_edge);
            }
            if ( IncludeSOpnEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_s_opn_edge);
            }
            if ( IncludeSClsEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_s_cls_edge);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySellConvention>(m_buy_sell_convention)));
            if ( IncludeLnDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_ln_ddiv);
            }
            if ( IncludeShDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_sh_ddiv);
            }
            if ( IncludeLnSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_ln_sdiv);
            }
            if ( IncludeShSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_sh_sdiv);
            }
            if ( IncludeTvSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_tv_slope);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivRule>(m_div_rule)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,202,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_rate_override)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_sdiv_override)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_user_ddiv_override)));
            if ( IncludeMinUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_max_uask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>(m_theo_status)));
            if ( IncludeComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,220,static_cast<string>(m_comment));
            }
            if ( IncludeUpdated()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 223, m_updated);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 232, m_timestamp);
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
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_skew_func = static_cast<spiderrock::protobuf::api::SkewFunc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_vol_time_units = static_cast<spiderrock::protobuf::api::VolTimeUnits>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_ref_rule = static_cast<spiderrock::protobuf::api::uPrcRefRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_uprc_weight = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_sratm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_sratm_weight = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_a = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_b = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_c = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_f = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_g = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_h = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_i = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_param_j = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_b_opn_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_b_cls_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_opn_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_cls_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_b_opn_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_b_cls_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_opn_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_cls_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_buy_sell_convention = static_cast<spiderrock::protobuf::api::BuySellConvention>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ln_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ln_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sh_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tv_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_div_rule = static_cast<spiderrock::protobuf::api::DivRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 202: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_rate_override = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_sdiv_override = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_user_ddiv_override = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_theo_status = static_cast<spiderrock::protobuf::api::TheoStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_updated = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {
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

    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::_meta>() const { return SpdrTheoExpSurface::_meta{ m__meta}; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::pkey>() const { return SpdrTheoExpSurface::pkey{ m_pkey}; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ticker>() const { return SpdrTheoExpSurface::ticker{ m_ticker}; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::skew_func>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SkewFunc>( m_skew_func)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::vol_time_units>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::VolTimeUnits>( m_vol_time_units)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::u_prc_ref_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::uPrcRefRule>( m_u_prc_ref_rule)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ref_uprc_weight>() const { return m_ref_uprc_weight; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ref_sratm>() const { return m_ref_sratm; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ref_sratm_weight>() const { return m_ref_sratm_weight; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_a>() const { return m_param_a; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_b>() const { return m_param_b; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_c>() const { return m_param_c; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_d>() const { return m_param_d; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_e>() const { return m_param_e; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_f>() const { return m_param_f; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_g>() const { return m_param_g; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_h>() const { return m_param_h; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_i>() const { return m_param_i; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::param_j>() const { return m_param_j; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::b_opn_vol>() const { return m_b_opn_vol; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::b_cls_vol>() const { return m_b_cls_vol; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::s_opn_vol>() const { return m_s_opn_vol; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::s_cls_vol>() const { return m_s_cls_vol; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::b_opn_edge>() const { return m_b_opn_edge; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::b_cls_edge>() const { return m_b_cls_edge; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::s_opn_edge>() const { return m_s_opn_edge; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::s_cls_edge>() const { return m_s_cls_edge; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::buy_sell_convention>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySellConvention>( m_buy_sell_convention)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ln_ddiv>() const { return m_ln_ddiv; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::sh_ddiv>() const { return m_sh_ddiv; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::ln_sdiv>() const { return m_ln_sdiv; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::sh_sdiv>() const { return m_sh_sdiv; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::tv_slope>() const { return m_tv_slope; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::div_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DivRule>( m_div_rule)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::user_rate_override>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_rate_override)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::user_sdiv_override>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_sdiv_override)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::user_ddiv_override>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_user_ddiv_override)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::min_ubid>() const { return m_min_ubid; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::max_uask>() const { return m_max_uask; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::theo_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>( m_theo_status)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::comment>() const { return m_comment; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::updated>() const { return m_updated; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrTheoExpSurface::get<SpdrTheoExpSurface::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrTheoExpSurface_PKey::get<SpdrTheoExpSurface_PKey::ekey>() const { return SpdrTheoExpSurface_PKey::ekey{m_ekey}; }
    template<> inline const auto SpdrTheoExpSurface_PKey::get<SpdrTheoExpSurface_PKey::theo_model>() const { return m_theo_model; }
    template<> inline const auto SpdrTheoExpSurface_PKey::get<SpdrTheoExpSurface_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrTheoExpSurface_PKey& m) {
        o << "\"ekey\":{" << m.get<SpdrTheoExpSurface_PKey::ekey>() << "}";
        o << ",\"theo_model\":\"" << m.get<SpdrTheoExpSurface_PKey::theo_model>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrTheoExpSurface_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrTheoExpSurface& m) {
        o << "\"_meta\":{" << m.get<SpdrTheoExpSurface::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrTheoExpSurface::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpdrTheoExpSurface::ticker>() << "}";
        o << ",\"skew_func\":" << (int64_t)m.get<SpdrTheoExpSurface::skew_func>();
        o << ",\"vol_time_units\":" << (int64_t)m.get<SpdrTheoExpSurface::vol_time_units>();
        o << ",\"u_prc_ref_rule\":" << (int64_t)m.get<SpdrTheoExpSurface::u_prc_ref_rule>();
        o << ",\"ref_uprc\":" << m.get<SpdrTheoExpSurface::ref_uprc>();
        o << ",\"ref_uprc_weight\":" << m.get<SpdrTheoExpSurface::ref_uprc_weight>();
        o << ",\"ref_sratm\":" << m.get<SpdrTheoExpSurface::ref_sratm>();
        o << ",\"ref_sratm_weight\":" << m.get<SpdrTheoExpSurface::ref_sratm_weight>();
        o << ",\"param_a\":" << m.get<SpdrTheoExpSurface::param_a>();
        o << ",\"param_b\":" << m.get<SpdrTheoExpSurface::param_b>();
        o << ",\"param_c\":" << m.get<SpdrTheoExpSurface::param_c>();
        o << ",\"param_d\":" << m.get<SpdrTheoExpSurface::param_d>();
        o << ",\"param_e\":" << m.get<SpdrTheoExpSurface::param_e>();
        o << ",\"param_f\":" << m.get<SpdrTheoExpSurface::param_f>();
        o << ",\"param_g\":" << m.get<SpdrTheoExpSurface::param_g>();
        o << ",\"param_h\":" << m.get<SpdrTheoExpSurface::param_h>();
        o << ",\"param_i\":" << m.get<SpdrTheoExpSurface::param_i>();
        o << ",\"param_j\":" << m.get<SpdrTheoExpSurface::param_j>();
        o << ",\"theo_vol\":" << m.get<SpdrTheoExpSurface::theo_vol>();
        o << ",\"b_opn_vol\":" << m.get<SpdrTheoExpSurface::b_opn_vol>();
        o << ",\"b_cls_vol\":" << m.get<SpdrTheoExpSurface::b_cls_vol>();
        o << ",\"s_opn_vol\":" << m.get<SpdrTheoExpSurface::s_opn_vol>();
        o << ",\"s_cls_vol\":" << m.get<SpdrTheoExpSurface::s_cls_vol>();
        o << ",\"b_opn_edge\":" << m.get<SpdrTheoExpSurface::b_opn_edge>();
        o << ",\"b_cls_edge\":" << m.get<SpdrTheoExpSurface::b_cls_edge>();
        o << ",\"s_opn_edge\":" << m.get<SpdrTheoExpSurface::s_opn_edge>();
        o << ",\"s_cls_edge\":" << m.get<SpdrTheoExpSurface::s_cls_edge>();
        o << ",\"buy_sell_convention\":" << (int64_t)m.get<SpdrTheoExpSurface::buy_sell_convention>();
        o << ",\"ln_ddiv\":" << m.get<SpdrTheoExpSurface::ln_ddiv>();
        o << ",\"sh_ddiv\":" << m.get<SpdrTheoExpSurface::sh_ddiv>();
        o << ",\"ln_sdiv\":" << m.get<SpdrTheoExpSurface::ln_sdiv>();
        o << ",\"sh_sdiv\":" << m.get<SpdrTheoExpSurface::sh_sdiv>();
        o << ",\"tv_slope\":" << m.get<SpdrTheoExpSurface::tv_slope>();
        o << ",\"div_rule\":" << (int64_t)m.get<SpdrTheoExpSurface::div_rule>();
        o << ",\"user_rate_override\":" << (int64_t)m.get<SpdrTheoExpSurface::user_rate_override>();
        o << ",\"user_sdiv_override\":" << (int64_t)m.get<SpdrTheoExpSurface::user_sdiv_override>();
        o << ",\"user_ddiv_override\":" << (int64_t)m.get<SpdrTheoExpSurface::user_ddiv_override>();
        o << ",\"min_ubid\":" << m.get<SpdrTheoExpSurface::min_ubid>();
        o << ",\"max_uask\":" << m.get<SpdrTheoExpSurface::max_uask>();
        o << ",\"theo_status\":" << (int64_t)m.get<SpdrTheoExpSurface::theo_status>();
        o << ",\"comment\":\"" << m.get<SpdrTheoExpSurface::comment>() << "\"";
        {
            std::time_t tt = m.get<SpdrTheoExpSurface::updated>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"updated\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"modified_by\":\"" << m.get<SpdrTheoExpSurface::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrTheoExpSurface::modified_in>();
        {
            std::time_t tt = m.get<SpdrTheoExpSurface::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}