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

    #ifndef _vega_long__GUARD__
    #define _vega_long__GUARD__
    DECL_STRONG_TYPE(vega_long, float);
    #endif//_vega_long__GUARD__

    #ifndef _vega_short__GUARD__
    #define _vega_short__GUARD__
    DECL_STRONG_TYPE(vega_short, float);
    #endif//_vega_short__GUARD__

    #ifndef _w_vega_long__GUARD__
    #define _w_vega_long__GUARD__
    DECL_STRONG_TYPE(w_vega_long, float);
    #endif//_w_vega_long__GUARD__

    #ifndef _w_vega_short__GUARD__
    #define _w_vega_short__GUARD__
    DECL_STRONG_TYPE(w_vega_short, float);
    #endif//_w_vega_short__GUARD__

    #ifndef _wt_vega_long__GUARD__
    #define _wt_vega_long__GUARD__
    DECL_STRONG_TYPE(wt_vega_long, float);
    #endif//_wt_vega_long__GUARD__

    #ifndef _wt_vega_short__GUARD__
    #define _wt_vega_short__GUARD__
    DECL_STRONG_TYPE(wt_vega_short, float);
    #endif//_wt_vega_short__GUARD__

    #ifndef _theta_long__GUARD__
    #define _theta_long__GUARD__
    DECL_STRONG_TYPE(theta_long, float);
    #endif//_theta_long__GUARD__

    #ifndef _theta_short__GUARD__
    #define _theta_short__GUARD__
    DECL_STRONG_TYPE(theta_short, float);
    #endif//_theta_short__GUARD__

    #ifndef _rho_long__GUARD__
    #define _rho_long__GUARD__
    DECL_STRONG_TYPE(rho_long, float);
    #endif//_rho_long__GUARD__

    #ifndef _rho_short__GUARD__
    #define _rho_short__GUARD__
    DECL_STRONG_TYPE(rho_short, float);
    #endif//_rho_short__GUARD__

    #ifndef _d_gamma_long__GUARD__
    #define _d_gamma_long__GUARD__
    DECL_STRONG_TYPE(d_gamma_long, float);
    #endif//_d_gamma_long__GUARD__

    #ifndef _d_gamma_short__GUARD__
    #define _d_gamma_short__GUARD__
    DECL_STRONG_TYPE(d_gamma_short, float);
    #endif//_d_gamma_short__GUARD__

    #ifndef _d_beta_ga_long__GUARD__
    #define _d_beta_ga_long__GUARD__
    DECL_STRONG_TYPE(d_beta_ga_long, float);
    #endif//_d_beta_ga_long__GUARD__

    #ifndef _d_beta_ga_short__GUARD__
    #define _d_beta_ga_short__GUARD__
    DECL_STRONG_TYPE(d_beta_ga_short, float);
    #endif//_d_beta_ga_short__GUARD__

    #ifndef _ivol_ln__GUARD__
    #define _ivol_ln__GUARD__
    DECL_STRONG_TYPE(ivol_ln, float);
    #endif//_ivol_ln__GUARD__

    #ifndef _ivol_sh__GUARD__
    #define _ivol_sh__GUARD__
    DECL_STRONG_TYPE(ivol_sh, float);
    #endif//_ivol_sh__GUARD__

    #ifndef _wt_ve_dd__GUARD__
    #define _wt_ve_dd__GUARD__
    DECL_STRONG_TYPE(wt_ve_dd, float);
    #endif//_wt_ve_dd__GUARD__

    #ifndef _wt_ve_dn__GUARD__
    #define _wt_ve_dn__GUARD__
    DECL_STRONG_TYPE(wt_ve_dn, float);
    #endif//_wt_ve_dn__GUARD__

    #ifndef _wt_ve_at__GUARD__
    #define _wt_ve_at__GUARD__
    DECL_STRONG_TYPE(wt_ve_at, float);
    #endif//_wt_ve_at__GUARD__

    #ifndef _wt_ve_up__GUARD__
    #define _wt_ve_up__GUARD__
    DECL_STRONG_TYPE(wt_ve_up, float);
    #endif//_wt_ve_up__GUARD__

    #ifndef _wt_ve_du__GUARD__
    #define _wt_ve_du__GUARD__
    DECL_STRONG_TYPE(wt_ve_du, float);
    #endif//_wt_ve_du__GUARD__

    #ifndef _abs_clr_cn__GUARD__
    #define _abs_clr_cn__GUARD__
    DECL_STRONG_TYPE(abs_clr_cn, int32);
    #endif//_abs_clr_cn__GUARD__

    #ifndef _abs_cur_cn__GUARD__
    #define _abs_cur_cn__GUARD__
    DECL_STRONG_TYPE(abs_cur_cn, int32);
    #endif//_abs_cur_cn__GUARD__

    #ifndef _prem_ov_par__GUARD__
    #define _prem_ov_par__GUARD__
    DECL_STRONG_TYPE(prem_ov_par, float);
    #endif//_prem_ov_par__GUARD__

    #ifndef _op_pnl_vol__float__GUARD__
    #define _op_pnl_vol__float__GUARD__
    DECL_STRONG_TYPE(op_pnl_vol__float, float);
    #endif//_op_pnl_vol__float__GUARD__

    #ifndef _op_pnl_mid__float__GUARD__
    #define _op_pnl_mid__float__GUARD__
    DECL_STRONG_TYPE(op_pnl_mid__float, float);
    #endif//_op_pnl_mid__float__GUARD__

    #ifndef _op_pnl_clr__float__GUARD__
    #define _op_pnl_clr__float__GUARD__
    DECL_STRONG_TYPE(op_pnl_clr__float, float);
    #endif//_op_pnl_clr__float__GUARD__

    #ifndef _op_day_vega__GUARD__
    #define _op_day_vega__GUARD__
    DECL_STRONG_TYPE(op_day_vega, float);
    #endif//_op_day_vega__GUARD__

    #ifndef _op_day_wvega__GUARD__
    #define _op_day_wvega__GUARD__
    DECL_STRONG_TYPE(op_day_wvega, float);
    #endif//_op_day_wvega__GUARD__

    #ifndef _op_day_tvega__GUARD__
    #define _op_day_tvega__GUARD__
    DECL_STRONG_TYPE(op_day_tvega, float);
    #endif//_op_day_tvega__GUARD__

    #ifndef _op_day_wt_vega__GUARD__
    #define _op_day_wt_vega__GUARD__
    DECL_STRONG_TYPE(op_day_wt_vega, float);
    #endif//_op_day_wt_vega__GUARD__

    #ifndef _op_day_theta__GUARD__
    #define _op_day_theta__GUARD__
    DECL_STRONG_TYPE(op_day_theta, float);
    #endif//_op_day_theta__GUARD__

    #ifndef _op_edge_opened__GUARD__
    #define _op_edge_opened__GUARD__
    DECL_STRONG_TYPE(op_edge_opened, float);
    #endif//_op_edge_opened__GUARD__

    #ifndef _op_edge_closed__GUARD__
    #define _op_edge_closed__GUARD__
    DECL_STRONG_TYPE(op_edge_closed, float);
    #endif//_op_edge_closed__GUARD__

    #ifndef _pnl_dn__GUARD__
    #define _pnl_dn__GUARD__
    DECL_STRONG_TYPE(pnl_dn, float);
    #endif//_pnl_dn__GUARD__

    #ifndef _pnl_de__GUARD__
    #define _pnl_de__GUARD__
    DECL_STRONG_TYPE(pnl_de, float);
    #endif//_pnl_de__GUARD__

    #ifndef _pnl_sl__GUARD__
    #define _pnl_sl__GUARD__
    DECL_STRONG_TYPE(pnl_sl, float);
    #endif//_pnl_sl__GUARD__

    #ifndef _pnl_ga__GUARD__
    #define _pnl_ga__GUARD__
    DECL_STRONG_TYPE(pnl_ga, float);
    #endif//_pnl_ga__GUARD__

    #ifndef _pnl_th__GUARD__
    #define _pnl_th__GUARD__
    DECL_STRONG_TYPE(pnl_th, float);
    #endif//_pnl_th__GUARD__

    #ifndef _pnl_ve__GUARD__
    #define _pnl_ve__GUARD__
    DECL_STRONG_TYPE(pnl_ve, float);
    #endif//_pnl_ve__GUARD__

    #ifndef _pnl_vo__GUARD__
    #define _pnl_vo__GUARD__
    DECL_STRONG_TYPE(pnl_vo, float);
    #endif//_pnl_vo__GUARD__

    #ifndef _pnl_va__GUARD__
    #define _pnl_va__GUARD__
    DECL_STRONG_TYPE(pnl_va, float);
    #endif//_pnl_va__GUARD__

    #ifndef _pnl_ddiv__GUARD__
    #define _pnl_ddiv__GUARD__
    DECL_STRONG_TYPE(pnl_ddiv, float);
    #endif//_pnl_ddiv__GUARD__

    #ifndef _pnl_sdiv__GUARD__
    #define _pnl_sdiv__GUARD__
    DECL_STRONG_TYPE(pnl_sdiv, float);
    #endif//_pnl_sdiv__GUARD__

    #ifndef _pnl_rate__GUARD__
    #define _pnl_rate__GUARD__
    DECL_STRONG_TYPE(pnl_rate, float);
    #endif//_pnl_rate__GUARD__

    #ifndef _pnl_err__GUARD__
    #define _pnl_err__GUARD__
    DECL_STRONG_TYPE(pnl_err, float);
    #endif//_pnl_err__GUARD__

    #ifndef _pnl_te__GUARD__
    #define _pnl_te__GUARD__
    DECL_STRONG_TYPE(pnl_te, float);
    #endif//_pnl_te__GUARD__

    #ifndef _pnl_ln__GUARD__
    #define _pnl_ln__GUARD__
    DECL_STRONG_TYPE(pnl_ln, float);
    #endif//_pnl_ln__GUARD__

    #ifndef _pnl_sh__GUARD__
    #define _pnl_sh__GUARD__
    DECL_STRONG_TYPE(pnl_sh, float);
    #endif//_pnl_sh__GUARD__

    #ifndef _t_edge__GUARD__
    #define _t_edge__GUARD__
    DECL_STRONG_TYPE(t_edge, float);
    #endif//_t_edge__GUARD__

    #ifndef _t_edge_mult__GUARD__
    #define _t_edge_mult__GUARD__
    DECL_STRONG_TYPE(t_edge_mult, float);
    #endif//_t_edge_mult__GUARD__

    #ifndef _t_edge_pr__GUARD__
    #define _t_edge_pr__GUARD__
    DECL_STRONG_TYPE(t_edge_pr, float);
    #endif//_t_edge_pr__GUARD__

    #ifndef _t_edge_mult_pr__GUARD__
    #define _t_edge_mult_pr__GUARD__
    DECL_STRONG_TYPE(t_edge_mult_pr, float);
    #endif//_t_edge_mult_pr__GUARD__

    #ifndef _pos_tedge_pnl__GUARD__
    #define _pos_tedge_pnl__GUARD__
    DECL_STRONG_TYPE(pos_tedge_pnl, float);
    #endif//_pos_tedge_pnl__GUARD__

    #ifndef _neg_tedge_pnl__GUARD__
    #define _neg_tedge_pnl__GUARD__
    DECL_STRONG_TYPE(neg_tedge_pnl, float);
    #endif//_neg_tedge_pnl__GUARD__

    #ifndef _bad_tedge_pnl__GUARD__
    #define _bad_tedge_pnl__GUARD__
    DECL_STRONG_TYPE(bad_tedge_pnl, float);
    #endif//_bad_tedge_pnl__GUARD__

    #ifndef _va_rsu90__GUARD__
    #define _va_rsu90__GUARD__
    DECL_STRONG_TYPE(va_rsu90, float);
    #endif//_va_rsu90__GUARD__

    #ifndef _va_rsd90__GUARD__
    #define _va_rsd90__GUARD__
    DECL_STRONG_TYPE(va_rsd90, float);
    #endif//_va_rsd90__GUARD__

    #ifndef _va_rsu50__GUARD__
    #define _va_rsu50__GUARD__
    DECL_STRONG_TYPE(va_rsu50, float);
    #endif//_va_rsu50__GUARD__

    #ifndef _va_rsd50__GUARD__
    #define _va_rsd50__GUARD__
    DECL_STRONG_TYPE(va_rsd50, float);
    #endif//_va_rsd50__GUARD__

    #ifndef _va_rsu15__GUARD__
    #define _va_rsu15__GUARD__
    DECL_STRONG_TYPE(va_rsu15, float);
    #endif//_va_rsu15__GUARD__

    #ifndef _va_rsd15__GUARD__
    #define _va_rsd15__GUARD__
    DECL_STRONG_TYPE(va_rsd15, float);
    #endif//_va_rsd15__GUARD__

    #ifndef _va_rsu10__GUARD__
    #define _va_rsu10__GUARD__
    DECL_STRONG_TYPE(va_rsu10, float);
    #endif//_va_rsu10__GUARD__

    #ifndef _va_rsd10__GUARD__
    #define _va_rsd10__GUARD__
    DECL_STRONG_TYPE(va_rsd10, float);
    #endif//_va_rsd10__GUARD__

    #ifndef _va_rsu05__GUARD__
    #define _va_rsu05__GUARD__
    DECL_STRONG_TYPE(va_rsu05, float);
    #endif//_va_rsu05__GUARD__

    #ifndef _va_rsd05__GUARD__
    #define _va_rsd05__GUARD__
    DECL_STRONG_TYPE(va_rsd05, float);
    #endif//_va_rsd05__GUARD__

    #ifndef _va_rsu1e__GUARD__
    #define _va_rsu1e__GUARD__
    DECL_STRONG_TYPE(va_rsu1e, float);
    #endif//_va_rsu1e__GUARD__

    #ifndef _va_rsd1e__GUARD__
    #define _va_rsd1e__GUARD__
    DECL_STRONG_TYPE(va_rsd1e, float);
    #endif//_va_rsd1e__GUARD__

    #ifndef _va_rsu2e__GUARD__
    #define _va_rsu2e__GUARD__
    DECL_STRONG_TYPE(va_rsu2e, float);
    #endif//_va_rsu2e__GUARD__

    #ifndef _va_rsd2e__GUARD__
    #define _va_rsd2e__GUARD__
    DECL_STRONG_TYPE(va_rsd2e, float);
    #endif//_va_rsd2e__GUARD__

    #ifndef _va_rearn__GUARD__
    #define _va_rearn__GUARD__
    DECL_STRONG_TYPE(va_rearn, float);
    #endif//_va_rearn__GUARD__

    #ifndef _va_rcash__GUARD__
    #define _va_rcash__GUARD__
    DECL_STRONG_TYPE(va_rcash, float);
    #endif//_va_rcash__GUARD__

    #ifndef _last_activity__GUARD__
    #define _last_activity__GUARD__
    DECL_STRONG_TYPE(last_activity, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_activity__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

    #ifndef _expiration__DateKey__GUARD__
    #define _expiration__DateKey__GUARD__
    DECL_STRONG_TYPE(expiration__DateKey, DateKey);
    #endif//_expiration__DateKey__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class ExpirationRiskRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using currency = spiderrock::protobuf::api::currency;
        using expiration = spiderrock::protobuf::api::expiration__DateKey;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        currency m_currency{};
        expiration m_expiration{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        currency get_currency() const {
            return m_currency;
        }
		expiration get_expiration() const {
            return m_expiration;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_currency(const currency& value)  {
            m_currency = value;
        }
        void set_expiration(const expiration& value)  {
            m_expiration = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpirationRiskRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpirationRiskRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const currency & value) { set_currency(value); }
        void set(const expiration & value) { set_expiration(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        ExpirationRiskRecordV5_PKey() {}

        virtual ~ExpirationRiskRecordV5_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeExpiration() const {
            return (m_expiration.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeExpiration()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(12, m_expiration.get_year(), m_expiration.get_month(), m_expiration.get_day());
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeExpiration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,12, m_expiration.get_year(), m_expiration.get_month(), m_expiration.get_day());
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_client_firm));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_expiration.set_year(dateKey.year());
                        m_expiration.set_month(dateKey.month());
                        m_expiration.set_day(dateKey.day());
                        break;
                    }
                    case 13: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ExpirationRiskRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ExpirationRiskRecordV5_PKey;
        using vega_long = spiderrock::protobuf::api::vega_long;
        using vega_short = spiderrock::protobuf::api::vega_short;
        using w_vega_long = spiderrock::protobuf::api::w_vega_long;
        using w_vega_short = spiderrock::protobuf::api::w_vega_short;
        using wt_vega_long = spiderrock::protobuf::api::wt_vega_long;
        using wt_vega_short = spiderrock::protobuf::api::wt_vega_short;
        using theta_long = spiderrock::protobuf::api::theta_long;
        using theta_short = spiderrock::protobuf::api::theta_short;
        using rho_long = spiderrock::protobuf::api::rho_long;
        using rho_short = spiderrock::protobuf::api::rho_short;
        using d_gamma_long = spiderrock::protobuf::api::d_gamma_long;
        using d_gamma_short = spiderrock::protobuf::api::d_gamma_short;
        using d_beta_ga_long = spiderrock::protobuf::api::d_beta_ga_long;
        using d_beta_ga_short = spiderrock::protobuf::api::d_beta_ga_short;
        using ivol_ln = spiderrock::protobuf::api::ivol_ln;
        using ivol_sh = spiderrock::protobuf::api::ivol_sh;
        using wt_ve_dd = spiderrock::protobuf::api::wt_ve_dd;
        using wt_ve_dn = spiderrock::protobuf::api::wt_ve_dn;
        using wt_ve_at = spiderrock::protobuf::api::wt_ve_at;
        using wt_ve_up = spiderrock::protobuf::api::wt_ve_up;
        using wt_ve_du = spiderrock::protobuf::api::wt_ve_du;
        using abs_clr_cn = spiderrock::protobuf::api::abs_clr_cn;
        using abs_cur_cn = spiderrock::protobuf::api::abs_cur_cn;
        using prem_ov_par = spiderrock::protobuf::api::prem_ov_par;
        using op_pnl_vol = spiderrock::protobuf::api::op_pnl_vol__float;
        using op_pnl_mid = spiderrock::protobuf::api::op_pnl_mid__float;
        using op_pnl_clr = spiderrock::protobuf::api::op_pnl_clr__float;
        using op_day_vega = spiderrock::protobuf::api::op_day_vega;
        using op_day_wvega = spiderrock::protobuf::api::op_day_wvega;
        using op_day_tvega = spiderrock::protobuf::api::op_day_tvega;
        using op_day_wt_vega = spiderrock::protobuf::api::op_day_wt_vega;
        using op_day_theta = spiderrock::protobuf::api::op_day_theta;
        using op_edge_opened = spiderrock::protobuf::api::op_edge_opened;
        using op_edge_closed = spiderrock::protobuf::api::op_edge_closed;
        using pnl_dn = spiderrock::protobuf::api::pnl_dn;
        using pnl_de = spiderrock::protobuf::api::pnl_de;
        using pnl_sl = spiderrock::protobuf::api::pnl_sl;
        using pnl_ga = spiderrock::protobuf::api::pnl_ga;
        using pnl_th = spiderrock::protobuf::api::pnl_th;
        using pnl_ve = spiderrock::protobuf::api::pnl_ve;
        using pnl_vo = spiderrock::protobuf::api::pnl_vo;
        using pnl_va = spiderrock::protobuf::api::pnl_va;
        using pnl_ddiv = spiderrock::protobuf::api::pnl_ddiv;
        using pnl_sdiv = spiderrock::protobuf::api::pnl_sdiv;
        using pnl_rate = spiderrock::protobuf::api::pnl_rate;
        using pnl_err = spiderrock::protobuf::api::pnl_err;
        using pnl_te = spiderrock::protobuf::api::pnl_te;
        using pnl_ln = spiderrock::protobuf::api::pnl_ln;
        using pnl_sh = spiderrock::protobuf::api::pnl_sh;
        using t_edge = spiderrock::protobuf::api::t_edge;
        using t_edge_mult = spiderrock::protobuf::api::t_edge_mult;
        using t_edge_pr = spiderrock::protobuf::api::t_edge_pr;
        using t_edge_mult_pr = spiderrock::protobuf::api::t_edge_mult_pr;
        using pos_tedge_pnl = spiderrock::protobuf::api::pos_tedge_pnl;
        using neg_tedge_pnl = spiderrock::protobuf::api::neg_tedge_pnl;
        using bad_tedge_pnl = spiderrock::protobuf::api::bad_tedge_pnl;
        using va_rsu90 = spiderrock::protobuf::api::va_rsu90;
        using va_rsd90 = spiderrock::protobuf::api::va_rsd90;
        using va_rsu50 = spiderrock::protobuf::api::va_rsu50;
        using va_rsd50 = spiderrock::protobuf::api::va_rsd50;
        using va_rsu15 = spiderrock::protobuf::api::va_rsu15;
        using va_rsd15 = spiderrock::protobuf::api::va_rsd15;
        using va_rsu10 = spiderrock::protobuf::api::va_rsu10;
        using va_rsd10 = spiderrock::protobuf::api::va_rsd10;
        using va_rsu05 = spiderrock::protobuf::api::va_rsu05;
        using va_rsd05 = spiderrock::protobuf::api::va_rsd05;
        using va_rsu1e = spiderrock::protobuf::api::va_rsu1e;
        using va_rsd1e = spiderrock::protobuf::api::va_rsd1e;
        using va_rsu2e = spiderrock::protobuf::api::va_rsu2e;
        using va_rsd2e = spiderrock::protobuf::api::va_rsd2e;
        using va_rearn = spiderrock::protobuf::api::va_rearn;
        using va_rcash = spiderrock::protobuf::api::va_rcash;
        using last_activity = spiderrock::protobuf::api::last_activity;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        vega_long m_vega_long{};
        vega_short m_vega_short{};
        w_vega_long m_w_vega_long{};
        w_vega_short m_w_vega_short{};
        wt_vega_long m_wt_vega_long{};
        wt_vega_short m_wt_vega_short{};
        theta_long m_theta_long{};
        theta_short m_theta_short{};
        rho_long m_rho_long{};
        rho_short m_rho_short{};
        d_gamma_long m_d_gamma_long{};
        d_gamma_short m_d_gamma_short{};
        d_beta_ga_long m_d_beta_ga_long{};
        d_beta_ga_short m_d_beta_ga_short{};
        ivol_ln m_ivol_ln{};
        ivol_sh m_ivol_sh{};
        wt_ve_dd m_wt_ve_dd{};
        wt_ve_dn m_wt_ve_dn{};
        wt_ve_at m_wt_ve_at{};
        wt_ve_up m_wt_ve_up{};
        wt_ve_du m_wt_ve_du{};
        abs_clr_cn m_abs_clr_cn{};
        abs_cur_cn m_abs_cur_cn{};
        prem_ov_par m_prem_ov_par{};
        op_pnl_vol m_op_pnl_vol{};
        op_pnl_mid m_op_pnl_mid{};
        op_pnl_clr m_op_pnl_clr{};
        op_day_vega m_op_day_vega{};
        op_day_wvega m_op_day_wvega{};
        op_day_tvega m_op_day_tvega{};
        op_day_wt_vega m_op_day_wt_vega{};
        op_day_theta m_op_day_theta{};
        op_edge_opened m_op_edge_opened{};
        op_edge_closed m_op_edge_closed{};
        pnl_dn m_pnl_dn{};
        pnl_de m_pnl_de{};
        pnl_sl m_pnl_sl{};
        pnl_ga m_pnl_ga{};
        pnl_th m_pnl_th{};
        pnl_ve m_pnl_ve{};
        pnl_vo m_pnl_vo{};
        pnl_va m_pnl_va{};
        pnl_ddiv m_pnl_ddiv{};
        pnl_sdiv m_pnl_sdiv{};
        pnl_rate m_pnl_rate{};
        pnl_err m_pnl_err{};
        pnl_te m_pnl_te{};
        pnl_ln m_pnl_ln{};
        pnl_sh m_pnl_sh{};
        t_edge m_t_edge{};
        t_edge_mult m_t_edge_mult{};
        t_edge_pr m_t_edge_pr{};
        t_edge_mult_pr m_t_edge_mult_pr{};
        pos_tedge_pnl m_pos_tedge_pnl{};
        neg_tedge_pnl m_neg_tedge_pnl{};
        bad_tedge_pnl m_bad_tedge_pnl{};
        va_rsu90 m_va_rsu90{};
        va_rsd90 m_va_rsd90{};
        va_rsu50 m_va_rsu50{};
        va_rsd50 m_va_rsd50{};
        va_rsu15 m_va_rsu15{};
        va_rsd15 m_va_rsd15{};
        va_rsu10 m_va_rsu10{};
        va_rsd10 m_va_rsd10{};
        va_rsu05 m_va_rsu05{};
        va_rsd05 m_va_rsd05{};
        va_rsu1e m_va_rsu1e{};
        va_rsd1e m_va_rsd1e{};
        va_rsu2e m_va_rsu2e{};
        va_rsd2e m_va_rsd2e{};
        va_rearn m_va_rearn{};
        va_rcash m_va_rcash{};
        last_activity m_last_activity{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        vega_long get_vega_long() const {
            return m_vega_long;
        }		
        vega_short get_vega_short() const {
            return m_vega_short;
        }		
        w_vega_long get_w_vega_long() const {
            return m_w_vega_long;
        }		
        w_vega_short get_w_vega_short() const {
            return m_w_vega_short;
        }		
        wt_vega_long get_wt_vega_long() const {
            return m_wt_vega_long;
        }		
        wt_vega_short get_wt_vega_short() const {
            return m_wt_vega_short;
        }		
        theta_long get_theta_long() const {
            return m_theta_long;
        }		
        theta_short get_theta_short() const {
            return m_theta_short;
        }		
        rho_long get_rho_long() const {
            return m_rho_long;
        }		
        rho_short get_rho_short() const {
            return m_rho_short;
        }		
        d_gamma_long get_d_gamma_long() const {
            return m_d_gamma_long;
        }		
        d_gamma_short get_d_gamma_short() const {
            return m_d_gamma_short;
        }		
        d_beta_ga_long get_d_beta_ga_long() const {
            return m_d_beta_ga_long;
        }		
        d_beta_ga_short get_d_beta_ga_short() const {
            return m_d_beta_ga_short;
        }		
        ivol_ln get_ivol_ln() const {
            return m_ivol_ln;
        }		
        ivol_sh get_ivol_sh() const {
            return m_ivol_sh;
        }		
        wt_ve_dd get_wt_ve_dd() const {
            return m_wt_ve_dd;
        }		
        wt_ve_dn get_wt_ve_dn() const {
            return m_wt_ve_dn;
        }		
        wt_ve_at get_wt_ve_at() const {
            return m_wt_ve_at;
        }		
        wt_ve_up get_wt_ve_up() const {
            return m_wt_ve_up;
        }		
        wt_ve_du get_wt_ve_du() const {
            return m_wt_ve_du;
        }		
        abs_clr_cn get_abs_clr_cn() const {
            return m_abs_clr_cn;
        }		
        abs_cur_cn get_abs_cur_cn() const {
            return m_abs_cur_cn;
        }		
        prem_ov_par get_prem_ov_par() const {
            return m_prem_ov_par;
        }		
        op_pnl_vol get_op_pnl_vol() const {
            return m_op_pnl_vol;
        }		
        op_pnl_mid get_op_pnl_mid() const {
            return m_op_pnl_mid;
        }		
        op_pnl_clr get_op_pnl_clr() const {
            return m_op_pnl_clr;
        }		
        op_day_vega get_op_day_vega() const {
            return m_op_day_vega;
        }		
        op_day_wvega get_op_day_wvega() const {
            return m_op_day_wvega;
        }		
        op_day_tvega get_op_day_tvega() const {
            return m_op_day_tvega;
        }		
        op_day_wt_vega get_op_day_wt_vega() const {
            return m_op_day_wt_vega;
        }		
        op_day_theta get_op_day_theta() const {
            return m_op_day_theta;
        }		
        op_edge_opened get_op_edge_opened() const {
            return m_op_edge_opened;
        }		
        op_edge_closed get_op_edge_closed() const {
            return m_op_edge_closed;
        }		
        pnl_dn get_pnl_dn() const {
            return m_pnl_dn;
        }		
        pnl_de get_pnl_de() const {
            return m_pnl_de;
        }		
        pnl_sl get_pnl_sl() const {
            return m_pnl_sl;
        }		
        pnl_ga get_pnl_ga() const {
            return m_pnl_ga;
        }		
        pnl_th get_pnl_th() const {
            return m_pnl_th;
        }		
        pnl_ve get_pnl_ve() const {
            return m_pnl_ve;
        }		
        pnl_vo get_pnl_vo() const {
            return m_pnl_vo;
        }		
        pnl_va get_pnl_va() const {
            return m_pnl_va;
        }		
        pnl_ddiv get_pnl_ddiv() const {
            return m_pnl_ddiv;
        }		
        pnl_sdiv get_pnl_sdiv() const {
            return m_pnl_sdiv;
        }		
        pnl_rate get_pnl_rate() const {
            return m_pnl_rate;
        }		
        pnl_err get_pnl_err() const {
            return m_pnl_err;
        }		
        pnl_te get_pnl_te() const {
            return m_pnl_te;
        }		
        pnl_ln get_pnl_ln() const {
            return m_pnl_ln;
        }		
        pnl_sh get_pnl_sh() const {
            return m_pnl_sh;
        }		
        t_edge get_t_edge() const {
            return m_t_edge;
        }		
        t_edge_mult get_t_edge_mult() const {
            return m_t_edge_mult;
        }		
        t_edge_pr get_t_edge_pr() const {
            return m_t_edge_pr;
        }		
        t_edge_mult_pr get_t_edge_mult_pr() const {
            return m_t_edge_mult_pr;
        }		
        pos_tedge_pnl get_pos_tedge_pnl() const {
            return m_pos_tedge_pnl;
        }		
        neg_tedge_pnl get_neg_tedge_pnl() const {
            return m_neg_tedge_pnl;
        }		
        bad_tedge_pnl get_bad_tedge_pnl() const {
            return m_bad_tedge_pnl;
        }		
        va_rsu90 get_va_rsu90() const {
            return m_va_rsu90;
        }		
        va_rsd90 get_va_rsd90() const {
            return m_va_rsd90;
        }		
        va_rsu50 get_va_rsu50() const {
            return m_va_rsu50;
        }		
        va_rsd50 get_va_rsd50() const {
            return m_va_rsd50;
        }		
        va_rsu15 get_va_rsu15() const {
            return m_va_rsu15;
        }		
        va_rsd15 get_va_rsd15() const {
            return m_va_rsd15;
        }		
        va_rsu10 get_va_rsu10() const {
            return m_va_rsu10;
        }		
        va_rsd10 get_va_rsd10() const {
            return m_va_rsd10;
        }		
        va_rsu05 get_va_rsu05() const {
            return m_va_rsu05;
        }		
        va_rsd05 get_va_rsd05() const {
            return m_va_rsd05;
        }		
        va_rsu1e get_va_rsu1e() const {
            return m_va_rsu1e;
        }		
        va_rsd1e get_va_rsd1e() const {
            return m_va_rsd1e;
        }		
        va_rsu2e get_va_rsu2e() const {
            return m_va_rsu2e;
        }		
        va_rsd2e get_va_rsd2e() const {
            return m_va_rsd2e;
        }		
        va_rearn get_va_rearn() const {
            return m_va_rearn;
        }		
        va_rcash get_va_rcash() const {
            return m_va_rcash;
        }		
        last_activity get_last_activity() const {
            return m_last_activity;
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
        void set_vega_long(const vega_long& value)  {
            m_vega_long = value;
        }
        void set_vega_short(const vega_short& value)  {
            m_vega_short = value;
        }
        void set_w_vega_long(const w_vega_long& value)  {
            m_w_vega_long = value;
        }
        void set_w_vega_short(const w_vega_short& value)  {
            m_w_vega_short = value;
        }
        void set_wt_vega_long(const wt_vega_long& value)  {
            m_wt_vega_long = value;
        }
        void set_wt_vega_short(const wt_vega_short& value)  {
            m_wt_vega_short = value;
        }
        void set_theta_long(const theta_long& value)  {
            m_theta_long = value;
        }
        void set_theta_short(const theta_short& value)  {
            m_theta_short = value;
        }
        void set_rho_long(const rho_long& value)  {
            m_rho_long = value;
        }
        void set_rho_short(const rho_short& value)  {
            m_rho_short = value;
        }
        void set_d_gamma_long(const d_gamma_long& value)  {
            m_d_gamma_long = value;
        }
        void set_d_gamma_short(const d_gamma_short& value)  {
            m_d_gamma_short = value;
        }
        void set_d_beta_ga_long(const d_beta_ga_long& value)  {
            m_d_beta_ga_long = value;
        }
        void set_d_beta_ga_short(const d_beta_ga_short& value)  {
            m_d_beta_ga_short = value;
        }
        void set_ivol_ln(const ivol_ln& value)  {
            m_ivol_ln = value;
        }
        void set_ivol_sh(const ivol_sh& value)  {
            m_ivol_sh = value;
        }
        void set_wt_ve_dd(const wt_ve_dd& value)  {
            m_wt_ve_dd = value;
        }
        void set_wt_ve_dn(const wt_ve_dn& value)  {
            m_wt_ve_dn = value;
        }
        void set_wt_ve_at(const wt_ve_at& value)  {
            m_wt_ve_at = value;
        }
        void set_wt_ve_up(const wt_ve_up& value)  {
            m_wt_ve_up = value;
        }
        void set_wt_ve_du(const wt_ve_du& value)  {
            m_wt_ve_du = value;
        }
        void set_abs_clr_cn(const abs_clr_cn& value)  {
            m_abs_clr_cn = value;
        }
        void set_abs_cur_cn(const abs_cur_cn& value)  {
            m_abs_cur_cn = value;
        }
        void set_prem_ov_par(const prem_ov_par& value)  {
            m_prem_ov_par = value;
        }
        void set_op_pnl_vol(const op_pnl_vol& value)  {
            m_op_pnl_vol = value;
        }
        void set_op_pnl_mid(const op_pnl_mid& value)  {
            m_op_pnl_mid = value;
        }
        void set_op_pnl_clr(const op_pnl_clr& value)  {
            m_op_pnl_clr = value;
        }
        void set_op_day_vega(const op_day_vega& value)  {
            m_op_day_vega = value;
        }
        void set_op_day_wvega(const op_day_wvega& value)  {
            m_op_day_wvega = value;
        }
        void set_op_day_tvega(const op_day_tvega& value)  {
            m_op_day_tvega = value;
        }
        void set_op_day_wt_vega(const op_day_wt_vega& value)  {
            m_op_day_wt_vega = value;
        }
        void set_op_day_theta(const op_day_theta& value)  {
            m_op_day_theta = value;
        }
        void set_op_edge_opened(const op_edge_opened& value)  {
            m_op_edge_opened = value;
        }
        void set_op_edge_closed(const op_edge_closed& value)  {
            m_op_edge_closed = value;
        }
        void set_pnl_dn(const pnl_dn& value)  {
            m_pnl_dn = value;
        }
        void set_pnl_de(const pnl_de& value)  {
            m_pnl_de = value;
        }
        void set_pnl_sl(const pnl_sl& value)  {
            m_pnl_sl = value;
        }
        void set_pnl_ga(const pnl_ga& value)  {
            m_pnl_ga = value;
        }
        void set_pnl_th(const pnl_th& value)  {
            m_pnl_th = value;
        }
        void set_pnl_ve(const pnl_ve& value)  {
            m_pnl_ve = value;
        }
        void set_pnl_vo(const pnl_vo& value)  {
            m_pnl_vo = value;
        }
        void set_pnl_va(const pnl_va& value)  {
            m_pnl_va = value;
        }
        void set_pnl_ddiv(const pnl_ddiv& value)  {
            m_pnl_ddiv = value;
        }
        void set_pnl_sdiv(const pnl_sdiv& value)  {
            m_pnl_sdiv = value;
        }
        void set_pnl_rate(const pnl_rate& value)  {
            m_pnl_rate = value;
        }
        void set_pnl_err(const pnl_err& value)  {
            m_pnl_err = value;
        }
        void set_pnl_te(const pnl_te& value)  {
            m_pnl_te = value;
        }
        void set_pnl_ln(const pnl_ln& value)  {
            m_pnl_ln = value;
        }
        void set_pnl_sh(const pnl_sh& value)  {
            m_pnl_sh = value;
        }
        void set_t_edge(const t_edge& value)  {
            m_t_edge = value;
        }
        void set_t_edge_mult(const t_edge_mult& value)  {
            m_t_edge_mult = value;
        }
        void set_t_edge_pr(const t_edge_pr& value)  {
            m_t_edge_pr = value;
        }
        void set_t_edge_mult_pr(const t_edge_mult_pr& value)  {
            m_t_edge_mult_pr = value;
        }
        void set_pos_tedge_pnl(const pos_tedge_pnl& value)  {
            m_pos_tedge_pnl = value;
        }
        void set_neg_tedge_pnl(const neg_tedge_pnl& value)  {
            m_neg_tedge_pnl = value;
        }
        void set_bad_tedge_pnl(const bad_tedge_pnl& value)  {
            m_bad_tedge_pnl = value;
        }
        void set_va_rsu90(const va_rsu90& value)  {
            m_va_rsu90 = value;
        }
        void set_va_rsd90(const va_rsd90& value)  {
            m_va_rsd90 = value;
        }
        void set_va_rsu50(const va_rsu50& value)  {
            m_va_rsu50 = value;
        }
        void set_va_rsd50(const va_rsd50& value)  {
            m_va_rsd50 = value;
        }
        void set_va_rsu15(const va_rsu15& value)  {
            m_va_rsu15 = value;
        }
        void set_va_rsd15(const va_rsd15& value)  {
            m_va_rsd15 = value;
        }
        void set_va_rsu10(const va_rsu10& value)  {
            m_va_rsu10 = value;
        }
        void set_va_rsd10(const va_rsd10& value)  {
            m_va_rsd10 = value;
        }
        void set_va_rsu05(const va_rsu05& value)  {
            m_va_rsu05 = value;
        }
        void set_va_rsd05(const va_rsd05& value)  {
            m_va_rsd05 = value;
        }
        void set_va_rsu1e(const va_rsu1e& value)  {
            m_va_rsu1e = value;
        }
        void set_va_rsd1e(const va_rsd1e& value)  {
            m_va_rsd1e = value;
        }
        void set_va_rsu2e(const va_rsu2e& value)  {
            m_va_rsu2e = value;
        }
        void set_va_rsd2e(const va_rsd2e& value)  {
            m_va_rsd2e = value;
        }
        void set_va_rearn(const va_rearn& value)  {
            m_va_rearn = value;
        }
        void set_va_rcash(const va_rcash& value)  {
            m_va_rcash = value;
        }
        void set_last_activity(const last_activity& value)  {
            m_last_activity = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpirationRiskRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const vega_long & value) {
            set_vega_long(value);
        }
        void set(const vega_short & value) {
            set_vega_short(value);
        }
        void set(const w_vega_long & value) {
            set_w_vega_long(value);
        }
        void set(const w_vega_short & value) {
            set_w_vega_short(value);
        }
        void set(const wt_vega_long & value) {
            set_wt_vega_long(value);
        }
        void set(const wt_vega_short & value) {
            set_wt_vega_short(value);
        }
        void set(const theta_long & value) {
            set_theta_long(value);
        }
        void set(const theta_short & value) {
            set_theta_short(value);
        }
        void set(const rho_long & value) {
            set_rho_long(value);
        }
        void set(const rho_short & value) {
            set_rho_short(value);
        }
        void set(const d_gamma_long & value) {
            set_d_gamma_long(value);
        }
        void set(const d_gamma_short & value) {
            set_d_gamma_short(value);
        }
        void set(const d_beta_ga_long & value) {
            set_d_beta_ga_long(value);
        }
        void set(const d_beta_ga_short & value) {
            set_d_beta_ga_short(value);
        }
        void set(const ivol_ln & value) {
            set_ivol_ln(value);
        }
        void set(const ivol_sh & value) {
            set_ivol_sh(value);
        }
        void set(const wt_ve_dd & value) {
            set_wt_ve_dd(value);
        }
        void set(const wt_ve_dn & value) {
            set_wt_ve_dn(value);
        }
        void set(const wt_ve_at & value) {
            set_wt_ve_at(value);
        }
        void set(const wt_ve_up & value) {
            set_wt_ve_up(value);
        }
        void set(const wt_ve_du & value) {
            set_wt_ve_du(value);
        }
        void set(const abs_clr_cn & value) {
            set_abs_clr_cn(value);
        }
        void set(const abs_cur_cn & value) {
            set_abs_cur_cn(value);
        }
        void set(const prem_ov_par & value) {
            set_prem_ov_par(value);
        }
        void set(const op_pnl_vol & value) {
            set_op_pnl_vol(value);
        }
        void set(const op_pnl_mid & value) {
            set_op_pnl_mid(value);
        }
        void set(const op_pnl_clr & value) {
            set_op_pnl_clr(value);
        }
        void set(const op_day_vega & value) {
            set_op_day_vega(value);
        }
        void set(const op_day_wvega & value) {
            set_op_day_wvega(value);
        }
        void set(const op_day_tvega & value) {
            set_op_day_tvega(value);
        }
        void set(const op_day_wt_vega & value) {
            set_op_day_wt_vega(value);
        }
        void set(const op_day_theta & value) {
            set_op_day_theta(value);
        }
        void set(const op_edge_opened & value) {
            set_op_edge_opened(value);
        }
        void set(const op_edge_closed & value) {
            set_op_edge_closed(value);
        }
        void set(const pnl_dn & value) {
            set_pnl_dn(value);
        }
        void set(const pnl_de & value) {
            set_pnl_de(value);
        }
        void set(const pnl_sl & value) {
            set_pnl_sl(value);
        }
        void set(const pnl_ga & value) {
            set_pnl_ga(value);
        }
        void set(const pnl_th & value) {
            set_pnl_th(value);
        }
        void set(const pnl_ve & value) {
            set_pnl_ve(value);
        }
        void set(const pnl_vo & value) {
            set_pnl_vo(value);
        }
        void set(const pnl_va & value) {
            set_pnl_va(value);
        }
        void set(const pnl_ddiv & value) {
            set_pnl_ddiv(value);
        }
        void set(const pnl_sdiv & value) {
            set_pnl_sdiv(value);
        }
        void set(const pnl_rate & value) {
            set_pnl_rate(value);
        }
        void set(const pnl_err & value) {
            set_pnl_err(value);
        }
        void set(const pnl_te & value) {
            set_pnl_te(value);
        }
        void set(const pnl_ln & value) {
            set_pnl_ln(value);
        }
        void set(const pnl_sh & value) {
            set_pnl_sh(value);
        }
        void set(const t_edge & value) {
            set_t_edge(value);
        }
        void set(const t_edge_mult & value) {
            set_t_edge_mult(value);
        }
        void set(const t_edge_pr & value) {
            set_t_edge_pr(value);
        }
        void set(const t_edge_mult_pr & value) {
            set_t_edge_mult_pr(value);
        }
        void set(const pos_tedge_pnl & value) {
            set_pos_tedge_pnl(value);
        }
        void set(const neg_tedge_pnl & value) {
            set_neg_tedge_pnl(value);
        }
        void set(const bad_tedge_pnl & value) {
            set_bad_tedge_pnl(value);
        }
        void set(const va_rsu90 & value) {
            set_va_rsu90(value);
        }
        void set(const va_rsd90 & value) {
            set_va_rsd90(value);
        }
        void set(const va_rsu50 & value) {
            set_va_rsu50(value);
        }
        void set(const va_rsd50 & value) {
            set_va_rsd50(value);
        }
        void set(const va_rsu15 & value) {
            set_va_rsu15(value);
        }
        void set(const va_rsd15 & value) {
            set_va_rsd15(value);
        }
        void set(const va_rsu10 & value) {
            set_va_rsu10(value);
        }
        void set(const va_rsd10 & value) {
            set_va_rsd10(value);
        }
        void set(const va_rsu05 & value) {
            set_va_rsu05(value);
        }
        void set(const va_rsd05 & value) {
            set_va_rsd05(value);
        }
        void set(const va_rsu1e & value) {
            set_va_rsu1e(value);
        }
        void set(const va_rsd1e & value) {
            set_va_rsd1e(value);
        }
        void set(const va_rsu2e & value) {
            set_va_rsu2e(value);
        }
        void set(const va_rsd2e & value) {
            set_va_rsd2e(value);
        }
        void set(const va_rearn & value) {
            set_va_rearn(value);
        }
        void set(const va_rcash & value) {
            set_va_rcash(value);
        }
        void set(const last_activity & value) {
            set_last_activity(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ExpirationRiskRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_vega_long);
            set(value.m_vega_short);
            set(value.m_w_vega_long);
            set(value.m_w_vega_short);
            set(value.m_wt_vega_long);
            set(value.m_wt_vega_short);
            set(value.m_theta_long);
            set(value.m_theta_short);
            set(value.m_rho_long);
            set(value.m_rho_short);
            set(value.m_d_gamma_long);
            set(value.m_d_gamma_short);
            set(value.m_d_beta_ga_long);
            set(value.m_d_beta_ga_short);
            set(value.m_ivol_ln);
            set(value.m_ivol_sh);
            set(value.m_wt_ve_dd);
            set(value.m_wt_ve_dn);
            set(value.m_wt_ve_at);
            set(value.m_wt_ve_up);
            set(value.m_wt_ve_du);
            set(value.m_abs_clr_cn);
            set(value.m_abs_cur_cn);
            set(value.m_prem_ov_par);
            set(value.m_op_pnl_vol);
            set(value.m_op_pnl_mid);
            set(value.m_op_pnl_clr);
            set(value.m_op_day_vega);
            set(value.m_op_day_wvega);
            set(value.m_op_day_tvega);
            set(value.m_op_day_wt_vega);
            set(value.m_op_day_theta);
            set(value.m_op_edge_opened);
            set(value.m_op_edge_closed);
            set(value.m_pnl_dn);
            set(value.m_pnl_de);
            set(value.m_pnl_sl);
            set(value.m_pnl_ga);
            set(value.m_pnl_th);
            set(value.m_pnl_ve);
            set(value.m_pnl_vo);
            set(value.m_pnl_va);
            set(value.m_pnl_ddiv);
            set(value.m_pnl_sdiv);
            set(value.m_pnl_rate);
            set(value.m_pnl_err);
            set(value.m_pnl_te);
            set(value.m_pnl_ln);
            set(value.m_pnl_sh);
            set(value.m_t_edge);
            set(value.m_t_edge_mult);
            set(value.m_t_edge_pr);
            set(value.m_t_edge_mult_pr);
            set(value.m_pos_tedge_pnl);
            set(value.m_neg_tedge_pnl);
            set(value.m_bad_tedge_pnl);
            set(value.m_va_rsu90);
            set(value.m_va_rsd90);
            set(value.m_va_rsu50);
            set(value.m_va_rsd50);
            set(value.m_va_rsu15);
            set(value.m_va_rsd15);
            set(value.m_va_rsu10);
            set(value.m_va_rsd10);
            set(value.m_va_rsu05);
            set(value.m_va_rsd05);
            set(value.m_va_rsu1e);
            set(value.m_va_rsd1e);
            set(value.m_va_rsu2e);
            set(value.m_va_rsd2e);
            set(value.m_va_rearn);
            set(value.m_va_rcash);
            set(value.m_last_activity);
            set(value.m_timestamp);
        }

        ExpirationRiskRecordV5() {
            m__meta.set_message_type("ExpirationRiskRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4765, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4765, length);
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
             *this = ExpirationRiskRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeVegaLong() const {
            return !(m_vega_long == 0.0);
        }
        bool IncludeVegaShort() const {
            return !(m_vega_short == 0.0);
        }
        bool IncludeWVegaLong() const {
            return !(m_w_vega_long == 0.0);
        }
        bool IncludeWVegaShort() const {
            return !(m_w_vega_short == 0.0);
        }
        bool IncludeWtVegaLong() const {
            return !(m_wt_vega_long == 0.0);
        }
        bool IncludeWtVegaShort() const {
            return !(m_wt_vega_short == 0.0);
        }
        bool IncludeThetaLong() const {
            return !(m_theta_long == 0.0);
        }
        bool IncludeThetaShort() const {
            return !(m_theta_short == 0.0);
        }
        bool IncludeRhoLong() const {
            return !(m_rho_long == 0.0);
        }
        bool IncludeRhoShort() const {
            return !(m_rho_short == 0.0);
        }
        bool IncludeDGammaLong() const {
            return !(m_d_gamma_long == 0.0);
        }
        bool IncludeDGammaShort() const {
            return !(m_d_gamma_short == 0.0);
        }
        bool IncludeDBetaGaLong() const {
            return !(m_d_beta_ga_long == 0.0);
        }
        bool IncludeDBetaGaShort() const {
            return !(m_d_beta_ga_short == 0.0);
        }
        bool IncludeIvolLn() const {
            return !(m_ivol_ln == 0.0);
        }
        bool IncludeIvolSh() const {
            return !(m_ivol_sh == 0.0);
        }
        bool IncludeWtVeDd() const {
            return !(m_wt_ve_dd == 0.0);
        }
        bool IncludeWtVeDn() const {
            return !(m_wt_ve_dn == 0.0);
        }
        bool IncludeWtVeAt() const {
            return !(m_wt_ve_at == 0.0);
        }
        bool IncludeWtVeUp() const {
            return !(m_wt_ve_up == 0.0);
        }
        bool IncludeWtVeDu() const {
            return !(m_wt_ve_du == 0.0);
        }
        bool IncludeAbsClrCn() const {
            return !(m_abs_clr_cn == 0);
        }
        bool IncludeAbsCurCn() const {
            return !(m_abs_cur_cn == 0);
        }
        bool IncludePremOvPar() const {
            return !(m_prem_ov_par == 0.0);
        }
        bool IncludeOpPnlVol() const {
            return !(m_op_pnl_vol == 0.0);
        }
        bool IncludeOpPnlMid() const {
            return !(m_op_pnl_mid == 0.0);
        }
        bool IncludeOpPnlClr() const {
            return !(m_op_pnl_clr == 0.0);
        }
        bool IncludeOpDayVega() const {
            return !(m_op_day_vega == 0.0);
        }
        bool IncludeOpDayWvega() const {
            return !(m_op_day_wvega == 0.0);
        }
        bool IncludeOpDayTvega() const {
            return !(m_op_day_tvega == 0.0);
        }
        bool IncludeOpDayWtVega() const {
            return !(m_op_day_wt_vega == 0.0);
        }
        bool IncludeOpDayTheta() const {
            return !(m_op_day_theta == 0.0);
        }
        bool IncludeOpEdgeOpened() const {
            return !(m_op_edge_opened == 0.0);
        }
        bool IncludeOpEdgeClosed() const {
            return !(m_op_edge_closed == 0.0);
        }
        bool IncludePnlDn() const {
            return !(m_pnl_dn == 0.0);
        }
        bool IncludePnlDe() const {
            return !(m_pnl_de == 0.0);
        }
        bool IncludePnlSl() const {
            return !(m_pnl_sl == 0.0);
        }
        bool IncludePnlGa() const {
            return !(m_pnl_ga == 0.0);
        }
        bool IncludePnlTh() const {
            return !(m_pnl_th == 0.0);
        }
        bool IncludePnlVe() const {
            return !(m_pnl_ve == 0.0);
        }
        bool IncludePnlVo() const {
            return !(m_pnl_vo == 0.0);
        }
        bool IncludePnlVa() const {
            return !(m_pnl_va == 0.0);
        }
        bool IncludePnlDdiv() const {
            return !(m_pnl_ddiv == 0.0);
        }
        bool IncludePnlSdiv() const {
            return !(m_pnl_sdiv == 0.0);
        }
        bool IncludePnlRate() const {
            return !(m_pnl_rate == 0.0);
        }
        bool IncludePnlErr() const {
            return !(m_pnl_err == 0.0);
        }
        bool IncludePnlTe() const {
            return !(m_pnl_te == 0.0);
        }
        bool IncludePnlLn() const {
            return !(m_pnl_ln == 0.0);
        }
        bool IncludePnlSh() const {
            return !(m_pnl_sh == 0.0);
        }
        bool IncludeTEdge() const {
            return !(m_t_edge == 0.0);
        }
        bool IncludeTEdgeMult() const {
            return !(m_t_edge_mult == 0.0);
        }
        bool IncludeTEdgePr() const {
            return !(m_t_edge_pr == 0.0);
        }
        bool IncludeTEdgeMultPr() const {
            return !(m_t_edge_mult_pr == 0.0);
        }
        bool IncludePosTedgePnl() const {
            return !(m_pos_tedge_pnl == 0.0);
        }
        bool IncludeNegTedgePnl() const {
            return !(m_neg_tedge_pnl == 0.0);
        }
        bool IncludeBadTedgePnl() const {
            return !(m_bad_tedge_pnl == 0.0);
        }
        bool IncludeVaRsu90() const {
            return !(m_va_rsu90 == 0.0);
        }
        bool IncludeVaRsd90() const {
            return !(m_va_rsd90 == 0.0);
        }
        bool IncludeVaRsu50() const {
            return !(m_va_rsu50 == 0.0);
        }
        bool IncludeVaRsd50() const {
            return !(m_va_rsd50 == 0.0);
        }
        bool IncludeVaRsu15() const {
            return !(m_va_rsu15 == 0.0);
        }
        bool IncludeVaRsd15() const {
            return !(m_va_rsd15 == 0.0);
        }
        bool IncludeVaRsu10() const {
            return !(m_va_rsu10 == 0.0);
        }
        bool IncludeVaRsd10() const {
            return !(m_va_rsd10 == 0.0);
        }
        bool IncludeVaRsu05() const {
            return !(m_va_rsu05 == 0.0);
        }
        bool IncludeVaRsd05() const {
            return !(m_va_rsd05 == 0.0);
        }
        bool IncludeVaRsu1e() const {
            return !(m_va_rsu1e == 0.0);
        }
        bool IncludeVaRsd1e() const {
            return !(m_va_rsd1e == 0.0);
        }
        bool IncludeVaRsu2e() const {
            return !(m_va_rsu2e == 0.0);
        }
        bool IncludeVaRsd2e() const {
            return !(m_va_rsd2e == 0.0);
        }
        bool IncludeVaRearn() const {
            return !(m_va_rearn == 0.0);
        }
        bool IncludeVaRcash() const {
            return !(m_va_rcash == 0.0);
        }
        bool IncludeLastActivity() const {
            return (m_last_activity.time_since_epoch().count() != 0);
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
            if ( IncludeVegaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_vega_long);
            }
            if ( IncludeVegaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_vega_short);
            }
            if ( IncludeWVegaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_w_vega_long);
            }
            if ( IncludeWVegaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_w_vega_short);
            }
            if ( IncludeWtVegaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_wt_vega_long);
            }
            if ( IncludeWtVegaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_wt_vega_short);
            }
            if ( IncludeThetaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_theta_long);
            }
            if ( IncludeThetaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_theta_short);
            }
            if ( IncludeRhoLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_rho_long);
            }
            if ( IncludeRhoShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_rho_short);
            }
            if ( IncludeDGammaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_d_gamma_long);
            }
            if ( IncludeDGammaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_d_gamma_short);
            }
            if ( IncludeDBetaGaLong()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_d_beta_ga_long);
            }
            if ( IncludeDBetaGaShort()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_d_beta_ga_short);
            }
            if ( IncludeIvolLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_ivol_ln);
            }
            if ( IncludeIvolSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_ivol_sh);
            }
            if ( IncludeWtVeDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_wt_ve_du);
            }
            if ( IncludeAbsClrCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_abs_clr_cn);
            }
            if ( IncludeAbsCurCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_abs_cur_cn);
            }
            if ( IncludePremOvPar()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_prem_ov_par);
            }
            if ( IncludeOpPnlVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_op_pnl_vol);
            }
            if ( IncludeOpPnlMid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_op_pnl_mid);
            }
            if ( IncludeOpPnlClr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_op_pnl_clr);
            }
            if ( IncludeOpDayVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_op_day_theta);
            }
            if ( IncludeOpEdgeOpened()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_pnl_va);
            }
            if ( IncludePnlDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_pnl_ddiv);
            }
            if ( IncludePnlSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_pnl_sdiv);
            }
            if ( IncludePnlRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_pnl_rate);
            }
            if ( IncludePnlErr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_pnl_err);
            }
            if ( IncludePnlTe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_pnl_te);
            }
            if ( IncludePnlLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_pnl_ln);
            }
            if ( IncludePnlSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_pnl_sh);
            }
            if ( IncludeTEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_t_edge_mult);
            }
            if ( IncludeTEdgePr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_t_edge_pr);
            }
            if ( IncludeTEdgeMultPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_t_edge_mult_pr);
            }
            if ( IncludePosTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_bad_tedge_pnl);
            }
            if ( IncludeVaRsu90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_va_rsu90);
            }
            if ( IncludeVaRsd90()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_va_rsd90);
            }
            if ( IncludeVaRsu50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_va_rsu50);
            }
            if ( IncludeVaRsd50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_va_rsd50);
            }
            if ( IncludeVaRsu15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_va_rsu15);
            }
            if ( IncludeVaRsd15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_va_rsd15);
            }
            if ( IncludeVaRsu10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_va_rsu10);
            }
            if ( IncludeVaRsd10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_va_rsd10);
            }
            if ( IncludeVaRsu05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(298,m_va_rsu05);
            }
            if ( IncludeVaRsd05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(301,m_va_rsd05);
            }
            if ( IncludeVaRsu1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_va_rsu1e);
            }
            if ( IncludeVaRsd1e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_va_rsd1e);
            }
            if ( IncludeVaRsu2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_va_rsu2e);
            }
            if ( IncludeVaRsd2e()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_va_rsd2e);
            }
            if ( IncludeVaRearn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_va_rearn);
            }
            if ( IncludeVaRcash()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(319,m_va_rcash);
            }
            if ( IncludeLastActivity()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(322, m_last_activity);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(325, m_timestamp);
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
            if ( IncludeVegaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_vega_long);
            }
            if ( IncludeVegaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_vega_short);
            }
            if ( IncludeWVegaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_w_vega_long);
            }
            if ( IncludeWVegaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_w_vega_short);
            }
            if ( IncludeWtVegaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_wt_vega_long);
            }
            if ( IncludeWtVegaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_wt_vega_short);
            }
            if ( IncludeThetaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_theta_long);
            }
            if ( IncludeThetaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_theta_short);
            }
            if ( IncludeRhoLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_rho_long);
            }
            if ( IncludeRhoShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_rho_short);
            }
            if ( IncludeDGammaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_d_gamma_long);
            }
            if ( IncludeDGammaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_d_gamma_short);
            }
            if ( IncludeDBetaGaLong()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_d_beta_ga_long);
            }
            if ( IncludeDBetaGaShort()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_d_beta_ga_short);
            }
            if ( IncludeIvolLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_ivol_ln);
            }
            if ( IncludeIvolSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_ivol_sh);
            }
            if ( IncludeWtVeDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_wt_ve_dd);
            }
            if ( IncludeWtVeDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_wt_ve_dn);
            }
            if ( IncludeWtVeAt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_wt_ve_at);
            }
            if ( IncludeWtVeUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_wt_ve_up);
            }
            if ( IncludeWtVeDu()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_wt_ve_du);
            }
            if ( IncludeAbsClrCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_abs_clr_cn);
            }
            if ( IncludeAbsCurCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_abs_cur_cn);
            }
            if ( IncludePremOvPar()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_prem_ov_par);
            }
            if ( IncludeOpPnlVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_op_pnl_vol);
            }
            if ( IncludeOpPnlMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_op_pnl_mid);
            }
            if ( IncludeOpPnlClr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_op_pnl_clr);
            }
            if ( IncludeOpDayVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_op_day_vega);
            }
            if ( IncludeOpDayWvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_op_day_wvega);
            }
            if ( IncludeOpDayTvega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_op_day_tvega);
            }
            if ( IncludeOpDayWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_op_day_wt_vega);
            }
            if ( IncludeOpDayTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_op_day_theta);
            }
            if ( IncludeOpEdgeOpened()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_op_edge_opened);
            }
            if ( IncludeOpEdgeClosed()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_op_edge_closed);
            }
            if ( IncludePnlDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_pnl_dn);
            }
            if ( IncludePnlDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_pnl_de);
            }
            if ( IncludePnlSl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_pnl_sl);
            }
            if ( IncludePnlGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_pnl_ga);
            }
            if ( IncludePnlTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_pnl_th);
            }
            if ( IncludePnlVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_pnl_ve);
            }
            if ( IncludePnlVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_pnl_vo);
            }
            if ( IncludePnlVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_pnl_va);
            }
            if ( IncludePnlDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_pnl_ddiv);
            }
            if ( IncludePnlSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_pnl_sdiv);
            }
            if ( IncludePnlRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_pnl_rate);
            }
            if ( IncludePnlErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_pnl_err);
            }
            if ( IncludePnlTe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_pnl_te);
            }
            if ( IncludePnlLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_pnl_ln);
            }
            if ( IncludePnlSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_pnl_sh);
            }
            if ( IncludeTEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_t_edge);
            }
            if ( IncludeTEdgeMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_t_edge_mult);
            }
            if ( IncludeTEdgePr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_t_edge_pr);
            }
            if ( IncludeTEdgeMultPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_t_edge_mult_pr);
            }
            if ( IncludePosTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_pos_tedge_pnl);
            }
            if ( IncludeNegTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_neg_tedge_pnl);
            }
            if ( IncludeBadTedgePnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_bad_tedge_pnl);
            }
            if ( IncludeVaRsu90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_va_rsu90);
            }
            if ( IncludeVaRsd90()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_va_rsd90);
            }
            if ( IncludeVaRsu50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_va_rsu50);
            }
            if ( IncludeVaRsd50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_va_rsd50);
            }
            if ( IncludeVaRsu15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_va_rsu15);
            }
            if ( IncludeVaRsd15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_va_rsd15);
            }
            if ( IncludeVaRsu10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_va_rsu10);
            }
            if ( IncludeVaRsd10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_va_rsd10);
            }
            if ( IncludeVaRsu05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,298,m_va_rsu05);
            }
            if ( IncludeVaRsd05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,301,m_va_rsd05);
            }
            if ( IncludeVaRsu1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_va_rsu1e);
            }
            if ( IncludeVaRsd1e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_va_rsd1e);
            }
            if ( IncludeVaRsu2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_va_rsu2e);
            }
            if ( IncludeVaRsd2e()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_va_rsd2e);
            }
            if ( IncludeVaRearn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_va_rearn);
            }
            if ( IncludeVaRcash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,319,m_va_rcash);
            }
            if ( IncludeLastActivity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 322, m_last_activity);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 325, m_timestamp);
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
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_w_vega_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_w_vega_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_vega_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_vega_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theta_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rho_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_gamma_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_gamma_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_beta_ga_long = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_d_beta_ga_short = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ivol_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_at = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_du = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_abs_clr_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_abs_cur_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prem_ov_par = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_pnl_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_pnl_mid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_pnl_clr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_tvega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_day_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_opened = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_op_edge_closed = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_err = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_te = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_edge_mult_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pos_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_neg_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bad_tedge_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd90 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd1e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsu2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rsd2e = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rearn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va_rcash = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_activity = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 325: {
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

    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::_meta>() const { return ExpirationRiskRecordV5::_meta{ m__meta}; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pkey>() const { return ExpirationRiskRecordV5::pkey{ m_pkey}; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::vega_long>() const { return m_vega_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::vega_short>() const { return m_vega_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::w_vega_long>() const { return m_w_vega_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::w_vega_short>() const { return m_w_vega_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_vega_long>() const { return m_wt_vega_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_vega_short>() const { return m_wt_vega_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::theta_long>() const { return m_theta_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::theta_short>() const { return m_theta_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::rho_long>() const { return m_rho_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::rho_short>() const { return m_rho_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::d_gamma_long>() const { return m_d_gamma_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::d_gamma_short>() const { return m_d_gamma_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::d_beta_ga_long>() const { return m_d_beta_ga_long; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::d_beta_ga_short>() const { return m_d_beta_ga_short; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::ivol_ln>() const { return m_ivol_ln; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::ivol_sh>() const { return m_ivol_sh; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_ve_dd>() const { return m_wt_ve_dd; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_ve_dn>() const { return m_wt_ve_dn; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_ve_at>() const { return m_wt_ve_at; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_ve_up>() const { return m_wt_ve_up; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::wt_ve_du>() const { return m_wt_ve_du; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::abs_clr_cn>() const { return m_abs_clr_cn; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::abs_cur_cn>() const { return m_abs_cur_cn; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::prem_ov_par>() const { return m_prem_ov_par; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_pnl_vol>() const { return m_op_pnl_vol; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_pnl_mid>() const { return m_op_pnl_mid; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_pnl_clr>() const { return m_op_pnl_clr; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_day_vega>() const { return m_op_day_vega; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_day_wvega>() const { return m_op_day_wvega; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_day_tvega>() const { return m_op_day_tvega; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_day_wt_vega>() const { return m_op_day_wt_vega; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_day_theta>() const { return m_op_day_theta; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_edge_opened>() const { return m_op_edge_opened; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::op_edge_closed>() const { return m_op_edge_closed; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_dn>() const { return m_pnl_dn; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_de>() const { return m_pnl_de; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_sl>() const { return m_pnl_sl; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_ga>() const { return m_pnl_ga; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_th>() const { return m_pnl_th; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_ve>() const { return m_pnl_ve; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_vo>() const { return m_pnl_vo; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_va>() const { return m_pnl_va; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_ddiv>() const { return m_pnl_ddiv; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_sdiv>() const { return m_pnl_sdiv; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_rate>() const { return m_pnl_rate; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_err>() const { return m_pnl_err; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_te>() const { return m_pnl_te; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_ln>() const { return m_pnl_ln; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pnl_sh>() const { return m_pnl_sh; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::t_edge>() const { return m_t_edge; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::t_edge_mult>() const { return m_t_edge_mult; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::t_edge_pr>() const { return m_t_edge_pr; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::t_edge_mult_pr>() const { return m_t_edge_mult_pr; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::pos_tedge_pnl>() const { return m_pos_tedge_pnl; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::neg_tedge_pnl>() const { return m_neg_tedge_pnl; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::bad_tedge_pnl>() const { return m_bad_tedge_pnl; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu90>() const { return m_va_rsu90; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd90>() const { return m_va_rsd90; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu50>() const { return m_va_rsu50; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd50>() const { return m_va_rsd50; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu15>() const { return m_va_rsu15; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd15>() const { return m_va_rsd15; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu10>() const { return m_va_rsu10; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd10>() const { return m_va_rsd10; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu05>() const { return m_va_rsu05; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd05>() const { return m_va_rsd05; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu1e>() const { return m_va_rsu1e; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd1e>() const { return m_va_rsd1e; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsu2e>() const { return m_va_rsu2e; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rsd2e>() const { return m_va_rsd2e; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rearn>() const { return m_va_rearn; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::va_rcash>() const { return m_va_rcash; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::last_activity>() const { return m_last_activity; }
    template<> inline const auto ExpirationRiskRecordV5::get<ExpirationRiskRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto ExpirationRiskRecordV5_PKey::get<ExpirationRiskRecordV5_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ExpirationRiskRecordV5_PKey::get<ExpirationRiskRecordV5_PKey::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency));}
    template<> inline const auto ExpirationRiskRecordV5_PKey::get<ExpirationRiskRecordV5_PKey::expiration>() const { return ExpirationRiskRecordV5_PKey::expiration{m_expiration}; }
    template<> inline const auto ExpirationRiskRecordV5_PKey::get<ExpirationRiskRecordV5_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ExpirationRiskRecordV5_PKey& m) {
        o << "\"accnt\":\"" << m.get<ExpirationRiskRecordV5_PKey::accnt>() << "\"";
        o << ",\"currency\":" << (int64_t)m.get<ExpirationRiskRecordV5_PKey::currency>();
        o << ",\"expiration\":{" << m.get<ExpirationRiskRecordV5_PKey::expiration>() << "}";
        o << ",\"client_firm\":\"" << m.get<ExpirationRiskRecordV5_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ExpirationRiskRecordV5& m) {
        o << "\"_meta\":{" << m.get<ExpirationRiskRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ExpirationRiskRecordV5::pkey>() << "}";
        o << ",\"vega_long\":" << m.get<ExpirationRiskRecordV5::vega_long>();
        o << ",\"vega_short\":" << m.get<ExpirationRiskRecordV5::vega_short>();
        o << ",\"w_vega_long\":" << m.get<ExpirationRiskRecordV5::w_vega_long>();
        o << ",\"w_vega_short\":" << m.get<ExpirationRiskRecordV5::w_vega_short>();
        o << ",\"wt_vega_long\":" << m.get<ExpirationRiskRecordV5::wt_vega_long>();
        o << ",\"wt_vega_short\":" << m.get<ExpirationRiskRecordV5::wt_vega_short>();
        o << ",\"theta_long\":" << m.get<ExpirationRiskRecordV5::theta_long>();
        o << ",\"theta_short\":" << m.get<ExpirationRiskRecordV5::theta_short>();
        o << ",\"rho_long\":" << m.get<ExpirationRiskRecordV5::rho_long>();
        o << ",\"rho_short\":" << m.get<ExpirationRiskRecordV5::rho_short>();
        o << ",\"d_gamma_long\":" << m.get<ExpirationRiskRecordV5::d_gamma_long>();
        o << ",\"d_gamma_short\":" << m.get<ExpirationRiskRecordV5::d_gamma_short>();
        o << ",\"d_beta_ga_long\":" << m.get<ExpirationRiskRecordV5::d_beta_ga_long>();
        o << ",\"d_beta_ga_short\":" << m.get<ExpirationRiskRecordV5::d_beta_ga_short>();
        o << ",\"ivol_ln\":" << m.get<ExpirationRiskRecordV5::ivol_ln>();
        o << ",\"ivol_sh\":" << m.get<ExpirationRiskRecordV5::ivol_sh>();
        o << ",\"wt_ve_dd\":" << m.get<ExpirationRiskRecordV5::wt_ve_dd>();
        o << ",\"wt_ve_dn\":" << m.get<ExpirationRiskRecordV5::wt_ve_dn>();
        o << ",\"wt_ve_at\":" << m.get<ExpirationRiskRecordV5::wt_ve_at>();
        o << ",\"wt_ve_up\":" << m.get<ExpirationRiskRecordV5::wt_ve_up>();
        o << ",\"wt_ve_du\":" << m.get<ExpirationRiskRecordV5::wt_ve_du>();
        o << ",\"abs_clr_cn\":" << m.get<ExpirationRiskRecordV5::abs_clr_cn>();
        o << ",\"abs_cur_cn\":" << m.get<ExpirationRiskRecordV5::abs_cur_cn>();
        o << ",\"prem_ov_par\":" << m.get<ExpirationRiskRecordV5::prem_ov_par>();
        o << ",\"op_pnl_vol\":" << m.get<ExpirationRiskRecordV5::op_pnl_vol>();
        o << ",\"op_pnl_mid\":" << m.get<ExpirationRiskRecordV5::op_pnl_mid>();
        o << ",\"op_pnl_clr\":" << m.get<ExpirationRiskRecordV5::op_pnl_clr>();
        o << ",\"op_day_vega\":" << m.get<ExpirationRiskRecordV5::op_day_vega>();
        o << ",\"op_day_wvega\":" << m.get<ExpirationRiskRecordV5::op_day_wvega>();
        o << ",\"op_day_tvega\":" << m.get<ExpirationRiskRecordV5::op_day_tvega>();
        o << ",\"op_day_wt_vega\":" << m.get<ExpirationRiskRecordV5::op_day_wt_vega>();
        o << ",\"op_day_theta\":" << m.get<ExpirationRiskRecordV5::op_day_theta>();
        o << ",\"op_edge_opened\":" << m.get<ExpirationRiskRecordV5::op_edge_opened>();
        o << ",\"op_edge_closed\":" << m.get<ExpirationRiskRecordV5::op_edge_closed>();
        o << ",\"pnl_dn\":" << m.get<ExpirationRiskRecordV5::pnl_dn>();
        o << ",\"pnl_de\":" << m.get<ExpirationRiskRecordV5::pnl_de>();
        o << ",\"pnl_sl\":" << m.get<ExpirationRiskRecordV5::pnl_sl>();
        o << ",\"pnl_ga\":" << m.get<ExpirationRiskRecordV5::pnl_ga>();
        o << ",\"pnl_th\":" << m.get<ExpirationRiskRecordV5::pnl_th>();
        o << ",\"pnl_ve\":" << m.get<ExpirationRiskRecordV5::pnl_ve>();
        o << ",\"pnl_vo\":" << m.get<ExpirationRiskRecordV5::pnl_vo>();
        o << ",\"pnl_va\":" << m.get<ExpirationRiskRecordV5::pnl_va>();
        o << ",\"pnl_ddiv\":" << m.get<ExpirationRiskRecordV5::pnl_ddiv>();
        o << ",\"pnl_sdiv\":" << m.get<ExpirationRiskRecordV5::pnl_sdiv>();
        o << ",\"pnl_rate\":" << m.get<ExpirationRiskRecordV5::pnl_rate>();
        o << ",\"pnl_err\":" << m.get<ExpirationRiskRecordV5::pnl_err>();
        o << ",\"pnl_te\":" << m.get<ExpirationRiskRecordV5::pnl_te>();
        o << ",\"pnl_ln\":" << m.get<ExpirationRiskRecordV5::pnl_ln>();
        o << ",\"pnl_sh\":" << m.get<ExpirationRiskRecordV5::pnl_sh>();
        o << ",\"t_edge\":" << m.get<ExpirationRiskRecordV5::t_edge>();
        o << ",\"t_edge_mult\":" << m.get<ExpirationRiskRecordV5::t_edge_mult>();
        o << ",\"t_edge_pr\":" << m.get<ExpirationRiskRecordV5::t_edge_pr>();
        o << ",\"t_edge_mult_pr\":" << m.get<ExpirationRiskRecordV5::t_edge_mult_pr>();
        o << ",\"pos_tedge_pnl\":" << m.get<ExpirationRiskRecordV5::pos_tedge_pnl>();
        o << ",\"neg_tedge_pnl\":" << m.get<ExpirationRiskRecordV5::neg_tedge_pnl>();
        o << ",\"bad_tedge_pnl\":" << m.get<ExpirationRiskRecordV5::bad_tedge_pnl>();
        o << ",\"va_rsu90\":" << m.get<ExpirationRiskRecordV5::va_rsu90>();
        o << ",\"va_rsd90\":" << m.get<ExpirationRiskRecordV5::va_rsd90>();
        o << ",\"va_rsu50\":" << m.get<ExpirationRiskRecordV5::va_rsu50>();
        o << ",\"va_rsd50\":" << m.get<ExpirationRiskRecordV5::va_rsd50>();
        o << ",\"va_rsu15\":" << m.get<ExpirationRiskRecordV5::va_rsu15>();
        o << ",\"va_rsd15\":" << m.get<ExpirationRiskRecordV5::va_rsd15>();
        o << ",\"va_rsu10\":" << m.get<ExpirationRiskRecordV5::va_rsu10>();
        o << ",\"va_rsd10\":" << m.get<ExpirationRiskRecordV5::va_rsd10>();
        o << ",\"va_rsu05\":" << m.get<ExpirationRiskRecordV5::va_rsu05>();
        o << ",\"va_rsd05\":" << m.get<ExpirationRiskRecordV5::va_rsd05>();
        o << ",\"va_rsu1e\":" << m.get<ExpirationRiskRecordV5::va_rsu1e>();
        o << ",\"va_rsd1e\":" << m.get<ExpirationRiskRecordV5::va_rsd1e>();
        o << ",\"va_rsu2e\":" << m.get<ExpirationRiskRecordV5::va_rsu2e>();
        o << ",\"va_rsd2e\":" << m.get<ExpirationRiskRecordV5::va_rsd2e>();
        o << ",\"va_rearn\":" << m.get<ExpirationRiskRecordV5::va_rearn>();
        o << ",\"va_rcash\":" << m.get<ExpirationRiskRecordV5::va_rcash>();
        {
            std::time_t tt = m.get<ExpirationRiskRecordV5::last_activity>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_activity\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<ExpirationRiskRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}