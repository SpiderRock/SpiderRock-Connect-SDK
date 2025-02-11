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

    #ifndef _sys_realm__GUARD__
    #define _sys_realm__GUARD__
    DECL_STRONG_TYPE(sys_realm, spiderrock::protobuf::api::SysRealm);
    #endif//_sys_realm__GUARD__

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _version__int32__GUARD__
    #define _version__int32__GUARD__
    DECL_STRONG_TYPE(version__int32, int32);
    #endif//_version__int32__GUARD__

    #ifndef _exec_status__GUARD__
    #define _exec_status__GUARD__
    DECL_STRONG_TYPE(exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_exec_status__GUARD__

    #ifndef _exec_shape__GUARD__
    #define _exec_shape__GUARD__
    DECL_STRONG_TYPE(exec_shape, spiderrock::protobuf::api::ExecShape);
    #endif//_exec_shape__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _parent_version__GUARD__
    #define _parent_version__GUARD__
    DECL_STRONG_TYPE(parent_version, int32);
    #endif//_parent_version__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _cl_ord_id__int64__GUARD__
    #define _cl_ord_id__int64__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__int64, int64);
    #endif//_cl_ord_id__int64__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _exec_role__GUARD__
    #define _exec_role__GUARD__
    DECL_STRONG_TYPE(exec_role, spiderrock::protobuf::api::ExecRole);
    #endif//_exec_role__GUARD__

    #ifndef _child_order_handling__GUARD__
    #define _child_order_handling__GUARD__
    DECL_STRONG_TYPE(child_order_handling, string);
    #endif//_child_order_handling__GUARD__

    #ifndef _child_algo_handler__GUARD__
    #define _child_algo_handler__GUARD__
    DECL_STRONG_TYPE(child_algo_handler, spiderrock::protobuf::api::ChildHandler);
    #endif//_child_algo_handler__GUARD__

    #ifndef _child_ssale_flag__GUARD__
    #define _child_ssale_flag__GUARD__
    DECL_STRONG_TYPE(child_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_child_ssale_flag__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _spdr_order_status__GUARD__
    #define _spdr_order_status__GUARD__
    DECL_STRONG_TYPE(spdr_order_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_spdr_order_status__GUARD__

    #ifndef _spdr_close_reason__GUARD__
    #define _spdr_close_reason__GUARD__
    DECL_STRONG_TYPE(spdr_close_reason, spiderrock::protobuf::api::SpdrCloseReason);
    #endif//_spdr_close_reason__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _cum_leg_fill_quantity__GUARD__
    #define _cum_leg_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_leg_fill_quantity, int32);
    #endif//_cum_leg_fill_quantity__GUARD__

    #ifndef _avg_leg_fill_price__GUARD__
    #define _avg_leg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_leg_fill_price, double);
    #endif//_avg_leg_fill_price__GUARD__

    #ifndef _leaves_qty__GUARD__
    #define _leaves_qty__GUARD__
    DECL_STRONG_TYPE(leaves_qty, int32);
    #endif//_leaves_qty__GUARD__

    #ifndef _price_type__PriceType__GUARD__
    #define _price_type__PriceType__GUARD__
    DECL_STRONG_TYPE(price_type__PriceType, spiderrock::protobuf::api::PriceType);
    #endif//_price_type__PriceType__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _pri_agg_group__GUARD__
    #define _pri_agg_group__GUARD__
    DECL_STRONG_TYPE(pri_agg_group, string);
    #endif//_pri_agg_group__GUARD__

    #ifndef _sec_agg_group__GUARD__
    #define _sec_agg_group__GUARD__
    DECL_STRONG_TYPE(sec_agg_group, string);
    #endif//_sec_agg_group__GUARD__

    #ifndef _fill_transact_dttm__GUARD__
    #define _fill_transact_dttm__GUARD__
    DECL_STRONG_TYPE(fill_transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_transact_dttm__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_exch__GUARD__
    #define _fill_exch__GUARD__
    DECL_STRONG_TYPE(fill_exch, string);
    #endif//_fill_exch__GUARD__

    #ifndef _fill_exec_id__GUARD__
    #define _fill_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_exec_id, string);
    #endif//_fill_exec_id__GUARD__

    #ifndef _fill_exec_ref_id__GUARD__
    #define _fill_exec_ref_id__GUARD__
    DECL_STRONG_TYPE(fill_exec_ref_id, string);
    #endif//_fill_exec_ref_id__GUARD__

    #ifndef _fill_leg_ref_id__GUARD__
    #define _fill_leg_ref_id__GUARD__
    DECL_STRONG_TYPE(fill_leg_ref_id, int64);
    #endif//_fill_leg_ref_id__GUARD__

    #ifndef _fill_leg_ratio__GUARD__
    #define _fill_leg_ratio__GUARD__
    DECL_STRONG_TYPE(fill_leg_ratio, int32);
    #endif//_fill_leg_ratio__GUARD__

    #ifndef _fill_exch_fee__GUARD__
    #define _fill_exch_fee__GUARD__
    DECL_STRONG_TYPE(fill_exch_fee, float);
    #endif//_fill_exch_fee__GUARD__

    #ifndef _fill_market__GUARD__
    #define _fill_market__GUARD__
    DECL_STRONG_TYPE(fill_market, string);
    #endif//_fill_market__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_quantity__GUARD__
    #define _fill_quantity__GUARD__
    DECL_STRONG_TYPE(fill_quantity, int32);
    #endif//_fill_quantity__GUARD__

    #ifndef _fill_bid__GUARD__
    #define _fill_bid__GUARD__
    DECL_STRONG_TYPE(fill_bid, double);
    #endif//_fill_bid__GUARD__

    #ifndef _fill_ask__GUARD__
    #define _fill_ask__GUARD__
    DECL_STRONG_TYPE(fill_ask, double);
    #endif//_fill_ask__GUARD__

    #ifndef _fill_mark__GUARD__
    #define _fill_mark__GUARD__
    DECL_STRONG_TYPE(fill_mark, double);
    #endif//_fill_mark__GUARD__

    #ifndef _fill_ubid__GUARD__
    #define _fill_ubid__GUARD__
    DECL_STRONG_TYPE(fill_ubid, double);
    #endif//_fill_ubid__GUARD__

    #ifndef _fill_uask__GUARD__
    #define _fill_uask__GUARD__
    DECL_STRONG_TYPE(fill_uask, double);
    #endif//_fill_uask__GUARD__

    #ifndef _fill_vol__GUARD__
    #define _fill_vol__GUARD__
    DECL_STRONG_TYPE(fill_vol, float);
    #endif//_fill_vol__GUARD__

    #ifndef _fill_ve__GUARD__
    #define _fill_ve__GUARD__
    DECL_STRONG_TYPE(fill_ve, float);
    #endif//_fill_ve__GUARD__

    #ifndef _fill_ga__GUARD__
    #define _fill_ga__GUARD__
    DECL_STRONG_TYPE(fill_ga, float);
    #endif//_fill_ga__GUARD__

    #ifndef _fill_de__GUARD__
    #define _fill_de__GUARD__
    DECL_STRONG_TYPE(fill_de, float);
    #endif//_fill_de__GUARD__

    #ifndef _fill_th__GUARD__
    #define _fill_th__GUARD__
    DECL_STRONG_TYPE(fill_th, float);
    #endif//_fill_th__GUARD__

    #ifndef _fill_beta__GUARD__
    #define _fill_beta__GUARD__
    DECL_STRONG_TYPE(fill_beta, float);
    #endif//_fill_beta__GUARD__

    #ifndef _risk_vega__GUARD__
    #define _risk_vega__GUARD__
    DECL_STRONG_TYPE(risk_vega, float);
    #endif//_risk_vega__GUARD__

    #ifndef _risk_wt_vega__GUARD__
    #define _risk_wt_vega__GUARD__
    DECL_STRONG_TYPE(risk_wt_vega, float);
    #endif//_risk_wt_vega__GUARD__

    #ifndef _risk_nvalue__GUARD__
    #define _risk_nvalue__GUARD__
    DECL_STRONG_TYPE(risk_nvalue, float);
    #endif//_risk_nvalue__GUARD__

    #ifndef _risk_delta__GUARD__
    #define _risk_delta__GUARD__
    DECL_STRONG_TYPE(risk_delta, float);
    #endif//_risk_delta__GUARD__

    #ifndef _risk_ddelta__GUARD__
    #define _risk_ddelta__GUARD__
    DECL_STRONG_TYPE(risk_ddelta, float);
    #endif//_risk_ddelta__GUARD__

    #ifndef _risk_rm1__GUARD__
    #define _risk_rm1__GUARD__
    DECL_STRONG_TYPE(risk_rm1, float);
    #endif//_risk_rm1__GUARD__

    #ifndef _risk_rm2__GUARD__
    #define _risk_rm2__GUARD__
    DECL_STRONG_TYPE(risk_rm2, float);
    #endif//_risk_rm2__GUARD__

    #ifndef _risk_rm3__GUARD__
    #define _risk_rm3__GUARD__
    DECL_STRONG_TYPE(risk_rm3, float);
    #endif//_risk_rm3__GUARD__

    #ifndef _risk_rm4__GUARD__
    #define _risk_rm4__GUARD__
    DECL_STRONG_TYPE(risk_rm4, float);
    #endif//_risk_rm4__GUARD__

    #ifndef _risk_rm5__GUARD__
    #define _risk_rm5__GUARD__
    DECL_STRONG_TYPE(risk_rm5, float);
    #endif//_risk_rm5__GUARD__

    #ifndef _risk_rm6__GUARD__
    #define _risk_rm6__GUARD__
    DECL_STRONG_TYPE(risk_rm6, float);
    #endif//_risk_rm6__GUARD__

    #ifndef _risk_rm7__GUARD__
    #define _risk_rm7__GUARD__
    DECL_STRONG_TYPE(risk_rm7, float);
    #endif//_risk_rm7__GUARD__

    #ifndef _margin_udn_vdn__GUARD__
    #define _margin_udn_vdn__GUARD__
    DECL_STRONG_TYPE(margin_udn_vdn, float);
    #endif//_margin_udn_vdn__GUARD__

    #ifndef _margin_udn_vup__GUARD__
    #define _margin_udn_vup__GUARD__
    DECL_STRONG_TYPE(margin_udn_vup, float);
    #endif//_margin_udn_vup__GUARD__

    #ifndef _margin_uup_vdn__GUARD__
    #define _margin_uup_vdn__GUARD__
    DECL_STRONG_TYPE(margin_uup_vdn, float);
    #endif//_margin_uup_vdn__GUARD__

    #ifndef _margin_uup_vup__GUARD__
    #define _margin_uup_vup__GUARD__
    DECL_STRONG_TYPE(margin_uup_vup, float);
    #endif//_margin_uup_vup__GUARD__

    #ifndef _risk_u50_dn__GUARD__
    #define _risk_u50_dn__GUARD__
    DECL_STRONG_TYPE(risk_u50_dn, float);
    #endif//_risk_u50_dn__GUARD__

    #ifndef _risk_u50_up__GUARD__
    #define _risk_u50_up__GUARD__
    DECL_STRONG_TYPE(risk_u50_up, float);
    #endif//_risk_u50_up__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _underliers_per_cn__GUARD__
    #define _underliers_per_cn__GUARD__
    DECL_STRONG_TYPE(underliers_per_cn, int32);
    #endif//_underliers_per_cn__GUARD__

    #ifndef _underlier_type__UnderlierType__GUARD__
    #define _underlier_type__UnderlierType__GUARD__
    DECL_STRONG_TYPE(underlier_type__UnderlierType, spiderrock::protobuf::api::UnderlierType);
    #endif//_underlier_type__UnderlierType__GUARD__

    #ifndef _tick_value__GUARD__
    #define _tick_value__GUARD__
    DECL_STRONG_TYPE(tick_value, float);
    #endif//_tick_value__GUARD__

    #ifndef _point_value__float__GUARD__
    #define _point_value__float__GUARD__
    DECL_STRONG_TYPE(point_value__float, float);
    #endif//_point_value__float__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _u_prc_ratio__float__GUARD__
    #define _u_prc_ratio__float__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio__float, float);
    #endif//_u_prc_ratio__float__GUARD__

    #ifndef _min_tick_size__float__GUARD__
    #define _min_tick_size__float__GUARD__
    DECL_STRONG_TYPE(min_tick_size__float, float);
    #endif//_min_tick_size__float__GUARD__

    #ifndef _price_format__GUARD__
    #define _price_format__GUARD__
    DECL_STRONG_TYPE(price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _data_center__v7__GUARD__
    #define _data_center__v7__GUARD__
    DECL_STRONG_TYPE(data_center__v7, spiderrock::protobuf::api::SRDataCenter_V7);
    #endif//_data_center__v7__GUARD__

    #ifndef _face_side__v7__GUARD__
    #define _face_side__v7__GUARD__
    DECL_STRONG_TYPE(face_side__v7, spiderrock::protobuf::api::FaceSide);
    #endif//_face_side__v7__GUARD__

    #ifndef _face_shape__v7__GUARD__
    #define _face_shape__v7__GUARD__
    DECL_STRONG_TYPE(face_shape__v7, spiderrock::protobuf::api::FaceShape);
    #endif//_face_shape__v7__GUARD__

    #ifndef _fill_pr__v7__GUARD__
    #define _fill_pr__v7__GUARD__
    DECL_STRONG_TYPE(fill_pr__v7, float);
    #endif//_fill_pr__v7__GUARD__

    #ifndef _fill_risk_metric1__v7__GUARD__
    #define _fill_risk_metric1__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric1__v7, float);
    #endif//_fill_risk_metric1__v7__GUARD__

    #ifndef _fill_risk_metric2__v7__GUARD__
    #define _fill_risk_metric2__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric2__v7, float);
    #endif//_fill_risk_metric2__v7__GUARD__

    #ifndef _fill_risk_metric3__v7__GUARD__
    #define _fill_risk_metric3__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric3__v7, float);
    #endif//_fill_risk_metric3__v7__GUARD__

    #ifndef _fill_risk_metric4__v7__GUARD__
    #define _fill_risk_metric4__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric4__v7, float);
    #endif//_fill_risk_metric4__v7__GUARD__

    #ifndef _fill_risk_metric5__v7__GUARD__
    #define _fill_risk_metric5__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric5__v7, float);
    #endif//_fill_risk_metric5__v7__GUARD__

    #ifndef _fill_risk_metric6__v7__GUARD__
    #define _fill_risk_metric6__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric6__v7, float);
    #endif//_fill_risk_metric6__v7__GUARD__

    #ifndef _fill_risk_metric7__v7__GUARD__
    #define _fill_risk_metric7__v7__GUARD__
    DECL_STRONG_TYPE(fill_risk_metric7__v7, float);
    #endif//_fill_risk_metric7__v7__GUARD__

    #ifndef _fill_s08_dn__v7__GUARD__
    #define _fill_s08_dn__v7__GUARD__
    DECL_STRONG_TYPE(fill_s08_dn__v7, float);
    #endif//_fill_s08_dn__v7__GUARD__

    #ifndef _fill_s06_up__v7__GUARD__
    #define _fill_s06_up__v7__GUARD__
    DECL_STRONG_TYPE(fill_s06_up__v7, float);
    #endif//_fill_s06_up__v7__GUARD__

    #ifndef _fill_s15_dn__v7__GUARD__
    #define _fill_s15_dn__v7__GUARD__
    DECL_STRONG_TYPE(fill_s15_dn__v7, float);
    #endif//_fill_s15_dn__v7__GUARD__

    #ifndef _fill_s15_up__v7__GUARD__
    #define _fill_s15_up__v7__GUARD__
    DECL_STRONG_TYPE(fill_s15_up__v7, float);
    #endif//_fill_s15_up__v7__GUARD__

    #ifndef _fill_number__GUARD__
    #define _fill_number__GUARD__
    DECL_STRONG_TYPE(fill_number, int64);
    #endif//_fill_number__GUARD__

    
    class SpdrRiskExecution_PKey {
        public:
        //using statements for all types used in this class
        using fill_number = spiderrock::protobuf::api::fill_number;

        private:
        fill_number m_fill_number{};

        public:
        fill_number get_fill_number() const {
            return m_fill_number;
        }
        void set_fill_number(const fill_number& value)  {
            m_fill_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskExecution_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskExecution_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const fill_number & value) { set_fill_number(value); }


        SpdrRiskExecution_PKey() {}

        virtual ~SpdrRiskExecution_PKey() {
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
        bool IncludeFillNumber() const {
            return !(m_fill_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeFillNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_fill_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeFillNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_fill_number);
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
                    case 10: {m_fill_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrRiskExecution {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrRiskExecution_PKey;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using version = spiderrock::protobuf::api::version__int32;
        using exec_status = spiderrock::protobuf::api::exec_status;
        using exec_shape = spiderrock::protobuf::api::exec_shape;
        using package_id = spiderrock::protobuf::api::package_id;
        using parent_number = spiderrock::protobuf::api::parent_number;
        using parent_version = spiderrock::protobuf::api::parent_version;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__int64;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using exec_role = spiderrock::protobuf::api::exec_role;
        using child_order_handling = spiderrock::protobuf::api::child_order_handling;
        using child_algo_handler = spiderrock::protobuf::api::child_algo_handler;
        using child_ssale_flag = spiderrock::protobuf::api::child_ssale_flag;
        using user_name = spiderrock::protobuf::api::user_name;
        using order_side = spiderrock::protobuf::api::order_side;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using cum_leg_fill_quantity = spiderrock::protobuf::api::cum_leg_fill_quantity;
        using avg_leg_fill_price = spiderrock::protobuf::api::avg_leg_fill_price;
        using leaves_qty = spiderrock::protobuf::api::leaves_qty;
        using price_type = spiderrock::protobuf::api::price_type__PriceType;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using pri_agg_group = spiderrock::protobuf::api::pri_agg_group;
        using sec_agg_group = spiderrock::protobuf::api::sec_agg_group;
        using fill_transact_dttm = spiderrock::protobuf::api::fill_transact_dttm;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_exch = spiderrock::protobuf::api::fill_exch;
        using fill_exec_id = spiderrock::protobuf::api::fill_exec_id;
        using fill_exec_ref_id = spiderrock::protobuf::api::fill_exec_ref_id;
        using fill_leg_ref_id = spiderrock::protobuf::api::fill_leg_ref_id;
        using fill_leg_ratio = spiderrock::protobuf::api::fill_leg_ratio;
        using fill_exch_fee = spiderrock::protobuf::api::fill_exch_fee;
        using fill_market = spiderrock::protobuf::api::fill_market;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_quantity = spiderrock::protobuf::api::fill_quantity;
        using fill_bid = spiderrock::protobuf::api::fill_bid;
        using fill_ask = spiderrock::protobuf::api::fill_ask;
        using fill_mark = spiderrock::protobuf::api::fill_mark;
        using fill_ubid = spiderrock::protobuf::api::fill_ubid;
        using fill_uask = spiderrock::protobuf::api::fill_uask;
        using fill_vol = spiderrock::protobuf::api::fill_vol;
        using fill_ve = spiderrock::protobuf::api::fill_ve;
        using fill_ga = spiderrock::protobuf::api::fill_ga;
        using fill_de = spiderrock::protobuf::api::fill_de;
        using fill_th = spiderrock::protobuf::api::fill_th;
        using fill_beta = spiderrock::protobuf::api::fill_beta;
        using risk_vega = spiderrock::protobuf::api::risk_vega;
        using risk_wt_vega = spiderrock::protobuf::api::risk_wt_vega;
        using risk_nvalue = spiderrock::protobuf::api::risk_nvalue;
        using risk_delta = spiderrock::protobuf::api::risk_delta;
        using risk_ddelta = spiderrock::protobuf::api::risk_ddelta;
        using risk_rm1 = spiderrock::protobuf::api::risk_rm1;
        using risk_rm2 = spiderrock::protobuf::api::risk_rm2;
        using risk_rm3 = spiderrock::protobuf::api::risk_rm3;
        using risk_rm4 = spiderrock::protobuf::api::risk_rm4;
        using risk_rm5 = spiderrock::protobuf::api::risk_rm5;
        using risk_rm6 = spiderrock::protobuf::api::risk_rm6;
        using risk_rm7 = spiderrock::protobuf::api::risk_rm7;
        using margin_udn_vdn = spiderrock::protobuf::api::margin_udn_vdn;
        using margin_udn_vup = spiderrock::protobuf::api::margin_udn_vup;
        using margin_uup_vdn = spiderrock::protobuf::api::margin_uup_vdn;
        using margin_uup_vup = spiderrock::protobuf::api::margin_uup_vup;
        using risk_u50_dn = spiderrock::protobuf::api::risk_u50_dn;
        using risk_u50_up = spiderrock::protobuf::api::risk_u50_up;
        using years = spiderrock::protobuf::api::years__float;
        using underliers_per_cn = spiderrock::protobuf::api::underliers_per_cn;
        using underlier_type = spiderrock::protobuf::api::underlier_type__UnderlierType;
        using tick_value = spiderrock::protobuf::api::tick_value;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio__float;
        using min_tick_size = spiderrock::protobuf::api::min_tick_size__float;
        using price_format = spiderrock::protobuf::api::price_format;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using data_center__v7 = spiderrock::protobuf::api::data_center__v7;
        using face_side__v7 = spiderrock::protobuf::api::face_side__v7;
        using face_shape__v7 = spiderrock::protobuf::api::face_shape__v7;
        using fill_pr__v7 = spiderrock::protobuf::api::fill_pr__v7;
        using fill_risk_metric1__v7 = spiderrock::protobuf::api::fill_risk_metric1__v7;
        using fill_risk_metric2__v7 = spiderrock::protobuf::api::fill_risk_metric2__v7;
        using fill_risk_metric3__v7 = spiderrock::protobuf::api::fill_risk_metric3__v7;
        using fill_risk_metric4__v7 = spiderrock::protobuf::api::fill_risk_metric4__v7;
        using fill_risk_metric5__v7 = spiderrock::protobuf::api::fill_risk_metric5__v7;
        using fill_risk_metric6__v7 = spiderrock::protobuf::api::fill_risk_metric6__v7;
        using fill_risk_metric7__v7 = spiderrock::protobuf::api::fill_risk_metric7__v7;
        using fill_s08_dn__v7 = spiderrock::protobuf::api::fill_s08_dn__v7;
        using fill_s06_up__v7 = spiderrock::protobuf::api::fill_s06_up__v7;
        using fill_s15_dn__v7 = spiderrock::protobuf::api::fill_s15_dn__v7;
        using fill_s15_up__v7 = spiderrock::protobuf::api::fill_s15_up__v7;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_realm m_sys_realm{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        version m_version{};
        exec_status m_exec_status{};
        exec_shape m_exec_shape{};
        package_id m_package_id{};
        parent_number m_parent_number{};
        parent_version m_parent_version{};
        base_parent_number m_base_parent_number{};
        cl_ord_id m_cl_ord_id{};
        risk_group_id m_risk_group_id{};
        parent_shape m_parent_shape{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        ticker m_ticker{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        engine_name m_engine_name{};
        exec_role m_exec_role{};
        child_order_handling m_child_order_handling{};
        child_algo_handler m_child_algo_handler{};
        child_ssale_flag m_child_ssale_flag{};
        user_name m_user_name{};
        order_side m_order_side{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        cum_leg_fill_quantity m_cum_leg_fill_quantity{};
        avg_leg_fill_price m_avg_leg_fill_price{};
        leaves_qty m_leaves_qty{};
        price_type m_price_type{};
        firm_type m_firm_type{};
        pri_agg_group m_pri_agg_group{};
        sec_agg_group m_sec_agg_group{};
        fill_transact_dttm m_fill_transact_dttm{};
        fill_dttm m_fill_dttm{};
        fill_exch m_fill_exch{};
        fill_exec_id m_fill_exec_id{};
        fill_exec_ref_id m_fill_exec_ref_id{};
        fill_leg_ref_id m_fill_leg_ref_id{};
        fill_leg_ratio m_fill_leg_ratio{};
        fill_exch_fee m_fill_exch_fee{};
        fill_market m_fill_market{};
        fill_price m_fill_price{};
        fill_quantity m_fill_quantity{};
        fill_bid m_fill_bid{};
        fill_ask m_fill_ask{};
        fill_mark m_fill_mark{};
        fill_ubid m_fill_ubid{};
        fill_uask m_fill_uask{};
        fill_vol m_fill_vol{};
        fill_ve m_fill_ve{};
        fill_ga m_fill_ga{};
        fill_de m_fill_de{};
        fill_th m_fill_th{};
        fill_beta m_fill_beta{};
        risk_vega m_risk_vega{};
        risk_wt_vega m_risk_wt_vega{};
        risk_nvalue m_risk_nvalue{};
        risk_delta m_risk_delta{};
        risk_ddelta m_risk_ddelta{};
        risk_rm1 m_risk_rm1{};
        risk_rm2 m_risk_rm2{};
        risk_rm3 m_risk_rm3{};
        risk_rm4 m_risk_rm4{};
        risk_rm5 m_risk_rm5{};
        risk_rm6 m_risk_rm6{};
        risk_rm7 m_risk_rm7{};
        margin_udn_vdn m_margin_udn_vdn{};
        margin_udn_vup m_margin_udn_vup{};
        margin_uup_vdn m_margin_uup_vdn{};
        margin_uup_vup m_margin_uup_vup{};
        risk_u50_dn m_risk_u50_dn{};
        risk_u50_up m_risk_u50_up{};
        years m_years{};
        underliers_per_cn m_underliers_per_cn{};
        underlier_type m_underlier_type{};
        tick_value m_tick_value{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        u_prc_ratio m_u_prc_ratio{};
        min_tick_size m_min_tick_size{};
        price_format m_price_format{};
        u_price_format m_u_price_format{};
        timestamp m_timestamp{};
        data_center__v7 m_data_center__v7{};
        face_side__v7 m_face_side__v7{};
        face_shape__v7 m_face_shape__v7{};
        fill_pr__v7 m_fill_pr__v7{};
        fill_risk_metric1__v7 m_fill_risk_metric1__v7{};
        fill_risk_metric2__v7 m_fill_risk_metric2__v7{};
        fill_risk_metric3__v7 m_fill_risk_metric3__v7{};
        fill_risk_metric4__v7 m_fill_risk_metric4__v7{};
        fill_risk_metric5__v7 m_fill_risk_metric5__v7{};
        fill_risk_metric6__v7 m_fill_risk_metric6__v7{};
        fill_risk_metric7__v7 m_fill_risk_metric7__v7{};
        fill_s08_dn__v7 m_fill_s08_dn__v7{};
        fill_s06_up__v7 m_fill_s06_up__v7{};
        fill_s15_dn__v7 m_fill_s15_dn__v7{};
        fill_s15_up__v7 m_fill_s15_up__v7{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sys_realm get_sys_realm() const {
            return m_sys_realm;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        version get_version() const {
            return m_version;
        }		
        exec_status get_exec_status() const {
            return m_exec_status;
        }		
        exec_shape get_exec_shape() const {
            return m_exec_shape;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        parent_number get_parent_number() const {
            return m_parent_number;
        }		
        parent_version get_parent_version() const {
            return m_parent_version;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        parent_shape get_parent_shape() const {
            return m_parent_shape;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        exec_role get_exec_role() const {
            return m_exec_role;
        }		
        child_order_handling get_child_order_handling() const {
            return m_child_order_handling;
        }		
        child_algo_handler get_child_algo_handler() const {
            return m_child_algo_handler;
        }		
        child_ssale_flag get_child_ssale_flag() const {
            return m_child_ssale_flag;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        spdr_order_status get_spdr_order_status() const {
            return m_spdr_order_status;
        }		
        spdr_close_reason get_spdr_close_reason() const {
            return m_spdr_close_reason;
        }		
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        cum_leg_fill_quantity get_cum_leg_fill_quantity() const {
            return m_cum_leg_fill_quantity;
        }		
        avg_leg_fill_price get_avg_leg_fill_price() const {
            return m_avg_leg_fill_price;
        }		
        leaves_qty get_leaves_qty() const {
            return m_leaves_qty;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        pri_agg_group get_pri_agg_group() const {
            return m_pri_agg_group;
        }		
        sec_agg_group get_sec_agg_group() const {
            return m_sec_agg_group;
        }		
        fill_transact_dttm get_fill_transact_dttm() const {
            return m_fill_transact_dttm;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_exch get_fill_exch() const {
            return m_fill_exch;
        }		
        fill_exec_id get_fill_exec_id() const {
            return m_fill_exec_id;
        }		
        fill_exec_ref_id get_fill_exec_ref_id() const {
            return m_fill_exec_ref_id;
        }		
        fill_leg_ref_id get_fill_leg_ref_id() const {
            return m_fill_leg_ref_id;
        }		
        fill_leg_ratio get_fill_leg_ratio() const {
            return m_fill_leg_ratio;
        }		
        fill_exch_fee get_fill_exch_fee() const {
            return m_fill_exch_fee;
        }		
        fill_market get_fill_market() const {
            return m_fill_market;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_quantity get_fill_quantity() const {
            return m_fill_quantity;
        }		
        fill_bid get_fill_bid() const {
            return m_fill_bid;
        }		
        fill_ask get_fill_ask() const {
            return m_fill_ask;
        }		
        fill_mark get_fill_mark() const {
            return m_fill_mark;
        }		
        fill_ubid get_fill_ubid() const {
            return m_fill_ubid;
        }		
        fill_uask get_fill_uask() const {
            return m_fill_uask;
        }		
        fill_vol get_fill_vol() const {
            return m_fill_vol;
        }		
        fill_ve get_fill_ve() const {
            return m_fill_ve;
        }		
        fill_ga get_fill_ga() const {
            return m_fill_ga;
        }		
        fill_de get_fill_de() const {
            return m_fill_de;
        }		
        fill_th get_fill_th() const {
            return m_fill_th;
        }		
        fill_beta get_fill_beta() const {
            return m_fill_beta;
        }		
        risk_vega get_risk_vega() const {
            return m_risk_vega;
        }		
        risk_wt_vega get_risk_wt_vega() const {
            return m_risk_wt_vega;
        }		
        risk_nvalue get_risk_nvalue() const {
            return m_risk_nvalue;
        }		
        risk_delta get_risk_delta() const {
            return m_risk_delta;
        }		
        risk_ddelta get_risk_ddelta() const {
            return m_risk_ddelta;
        }		
        risk_rm1 get_risk_rm1() const {
            return m_risk_rm1;
        }		
        risk_rm2 get_risk_rm2() const {
            return m_risk_rm2;
        }		
        risk_rm3 get_risk_rm3() const {
            return m_risk_rm3;
        }		
        risk_rm4 get_risk_rm4() const {
            return m_risk_rm4;
        }		
        risk_rm5 get_risk_rm5() const {
            return m_risk_rm5;
        }		
        risk_rm6 get_risk_rm6() const {
            return m_risk_rm6;
        }		
        risk_rm7 get_risk_rm7() const {
            return m_risk_rm7;
        }		
        margin_udn_vdn get_margin_udn_vdn() const {
            return m_margin_udn_vdn;
        }		
        margin_udn_vup get_margin_udn_vup() const {
            return m_margin_udn_vup;
        }		
        margin_uup_vdn get_margin_uup_vdn() const {
            return m_margin_uup_vdn;
        }		
        margin_uup_vup get_margin_uup_vup() const {
            return m_margin_uup_vup;
        }		
        risk_u50_dn get_risk_u50_dn() const {
            return m_risk_u50_dn;
        }		
        risk_u50_up get_risk_u50_up() const {
            return m_risk_u50_up;
        }		
        years get_years() const {
            return m_years;
        }		
        underliers_per_cn get_underliers_per_cn() const {
            return m_underliers_per_cn;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
        }		
        tick_value get_tick_value() const {
            return m_tick_value;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        min_tick_size get_min_tick_size() const {
            return m_min_tick_size;
        }		
        price_format get_price_format() const {
            return m_price_format;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        data_center__v7 get_data_center__v7() const {
            return m_data_center__v7;
        }		
        face_side__v7 get_face_side__v7() const {
            return m_face_side__v7;
        }		
        face_shape__v7 get_face_shape__v7() const {
            return m_face_shape__v7;
        }		
        fill_pr__v7 get_fill_pr__v7() const {
            return m_fill_pr__v7;
        }		
        fill_risk_metric1__v7 get_fill_risk_metric1__v7() const {
            return m_fill_risk_metric1__v7;
        }		
        fill_risk_metric2__v7 get_fill_risk_metric2__v7() const {
            return m_fill_risk_metric2__v7;
        }		
        fill_risk_metric3__v7 get_fill_risk_metric3__v7() const {
            return m_fill_risk_metric3__v7;
        }		
        fill_risk_metric4__v7 get_fill_risk_metric4__v7() const {
            return m_fill_risk_metric4__v7;
        }		
        fill_risk_metric5__v7 get_fill_risk_metric5__v7() const {
            return m_fill_risk_metric5__v7;
        }		
        fill_risk_metric6__v7 get_fill_risk_metric6__v7() const {
            return m_fill_risk_metric6__v7;
        }		
        fill_risk_metric7__v7 get_fill_risk_metric7__v7() const {
            return m_fill_risk_metric7__v7;
        }		
        fill_s08_dn__v7 get_fill_s08_dn__v7() const {
            return m_fill_s08_dn__v7;
        }		
        fill_s06_up__v7 get_fill_s06_up__v7() const {
            return m_fill_s06_up__v7;
        }		
        fill_s15_dn__v7 get_fill_s15_dn__v7() const {
            return m_fill_s15_dn__v7;
        }		
        fill_s15_up__v7 get_fill_s15_up__v7() const {
            return m_fill_s15_up__v7;
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
        void set_sys_realm(const sys_realm& value)  {
            m_sys_realm = value;
        }
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_version(const version& value)  {
            m_version = value;
        }
        void set_exec_status(const exec_status& value)  {
            m_exec_status = value;
        }
        void set_exec_shape(const exec_shape& value)  {
            m_exec_shape = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_parent_version(const parent_version& value)  {
            m_parent_version = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_exec_role(const exec_role& value)  {
            m_exec_role = value;
        }
        void set_child_order_handling(const child_order_handling& value)  {
            m_child_order_handling = value;
        }
        void set_child_algo_handler(const child_algo_handler& value)  {
            m_child_algo_handler = value;
        }
        void set_child_ssale_flag(const child_ssale_flag& value)  {
            m_child_ssale_flag = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_spdr_order_status(const spdr_order_status& value)  {
            m_spdr_order_status = value;
        }
        void set_spdr_close_reason(const spdr_close_reason& value)  {
            m_spdr_close_reason = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_cum_leg_fill_quantity(const cum_leg_fill_quantity& value)  {
            m_cum_leg_fill_quantity = value;
        }
        void set_avg_leg_fill_price(const avg_leg_fill_price& value)  {
            m_avg_leg_fill_price = value;
        }
        void set_leaves_qty(const leaves_qty& value)  {
            m_leaves_qty = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_pri_agg_group(const pri_agg_group& value)  {
            m_pri_agg_group = value;
        }
        void set_sec_agg_group(const sec_agg_group& value)  {
            m_sec_agg_group = value;
        }
        void set_fill_transact_dttm(const fill_transact_dttm& value)  {
            m_fill_transact_dttm = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_exch(const fill_exch& value)  {
            m_fill_exch = value;
        }
        void set_fill_exec_id(const fill_exec_id& value)  {
            m_fill_exec_id = value;
        }
        void set_fill_exec_ref_id(const fill_exec_ref_id& value)  {
            m_fill_exec_ref_id = value;
        }
        void set_fill_leg_ref_id(const fill_leg_ref_id& value)  {
            m_fill_leg_ref_id = value;
        }
        void set_fill_leg_ratio(const fill_leg_ratio& value)  {
            m_fill_leg_ratio = value;
        }
        void set_fill_exch_fee(const fill_exch_fee& value)  {
            m_fill_exch_fee = value;
        }
        void set_fill_market(const fill_market& value)  {
            m_fill_market = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_quantity(const fill_quantity& value)  {
            m_fill_quantity = value;
        }
        void set_fill_bid(const fill_bid& value)  {
            m_fill_bid = value;
        }
        void set_fill_ask(const fill_ask& value)  {
            m_fill_ask = value;
        }
        void set_fill_mark(const fill_mark& value)  {
            m_fill_mark = value;
        }
        void set_fill_ubid(const fill_ubid& value)  {
            m_fill_ubid = value;
        }
        void set_fill_uask(const fill_uask& value)  {
            m_fill_uask = value;
        }
        void set_fill_vol(const fill_vol& value)  {
            m_fill_vol = value;
        }
        void set_fill_ve(const fill_ve& value)  {
            m_fill_ve = value;
        }
        void set_fill_ga(const fill_ga& value)  {
            m_fill_ga = value;
        }
        void set_fill_de(const fill_de& value)  {
            m_fill_de = value;
        }
        void set_fill_th(const fill_th& value)  {
            m_fill_th = value;
        }
        void set_fill_beta(const fill_beta& value)  {
            m_fill_beta = value;
        }
        void set_risk_vega(const risk_vega& value)  {
            m_risk_vega = value;
        }
        void set_risk_wt_vega(const risk_wt_vega& value)  {
            m_risk_wt_vega = value;
        }
        void set_risk_nvalue(const risk_nvalue& value)  {
            m_risk_nvalue = value;
        }
        void set_risk_delta(const risk_delta& value)  {
            m_risk_delta = value;
        }
        void set_risk_ddelta(const risk_ddelta& value)  {
            m_risk_ddelta = value;
        }
        void set_risk_rm1(const risk_rm1& value)  {
            m_risk_rm1 = value;
        }
        void set_risk_rm2(const risk_rm2& value)  {
            m_risk_rm2 = value;
        }
        void set_risk_rm3(const risk_rm3& value)  {
            m_risk_rm3 = value;
        }
        void set_risk_rm4(const risk_rm4& value)  {
            m_risk_rm4 = value;
        }
        void set_risk_rm5(const risk_rm5& value)  {
            m_risk_rm5 = value;
        }
        void set_risk_rm6(const risk_rm6& value)  {
            m_risk_rm6 = value;
        }
        void set_risk_rm7(const risk_rm7& value)  {
            m_risk_rm7 = value;
        }
        void set_margin_udn_vdn(const margin_udn_vdn& value)  {
            m_margin_udn_vdn = value;
        }
        void set_margin_udn_vup(const margin_udn_vup& value)  {
            m_margin_udn_vup = value;
        }
        void set_margin_uup_vdn(const margin_uup_vdn& value)  {
            m_margin_uup_vdn = value;
        }
        void set_margin_uup_vup(const margin_uup_vup& value)  {
            m_margin_uup_vup = value;
        }
        void set_risk_u50_dn(const risk_u50_dn& value)  {
            m_risk_u50_dn = value;
        }
        void set_risk_u50_up(const risk_u50_up& value)  {
            m_risk_u50_up = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_underliers_per_cn(const underliers_per_cn& value)  {
            m_underliers_per_cn = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_tick_value(const tick_value& value)  {
            m_tick_value = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_min_tick_size(const min_tick_size& value)  {
            m_min_tick_size = value;
        }
        void set_price_format(const price_format& value)  {
            m_price_format = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_data_center__v7(const data_center__v7& value)  {
            m_data_center__v7 = value;
        }
        void set_face_side__v7(const face_side__v7& value)  {
            m_face_side__v7 = value;
        }
        void set_face_shape__v7(const face_shape__v7& value)  {
            m_face_shape__v7 = value;
        }
        void set_fill_pr__v7(const fill_pr__v7& value)  {
            m_fill_pr__v7 = value;
        }
        void set_fill_risk_metric1__v7(const fill_risk_metric1__v7& value)  {
            m_fill_risk_metric1__v7 = value;
        }
        void set_fill_risk_metric2__v7(const fill_risk_metric2__v7& value)  {
            m_fill_risk_metric2__v7 = value;
        }
        void set_fill_risk_metric3__v7(const fill_risk_metric3__v7& value)  {
            m_fill_risk_metric3__v7 = value;
        }
        void set_fill_risk_metric4__v7(const fill_risk_metric4__v7& value)  {
            m_fill_risk_metric4__v7 = value;
        }
        void set_fill_risk_metric5__v7(const fill_risk_metric5__v7& value)  {
            m_fill_risk_metric5__v7 = value;
        }
        void set_fill_risk_metric6__v7(const fill_risk_metric6__v7& value)  {
            m_fill_risk_metric6__v7 = value;
        }
        void set_fill_risk_metric7__v7(const fill_risk_metric7__v7& value)  {
            m_fill_risk_metric7__v7 = value;
        }
        void set_fill_s08_dn__v7(const fill_s08_dn__v7& value)  {
            m_fill_s08_dn__v7 = value;
        }
        void set_fill_s06_up__v7(const fill_s06_up__v7& value)  {
            m_fill_s06_up__v7 = value;
        }
        void set_fill_s15_dn__v7(const fill_s15_dn__v7& value)  {
            m_fill_s15_dn__v7 = value;
        }
        void set_fill_s15_up__v7(const fill_s15_up__v7& value)  {
            m_fill_s15_up__v7 = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskExecution::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_realm & value) {
            set_sys_realm(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const version & value) {
            set_version(value);
        }
        void set(const exec_status & value) {
            set_exec_status(value);
        }
        void set(const exec_shape & value) {
            set_exec_shape(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const parent_number & value) {
            set_parent_number(value);
        }
        void set(const parent_version & value) {
            set_parent_version(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const cl_ord_id & value) {
            set_cl_ord_id(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const parent_shape & value) {
            set_parent_shape(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const exec_role & value) {
            set_exec_role(value);
        }
        void set(const child_order_handling & value) {
            set_child_order_handling(value);
        }
        void set(const child_algo_handler & value) {
            set_child_algo_handler(value);
        }
        void set(const child_ssale_flag & value) {
            set_child_ssale_flag(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const spdr_order_status & value) {
            set_spdr_order_status(value);
        }
        void set(const spdr_close_reason & value) {
            set_spdr_close_reason(value);
        }
        void set(const cum_fill_quantity & value) {
            set_cum_fill_quantity(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const cum_leg_fill_quantity & value) {
            set_cum_leg_fill_quantity(value);
        }
        void set(const avg_leg_fill_price & value) {
            set_avg_leg_fill_price(value);
        }
        void set(const leaves_qty & value) {
            set_leaves_qty(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const pri_agg_group & value) {
            set_pri_agg_group(value);
        }
        void set(const sec_agg_group & value) {
            set_sec_agg_group(value);
        }
        void set(const fill_transact_dttm & value) {
            set_fill_transact_dttm(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_exch & value) {
            set_fill_exch(value);
        }
        void set(const fill_exec_id & value) {
            set_fill_exec_id(value);
        }
        void set(const fill_exec_ref_id & value) {
            set_fill_exec_ref_id(value);
        }
        void set(const fill_leg_ref_id & value) {
            set_fill_leg_ref_id(value);
        }
        void set(const fill_leg_ratio & value) {
            set_fill_leg_ratio(value);
        }
        void set(const fill_exch_fee & value) {
            set_fill_exch_fee(value);
        }
        void set(const fill_market & value) {
            set_fill_market(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_quantity & value) {
            set_fill_quantity(value);
        }
        void set(const fill_bid & value) {
            set_fill_bid(value);
        }
        void set(const fill_ask & value) {
            set_fill_ask(value);
        }
        void set(const fill_mark & value) {
            set_fill_mark(value);
        }
        void set(const fill_ubid & value) {
            set_fill_ubid(value);
        }
        void set(const fill_uask & value) {
            set_fill_uask(value);
        }
        void set(const fill_vol & value) {
            set_fill_vol(value);
        }
        void set(const fill_ve & value) {
            set_fill_ve(value);
        }
        void set(const fill_ga & value) {
            set_fill_ga(value);
        }
        void set(const fill_de & value) {
            set_fill_de(value);
        }
        void set(const fill_th & value) {
            set_fill_th(value);
        }
        void set(const fill_beta & value) {
            set_fill_beta(value);
        }
        void set(const risk_vega & value) {
            set_risk_vega(value);
        }
        void set(const risk_wt_vega & value) {
            set_risk_wt_vega(value);
        }
        void set(const risk_nvalue & value) {
            set_risk_nvalue(value);
        }
        void set(const risk_delta & value) {
            set_risk_delta(value);
        }
        void set(const risk_ddelta & value) {
            set_risk_ddelta(value);
        }
        void set(const risk_rm1 & value) {
            set_risk_rm1(value);
        }
        void set(const risk_rm2 & value) {
            set_risk_rm2(value);
        }
        void set(const risk_rm3 & value) {
            set_risk_rm3(value);
        }
        void set(const risk_rm4 & value) {
            set_risk_rm4(value);
        }
        void set(const risk_rm5 & value) {
            set_risk_rm5(value);
        }
        void set(const risk_rm6 & value) {
            set_risk_rm6(value);
        }
        void set(const risk_rm7 & value) {
            set_risk_rm7(value);
        }
        void set(const margin_udn_vdn & value) {
            set_margin_udn_vdn(value);
        }
        void set(const margin_udn_vup & value) {
            set_margin_udn_vup(value);
        }
        void set(const margin_uup_vdn & value) {
            set_margin_uup_vdn(value);
        }
        void set(const margin_uup_vup & value) {
            set_margin_uup_vup(value);
        }
        void set(const risk_u50_dn & value) {
            set_risk_u50_dn(value);
        }
        void set(const risk_u50_up & value) {
            set_risk_u50_up(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const underliers_per_cn & value) {
            set_underliers_per_cn(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const tick_value & value) {
            set_tick_value(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const min_tick_size & value) {
            set_min_tick_size(value);
        }
        void set(const price_format & value) {
            set_price_format(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const data_center__v7 & value) {
            set_data_center__v7(value);
        }
        void set(const face_side__v7 & value) {
            set_face_side__v7(value);
        }
        void set(const face_shape__v7 & value) {
            set_face_shape__v7(value);
        }
        void set(const fill_pr__v7 & value) {
            set_fill_pr__v7(value);
        }
        void set(const fill_risk_metric1__v7 & value) {
            set_fill_risk_metric1__v7(value);
        }
        void set(const fill_risk_metric2__v7 & value) {
            set_fill_risk_metric2__v7(value);
        }
        void set(const fill_risk_metric3__v7 & value) {
            set_fill_risk_metric3__v7(value);
        }
        void set(const fill_risk_metric4__v7 & value) {
            set_fill_risk_metric4__v7(value);
        }
        void set(const fill_risk_metric5__v7 & value) {
            set_fill_risk_metric5__v7(value);
        }
        void set(const fill_risk_metric6__v7 & value) {
            set_fill_risk_metric6__v7(value);
        }
        void set(const fill_risk_metric7__v7 & value) {
            set_fill_risk_metric7__v7(value);
        }
        void set(const fill_s08_dn__v7 & value) {
            set_fill_s08_dn__v7(value);
        }
        void set(const fill_s06_up__v7 & value) {
            set_fill_s06_up__v7(value);
        }
        void set(const fill_s15_dn__v7 & value) {
            set_fill_s15_dn__v7(value);
        }
        void set(const fill_s15_up__v7 & value) {
            set_fill_s15_up__v7(value);
        }

        void set(const SpdrRiskExecution & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_realm);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_version);
            set(value.m_exec_status);
            set(value.m_exec_shape);
            set(value.m_package_id);
            set(value.m_parent_number);
            set(value.m_parent_version);
            set(value.m_base_parent_number);
            set(value.m_cl_ord_id);
            set(value.m_risk_group_id);
            set(value.m_parent_shape);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_ticker);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_engine_name);
            set(value.m_exec_role);
            set(value.m_child_order_handling);
            set(value.m_child_algo_handler);
            set(value.m_child_ssale_flag);
            set(value.m_user_name);
            set(value.m_order_side);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_price);
            set(value.m_cum_leg_fill_quantity);
            set(value.m_avg_leg_fill_price);
            set(value.m_leaves_qty);
            set(value.m_price_type);
            set(value.m_firm_type);
            set(value.m_pri_agg_group);
            set(value.m_sec_agg_group);
            set(value.m_fill_transact_dttm);
            set(value.m_fill_dttm);
            set(value.m_fill_exch);
            set(value.m_fill_exec_id);
            set(value.m_fill_exec_ref_id);
            set(value.m_fill_leg_ref_id);
            set(value.m_fill_leg_ratio);
            set(value.m_fill_exch_fee);
            set(value.m_fill_market);
            set(value.m_fill_price);
            set(value.m_fill_quantity);
            set(value.m_fill_bid);
            set(value.m_fill_ask);
            set(value.m_fill_mark);
            set(value.m_fill_ubid);
            set(value.m_fill_uask);
            set(value.m_fill_vol);
            set(value.m_fill_ve);
            set(value.m_fill_ga);
            set(value.m_fill_de);
            set(value.m_fill_th);
            set(value.m_fill_beta);
            set(value.m_risk_vega);
            set(value.m_risk_wt_vega);
            set(value.m_risk_nvalue);
            set(value.m_risk_delta);
            set(value.m_risk_ddelta);
            set(value.m_risk_rm1);
            set(value.m_risk_rm2);
            set(value.m_risk_rm3);
            set(value.m_risk_rm4);
            set(value.m_risk_rm5);
            set(value.m_risk_rm6);
            set(value.m_risk_rm7);
            set(value.m_margin_udn_vdn);
            set(value.m_margin_udn_vup);
            set(value.m_margin_uup_vdn);
            set(value.m_margin_uup_vup);
            set(value.m_risk_u50_dn);
            set(value.m_risk_u50_up);
            set(value.m_years);
            set(value.m_underliers_per_cn);
            set(value.m_underlier_type);
            set(value.m_tick_value);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_u_prc_ratio);
            set(value.m_min_tick_size);
            set(value.m_price_format);
            set(value.m_u_price_format);
            set(value.m_timestamp);
            set(value.m_data_center__v7);
            set(value.m_face_side__v7);
            set(value.m_face_shape__v7);
            set(value.m_fill_pr__v7);
            set(value.m_fill_risk_metric1__v7);
            set(value.m_fill_risk_metric2__v7);
            set(value.m_fill_risk_metric3__v7);
            set(value.m_fill_risk_metric4__v7);
            set(value.m_fill_risk_metric5__v7);
            set(value.m_fill_risk_metric6__v7);
            set(value.m_fill_risk_metric7__v7);
            set(value.m_fill_s08_dn__v7);
            set(value.m_fill_s06_up__v7);
            set(value.m_fill_s15_dn__v7);
            set(value.m_fill_s15_up__v7);
        }

        SpdrRiskExecution() {
            m__meta.set_message_type("SpdrRiskExecution");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2325, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2325, length);
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
             *this = SpdrRiskExecution{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeVersion() const {
            return !(m_version == 0);
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludeParentVersion() const {
            return !(m_parent_version == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludeClOrdId() const {
            return !(m_cl_ord_id == 0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeChildOrderHandling() const {
            return !(m_child_order_handling.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeCumFillQuantity() const {
            return !(m_cum_fill_quantity == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeCumLegFillQuantity() const {
            return !(m_cum_leg_fill_quantity == 0);
        }
        bool IncludeAvgLegFillPrice() const {
            return !(m_avg_leg_fill_price == 0.0);
        }
        bool IncludeLeavesQty() const {
            return !(m_leaves_qty == 0);
        }
        bool IncludePriAggGroup() const {
            return !(m_pri_agg_group.empty());
        }
        bool IncludeSecAggGroup() const {
            return !(m_sec_agg_group.empty());
        }
        bool IncludeFillTransactDttm() const {
            return (m_fill_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillExch() const {
            return !(m_fill_exch.empty());
        }
        bool IncludeFillExecId() const {
            return !(m_fill_exec_id.empty());
        }
        bool IncludeFillExecRefId() const {
            return !(m_fill_exec_ref_id.empty());
        }
        bool IncludeFillLegRefId() const {
            return !(m_fill_leg_ref_id == 0);
        }
        bool IncludeFillLegRatio() const {
            return !(m_fill_leg_ratio == 0);
        }
        bool IncludeFillExchFee() const {
            return !(m_fill_exch_fee == 0.0);
        }
        bool IncludeFillMarket() const {
            return !(m_fill_market.empty());
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillQuantity() const {
            return !(m_fill_quantity == 0);
        }
        bool IncludeFillBid() const {
            return !(m_fill_bid == 0.0);
        }
        bool IncludeFillAsk() const {
            return !(m_fill_ask == 0.0);
        }
        bool IncludeFillMark() const {
            return !(m_fill_mark == 0.0);
        }
        bool IncludeFillUbid() const {
            return !(m_fill_ubid == 0.0);
        }
        bool IncludeFillUask() const {
            return !(m_fill_uask == 0.0);
        }
        bool IncludeFillVol() const {
            return !(m_fill_vol == 0.0);
        }
        bool IncludeFillVe() const {
            return !(m_fill_ve == 0.0);
        }
        bool IncludeFillGa() const {
            return !(m_fill_ga == 0.0);
        }
        bool IncludeFillDe() const {
            return !(m_fill_de == 0.0);
        }
        bool IncludeFillTh() const {
            return !(m_fill_th == 0.0);
        }
        bool IncludeFillBeta() const {
            return !(m_fill_beta == 0.0);
        }
        bool IncludeRiskVega() const {
            return !(m_risk_vega == 0.0);
        }
        bool IncludeRiskWtVega() const {
            return !(m_risk_wt_vega == 0.0);
        }
        bool IncludeRiskNvalue() const {
            return !(m_risk_nvalue == 0.0);
        }
        bool IncludeRiskDelta() const {
            return !(m_risk_delta == 0.0);
        }
        bool IncludeRiskDdelta() const {
            return !(m_risk_ddelta == 0.0);
        }
        bool IncludeRiskRm1() const {
            return !(m_risk_rm1 == 0.0);
        }
        bool IncludeRiskRm2() const {
            return !(m_risk_rm2 == 0.0);
        }
        bool IncludeRiskRm3() const {
            return !(m_risk_rm3 == 0.0);
        }
        bool IncludeRiskRm4() const {
            return !(m_risk_rm4 == 0.0);
        }
        bool IncludeRiskRm5() const {
            return !(m_risk_rm5 == 0.0);
        }
        bool IncludeRiskRm6() const {
            return !(m_risk_rm6 == 0.0);
        }
        bool IncludeRiskRm7() const {
            return !(m_risk_rm7 == 0.0);
        }
        bool IncludeMarginUdnVdn() const {
            return !(m_margin_udn_vdn == 0.0);
        }
        bool IncludeMarginUdnVup() const {
            return !(m_margin_udn_vup == 0.0);
        }
        bool IncludeMarginUupVdn() const {
            return !(m_margin_uup_vdn == 0.0);
        }
        bool IncludeMarginUupVup() const {
            return !(m_margin_uup_vup == 0.0);
        }
        bool IncludeRiskU50Dn() const {
            return !(m_risk_u50_dn == 0.0);
        }
        bool IncludeRiskU50Up() const {
            return !(m_risk_u50_up == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeUnderliersPerCn() const {
            return !(m_underliers_per_cn == 0);
        }
        bool IncludeTickValue() const {
            return !(m_tick_value == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludeMinTickSize() const {
            return !(m_min_tick_size == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeFillPrV7() const {
            return !(m_fill_pr__v7 == 0.0);
        }
        bool IncludeFillRiskMetric1V7() const {
            return !(m_fill_risk_metric1__v7 == 0.0);
        }
        bool IncludeFillRiskMetric2V7() const {
            return !(m_fill_risk_metric2__v7 == 0.0);
        }
        bool IncludeFillRiskMetric3V7() const {
            return !(m_fill_risk_metric3__v7 == 0.0);
        }
        bool IncludeFillRiskMetric4V7() const {
            return !(m_fill_risk_metric4__v7 == 0.0);
        }
        bool IncludeFillRiskMetric5V7() const {
            return !(m_fill_risk_metric5__v7 == 0.0);
        }
        bool IncludeFillRiskMetric6V7() const {
            return !(m_fill_risk_metric6__v7 == 0.0);
        }
        bool IncludeFillRiskMetric7V7() const {
            return !(m_fill_risk_metric7__v7 == 0.0);
        }
        bool IncludeFillS08DnV7() const {
            return !(m_fill_s08_dn__v7 == 0.0);
        }
        bool IncludeFillS06UpV7() const {
            return !(m_fill_s06_up__v7 == 0.0);
        }
        bool IncludeFillS15DnV7() const {
            return !(m_fill_s15_dn__v7 == 0.0);
        }
        bool IncludeFillS15UpV7() const {
            return !(m_fill_s15_up__v7 == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_version);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecShape>(m_exec_shape)));
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(118,m_package_id);
            }
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_parent_number);
            }
            if ( IncludeParentVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_parent_version);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_base_parent_number);
            }
            if ( IncludeClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_cl_ord_id);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_risk_group_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(145, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(151, tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_grouping_code);
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(353,m_engine_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeChildOrderHandling()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_child_order_handling);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_child_ssale_flag)));
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_avg_fill_price);
            }
            if ( IncludeCumLegFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_cum_leg_fill_quantity);
            }
            if ( IncludeAvgLegFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_avg_leg_fill_price);
            }
            if ( IncludeLeavesQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_leaves_qty);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludePriAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(214,m_pri_agg_group);
            }
            if ( IncludeSecAggGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(217,m_sec_agg_group);
            }
            if ( IncludeFillTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(220, m_fill_transact_dttm);
            }
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(223, m_fill_dttm);
            }
            if ( IncludeFillExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(226,m_fill_exch);
            }
            if ( IncludeFillExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(229,m_fill_exec_id);
            }
            if ( IncludeFillExecRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(232,m_fill_exec_ref_id);
            }
            if ( IncludeFillLegRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(235,m_fill_leg_ref_id);
            }
            if ( IncludeFillLegRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(238,m_fill_leg_ratio);
            }
            if ( IncludeFillExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_fill_exch_fee);
            }
            if ( IncludeFillMarket()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(244,m_fill_market);
            }
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(247,m_fill_price);
            }
            if ( IncludeFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(250,m_fill_quantity);
            }
            if ( IncludeFillBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(253,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(256,m_fill_ask);
            }
            if ( IncludeFillMark()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(259,m_fill_mark);
            }
            if ( IncludeFillUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(262,m_fill_ubid);
            }
            if ( IncludeFillUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(265,m_fill_uask);
            }
            if ( IncludeFillVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_fill_vol);
            }
            if ( IncludeFillVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_fill_ve);
            }
            if ( IncludeFillGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_fill_ga);
            }
            if ( IncludeFillDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_fill_de);
            }
            if ( IncludeFillTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_fill_th);
            }
            if ( IncludeFillBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_fill_beta);
            }
            if ( IncludeRiskVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(354,m_risk_vega);
            }
            if ( IncludeRiskWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_risk_wt_vega);
            }
            if ( IncludeRiskNvalue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(356,m_risk_nvalue);
            }
            if ( IncludeRiskDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(357,m_risk_delta);
            }
            if ( IncludeRiskDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_risk_ddelta);
            }
            if ( IncludeRiskRm1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(359,m_risk_rm1);
            }
            if ( IncludeRiskRm2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(360,m_risk_rm2);
            }
            if ( IncludeRiskRm3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_risk_rm3);
            }
            if ( IncludeRiskRm4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(362,m_risk_rm4);
            }
            if ( IncludeRiskRm5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(363,m_risk_rm5);
            }
            if ( IncludeRiskRm6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_risk_rm6);
            }
            if ( IncludeRiskRm7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(365,m_risk_rm7);
            }
            if ( IncludeMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(366,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(368,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(369,m_margin_uup_vup);
            }
            if ( IncludeRiskU50Dn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(370,m_risk_u50_dn);
            }
            if ( IncludeRiskU50Up()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(371,m_risk_u50_up);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_years);
            }
            if ( IncludeUnderliersPerCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(325,m_underliers_per_cn);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(331,m_tick_value);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(334,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_u_prc_ratio);
            }
            if ( IncludeMinTickSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_min_tick_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(352, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5001,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceSide>(m_face_side__v7)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5002,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceShape>(m_face_shape__v7)));
            if ( IncludeFillPrV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5003,m_fill_pr__v7);
            }
            if ( IncludeFillRiskMetric1V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5004,m_fill_risk_metric1__v7);
            }
            if ( IncludeFillRiskMetric2V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5005,m_fill_risk_metric2__v7);
            }
            if ( IncludeFillRiskMetric3V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5006,m_fill_risk_metric3__v7);
            }
            if ( IncludeFillRiskMetric4V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5007,m_fill_risk_metric4__v7);
            }
            if ( IncludeFillRiskMetric5V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5008,m_fill_risk_metric5__v7);
            }
            if ( IncludeFillRiskMetric6V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5009,m_fill_risk_metric6__v7);
            }
            if ( IncludeFillRiskMetric7V7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5010,m_fill_risk_metric7__v7);
            }
            if ( IncludeFillS08DnV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5011,m_fill_s08_dn__v7);
            }
            if ( IncludeFillS06UpV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5012,m_fill_s06_up__v7);
            }
            if ( IncludeFillS15DnV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5013,m_fill_s15_dn__v7);
            }
            if ( IncludeFillS15UpV7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(5014,m_fill_s15_up__v7);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_version);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecShape>(m_exec_shape)));
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,118,m_package_id);
            }
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_parent_number);
            }
            if ( IncludeParentVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_parent_version);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_base_parent_number);
            }
            if ( IncludeClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_cl_ord_id);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_risk_group_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 145, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 151, tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_grouping_code);
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,353,static_cast<string>(m_engine_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeChildOrderHandling()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_child_order_handling));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>(m_child_algo_handler)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_child_ssale_flag)));
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_avg_fill_price);
            }
            if ( IncludeCumLegFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_cum_leg_fill_quantity);
            }
            if ( IncludeAvgLegFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_avg_leg_fill_price);
            }
            if ( IncludeLeavesQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_leaves_qty);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,211,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludePriAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,214,static_cast<string>(m_pri_agg_group));
            }
            if ( IncludeSecAggGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,217,static_cast<string>(m_sec_agg_group));
            }
            if ( IncludeFillTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 220, m_fill_transact_dttm);
            }
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 223, m_fill_dttm);
            }
            if ( IncludeFillExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,226,static_cast<string>(m_fill_exch));
            }
            if ( IncludeFillExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,229,static_cast<string>(m_fill_exec_id));
            }
            if ( IncludeFillExecRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,232,static_cast<string>(m_fill_exec_ref_id));
            }
            if ( IncludeFillLegRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,235,m_fill_leg_ref_id);
            }
            if ( IncludeFillLegRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,238,m_fill_leg_ratio);
            }
            if ( IncludeFillExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_fill_exch_fee);
            }
            if ( IncludeFillMarket()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,244,static_cast<string>(m_fill_market));
            }
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,247,m_fill_price);
            }
            if ( IncludeFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,250,m_fill_quantity);
            }
            if ( IncludeFillBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,253,m_fill_bid);
            }
            if ( IncludeFillAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,256,m_fill_ask);
            }
            if ( IncludeFillMark()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,259,m_fill_mark);
            }
            if ( IncludeFillUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,262,m_fill_ubid);
            }
            if ( IncludeFillUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,265,m_fill_uask);
            }
            if ( IncludeFillVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_fill_vol);
            }
            if ( IncludeFillVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_fill_ve);
            }
            if ( IncludeFillGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_fill_ga);
            }
            if ( IncludeFillDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_fill_de);
            }
            if ( IncludeFillTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_fill_th);
            }
            if ( IncludeFillBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_fill_beta);
            }
            if ( IncludeRiskVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,354,m_risk_vega);
            }
            if ( IncludeRiskWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_risk_wt_vega);
            }
            if ( IncludeRiskNvalue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,356,m_risk_nvalue);
            }
            if ( IncludeRiskDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,357,m_risk_delta);
            }
            if ( IncludeRiskDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_risk_ddelta);
            }
            if ( IncludeRiskRm1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,359,m_risk_rm1);
            }
            if ( IncludeRiskRm2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,360,m_risk_rm2);
            }
            if ( IncludeRiskRm3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_risk_rm3);
            }
            if ( IncludeRiskRm4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,362,m_risk_rm4);
            }
            if ( IncludeRiskRm5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,363,m_risk_rm5);
            }
            if ( IncludeRiskRm6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_risk_rm6);
            }
            if ( IncludeRiskRm7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,365,m_risk_rm7);
            }
            if ( IncludeMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,366,m_margin_udn_vdn);
            }
            if ( IncludeMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_margin_udn_vup);
            }
            if ( IncludeMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,368,m_margin_uup_vdn);
            }
            if ( IncludeMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,369,m_margin_uup_vup);
            }
            if ( IncludeRiskU50Dn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,370,m_risk_u50_dn);
            }
            if ( IncludeRiskU50Up()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,371,m_risk_u50_up);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_years);
            }
            if ( IncludeUnderliersPerCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,325,m_underliers_per_cn);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,328,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>(m_underlier_type)));
            if ( IncludeTickValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,331,m_tick_value);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,334,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_u_prc_ratio);
            }
            if ( IncludeMinTickSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_min_tick_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 352, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5001,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceSide>(m_face_side__v7)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5002,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceShape>(m_face_shape__v7)));
            if ( IncludeFillPrV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5003,m_fill_pr__v7);
            }
            if ( IncludeFillRiskMetric1V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5004,m_fill_risk_metric1__v7);
            }
            if ( IncludeFillRiskMetric2V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5005,m_fill_risk_metric2__v7);
            }
            if ( IncludeFillRiskMetric3V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5006,m_fill_risk_metric3__v7);
            }
            if ( IncludeFillRiskMetric4V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5007,m_fill_risk_metric4__v7);
            }
            if ( IncludeFillRiskMetric5V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5008,m_fill_risk_metric5__v7);
            }
            if ( IncludeFillRiskMetric6V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5009,m_fill_risk_metric6__v7);
            }
            if ( IncludeFillRiskMetric7V7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5010,m_fill_risk_metric7__v7);
            }
            if ( IncludeFillS08DnV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5011,m_fill_s08_dn__v7);
            }
            if ( IncludeFillS06UpV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5012,m_fill_s06_up__v7);
            }
            if ( IncludeFillS15DnV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5013,m_fill_s15_dn__v7);
            }
            if ( IncludeFillS15UpV7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,5014,m_fill_s15_up__v7);
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
                            m_sys_realm = static_cast<spiderrock::protobuf::api::SysRealm>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_shape = static_cast<spiderrock::protobuf::api::ExecShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_parent_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 353: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_role = static_cast<spiderrock::protobuf::api::ExecRole>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_order_handling = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_algo_handler = static_cast<spiderrock::protobuf::api::ChildHandler>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_child_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_leg_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_leg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::PriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pri_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_agg_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_ref_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_fill_leg_ref_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_leg_ratio = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_market = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 354: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 356: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_nvalue = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 357: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 359: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 360: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 362: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 363: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 365: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_rm7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 366: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 368: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 369: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_u50_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 371: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_risk_u50_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_underliers_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 328: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::UnderlierType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_tick_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 337: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_tick_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 349: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_data_center__v7 = static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5001: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_face_side__v7 = static_cast<spiderrock::protobuf::api::FaceSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5002: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_face_shape__v7 = static_cast<spiderrock::protobuf::api::FaceShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 5003: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_pr__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5004: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric1__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5005: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric2__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5006: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric3__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5007: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric4__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5008: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric5__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5009: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric6__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5010: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_risk_metric7__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5011: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s08_dn__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5012: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s06_up__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5013: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s15_dn__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 5014: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_s15_up__v7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::_meta>() const { return SpdrRiskExecution::_meta{ m__meta}; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::pkey>() const { return SpdrRiskExecution::pkey{ m_pkey}; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::version>() const { return m_version; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_exec_status)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::exec_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecShape>( m_exec_shape)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::package_id>() const { return m_package_id; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::parent_version>() const { return m_parent_version; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::sec_key>() const { return SpdrRiskExecution::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::ticker>() const { return SpdrRiskExecution::ticker{ m_ticker}; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::exec_role>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>( m_exec_role)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::child_order_handling>() const { return m_child_order_handling; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::child_algo_handler>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChildHandler>( m_child_algo_handler)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::child_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_child_ssale_flag)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::cum_leg_fill_quantity>() const { return m_cum_leg_fill_quantity; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::avg_leg_fill_price>() const { return m_avg_leg_fill_price; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::leaves_qty>() const { return m_leaves_qty; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>( m_price_type)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::pri_agg_group>() const { return m_pri_agg_group; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::sec_agg_group>() const { return m_sec_agg_group; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_transact_dttm>() const { return m_fill_transact_dttm; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_exch>() const { return m_fill_exch; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_exec_id>() const { return m_fill_exec_id; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_exec_ref_id>() const { return m_fill_exec_ref_id; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_leg_ref_id>() const { return m_fill_leg_ref_id; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_leg_ratio>() const { return m_fill_leg_ratio; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_exch_fee>() const { return m_fill_exch_fee; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_market>() const { return m_fill_market; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_price>() const { return m_fill_price; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_quantity>() const { return m_fill_quantity; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_bid>() const { return m_fill_bid; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_ask>() const { return m_fill_ask; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_mark>() const { return m_fill_mark; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_ubid>() const { return m_fill_ubid; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_uask>() const { return m_fill_uask; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_vol>() const { return m_fill_vol; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_ve>() const { return m_fill_ve; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_ga>() const { return m_fill_ga; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_de>() const { return m_fill_de; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_th>() const { return m_fill_th; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_beta>() const { return m_fill_beta; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_vega>() const { return m_risk_vega; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_wt_vega>() const { return m_risk_wt_vega; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_nvalue>() const { return m_risk_nvalue; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_delta>() const { return m_risk_delta; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_ddelta>() const { return m_risk_ddelta; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm1>() const { return m_risk_rm1; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm2>() const { return m_risk_rm2; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm3>() const { return m_risk_rm3; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm4>() const { return m_risk_rm4; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm5>() const { return m_risk_rm5; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm6>() const { return m_risk_rm6; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_rm7>() const { return m_risk_rm7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::margin_udn_vdn>() const { return m_margin_udn_vdn; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::margin_udn_vup>() const { return m_margin_udn_vup; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::margin_uup_vdn>() const { return m_margin_uup_vdn; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::margin_uup_vup>() const { return m_margin_uup_vup; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_u50_dn>() const { return m_risk_u50_dn; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::risk_u50_up>() const { return m_risk_u50_up; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::years>() const { return m_years; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::underliers_per_cn>() const { return m_underliers_per_cn; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UnderlierType>( m_underlier_type)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::tick_value>() const { return m_tick_value; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::point_value>() const { return m_point_value; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::min_tick_size>() const { return m_min_tick_size; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::data_center__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>( m_data_center__v7)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::face_side__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceSide>( m_face_side__v7)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::face_shape__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FaceShape>( m_face_shape__v7)); }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_pr__v7>() const { return m_fill_pr__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric1__v7>() const { return m_fill_risk_metric1__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric2__v7>() const { return m_fill_risk_metric2__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric3__v7>() const { return m_fill_risk_metric3__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric4__v7>() const { return m_fill_risk_metric4__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric5__v7>() const { return m_fill_risk_metric5__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric6__v7>() const { return m_fill_risk_metric6__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_risk_metric7__v7>() const { return m_fill_risk_metric7__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_s08_dn__v7>() const { return m_fill_s08_dn__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_s06_up__v7>() const { return m_fill_s06_up__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_s15_dn__v7>() const { return m_fill_s15_dn__v7; }
    template<> inline const auto SpdrRiskExecution::get<SpdrRiskExecution::fill_s15_up__v7>() const { return m_fill_s15_up__v7; }
    template<> inline const auto SpdrRiskExecution_PKey::get<SpdrRiskExecution_PKey::fill_number>() const { return m_fill_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskExecution_PKey& m) {
        o << "\"fill_number\":" << m.get<SpdrRiskExecution_PKey::fill_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskExecution& m) {
        o << "\"_meta\":{" << m.get<SpdrRiskExecution::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrRiskExecution::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<SpdrRiskExecution::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrRiskExecution::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrRiskExecution::run_status>();
        o << ",\"version\":" << m.get<SpdrRiskExecution::version>();
        o << ",\"exec_status\":" << (int64_t)m.get<SpdrRiskExecution::exec_status>();
        o << ",\"exec_shape\":" << (int64_t)m.get<SpdrRiskExecution::exec_shape>();
        o << ",\"package_id\":" << m.get<SpdrRiskExecution::package_id>();
        o << ",\"parent_number\":" << m.get<SpdrRiskExecution::parent_number>();
        o << ",\"parent_version\":" << m.get<SpdrRiskExecution::parent_version>();
        o << ",\"base_parent_number\":" << m.get<SpdrRiskExecution::base_parent_number>();
        o << ",\"cl_ord_id\":" << m.get<SpdrRiskExecution::cl_ord_id>();
        o << ",\"risk_group_id\":" << m.get<SpdrRiskExecution::risk_group_id>();
        o << ",\"parent_shape\":" << (int64_t)m.get<SpdrRiskExecution::parent_shape>();
        o << ",\"sec_key\":{" << m.get<SpdrRiskExecution::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrRiskExecution::sec_type>();
        o << ",\"ticker\":{" << m.get<SpdrRiskExecution::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<SpdrRiskExecution::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrRiskExecution::client_firm>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrRiskExecution::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrRiskExecution::grouping_code>();
        o << ",\"engine_name\":\"" << m.get<SpdrRiskExecution::engine_name>() << "\"";
        o << ",\"exec_role\":" << (int64_t)m.get<SpdrRiskExecution::exec_role>();
        o << ",\"child_order_handling\":\"" << m.get<SpdrRiskExecution::child_order_handling>() << "\"";
        o << ",\"child_algo_handler\":" << (int64_t)m.get<SpdrRiskExecution::child_algo_handler>();
        o << ",\"child_ssale_flag\":" << (int64_t)m.get<SpdrRiskExecution::child_ssale_flag>();
        o << ",\"user_name\":\"" << m.get<SpdrRiskExecution::user_name>() << "\"";
        o << ",\"order_side\":" << (int64_t)m.get<SpdrRiskExecution::order_side>();
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrRiskExecution::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrRiskExecution::spdr_close_reason>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrRiskExecution::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrRiskExecution::avg_fill_price>();
        o << ",\"cum_leg_fill_quantity\":" << m.get<SpdrRiskExecution::cum_leg_fill_quantity>();
        o << ",\"avg_leg_fill_price\":" << m.get<SpdrRiskExecution::avg_leg_fill_price>();
        o << ",\"leaves_qty\":" << m.get<SpdrRiskExecution::leaves_qty>();
        o << ",\"price_type\":" << (int64_t)m.get<SpdrRiskExecution::price_type>();
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrRiskExecution::firm_type>();
        o << ",\"pri_agg_group\":\"" << m.get<SpdrRiskExecution::pri_agg_group>() << "\"";
        o << ",\"sec_agg_group\":\"" << m.get<SpdrRiskExecution::sec_agg_group>() << "\"";
        {
            std::time_t tt = m.get<SpdrRiskExecution::fill_transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrRiskExecution::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_exch\":\"" << m.get<SpdrRiskExecution::fill_exch>() << "\"";
        o << ",\"fill_exec_id\":\"" << m.get<SpdrRiskExecution::fill_exec_id>() << "\"";
        o << ",\"fill_exec_ref_id\":\"" << m.get<SpdrRiskExecution::fill_exec_ref_id>() << "\"";
        o << ",\"fill_leg_ref_id\":" << m.get<SpdrRiskExecution::fill_leg_ref_id>();
        o << ",\"fill_leg_ratio\":" << m.get<SpdrRiskExecution::fill_leg_ratio>();
        o << ",\"fill_exch_fee\":" << m.get<SpdrRiskExecution::fill_exch_fee>();
        o << ",\"fill_market\":\"" << m.get<SpdrRiskExecution::fill_market>() << "\"";
        o << ",\"fill_price\":" << m.get<SpdrRiskExecution::fill_price>();
        o << ",\"fill_quantity\":" << m.get<SpdrRiskExecution::fill_quantity>();
        o << ",\"fill_bid\":" << m.get<SpdrRiskExecution::fill_bid>();
        o << ",\"fill_ask\":" << m.get<SpdrRiskExecution::fill_ask>();
        o << ",\"fill_mark\":" << m.get<SpdrRiskExecution::fill_mark>();
        o << ",\"fill_ubid\":" << m.get<SpdrRiskExecution::fill_ubid>();
        o << ",\"fill_uask\":" << m.get<SpdrRiskExecution::fill_uask>();
        o << ",\"fill_vol\":" << m.get<SpdrRiskExecution::fill_vol>();
        o << ",\"fill_ve\":" << m.get<SpdrRiskExecution::fill_ve>();
        o << ",\"fill_ga\":" << m.get<SpdrRiskExecution::fill_ga>();
        o << ",\"fill_de\":" << m.get<SpdrRiskExecution::fill_de>();
        o << ",\"fill_th\":" << m.get<SpdrRiskExecution::fill_th>();
        o << ",\"fill_beta\":" << m.get<SpdrRiskExecution::fill_beta>();
        o << ",\"risk_vega\":" << m.get<SpdrRiskExecution::risk_vega>();
        o << ",\"risk_wt_vega\":" << m.get<SpdrRiskExecution::risk_wt_vega>();
        o << ",\"risk_nvalue\":" << m.get<SpdrRiskExecution::risk_nvalue>();
        o << ",\"risk_delta\":" << m.get<SpdrRiskExecution::risk_delta>();
        o << ",\"risk_ddelta\":" << m.get<SpdrRiskExecution::risk_ddelta>();
        o << ",\"risk_rm1\":" << m.get<SpdrRiskExecution::risk_rm1>();
        o << ",\"risk_rm2\":" << m.get<SpdrRiskExecution::risk_rm2>();
        o << ",\"risk_rm3\":" << m.get<SpdrRiskExecution::risk_rm3>();
        o << ",\"risk_rm4\":" << m.get<SpdrRiskExecution::risk_rm4>();
        o << ",\"risk_rm5\":" << m.get<SpdrRiskExecution::risk_rm5>();
        o << ",\"risk_rm6\":" << m.get<SpdrRiskExecution::risk_rm6>();
        o << ",\"risk_rm7\":" << m.get<SpdrRiskExecution::risk_rm7>();
        o << ",\"margin_udn_vdn\":" << m.get<SpdrRiskExecution::margin_udn_vdn>();
        o << ",\"margin_udn_vup\":" << m.get<SpdrRiskExecution::margin_udn_vup>();
        o << ",\"margin_uup_vdn\":" << m.get<SpdrRiskExecution::margin_uup_vdn>();
        o << ",\"margin_uup_vup\":" << m.get<SpdrRiskExecution::margin_uup_vup>();
        o << ",\"risk_u50_dn\":" << m.get<SpdrRiskExecution::risk_u50_dn>();
        o << ",\"risk_u50_up\":" << m.get<SpdrRiskExecution::risk_u50_up>();
        o << ",\"years\":" << m.get<SpdrRiskExecution::years>();
        o << ",\"underliers_per_cn\":" << m.get<SpdrRiskExecution::underliers_per_cn>();
        o << ",\"underlier_type\":" << (int64_t)m.get<SpdrRiskExecution::underlier_type>();
        o << ",\"tick_value\":" << m.get<SpdrRiskExecution::tick_value>();
        o << ",\"point_value\":" << m.get<SpdrRiskExecution::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<SpdrRiskExecution::point_currency>();
        o << ",\"u_prc_ratio\":" << m.get<SpdrRiskExecution::u_prc_ratio>();
        o << ",\"min_tick_size\":" << m.get<SpdrRiskExecution::min_tick_size>();
        o << ",\"price_format\":" << (int64_t)m.get<SpdrRiskExecution::price_format>();
        o << ",\"u_price_format\":" << (int64_t)m.get<SpdrRiskExecution::u_price_format>();
        {
            std::time_t tt = m.get<SpdrRiskExecution::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"data_center__v7\":" << (int64_t)m.get<SpdrRiskExecution::data_center__v7>();
        o << ",\"face_side__v7\":" << (int64_t)m.get<SpdrRiskExecution::face_side__v7>();
        o << ",\"face_shape__v7\":" << (int64_t)m.get<SpdrRiskExecution::face_shape__v7>();
        o << ",\"fill_pr__v7\":" << m.get<SpdrRiskExecution::fill_pr__v7>();
        o << ",\"fill_risk_metric1__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric1__v7>();
        o << ",\"fill_risk_metric2__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric2__v7>();
        o << ",\"fill_risk_metric3__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric3__v7>();
        o << ",\"fill_risk_metric4__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric4__v7>();
        o << ",\"fill_risk_metric5__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric5__v7>();
        o << ",\"fill_risk_metric6__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric6__v7>();
        o << ",\"fill_risk_metric7__v7\":" << m.get<SpdrRiskExecution::fill_risk_metric7__v7>();
        o << ",\"fill_s08_dn__v7\":" << m.get<SpdrRiskExecution::fill_s08_dn__v7>();
        o << ",\"fill_s06_up__v7\":" << m.get<SpdrRiskExecution::fill_s06_up__v7>();
        o << ",\"fill_s15_dn__v7\":" << m.get<SpdrRiskExecution::fill_s15_dn__v7>();
        o << ",\"fill_s15_up__v7\":" << m.get<SpdrRiskExecution::fill_s15_up__v7>();
        return o;
    }

}
}
}