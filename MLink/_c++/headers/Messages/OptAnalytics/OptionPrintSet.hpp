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

    #ifndef _fkey__GUARD__
    #define _fkey__GUARD__
    DECL_STRONG_TYPE(fkey, ExpiryKey);
    #endif//_fkey__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _prt_exch__OptExch__GUARD__
    #define _prt_exch__OptExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_prt_exch__OptExch__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_price__float__GUARD__
    #define _prt_price__float__GUARD__
    DECL_STRONG_TYPE(prt_price__float, float);
    #endif//_prt_price__float__GUARD__

    #ifndef _prt_type__PrtType__GUARD__
    #define _prt_type__PrtType__GUARD__
    DECL_STRONG_TYPE(prt_type__PrtType, spiderrock::protobuf::api::PrtType);
    #endif//_prt_type__PrtType__GUARD__

    #ifndef _prt_orders__GUARD__
    #define _prt_orders__GUARD__
    DECL_STRONG_TYPE(prt_orders, uint32);
    #endif//_prt_orders__GUARD__

    #ifndef _prt_cluster_num__GUARD__
    #define _prt_cluster_num__GUARD__
    DECL_STRONG_TYPE(prt_cluster_num, int32);
    #endif//_prt_cluster_num__GUARD__

    #ifndef _prt_cluster_size__GUARD__
    #define _prt_cluster_size__GUARD__
    DECL_STRONG_TYPE(prt_cluster_size, int32);
    #endif//_prt_cluster_size__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _cxl_volume__GUARD__
    #define _cxl_volume__GUARD__
    DECL_STRONG_TYPE(cxl_volume, int32);
    #endif//_cxl_volume__GUARD__

    #ifndef _bid_count__uint32__GUARD__
    #define _bid_count__uint32__GUARD__
    DECL_STRONG_TYPE(bid_count__uint32, uint32);
    #endif//_bid_count__uint32__GUARD__

    #ifndef _ask_count__uint32__GUARD__
    #define _ask_count__uint32__GUARD__
    DECL_STRONG_TYPE(ask_count__uint32, uint32);
    #endif//_ask_count__uint32__GUARD__

    #ifndef _bid_volume__GUARD__
    #define _bid_volume__GUARD__
    DECL_STRONG_TYPE(bid_volume, int32);
    #endif//_bid_volume__GUARD__

    #ifndef _ask_volume__GUARD__
    #define _ask_volume__GUARD__
    DECL_STRONG_TYPE(ask_volume, int32);
    #endif//_ask_volume__GUARD__

    #ifndef _ebid__GUARD__
    #define _ebid__GUARD__
    DECL_STRONG_TYPE(ebid, float);
    #endif//_ebid__GUARD__

    #ifndef _eask__GUARD__
    #define _eask__GUARD__
    DECL_STRONG_TYPE(eask, float);
    #endif//_eask__GUARD__

    #ifndef _ebsz__GUARD__
    #define _ebsz__GUARD__
    DECL_STRONG_TYPE(ebsz, int32);
    #endif//_ebsz__GUARD__

    #ifndef _easz__GUARD__
    #define _easz__GUARD__
    DECL_STRONG_TYPE(easz, int32);
    #endif//_easz__GUARD__

    #ifndef _eage__GUARD__
    #define _eage__GUARD__
    DECL_STRONG_TYPE(eage, float);
    #endif//_eage__GUARD__

    #ifndef _prt_side__PrtSide__GUARD__
    #define _prt_side__PrtSide__GUARD__
    DECL_STRONG_TYPE(prt_side__PrtSide, spiderrock::protobuf::api::PrtSide);
    #endif//_prt_side__PrtSide__GUARD__

    #ifndef _prt_timestamp__GUARD__
    #define _prt_timestamp__GUARD__
    DECL_STRONG_TYPE(prt_timestamp, int64);
    #endif//_prt_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _o_bid__GUARD__
    #define _o_bid__GUARD__
    DECL_STRONG_TYPE(o_bid, float);
    #endif//_o_bid__GUARD__

    #ifndef _o_ask__GUARD__
    #define _o_ask__GUARD__
    DECL_STRONG_TYPE(o_ask, float);
    #endif//_o_ask__GUARD__

    #ifndef _o_bid_sz__GUARD__
    #define _o_bid_sz__GUARD__
    DECL_STRONG_TYPE(o_bid_sz, int32);
    #endif//_o_bid_sz__GUARD__

    #ifndef _o_ask_sz__GUARD__
    #define _o_ask_sz__GUARD__
    DECL_STRONG_TYPE(o_ask_sz, int32);
    #endif//_o_ask_sz__GUARD__

    #ifndef _o_bid_ex__GUARD__
    #define _o_bid_ex__GUARD__
    DECL_STRONG_TYPE(o_bid_ex, spiderrock::protobuf::api::OptExch);
    #endif//_o_bid_ex__GUARD__

    #ifndef _o_ask_ex__GUARD__
    #define _o_ask_ex__GUARD__
    DECL_STRONG_TYPE(o_ask_ex, spiderrock::protobuf::api::OptExch);
    #endif//_o_ask_ex__GUARD__

    #ifndef _o_bid_ex_sz__GUARD__
    #define _o_bid_ex_sz__GUARD__
    DECL_STRONG_TYPE(o_bid_ex_sz, int32);
    #endif//_o_bid_ex_sz__GUARD__

    #ifndef _o_ask_ex_sz__GUARD__
    #define _o_ask_ex_sz__GUARD__
    DECL_STRONG_TYPE(o_ask_ex_sz, int32);
    #endif//_o_ask_ex_sz__GUARD__

    #ifndef _o_bid_cnt__GUARD__
    #define _o_bid_cnt__GUARD__
    DECL_STRONG_TYPE(o_bid_cnt, int32);
    #endif//_o_bid_cnt__GUARD__

    #ifndef _o_ask_cnt__GUARD__
    #define _o_ask_cnt__GUARD__
    DECL_STRONG_TYPE(o_ask_cnt, int32);
    #endif//_o_ask_cnt__GUARD__

    #ifndef _o_bid2__GUARD__
    #define _o_bid2__GUARD__
    DECL_STRONG_TYPE(o_bid2, float);
    #endif//_o_bid2__GUARD__

    #ifndef _o_ask2__GUARD__
    #define _o_ask2__GUARD__
    DECL_STRONG_TYPE(o_ask2, float);
    #endif//_o_ask2__GUARD__

    #ifndef _o_bid_sz2__GUARD__
    #define _o_bid_sz2__GUARD__
    DECL_STRONG_TYPE(o_bid_sz2, int32);
    #endif//_o_bid_sz2__GUARD__

    #ifndef _o_ask_sz2__GUARD__
    #define _o_ask_sz2__GUARD__
    DECL_STRONG_TYPE(o_ask_sz2, int32);
    #endif//_o_ask_sz2__GUARD__

    #ifndef _o_bid_iv__double__GUARD__
    #define _o_bid_iv__double__GUARD__
    DECL_STRONG_TYPE(o_bid_iv__double, double);
    #endif//_o_bid_iv__double__GUARD__

    #ifndef _o_ask_iv__double__GUARD__
    #define _o_ask_iv__double__GUARD__
    DECL_STRONG_TYPE(o_ask_iv__double, double);
    #endif//_o_ask_iv__double__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _yrs__GUARD__
    #define _yrs__GUARD__
    DECL_STRONG_TYPE(yrs, float);
    #endif//_yrs__GUARD__

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

    #ifndef _x_de__GUARD__
    #define _x_de__GUARD__
    DECL_STRONG_TYPE(x_de, float);
    #endif//_x_de__GUARD__

    #ifndef _x_axis__GUARD__
    #define _x_axis__GUARD__
    DECL_STRONG_TYPE(x_axis, float);
    #endif//_x_axis__GUARD__

    #ifndef _multihedge__GUARD__
    #define _multihedge__GUARD__
    DECL_STRONG_TYPE(multihedge, spiderrock::protobuf::api::Multihedge);
    #endif//_multihedge__GUARD__

    #ifndef _flex_type__GUARD__
    #define _flex_type__GUARD__
    DECL_STRONG_TYPE(flex_type, spiderrock::protobuf::api::FlexType);
    #endif//_flex_type__GUARD__

    #ifndef _flex_root__GUARD__
    #define _flex_root__GUARD__
    DECL_STRONG_TYPE(flex_root, string);
    #endif//_flex_root__GUARD__

    #ifndef _prt_iv__GUARD__
    #define _prt_iv__GUARD__
    DECL_STRONG_TYPE(prt_iv, float);
    #endif//_prt_iv__GUARD__

    #ifndef _prt_de__GUARD__
    #define _prt_de__GUARD__
    DECL_STRONG_TYPE(prt_de, float);
    #endif//_prt_de__GUARD__

    #ifndef _prt_ga__GUARD__
    #define _prt_ga__GUARD__
    DECL_STRONG_TYPE(prt_ga, float);
    #endif//_prt_ga__GUARD__

    #ifndef _prt_th__GUARD__
    #define _prt_th__GUARD__
    DECL_STRONG_TYPE(prt_th, float);
    #endif//_prt_th__GUARD__

    #ifndef _prt_ve__GUARD__
    #define _prt_ve__GUARD__
    DECL_STRONG_TYPE(prt_ve, float);
    #endif//_prt_ve__GUARD__

    #ifndef _prt_ro__GUARD__
    #define _prt_ro__GUARD__
    DECL_STRONG_TYPE(prt_ro, float);
    #endif//_prt_ro__GUARD__

    #ifndef _calc_err__string__GUARD__
    #define _calc_err__string__GUARD__
    DECL_STRONG_TYPE(calc_err__string, string);
    #endif//_calc_err__string__GUARD__

    #ifndef _surf_vol__float__GUARD__
    #define _surf_vol__float__GUARD__
    DECL_STRONG_TYPE(surf_vol__float, float);
    #endif//_surf_vol__float__GUARD__

    #ifndef _surf_opx__GUARD__
    #define _surf_opx__GUARD__
    DECL_STRONG_TYPE(surf_opx, float);
    #endif//_surf_opx__GUARD__

    #ifndef _surf_atm__GUARD__
    #define _surf_atm__GUARD__
    DECL_STRONG_TYPE(surf_atm, float);
    #endif//_surf_atm__GUARD__

    #ifndef _prt_probability__GUARD__
    #define _prt_probability__GUARD__
    DECL_STRONG_TYPE(prt_probability, float);
    #endif//_prt_probability__GUARD__

    #ifndef _prt_probability_m2__GUARD__
    #define _prt_probability_m2__GUARD__
    DECL_STRONG_TYPE(prt_probability_m2, float);
    #endif//_prt_probability_m2__GUARD__

    #ifndef _prt_probability_m3__GUARD__
    #define _prt_probability_m3__GUARD__
    DECL_STRONG_TYPE(prt_probability_m3, float);
    #endif//_prt_probability_m3__GUARD__

    #ifndef _o_bid_m1__GUARD__
    #define _o_bid_m1__GUARD__
    DECL_STRONG_TYPE(o_bid_m1, float);
    #endif//_o_bid_m1__GUARD__

    #ifndef _o_ask_m1__GUARD__
    #define _o_ask_m1__GUARD__
    DECL_STRONG_TYPE(o_ask_m1, float);
    #endif//_o_ask_m1__GUARD__

    #ifndef _u_bid_m1__GUARD__
    #define _u_bid_m1__GUARD__
    DECL_STRONG_TYPE(u_bid_m1, double);
    #endif//_u_bid_m1__GUARD__

    #ifndef _u_ask_m1__GUARD__
    #define _u_ask_m1__GUARD__
    DECL_STRONG_TYPE(u_ask_m1, double);
    #endif//_u_ask_m1__GUARD__

    #ifndef _u_prc_m1__GUARD__
    #define _u_prc_m1__GUARD__
    DECL_STRONG_TYPE(u_prc_m1, double);
    #endif//_u_prc_m1__GUARD__

    #ifndef _s_vol_m1__GUARD__
    #define _s_vol_m1__GUARD__
    DECL_STRONG_TYPE(s_vol_m1, float);
    #endif//_s_vol_m1__GUARD__

    #ifndef _s_opx_m1__GUARD__
    #define _s_opx_m1__GUARD__
    DECL_STRONG_TYPE(s_opx_m1, float);
    #endif//_s_opx_m1__GUARD__

    #ifndef _s_div_m1__GUARD__
    #define _s_div_m1__GUARD__
    DECL_STRONG_TYPE(s_div_m1, float);
    #endif//_s_div_m1__GUARD__

    #ifndef _s_err_m1__GUARD__
    #define _s_err_m1__GUARD__
    DECL_STRONG_TYPE(s_err_m1, string);
    #endif//_s_err_m1__GUARD__

    #ifndef _pnl_m1__GUARD__
    #define _pnl_m1__GUARD__
    DECL_STRONG_TYPE(pnl_m1, float);
    #endif//_pnl_m1__GUARD__

    #ifndef _pnl_m1_err__GUARD__
    #define _pnl_m1_err__GUARD__
    DECL_STRONG_TYPE(pnl_m1_err, spiderrock::protobuf::api::YesNo);
    #endif//_pnl_m1_err__GUARD__

    #ifndef _o_bid_m10__GUARD__
    #define _o_bid_m10__GUARD__
    DECL_STRONG_TYPE(o_bid_m10, float);
    #endif//_o_bid_m10__GUARD__

    #ifndef _o_ask_m10__GUARD__
    #define _o_ask_m10__GUARD__
    DECL_STRONG_TYPE(o_ask_m10, float);
    #endif//_o_ask_m10__GUARD__

    #ifndef _u_bid_m10__GUARD__
    #define _u_bid_m10__GUARD__
    DECL_STRONG_TYPE(u_bid_m10, double);
    #endif//_u_bid_m10__GUARD__

    #ifndef _u_ask_m10__GUARD__
    #define _u_ask_m10__GUARD__
    DECL_STRONG_TYPE(u_ask_m10, double);
    #endif//_u_ask_m10__GUARD__

    #ifndef _u_prc_m10__GUARD__
    #define _u_prc_m10__GUARD__
    DECL_STRONG_TYPE(u_prc_m10, double);
    #endif//_u_prc_m10__GUARD__

    #ifndef _s_vol_m10__GUARD__
    #define _s_vol_m10__GUARD__
    DECL_STRONG_TYPE(s_vol_m10, float);
    #endif//_s_vol_m10__GUARD__

    #ifndef _s_opx_m10__GUARD__
    #define _s_opx_m10__GUARD__
    DECL_STRONG_TYPE(s_opx_m10, float);
    #endif//_s_opx_m10__GUARD__

    #ifndef _s_div_m10__GUARD__
    #define _s_div_m10__GUARD__
    DECL_STRONG_TYPE(s_div_m10, float);
    #endif//_s_div_m10__GUARD__

    #ifndef _s_err_m10__GUARD__
    #define _s_err_m10__GUARD__
    DECL_STRONG_TYPE(s_err_m10, string);
    #endif//_s_err_m10__GUARD__

    #ifndef _pnl_m10__GUARD__
    #define _pnl_m10__GUARD__
    DECL_STRONG_TYPE(pnl_m10, float);
    #endif//_pnl_m10__GUARD__

    #ifndef _pnl_m10_err__GUARD__
    #define _pnl_m10_err__GUARD__
    DECL_STRONG_TYPE(pnl_m10_err, spiderrock::protobuf::api::YesNo);
    #endif//_pnl_m10_err__GUARD__

    #ifndef _o_bid_s1__GUARD__
    #define _o_bid_s1__GUARD__
    DECL_STRONG_TYPE(o_bid_s1, float);
    #endif//_o_bid_s1__GUARD__

    #ifndef _o_ask_s1__GUARD__
    #define _o_ask_s1__GUARD__
    DECL_STRONG_TYPE(o_ask_s1, float);
    #endif//_o_ask_s1__GUARD__

    #ifndef _u_bid_s1__GUARD__
    #define _u_bid_s1__GUARD__
    DECL_STRONG_TYPE(u_bid_s1, double);
    #endif//_u_bid_s1__GUARD__

    #ifndef _u_ask_s1__GUARD__
    #define _u_ask_s1__GUARD__
    DECL_STRONG_TYPE(u_ask_s1, double);
    #endif//_u_ask_s1__GUARD__

    #ifndef _u_prc_s1__GUARD__
    #define _u_prc_s1__GUARD__
    DECL_STRONG_TYPE(u_prc_s1, double);
    #endif//_u_prc_s1__GUARD__

    #ifndef _s_vol_s1__GUARD__
    #define _s_vol_s1__GUARD__
    DECL_STRONG_TYPE(s_vol_s1, float);
    #endif//_s_vol_s1__GUARD__

    #ifndef _s_opx_s1__GUARD__
    #define _s_opx_s1__GUARD__
    DECL_STRONG_TYPE(s_opx_s1, float);
    #endif//_s_opx_s1__GUARD__

    #ifndef _s_div_s1__GUARD__
    #define _s_div_s1__GUARD__
    DECL_STRONG_TYPE(s_div_s1, float);
    #endif//_s_div_s1__GUARD__

    #ifndef _s_err_s1__GUARD__
    #define _s_err_s1__GUARD__
    DECL_STRONG_TYPE(s_err_s1, string);
    #endif//_s_err_s1__GUARD__

    #ifndef _pnl_s1__GUARD__
    #define _pnl_s1__GUARD__
    DECL_STRONG_TYPE(pnl_s1, float);
    #endif//_pnl_s1__GUARD__

    #ifndef _pnl_s1_err__GUARD__
    #define _pnl_s1_err__GUARD__
    DECL_STRONG_TYPE(pnl_s1_err, spiderrock::protobuf::api::YesNo);
    #endif//_pnl_s1_err__GUARD__

    #ifndef _o_bid_next__GUARD__
    #define _o_bid_next__GUARD__
    DECL_STRONG_TYPE(o_bid_next, float);
    #endif//_o_bid_next__GUARD__

    #ifndef _o_ask_next__GUARD__
    #define _o_ask_next__GUARD__
    DECL_STRONG_TYPE(o_ask_next, float);
    #endif//_o_ask_next__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _prt_number__GUARD__
    #define _prt_number__GUARD__
    DECL_STRONG_TYPE(prt_number, int64);
    #endif//_prt_number__GUARD__

    
    class OptionPrintSet_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using prt_number = spiderrock::protobuf::api::prt_number;

        private:
        okey m_okey{};
        prt_number m_prt_number{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        prt_number get_prt_number() const {
            return m_prt_number;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_prt_number(const prt_number& value)  {
            m_prt_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSet_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSet_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const prt_number & value) { set_prt_number(value); }


        OptionPrintSet_PKey() {}

        virtual ~OptionPrintSet_PKey() {
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
        bool IncludePrtNumber() const {
            return !(m_prt_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            if ( IncludePrtNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_prt_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            if ( IncludePrtNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_prt_number);
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
                    case 11: {m_prt_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionPrintSet {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPrintSet_PKey;
        using fkey = spiderrock::protobuf::api::fkey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__OptExch;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_price = spiderrock::protobuf::api::prt_price__float;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using prt_orders = spiderrock::protobuf::api::prt_orders;
        using prt_cluster_num = spiderrock::protobuf::api::prt_cluster_num;
        using prt_cluster_size = spiderrock::protobuf::api::prt_cluster_size;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using cxl_volume = spiderrock::protobuf::api::cxl_volume;
        using bid_count = spiderrock::protobuf::api::bid_count__uint32;
        using ask_count = spiderrock::protobuf::api::ask_count__uint32;
        using bid_volume = spiderrock::protobuf::api::bid_volume;
        using ask_volume = spiderrock::protobuf::api::ask_volume;
        using ebid = spiderrock::protobuf::api::ebid;
        using eask = spiderrock::protobuf::api::eask;
        using ebsz = spiderrock::protobuf::api::ebsz;
        using easz = spiderrock::protobuf::api::easz;
        using eage = spiderrock::protobuf::api::eage;
        using prt_side = spiderrock::protobuf::api::prt_side__PrtSide;
        using prt_timestamp = spiderrock::protobuf::api::prt_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using o_bid = spiderrock::protobuf::api::o_bid;
        using o_ask = spiderrock::protobuf::api::o_ask;
        using o_bid_sz = spiderrock::protobuf::api::o_bid_sz;
        using o_ask_sz = spiderrock::protobuf::api::o_ask_sz;
        using o_bid_ex = spiderrock::protobuf::api::o_bid_ex;
        using o_ask_ex = spiderrock::protobuf::api::o_ask_ex;
        using o_bid_ex_sz = spiderrock::protobuf::api::o_bid_ex_sz;
        using o_ask_ex_sz = spiderrock::protobuf::api::o_ask_ex_sz;
        using o_bid_cnt = spiderrock::protobuf::api::o_bid_cnt;
        using o_ask_cnt = spiderrock::protobuf::api::o_ask_cnt;
        using o_bid2 = spiderrock::protobuf::api::o_bid2;
        using o_ask2 = spiderrock::protobuf::api::o_ask2;
        using o_bid_sz2 = spiderrock::protobuf::api::o_bid_sz2;
        using o_ask_sz2 = spiderrock::protobuf::api::o_ask_sz2;
        using o_bid_iv = spiderrock::protobuf::api::o_bid_iv__double;
        using o_ask_iv = spiderrock::protobuf::api::o_ask_iv__double;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using yrs = spiderrock::protobuf::api::yrs;
        using rate = spiderrock::protobuf::api::rate__float;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using x_de = spiderrock::protobuf::api::x_de;
        using x_axis = spiderrock::protobuf::api::x_axis;
        using multihedge = spiderrock::protobuf::api::multihedge;
        using flex_type = spiderrock::protobuf::api::flex_type;
        using flex_root = spiderrock::protobuf::api::flex_root;
        using prt_iv = spiderrock::protobuf::api::prt_iv;
        using prt_de = spiderrock::protobuf::api::prt_de;
        using prt_ga = spiderrock::protobuf::api::prt_ga;
        using prt_th = spiderrock::protobuf::api::prt_th;
        using prt_ve = spiderrock::protobuf::api::prt_ve;
        using prt_ro = spiderrock::protobuf::api::prt_ro;
        using calc_err = spiderrock::protobuf::api::calc_err__string;
        using surf_vol = spiderrock::protobuf::api::surf_vol__float;
        using surf_opx = spiderrock::protobuf::api::surf_opx;
        using surf_atm = spiderrock::protobuf::api::surf_atm;
        using prt_probability = spiderrock::protobuf::api::prt_probability;
        using prt_probability_m2 = spiderrock::protobuf::api::prt_probability_m2;
        using prt_probability_m3 = spiderrock::protobuf::api::prt_probability_m3;
        using o_bid_m1 = spiderrock::protobuf::api::o_bid_m1;
        using o_ask_m1 = spiderrock::protobuf::api::o_ask_m1;
        using u_bid_m1 = spiderrock::protobuf::api::u_bid_m1;
        using u_ask_m1 = spiderrock::protobuf::api::u_ask_m1;
        using u_prc_m1 = spiderrock::protobuf::api::u_prc_m1;
        using s_vol_m1 = spiderrock::protobuf::api::s_vol_m1;
        using s_opx_m1 = spiderrock::protobuf::api::s_opx_m1;
        using s_div_m1 = spiderrock::protobuf::api::s_div_m1;
        using s_err_m1 = spiderrock::protobuf::api::s_err_m1;
        using pnl_m1 = spiderrock::protobuf::api::pnl_m1;
        using pnl_m1_err = spiderrock::protobuf::api::pnl_m1_err;
        using o_bid_m10 = spiderrock::protobuf::api::o_bid_m10;
        using o_ask_m10 = spiderrock::protobuf::api::o_ask_m10;
        using u_bid_m10 = spiderrock::protobuf::api::u_bid_m10;
        using u_ask_m10 = spiderrock::protobuf::api::u_ask_m10;
        using u_prc_m10 = spiderrock::protobuf::api::u_prc_m10;
        using s_vol_m10 = spiderrock::protobuf::api::s_vol_m10;
        using s_opx_m10 = spiderrock::protobuf::api::s_opx_m10;
        using s_div_m10 = spiderrock::protobuf::api::s_div_m10;
        using s_err_m10 = spiderrock::protobuf::api::s_err_m10;
        using pnl_m10 = spiderrock::protobuf::api::pnl_m10;
        using pnl_m10_err = spiderrock::protobuf::api::pnl_m10_err;
        using o_bid_s1 = spiderrock::protobuf::api::o_bid_s1;
        using o_ask_s1 = spiderrock::protobuf::api::o_ask_s1;
        using u_bid_s1 = spiderrock::protobuf::api::u_bid_s1;
        using u_ask_s1 = spiderrock::protobuf::api::u_ask_s1;
        using u_prc_s1 = spiderrock::protobuf::api::u_prc_s1;
        using s_vol_s1 = spiderrock::protobuf::api::s_vol_s1;
        using s_opx_s1 = spiderrock::protobuf::api::s_opx_s1;
        using s_div_s1 = spiderrock::protobuf::api::s_div_s1;
        using s_err_s1 = spiderrock::protobuf::api::s_err_s1;
        using pnl_s1 = spiderrock::protobuf::api::pnl_s1;
        using pnl_s1_err = spiderrock::protobuf::api::pnl_s1_err;
        using o_bid_next = spiderrock::protobuf::api::o_bid_next;
        using o_ask_next = spiderrock::protobuf::api::o_ask_next;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        fkey m_fkey{};
        ticker m_ticker{};
        prt_exch m_prt_exch{};
        prt_size m_prt_size{};
        prt_price m_prt_price{};
        prt_type m_prt_type{};
        prt_orders m_prt_orders{};
        prt_cluster_num m_prt_cluster_num{};
        prt_cluster_size m_prt_cluster_size{};
        prt_volume m_prt_volume{};
        cxl_volume m_cxl_volume{};
        bid_count m_bid_count{};
        ask_count m_ask_count{};
        bid_volume m_bid_volume{};
        ask_volume m_ask_volume{};
        ebid m_ebid{};
        eask m_eask{};
        ebsz m_ebsz{};
        easz m_easz{};
        eage m_eage{};
        prt_side m_prt_side{};
        prt_timestamp m_prt_timestamp{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};
        o_bid m_o_bid{};
        o_ask m_o_ask{};
        o_bid_sz m_o_bid_sz{};
        o_ask_sz m_o_ask_sz{};
        o_bid_ex m_o_bid_ex{};
        o_ask_ex m_o_ask_ex{};
        o_bid_ex_sz m_o_bid_ex_sz{};
        o_ask_ex_sz m_o_ask_ex_sz{};
        o_bid_cnt m_o_bid_cnt{};
        o_ask_cnt m_o_ask_cnt{};
        o_bid2 m_o_bid2{};
        o_ask2 m_o_ask2{};
        o_bid_sz2 m_o_bid_sz2{};
        o_ask_sz2 m_o_ask_sz2{};
        o_bid_iv m_o_bid_iv{};
        o_ask_iv m_o_ask_iv{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        u_prc m_u_prc{};
        yrs m_yrs{};
        rate m_rate{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        x_de m_x_de{};
        x_axis m_x_axis{};
        multihedge m_multihedge{};
        flex_type m_flex_type{};
        flex_root m_flex_root{};
        prt_iv m_prt_iv{};
        prt_de m_prt_de{};
        prt_ga m_prt_ga{};
        prt_th m_prt_th{};
        prt_ve m_prt_ve{};
        prt_ro m_prt_ro{};
        calc_err m_calc_err{};
        surf_vol m_surf_vol{};
        surf_opx m_surf_opx{};
        surf_atm m_surf_atm{};
        prt_probability m_prt_probability{};
        prt_probability_m2 m_prt_probability_m2{};
        prt_probability_m3 m_prt_probability_m3{};
        o_bid_m1 m_o_bid_m1{};
        o_ask_m1 m_o_ask_m1{};
        u_bid_m1 m_u_bid_m1{};
        u_ask_m1 m_u_ask_m1{};
        u_prc_m1 m_u_prc_m1{};
        s_vol_m1 m_s_vol_m1{};
        s_opx_m1 m_s_opx_m1{};
        s_div_m1 m_s_div_m1{};
        s_err_m1 m_s_err_m1{};
        pnl_m1 m_pnl_m1{};
        pnl_m1_err m_pnl_m1_err{};
        o_bid_m10 m_o_bid_m10{};
        o_ask_m10 m_o_ask_m10{};
        u_bid_m10 m_u_bid_m10{};
        u_ask_m10 m_u_ask_m10{};
        u_prc_m10 m_u_prc_m10{};
        s_vol_m10 m_s_vol_m10{};
        s_opx_m10 m_s_opx_m10{};
        s_div_m10 m_s_div_m10{};
        s_err_m10 m_s_err_m10{};
        pnl_m10 m_pnl_m10{};
        pnl_m10_err m_pnl_m10_err{};
        o_bid_s1 m_o_bid_s1{};
        o_ask_s1 m_o_ask_s1{};
        u_bid_s1 m_u_bid_s1{};
        u_ask_s1 m_u_ask_s1{};
        u_prc_s1 m_u_prc_s1{};
        s_vol_s1 m_s_vol_s1{};
        s_opx_s1 m_s_opx_s1{};
        s_div_s1 m_s_div_s1{};
        s_err_s1 m_s_err_s1{};
        pnl_s1 m_pnl_s1{};
        pnl_s1_err m_pnl_s1_err{};
        o_bid_next m_o_bid_next{};
        o_ask_next m_o_ask_next{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        fkey get_fkey() const {
            return m_fkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        prt_exch get_prt_exch() const {
            return m_prt_exch;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_type get_prt_type() const {
            return m_prt_type;
        }		
        prt_orders get_prt_orders() const {
            return m_prt_orders;
        }		
        prt_cluster_num get_prt_cluster_num() const {
            return m_prt_cluster_num;
        }		
        prt_cluster_size get_prt_cluster_size() const {
            return m_prt_cluster_size;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        cxl_volume get_cxl_volume() const {
            return m_cxl_volume;
        }		
        bid_count get_bid_count() const {
            return m_bid_count;
        }		
        ask_count get_ask_count() const {
            return m_ask_count;
        }		
        bid_volume get_bid_volume() const {
            return m_bid_volume;
        }		
        ask_volume get_ask_volume() const {
            return m_ask_volume;
        }		
        ebid get_ebid() const {
            return m_ebid;
        }		
        eask get_eask() const {
            return m_eask;
        }		
        ebsz get_ebsz() const {
            return m_ebsz;
        }		
        easz get_easz() const {
            return m_easz;
        }		
        eage get_eage() const {
            return m_eage;
        }		
        prt_side get_prt_side() const {
            return m_prt_side;
        }		
        prt_timestamp get_prt_timestamp() const {
            return m_prt_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        o_bid get_o_bid() const {
            return m_o_bid;
        }		
        o_ask get_o_ask() const {
            return m_o_ask;
        }		
        o_bid_sz get_o_bid_sz() const {
            return m_o_bid_sz;
        }		
        o_ask_sz get_o_ask_sz() const {
            return m_o_ask_sz;
        }		
        o_bid_ex get_o_bid_ex() const {
            return m_o_bid_ex;
        }		
        o_ask_ex get_o_ask_ex() const {
            return m_o_ask_ex;
        }		
        o_bid_ex_sz get_o_bid_ex_sz() const {
            return m_o_bid_ex_sz;
        }		
        o_ask_ex_sz get_o_ask_ex_sz() const {
            return m_o_ask_ex_sz;
        }		
        o_bid_cnt get_o_bid_cnt() const {
            return m_o_bid_cnt;
        }		
        o_ask_cnt get_o_ask_cnt() const {
            return m_o_ask_cnt;
        }		
        o_bid2 get_o_bid2() const {
            return m_o_bid2;
        }		
        o_ask2 get_o_ask2() const {
            return m_o_ask2;
        }		
        o_bid_sz2 get_o_bid_sz2() const {
            return m_o_bid_sz2;
        }		
        o_ask_sz2 get_o_ask_sz2() const {
            return m_o_ask_sz2;
        }		
        o_bid_iv get_o_bid_iv() const {
            return m_o_bid_iv;
        }		
        o_ask_iv get_o_ask_iv() const {
            return m_o_ask_iv;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        yrs get_yrs() const {
            return m_yrs;
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
        x_de get_x_de() const {
            return m_x_de;
        }		
        x_axis get_x_axis() const {
            return m_x_axis;
        }		
        multihedge get_multihedge() const {
            return m_multihedge;
        }		
        flex_type get_flex_type() const {
            return m_flex_type;
        }		
        flex_root get_flex_root() const {
            return m_flex_root;
        }		
        prt_iv get_prt_iv() const {
            return m_prt_iv;
        }		
        prt_de get_prt_de() const {
            return m_prt_de;
        }		
        prt_ga get_prt_ga() const {
            return m_prt_ga;
        }		
        prt_th get_prt_th() const {
            return m_prt_th;
        }		
        prt_ve get_prt_ve() const {
            return m_prt_ve;
        }		
        prt_ro get_prt_ro() const {
            return m_prt_ro;
        }		
        calc_err get_calc_err() const {
            return m_calc_err;
        }		
        surf_vol get_surf_vol() const {
            return m_surf_vol;
        }		
        surf_opx get_surf_opx() const {
            return m_surf_opx;
        }		
        surf_atm get_surf_atm() const {
            return m_surf_atm;
        }		
        prt_probability get_prt_probability() const {
            return m_prt_probability;
        }		
        prt_probability_m2 get_prt_probability_m2() const {
            return m_prt_probability_m2;
        }		
        prt_probability_m3 get_prt_probability_m3() const {
            return m_prt_probability_m3;
        }		
        o_bid_m1 get_o_bid_m1() const {
            return m_o_bid_m1;
        }		
        o_ask_m1 get_o_ask_m1() const {
            return m_o_ask_m1;
        }		
        u_bid_m1 get_u_bid_m1() const {
            return m_u_bid_m1;
        }		
        u_ask_m1 get_u_ask_m1() const {
            return m_u_ask_m1;
        }		
        u_prc_m1 get_u_prc_m1() const {
            return m_u_prc_m1;
        }		
        s_vol_m1 get_s_vol_m1() const {
            return m_s_vol_m1;
        }		
        s_opx_m1 get_s_opx_m1() const {
            return m_s_opx_m1;
        }		
        s_div_m1 get_s_div_m1() const {
            return m_s_div_m1;
        }		
        s_err_m1 get_s_err_m1() const {
            return m_s_err_m1;
        }		
        pnl_m1 get_pnl_m1() const {
            return m_pnl_m1;
        }		
        pnl_m1_err get_pnl_m1_err() const {
            return m_pnl_m1_err;
        }		
        o_bid_m10 get_o_bid_m10() const {
            return m_o_bid_m10;
        }		
        o_ask_m10 get_o_ask_m10() const {
            return m_o_ask_m10;
        }		
        u_bid_m10 get_u_bid_m10() const {
            return m_u_bid_m10;
        }		
        u_ask_m10 get_u_ask_m10() const {
            return m_u_ask_m10;
        }		
        u_prc_m10 get_u_prc_m10() const {
            return m_u_prc_m10;
        }		
        s_vol_m10 get_s_vol_m10() const {
            return m_s_vol_m10;
        }		
        s_opx_m10 get_s_opx_m10() const {
            return m_s_opx_m10;
        }		
        s_div_m10 get_s_div_m10() const {
            return m_s_div_m10;
        }		
        s_err_m10 get_s_err_m10() const {
            return m_s_err_m10;
        }		
        pnl_m10 get_pnl_m10() const {
            return m_pnl_m10;
        }		
        pnl_m10_err get_pnl_m10_err() const {
            return m_pnl_m10_err;
        }		
        o_bid_s1 get_o_bid_s1() const {
            return m_o_bid_s1;
        }		
        o_ask_s1 get_o_ask_s1() const {
            return m_o_ask_s1;
        }		
        u_bid_s1 get_u_bid_s1() const {
            return m_u_bid_s1;
        }		
        u_ask_s1 get_u_ask_s1() const {
            return m_u_ask_s1;
        }		
        u_prc_s1 get_u_prc_s1() const {
            return m_u_prc_s1;
        }		
        s_vol_s1 get_s_vol_s1() const {
            return m_s_vol_s1;
        }		
        s_opx_s1 get_s_opx_s1() const {
            return m_s_opx_s1;
        }		
        s_div_s1 get_s_div_s1() const {
            return m_s_div_s1;
        }		
        s_err_s1 get_s_err_s1() const {
            return m_s_err_s1;
        }		
        pnl_s1 get_pnl_s1() const {
            return m_pnl_s1;
        }		
        pnl_s1_err get_pnl_s1_err() const {
            return m_pnl_s1_err;
        }		
        o_bid_next get_o_bid_next() const {
            return m_o_bid_next;
        }		
        o_ask_next get_o_ask_next() const {
            return m_o_ask_next;
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
        void set_fkey(const fkey& value)  {
            m_fkey = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_prt_exch(const prt_exch& value)  {
            m_prt_exch = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_prt_orders(const prt_orders& value)  {
            m_prt_orders = value;
        }
        void set_prt_cluster_num(const prt_cluster_num& value)  {
            m_prt_cluster_num = value;
        }
        void set_prt_cluster_size(const prt_cluster_size& value)  {
            m_prt_cluster_size = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_cxl_volume(const cxl_volume& value)  {
            m_cxl_volume = value;
        }
        void set_bid_count(const bid_count& value)  {
            m_bid_count = value;
        }
        void set_ask_count(const ask_count& value)  {
            m_ask_count = value;
        }
        void set_bid_volume(const bid_volume& value)  {
            m_bid_volume = value;
        }
        void set_ask_volume(const ask_volume& value)  {
            m_ask_volume = value;
        }
        void set_ebid(const ebid& value)  {
            m_ebid = value;
        }
        void set_eask(const eask& value)  {
            m_eask = value;
        }
        void set_ebsz(const ebsz& value)  {
            m_ebsz = value;
        }
        void set_easz(const easz& value)  {
            m_easz = value;
        }
        void set_eage(const eage& value)  {
            m_eage = value;
        }
        void set_prt_side(const prt_side& value)  {
            m_prt_side = value;
        }
        void set_prt_timestamp(const prt_timestamp& value)  {
            m_prt_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_o_bid(const o_bid& value)  {
            m_o_bid = value;
        }
        void set_o_ask(const o_ask& value)  {
            m_o_ask = value;
        }
        void set_o_bid_sz(const o_bid_sz& value)  {
            m_o_bid_sz = value;
        }
        void set_o_ask_sz(const o_ask_sz& value)  {
            m_o_ask_sz = value;
        }
        void set_o_bid_ex(const o_bid_ex& value)  {
            m_o_bid_ex = value;
        }
        void set_o_ask_ex(const o_ask_ex& value)  {
            m_o_ask_ex = value;
        }
        void set_o_bid_ex_sz(const o_bid_ex_sz& value)  {
            m_o_bid_ex_sz = value;
        }
        void set_o_ask_ex_sz(const o_ask_ex_sz& value)  {
            m_o_ask_ex_sz = value;
        }
        void set_o_bid_cnt(const o_bid_cnt& value)  {
            m_o_bid_cnt = value;
        }
        void set_o_ask_cnt(const o_ask_cnt& value)  {
            m_o_ask_cnt = value;
        }
        void set_o_bid2(const o_bid2& value)  {
            m_o_bid2 = value;
        }
        void set_o_ask2(const o_ask2& value)  {
            m_o_ask2 = value;
        }
        void set_o_bid_sz2(const o_bid_sz2& value)  {
            m_o_bid_sz2 = value;
        }
        void set_o_ask_sz2(const o_ask_sz2& value)  {
            m_o_ask_sz2 = value;
        }
        void set_o_bid_iv(const o_bid_iv& value)  {
            m_o_bid_iv = value;
        }
        void set_o_ask_iv(const o_ask_iv& value)  {
            m_o_ask_iv = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_yrs(const yrs& value)  {
            m_yrs = value;
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
        void set_x_de(const x_de& value)  {
            m_x_de = value;
        }
        void set_x_axis(const x_axis& value)  {
            m_x_axis = value;
        }
        void set_multihedge(const multihedge& value)  {
            m_multihedge = value;
        }
        void set_flex_type(const flex_type& value)  {
            m_flex_type = value;
        }
        void set_flex_root(const flex_root& value)  {
            m_flex_root = value;
        }
        void set_prt_iv(const prt_iv& value)  {
            m_prt_iv = value;
        }
        void set_prt_de(const prt_de& value)  {
            m_prt_de = value;
        }
        void set_prt_ga(const prt_ga& value)  {
            m_prt_ga = value;
        }
        void set_prt_th(const prt_th& value)  {
            m_prt_th = value;
        }
        void set_prt_ve(const prt_ve& value)  {
            m_prt_ve = value;
        }
        void set_prt_ro(const prt_ro& value)  {
            m_prt_ro = value;
        }
        void set_calc_err(const calc_err& value)  {
            m_calc_err = value;
        }
        void set_surf_vol(const surf_vol& value)  {
            m_surf_vol = value;
        }
        void set_surf_opx(const surf_opx& value)  {
            m_surf_opx = value;
        }
        void set_surf_atm(const surf_atm& value)  {
            m_surf_atm = value;
        }
        void set_prt_probability(const prt_probability& value)  {
            m_prt_probability = value;
        }
        void set_prt_probability_m2(const prt_probability_m2& value)  {
            m_prt_probability_m2 = value;
        }
        void set_prt_probability_m3(const prt_probability_m3& value)  {
            m_prt_probability_m3 = value;
        }
        void set_o_bid_m1(const o_bid_m1& value)  {
            m_o_bid_m1 = value;
        }
        void set_o_ask_m1(const o_ask_m1& value)  {
            m_o_ask_m1 = value;
        }
        void set_u_bid_m1(const u_bid_m1& value)  {
            m_u_bid_m1 = value;
        }
        void set_u_ask_m1(const u_ask_m1& value)  {
            m_u_ask_m1 = value;
        }
        void set_u_prc_m1(const u_prc_m1& value)  {
            m_u_prc_m1 = value;
        }
        void set_s_vol_m1(const s_vol_m1& value)  {
            m_s_vol_m1 = value;
        }
        void set_s_opx_m1(const s_opx_m1& value)  {
            m_s_opx_m1 = value;
        }
        void set_s_div_m1(const s_div_m1& value)  {
            m_s_div_m1 = value;
        }
        void set_s_err_m1(const s_err_m1& value)  {
            m_s_err_m1 = value;
        }
        void set_pnl_m1(const pnl_m1& value)  {
            m_pnl_m1 = value;
        }
        void set_pnl_m1_err(const pnl_m1_err& value)  {
            m_pnl_m1_err = value;
        }
        void set_o_bid_m10(const o_bid_m10& value)  {
            m_o_bid_m10 = value;
        }
        void set_o_ask_m10(const o_ask_m10& value)  {
            m_o_ask_m10 = value;
        }
        void set_u_bid_m10(const u_bid_m10& value)  {
            m_u_bid_m10 = value;
        }
        void set_u_ask_m10(const u_ask_m10& value)  {
            m_u_ask_m10 = value;
        }
        void set_u_prc_m10(const u_prc_m10& value)  {
            m_u_prc_m10 = value;
        }
        void set_s_vol_m10(const s_vol_m10& value)  {
            m_s_vol_m10 = value;
        }
        void set_s_opx_m10(const s_opx_m10& value)  {
            m_s_opx_m10 = value;
        }
        void set_s_div_m10(const s_div_m10& value)  {
            m_s_div_m10 = value;
        }
        void set_s_err_m10(const s_err_m10& value)  {
            m_s_err_m10 = value;
        }
        void set_pnl_m10(const pnl_m10& value)  {
            m_pnl_m10 = value;
        }
        void set_pnl_m10_err(const pnl_m10_err& value)  {
            m_pnl_m10_err = value;
        }
        void set_o_bid_s1(const o_bid_s1& value)  {
            m_o_bid_s1 = value;
        }
        void set_o_ask_s1(const o_ask_s1& value)  {
            m_o_ask_s1 = value;
        }
        void set_u_bid_s1(const u_bid_s1& value)  {
            m_u_bid_s1 = value;
        }
        void set_u_ask_s1(const u_ask_s1& value)  {
            m_u_ask_s1 = value;
        }
        void set_u_prc_s1(const u_prc_s1& value)  {
            m_u_prc_s1 = value;
        }
        void set_s_vol_s1(const s_vol_s1& value)  {
            m_s_vol_s1 = value;
        }
        void set_s_opx_s1(const s_opx_s1& value)  {
            m_s_opx_s1 = value;
        }
        void set_s_div_s1(const s_div_s1& value)  {
            m_s_div_s1 = value;
        }
        void set_s_err_s1(const s_err_s1& value)  {
            m_s_err_s1 = value;
        }
        void set_pnl_s1(const pnl_s1& value)  {
            m_pnl_s1 = value;
        }
        void set_pnl_s1_err(const pnl_s1_err& value)  {
            m_pnl_s1_err = value;
        }
        void set_o_bid_next(const o_bid_next& value)  {
            m_o_bid_next = value;
        }
        void set_o_ask_next(const o_ask_next& value)  {
            m_o_ask_next = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSet::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const fkey & value) {
            set_fkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const prt_exch & value) {
            set_prt_exch(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_type & value) {
            set_prt_type(value);
        }
        void set(const prt_orders & value) {
            set_prt_orders(value);
        }
        void set(const prt_cluster_num & value) {
            set_prt_cluster_num(value);
        }
        void set(const prt_cluster_size & value) {
            set_prt_cluster_size(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const cxl_volume & value) {
            set_cxl_volume(value);
        }
        void set(const bid_count & value) {
            set_bid_count(value);
        }
        void set(const ask_count & value) {
            set_ask_count(value);
        }
        void set(const bid_volume & value) {
            set_bid_volume(value);
        }
        void set(const ask_volume & value) {
            set_ask_volume(value);
        }
        void set(const ebid & value) {
            set_ebid(value);
        }
        void set(const eask & value) {
            set_eask(value);
        }
        void set(const ebsz & value) {
            set_ebsz(value);
        }
        void set(const easz & value) {
            set_easz(value);
        }
        void set(const eage & value) {
            set_eage(value);
        }
        void set(const prt_side & value) {
            set_prt_side(value);
        }
        void set(const prt_timestamp & value) {
            set_prt_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const o_bid & value) {
            set_o_bid(value);
        }
        void set(const o_ask & value) {
            set_o_ask(value);
        }
        void set(const o_bid_sz & value) {
            set_o_bid_sz(value);
        }
        void set(const o_ask_sz & value) {
            set_o_ask_sz(value);
        }
        void set(const o_bid_ex & value) {
            set_o_bid_ex(value);
        }
        void set(const o_ask_ex & value) {
            set_o_ask_ex(value);
        }
        void set(const o_bid_ex_sz & value) {
            set_o_bid_ex_sz(value);
        }
        void set(const o_ask_ex_sz & value) {
            set_o_ask_ex_sz(value);
        }
        void set(const o_bid_cnt & value) {
            set_o_bid_cnt(value);
        }
        void set(const o_ask_cnt & value) {
            set_o_ask_cnt(value);
        }
        void set(const o_bid2 & value) {
            set_o_bid2(value);
        }
        void set(const o_ask2 & value) {
            set_o_ask2(value);
        }
        void set(const o_bid_sz2 & value) {
            set_o_bid_sz2(value);
        }
        void set(const o_ask_sz2 & value) {
            set_o_ask_sz2(value);
        }
        void set(const o_bid_iv & value) {
            set_o_bid_iv(value);
        }
        void set(const o_ask_iv & value) {
            set_o_ask_iv(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const yrs & value) {
            set_yrs(value);
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
        void set(const x_de & value) {
            set_x_de(value);
        }
        void set(const x_axis & value) {
            set_x_axis(value);
        }
        void set(const multihedge & value) {
            set_multihedge(value);
        }
        void set(const flex_type & value) {
            set_flex_type(value);
        }
        void set(const flex_root & value) {
            set_flex_root(value);
        }
        void set(const prt_iv & value) {
            set_prt_iv(value);
        }
        void set(const prt_de & value) {
            set_prt_de(value);
        }
        void set(const prt_ga & value) {
            set_prt_ga(value);
        }
        void set(const prt_th & value) {
            set_prt_th(value);
        }
        void set(const prt_ve & value) {
            set_prt_ve(value);
        }
        void set(const prt_ro & value) {
            set_prt_ro(value);
        }
        void set(const calc_err & value) {
            set_calc_err(value);
        }
        void set(const surf_vol & value) {
            set_surf_vol(value);
        }
        void set(const surf_opx & value) {
            set_surf_opx(value);
        }
        void set(const surf_atm & value) {
            set_surf_atm(value);
        }
        void set(const prt_probability & value) {
            set_prt_probability(value);
        }
        void set(const prt_probability_m2 & value) {
            set_prt_probability_m2(value);
        }
        void set(const prt_probability_m3 & value) {
            set_prt_probability_m3(value);
        }
        void set(const o_bid_m1 & value) {
            set_o_bid_m1(value);
        }
        void set(const o_ask_m1 & value) {
            set_o_ask_m1(value);
        }
        void set(const u_bid_m1 & value) {
            set_u_bid_m1(value);
        }
        void set(const u_ask_m1 & value) {
            set_u_ask_m1(value);
        }
        void set(const u_prc_m1 & value) {
            set_u_prc_m1(value);
        }
        void set(const s_vol_m1 & value) {
            set_s_vol_m1(value);
        }
        void set(const s_opx_m1 & value) {
            set_s_opx_m1(value);
        }
        void set(const s_div_m1 & value) {
            set_s_div_m1(value);
        }
        void set(const s_err_m1 & value) {
            set_s_err_m1(value);
        }
        void set(const pnl_m1 & value) {
            set_pnl_m1(value);
        }
        void set(const pnl_m1_err & value) {
            set_pnl_m1_err(value);
        }
        void set(const o_bid_m10 & value) {
            set_o_bid_m10(value);
        }
        void set(const o_ask_m10 & value) {
            set_o_ask_m10(value);
        }
        void set(const u_bid_m10 & value) {
            set_u_bid_m10(value);
        }
        void set(const u_ask_m10 & value) {
            set_u_ask_m10(value);
        }
        void set(const u_prc_m10 & value) {
            set_u_prc_m10(value);
        }
        void set(const s_vol_m10 & value) {
            set_s_vol_m10(value);
        }
        void set(const s_opx_m10 & value) {
            set_s_opx_m10(value);
        }
        void set(const s_div_m10 & value) {
            set_s_div_m10(value);
        }
        void set(const s_err_m10 & value) {
            set_s_err_m10(value);
        }
        void set(const pnl_m10 & value) {
            set_pnl_m10(value);
        }
        void set(const pnl_m10_err & value) {
            set_pnl_m10_err(value);
        }
        void set(const o_bid_s1 & value) {
            set_o_bid_s1(value);
        }
        void set(const o_ask_s1 & value) {
            set_o_ask_s1(value);
        }
        void set(const u_bid_s1 & value) {
            set_u_bid_s1(value);
        }
        void set(const u_ask_s1 & value) {
            set_u_ask_s1(value);
        }
        void set(const u_prc_s1 & value) {
            set_u_prc_s1(value);
        }
        void set(const s_vol_s1 & value) {
            set_s_vol_s1(value);
        }
        void set(const s_opx_s1 & value) {
            set_s_opx_s1(value);
        }
        void set(const s_div_s1 & value) {
            set_s_div_s1(value);
        }
        void set(const s_err_s1 & value) {
            set_s_err_s1(value);
        }
        void set(const pnl_s1 & value) {
            set_pnl_s1(value);
        }
        void set(const pnl_s1_err & value) {
            set_pnl_s1_err(value);
        }
        void set(const o_bid_next & value) {
            set_o_bid_next(value);
        }
        void set(const o_ask_next & value) {
            set_o_ask_next(value);
        }

        void set(const OptionPrintSet & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_fkey);
            set(value.m_ticker);
            set(value.m_prt_exch);
            set(value.m_prt_size);
            set(value.m_prt_price);
            set(value.m_prt_type);
            set(value.m_prt_orders);
            set(value.m_prt_cluster_num);
            set(value.m_prt_cluster_size);
            set(value.m_prt_volume);
            set(value.m_cxl_volume);
            set(value.m_bid_count);
            set(value.m_ask_count);
            set(value.m_bid_volume);
            set(value.m_ask_volume);
            set(value.m_ebid);
            set(value.m_eask);
            set(value.m_ebsz);
            set(value.m_easz);
            set(value.m_eage);
            set(value.m_prt_side);
            set(value.m_prt_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
            set(value.m_o_bid);
            set(value.m_o_ask);
            set(value.m_o_bid_sz);
            set(value.m_o_ask_sz);
            set(value.m_o_bid_ex);
            set(value.m_o_ask_ex);
            set(value.m_o_bid_ex_sz);
            set(value.m_o_ask_ex_sz);
            set(value.m_o_bid_cnt);
            set(value.m_o_ask_cnt);
            set(value.m_o_bid2);
            set(value.m_o_ask2);
            set(value.m_o_bid_sz2);
            set(value.m_o_ask_sz2);
            set(value.m_o_bid_iv);
            set(value.m_o_ask_iv);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_u_prc);
            set(value.m_yrs);
            set(value.m_rate);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_x_de);
            set(value.m_x_axis);
            set(value.m_multihedge);
            set(value.m_flex_type);
            set(value.m_flex_root);
            set(value.m_prt_iv);
            set(value.m_prt_de);
            set(value.m_prt_ga);
            set(value.m_prt_th);
            set(value.m_prt_ve);
            set(value.m_prt_ro);
            set(value.m_calc_err);
            set(value.m_surf_vol);
            set(value.m_surf_opx);
            set(value.m_surf_atm);
            set(value.m_prt_probability);
            set(value.m_prt_probability_m2);
            set(value.m_prt_probability_m3);
            set(value.m_o_bid_m1);
            set(value.m_o_ask_m1);
            set(value.m_u_bid_m1);
            set(value.m_u_ask_m1);
            set(value.m_u_prc_m1);
            set(value.m_s_vol_m1);
            set(value.m_s_opx_m1);
            set(value.m_s_div_m1);
            set(value.m_s_err_m1);
            set(value.m_pnl_m1);
            set(value.m_pnl_m1_err);
            set(value.m_o_bid_m10);
            set(value.m_o_ask_m10);
            set(value.m_u_bid_m10);
            set(value.m_u_ask_m10);
            set(value.m_u_prc_m10);
            set(value.m_s_vol_m10);
            set(value.m_s_opx_m10);
            set(value.m_s_div_m10);
            set(value.m_s_err_m10);
            set(value.m_pnl_m10);
            set(value.m_pnl_m10_err);
            set(value.m_o_bid_s1);
            set(value.m_o_ask_s1);
            set(value.m_u_bid_s1);
            set(value.m_u_ask_s1);
            set(value.m_u_prc_s1);
            set(value.m_s_vol_s1);
            set(value.m_s_opx_s1);
            set(value.m_s_div_s1);
            set(value.m_s_err_s1);
            set(value.m_pnl_s1);
            set(value.m_pnl_s1_err);
            set(value.m_o_bid_next);
            set(value.m_o_ask_next);
        }

        OptionPrintSet() {
            m__meta.set_message_type("OptionPrintSet");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2815, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2815, length);
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
             *this = OptionPrintSet{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeFkey() const {
            return (m_fkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtOrders() const {
            return !(m_prt_orders == 0);
        }
        bool IncludePrtClusterNum() const {
            return !(m_prt_cluster_num == 0);
        }
        bool IncludePrtClusterSize() const {
            return !(m_prt_cluster_size == 0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludeCxlVolume() const {
            return !(m_cxl_volume == 0);
        }
        bool IncludeBidCount() const {
            return !(m_bid_count == 0);
        }
        bool IncludeAskCount() const {
            return !(m_ask_count == 0);
        }
        bool IncludeBidVolume() const {
            return !(m_bid_volume == 0);
        }
        bool IncludeAskVolume() const {
            return !(m_ask_volume == 0);
        }
        bool IncludeEbid() const {
            return !(m_ebid == 0.0);
        }
        bool IncludeEask() const {
            return !(m_eask == 0.0);
        }
        bool IncludeEbsz() const {
            return !(m_ebsz == 0);
        }
        bool IncludeEasz() const {
            return !(m_easz == 0);
        }
        bool IncludeEage() const {
            return !(m_eage == 0.0);
        }
        bool IncludePrtTimestamp() const {
            return !(m_prt_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeOBid() const {
            return !(m_o_bid == 0.0);
        }
        bool IncludeOAsk() const {
            return !(m_o_ask == 0.0);
        }
        bool IncludeOBidSz() const {
            return !(m_o_bid_sz == 0);
        }
        bool IncludeOAskSz() const {
            return !(m_o_ask_sz == 0);
        }
        bool IncludeOBidExSz() const {
            return !(m_o_bid_ex_sz == 0);
        }
        bool IncludeOAskExSz() const {
            return !(m_o_ask_ex_sz == 0);
        }
        bool IncludeOBidCnt() const {
            return !(m_o_bid_cnt == 0);
        }
        bool IncludeOAskCnt() const {
            return !(m_o_ask_cnt == 0);
        }
        bool IncludeOBid2() const {
            return !(m_o_bid2 == 0.0);
        }
        bool IncludeOAsk2() const {
            return !(m_o_ask2 == 0.0);
        }
        bool IncludeOBidSz2() const {
            return !(m_o_bid_sz2 == 0);
        }
        bool IncludeOAskSz2() const {
            return !(m_o_ask_sz2 == 0);
        }
        bool IncludeOBidIv() const {
            return !(m_o_bid_iv == 0.0);
        }
        bool IncludeOAskIv() const {
            return !(m_o_ask_iv == 0.0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeYrs() const {
            return !(m_yrs == 0.0);
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
        bool IncludeXDe() const {
            return !(m_x_de == 0.0);
        }
        bool IncludeXAxis() const {
            return !(m_x_axis == 0.0);
        }
        bool IncludeFlexRoot() const {
            return !(m_flex_root.empty());
        }
        bool IncludePrtIv() const {
            return !(m_prt_iv == 0.0);
        }
        bool IncludePrtDe() const {
            return !(m_prt_de == 0.0);
        }
        bool IncludePrtGa() const {
            return !(m_prt_ga == 0.0);
        }
        bool IncludePrtTh() const {
            return !(m_prt_th == 0.0);
        }
        bool IncludePrtVe() const {
            return !(m_prt_ve == 0.0);
        }
        bool IncludePrtRo() const {
            return !(m_prt_ro == 0.0);
        }
        bool IncludeCalcErr() const {
            return !(m_calc_err.empty());
        }
        bool IncludeSurfVol() const {
            return !(m_surf_vol == 0.0);
        }
        bool IncludeSurfOpx() const {
            return !(m_surf_opx == 0.0);
        }
        bool IncludeSurfAtm() const {
            return !(m_surf_atm == 0.0);
        }
        bool IncludePrtProbability() const {
            return !(m_prt_probability == 0.0);
        }
        bool IncludePrtProbabilityM2() const {
            return !(m_prt_probability_m2 == 0.0);
        }
        bool IncludePrtProbabilityM3() const {
            return !(m_prt_probability_m3 == 0.0);
        }
        bool IncludeOBidM1() const {
            return !(m_o_bid_m1 == 0.0);
        }
        bool IncludeOAskM1() const {
            return !(m_o_ask_m1 == 0.0);
        }
        bool IncludeUBidM1() const {
            return !(m_u_bid_m1 == 0.0);
        }
        bool IncludeUAskM1() const {
            return !(m_u_ask_m1 == 0.0);
        }
        bool IncludeUPrcM1() const {
            return !(m_u_prc_m1 == 0.0);
        }
        bool IncludeSVolM1() const {
            return !(m_s_vol_m1 == 0.0);
        }
        bool IncludeSOpxM1() const {
            return !(m_s_opx_m1 == 0.0);
        }
        bool IncludeSDivM1() const {
            return !(m_s_div_m1 == 0.0);
        }
        bool IncludeSErrM1() const {
            return !(m_s_err_m1.empty());
        }
        bool IncludePnlM1() const {
            return !(m_pnl_m1 == 0.0);
        }
        bool IncludeOBidM10() const {
            return !(m_o_bid_m10 == 0.0);
        }
        bool IncludeOAskM10() const {
            return !(m_o_ask_m10 == 0.0);
        }
        bool IncludeUBidM10() const {
            return !(m_u_bid_m10 == 0.0);
        }
        bool IncludeUAskM10() const {
            return !(m_u_ask_m10 == 0.0);
        }
        bool IncludeUPrcM10() const {
            return !(m_u_prc_m10 == 0.0);
        }
        bool IncludeSVolM10() const {
            return !(m_s_vol_m10 == 0.0);
        }
        bool IncludeSOpxM10() const {
            return !(m_s_opx_m10 == 0.0);
        }
        bool IncludeSDivM10() const {
            return !(m_s_div_m10 == 0.0);
        }
        bool IncludeSErrM10() const {
            return !(m_s_err_m10.empty());
        }
        bool IncludePnlM10() const {
            return !(m_pnl_m10 == 0.0);
        }
        bool IncludeOBidS1() const {
            return !(m_o_bid_s1 == 0.0);
        }
        bool IncludeOAskS1() const {
            return !(m_o_ask_s1 == 0.0);
        }
        bool IncludeUBidS1() const {
            return !(m_u_bid_s1 == 0.0);
        }
        bool IncludeUAskS1() const {
            return !(m_u_ask_s1 == 0.0);
        }
        bool IncludeUPrcS1() const {
            return !(m_u_prc_s1 == 0.0);
        }
        bool IncludeSVolS1() const {
            return !(m_s_vol_s1 == 0.0);
        }
        bool IncludeSOpxS1() const {
            return !(m_s_opx_s1 == 0.0);
        }
        bool IncludeSDivS1() const {
            return !(m_s_div_s1 == 0.0);
        }
        bool IncludeSErrS1() const {
            return !(m_s_err_s1.empty());
        }
        bool IncludePnlS1() const {
            return !(m_pnl_s1 == 0.0);
        }
        bool IncludeOBidNext() const {
            return !(m_o_bid_next == 0.0);
        }
        bool IncludeOAskNext() const {
            return !(m_o_ask_next == 0.0);
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
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(100, expiryKeyLayout);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(103, tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_prt_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(118,m_prt_orders);
            }
            if ( IncludePrtClusterNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_prt_cluster_size);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_prt_volume);
            }
            if ( IncludeCxlVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_cxl_volume);
            }
            if ( IncludeBidCount()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(133,m_bid_count);
            }
            if ( IncludeAskCount()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(136,m_ask_count);
            }
            if ( IncludeBidVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_bid_volume);
            }
            if ( IncludeAskVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_ask_volume);
            }
            if ( IncludeEbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_ebid);
            }
            if ( IncludeEask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_eask);
            }
            if ( IncludeEbsz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_ebsz);
            }
            if ( IncludeEasz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_easz);
            }
            if ( IncludeEage()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_eage);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(163,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(166,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(169, m_timestamp);
            }
            if ( IncludeOBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_o_bid);
            }
            if ( IncludeOAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_o_ask);
            }
            if ( IncludeOBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_o_bid_sz);
            }
            if ( IncludeOAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_o_ask_sz);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_o_bid_ex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_o_ask_ex)));
            if ( IncludeOBidExSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(190,m_o_bid_ex_sz);
            }
            if ( IncludeOAskExSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_o_ask_ex_sz);
            }
            if ( IncludeOBidCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_o_bid_cnt);
            }
            if ( IncludeOAskCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_o_ask_cnt);
            }
            if ( IncludeOBid2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_o_bid2);
            }
            if ( IncludeOAsk2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_o_ask2);
            }
            if ( IncludeOBidSz2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(208,m_o_bid_sz2);
            }
            if ( IncludeOAskSz2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(211,m_o_ask_sz2);
            }
            if ( IncludeOBidIv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(353,m_o_bid_iv);
            }
            if ( IncludeOAskIv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(354,m_o_ask_iv);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(214,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(217,m_u_ask);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(220,m_u_prc);
            }
            if ( IncludeYrs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_yrs);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_rate);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_ddiv);
            }
            if ( IncludeXDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_x_de);
            }
            if ( IncludeXAxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_x_axis);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexType>(m_flex_type)));
            if ( IncludeFlexRoot()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(247,m_flex_root);
            }
            if ( IncludePrtIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_prt_iv);
            }
            if ( IncludePrtDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_prt_de);
            }
            if ( IncludePrtGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_prt_ga);
            }
            if ( IncludePrtTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_prt_th);
            }
            if ( IncludePrtVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_prt_ve);
            }
            if ( IncludePrtRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_prt_ro);
            }
            if ( IncludeCalcErr()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(268,m_calc_err);
            }
            if ( IncludeSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_surf_vol);
            }
            if ( IncludeSurfOpx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_surf_opx);
            }
            if ( IncludeSurfAtm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_surf_atm);
            }
            if ( IncludePrtProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_prt_probability);
            }
            if ( IncludePrtProbabilityM2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_prt_probability_m2);
            }
            if ( IncludePrtProbabilityM3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_prt_probability_m3);
            }
            if ( IncludeOBidM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(289,m_o_bid_m1);
            }
            if ( IncludeOAskM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_o_ask_m1);
            }
            if ( IncludeUBidM1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(295,m_u_bid_m1);
            }
            if ( IncludeUAskM1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(298,m_u_ask_m1);
            }
            if ( IncludeUPrcM1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(301,m_u_prc_m1);
            }
            if ( IncludeSVolM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(304,m_s_vol_m1);
            }
            if ( IncludeSOpxM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_s_opx_m1);
            }
            if ( IncludeSDivM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_s_div_m1);
            }
            if ( IncludeSErrM1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(313,m_s_err_m1);
            }
            if ( IncludePnlM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(316,m_pnl_m1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m1_err)));
            if ( IncludeOBidM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_o_bid_m10);
            }
            if ( IncludeOAskM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_o_ask_m10);
            }
            if ( IncludeUBidM10()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(328,m_u_bid_m10);
            }
            if ( IncludeUAskM10()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(331,m_u_ask_m10);
            }
            if ( IncludeUPrcM10()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(334,m_u_prc_m10);
            }
            if ( IncludeSVolM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_s_vol_m10);
            }
            if ( IncludeSOpxM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_s_opx_m10);
            }
            if ( IncludeSDivM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_s_div_m10);
            }
            if ( IncludeSErrM10()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(346,m_s_err_m10);
            }
            if ( IncludePnlM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_pnl_m10);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(352,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m10_err)));
            if ( IncludeOBidS1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_o_bid_s1);
            }
            if ( IncludeOAskS1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(356,m_o_ask_s1);
            }
            if ( IncludeUBidS1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(357,m_u_bid_s1);
            }
            if ( IncludeUAskS1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(358,m_u_ask_s1);
            }
            if ( IncludeUPrcS1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(359,m_u_prc_s1);
            }
            if ( IncludeSVolS1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(360,m_s_vol_s1);
            }
            if ( IncludeSOpxS1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(361,m_s_opx_s1);
            }
            if ( IncludeSDivS1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(362,m_s_div_s1);
            }
            if ( IncludeSErrS1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(363,m_s_err_s1);
            }
            if ( IncludePnlS1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_pnl_s1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(365,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_s1_err)));
            if ( IncludeOBidNext()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(366,m_o_bid_next);
            }
            if ( IncludeOAskNext()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(367,m_o_ask_next);
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
            if ( IncludeFkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_fkey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 100, expiryKeyLayout);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 103, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_prt_size);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_prt_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,118,m_prt_orders);
            }
            if ( IncludePrtClusterNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_prt_cluster_num);
            }
            if ( IncludePrtClusterSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_prt_cluster_size);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_prt_volume);
            }
            if ( IncludeCxlVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_cxl_volume);
            }
            if ( IncludeBidCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,133,m_bid_count);
            }
            if ( IncludeAskCount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,136,m_ask_count);
            }
            if ( IncludeBidVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_bid_volume);
            }
            if ( IncludeAskVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_ask_volume);
            }
            if ( IncludeEbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_ebid);
            }
            if ( IncludeEask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_eask);
            }
            if ( IncludeEbsz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_ebsz);
            }
            if ( IncludeEasz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_easz);
            }
            if ( IncludeEage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_eage);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_prt_side)));
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,163,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,166,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 169, m_timestamp);
            }
            if ( IncludeOBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_o_bid);
            }
            if ( IncludeOAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_o_ask);
            }
            if ( IncludeOBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_o_bid_sz);
            }
            if ( IncludeOAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_o_ask_sz);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_o_bid_ex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_o_ask_ex)));
            if ( IncludeOBidExSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,190,m_o_bid_ex_sz);
            }
            if ( IncludeOAskExSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_o_ask_ex_sz);
            }
            if ( IncludeOBidCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_o_bid_cnt);
            }
            if ( IncludeOAskCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_o_ask_cnt);
            }
            if ( IncludeOBid2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_o_bid2);
            }
            if ( IncludeOAsk2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_o_ask2);
            }
            if ( IncludeOBidSz2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,208,m_o_bid_sz2);
            }
            if ( IncludeOAskSz2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,211,m_o_ask_sz2);
            }
            if ( IncludeOBidIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,353,m_o_bid_iv);
            }
            if ( IncludeOAskIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,354,m_o_ask_iv);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,214,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,217,m_u_ask);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,220,m_u_prc);
            }
            if ( IncludeYrs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_yrs);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_rate);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_ddiv);
            }
            if ( IncludeXDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_x_de);
            }
            if ( IncludeXAxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_x_axis);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexType>(m_flex_type)));
            if ( IncludeFlexRoot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,247,static_cast<string>(m_flex_root));
            }
            if ( IncludePrtIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_prt_iv);
            }
            if ( IncludePrtDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_prt_de);
            }
            if ( IncludePrtGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_prt_ga);
            }
            if ( IncludePrtTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_prt_th);
            }
            if ( IncludePrtVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_prt_ve);
            }
            if ( IncludePrtRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_prt_ro);
            }
            if ( IncludeCalcErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,268,static_cast<string>(m_calc_err));
            }
            if ( IncludeSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_surf_vol);
            }
            if ( IncludeSurfOpx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_surf_opx);
            }
            if ( IncludeSurfAtm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_surf_atm);
            }
            if ( IncludePrtProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_prt_probability);
            }
            if ( IncludePrtProbabilityM2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_prt_probability_m2);
            }
            if ( IncludePrtProbabilityM3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_prt_probability_m3);
            }
            if ( IncludeOBidM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,289,m_o_bid_m1);
            }
            if ( IncludeOAskM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_o_ask_m1);
            }
            if ( IncludeUBidM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,295,m_u_bid_m1);
            }
            if ( IncludeUAskM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,298,m_u_ask_m1);
            }
            if ( IncludeUPrcM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,301,m_u_prc_m1);
            }
            if ( IncludeSVolM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,304,m_s_vol_m1);
            }
            if ( IncludeSOpxM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_s_opx_m1);
            }
            if ( IncludeSDivM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_s_div_m1);
            }
            if ( IncludeSErrM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,313,static_cast<string>(m_s_err_m1));
            }
            if ( IncludePnlM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,316,m_pnl_m1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,319,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m1_err)));
            if ( IncludeOBidM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_o_bid_m10);
            }
            if ( IncludeOAskM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_o_ask_m10);
            }
            if ( IncludeUBidM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,328,m_u_bid_m10);
            }
            if ( IncludeUAskM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,331,m_u_ask_m10);
            }
            if ( IncludeUPrcM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,334,m_u_prc_m10);
            }
            if ( IncludeSVolM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_s_vol_m10);
            }
            if ( IncludeSOpxM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_s_opx_m10);
            }
            if ( IncludeSDivM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_s_div_m10);
            }
            if ( IncludeSErrM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,346,static_cast<string>(m_s_err_m10));
            }
            if ( IncludePnlM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_pnl_m10);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,352,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m10_err)));
            if ( IncludeOBidS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_o_bid_s1);
            }
            if ( IncludeOAskS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,356,m_o_ask_s1);
            }
            if ( IncludeUBidS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,357,m_u_bid_s1);
            }
            if ( IncludeUAskS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,358,m_u_ask_s1);
            }
            if ( IncludeUPrcS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,359,m_u_prc_s1);
            }
            if ( IncludeSVolS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,360,m_s_vol_s1);
            }
            if ( IncludeSOpxS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,361,m_s_opx_s1);
            }
            if ( IncludeSDivS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,362,m_s_div_s1);
            }
            if ( IncludeSErrS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,363,static_cast<string>(m_s_err_s1));
            }
            if ( IncludePnlS1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_pnl_s1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,365,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_s1_err)));
            if ( IncludeOBidNext()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,366,m_o_bid_next);
            }
            if ( IncludeOAskNext()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,367,m_o_ask_next);
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
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_fkey.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_prt_orders = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_cluster_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cxl_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_count = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_count = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ebid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ebsz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_easz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eage = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_o_bid_ex = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_o_ask_ex = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_bid_ex_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_ask_ex_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_bid_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_ask_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_bid_sz2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_o_ask_sz2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 353: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_o_bid_iv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 354: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_o_ask_iv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_yrs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x_axis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_multihedge = static_cast<spiderrock::protobuf::api::Multihedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_flex_type = static_cast<spiderrock::protobuf::api::FlexType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_flex_root = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_calc_err = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_opx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_atm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_probability_m2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_probability_m3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid_m1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask_m1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_m1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_opx_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_s_err_m1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 319: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pnl_m1_err = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid_m10 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask_m10 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_m10 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_opx_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_s_err_m10 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pnl_m10_err = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid_s1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 356: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask_s1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 357: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid_s1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask_s1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 359: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_s1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 360: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol_s1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_opx_s1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 362: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_div_s1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 363: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_s_err_s1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_s1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 365: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pnl_s1_err = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 366: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid_next = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask_next = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionPrintSet::get<OptionPrintSet::_meta>() const { return OptionPrintSet::_meta{ m__meta}; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pkey>() const { return OptionPrintSet::pkey{ m_pkey}; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::fkey>() const { return OptionPrintSet::fkey{ m_fkey}; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::ticker>() const { return OptionPrintSet::ticker{ m_ticker}; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_prt_exch)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_size>() const { return m_prt_size; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_price>() const { return m_prt_price; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_prt_type)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_orders>() const { return m_prt_orders; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_cluster_num>() const { return m_prt_cluster_num; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_cluster_size>() const { return m_prt_cluster_size; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::cxl_volume>() const { return m_cxl_volume; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::bid_count>() const { return m_bid_count; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::ask_count>() const { return m_ask_count; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::bid_volume>() const { return m_bid_volume; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::ask_volume>() const { return m_ask_volume; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::ebid>() const { return m_ebid; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::eask>() const { return m_eask; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::ebsz>() const { return m_ebsz; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::easz>() const { return m_easz; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::eage>() const { return m_eage; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_prt_side)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid>() const { return m_o_bid; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask>() const { return m_o_ask; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_sz>() const { return m_o_bid_sz; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_sz>() const { return m_o_ask_sz; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_ex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_o_bid_ex)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_ex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>( m_o_ask_ex)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_ex_sz>() const { return m_o_bid_ex_sz; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_ex_sz>() const { return m_o_ask_ex_sz; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_cnt>() const { return m_o_bid_cnt; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_cnt>() const { return m_o_ask_cnt; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid2>() const { return m_o_bid2; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask2>() const { return m_o_ask2; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_sz2>() const { return m_o_bid_sz2; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_sz2>() const { return m_o_ask_sz2; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_iv>() const { return m_o_bid_iv; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_iv>() const { return m_o_ask_iv; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_bid>() const { return m_u_bid; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_ask>() const { return m_u_ask; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::yrs>() const { return m_yrs; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::rate>() const { return m_rate; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::x_de>() const { return m_x_de; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::x_axis>() const { return m_x_axis; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::multihedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>( m_multihedge)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::flex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlexType>( m_flex_type)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::flex_root>() const { return m_flex_root; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_iv>() const { return m_prt_iv; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_de>() const { return m_prt_de; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_ga>() const { return m_prt_ga; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_th>() const { return m_prt_th; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_ve>() const { return m_prt_ve; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_ro>() const { return m_prt_ro; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::calc_err>() const { return m_calc_err; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::surf_vol>() const { return m_surf_vol; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::surf_opx>() const { return m_surf_opx; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::surf_atm>() const { return m_surf_atm; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_probability>() const { return m_prt_probability; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_probability_m2>() const { return m_prt_probability_m2; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::prt_probability_m3>() const { return m_prt_probability_m3; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_m1>() const { return m_o_bid_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_m1>() const { return m_o_ask_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_bid_m1>() const { return m_u_bid_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_ask_m1>() const { return m_u_ask_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_prc_m1>() const { return m_u_prc_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_vol_m1>() const { return m_s_vol_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_opx_m1>() const { return m_s_opx_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_div_m1>() const { return m_s_div_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_err_m1>() const { return m_s_err_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pnl_m1>() const { return m_pnl_m1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pnl_m1_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_pnl_m1_err)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_m10>() const { return m_o_bid_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_m10>() const { return m_o_ask_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_bid_m10>() const { return m_u_bid_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_ask_m10>() const { return m_u_ask_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_prc_m10>() const { return m_u_prc_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_vol_m10>() const { return m_s_vol_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_opx_m10>() const { return m_s_opx_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_div_m10>() const { return m_s_div_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_err_m10>() const { return m_s_err_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pnl_m10>() const { return m_pnl_m10; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pnl_m10_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_pnl_m10_err)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_s1>() const { return m_o_bid_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_s1>() const { return m_o_ask_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_bid_s1>() const { return m_u_bid_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_ask_s1>() const { return m_u_ask_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::u_prc_s1>() const { return m_u_prc_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_vol_s1>() const { return m_s_vol_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_opx_s1>() const { return m_s_opx_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_div_s1>() const { return m_s_div_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::s_err_s1>() const { return m_s_err_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pnl_s1>() const { return m_pnl_s1; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::pnl_s1_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_pnl_s1_err)); }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_bid_next>() const { return m_o_bid_next; }
    template<> inline const auto OptionPrintSet::get<OptionPrintSet::o_ask_next>() const { return m_o_ask_next; }
    template<> inline const auto OptionPrintSet_PKey::get<OptionPrintSet_PKey::okey>() const { return OptionPrintSet_PKey::okey{m_okey}; }
    template<> inline const auto OptionPrintSet_PKey::get<OptionPrintSet_PKey::prt_number>() const { return m_prt_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintSet_PKey& m) {
        o << "\"okey\":{" << m.get<OptionPrintSet_PKey::okey>() << "}";
        o << ",\"prt_number\":" << m.get<OptionPrintSet_PKey::prt_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintSet& m) {
        o << "\"_meta\":{" << m.get<OptionPrintSet::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPrintSet::pkey>() << "}";
        o << ",\"fkey\":{" << m.get<OptionPrintSet::fkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptionPrintSet::ticker>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<OptionPrintSet::prt_exch>();
        o << ",\"prt_size\":" << m.get<OptionPrintSet::prt_size>();
        o << ",\"prt_price\":" << m.get<OptionPrintSet::prt_price>();
        o << ",\"prt_type\":" << (int64_t)m.get<OptionPrintSet::prt_type>();
        o << ",\"prt_orders\":" << m.get<OptionPrintSet::prt_orders>();
        o << ",\"prt_cluster_num\":" << m.get<OptionPrintSet::prt_cluster_num>();
        o << ",\"prt_cluster_size\":" << m.get<OptionPrintSet::prt_cluster_size>();
        o << ",\"prt_volume\":" << m.get<OptionPrintSet::prt_volume>();
        o << ",\"cxl_volume\":" << m.get<OptionPrintSet::cxl_volume>();
        o << ",\"bid_count\":" << m.get<OptionPrintSet::bid_count>();
        o << ",\"ask_count\":" << m.get<OptionPrintSet::ask_count>();
        o << ",\"bid_volume\":" << m.get<OptionPrintSet::bid_volume>();
        o << ",\"ask_volume\":" << m.get<OptionPrintSet::ask_volume>();
        o << ",\"ebid\":" << m.get<OptionPrintSet::ebid>();
        o << ",\"eask\":" << m.get<OptionPrintSet::eask>();
        o << ",\"ebsz\":" << m.get<OptionPrintSet::ebsz>();
        o << ",\"easz\":" << m.get<OptionPrintSet::easz>();
        o << ",\"eage\":" << m.get<OptionPrintSet::eage>();
        o << ",\"prt_side\":" << (int64_t)m.get<OptionPrintSet::prt_side>();
        o << ",\"prt_timestamp\":" << m.get<OptionPrintSet::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionPrintSet::net_timestamp>();
        {
            std::time_t tt = m.get<OptionPrintSet::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"o_bid\":" << m.get<OptionPrintSet::o_bid>();
        o << ",\"o_ask\":" << m.get<OptionPrintSet::o_ask>();
        o << ",\"o_bid_sz\":" << m.get<OptionPrintSet::o_bid_sz>();
        o << ",\"o_ask_sz\":" << m.get<OptionPrintSet::o_ask_sz>();
        o << ",\"o_bid_ex\":" << (int64_t)m.get<OptionPrintSet::o_bid_ex>();
        o << ",\"o_ask_ex\":" << (int64_t)m.get<OptionPrintSet::o_ask_ex>();
        o << ",\"o_bid_ex_sz\":" << m.get<OptionPrintSet::o_bid_ex_sz>();
        o << ",\"o_ask_ex_sz\":" << m.get<OptionPrintSet::o_ask_ex_sz>();
        o << ",\"o_bid_cnt\":" << m.get<OptionPrintSet::o_bid_cnt>();
        o << ",\"o_ask_cnt\":" << m.get<OptionPrintSet::o_ask_cnt>();
        o << ",\"o_bid2\":" << m.get<OptionPrintSet::o_bid2>();
        o << ",\"o_ask2\":" << m.get<OptionPrintSet::o_ask2>();
        o << ",\"o_bid_sz2\":" << m.get<OptionPrintSet::o_bid_sz2>();
        o << ",\"o_ask_sz2\":" << m.get<OptionPrintSet::o_ask_sz2>();
        o << ",\"o_bid_iv\":" << m.get<OptionPrintSet::o_bid_iv>();
        o << ",\"o_ask_iv\":" << m.get<OptionPrintSet::o_ask_iv>();
        o << ",\"u_bid\":" << m.get<OptionPrintSet::u_bid>();
        o << ",\"u_ask\":" << m.get<OptionPrintSet::u_ask>();
        o << ",\"u_prc\":" << m.get<OptionPrintSet::u_prc>();
        o << ",\"yrs\":" << m.get<OptionPrintSet::yrs>();
        o << ",\"rate\":" << m.get<OptionPrintSet::rate>();
        o << ",\"sdiv\":" << m.get<OptionPrintSet::sdiv>();
        o << ",\"ddiv\":" << m.get<OptionPrintSet::ddiv>();
        o << ",\"x_de\":" << m.get<OptionPrintSet::x_de>();
        o << ",\"x_axis\":" << m.get<OptionPrintSet::x_axis>();
        o << ",\"multihedge\":" << (int64_t)m.get<OptionPrintSet::multihedge>();
        o << ",\"flex_type\":" << (int64_t)m.get<OptionPrintSet::flex_type>();
        o << ",\"flex_root\":\"" << m.get<OptionPrintSet::flex_root>() << "\"";
        o << ",\"prt_iv\":" << m.get<OptionPrintSet::prt_iv>();
        o << ",\"prt_de\":" << m.get<OptionPrintSet::prt_de>();
        o << ",\"prt_ga\":" << m.get<OptionPrintSet::prt_ga>();
        o << ",\"prt_th\":" << m.get<OptionPrintSet::prt_th>();
        o << ",\"prt_ve\":" << m.get<OptionPrintSet::prt_ve>();
        o << ",\"prt_ro\":" << m.get<OptionPrintSet::prt_ro>();
        o << ",\"calc_err\":\"" << m.get<OptionPrintSet::calc_err>() << "\"";
        o << ",\"surf_vol\":" << m.get<OptionPrintSet::surf_vol>();
        o << ",\"surf_opx\":" << m.get<OptionPrintSet::surf_opx>();
        o << ",\"surf_atm\":" << m.get<OptionPrintSet::surf_atm>();
        o << ",\"prt_probability\":" << m.get<OptionPrintSet::prt_probability>();
        o << ",\"prt_probability_m2\":" << m.get<OptionPrintSet::prt_probability_m2>();
        o << ",\"prt_probability_m3\":" << m.get<OptionPrintSet::prt_probability_m3>();
        o << ",\"o_bid_m1\":" << m.get<OptionPrintSet::o_bid_m1>();
        o << ",\"o_ask_m1\":" << m.get<OptionPrintSet::o_ask_m1>();
        o << ",\"u_bid_m1\":" << m.get<OptionPrintSet::u_bid_m1>();
        o << ",\"u_ask_m1\":" << m.get<OptionPrintSet::u_ask_m1>();
        o << ",\"u_prc_m1\":" << m.get<OptionPrintSet::u_prc_m1>();
        o << ",\"s_vol_m1\":" << m.get<OptionPrintSet::s_vol_m1>();
        o << ",\"s_opx_m1\":" << m.get<OptionPrintSet::s_opx_m1>();
        o << ",\"s_div_m1\":" << m.get<OptionPrintSet::s_div_m1>();
        o << ",\"s_err_m1\":\"" << m.get<OptionPrintSet::s_err_m1>() << "\"";
        o << ",\"pnl_m1\":" << m.get<OptionPrintSet::pnl_m1>();
        o << ",\"pnl_m1_err\":" << (int64_t)m.get<OptionPrintSet::pnl_m1_err>();
        o << ",\"o_bid_m10\":" << m.get<OptionPrintSet::o_bid_m10>();
        o << ",\"o_ask_m10\":" << m.get<OptionPrintSet::o_ask_m10>();
        o << ",\"u_bid_m10\":" << m.get<OptionPrintSet::u_bid_m10>();
        o << ",\"u_ask_m10\":" << m.get<OptionPrintSet::u_ask_m10>();
        o << ",\"u_prc_m10\":" << m.get<OptionPrintSet::u_prc_m10>();
        o << ",\"s_vol_m10\":" << m.get<OptionPrintSet::s_vol_m10>();
        o << ",\"s_opx_m10\":" << m.get<OptionPrintSet::s_opx_m10>();
        o << ",\"s_div_m10\":" << m.get<OptionPrintSet::s_div_m10>();
        o << ",\"s_err_m10\":\"" << m.get<OptionPrintSet::s_err_m10>() << "\"";
        o << ",\"pnl_m10\":" << m.get<OptionPrintSet::pnl_m10>();
        o << ",\"pnl_m10_err\":" << (int64_t)m.get<OptionPrintSet::pnl_m10_err>();
        o << ",\"o_bid_s1\":" << m.get<OptionPrintSet::o_bid_s1>();
        o << ",\"o_ask_s1\":" << m.get<OptionPrintSet::o_ask_s1>();
        o << ",\"u_bid_s1\":" << m.get<OptionPrintSet::u_bid_s1>();
        o << ",\"u_ask_s1\":" << m.get<OptionPrintSet::u_ask_s1>();
        o << ",\"u_prc_s1\":" << m.get<OptionPrintSet::u_prc_s1>();
        o << ",\"s_vol_s1\":" << m.get<OptionPrintSet::s_vol_s1>();
        o << ",\"s_opx_s1\":" << m.get<OptionPrintSet::s_opx_s1>();
        o << ",\"s_div_s1\":" << m.get<OptionPrintSet::s_div_s1>();
        o << ",\"s_err_s1\":\"" << m.get<OptionPrintSet::s_err_s1>() << "\"";
        o << ",\"pnl_s1\":" << m.get<OptionPrintSet::pnl_s1>();
        o << ",\"pnl_s1_err\":" << (int64_t)m.get<OptionPrintSet::pnl_s1_err>();
        o << ",\"o_bid_next\":" << m.get<OptionPrintSet::o_bid_next>();
        o << ",\"o_ask_next\":" << m.get<OptionPrintSet::o_ask_next>();
        return o;
    }

}
}
}