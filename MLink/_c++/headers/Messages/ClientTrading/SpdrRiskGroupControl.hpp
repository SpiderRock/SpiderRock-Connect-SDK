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

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _is_disabled__GUARD__
    #define _is_disabled__GUARD__
    DECL_STRONG_TYPE(is_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_disabled__GUARD__

    #ifndef _exp_day_wt_vega_offset__GUARD__
    #define _exp_day_wt_vega_offset__GUARD__
    DECL_STRONG_TYPE(exp_day_wt_vega_offset, float);
    #endif//_exp_day_wt_vega_offset__GUARD__

    #ifndef _max_exp_day_wt_vega_ln__GUARD__
    #define _max_exp_day_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_exp_day_wt_vega_ln, float);
    #endif//_max_exp_day_wt_vega_ln__GUARD__

    #ifndef _max_exp_day_wt_vega_sh__GUARD__
    #define _max_exp_day_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_exp_day_wt_vega_sh, float);
    #endif//_max_exp_day_wt_vega_sh__GUARD__

    #ifndef _max_exp_day_rmetric6_ln__GUARD__
    #define _max_exp_day_rmetric6_ln__GUARD__
    DECL_STRONG_TYPE(max_exp_day_rmetric6_ln, float);
    #endif//_max_exp_day_rmetric6_ln__GUARD__

    #ifndef _max_exp_day_rmetric6_sh__GUARD__
    #define _max_exp_day_rmetric6_sh__GUARD__
    DECL_STRONG_TYPE(max_exp_day_rmetric6_sh, float);
    #endif//_max_exp_day_rmetric6_sh__GUARD__

    #ifndef _sym_day_ddelta_offset__GUARD__
    #define _sym_day_ddelta_offset__GUARD__
    DECL_STRONG_TYPE(sym_day_ddelta_offset, float);
    #endif//_sym_day_ddelta_offset__GUARD__

    #ifndef _max_sym_day_ddelta_ln__GUARD__
    #define _max_sym_day_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_ddelta_ln, float);
    #endif//_max_sym_day_ddelta_ln__GUARD__

    #ifndef _max_sym_day_ddelta_sh__GUARD__
    #define _max_sym_day_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_ddelta_sh, float);
    #endif//_max_sym_day_ddelta_sh__GUARD__

    #ifndef _sym_day_vega_offset__GUARD__
    #define _sym_day_vega_offset__GUARD__
    DECL_STRONG_TYPE(sym_day_vega_offset, float);
    #endif//_sym_day_vega_offset__GUARD__

    #ifndef _max_sym_day_vega_ln__GUARD__
    #define _max_sym_day_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_vega_ln, float);
    #endif//_max_sym_day_vega_ln__GUARD__

    #ifndef _max_sym_day_vega_sh__GUARD__
    #define _max_sym_day_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_vega_sh, float);
    #endif//_max_sym_day_vega_sh__GUARD__

    #ifndef _sym_day_wt_vega_offset__GUARD__
    #define _sym_day_wt_vega_offset__GUARD__
    DECL_STRONG_TYPE(sym_day_wt_vega_offset, float);
    #endif//_sym_day_wt_vega_offset__GUARD__

    #ifndef _max_sym_day_wt_vega_ln__GUARD__
    #define _max_sym_day_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_wt_vega_ln, float);
    #endif//_max_sym_day_wt_vega_ln__GUARD__

    #ifndef _max_sym_day_wt_vega_sh__GUARD__
    #define _max_sym_day_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_wt_vega_sh, float);
    #endif//_max_sym_day_wt_vega_sh__GUARD__

    #ifndef _max_sym_day_rmetric7_ln__GUARD__
    #define _max_sym_day_rmetric7_ln__GUARD__
    DECL_STRONG_TYPE(max_sym_day_rmetric7_ln, float);
    #endif//_max_sym_day_rmetric7_ln__GUARD__

    #ifndef _max_sym_day_rmetric7_sh__GUARD__
    #define _max_sym_day_rmetric7_sh__GUARD__
    DECL_STRONG_TYPE(max_sym_day_rmetric7_sh, float);
    #endif//_max_sym_day_rmetric7_sh__GUARD__

    #ifndef _max_grp_day_contracts_ln__GUARD__
    #define _max_grp_day_contracts_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_ln, int32);
    #endif//_max_grp_day_contracts_ln__GUARD__

    #ifndef _max_grp_day_contracts_sh__GUARD__
    #define _max_grp_day_contracts_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_sh, int32);
    #endif//_max_grp_day_contracts_sh__GUARD__

    #ifndef _max_grp_day_contracts_abs__GUARD__
    #define _max_grp_day_contracts_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_abs, int32);
    #endif//_max_grp_day_contracts_abs__GUARD__

    #ifndef _max_grp_day_ddelta_ln__GUARD__
    #define _max_grp_day_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_ddelta_ln, float);
    #endif//_max_grp_day_ddelta_ln__GUARD__

    #ifndef _max_grp_day_ddelta_sh__GUARD__
    #define _max_grp_day_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_ddelta_sh, float);
    #endif//_max_grp_day_ddelta_sh__GUARD__

    #ifndef _max_grp_day_vega_ln__GUARD__
    #define _max_grp_day_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_ln, float);
    #endif//_max_grp_day_vega_ln__GUARD__

    #ifndef _max_grp_day_vega_sh__GUARD__
    #define _max_grp_day_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_sh, float);
    #endif//_max_grp_day_vega_sh__GUARD__

    #ifndef _max_grp_day_vega_abs__GUARD__
    #define _max_grp_day_vega_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_abs, float);
    #endif//_max_grp_day_vega_abs__GUARD__

    #ifndef _grp_day_vega_ratio__GUARD__
    #define _grp_day_vega_ratio__GUARD__
    DECL_STRONG_TYPE(grp_day_vega_ratio, float);
    #endif//_grp_day_vega_ratio__GUARD__

    #ifndef _max_grp_day_rmetric1_ln__GUARD__
    #define _max_grp_day_rmetric1_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_ln, float);
    #endif//_max_grp_day_rmetric1_ln__GUARD__

    #ifndef _max_grp_day_rmetric1_sh__GUARD__
    #define _max_grp_day_rmetric1_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_sh, float);
    #endif//_max_grp_day_rmetric1_sh__GUARD__

    #ifndef _max_grp_day_rmetric1_abs__GUARD__
    #define _max_grp_day_rmetric1_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_abs, float);
    #endif//_max_grp_day_rmetric1_abs__GUARD__

    #ifndef _grp_day_rmetric1_ratio__GUARD__
    #define _grp_day_rmetric1_ratio__GUARD__
    DECL_STRONG_TYPE(grp_day_rmetric1_ratio, float);
    #endif//_grp_day_rmetric1_ratio__GUARD__

    #ifndef _max_grp_day_rmetric2_ln__GUARD__
    #define _max_grp_day_rmetric2_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric2_ln, float);
    #endif//_max_grp_day_rmetric2_ln__GUARD__

    #ifndef _max_grp_day_rmetric2_sh__GUARD__
    #define _max_grp_day_rmetric2_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric2_sh, float);
    #endif//_max_grp_day_rmetric2_sh__GUARD__

    #ifndef _max_grp_day_rmetric3_ln__GUARD__
    #define _max_grp_day_rmetric3_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric3_ln, float);
    #endif//_max_grp_day_rmetric3_ln__GUARD__

    #ifndef _max_grp_day_rmetric3_sh__GUARD__
    #define _max_grp_day_rmetric3_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric3_sh, float);
    #endif//_max_grp_day_rmetric3_sh__GUARD__

    #ifndef _max_grp_day_rmetric4_ln__GUARD__
    #define _max_grp_day_rmetric4_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric4_ln, float);
    #endif//_max_grp_day_rmetric4_ln__GUARD__

    #ifndef _max_grp_day_rmetric4_sh__GUARD__
    #define _max_grp_day_rmetric4_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric4_sh, float);
    #endif//_max_grp_day_rmetric4_sh__GUARD__

    #ifndef _max_grp_day_rmetric5_ln__GUARD__
    #define _max_grp_day_rmetric5_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric5_ln, float);
    #endif//_max_grp_day_rmetric5_ln__GUARD__

    #ifndef _max_grp_day_rmetric5_sh__GUARD__
    #define _max_grp_day_rmetric5_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric5_sh, float);
    #endif//_max_grp_day_rmetric5_sh__GUARD__

    #ifndef _acc_ema_cxl_ddelta_ln__GUARD__
    #define _acc_ema_cxl_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(acc_ema_cxl_ddelta_ln, float);
    #endif//_acc_ema_cxl_ddelta_ln__GUARD__

    #ifndef _acc_ema_cxl_ddelta_sh__GUARD__
    #define _acc_ema_cxl_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(acc_ema_cxl_ddelta_sh, float);
    #endif//_acc_ema_cxl_ddelta_sh__GUARD__

    #ifndef _acc_ema_cxl_wt_vega_ln__GUARD__
    #define _acc_ema_cxl_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(acc_ema_cxl_wt_vega_ln, float);
    #endif//_acc_ema_cxl_wt_vega_ln__GUARD__

    #ifndef _acc_ema_cxl_wt_vega_sh__GUARD__
    #define _acc_ema_cxl_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(acc_ema_cxl_wt_vega_sh, float);
    #endif//_acc_ema_cxl_wt_vega_sh__GUARD__

    #ifndef _sym_ema_cxl_ddelta_ln__GUARD__
    #define _sym_ema_cxl_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_ddelta_ln, float);
    #endif//_sym_ema_cxl_ddelta_ln__GUARD__

    #ifndef _sym_ema_cxl_ddelta_sh__GUARD__
    #define _sym_ema_cxl_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_ddelta_sh, float);
    #endif//_sym_ema_cxl_ddelta_sh__GUARD__

    #ifndef _sym_ema_cxl_wt_vega_ln__GUARD__
    #define _sym_ema_cxl_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_wt_vega_ln, float);
    #endif//_sym_ema_cxl_wt_vega_ln__GUARD__

    #ifndef _sym_ema_cxl_wt_vega_sh__GUARD__
    #define _sym_ema_cxl_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(sym_ema_cxl_wt_vega_sh, float);
    #endif//_sym_ema_cxl_wt_vega_sh__GUARD__

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

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _risk_firm__GUARD__
    #define _risk_firm__GUARD__
    DECL_STRONG_TYPE(risk_firm, string);
    #endif//_risk_firm__GUARD__

    
    class SpdrRiskGroupControl_PKey {
        public:
        //using statements for all types used in this class
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using accnt = spiderrock::protobuf::api::accnt;
        using risk_firm = spiderrock::protobuf::api::risk_firm;

        private:
        risk_group_id m_risk_group_id{};
        accnt m_accnt{};
        risk_firm m_risk_firm{};

        public:
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
        risk_firm get_risk_firm() const {
            return m_risk_firm;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_risk_firm(const risk_firm& value)  {
            m_risk_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskGroupControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskGroupControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const risk_group_id & value) { set_risk_group_id(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const risk_firm & value) { set_risk_firm(value); }


        SpdrRiskGroupControl_PKey() {}

        virtual ~SpdrRiskGroupControl_PKey() {
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
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeRiskFirm() const {
            return !(m_risk_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_risk_group_id);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeRiskFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_risk_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_risk_group_id);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeRiskFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_risk_firm));
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
                    case 10: {m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_risk_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrRiskGroupControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrRiskGroupControl_PKey;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using exp_day_wt_vega_offset = spiderrock::protobuf::api::exp_day_wt_vega_offset;
        using max_exp_day_wt_vega_ln = spiderrock::protobuf::api::max_exp_day_wt_vega_ln;
        using max_exp_day_wt_vega_sh = spiderrock::protobuf::api::max_exp_day_wt_vega_sh;
        using max_exp_day_rmetric6_ln = spiderrock::protobuf::api::max_exp_day_rmetric6_ln;
        using max_exp_day_rmetric6_sh = spiderrock::protobuf::api::max_exp_day_rmetric6_sh;
        using sym_day_ddelta_offset = spiderrock::protobuf::api::sym_day_ddelta_offset;
        using max_sym_day_ddelta_ln = spiderrock::protobuf::api::max_sym_day_ddelta_ln;
        using max_sym_day_ddelta_sh = spiderrock::protobuf::api::max_sym_day_ddelta_sh;
        using sym_day_vega_offset = spiderrock::protobuf::api::sym_day_vega_offset;
        using max_sym_day_vega_ln = spiderrock::protobuf::api::max_sym_day_vega_ln;
        using max_sym_day_vega_sh = spiderrock::protobuf::api::max_sym_day_vega_sh;
        using sym_day_wt_vega_offset = spiderrock::protobuf::api::sym_day_wt_vega_offset;
        using max_sym_day_wt_vega_ln = spiderrock::protobuf::api::max_sym_day_wt_vega_ln;
        using max_sym_day_wt_vega_sh = spiderrock::protobuf::api::max_sym_day_wt_vega_sh;
        using max_sym_day_rmetric7_ln = spiderrock::protobuf::api::max_sym_day_rmetric7_ln;
        using max_sym_day_rmetric7_sh = spiderrock::protobuf::api::max_sym_day_rmetric7_sh;
        using max_grp_day_contracts_ln = spiderrock::protobuf::api::max_grp_day_contracts_ln;
        using max_grp_day_contracts_sh = spiderrock::protobuf::api::max_grp_day_contracts_sh;
        using max_grp_day_contracts_abs = spiderrock::protobuf::api::max_grp_day_contracts_abs;
        using max_grp_day_ddelta_ln = spiderrock::protobuf::api::max_grp_day_ddelta_ln;
        using max_grp_day_ddelta_sh = spiderrock::protobuf::api::max_grp_day_ddelta_sh;
        using max_grp_day_vega_ln = spiderrock::protobuf::api::max_grp_day_vega_ln;
        using max_grp_day_vega_sh = spiderrock::protobuf::api::max_grp_day_vega_sh;
        using max_grp_day_vega_abs = spiderrock::protobuf::api::max_grp_day_vega_abs;
        using grp_day_vega_ratio = spiderrock::protobuf::api::grp_day_vega_ratio;
        using max_grp_day_rmetric1_ln = spiderrock::protobuf::api::max_grp_day_rmetric1_ln;
        using max_grp_day_rmetric1_sh = spiderrock::protobuf::api::max_grp_day_rmetric1_sh;
        using max_grp_day_rmetric1_abs = spiderrock::protobuf::api::max_grp_day_rmetric1_abs;
        using grp_day_rmetric1_ratio = spiderrock::protobuf::api::grp_day_rmetric1_ratio;
        using max_grp_day_rmetric2_ln = spiderrock::protobuf::api::max_grp_day_rmetric2_ln;
        using max_grp_day_rmetric2_sh = spiderrock::protobuf::api::max_grp_day_rmetric2_sh;
        using max_grp_day_rmetric3_ln = spiderrock::protobuf::api::max_grp_day_rmetric3_ln;
        using max_grp_day_rmetric3_sh = spiderrock::protobuf::api::max_grp_day_rmetric3_sh;
        using max_grp_day_rmetric4_ln = spiderrock::protobuf::api::max_grp_day_rmetric4_ln;
        using max_grp_day_rmetric4_sh = spiderrock::protobuf::api::max_grp_day_rmetric4_sh;
        using max_grp_day_rmetric5_ln = spiderrock::protobuf::api::max_grp_day_rmetric5_ln;
        using max_grp_day_rmetric5_sh = spiderrock::protobuf::api::max_grp_day_rmetric5_sh;
        using acc_ema_cxl_ddelta_ln = spiderrock::protobuf::api::acc_ema_cxl_ddelta_ln;
        using acc_ema_cxl_ddelta_sh = spiderrock::protobuf::api::acc_ema_cxl_ddelta_sh;
        using acc_ema_cxl_wt_vega_ln = spiderrock::protobuf::api::acc_ema_cxl_wt_vega_ln;
        using acc_ema_cxl_wt_vega_sh = spiderrock::protobuf::api::acc_ema_cxl_wt_vega_sh;
        using sym_ema_cxl_ddelta_ln = spiderrock::protobuf::api::sym_ema_cxl_ddelta_ln;
        using sym_ema_cxl_ddelta_sh = spiderrock::protobuf::api::sym_ema_cxl_ddelta_sh;
        using sym_ema_cxl_wt_vega_ln = spiderrock::protobuf::api::sym_ema_cxl_wt_vega_ln;
        using sym_ema_cxl_wt_vega_sh = spiderrock::protobuf::api::sym_ema_cxl_wt_vega_sh;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        is_disabled m_is_disabled{};
        exp_day_wt_vega_offset m_exp_day_wt_vega_offset{};
        max_exp_day_wt_vega_ln m_max_exp_day_wt_vega_ln{};
        max_exp_day_wt_vega_sh m_max_exp_day_wt_vega_sh{};
        max_exp_day_rmetric6_ln m_max_exp_day_rmetric6_ln{};
        max_exp_day_rmetric6_sh m_max_exp_day_rmetric6_sh{};
        sym_day_ddelta_offset m_sym_day_ddelta_offset{};
        max_sym_day_ddelta_ln m_max_sym_day_ddelta_ln{};
        max_sym_day_ddelta_sh m_max_sym_day_ddelta_sh{};
        sym_day_vega_offset m_sym_day_vega_offset{};
        max_sym_day_vega_ln m_max_sym_day_vega_ln{};
        max_sym_day_vega_sh m_max_sym_day_vega_sh{};
        sym_day_wt_vega_offset m_sym_day_wt_vega_offset{};
        max_sym_day_wt_vega_ln m_max_sym_day_wt_vega_ln{};
        max_sym_day_wt_vega_sh m_max_sym_day_wt_vega_sh{};
        max_sym_day_rmetric7_ln m_max_sym_day_rmetric7_ln{};
        max_sym_day_rmetric7_sh m_max_sym_day_rmetric7_sh{};
        max_grp_day_contracts_ln m_max_grp_day_contracts_ln{};
        max_grp_day_contracts_sh m_max_grp_day_contracts_sh{};
        max_grp_day_contracts_abs m_max_grp_day_contracts_abs{};
        max_grp_day_ddelta_ln m_max_grp_day_ddelta_ln{};
        max_grp_day_ddelta_sh m_max_grp_day_ddelta_sh{};
        max_grp_day_vega_ln m_max_grp_day_vega_ln{};
        max_grp_day_vega_sh m_max_grp_day_vega_sh{};
        max_grp_day_vega_abs m_max_grp_day_vega_abs{};
        grp_day_vega_ratio m_grp_day_vega_ratio{};
        max_grp_day_rmetric1_ln m_max_grp_day_rmetric1_ln{};
        max_grp_day_rmetric1_sh m_max_grp_day_rmetric1_sh{};
        max_grp_day_rmetric1_abs m_max_grp_day_rmetric1_abs{};
        grp_day_rmetric1_ratio m_grp_day_rmetric1_ratio{};
        max_grp_day_rmetric2_ln m_max_grp_day_rmetric2_ln{};
        max_grp_day_rmetric2_sh m_max_grp_day_rmetric2_sh{};
        max_grp_day_rmetric3_ln m_max_grp_day_rmetric3_ln{};
        max_grp_day_rmetric3_sh m_max_grp_day_rmetric3_sh{};
        max_grp_day_rmetric4_ln m_max_grp_day_rmetric4_ln{};
        max_grp_day_rmetric4_sh m_max_grp_day_rmetric4_sh{};
        max_grp_day_rmetric5_ln m_max_grp_day_rmetric5_ln{};
        max_grp_day_rmetric5_sh m_max_grp_day_rmetric5_sh{};
        acc_ema_cxl_ddelta_ln m_acc_ema_cxl_ddelta_ln{};
        acc_ema_cxl_ddelta_sh m_acc_ema_cxl_ddelta_sh{};
        acc_ema_cxl_wt_vega_ln m_acc_ema_cxl_wt_vega_ln{};
        acc_ema_cxl_wt_vega_sh m_acc_ema_cxl_wt_vega_sh{};
        sym_ema_cxl_ddelta_ln m_sym_ema_cxl_ddelta_ln{};
        sym_ema_cxl_ddelta_sh m_sym_ema_cxl_ddelta_sh{};
        sym_ema_cxl_wt_vega_ln m_sym_ema_cxl_wt_vega_ln{};
        sym_ema_cxl_wt_vega_sh m_sym_ema_cxl_wt_vega_sh{};
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
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        is_disabled get_is_disabled() const {
            return m_is_disabled;
        }		
        exp_day_wt_vega_offset get_exp_day_wt_vega_offset() const {
            return m_exp_day_wt_vega_offset;
        }		
        max_exp_day_wt_vega_ln get_max_exp_day_wt_vega_ln() const {
            return m_max_exp_day_wt_vega_ln;
        }		
        max_exp_day_wt_vega_sh get_max_exp_day_wt_vega_sh() const {
            return m_max_exp_day_wt_vega_sh;
        }		
        max_exp_day_rmetric6_ln get_max_exp_day_rmetric6_ln() const {
            return m_max_exp_day_rmetric6_ln;
        }		
        max_exp_day_rmetric6_sh get_max_exp_day_rmetric6_sh() const {
            return m_max_exp_day_rmetric6_sh;
        }		
        sym_day_ddelta_offset get_sym_day_ddelta_offset() const {
            return m_sym_day_ddelta_offset;
        }		
        max_sym_day_ddelta_ln get_max_sym_day_ddelta_ln() const {
            return m_max_sym_day_ddelta_ln;
        }		
        max_sym_day_ddelta_sh get_max_sym_day_ddelta_sh() const {
            return m_max_sym_day_ddelta_sh;
        }		
        sym_day_vega_offset get_sym_day_vega_offset() const {
            return m_sym_day_vega_offset;
        }		
        max_sym_day_vega_ln get_max_sym_day_vega_ln() const {
            return m_max_sym_day_vega_ln;
        }		
        max_sym_day_vega_sh get_max_sym_day_vega_sh() const {
            return m_max_sym_day_vega_sh;
        }		
        sym_day_wt_vega_offset get_sym_day_wt_vega_offset() const {
            return m_sym_day_wt_vega_offset;
        }		
        max_sym_day_wt_vega_ln get_max_sym_day_wt_vega_ln() const {
            return m_max_sym_day_wt_vega_ln;
        }		
        max_sym_day_wt_vega_sh get_max_sym_day_wt_vega_sh() const {
            return m_max_sym_day_wt_vega_sh;
        }		
        max_sym_day_rmetric7_ln get_max_sym_day_rmetric7_ln() const {
            return m_max_sym_day_rmetric7_ln;
        }		
        max_sym_day_rmetric7_sh get_max_sym_day_rmetric7_sh() const {
            return m_max_sym_day_rmetric7_sh;
        }		
        max_grp_day_contracts_ln get_max_grp_day_contracts_ln() const {
            return m_max_grp_day_contracts_ln;
        }		
        max_grp_day_contracts_sh get_max_grp_day_contracts_sh() const {
            return m_max_grp_day_contracts_sh;
        }		
        max_grp_day_contracts_abs get_max_grp_day_contracts_abs() const {
            return m_max_grp_day_contracts_abs;
        }		
        max_grp_day_ddelta_ln get_max_grp_day_ddelta_ln() const {
            return m_max_grp_day_ddelta_ln;
        }		
        max_grp_day_ddelta_sh get_max_grp_day_ddelta_sh() const {
            return m_max_grp_day_ddelta_sh;
        }		
        max_grp_day_vega_ln get_max_grp_day_vega_ln() const {
            return m_max_grp_day_vega_ln;
        }		
        max_grp_day_vega_sh get_max_grp_day_vega_sh() const {
            return m_max_grp_day_vega_sh;
        }		
        max_grp_day_vega_abs get_max_grp_day_vega_abs() const {
            return m_max_grp_day_vega_abs;
        }		
        grp_day_vega_ratio get_grp_day_vega_ratio() const {
            return m_grp_day_vega_ratio;
        }		
        max_grp_day_rmetric1_ln get_max_grp_day_rmetric1_ln() const {
            return m_max_grp_day_rmetric1_ln;
        }		
        max_grp_day_rmetric1_sh get_max_grp_day_rmetric1_sh() const {
            return m_max_grp_day_rmetric1_sh;
        }		
        max_grp_day_rmetric1_abs get_max_grp_day_rmetric1_abs() const {
            return m_max_grp_day_rmetric1_abs;
        }		
        grp_day_rmetric1_ratio get_grp_day_rmetric1_ratio() const {
            return m_grp_day_rmetric1_ratio;
        }		
        max_grp_day_rmetric2_ln get_max_grp_day_rmetric2_ln() const {
            return m_max_grp_day_rmetric2_ln;
        }		
        max_grp_day_rmetric2_sh get_max_grp_day_rmetric2_sh() const {
            return m_max_grp_day_rmetric2_sh;
        }		
        max_grp_day_rmetric3_ln get_max_grp_day_rmetric3_ln() const {
            return m_max_grp_day_rmetric3_ln;
        }		
        max_grp_day_rmetric3_sh get_max_grp_day_rmetric3_sh() const {
            return m_max_grp_day_rmetric3_sh;
        }		
        max_grp_day_rmetric4_ln get_max_grp_day_rmetric4_ln() const {
            return m_max_grp_day_rmetric4_ln;
        }		
        max_grp_day_rmetric4_sh get_max_grp_day_rmetric4_sh() const {
            return m_max_grp_day_rmetric4_sh;
        }		
        max_grp_day_rmetric5_ln get_max_grp_day_rmetric5_ln() const {
            return m_max_grp_day_rmetric5_ln;
        }		
        max_grp_day_rmetric5_sh get_max_grp_day_rmetric5_sh() const {
            return m_max_grp_day_rmetric5_sh;
        }		
        acc_ema_cxl_ddelta_ln get_acc_ema_cxl_ddelta_ln() const {
            return m_acc_ema_cxl_ddelta_ln;
        }		
        acc_ema_cxl_ddelta_sh get_acc_ema_cxl_ddelta_sh() const {
            return m_acc_ema_cxl_ddelta_sh;
        }		
        acc_ema_cxl_wt_vega_ln get_acc_ema_cxl_wt_vega_ln() const {
            return m_acc_ema_cxl_wt_vega_ln;
        }		
        acc_ema_cxl_wt_vega_sh get_acc_ema_cxl_wt_vega_sh() const {
            return m_acc_ema_cxl_wt_vega_sh;
        }		
        sym_ema_cxl_ddelta_ln get_sym_ema_cxl_ddelta_ln() const {
            return m_sym_ema_cxl_ddelta_ln;
        }		
        sym_ema_cxl_ddelta_sh get_sym_ema_cxl_ddelta_sh() const {
            return m_sym_ema_cxl_ddelta_sh;
        }		
        sym_ema_cxl_wt_vega_ln get_sym_ema_cxl_wt_vega_ln() const {
            return m_sym_ema_cxl_wt_vega_ln;
        }		
        sym_ema_cxl_wt_vega_sh get_sym_ema_cxl_wt_vega_sh() const {
            return m_sym_ema_cxl_wt_vega_sh;
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
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_is_disabled(const is_disabled& value)  {
            m_is_disabled = value;
        }
        void set_exp_day_wt_vega_offset(const exp_day_wt_vega_offset& value)  {
            m_exp_day_wt_vega_offset = value;
        }
        void set_max_exp_day_wt_vega_ln(const max_exp_day_wt_vega_ln& value)  {
            m_max_exp_day_wt_vega_ln = value;
        }
        void set_max_exp_day_wt_vega_sh(const max_exp_day_wt_vega_sh& value)  {
            m_max_exp_day_wt_vega_sh = value;
        }
        void set_max_exp_day_rmetric6_ln(const max_exp_day_rmetric6_ln& value)  {
            m_max_exp_day_rmetric6_ln = value;
        }
        void set_max_exp_day_rmetric6_sh(const max_exp_day_rmetric6_sh& value)  {
            m_max_exp_day_rmetric6_sh = value;
        }
        void set_sym_day_ddelta_offset(const sym_day_ddelta_offset& value)  {
            m_sym_day_ddelta_offset = value;
        }
        void set_max_sym_day_ddelta_ln(const max_sym_day_ddelta_ln& value)  {
            m_max_sym_day_ddelta_ln = value;
        }
        void set_max_sym_day_ddelta_sh(const max_sym_day_ddelta_sh& value)  {
            m_max_sym_day_ddelta_sh = value;
        }
        void set_sym_day_vega_offset(const sym_day_vega_offset& value)  {
            m_sym_day_vega_offset = value;
        }
        void set_max_sym_day_vega_ln(const max_sym_day_vega_ln& value)  {
            m_max_sym_day_vega_ln = value;
        }
        void set_max_sym_day_vega_sh(const max_sym_day_vega_sh& value)  {
            m_max_sym_day_vega_sh = value;
        }
        void set_sym_day_wt_vega_offset(const sym_day_wt_vega_offset& value)  {
            m_sym_day_wt_vega_offset = value;
        }
        void set_max_sym_day_wt_vega_ln(const max_sym_day_wt_vega_ln& value)  {
            m_max_sym_day_wt_vega_ln = value;
        }
        void set_max_sym_day_wt_vega_sh(const max_sym_day_wt_vega_sh& value)  {
            m_max_sym_day_wt_vega_sh = value;
        }
        void set_max_sym_day_rmetric7_ln(const max_sym_day_rmetric7_ln& value)  {
            m_max_sym_day_rmetric7_ln = value;
        }
        void set_max_sym_day_rmetric7_sh(const max_sym_day_rmetric7_sh& value)  {
            m_max_sym_day_rmetric7_sh = value;
        }
        void set_max_grp_day_contracts_ln(const max_grp_day_contracts_ln& value)  {
            m_max_grp_day_contracts_ln = value;
        }
        void set_max_grp_day_contracts_sh(const max_grp_day_contracts_sh& value)  {
            m_max_grp_day_contracts_sh = value;
        }
        void set_max_grp_day_contracts_abs(const max_grp_day_contracts_abs& value)  {
            m_max_grp_day_contracts_abs = value;
        }
        void set_max_grp_day_ddelta_ln(const max_grp_day_ddelta_ln& value)  {
            m_max_grp_day_ddelta_ln = value;
        }
        void set_max_grp_day_ddelta_sh(const max_grp_day_ddelta_sh& value)  {
            m_max_grp_day_ddelta_sh = value;
        }
        void set_max_grp_day_vega_ln(const max_grp_day_vega_ln& value)  {
            m_max_grp_day_vega_ln = value;
        }
        void set_max_grp_day_vega_sh(const max_grp_day_vega_sh& value)  {
            m_max_grp_day_vega_sh = value;
        }
        void set_max_grp_day_vega_abs(const max_grp_day_vega_abs& value)  {
            m_max_grp_day_vega_abs = value;
        }
        void set_grp_day_vega_ratio(const grp_day_vega_ratio& value)  {
            m_grp_day_vega_ratio = value;
        }
        void set_max_grp_day_rmetric1_ln(const max_grp_day_rmetric1_ln& value)  {
            m_max_grp_day_rmetric1_ln = value;
        }
        void set_max_grp_day_rmetric1_sh(const max_grp_day_rmetric1_sh& value)  {
            m_max_grp_day_rmetric1_sh = value;
        }
        void set_max_grp_day_rmetric1_abs(const max_grp_day_rmetric1_abs& value)  {
            m_max_grp_day_rmetric1_abs = value;
        }
        void set_grp_day_rmetric1_ratio(const grp_day_rmetric1_ratio& value)  {
            m_grp_day_rmetric1_ratio = value;
        }
        void set_max_grp_day_rmetric2_ln(const max_grp_day_rmetric2_ln& value)  {
            m_max_grp_day_rmetric2_ln = value;
        }
        void set_max_grp_day_rmetric2_sh(const max_grp_day_rmetric2_sh& value)  {
            m_max_grp_day_rmetric2_sh = value;
        }
        void set_max_grp_day_rmetric3_ln(const max_grp_day_rmetric3_ln& value)  {
            m_max_grp_day_rmetric3_ln = value;
        }
        void set_max_grp_day_rmetric3_sh(const max_grp_day_rmetric3_sh& value)  {
            m_max_grp_day_rmetric3_sh = value;
        }
        void set_max_grp_day_rmetric4_ln(const max_grp_day_rmetric4_ln& value)  {
            m_max_grp_day_rmetric4_ln = value;
        }
        void set_max_grp_day_rmetric4_sh(const max_grp_day_rmetric4_sh& value)  {
            m_max_grp_day_rmetric4_sh = value;
        }
        void set_max_grp_day_rmetric5_ln(const max_grp_day_rmetric5_ln& value)  {
            m_max_grp_day_rmetric5_ln = value;
        }
        void set_max_grp_day_rmetric5_sh(const max_grp_day_rmetric5_sh& value)  {
            m_max_grp_day_rmetric5_sh = value;
        }
        void set_acc_ema_cxl_ddelta_ln(const acc_ema_cxl_ddelta_ln& value)  {
            m_acc_ema_cxl_ddelta_ln = value;
        }
        void set_acc_ema_cxl_ddelta_sh(const acc_ema_cxl_ddelta_sh& value)  {
            m_acc_ema_cxl_ddelta_sh = value;
        }
        void set_acc_ema_cxl_wt_vega_ln(const acc_ema_cxl_wt_vega_ln& value)  {
            m_acc_ema_cxl_wt_vega_ln = value;
        }
        void set_acc_ema_cxl_wt_vega_sh(const acc_ema_cxl_wt_vega_sh& value)  {
            m_acc_ema_cxl_wt_vega_sh = value;
        }
        void set_sym_ema_cxl_ddelta_ln(const sym_ema_cxl_ddelta_ln& value)  {
            m_sym_ema_cxl_ddelta_ln = value;
        }
        void set_sym_ema_cxl_ddelta_sh(const sym_ema_cxl_ddelta_sh& value)  {
            m_sym_ema_cxl_ddelta_sh = value;
        }
        void set_sym_ema_cxl_wt_vega_ln(const sym_ema_cxl_wt_vega_ln& value)  {
            m_sym_ema_cxl_wt_vega_ln = value;
        }
        void set_sym_ema_cxl_wt_vega_sh(const sym_ema_cxl_wt_vega_sh& value)  {
            m_sym_ema_cxl_wt_vega_sh = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskGroupControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const is_disabled & value) {
            set_is_disabled(value);
        }
        void set(const exp_day_wt_vega_offset & value) {
            set_exp_day_wt_vega_offset(value);
        }
        void set(const max_exp_day_wt_vega_ln & value) {
            set_max_exp_day_wt_vega_ln(value);
        }
        void set(const max_exp_day_wt_vega_sh & value) {
            set_max_exp_day_wt_vega_sh(value);
        }
        void set(const max_exp_day_rmetric6_ln & value) {
            set_max_exp_day_rmetric6_ln(value);
        }
        void set(const max_exp_day_rmetric6_sh & value) {
            set_max_exp_day_rmetric6_sh(value);
        }
        void set(const sym_day_ddelta_offset & value) {
            set_sym_day_ddelta_offset(value);
        }
        void set(const max_sym_day_ddelta_ln & value) {
            set_max_sym_day_ddelta_ln(value);
        }
        void set(const max_sym_day_ddelta_sh & value) {
            set_max_sym_day_ddelta_sh(value);
        }
        void set(const sym_day_vega_offset & value) {
            set_sym_day_vega_offset(value);
        }
        void set(const max_sym_day_vega_ln & value) {
            set_max_sym_day_vega_ln(value);
        }
        void set(const max_sym_day_vega_sh & value) {
            set_max_sym_day_vega_sh(value);
        }
        void set(const sym_day_wt_vega_offset & value) {
            set_sym_day_wt_vega_offset(value);
        }
        void set(const max_sym_day_wt_vega_ln & value) {
            set_max_sym_day_wt_vega_ln(value);
        }
        void set(const max_sym_day_wt_vega_sh & value) {
            set_max_sym_day_wt_vega_sh(value);
        }
        void set(const max_sym_day_rmetric7_ln & value) {
            set_max_sym_day_rmetric7_ln(value);
        }
        void set(const max_sym_day_rmetric7_sh & value) {
            set_max_sym_day_rmetric7_sh(value);
        }
        void set(const max_grp_day_contracts_ln & value) {
            set_max_grp_day_contracts_ln(value);
        }
        void set(const max_grp_day_contracts_sh & value) {
            set_max_grp_day_contracts_sh(value);
        }
        void set(const max_grp_day_contracts_abs & value) {
            set_max_grp_day_contracts_abs(value);
        }
        void set(const max_grp_day_ddelta_ln & value) {
            set_max_grp_day_ddelta_ln(value);
        }
        void set(const max_grp_day_ddelta_sh & value) {
            set_max_grp_day_ddelta_sh(value);
        }
        void set(const max_grp_day_vega_ln & value) {
            set_max_grp_day_vega_ln(value);
        }
        void set(const max_grp_day_vega_sh & value) {
            set_max_grp_day_vega_sh(value);
        }
        void set(const max_grp_day_vega_abs & value) {
            set_max_grp_day_vega_abs(value);
        }
        void set(const grp_day_vega_ratio & value) {
            set_grp_day_vega_ratio(value);
        }
        void set(const max_grp_day_rmetric1_ln & value) {
            set_max_grp_day_rmetric1_ln(value);
        }
        void set(const max_grp_day_rmetric1_sh & value) {
            set_max_grp_day_rmetric1_sh(value);
        }
        void set(const max_grp_day_rmetric1_abs & value) {
            set_max_grp_day_rmetric1_abs(value);
        }
        void set(const grp_day_rmetric1_ratio & value) {
            set_grp_day_rmetric1_ratio(value);
        }
        void set(const max_grp_day_rmetric2_ln & value) {
            set_max_grp_day_rmetric2_ln(value);
        }
        void set(const max_grp_day_rmetric2_sh & value) {
            set_max_grp_day_rmetric2_sh(value);
        }
        void set(const max_grp_day_rmetric3_ln & value) {
            set_max_grp_day_rmetric3_ln(value);
        }
        void set(const max_grp_day_rmetric3_sh & value) {
            set_max_grp_day_rmetric3_sh(value);
        }
        void set(const max_grp_day_rmetric4_ln & value) {
            set_max_grp_day_rmetric4_ln(value);
        }
        void set(const max_grp_day_rmetric4_sh & value) {
            set_max_grp_day_rmetric4_sh(value);
        }
        void set(const max_grp_day_rmetric5_ln & value) {
            set_max_grp_day_rmetric5_ln(value);
        }
        void set(const max_grp_day_rmetric5_sh & value) {
            set_max_grp_day_rmetric5_sh(value);
        }
        void set(const acc_ema_cxl_ddelta_ln & value) {
            set_acc_ema_cxl_ddelta_ln(value);
        }
        void set(const acc_ema_cxl_ddelta_sh & value) {
            set_acc_ema_cxl_ddelta_sh(value);
        }
        void set(const acc_ema_cxl_wt_vega_ln & value) {
            set_acc_ema_cxl_wt_vega_ln(value);
        }
        void set(const acc_ema_cxl_wt_vega_sh & value) {
            set_acc_ema_cxl_wt_vega_sh(value);
        }
        void set(const sym_ema_cxl_ddelta_ln & value) {
            set_sym_ema_cxl_ddelta_ln(value);
        }
        void set(const sym_ema_cxl_ddelta_sh & value) {
            set_sym_ema_cxl_ddelta_sh(value);
        }
        void set(const sym_ema_cxl_wt_vega_ln & value) {
            set_sym_ema_cxl_wt_vega_ln(value);
        }
        void set(const sym_ema_cxl_wt_vega_sh & value) {
            set_sym_ema_cxl_wt_vega_sh(value);
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

        void set(const SpdrRiskGroupControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_is_disabled);
            set(value.m_exp_day_wt_vega_offset);
            set(value.m_max_exp_day_wt_vega_ln);
            set(value.m_max_exp_day_wt_vega_sh);
            set(value.m_max_exp_day_rmetric6_ln);
            set(value.m_max_exp_day_rmetric6_sh);
            set(value.m_sym_day_ddelta_offset);
            set(value.m_max_sym_day_ddelta_ln);
            set(value.m_max_sym_day_ddelta_sh);
            set(value.m_sym_day_vega_offset);
            set(value.m_max_sym_day_vega_ln);
            set(value.m_max_sym_day_vega_sh);
            set(value.m_sym_day_wt_vega_offset);
            set(value.m_max_sym_day_wt_vega_ln);
            set(value.m_max_sym_day_wt_vega_sh);
            set(value.m_max_sym_day_rmetric7_ln);
            set(value.m_max_sym_day_rmetric7_sh);
            set(value.m_max_grp_day_contracts_ln);
            set(value.m_max_grp_day_contracts_sh);
            set(value.m_max_grp_day_contracts_abs);
            set(value.m_max_grp_day_ddelta_ln);
            set(value.m_max_grp_day_ddelta_sh);
            set(value.m_max_grp_day_vega_ln);
            set(value.m_max_grp_day_vega_sh);
            set(value.m_max_grp_day_vega_abs);
            set(value.m_grp_day_vega_ratio);
            set(value.m_max_grp_day_rmetric1_ln);
            set(value.m_max_grp_day_rmetric1_sh);
            set(value.m_max_grp_day_rmetric1_abs);
            set(value.m_grp_day_rmetric1_ratio);
            set(value.m_max_grp_day_rmetric2_ln);
            set(value.m_max_grp_day_rmetric2_sh);
            set(value.m_max_grp_day_rmetric3_ln);
            set(value.m_max_grp_day_rmetric3_sh);
            set(value.m_max_grp_day_rmetric4_ln);
            set(value.m_max_grp_day_rmetric4_sh);
            set(value.m_max_grp_day_rmetric5_ln);
            set(value.m_max_grp_day_rmetric5_sh);
            set(value.m_acc_ema_cxl_ddelta_ln);
            set(value.m_acc_ema_cxl_ddelta_sh);
            set(value.m_acc_ema_cxl_wt_vega_ln);
            set(value.m_acc_ema_cxl_wt_vega_sh);
            set(value.m_sym_ema_cxl_ddelta_ln);
            set(value.m_sym_ema_cxl_ddelta_sh);
            set(value.m_sym_ema_cxl_wt_vega_ln);
            set(value.m_sym_ema_cxl_wt_vega_sh);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrRiskGroupControl() {
            m__meta.set_message_type("SpdrRiskGroupControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4570, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4570, length);
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
             *this = SpdrRiskGroupControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeExpDayWtVegaOffset() const {
            return !(m_exp_day_wt_vega_offset == 0.0);
        }
        bool IncludeMaxExpDayWtVegaLn() const {
            return !(m_max_exp_day_wt_vega_ln == 0.0);
        }
        bool IncludeMaxExpDayWtVegaSh() const {
            return !(m_max_exp_day_wt_vega_sh == 0.0);
        }
        bool IncludeMaxExpDayRmetric6Ln() const {
            return !(m_max_exp_day_rmetric6_ln == 0.0);
        }
        bool IncludeMaxExpDayRmetric6Sh() const {
            return !(m_max_exp_day_rmetric6_sh == 0.0);
        }
        bool IncludeSymDayDdeltaOffset() const {
            return !(m_sym_day_ddelta_offset == 0.0);
        }
        bool IncludeMaxSymDayDdeltaLn() const {
            return !(m_max_sym_day_ddelta_ln == 0.0);
        }
        bool IncludeMaxSymDayDdeltaSh() const {
            return !(m_max_sym_day_ddelta_sh == 0.0);
        }
        bool IncludeSymDayVegaOffset() const {
            return !(m_sym_day_vega_offset == 0.0);
        }
        bool IncludeMaxSymDayVegaLn() const {
            return !(m_max_sym_day_vega_ln == 0.0);
        }
        bool IncludeMaxSymDayVegaSh() const {
            return !(m_max_sym_day_vega_sh == 0.0);
        }
        bool IncludeSymDayWtVegaOffset() const {
            return !(m_sym_day_wt_vega_offset == 0.0);
        }
        bool IncludeMaxSymDayWtVegaLn() const {
            return !(m_max_sym_day_wt_vega_ln == 0.0);
        }
        bool IncludeMaxSymDayWtVegaSh() const {
            return !(m_max_sym_day_wt_vega_sh == 0.0);
        }
        bool IncludeMaxSymDayRmetric7Ln() const {
            return !(m_max_sym_day_rmetric7_ln == 0.0);
        }
        bool IncludeMaxSymDayRmetric7Sh() const {
            return !(m_max_sym_day_rmetric7_sh == 0.0);
        }
        bool IncludeMaxGrpDayContractsLn() const {
            return !(m_max_grp_day_contracts_ln == 0);
        }
        bool IncludeMaxGrpDayContractsSh() const {
            return !(m_max_grp_day_contracts_sh == 0);
        }
        bool IncludeMaxGrpDayContractsAbs() const {
            return !(m_max_grp_day_contracts_abs == 0);
        }
        bool IncludeMaxGrpDayDdeltaLn() const {
            return !(m_max_grp_day_ddelta_ln == 0.0);
        }
        bool IncludeMaxGrpDayDdeltaSh() const {
            return !(m_max_grp_day_ddelta_sh == 0.0);
        }
        bool IncludeMaxGrpDayVegaLn() const {
            return !(m_max_grp_day_vega_ln == 0.0);
        }
        bool IncludeMaxGrpDayVegaSh() const {
            return !(m_max_grp_day_vega_sh == 0.0);
        }
        bool IncludeMaxGrpDayVegaAbs() const {
            return !(m_max_grp_day_vega_abs == 0.0);
        }
        bool IncludeGrpDayVegaRatio() const {
            return !(m_grp_day_vega_ratio == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Ln() const {
            return !(m_max_grp_day_rmetric1_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Sh() const {
            return !(m_max_grp_day_rmetric1_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Abs() const {
            return !(m_max_grp_day_rmetric1_abs == 0.0);
        }
        bool IncludeGrpDayRmetric1Ratio() const {
            return !(m_grp_day_rmetric1_ratio == 0.0);
        }
        bool IncludeMaxGrpDayRmetric2Ln() const {
            return !(m_max_grp_day_rmetric2_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric2Sh() const {
            return !(m_max_grp_day_rmetric2_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric3Ln() const {
            return !(m_max_grp_day_rmetric3_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric3Sh() const {
            return !(m_max_grp_day_rmetric3_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric4Ln() const {
            return !(m_max_grp_day_rmetric4_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric4Sh() const {
            return !(m_max_grp_day_rmetric4_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric5Ln() const {
            return !(m_max_grp_day_rmetric5_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric5Sh() const {
            return !(m_max_grp_day_rmetric5_sh == 0.0);
        }
        bool IncludeAccEmaCxlDdeltaLn() const {
            return !(m_acc_ema_cxl_ddelta_ln == 0.0);
        }
        bool IncludeAccEmaCxlDdeltaSh() const {
            return !(m_acc_ema_cxl_ddelta_sh == 0.0);
        }
        bool IncludeAccEmaCxlWtVegaLn() const {
            return !(m_acc_ema_cxl_wt_vega_ln == 0.0);
        }
        bool IncludeAccEmaCxlWtVegaSh() const {
            return !(m_acc_ema_cxl_wt_vega_sh == 0.0);
        }
        bool IncludeSymEmaCxlDdeltaLn() const {
            return !(m_sym_ema_cxl_ddelta_ln == 0.0);
        }
        bool IncludeSymEmaCxlDdeltaSh() const {
            return !(m_sym_ema_cxl_ddelta_sh == 0.0);
        }
        bool IncludeSymEmaCxlWtVegaLn() const {
            return !(m_sym_ema_cxl_wt_vega_ln == 0.0);
        }
        bool IncludeSymEmaCxlWtVegaSh() const {
            return !(m_sym_ema_cxl_wt_vega_sh == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpDayWtVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_exp_day_wt_vega_offset);
            }
            if ( IncludeMaxExpDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(104,m_max_exp_day_wt_vega_ln);
            }
            if ( IncludeMaxExpDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_max_exp_day_wt_vega_sh);
            }
            if ( IncludeMaxExpDayRmetric6Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_max_exp_day_rmetric6_ln);
            }
            if ( IncludeMaxExpDayRmetric6Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_max_exp_day_rmetric6_sh);
            }
            if ( IncludeSymDayDdeltaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_sym_day_ddelta_offset);
            }
            if ( IncludeMaxSymDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_max_sym_day_ddelta_ln);
            }
            if ( IncludeMaxSymDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_max_sym_day_ddelta_sh);
            }
            if ( IncludeSymDayVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_sym_day_vega_offset);
            }
            if ( IncludeMaxSymDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_max_sym_day_vega_ln);
            }
            if ( IncludeMaxSymDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_max_sym_day_vega_sh);
            }
            if ( IncludeSymDayWtVegaOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_sym_day_wt_vega_offset);
            }
            if ( IncludeMaxSymDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_max_sym_day_wt_vega_ln);
            }
            if ( IncludeMaxSymDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_max_sym_day_wt_vega_sh);
            }
            if ( IncludeMaxSymDayRmetric7Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(117,m_max_sym_day_rmetric7_ln);
            }
            if ( IncludeMaxSymDayRmetric7Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_max_sym_day_rmetric7_sh);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(119,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(120,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(123,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(125,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(126,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(128,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(129,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(131,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeMaxGrpDayRmetric2Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(132,m_max_grp_day_rmetric2_ln);
            }
            if ( IncludeMaxGrpDayRmetric2Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_max_grp_day_rmetric2_sh);
            }
            if ( IncludeMaxGrpDayRmetric3Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(134,m_max_grp_day_rmetric3_ln);
            }
            if ( IncludeMaxGrpDayRmetric3Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(135,m_max_grp_day_rmetric3_sh);
            }
            if ( IncludeMaxGrpDayRmetric4Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_max_grp_day_rmetric4_ln);
            }
            if ( IncludeMaxGrpDayRmetric4Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(137,m_max_grp_day_rmetric4_sh);
            }
            if ( IncludeMaxGrpDayRmetric5Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(138,m_max_grp_day_rmetric5_ln);
            }
            if ( IncludeMaxGrpDayRmetric5Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_max_grp_day_rmetric5_sh);
            }
            if ( IncludeAccEmaCxlDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(140,m_acc_ema_cxl_ddelta_ln);
            }
            if ( IncludeAccEmaCxlDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(141,m_acc_ema_cxl_ddelta_sh);
            }
            if ( IncludeAccEmaCxlWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_acc_ema_cxl_wt_vega_ln);
            }
            if ( IncludeAccEmaCxlWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(143,m_acc_ema_cxl_wt_vega_sh);
            }
            if ( IncludeSymEmaCxlDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(144,m_sym_ema_cxl_ddelta_ln);
            }
            if ( IncludeSymEmaCxlDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_sym_ema_cxl_ddelta_sh);
            }
            if ( IncludeSymEmaCxlWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(146,m_sym_ema_cxl_wt_vega_ln);
            }
            if ( IncludeSymEmaCxlWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(147,m_sym_ema_cxl_wt_vega_sh);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(149,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(150, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpDayWtVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_exp_day_wt_vega_offset);
            }
            if ( IncludeMaxExpDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,104,m_max_exp_day_wt_vega_ln);
            }
            if ( IncludeMaxExpDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_max_exp_day_wt_vega_sh);
            }
            if ( IncludeMaxExpDayRmetric6Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_max_exp_day_rmetric6_ln);
            }
            if ( IncludeMaxExpDayRmetric6Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_max_exp_day_rmetric6_sh);
            }
            if ( IncludeSymDayDdeltaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_sym_day_ddelta_offset);
            }
            if ( IncludeMaxSymDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_max_sym_day_ddelta_ln);
            }
            if ( IncludeMaxSymDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_max_sym_day_ddelta_sh);
            }
            if ( IncludeSymDayVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_sym_day_vega_offset);
            }
            if ( IncludeMaxSymDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_max_sym_day_vega_ln);
            }
            if ( IncludeMaxSymDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_max_sym_day_vega_sh);
            }
            if ( IncludeSymDayWtVegaOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_sym_day_wt_vega_offset);
            }
            if ( IncludeMaxSymDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_max_sym_day_wt_vega_ln);
            }
            if ( IncludeMaxSymDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_max_sym_day_wt_vega_sh);
            }
            if ( IncludeMaxSymDayRmetric7Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,117,m_max_sym_day_rmetric7_ln);
            }
            if ( IncludeMaxSymDayRmetric7Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_max_sym_day_rmetric7_sh);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,119,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,120,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,123,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,125,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,126,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,128,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,129,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,131,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeMaxGrpDayRmetric2Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,132,m_max_grp_day_rmetric2_ln);
            }
            if ( IncludeMaxGrpDayRmetric2Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_max_grp_day_rmetric2_sh);
            }
            if ( IncludeMaxGrpDayRmetric3Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,134,m_max_grp_day_rmetric3_ln);
            }
            if ( IncludeMaxGrpDayRmetric3Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,135,m_max_grp_day_rmetric3_sh);
            }
            if ( IncludeMaxGrpDayRmetric4Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_max_grp_day_rmetric4_ln);
            }
            if ( IncludeMaxGrpDayRmetric4Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,137,m_max_grp_day_rmetric4_sh);
            }
            if ( IncludeMaxGrpDayRmetric5Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,138,m_max_grp_day_rmetric5_ln);
            }
            if ( IncludeMaxGrpDayRmetric5Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_max_grp_day_rmetric5_sh);
            }
            if ( IncludeAccEmaCxlDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,140,m_acc_ema_cxl_ddelta_ln);
            }
            if ( IncludeAccEmaCxlDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,141,m_acc_ema_cxl_ddelta_sh);
            }
            if ( IncludeAccEmaCxlWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_acc_ema_cxl_wt_vega_ln);
            }
            if ( IncludeAccEmaCxlWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,143,m_acc_ema_cxl_wt_vega_sh);
            }
            if ( IncludeSymEmaCxlDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,144,m_sym_ema_cxl_ddelta_ln);
            }
            if ( IncludeSymEmaCxlDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_sym_ema_cxl_ddelta_sh);
            }
            if ( IncludeSymEmaCxlWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,146,m_sym_ema_cxl_wt_vega_ln);
            }
            if ( IncludeSymEmaCxlWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,147,m_sym_ema_cxl_wt_vega_sh);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,149,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 150, m_timestamp);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exp_day_wt_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_rmetric6_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_exp_day_rmetric6_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_ddelta_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_day_wt_vega_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_rmetric7_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sym_day_rmetric7_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_ln = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_rmetric1_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric2_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric2_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric3_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric3_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric4_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric4_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric5_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric5_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_ema_cxl_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_ema_cxl_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_ema_cxl_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 143: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_ema_cxl_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 147: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_ema_cxl_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 149: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 150: {
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

    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::_meta>() const { return SpdrRiskGroupControl::_meta{ m__meta}; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::pkey>() const { return SpdrRiskGroupControl::pkey{ m_pkey}; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::exp_day_wt_vega_offset>() const { return m_exp_day_wt_vega_offset; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_exp_day_wt_vega_ln>() const { return m_max_exp_day_wt_vega_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_exp_day_wt_vega_sh>() const { return m_max_exp_day_wt_vega_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_exp_day_rmetric6_ln>() const { return m_max_exp_day_rmetric6_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_exp_day_rmetric6_sh>() const { return m_max_exp_day_rmetric6_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_day_ddelta_offset>() const { return m_sym_day_ddelta_offset; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_ddelta_ln>() const { return m_max_sym_day_ddelta_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_ddelta_sh>() const { return m_max_sym_day_ddelta_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_day_vega_offset>() const { return m_sym_day_vega_offset; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_vega_ln>() const { return m_max_sym_day_vega_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_vega_sh>() const { return m_max_sym_day_vega_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_day_wt_vega_offset>() const { return m_sym_day_wt_vega_offset; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_wt_vega_ln>() const { return m_max_sym_day_wt_vega_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_wt_vega_sh>() const { return m_max_sym_day_wt_vega_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_rmetric7_ln>() const { return m_max_sym_day_rmetric7_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_sym_day_rmetric7_sh>() const { return m_max_sym_day_rmetric7_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_contracts_ln>() const { return m_max_grp_day_contracts_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_contracts_sh>() const { return m_max_grp_day_contracts_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_contracts_abs>() const { return m_max_grp_day_contracts_abs; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_ddelta_ln>() const { return m_max_grp_day_ddelta_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_ddelta_sh>() const { return m_max_grp_day_ddelta_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_vega_ln>() const { return m_max_grp_day_vega_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_vega_sh>() const { return m_max_grp_day_vega_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_vega_abs>() const { return m_max_grp_day_vega_abs; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::grp_day_vega_ratio>() const { return m_grp_day_vega_ratio; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric1_ln>() const { return m_max_grp_day_rmetric1_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric1_sh>() const { return m_max_grp_day_rmetric1_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric1_abs>() const { return m_max_grp_day_rmetric1_abs; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::grp_day_rmetric1_ratio>() const { return m_grp_day_rmetric1_ratio; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric2_ln>() const { return m_max_grp_day_rmetric2_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric2_sh>() const { return m_max_grp_day_rmetric2_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric3_ln>() const { return m_max_grp_day_rmetric3_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric3_sh>() const { return m_max_grp_day_rmetric3_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric4_ln>() const { return m_max_grp_day_rmetric4_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric4_sh>() const { return m_max_grp_day_rmetric4_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric5_ln>() const { return m_max_grp_day_rmetric5_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::max_grp_day_rmetric5_sh>() const { return m_max_grp_day_rmetric5_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::acc_ema_cxl_ddelta_ln>() const { return m_acc_ema_cxl_ddelta_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::acc_ema_cxl_ddelta_sh>() const { return m_acc_ema_cxl_ddelta_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::acc_ema_cxl_wt_vega_ln>() const { return m_acc_ema_cxl_wt_vega_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::acc_ema_cxl_wt_vega_sh>() const { return m_acc_ema_cxl_wt_vega_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_ema_cxl_ddelta_ln>() const { return m_sym_ema_cxl_ddelta_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_ema_cxl_ddelta_sh>() const { return m_sym_ema_cxl_ddelta_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_ema_cxl_wt_vega_ln>() const { return m_sym_ema_cxl_wt_vega_ln; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::sym_ema_cxl_wt_vega_sh>() const { return m_sym_ema_cxl_wt_vega_sh; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrRiskGroupControl::get<SpdrRiskGroupControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrRiskGroupControl_PKey::get<SpdrRiskGroupControl_PKey::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrRiskGroupControl_PKey::get<SpdrRiskGroupControl_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrRiskGroupControl_PKey::get<SpdrRiskGroupControl_PKey::risk_firm>() const { return m_risk_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskGroupControl_PKey& m) {
        o << "\"risk_group_id\":" << m.get<SpdrRiskGroupControl_PKey::risk_group_id>();
        o << ",\"accnt\":\"" << m.get<SpdrRiskGroupControl_PKey::accnt>() << "\"";
        o << ",\"risk_firm\":\"" << m.get<SpdrRiskGroupControl_PKey::risk_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskGroupControl& m) {
        o << "\"_meta\":{" << m.get<SpdrRiskGroupControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrRiskGroupControl::pkey>() << "}";
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrRiskGroupControl::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrRiskGroupControl::run_status>();
        o << ",\"is_disabled\":" << (int64_t)m.get<SpdrRiskGroupControl::is_disabled>();
        o << ",\"exp_day_wt_vega_offset\":" << m.get<SpdrRiskGroupControl::exp_day_wt_vega_offset>();
        o << ",\"max_exp_day_wt_vega_ln\":" << m.get<SpdrRiskGroupControl::max_exp_day_wt_vega_ln>();
        o << ",\"max_exp_day_wt_vega_sh\":" << m.get<SpdrRiskGroupControl::max_exp_day_wt_vega_sh>();
        o << ",\"max_exp_day_rmetric6_ln\":" << m.get<SpdrRiskGroupControl::max_exp_day_rmetric6_ln>();
        o << ",\"max_exp_day_rmetric6_sh\":" << m.get<SpdrRiskGroupControl::max_exp_day_rmetric6_sh>();
        o << ",\"sym_day_ddelta_offset\":" << m.get<SpdrRiskGroupControl::sym_day_ddelta_offset>();
        o << ",\"max_sym_day_ddelta_ln\":" << m.get<SpdrRiskGroupControl::max_sym_day_ddelta_ln>();
        o << ",\"max_sym_day_ddelta_sh\":" << m.get<SpdrRiskGroupControl::max_sym_day_ddelta_sh>();
        o << ",\"sym_day_vega_offset\":" << m.get<SpdrRiskGroupControl::sym_day_vega_offset>();
        o << ",\"max_sym_day_vega_ln\":" << m.get<SpdrRiskGroupControl::max_sym_day_vega_ln>();
        o << ",\"max_sym_day_vega_sh\":" << m.get<SpdrRiskGroupControl::max_sym_day_vega_sh>();
        o << ",\"sym_day_wt_vega_offset\":" << m.get<SpdrRiskGroupControl::sym_day_wt_vega_offset>();
        o << ",\"max_sym_day_wt_vega_ln\":" << m.get<SpdrRiskGroupControl::max_sym_day_wt_vega_ln>();
        o << ",\"max_sym_day_wt_vega_sh\":" << m.get<SpdrRiskGroupControl::max_sym_day_wt_vega_sh>();
        o << ",\"max_sym_day_rmetric7_ln\":" << m.get<SpdrRiskGroupControl::max_sym_day_rmetric7_ln>();
        o << ",\"max_sym_day_rmetric7_sh\":" << m.get<SpdrRiskGroupControl::max_sym_day_rmetric7_sh>();
        o << ",\"max_grp_day_contracts_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_contracts_ln>();
        o << ",\"max_grp_day_contracts_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_contracts_sh>();
        o << ",\"max_grp_day_contracts_abs\":" << m.get<SpdrRiskGroupControl::max_grp_day_contracts_abs>();
        o << ",\"max_grp_day_ddelta_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_ddelta_ln>();
        o << ",\"max_grp_day_ddelta_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_ddelta_sh>();
        o << ",\"max_grp_day_vega_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_vega_ln>();
        o << ",\"max_grp_day_vega_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_vega_sh>();
        o << ",\"max_grp_day_vega_abs\":" << m.get<SpdrRiskGroupControl::max_grp_day_vega_abs>();
        o << ",\"grp_day_vega_ratio\":" << m.get<SpdrRiskGroupControl::grp_day_vega_ratio>();
        o << ",\"max_grp_day_rmetric1_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric1_ln>();
        o << ",\"max_grp_day_rmetric1_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric1_sh>();
        o << ",\"max_grp_day_rmetric1_abs\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric1_abs>();
        o << ",\"grp_day_rmetric1_ratio\":" << m.get<SpdrRiskGroupControl::grp_day_rmetric1_ratio>();
        o << ",\"max_grp_day_rmetric2_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric2_ln>();
        o << ",\"max_grp_day_rmetric2_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric2_sh>();
        o << ",\"max_grp_day_rmetric3_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric3_ln>();
        o << ",\"max_grp_day_rmetric3_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric3_sh>();
        o << ",\"max_grp_day_rmetric4_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric4_ln>();
        o << ",\"max_grp_day_rmetric4_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric4_sh>();
        o << ",\"max_grp_day_rmetric5_ln\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric5_ln>();
        o << ",\"max_grp_day_rmetric5_sh\":" << m.get<SpdrRiskGroupControl::max_grp_day_rmetric5_sh>();
        o << ",\"acc_ema_cxl_ddelta_ln\":" << m.get<SpdrRiskGroupControl::acc_ema_cxl_ddelta_ln>();
        o << ",\"acc_ema_cxl_ddelta_sh\":" << m.get<SpdrRiskGroupControl::acc_ema_cxl_ddelta_sh>();
        o << ",\"acc_ema_cxl_wt_vega_ln\":" << m.get<SpdrRiskGroupControl::acc_ema_cxl_wt_vega_ln>();
        o << ",\"acc_ema_cxl_wt_vega_sh\":" << m.get<SpdrRiskGroupControl::acc_ema_cxl_wt_vega_sh>();
        o << ",\"sym_ema_cxl_ddelta_ln\":" << m.get<SpdrRiskGroupControl::sym_ema_cxl_ddelta_ln>();
        o << ",\"sym_ema_cxl_ddelta_sh\":" << m.get<SpdrRiskGroupControl::sym_ema_cxl_ddelta_sh>();
        o << ",\"sym_ema_cxl_wt_vega_ln\":" << m.get<SpdrRiskGroupControl::sym_ema_cxl_wt_vega_ln>();
        o << ",\"sym_ema_cxl_wt_vega_sh\":" << m.get<SpdrRiskGroupControl::sym_ema_cxl_wt_vega_sh>();
        o << ",\"modified_by\":\"" << m.get<SpdrRiskGroupControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrRiskGroupControl::modified_in>();
        {
            std::time_t tt = m.get<SpdrRiskGroupControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}