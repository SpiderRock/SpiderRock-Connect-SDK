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

    #ifndef _is_test_auction__GUARD__
    #define _is_test_auction__GUARD__
    DECL_STRONG_TYPE(is_test_auction, spiderrock::protobuf::api::YesNo);
    #endif//_is_test_auction__GUARD__

    #ifndef _notice_time__GUARD__
    #define _notice_time__GUARD__
    DECL_STRONG_TYPE(notice_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_notice_time__GUARD__

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _auction_source__GUARD__
    #define _auction_source__GUARD__
    DECL_STRONG_TYPE(auction_source, spiderrock::protobuf::api::AuctionSource);
    #endif//_auction_source__GUARD__

    #ifndef _industry__string__GUARD__
    #define _industry__string__GUARD__
    DECL_STRONG_TYPE(industry__string, string);
    #endif//_industry__string__GUARD__

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _u_avg_daily_vlm__GUARD__
    #define _u_avg_daily_vlm__GUARD__
    DECL_STRONG_TYPE(u_avg_daily_vlm, float);
    #endif//_u_avg_daily_vlm__GUARD__

    #ifndef _cust_side__GUARD__
    #define _cust_side__GUARD__
    DECL_STRONG_TYPE(cust_side, spiderrock::protobuf::api::BuySell);
    #endif//_cust_side__GUARD__

    #ifndef _cust_qty__GUARD__
    #define _cust_qty__GUARD__
    DECL_STRONG_TYPE(cust_qty, int32);
    #endif//_cust_qty__GUARD__

    #ifndef _cust_prc__GUARD__
    #define _cust_prc__GUARD__
    DECL_STRONG_TYPE(cust_prc, double);
    #endif//_cust_prc__GUARD__

    #ifndef _has_cust_prc__GUARD__
    #define _has_cust_prc__GUARD__
    DECL_STRONG_TYPE(has_cust_prc, spiderrock::protobuf::api::YesNo);
    #endif//_has_cust_prc__GUARD__

    #ifndef _cust_firm_type__GUARD__
    #define _cust_firm_type__GUARD__
    DECL_STRONG_TYPE(cust_firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_cust_firm_type__GUARD__

    #ifndef _cust_agent_mpid__GUARD__
    #define _cust_agent_mpid__GUARD__
    DECL_STRONG_TYPE(cust_agent_mpid, string);
    #endif//_cust_agent_mpid__GUARD__

    #ifndef _comm_enhancement__GUARD__
    #define _comm_enhancement__GUARD__
    DECL_STRONG_TYPE(comm_enhancement, float);
    #endif//_comm_enhancement__GUARD__

    #ifndef _num_opt_legs__GUARD__
    #define _num_opt_legs__GUARD__
    DECL_STRONG_TYPE(num_opt_legs, int32);
    #endif//_num_opt_legs__GUARD__

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::SpreadClass);
    #endif//_spread_class__GUARD__

    #ifndef _spread_flavor__GUARD__
    #define _spread_flavor__GUARD__
    DECL_STRONG_TYPE(spread_flavor, spiderrock::protobuf::api::SpreadFlavor);
    #endif//_spread_flavor__GUARD__

    #ifndef _contains_hedge__GUARD__
    #define _contains_hedge__GUARD__
    DECL_STRONG_TYPE(contains_hedge, spiderrock::protobuf::api::YesNo);
    #endif//_contains_hedge__GUARD__

    #ifndef _contains_flex__GUARD__
    #define _contains_flex__GUARD__
    DECL_STRONG_TYPE(contains_flex, spiderrock::protobuf::api::YesNo);
    #endif//_contains_flex__GUARD__

    #ifndef _contains_multi_hedge__GUARD__
    #define _contains_multi_hedge__GUARD__
    DECL_STRONG_TYPE(contains_multi_hedge, spiderrock::protobuf::api::YesNo);
    #endif//_contains_multi_hedge__GUARD__

    #ifndef _u_bid__double__GUARD__
    #define _u_bid__double__GUARD__
    DECL_STRONG_TYPE(u_bid__double, double);
    #endif//_u_bid__double__GUARD__

    #ifndef _u_ask__double__GUARD__
    #define _u_ask__double__GUARD__
    DECL_STRONG_TYPE(u_ask__double, double);
    #endif//_u_ask__double__GUARD__

    #ifndef _net_de__GUARD__
    #define _net_de__GUARD__
    DECL_STRONG_TYPE(net_de, float);
    #endif//_net_de__GUARD__

    #ifndef _net_ga__GUARD__
    #define _net_ga__GUARD__
    DECL_STRONG_TYPE(net_ga, float);
    #endif//_net_ga__GUARD__

    #ifndef _net_th__GUARD__
    #define _net_th__GUARD__
    DECL_STRONG_TYPE(net_th, float);
    #endif//_net_th__GUARD__

    #ifndef _net_ve__GUARD__
    #define _net_ve__GUARD__
    DECL_STRONG_TYPE(net_ve, float);
    #endif//_net_ve__GUARD__

    #ifndef _pkg_surf_prc__GUARD__
    #define _pkg_surf_prc__GUARD__
    DECL_STRONG_TYPE(pkg_surf_prc, float);
    #endif//_pkg_surf_prc__GUARD__

    #ifndef _pkg_bid_prc__GUARD__
    #define _pkg_bid_prc__GUARD__
    DECL_STRONG_TYPE(pkg_bid_prc, float);
    #endif//_pkg_bid_prc__GUARD__

    #ifndef _pkg_ask_prc__GUARD__
    #define _pkg_ask_prc__GUARD__
    DECL_STRONG_TYPE(pkg_ask_prc, float);
    #endif//_pkg_ask_prc__GUARD__

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

    #ifndef _prt_price2__GUARD__
    #define _prt_price2__GUARD__
    DECL_STRONG_TYPE(prt_price2, double);
    #endif//_prt_price2__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_size2__GUARD__
    #define _prt_size2__GUARD__
    DECL_STRONG_TYPE(prt_size2, int32);
    #endif//_prt_size2__GUARD__

    #ifndef _prt_time__GUARD__
    #define _prt_time__GUARD__
    DECL_STRONG_TYPE(prt_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_prt_time__GUARD__

    #ifndef _prt_type__PrtType__GUARD__
    #define _prt_type__PrtType__GUARD__
    DECL_STRONG_TYPE(prt_type__PrtType, spiderrock::protobuf::api::PrtType);
    #endif//_prt_type__PrtType__GUARD__

    #ifndef _prt_ubid__GUARD__
    #define _prt_ubid__GUARD__
    DECL_STRONG_TYPE(prt_ubid, double);
    #endif//_prt_ubid__GUARD__

    #ifndef _prt_uask__GUARD__
    #define _prt_uask__GUARD__
    DECL_STRONG_TYPE(prt_uask, double);
    #endif//_prt_uask__GUARD__

    #ifndef _prt_uprc__GUARD__
    #define _prt_uprc__GUARD__
    DECL_STRONG_TYPE(prt_uprc, double);
    #endif//_prt_uprc__GUARD__

    #ifndef _prt_surf_vol__GUARD__
    #define _prt_surf_vol__GUARD__
    DECL_STRONG_TYPE(prt_surf_vol, float);
    #endif//_prt_surf_vol__GUARD__

    #ifndef _prt_surf_prc__GUARD__
    #define _prt_surf_prc__GUARD__
    DECL_STRONG_TYPE(prt_surf_prc, float);
    #endif//_prt_surf_prc__GUARD__

    #ifndef _bid_prc__float__GUARD__
    #define _bid_prc__float__GUARD__
    DECL_STRONG_TYPE(bid_prc__float, float);
    #endif//_bid_prc__float__GUARD__

    #ifndef _bid_sz__GUARD__
    #define _bid_sz__GUARD__
    DECL_STRONG_TYPE(bid_sz, int32);
    #endif//_bid_sz__GUARD__

    #ifndef _bid_mask__GUARD__
    #define _bid_mask__GUARD__
    DECL_STRONG_TYPE(bid_mask, uint32);
    #endif//_bid_mask__GUARD__

    #ifndef _ask_prc__float__GUARD__
    #define _ask_prc__float__GUARD__
    DECL_STRONG_TYPE(ask_prc__float, float);
    #endif//_ask_prc__float__GUARD__

    #ifndef _ask_sz__GUARD__
    #define _ask_sz__GUARD__
    DECL_STRONG_TYPE(ask_sz, int32);
    #endif//_ask_sz__GUARD__

    #ifndef _ask_mask__GUARD__
    #define _ask_mask__GUARD__
    DECL_STRONG_TYPE(ask_mask, uint32);
    #endif//_ask_mask__GUARD__

    #ifndef _exch_bid_prc__GUARD__
    #define _exch_bid_prc__GUARD__
    DECL_STRONG_TYPE(exch_bid_prc, float);
    #endif//_exch_bid_prc__GUARD__

    #ifndef _exch_bid_sz__GUARD__
    #define _exch_bid_sz__GUARD__
    DECL_STRONG_TYPE(exch_bid_sz, int32);
    #endif//_exch_bid_sz__GUARD__

    #ifndef _exch_ask_prc__GUARD__
    #define _exch_ask_prc__GUARD__
    DECL_STRONG_TYPE(exch_ask_prc, float);
    #endif//_exch_ask_prc__GUARD__

    #ifndef _exch_ask_sz__GUARD__
    #define _exch_ask_sz__GUARD__
    DECL_STRONG_TYPE(exch_ask_sz, int32);
    #endif//_exch_ask_sz__GUARD__

    #ifndef _u_prc1m__GUARD__
    #define _u_prc1m__GUARD__
    DECL_STRONG_TYPE(u_prc1m, float);
    #endif//_u_prc1m__GUARD__

    #ifndef _bid_prc1m__GUARD__
    #define _bid_prc1m__GUARD__
    DECL_STRONG_TYPE(bid_prc1m, float);
    #endif//_bid_prc1m__GUARD__

    #ifndef _ask_prc1m__GUARD__
    #define _ask_prc1m__GUARD__
    DECL_STRONG_TYPE(ask_prc1m, float);
    #endif//_ask_prc1m__GUARD__

    #ifndef _surf_vol1m__GUARD__
    #define _surf_vol1m__GUARD__
    DECL_STRONG_TYPE(surf_vol1m, float);
    #endif//_surf_vol1m__GUARD__

    #ifndef _surf_prc1m__GUARD__
    #define _surf_prc1m__GUARD__
    DECL_STRONG_TYPE(surf_prc1m, float);
    #endif//_surf_prc1m__GUARD__

    #ifndef _u_prc10m__GUARD__
    #define _u_prc10m__GUARD__
    DECL_STRONG_TYPE(u_prc10m, float);
    #endif//_u_prc10m__GUARD__

    #ifndef _bid_prc10m__GUARD__
    #define _bid_prc10m__GUARD__
    DECL_STRONG_TYPE(bid_prc10m, float);
    #endif//_bid_prc10m__GUARD__

    #ifndef _ask_prc10m__GUARD__
    #define _ask_prc10m__GUARD__
    DECL_STRONG_TYPE(ask_prc10m, float);
    #endif//_ask_prc10m__GUARD__

    #ifndef _surf_vol10m__GUARD__
    #define _surf_vol10m__GUARD__
    DECL_STRONG_TYPE(surf_vol10m, float);
    #endif//_surf_vol10m__GUARD__

    #ifndef _surf_prc10m__GUARD__
    #define _surf_prc10m__GUARD__
    DECL_STRONG_TYPE(surf_prc10m, float);
    #endif//_surf_prc10m__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _ratio__uint32__GUARD__
    #define _ratio__uint32__GUARD__
    DECL_STRONG_TYPE(ratio__uint32, uint32);
    #endif//_ratio__uint32__GUARD__

    #ifndef _und_per_cn__GUARD__
    #define _und_per_cn__GUARD__
    DECL_STRONG_TYPE(und_per_cn, int32);
    #endif//_und_per_cn__GUARD__

    #ifndef _point_value__float__GUARD__
    #define _point_value__float__GUARD__
    DECL_STRONG_TYPE(point_value__float, float);
    #endif//_point_value__float__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _exp_type__GUARD__
    #define _exp_type__GUARD__
    DECL_STRONG_TYPE(exp_type, spiderrock::protobuf::api::ExpiryType);
    #endif//_exp_type__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _ddiv_pv__float__GUARD__
    #define _ddiv_pv__float__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__float, float);
    #endif//_ddiv_pv__float__GUARD__

    #ifndef _t_vol__GUARD__
    #define _t_vol__GUARD__
    DECL_STRONG_TYPE(t_vol, float);
    #endif//_t_vol__GUARD__

    #ifndef _s_vol__float__GUARD__
    #define _s_vol__float__GUARD__
    DECL_STRONG_TYPE(s_vol__float, float);
    #endif//_s_vol__float__GUARD__

    #ifndef _s_div__GUARD__
    #define _s_div__GUARD__
    DECL_STRONG_TYPE(s_div, float);
    #endif//_s_div__GUARD__

    #ifndef _s_prc__GUARD__
    #define _s_prc__GUARD__
    DECL_STRONG_TYPE(s_prc, float);
    #endif//_s_prc__GUARD__

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

    #ifndef _s_vol_ok__GUARD__
    #define _s_vol_ok__GUARD__
    DECL_STRONG_TYPE(s_vol_ok, spiderrock::protobuf::api::YesNo);
    #endif//_s_vol_ok__GUARD__

    #ifndef _bid__float__GUARD__
    #define _bid__float__GUARD__
    DECL_STRONG_TYPE(bid__float, float);
    #endif//_bid__float__GUARD__

    #ifndef _bid_sz__GUARD__
    #define _bid_sz__GUARD__
    DECL_STRONG_TYPE(bid_sz, int32);
    #endif//_bid_sz__GUARD__

    #ifndef _bid_mask__GUARD__
    #define _bid_mask__GUARD__
    DECL_STRONG_TYPE(bid_mask, uint32);
    #endif//_bid_mask__GUARD__

    #ifndef _ask__float__GUARD__
    #define _ask__float__GUARD__
    DECL_STRONG_TYPE(ask__float, float);
    #endif//_ask__float__GUARD__

    #ifndef _ask_sz__GUARD__
    #define _ask_sz__GUARD__
    DECL_STRONG_TYPE(ask_sz, int32);
    #endif//_ask_sz__GUARD__

    #ifndef _ask_mask__GUARD__
    #define _ask_mask__GUARD__
    DECL_STRONG_TYPE(ask_mask, uint32);
    #endif//_ask_mask__GUARD__

    
    class AuctionPrint_PKey {
        public:
        //using statements for all types used in this class
        using notice_number = spiderrock::protobuf::api::notice_number;

        private:
        notice_number m_notice_number{};

        public:
        notice_number get_notice_number() const {
            return m_notice_number;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }


        AuctionPrint_PKey() {}

        virtual ~AuctionPrint_PKey() {
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
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_notice_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_notice_number);
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
                    case 10: {m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AuctionPrint_OrderLegs {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using side = spiderrock::protobuf::api::side;
        using ratio = spiderrock::protobuf::api::ratio__uint32;
        using und_per_cn = spiderrock::protobuf::api::und_per_cn;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using exp_type = spiderrock::protobuf::api::exp_type;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__float;
        using t_vol = spiderrock::protobuf::api::t_vol;
        using s_vol = spiderrock::protobuf::api::s_vol__float;
        using s_div = spiderrock::protobuf::api::s_div;
        using s_prc = spiderrock::protobuf::api::s_prc;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using s_vol_ok = spiderrock::protobuf::api::s_vol_ok;
        using bid = spiderrock::protobuf::api::bid__float;
        using bid_sz = spiderrock::protobuf::api::bid_sz;
        using bid_mask = spiderrock::protobuf::api::bid_mask;
        using ask = spiderrock::protobuf::api::ask__float;
        using ask_sz = spiderrock::protobuf::api::ask_sz;
        using ask_mask = spiderrock::protobuf::api::ask_mask;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        ratio m_ratio{};
        und_per_cn m_und_per_cn{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        exp_type m_exp_type{};
        years m_years{};
        rate m_rate{};
        atm_vol m_atm_vol{};
        ddiv_pv m_ddiv_pv{};
        t_vol m_t_vol{};
        s_vol m_s_vol{};
        s_div m_s_div{};
        s_prc m_s_prc{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        s_vol_ok m_s_vol_ok{};
        bid m_bid{};
        bid_sz m_bid_sz{};
        bid_mask m_bid_mask{};
        ask m_ask{};
        ask_sz m_ask_sz{};
        ask_mask m_ask_mask{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        side get_side() const {
            return m_side;
        }
        ratio get_ratio() const {
            return m_ratio;
        }
        und_per_cn get_und_per_cn() const {
            return m_und_per_cn;
        }
        point_value get_point_value() const {
            return m_point_value;
        }
        point_currency get_point_currency() const {
            return m_point_currency;
        }
        exp_type get_exp_type() const {
            return m_exp_type;
        }
        years get_years() const {
            return m_years;
        }
        rate get_rate() const {
            return m_rate;
        }
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }
        t_vol get_t_vol() const {
            return m_t_vol;
        }
        s_vol get_s_vol() const {
            return m_s_vol;
        }
        s_div get_s_div() const {
            return m_s_div;
        }
        s_prc get_s_prc() const {
            return m_s_prc;
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
        s_vol_ok get_s_vol_ok() const {
            return m_s_vol_ok;
        }
        bid get_bid() const {
            return m_bid;
        }
        bid_sz get_bid_sz() const {
            return m_bid_sz;
        }
        bid_mask get_bid_mask() const {
            return m_bid_mask;
        }
        ask get_ask() const {
            return m_ask;
        }
        ask_sz get_ask_sz() const {
            return m_ask_sz;
        }
        ask_mask get_ask_mask() const {
            return m_ask_mask;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_ratio(const ratio& value)  {
            m_ratio = value;
        }
        void set_und_per_cn(const und_per_cn& value)  {
            m_und_per_cn = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_exp_type(const exp_type& value)  {
            m_exp_type = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_t_vol(const t_vol& value)  {
            m_t_vol = value;
        }
        void set_s_vol(const s_vol& value)  {
            m_s_vol = value;
        }
        void set_s_div(const s_div& value)  {
            m_s_div = value;
        }
        void set_s_prc(const s_prc& value)  {
            m_s_prc = value;
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
        void set_s_vol_ok(const s_vol_ok& value)  {
            m_s_vol_ok = value;
        }
        void set_bid(const bid& value)  {
            m_bid = value;
        }
        void set_bid_sz(const bid_sz& value)  {
            m_bid_sz = value;
        }
        void set_bid_mask(const bid_mask& value)  {
            m_bid_mask = value;
        }
        void set_ask(const ask& value)  {
            m_ask = value;
        }
        void set_ask_sz(const ask_sz& value)  {
            m_ask_sz = value;
        }
        void set_ask_mask(const ask_mask& value)  {
            m_ask_mask = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const side & value) { set_side(value); }
        void set(const ratio & value) { set_ratio(value); }
        void set(const und_per_cn & value) { set_und_per_cn(value); }
        void set(const point_value & value) { set_point_value(value); }
        void set(const point_currency & value) { set_point_currency(value); }
        void set(const exp_type & value) { set_exp_type(value); }
        void set(const years & value) { set_years(value); }
        void set(const rate & value) { set_rate(value); }
        void set(const atm_vol & value) { set_atm_vol(value); }
        void set(const ddiv_pv & value) { set_ddiv_pv(value); }
        void set(const t_vol & value) { set_t_vol(value); }
        void set(const s_vol & value) { set_s_vol(value); }
        void set(const s_div & value) { set_s_div(value); }
        void set(const s_prc & value) { set_s_prc(value); }
        void set(const de & value) { set_de(value); }
        void set(const ga & value) { set_ga(value); }
        void set(const th & value) { set_th(value); }
        void set(const ve & value) { set_ve(value); }
        void set(const s_vol_ok & value) { set_s_vol_ok(value); }
        void set(const bid & value) { set_bid(value); }
        void set(const bid_sz & value) { set_bid_sz(value); }
        void set(const bid_mask & value) { set_bid_mask(value); }
        void set(const ask & value) { set_ask(value); }
        void set(const ask_sz & value) { set_ask_sz(value); }
        void set(const ask_mask & value) { set_ask_mask(value); }


        AuctionPrint_OrderLegs() {}

        virtual ~AuctionPrint_OrderLegs() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(165,optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(167,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(168,m_ratio);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_und_per_cn);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(170,m_point_value);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(191,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(171,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpiryType>(m_exp_type)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_years);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(173,m_rate);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(174,m_atm_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_ddiv_pv);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(176,m_t_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(177,m_s_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_s_div);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(179,m_s_prc);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(180,m_de);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_ga);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(182,m_th);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(183,m_ve);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_s_vol_ok)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_bid);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(194,m_bid_sz);
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(195,m_bid_mask);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_ask);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(197,m_ask_sz);
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(198,m_ask_mask);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 165, optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,167,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,168,m_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_und_per_cn);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,170,m_point_value);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,191,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,171,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpiryType>(m_exp_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_years);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,173,m_rate);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,174,m_atm_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_ddiv_pv);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,176,m_t_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,177,m_s_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_s_div);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,179,m_s_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,180,m_de);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_ga);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,182,m_th);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,183,m_ve);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_s_vol_ok)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_bid);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,194,m_bid_sz);
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,195,m_bid_mask);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_ask);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,197,m_ask_sz);
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,198,m_ask_mask);
            return dest;
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
                    case 165: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 166: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 167: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 168: {m_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 169: {m_und_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 170: {m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 191: {m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 171: {m_exp_type = static_cast<spiderrock::protobuf::api::ExpiryType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 172: {m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 173: {m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 174: {m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 175: {m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 176: {m_t_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 177: {m_s_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 178: {m_s_div = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 179: {m_s_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 180: {m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 181: {m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 182: {m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 183: {m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 184: {m_s_vol_ok = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 193: {m_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 194: {m_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 195: {m_bid_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 196: {m_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 197: {m_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 198: {m_ask_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class AuctionPrint {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionPrint_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using notice_time = spiderrock::protobuf::api::notice_time;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using industry = spiderrock::protobuf::api::industry__string;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using u_avg_daily_vlm = spiderrock::protobuf::api::u_avg_daily_vlm;
        using cust_side = spiderrock::protobuf::api::cust_side;
        using cust_qty = spiderrock::protobuf::api::cust_qty;
        using cust_prc = spiderrock::protobuf::api::cust_prc;
        using has_cust_prc = spiderrock::protobuf::api::has_cust_prc;
        using cust_firm_type = spiderrock::protobuf::api::cust_firm_type;
        using cust_agent_mpid = spiderrock::protobuf::api::cust_agent_mpid;
        using comm_enhancement = spiderrock::protobuf::api::comm_enhancement;
        using num_opt_legs = spiderrock::protobuf::api::num_opt_legs;
        using spread_class = spiderrock::protobuf::api::spread_class;
        using spread_flavor = spiderrock::protobuf::api::spread_flavor;
        using contains_hedge = spiderrock::protobuf::api::contains_hedge;
        using contains_flex = spiderrock::protobuf::api::contains_flex;
        using contains_multi_hedge = spiderrock::protobuf::api::contains_multi_hedge;
        using u_bid = spiderrock::protobuf::api::u_bid__double;
        using u_ask = spiderrock::protobuf::api::u_ask__double;
        using net_de = spiderrock::protobuf::api::net_de;
        using net_ga = spiderrock::protobuf::api::net_ga;
        using net_th = spiderrock::protobuf::api::net_th;
        using net_ve = spiderrock::protobuf::api::net_ve;
        using pkg_surf_prc = spiderrock::protobuf::api::pkg_surf_prc;
        using pkg_bid_prc = spiderrock::protobuf::api::pkg_bid_prc;
        using pkg_ask_prc = spiderrock::protobuf::api::pkg_ask_prc;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_price2 = spiderrock::protobuf::api::prt_price2;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_size2 = spiderrock::protobuf::api::prt_size2;
        using prt_time = spiderrock::protobuf::api::prt_time;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using prt_ubid = spiderrock::protobuf::api::prt_ubid;
        using prt_uask = spiderrock::protobuf::api::prt_uask;
        using prt_uprc = spiderrock::protobuf::api::prt_uprc;
        using prt_surf_vol = spiderrock::protobuf::api::prt_surf_vol;
        using prt_surf_prc = spiderrock::protobuf::api::prt_surf_prc;
        using bid_prc = spiderrock::protobuf::api::bid_prc__float;
        using bid_sz = spiderrock::protobuf::api::bid_sz;
        using bid_mask = spiderrock::protobuf::api::bid_mask;
        using ask_prc = spiderrock::protobuf::api::ask_prc__float;
        using ask_sz = spiderrock::protobuf::api::ask_sz;
        using ask_mask = spiderrock::protobuf::api::ask_mask;
        using exch_bid_prc = spiderrock::protobuf::api::exch_bid_prc;
        using exch_bid_sz = spiderrock::protobuf::api::exch_bid_sz;
        using exch_ask_prc = spiderrock::protobuf::api::exch_ask_prc;
        using exch_ask_sz = spiderrock::protobuf::api::exch_ask_sz;
        using u_prc1m = spiderrock::protobuf::api::u_prc1m;
        using bid_prc1m = spiderrock::protobuf::api::bid_prc1m;
        using ask_prc1m = spiderrock::protobuf::api::ask_prc1m;
        using surf_vol1m = spiderrock::protobuf::api::surf_vol1m;
        using surf_prc1m = spiderrock::protobuf::api::surf_prc1m;
        using u_prc10m = spiderrock::protobuf::api::u_prc10m;
        using bid_prc10m = spiderrock::protobuf::api::bid_prc10m;
        using ask_prc10m = spiderrock::protobuf::api::ask_prc10m;
        using surf_vol10m = spiderrock::protobuf::api::surf_vol10m;
        using surf_prc10m = spiderrock::protobuf::api::surf_prc10m;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using order_legs = spiderrock::protobuf::api::AuctionPrint_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        is_test_auction m_is_test_auction{};
        notice_time m_notice_time{};
        auction_type m_auction_type{};
        auction_source m_auction_source{};
        industry m_industry{};
        symbol_type m_symbol_type{};
        u_avg_daily_vlm m_u_avg_daily_vlm{};
        cust_side m_cust_side{};
        cust_qty m_cust_qty{};
        cust_prc m_cust_prc{};
        has_cust_prc m_has_cust_prc{};
        cust_firm_type m_cust_firm_type{};
        cust_agent_mpid m_cust_agent_mpid{};
        comm_enhancement m_comm_enhancement{};
        num_opt_legs m_num_opt_legs{};
        spread_class m_spread_class{};
        spread_flavor m_spread_flavor{};
        contains_hedge m_contains_hedge{};
        contains_flex m_contains_flex{};
        contains_multi_hedge m_contains_multi_hedge{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        net_de m_net_de{};
        net_ga m_net_ga{};
        net_th m_net_th{};
        net_ve m_net_ve{};
        pkg_surf_prc m_pkg_surf_prc{};
        pkg_bid_prc m_pkg_bid_prc{};
        pkg_ask_prc m_pkg_ask_prc{};
        prt_price m_prt_price{};
        prt_price2 m_prt_price2{};
        prt_size m_prt_size{};
        prt_size2 m_prt_size2{};
        prt_time m_prt_time{};
        prt_type m_prt_type{};
        prt_ubid m_prt_ubid{};
        prt_uask m_prt_uask{};
        prt_uprc m_prt_uprc{};
        prt_surf_vol m_prt_surf_vol{};
        prt_surf_prc m_prt_surf_prc{};
        bid_prc m_bid_prc{};
        bid_sz m_bid_sz{};
        bid_mask m_bid_mask{};
        ask_prc m_ask_prc{};
        ask_sz m_ask_sz{};
        ask_mask m_ask_mask{};
        exch_bid_prc m_exch_bid_prc{};
        exch_bid_sz m_exch_bid_sz{};
        exch_ask_prc m_exch_ask_prc{};
        exch_ask_sz m_exch_ask_sz{};
        u_prc1m m_u_prc1m{};
        bid_prc1m m_bid_prc1m{};
        ask_prc1m m_ask_prc1m{};
        surf_vol1m m_surf_vol1m{};
        surf_prc1m m_surf_prc1m{};
        u_prc10m m_u_prc10m{};
        bid_prc10m m_bid_prc10m{};
        ask_prc10m m_ask_prc10m{};
        surf_vol10m m_surf_vol10m{};
        surf_prc10m m_surf_prc10m{};
        timestamp m_timestamp{};
        std::vector<order_legs> m_order_legs{};

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
        is_test_auction get_is_test_auction() const {
            return m_is_test_auction;
        }		
        notice_time get_notice_time() const {
            return m_notice_time;
        }		
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        auction_source get_auction_source() const {
            return m_auction_source;
        }		
        industry get_industry() const {
            return m_industry;
        }		
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        u_avg_daily_vlm get_u_avg_daily_vlm() const {
            return m_u_avg_daily_vlm;
        }		
        cust_side get_cust_side() const {
            return m_cust_side;
        }		
        cust_qty get_cust_qty() const {
            return m_cust_qty;
        }		
        cust_prc get_cust_prc() const {
            return m_cust_prc;
        }		
        has_cust_prc get_has_cust_prc() const {
            return m_has_cust_prc;
        }		
        cust_firm_type get_cust_firm_type() const {
            return m_cust_firm_type;
        }		
        cust_agent_mpid get_cust_agent_mpid() const {
            return m_cust_agent_mpid;
        }		
        comm_enhancement get_comm_enhancement() const {
            return m_comm_enhancement;
        }		
        num_opt_legs get_num_opt_legs() const {
            return m_num_opt_legs;
        }		
        spread_class get_spread_class() const {
            return m_spread_class;
        }		
        spread_flavor get_spread_flavor() const {
            return m_spread_flavor;
        }		
        contains_hedge get_contains_hedge() const {
            return m_contains_hedge;
        }		
        contains_flex get_contains_flex() const {
            return m_contains_flex;
        }		
        contains_multi_hedge get_contains_multi_hedge() const {
            return m_contains_multi_hedge;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        net_de get_net_de() const {
            return m_net_de;
        }		
        net_ga get_net_ga() const {
            return m_net_ga;
        }		
        net_th get_net_th() const {
            return m_net_th;
        }		
        net_ve get_net_ve() const {
            return m_net_ve;
        }		
        pkg_surf_prc get_pkg_surf_prc() const {
            return m_pkg_surf_prc;
        }		
        pkg_bid_prc get_pkg_bid_prc() const {
            return m_pkg_bid_prc;
        }		
        pkg_ask_prc get_pkg_ask_prc() const {
            return m_pkg_ask_prc;
        }		
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_price2 get_prt_price2() const {
            return m_prt_price2;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_size2 get_prt_size2() const {
            return m_prt_size2;
        }		
        prt_time get_prt_time() const {
            return m_prt_time;
        }		
        prt_type get_prt_type() const {
            return m_prt_type;
        }		
        prt_ubid get_prt_ubid() const {
            return m_prt_ubid;
        }		
        prt_uask get_prt_uask() const {
            return m_prt_uask;
        }		
        prt_uprc get_prt_uprc() const {
            return m_prt_uprc;
        }		
        prt_surf_vol get_prt_surf_vol() const {
            return m_prt_surf_vol;
        }		
        prt_surf_prc get_prt_surf_prc() const {
            return m_prt_surf_prc;
        }		
        bid_prc get_bid_prc() const {
            return m_bid_prc;
        }		
        bid_sz get_bid_sz() const {
            return m_bid_sz;
        }		
        bid_mask get_bid_mask() const {
            return m_bid_mask;
        }		
        ask_prc get_ask_prc() const {
            return m_ask_prc;
        }		
        ask_sz get_ask_sz() const {
            return m_ask_sz;
        }		
        ask_mask get_ask_mask() const {
            return m_ask_mask;
        }		
        exch_bid_prc get_exch_bid_prc() const {
            return m_exch_bid_prc;
        }		
        exch_bid_sz get_exch_bid_sz() const {
            return m_exch_bid_sz;
        }		
        exch_ask_prc get_exch_ask_prc() const {
            return m_exch_ask_prc;
        }		
        exch_ask_sz get_exch_ask_sz() const {
            return m_exch_ask_sz;
        }		
        u_prc1m get_u_prc1m() const {
            return m_u_prc1m;
        }		
        bid_prc1m get_bid_prc1m() const {
            return m_bid_prc1m;
        }		
        ask_prc1m get_ask_prc1m() const {
            return m_ask_prc1m;
        }		
        surf_vol1m get_surf_vol1m() const {
            return m_surf_vol1m;
        }		
        surf_prc1m get_surf_prc1m() const {
            return m_surf_prc1m;
        }		
        u_prc10m get_u_prc10m() const {
            return m_u_prc10m;
        }		
        bid_prc10m get_bid_prc10m() const {
            return m_bid_prc10m;
        }		
        ask_prc10m get_ask_prc10m() const {
            return m_ask_prc10m;
        }		
        surf_vol10m get_surf_vol10m() const {
            return m_surf_vol10m;
        }		
        surf_prc10m get_surf_prc10m() const {
            return m_surf_prc10m;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<order_legs>& get_order_legs_list() const {
            return m_order_legs;
        }
        const order_legs& get_order_legs(const int i) const {
            return m_order_legs.at(i);
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
        void set_is_test_auction(const is_test_auction& value)  {
            m_is_test_auction = value;
        }
        void set_notice_time(const notice_time& value)  {
            m_notice_time = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_auction_source(const auction_source& value)  {
            m_auction_source = value;
        }
        void set_industry(const industry& value)  {
            m_industry = value;
        }
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_u_avg_daily_vlm(const u_avg_daily_vlm& value)  {
            m_u_avg_daily_vlm = value;
        }
        void set_cust_side(const cust_side& value)  {
            m_cust_side = value;
        }
        void set_cust_qty(const cust_qty& value)  {
            m_cust_qty = value;
        }
        void set_cust_prc(const cust_prc& value)  {
            m_cust_prc = value;
        }
        void set_has_cust_prc(const has_cust_prc& value)  {
            m_has_cust_prc = value;
        }
        void set_cust_firm_type(const cust_firm_type& value)  {
            m_cust_firm_type = value;
        }
        void set_cust_agent_mpid(const cust_agent_mpid& value)  {
            m_cust_agent_mpid = value;
        }
        void set_comm_enhancement(const comm_enhancement& value)  {
            m_comm_enhancement = value;
        }
        void set_num_opt_legs(const num_opt_legs& value)  {
            m_num_opt_legs = value;
        }
        void set_spread_class(const spread_class& value)  {
            m_spread_class = value;
        }
        void set_spread_flavor(const spread_flavor& value)  {
            m_spread_flavor = value;
        }
        void set_contains_hedge(const contains_hedge& value)  {
            m_contains_hedge = value;
        }
        void set_contains_flex(const contains_flex& value)  {
            m_contains_flex = value;
        }
        void set_contains_multi_hedge(const contains_multi_hedge& value)  {
            m_contains_multi_hedge = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_net_de(const net_de& value)  {
            m_net_de = value;
        }
        void set_net_ga(const net_ga& value)  {
            m_net_ga = value;
        }
        void set_net_th(const net_th& value)  {
            m_net_th = value;
        }
        void set_net_ve(const net_ve& value)  {
            m_net_ve = value;
        }
        void set_pkg_surf_prc(const pkg_surf_prc& value)  {
            m_pkg_surf_prc = value;
        }
        void set_pkg_bid_prc(const pkg_bid_prc& value)  {
            m_pkg_bid_prc = value;
        }
        void set_pkg_ask_prc(const pkg_ask_prc& value)  {
            m_pkg_ask_prc = value;
        }
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_price2(const prt_price2& value)  {
            m_prt_price2 = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_size2(const prt_size2& value)  {
            m_prt_size2 = value;
        }
        void set_prt_time(const prt_time& value)  {
            m_prt_time = value;
        }
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_prt_ubid(const prt_ubid& value)  {
            m_prt_ubid = value;
        }
        void set_prt_uask(const prt_uask& value)  {
            m_prt_uask = value;
        }
        void set_prt_uprc(const prt_uprc& value)  {
            m_prt_uprc = value;
        }
        void set_prt_surf_vol(const prt_surf_vol& value)  {
            m_prt_surf_vol = value;
        }
        void set_prt_surf_prc(const prt_surf_prc& value)  {
            m_prt_surf_prc = value;
        }
        void set_bid_prc(const bid_prc& value)  {
            m_bid_prc = value;
        }
        void set_bid_sz(const bid_sz& value)  {
            m_bid_sz = value;
        }
        void set_bid_mask(const bid_mask& value)  {
            m_bid_mask = value;
        }
        void set_ask_prc(const ask_prc& value)  {
            m_ask_prc = value;
        }
        void set_ask_sz(const ask_sz& value)  {
            m_ask_sz = value;
        }
        void set_ask_mask(const ask_mask& value)  {
            m_ask_mask = value;
        }
        void set_exch_bid_prc(const exch_bid_prc& value)  {
            m_exch_bid_prc = value;
        }
        void set_exch_bid_sz(const exch_bid_sz& value)  {
            m_exch_bid_sz = value;
        }
        void set_exch_ask_prc(const exch_ask_prc& value)  {
            m_exch_ask_prc = value;
        }
        void set_exch_ask_sz(const exch_ask_sz& value)  {
            m_exch_ask_sz = value;
        }
        void set_u_prc1m(const u_prc1m& value)  {
            m_u_prc1m = value;
        }
        void set_bid_prc1m(const bid_prc1m& value)  {
            m_bid_prc1m = value;
        }
        void set_ask_prc1m(const ask_prc1m& value)  {
            m_ask_prc1m = value;
        }
        void set_surf_vol1m(const surf_vol1m& value)  {
            m_surf_vol1m = value;
        }
        void set_surf_prc1m(const surf_prc1m& value)  {
            m_surf_prc1m = value;
        }
        void set_u_prc10m(const u_prc10m& value)  {
            m_u_prc10m = value;
        }
        void set_bid_prc10m(const bid_prc10m& value)  {
            m_bid_prc10m = value;
        }
        void set_ask_prc10m(const ask_prc10m& value)  {
            m_ask_prc10m = value;
        }
        void set_surf_vol10m(const surf_vol10m& value)  {
            m_surf_vol10m = value;
        }
        void set_surf_prc10m(const surf_prc10m& value)  {
            m_surf_prc10m = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const is_test_auction & value) {
            set_is_test_auction(value);
        }
        void set(const notice_time & value) {
            set_notice_time(value);
        }
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const auction_source & value) {
            set_auction_source(value);
        }
        void set(const industry & value) {
            set_industry(value);
        }
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const u_avg_daily_vlm & value) {
            set_u_avg_daily_vlm(value);
        }
        void set(const cust_side & value) {
            set_cust_side(value);
        }
        void set(const cust_qty & value) {
            set_cust_qty(value);
        }
        void set(const cust_prc & value) {
            set_cust_prc(value);
        }
        void set(const has_cust_prc & value) {
            set_has_cust_prc(value);
        }
        void set(const cust_firm_type & value) {
            set_cust_firm_type(value);
        }
        void set(const cust_agent_mpid & value) {
            set_cust_agent_mpid(value);
        }
        void set(const comm_enhancement & value) {
            set_comm_enhancement(value);
        }
        void set(const num_opt_legs & value) {
            set_num_opt_legs(value);
        }
        void set(const spread_class & value) {
            set_spread_class(value);
        }
        void set(const spread_flavor & value) {
            set_spread_flavor(value);
        }
        void set(const contains_hedge & value) {
            set_contains_hedge(value);
        }
        void set(const contains_flex & value) {
            set_contains_flex(value);
        }
        void set(const contains_multi_hedge & value) {
            set_contains_multi_hedge(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const net_de & value) {
            set_net_de(value);
        }
        void set(const net_ga & value) {
            set_net_ga(value);
        }
        void set(const net_th & value) {
            set_net_th(value);
        }
        void set(const net_ve & value) {
            set_net_ve(value);
        }
        void set(const pkg_surf_prc & value) {
            set_pkg_surf_prc(value);
        }
        void set(const pkg_bid_prc & value) {
            set_pkg_bid_prc(value);
        }
        void set(const pkg_ask_prc & value) {
            set_pkg_ask_prc(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_price2 & value) {
            set_prt_price2(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_size2 & value) {
            set_prt_size2(value);
        }
        void set(const prt_time & value) {
            set_prt_time(value);
        }
        void set(const prt_type & value) {
            set_prt_type(value);
        }
        void set(const prt_ubid & value) {
            set_prt_ubid(value);
        }
        void set(const prt_uask & value) {
            set_prt_uask(value);
        }
        void set(const prt_uprc & value) {
            set_prt_uprc(value);
        }
        void set(const prt_surf_vol & value) {
            set_prt_surf_vol(value);
        }
        void set(const prt_surf_prc & value) {
            set_prt_surf_prc(value);
        }
        void set(const bid_prc & value) {
            set_bid_prc(value);
        }
        void set(const bid_sz & value) {
            set_bid_sz(value);
        }
        void set(const bid_mask & value) {
            set_bid_mask(value);
        }
        void set(const ask_prc & value) {
            set_ask_prc(value);
        }
        void set(const ask_sz & value) {
            set_ask_sz(value);
        }
        void set(const ask_mask & value) {
            set_ask_mask(value);
        }
        void set(const exch_bid_prc & value) {
            set_exch_bid_prc(value);
        }
        void set(const exch_bid_sz & value) {
            set_exch_bid_sz(value);
        }
        void set(const exch_ask_prc & value) {
            set_exch_ask_prc(value);
        }
        void set(const exch_ask_sz & value) {
            set_exch_ask_sz(value);
        }
        void set(const u_prc1m & value) {
            set_u_prc1m(value);
        }
        void set(const bid_prc1m & value) {
            set_bid_prc1m(value);
        }
        void set(const ask_prc1m & value) {
            set_ask_prc1m(value);
        }
        void set(const surf_vol1m & value) {
            set_surf_vol1m(value);
        }
        void set(const surf_prc1m & value) {
            set_surf_prc1m(value);
        }
        void set(const u_prc10m & value) {
            set_u_prc10m(value);
        }
        void set(const bid_prc10m & value) {
            set_bid_prc10m(value);
        }
        void set(const ask_prc10m & value) {
            set_ask_prc10m(value);
        }
        void set(const surf_vol10m & value) {
            set_surf_vol10m(value);
        }
        void set(const surf_prc10m & value) {
            set_surf_prc10m(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const AuctionPrint & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_is_test_auction);
            set(value.m_notice_time);
            set(value.m_auction_type);
            set(value.m_auction_source);
            set(value.m_industry);
            set(value.m_symbol_type);
            set(value.m_u_avg_daily_vlm);
            set(value.m_cust_side);
            set(value.m_cust_qty);
            set(value.m_cust_prc);
            set(value.m_has_cust_prc);
            set(value.m_cust_firm_type);
            set(value.m_cust_agent_mpid);
            set(value.m_comm_enhancement);
            set(value.m_num_opt_legs);
            set(value.m_spread_class);
            set(value.m_spread_flavor);
            set(value.m_contains_hedge);
            set(value.m_contains_flex);
            set(value.m_contains_multi_hedge);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_net_de);
            set(value.m_net_ga);
            set(value.m_net_th);
            set(value.m_net_ve);
            set(value.m_pkg_surf_prc);
            set(value.m_pkg_bid_prc);
            set(value.m_pkg_ask_prc);
            set(value.m_prt_price);
            set(value.m_prt_price2);
            set(value.m_prt_size);
            set(value.m_prt_size2);
            set(value.m_prt_time);
            set(value.m_prt_type);
            set(value.m_prt_ubid);
            set(value.m_prt_uask);
            set(value.m_prt_uprc);
            set(value.m_prt_surf_vol);
            set(value.m_prt_surf_prc);
            set(value.m_bid_prc);
            set(value.m_bid_sz);
            set(value.m_bid_mask);
            set(value.m_ask_prc);
            set(value.m_ask_sz);
            set(value.m_ask_mask);
            set(value.m_exch_bid_prc);
            set(value.m_exch_bid_sz);
            set(value.m_exch_ask_prc);
            set(value.m_exch_ask_sz);
            set(value.m_u_prc1m);
            set(value.m_bid_prc1m);
            set(value.m_ask_prc1m);
            set(value.m_surf_vol1m);
            set(value.m_surf_prc1m);
            set(value.m_u_prc10m);
            set(value.m_bid_prc10m);
            set(value.m_ask_prc10m);
            set(value.m_surf_vol10m);
            set(value.m_surf_prc10m);
            set(value.m_timestamp);set_order_legs_list(value.m_order_legs);
        }

        AuctionPrint() {
            m__meta.set_message_type("AuctionPrint");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2485, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2485, length);
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
             *this = AuctionPrint{};
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
        bool IncludeNoticeTime() const {
            return (m_notice_time.time_since_epoch().count() != 0);
        }
        bool IncludeIndustry() const {
            return !(m_industry.empty());
        }
        bool IncludeUAvgDailyVlm() const {
            return !(m_u_avg_daily_vlm == 0.0);
        }
        bool IncludeCustQty() const {
            return !(m_cust_qty == 0);
        }
        bool IncludeCustPrc() const {
            return !(m_cust_prc == 0.0);
        }
        bool IncludeCustAgentMpid() const {
            return !(m_cust_agent_mpid.empty());
        }
        bool IncludeCommEnhancement() const {
            return !(m_comm_enhancement == 0.0);
        }
        bool IncludeNumOptLegs() const {
            return !(m_num_opt_legs == 0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeNetDe() const {
            return !(m_net_de == 0.0);
        }
        bool IncludeNetGa() const {
            return !(m_net_ga == 0.0);
        }
        bool IncludeNetTh() const {
            return !(m_net_th == 0.0);
        }
        bool IncludeNetVe() const {
            return !(m_net_ve == 0.0);
        }
        bool IncludePkgSurfPrc() const {
            return !(m_pkg_surf_prc == 0.0);
        }
        bool IncludePkgBidPrc() const {
            return !(m_pkg_bid_prc == 0.0);
        }
        bool IncludePkgAskPrc() const {
            return !(m_pkg_ask_prc == 0.0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtPrice2() const {
            return !(m_prt_price2 == 0.0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtSize2() const {
            return !(m_prt_size2 == 0);
        }
        bool IncludePrtTime() const {
            return (m_prt_time.time_since_epoch().count() != 0);
        }
        bool IncludePrtUbid() const {
            return !(m_prt_ubid == 0.0);
        }
        bool IncludePrtUask() const {
            return !(m_prt_uask == 0.0);
        }
        bool IncludePrtUprc() const {
            return !(m_prt_uprc == 0.0);
        }
        bool IncludePrtSurfVol() const {
            return !(m_prt_surf_vol == 0.0);
        }
        bool IncludePrtSurfPrc() const {
            return !(m_prt_surf_prc == 0.0);
        }
        bool IncludeBidPrc() const {
            return !(m_bid_prc == 0.0);
        }
        bool IncludeBidSz() const {
            return !(m_bid_sz == 0);
        }
        bool IncludeBidMask() const {
            return !(m_bid_mask == 0);
        }
        bool IncludeAskPrc() const {
            return !(m_ask_prc == 0.0);
        }
        bool IncludeAskSz() const {
            return !(m_ask_sz == 0);
        }
        bool IncludeAskMask() const {
            return !(m_ask_mask == 0);
        }
        bool IncludeExchBidPrc() const {
            return !(m_exch_bid_prc == 0.0);
        }
        bool IncludeExchBidSz() const {
            return !(m_exch_bid_sz == 0);
        }
        bool IncludeExchAskPrc() const {
            return !(m_exch_ask_prc == 0.0);
        }
        bool IncludeExchAskSz() const {
            return !(m_exch_ask_sz == 0);
        }
        bool IncludeUPrc1m() const {
            return !(m_u_prc1m == 0.0);
        }
        bool IncludeBidPrc1m() const {
            return !(m_bid_prc1m == 0.0);
        }
        bool IncludeAskPrc1m() const {
            return !(m_ask_prc1m == 0.0);
        }
        bool IncludeSurfVol1m() const {
            return !(m_surf_vol1m == 0.0);
        }
        bool IncludeSurfPrc1m() const {
            return !(m_surf_prc1m == 0.0);
        }
        bool IncludeUPrc10m() const {
            return !(m_u_prc10m == 0.0);
        }
        bool IncludeBidPrc10m() const {
            return !(m_bid_prc10m == 0.0);
        }
        bool IncludeAskPrc10m() const {
            return !(m_ask_prc10m == 0.0);
        }
        bool IncludeSurfVol10m() const {
            return !(m_surf_vol10m == 0.0);
        }
        bool IncludeSurfPrc10m() const {
            return !(m_surf_prc10m == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeOrderLegs() const {
            return (!m_order_legs.empty());
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(101, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeNoticeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(102, m_notice_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeIndustry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(111,m_industry);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_u_avg_daily_vlm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(114,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(116,m_cust_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(119,m_cust_agent_mpid);
            }
            if ( IncludeCommEnhancement()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(158,m_comm_enhancement);
            }
            if ( IncludeNumOptLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(105,m_num_opt_legs);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(192,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadClass>(m_spread_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_multi_hedge)));
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(159,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_u_ask);
            }
            if ( IncludeNetDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_net_de);
            }
            if ( IncludeNetGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(143,m_net_ga);
            }
            if ( IncludeNetTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(144,m_net_th);
            }
            if ( IncludeNetVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_net_ve);
            }
            if ( IncludePkgSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(161,m_pkg_surf_prc);
            }
            if ( IncludePkgBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(162,m_pkg_bid_prc);
            }
            if ( IncludePkgAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_pkg_ask_prc);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_prt_price);
            }
            if ( IncludePrtPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(122,m_prt_price2);
            }
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(123,m_prt_size);
            }
            if ( IncludePrtSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_prt_size2);
            }
            if ( IncludePrtTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(125, m_prt_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(128,m_prt_uask);
            }
            if ( IncludePrtUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(129,m_prt_uprc);
            }
            if ( IncludePrtSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_prt_surf_vol);
            }
            if ( IncludePrtSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(131,m_prt_surf_prc);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(132,m_bid_prc);
            }
            if ( IncludeBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_bid_sz);
            }
            if ( IncludeBidMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(134,m_bid_mask);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(135,m_ask_prc);
            }
            if ( IncludeAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_ask_sz);
            }
            if ( IncludeAskMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(137,m_ask_mask);
            }
            if ( IncludeExchBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(138,m_exch_bid_prc);
            }
            if ( IncludeExchBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_exch_bid_sz);
            }
            if ( IncludeExchAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(140,m_exch_ask_prc);
            }
            if ( IncludeExchAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(141,m_exch_ask_sz);
            }
            if ( IncludeUPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(146,m_u_prc1m);
            }
            if ( IncludeBidPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(147,m_bid_prc1m);
            }
            if ( IncludeAskPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_ask_prc1m);
            }
            if ( IncludeSurfVol1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(149,m_surf_vol1m);
            }
            if ( IncludeSurfPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(150,m_surf_prc1m);
            }
            if ( IncludeUPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_u_prc10m);
            }
            if ( IncludeBidPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(152,m_bid_prc10m);
            }
            if ( IncludeAskPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(153,m_ask_prc10m);
            }
            if ( IncludeSurfVol10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_surf_vol10m);
            }
            if ( IncludeSurfPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(155,m_surf_prc10m);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(156, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(164, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,101, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeNoticeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 102, m_notice_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeIndustry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,111,static_cast<string>(m_industry));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_u_avg_daily_vlm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,114,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,116,m_cust_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,119,static_cast<string>(m_cust_agent_mpid));
            }
            if ( IncludeCommEnhancement()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,158,m_comm_enhancement);
            }
            if ( IncludeNumOptLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,105,m_num_opt_legs);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,192,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadClass>(m_spread_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_multi_hedge)));
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,159,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_u_ask);
            }
            if ( IncludeNetDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_net_de);
            }
            if ( IncludeNetGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,143,m_net_ga);
            }
            if ( IncludeNetTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,144,m_net_th);
            }
            if ( IncludeNetVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_net_ve);
            }
            if ( IncludePkgSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,161,m_pkg_surf_prc);
            }
            if ( IncludePkgBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,162,m_pkg_bid_prc);
            }
            if ( IncludePkgAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_pkg_ask_prc);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_prt_price);
            }
            if ( IncludePrtPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,122,m_prt_price2);
            }
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,123,m_prt_size);
            }
            if ( IncludePrtSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_prt_size2);
            }
            if ( IncludePrtTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 125, m_prt_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,128,m_prt_uask);
            }
            if ( IncludePrtUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,129,m_prt_uprc);
            }
            if ( IncludePrtSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_prt_surf_vol);
            }
            if ( IncludePrtSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,131,m_prt_surf_prc);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,132,m_bid_prc);
            }
            if ( IncludeBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_bid_sz);
            }
            if ( IncludeBidMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,134,m_bid_mask);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,135,m_ask_prc);
            }
            if ( IncludeAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_ask_sz);
            }
            if ( IncludeAskMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,137,m_ask_mask);
            }
            if ( IncludeExchBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,138,m_exch_bid_prc);
            }
            if ( IncludeExchBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_exch_bid_sz);
            }
            if ( IncludeExchAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,140,m_exch_ask_prc);
            }
            if ( IncludeExchAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,141,m_exch_ask_sz);
            }
            if ( IncludeUPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,146,m_u_prc1m);
            }
            if ( IncludeBidPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,147,m_bid_prc1m);
            }
            if ( IncludeAskPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_ask_prc1m);
            }
            if ( IncludeSurfVol1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,149,m_surf_vol1m);
            }
            if ( IncludeSurfPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,150,m_surf_prc1m);
            }
            if ( IncludeUPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_u_prc10m);
            }
            if ( IncludeBidPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,152,m_bid_prc10m);
            }
            if ( IncludeAskPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,153,m_ask_prc10m);
            }
            if ( IncludeSurfVol10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_surf_vol10m);
            }
            if ( IncludeSurfPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,155,m_surf_prc10m);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 156, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 164, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                    case 101: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_test_auction = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_notice_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_industry = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_avg_daily_vlm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cust_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cust_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 117: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_cust_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cust_agent_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 158: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comm_enhancement = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 192: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_class = static_cast<spiderrock::protobuf::api::SpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_flavor = static_cast<spiderrock::protobuf::api::SpreadFlavor>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 110: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_multi_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 159: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 143: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 161: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 162: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_prt_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 126: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 147: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 149: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_vol1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 150: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 152: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 153: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_vol10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 155: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 156: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 164: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            order_legs item_order_legs;
                            item_order_legs.Decode(pos, pos+length);  
                            m_order_legs.emplace_back(item_order_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AuctionPrint::get<AuctionPrint::_meta>() const { return AuctionPrint::_meta{ m__meta}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::pkey>() const { return AuctionPrint::pkey{ m_pkey}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ticker>() const { return AuctionPrint::ticker{ m_ticker}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::trade_date>() const { return AuctionPrint::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::notice_time>() const { return m_notice_time; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::industry>() const { return m_industry; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::u_avg_daily_vlm>() const { return m_u_avg_daily_vlm; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_prc>() const { return m_cust_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::has_cust_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cust_prc)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_cust_firm_type)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_agent_mpid>() const { return m_cust_agent_mpid; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::comm_enhancement>() const { return m_comm_enhancement; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::num_opt_legs>() const { return m_num_opt_legs; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadClass>( m_spread_class)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::spread_flavor>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>( m_spread_flavor)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::contains_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_hedge)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::contains_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_flex)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::contains_multi_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_multi_hedge)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::u_bid>() const { return m_u_bid; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::u_ask>() const { return m_u_ask; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_de>() const { return m_net_de; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_ga>() const { return m_net_ga; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_th>() const { return m_net_th; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_ve>() const { return m_net_ve; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::pkg_surf_prc>() const { return m_pkg_surf_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::pkg_bid_prc>() const { return m_pkg_bid_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::pkg_ask_prc>() const { return m_pkg_ask_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_price>() const { return m_prt_price; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_price2>() const { return m_prt_price2; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_size>() const { return m_prt_size; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_size2>() const { return m_prt_size2; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_time>() const { return m_prt_time; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_prt_type)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_ubid>() const { return m_prt_ubid; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_uask>() const { return m_prt_uask; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_uprc>() const { return m_prt_uprc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_surf_vol>() const { return m_prt_surf_vol; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_surf_prc>() const { return m_prt_surf_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::bid_sz>() const { return m_bid_sz; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::bid_mask>() const { return m_bid_mask; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ask_sz>() const { return m_ask_sz; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ask_mask>() const { return m_ask_mask; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::exch_bid_prc>() const { return m_exch_bid_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::exch_bid_sz>() const { return m_exch_bid_sz; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::exch_ask_prc>() const { return m_exch_ask_prc; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::exch_ask_sz>() const { return m_exch_ask_sz; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::u_prc1m>() const { return m_u_prc1m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::bid_prc1m>() const { return m_bid_prc1m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ask_prc1m>() const { return m_ask_prc1m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::surf_vol1m>() const { return m_surf_vol1m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::surf_prc1m>() const { return m_surf_prc1m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::u_prc10m>() const { return m_u_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::bid_prc10m>() const { return m_bid_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ask_prc10m>() const { return m_ask_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::surf_vol10m>() const { return m_surf_vol10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::surf_prc10m>() const { return m_surf_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::order_legs>(int i) const { return AuctionPrint::order_legs{ get_order_legs(i)}; }
    template<> inline int AuctionPrint::count<AuctionPrint::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto AuctionPrint_PKey::get<AuctionPrint_PKey::notice_number>() const { return m_notice_number; }
    
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::sec_key>() const { return AuctionPrint_OrderLegs::sec_key{m_sec_key}; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ratio>() const { return m_ratio; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::und_per_cn>() const { return m_und_per_cn; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::point_value>() const { return m_point_value; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency));}
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::exp_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpiryType>(m_exp_type));}
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::years>() const { return m_years; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::rate>() const { return m_rate; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::t_vol>() const { return m_t_vol; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::s_vol>() const { return m_s_vol; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::s_div>() const { return m_s_div; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::s_prc>() const { return m_s_prc; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::de>() const { return m_de; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ga>() const { return m_ga; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::th>() const { return m_th; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ve>() const { return m_ve; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::s_vol_ok>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_s_vol_ok));}
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::bid>() const { return m_bid; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::bid_sz>() const { return m_bid_sz; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::bid_mask>() const { return m_bid_mask; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ask>() const { return m_ask; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ask_sz>() const { return m_ask_sz; }
    template<> inline const auto AuctionPrint_OrderLegs::get<AuctionPrint_OrderLegs::ask_mask>() const { return m_ask_mask; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrint_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionPrint_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrint_OrderLegs& m) {
        o << "\"sec_key\":{" << m.get<AuctionPrint_OrderLegs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<AuctionPrint_OrderLegs::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<AuctionPrint_OrderLegs::side>();
        o << ",\"ratio\":" << m.get<AuctionPrint_OrderLegs::ratio>();
        o << ",\"und_per_cn\":" << m.get<AuctionPrint_OrderLegs::und_per_cn>();
        o << ",\"point_value\":" << m.get<AuctionPrint_OrderLegs::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<AuctionPrint_OrderLegs::point_currency>();
        o << ",\"exp_type\":" << (int64_t)m.get<AuctionPrint_OrderLegs::exp_type>();
        o << ",\"years\":" << m.get<AuctionPrint_OrderLegs::years>();
        o << ",\"rate\":" << m.get<AuctionPrint_OrderLegs::rate>();
        o << ",\"atm_vol\":" << m.get<AuctionPrint_OrderLegs::atm_vol>();
        o << ",\"ddiv_pv\":" << m.get<AuctionPrint_OrderLegs::ddiv_pv>();
        o << ",\"t_vol\":" << m.get<AuctionPrint_OrderLegs::t_vol>();
        o << ",\"s_vol\":" << m.get<AuctionPrint_OrderLegs::s_vol>();
        o << ",\"s_div\":" << m.get<AuctionPrint_OrderLegs::s_div>();
        o << ",\"s_prc\":" << m.get<AuctionPrint_OrderLegs::s_prc>();
        o << ",\"de\":" << m.get<AuctionPrint_OrderLegs::de>();
        o << ",\"ga\":" << m.get<AuctionPrint_OrderLegs::ga>();
        o << ",\"th\":" << m.get<AuctionPrint_OrderLegs::th>();
        o << ",\"ve\":" << m.get<AuctionPrint_OrderLegs::ve>();
        o << ",\"s_vol_ok\":" << (int64_t)m.get<AuctionPrint_OrderLegs::s_vol_ok>();
        o << ",\"bid\":" << m.get<AuctionPrint_OrderLegs::bid>();
        o << ",\"bid_sz\":" << m.get<AuctionPrint_OrderLegs::bid_sz>();
        o << ",\"bid_mask\":" << m.get<AuctionPrint_OrderLegs::bid_mask>();
        o << ",\"ask\":" << m.get<AuctionPrint_OrderLegs::ask>();
        o << ",\"ask_sz\":" << m.get<AuctionPrint_OrderLegs::ask_sz>();
        o << ",\"ask_mask\":" << m.get<AuctionPrint_OrderLegs::ask_mask>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrint& m) {
        o << "\"_meta\":{" << m.get<AuctionPrint::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionPrint::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionPrint::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionPrint::trade_date>() << "}";
        o << ",\"is_test_auction\":" << (int64_t)m.get<AuctionPrint::is_test_auction>();
        {
            std::time_t tt = m.get<AuctionPrint::notice_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"notice_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionPrint::auction_type>();
        o << ",\"auction_source\":" << (int64_t)m.get<AuctionPrint::auction_source>();
        o << ",\"industry\":\"" << m.get<AuctionPrint::industry>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<AuctionPrint::symbol_type>();
        o << ",\"u_avg_daily_vlm\":" << m.get<AuctionPrint::u_avg_daily_vlm>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionPrint::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionPrint::cust_qty>();
        o << ",\"cust_prc\":" << m.get<AuctionPrint::cust_prc>();
        o << ",\"has_cust_prc\":" << (int64_t)m.get<AuctionPrint::has_cust_prc>();
        o << ",\"cust_firm_type\":" << (int64_t)m.get<AuctionPrint::cust_firm_type>();
        o << ",\"cust_agent_mpid\":\"" << m.get<AuctionPrint::cust_agent_mpid>() << "\"";
        o << ",\"comm_enhancement\":" << m.get<AuctionPrint::comm_enhancement>();
        o << ",\"num_opt_legs\":" << m.get<AuctionPrint::num_opt_legs>();
        o << ",\"spread_class\":" << (int64_t)m.get<AuctionPrint::spread_class>();
        o << ",\"spread_flavor\":" << (int64_t)m.get<AuctionPrint::spread_flavor>();
        o << ",\"contains_hedge\":" << (int64_t)m.get<AuctionPrint::contains_hedge>();
        o << ",\"contains_flex\":" << (int64_t)m.get<AuctionPrint::contains_flex>();
        o << ",\"contains_multi_hedge\":" << (int64_t)m.get<AuctionPrint::contains_multi_hedge>();
        o << ",\"u_bid\":" << m.get<AuctionPrint::u_bid>();
        o << ",\"u_ask\":" << m.get<AuctionPrint::u_ask>();
        o << ",\"net_de\":" << m.get<AuctionPrint::net_de>();
        o << ",\"net_ga\":" << m.get<AuctionPrint::net_ga>();
        o << ",\"net_th\":" << m.get<AuctionPrint::net_th>();
        o << ",\"net_ve\":" << m.get<AuctionPrint::net_ve>();
        o << ",\"pkg_surf_prc\":" << m.get<AuctionPrint::pkg_surf_prc>();
        o << ",\"pkg_bid_prc\":" << m.get<AuctionPrint::pkg_bid_prc>();
        o << ",\"pkg_ask_prc\":" << m.get<AuctionPrint::pkg_ask_prc>();
        o << ",\"prt_price\":" << m.get<AuctionPrint::prt_price>();
        o << ",\"prt_price2\":" << m.get<AuctionPrint::prt_price2>();
        o << ",\"prt_size\":" << m.get<AuctionPrint::prt_size>();
        o << ",\"prt_size2\":" << m.get<AuctionPrint::prt_size2>();
        {
            std::time_t tt = m.get<AuctionPrint::prt_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"prt_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"prt_type\":" << (int64_t)m.get<AuctionPrint::prt_type>();
        o << ",\"prt_ubid\":" << m.get<AuctionPrint::prt_ubid>();
        o << ",\"prt_uask\":" << m.get<AuctionPrint::prt_uask>();
        o << ",\"prt_uprc\":" << m.get<AuctionPrint::prt_uprc>();
        o << ",\"prt_surf_vol\":" << m.get<AuctionPrint::prt_surf_vol>();
        o << ",\"prt_surf_prc\":" << m.get<AuctionPrint::prt_surf_prc>();
        o << ",\"bid_prc\":" << m.get<AuctionPrint::bid_prc>();
        o << ",\"bid_sz\":" << m.get<AuctionPrint::bid_sz>();
        o << ",\"bid_mask\":" << m.get<AuctionPrint::bid_mask>();
        o << ",\"ask_prc\":" << m.get<AuctionPrint::ask_prc>();
        o << ",\"ask_sz\":" << m.get<AuctionPrint::ask_sz>();
        o << ",\"ask_mask\":" << m.get<AuctionPrint::ask_mask>();
        o << ",\"exch_bid_prc\":" << m.get<AuctionPrint::exch_bid_prc>();
        o << ",\"exch_bid_sz\":" << m.get<AuctionPrint::exch_bid_sz>();
        o << ",\"exch_ask_prc\":" << m.get<AuctionPrint::exch_ask_prc>();
        o << ",\"exch_ask_sz\":" << m.get<AuctionPrint::exch_ask_sz>();
        o << ",\"u_prc1m\":" << m.get<AuctionPrint::u_prc1m>();
        o << ",\"bid_prc1m\":" << m.get<AuctionPrint::bid_prc1m>();
        o << ",\"ask_prc1m\":" << m.get<AuctionPrint::ask_prc1m>();
        o << ",\"surf_vol1m\":" << m.get<AuctionPrint::surf_vol1m>();
        o << ",\"surf_prc1m\":" << m.get<AuctionPrint::surf_prc1m>();
        o << ",\"u_prc10m\":" << m.get<AuctionPrint::u_prc10m>();
        o << ",\"bid_prc10m\":" << m.get<AuctionPrint::bid_prc10m>();
        o << ",\"ask_prc10m\":" << m.get<AuctionPrint::ask_prc10m>();
        o << ",\"surf_vol10m\":" << m.get<AuctionPrint::surf_vol10m>();
        o << ",\"surf_prc10m\":" << m.get<AuctionPrint::surf_prc10m>();
        {
            std::time_t tt = m.get<AuctionPrint::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AuctionPrint::order_legs>(); ++i) {
                o << delim << m.get<AuctionPrint::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}