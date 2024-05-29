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

    #ifndef _short_code__GUARD__
    #define _short_code__GUARD__
    DECL_STRONG_TYPE(short_code, string);
    #endif//_short_code__GUARD__

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _auction_event__GUARD__
    #define _auction_event__GUARD__
    DECL_STRONG_TYPE(auction_event, spiderrock::protobuf::api::AuctionEvent);
    #endif//_auction_event__GUARD__

    #ifndef _src_auction_id__GUARD__
    #define _src_auction_id__GUARD__
    DECL_STRONG_TYPE(src_auction_id, string);
    #endif//_src_auction_id__GUARD__

    #ifndef _src_auction_type__GUARD__
    #define _src_auction_type__GUARD__
    DECL_STRONG_TYPE(src_auction_type, string);
    #endif//_src_auction_type__GUARD__

    #ifndef _auction_source__GUARD__
    #define _auction_source__GUARD__
    DECL_STRONG_TYPE(auction_source, spiderrock::protobuf::api::AuctionSource);
    #endif//_auction_source__GUARD__

    #ifndef _industry__GUARD__
    #define _industry__GUARD__
    DECL_STRONG_TYPE(industry, string);
    #endif//_industry__GUARD__

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

    #ifndef _cust_client_firm__GUARD__
    #define _cust_client_firm__GUARD__
    DECL_STRONG_TYPE(cust_client_firm, string);
    #endif//_cust_client_firm__GUARD__

    #ifndef _comm_enhancement__GUARD__
    #define _comm_enhancement__GUARD__
    DECL_STRONG_TYPE(comm_enhancement, float);
    #endif//_comm_enhancement__GUARD__

    #ifndef _cust_comm_paying__GUARD__
    #define _cust_comm_paying__GUARD__
    DECL_STRONG_TYPE(cust_comm_paying, spiderrock::protobuf::api::YesNo);
    #endif//_cust_comm_paying__GUARD__

    #ifndef _cust_qty_cond__GUARD__
    #define _cust_qty_cond__GUARD__
    DECL_STRONG_TYPE(cust_qty_cond, spiderrock::protobuf::api::CustQtyCond);
    #endif//_cust_qty_cond__GUARD__

    #ifndef _auction_duration__GUARD__
    #define _auction_duration__GUARD__
    DECL_STRONG_TYPE(auction_duration, int32);
    #endif//_auction_duration__GUARD__

    #ifndef _num_opt_legs__GUARD__
    #define _num_opt_legs__GUARD__
    DECL_STRONG_TYPE(num_opt_legs, int32);
    #endif//_num_opt_legs__GUARD__

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::ToolSpreadClass);
    #endif//_spread_class__GUARD__

    #ifndef _limit_type__SpdrLimitType__GUARD__
    #define _limit_type__SpdrLimitType__GUARD__
    DECL_STRONG_TYPE(limit_type__SpdrLimitType, spiderrock::protobuf::api::SpdrLimitType);
    #endif//_limit_type__SpdrLimitType__GUARD__

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

    #ifndef _pkg_theo_prc__GUARD__
    #define _pkg_theo_prc__GUARD__
    DECL_STRONG_TYPE(pkg_theo_prc, float);
    #endif//_pkg_theo_prc__GUARD__

    #ifndef _pkg_bid_prc__GUARD__
    #define _pkg_bid_prc__GUARD__
    DECL_STRONG_TYPE(pkg_bid_prc, float);
    #endif//_pkg_bid_prc__GUARD__

    #ifndef _pkg_ask_prc__GUARD__
    #define _pkg_ask_prc__GUARD__
    DECL_STRONG_TYPE(pkg_ask_prc, float);
    #endif//_pkg_ask_prc__GUARD__

    #ifndef _point_value__double__GUARD__
    #define _point_value__double__GUARD__
    DECL_STRONG_TYPE(point_value__double, double);
    #endif//_point_value__double__GUARD__

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

    #ifndef _include_srnetwork__GUARD__
    #define _include_srnetwork__GUARD__
    DECL_STRONG_TYPE(include_srnetwork, spiderrock::protobuf::api::InclExclDisclose);
    #endif//_include_srnetwork__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _incl_excl__GUARD__
    #define _incl_excl__GUARD__
    DECL_STRONG_TYPE(incl_excl, spiderrock::protobuf::api::InclExclDisclose);
    #endif//_incl_excl__GUARD__

    #ifndef _is_comm_paying__GUARD__
    #define _is_comm_paying__GUARD__
    DECL_STRONG_TYPE(is_comm_paying, spiderrock::protobuf::api::YesNo);
    #endif//_is_comm_paying__GUARD__

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__GUARD__
    #define _sec_type__GUARD__
    DECL_STRONG_TYPE(sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__GUARD__

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

    #ifndef _t_prc__GUARD__
    #define _t_prc__GUARD__
    DECL_STRONG_TYPE(t_prc, float);
    #endif//_t_prc__GUARD__

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

    #ifndef _o_bid__GUARD__
    #define _o_bid__GUARD__
    DECL_STRONG_TYPE(o_bid, float);
    #endif//_o_bid__GUARD__

    #ifndef _o_bid_sz__GUARD__
    #define _o_bid_sz__GUARD__
    DECL_STRONG_TYPE(o_bid_sz, int32);
    #endif//_o_bid_sz__GUARD__

    #ifndef _o_bid_mask__GUARD__
    #define _o_bid_mask__GUARD__
    DECL_STRONG_TYPE(o_bid_mask, uint32);
    #endif//_o_bid_mask__GUARD__

    #ifndef _o_ask__GUARD__
    #define _o_ask__GUARD__
    DECL_STRONG_TYPE(o_ask, float);
    #endif//_o_ask__GUARD__

    #ifndef _o_ask_sz__GUARD__
    #define _o_ask_sz__GUARD__
    DECL_STRONG_TYPE(o_ask_sz, int32);
    #endif//_o_ask_sz__GUARD__

    #ifndef _o_ask_mask__GUARD__
    #define _o_ask_mask__GUARD__
    DECL_STRONG_TYPE(o_ask_mask, uint32);
    #endif//_o_ask_mask__GUARD__

    
    class AuctionNotice_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }


        AuctionNotice_PKey() {}

        virtual ~AuctionNotice_PKey() {
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
    
    class AuctionNotice_DirectedCounterParty {
        public:
        //using statements for all types used in this class
        using client_firm = spiderrock::protobuf::api::client_firm;
        using incl_excl = spiderrock::protobuf::api::incl_excl;
        using is_comm_paying = spiderrock::protobuf::api::is_comm_paying;

        private:
        client_firm m_client_firm{};
        incl_excl m_incl_excl{};
        is_comm_paying m_is_comm_paying{};

        public:
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        incl_excl get_incl_excl() const {
            return m_incl_excl;
        }
        is_comm_paying get_is_comm_paying() const {
            return m_is_comm_paying;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_incl_excl(const incl_excl& value)  {
            m_incl_excl = value;
        }
        void set_is_comm_paying(const is_comm_paying& value)  {
            m_is_comm_paying = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice_DirectedCounterParty::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice_DirectedCounterParty::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const incl_excl & value) { set_incl_excl(value); }
        void set(const is_comm_paying & value) { set_is_comm_paying(value); }


        AuctionNotice_DirectedCounterParty() {}

        virtual ~AuctionNotice_DirectedCounterParty() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(319,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,319,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying)));
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
                    case 319: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 322: {m_incl_excl = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 325: {m_is_comm_paying = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class AuctionNotice_OrderLegs {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type;
        using side = spiderrock::protobuf::api::side;
        using ratio = spiderrock::protobuf::api::ratio__uint32;
        using und_per_cn = spiderrock::protobuf::api::und_per_cn;
        using exp_type = spiderrock::protobuf::api::exp_type;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__float;
        using t_vol = spiderrock::protobuf::api::t_vol;
        using t_prc = spiderrock::protobuf::api::t_prc;
        using s_vol = spiderrock::protobuf::api::s_vol__float;
        using s_div = spiderrock::protobuf::api::s_div;
        using s_prc = spiderrock::protobuf::api::s_prc;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using s_vol_ok = spiderrock::protobuf::api::s_vol_ok;
        using o_bid = spiderrock::protobuf::api::o_bid;
        using o_bid_sz = spiderrock::protobuf::api::o_bid_sz;
        using o_bid_mask = spiderrock::protobuf::api::o_bid_mask;
        using o_ask = spiderrock::protobuf::api::o_ask;
        using o_ask_sz = spiderrock::protobuf::api::o_ask_sz;
        using o_ask_mask = spiderrock::protobuf::api::o_ask_mask;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        ratio m_ratio{};
        und_per_cn m_und_per_cn{};
        exp_type m_exp_type{};
        years m_years{};
        rate m_rate{};
        atm_vol m_atm_vol{};
        ddiv_pv m_ddiv_pv{};
        t_vol m_t_vol{};
        t_prc m_t_prc{};
        s_vol m_s_vol{};
        s_div m_s_div{};
        s_prc m_s_prc{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        s_vol_ok m_s_vol_ok{};
        o_bid m_o_bid{};
        o_bid_sz m_o_bid_sz{};
        o_bid_mask m_o_bid_mask{};
        o_ask m_o_ask{};
        o_ask_sz m_o_ask_sz{};
        o_ask_mask m_o_ask_mask{};

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
        t_prc get_t_prc() const {
            return m_t_prc;
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
        o_bid get_o_bid() const {
            return m_o_bid;
        }
        o_bid_sz get_o_bid_sz() const {
            return m_o_bid_sz;
        }
        o_bid_mask get_o_bid_mask() const {
            return m_o_bid_mask;
        }
        o_ask get_o_ask() const {
            return m_o_ask;
        }
        o_ask_sz get_o_ask_sz() const {
            return m_o_ask_sz;
        }
        o_ask_mask get_o_ask_mask() const {
            return m_o_ask_mask;
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
        void set_t_prc(const t_prc& value)  {
            m_t_prc = value;
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
        void set_o_bid(const o_bid& value)  {
            m_o_bid = value;
        }
        void set_o_bid_sz(const o_bid_sz& value)  {
            m_o_bid_sz = value;
        }
        void set_o_bid_mask(const o_bid_mask& value)  {
            m_o_bid_mask = value;
        }
        void set_o_ask(const o_ask& value)  {
            m_o_ask = value;
        }
        void set_o_ask_sz(const o_ask_sz& value)  {
            m_o_ask_sz = value;
        }
        void set_o_ask_mask(const o_ask_mask& value)  {
            m_o_ask_mask = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const side & value) { set_side(value); }
        void set(const ratio & value) { set_ratio(value); }
        void set(const und_per_cn & value) { set_und_per_cn(value); }
        void set(const exp_type & value) { set_exp_type(value); }
        void set(const years & value) { set_years(value); }
        void set(const rate & value) { set_rate(value); }
        void set(const atm_vol & value) { set_atm_vol(value); }
        void set(const ddiv_pv & value) { set_ddiv_pv(value); }
        void set(const t_vol & value) { set_t_vol(value); }
        void set(const t_prc & value) { set_t_prc(value); }
        void set(const s_vol & value) { set_s_vol(value); }
        void set(const s_div & value) { set_s_div(value); }
        void set(const s_prc & value) { set_s_prc(value); }
        void set(const de & value) { set_de(value); }
        void set(const ga & value) { set_ga(value); }
        void set(const th & value) { set_th(value); }
        void set(const ve & value) { set_ve(value); }
        void set(const s_vol_ok & value) { set_s_vol_ok(value); }
        void set(const o_bid & value) { set_o_bid(value); }
        void set(const o_bid_sz & value) { set_o_bid_sz(value); }
        void set(const o_bid_mask & value) { set_o_bid_mask(value); }
        void set(const o_ask & value) { set_o_ask(value); }
        void set(const o_ask_sz & value) { set_o_ask_sz(value); }
        void set(const o_ask_mask & value) { set_o_ask_mask(value); }


        AuctionNotice_OrderLegs() {}

        virtual ~AuctionNotice_OrderLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_sec_key.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(226,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(235,m_ratio);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(238,m_und_per_cn);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpiryType>(m_exp_type)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_years);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_rate);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_atm_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_ddiv_pv);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_t_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_t_prc);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_s_vol);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_s_div);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_s_prc);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_de);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_ga);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_th);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_ve);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(283,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_s_vol_ok)));
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_o_bid);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(289,m_o_bid_sz);
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(292,m_o_bid_mask);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(295,m_o_ask);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(298,m_o_ask_sz);
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(301,m_o_ask_mask);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 226, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,232,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,235,m_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,238,m_und_per_cn);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpiryType>(m_exp_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_years);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_rate);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_atm_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_ddiv_pv);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_t_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_t_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_s_vol);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_s_div);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_s_prc);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_de);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_ga);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_th);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_ve);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,283,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_s_vol_ok)));
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_o_bid);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,289,m_o_bid_sz);
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,292,m_o_bid_mask);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,295,m_o_ask);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,298,m_o_ask_sz);
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,301,m_o_ask_mask);
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
                    case 226: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 229: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 232: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 235: {m_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 238: {m_und_per_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 241: {m_exp_type = static_cast<spiderrock::protobuf::api::ExpiryType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 244: {m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 247: {m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 250: {m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 253: {m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 256: {m_t_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 259: {m_t_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 262: {m_s_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 265: {m_s_div = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 268: {m_s_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 271: {m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 274: {m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 277: {m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 280: {m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 283: {m_s_vol_ok = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 286: {m_o_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 289: {m_o_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 292: {m_o_bid_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 295: {m_o_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 298: {m_o_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 301: {m_o_ask_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class AuctionNotice {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionNotice_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using short_code = spiderrock::protobuf::api::short_code;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_event = spiderrock::protobuf::api::auction_event;
        using src_auction_id = spiderrock::protobuf::api::src_auction_id;
        using src_auction_type = spiderrock::protobuf::api::src_auction_type;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using industry = spiderrock::protobuf::api::industry;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using u_avg_daily_vlm = spiderrock::protobuf::api::u_avg_daily_vlm;
        using cust_side = spiderrock::protobuf::api::cust_side;
        using cust_qty = spiderrock::protobuf::api::cust_qty;
        using cust_prc = spiderrock::protobuf::api::cust_prc;
        using has_cust_prc = spiderrock::protobuf::api::has_cust_prc;
        using cust_firm_type = spiderrock::protobuf::api::cust_firm_type;
        using cust_agent_mpid = spiderrock::protobuf::api::cust_agent_mpid;
        using cust_client_firm = spiderrock::protobuf::api::cust_client_firm;
        using comm_enhancement = spiderrock::protobuf::api::comm_enhancement;
        using cust_comm_paying = spiderrock::protobuf::api::cust_comm_paying;
        using cust_qty_cond = spiderrock::protobuf::api::cust_qty_cond;
        using auction_duration = spiderrock::protobuf::api::auction_duration;
        using num_opt_legs = spiderrock::protobuf::api::num_opt_legs;
        using spread_class = spiderrock::protobuf::api::spread_class;
        using limit_type = spiderrock::protobuf::api::limit_type__SpdrLimitType;
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
        using pkg_theo_prc = spiderrock::protobuf::api::pkg_theo_prc;
        using pkg_bid_prc = spiderrock::protobuf::api::pkg_bid_prc;
        using pkg_ask_prc = spiderrock::protobuf::api::pkg_ask_prc;
        using point_value = spiderrock::protobuf::api::point_value__double;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using include_srnetwork = spiderrock::protobuf::api::include_srnetwork;
        using directed_counter_party = spiderrock::protobuf::api::AuctionNotice_DirectedCounterParty;
        using order_legs = spiderrock::protobuf::api::AuctionNotice_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        is_test_auction m_is_test_auction{};
        short_code m_short_code{};
        auction_type m_auction_type{};
        auction_event m_auction_event{};
        src_auction_id m_src_auction_id{};
        src_auction_type m_src_auction_type{};
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
        cust_client_firm m_cust_client_firm{};
        comm_enhancement m_comm_enhancement{};
        cust_comm_paying m_cust_comm_paying{};
        cust_qty_cond m_cust_qty_cond{};
        auction_duration m_auction_duration{};
        num_opt_legs m_num_opt_legs{};
        spread_class m_spread_class{};
        limit_type m_limit_type{};
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
        pkg_theo_prc m_pkg_theo_prc{};
        pkg_bid_prc m_pkg_bid_prc{};
        pkg_ask_prc m_pkg_ask_prc{};
        point_value m_point_value{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};
        include_srnetwork m_include_srnetwork{};
        std::vector<directed_counter_party> m_directed_counter_party{};
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
        short_code get_short_code() const {
            return m_short_code;
        }		
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        auction_event get_auction_event() const {
            return m_auction_event;
        }		
        src_auction_id get_src_auction_id() const {
            return m_src_auction_id;
        }		
        src_auction_type get_src_auction_type() const {
            return m_src_auction_type;
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
        cust_client_firm get_cust_client_firm() const {
            return m_cust_client_firm;
        }		
        comm_enhancement get_comm_enhancement() const {
            return m_comm_enhancement;
        }		
        cust_comm_paying get_cust_comm_paying() const {
            return m_cust_comm_paying;
        }		
        cust_qty_cond get_cust_qty_cond() const {
            return m_cust_qty_cond;
        }		
        auction_duration get_auction_duration() const {
            return m_auction_duration;
        }		
        num_opt_legs get_num_opt_legs() const {
            return m_num_opt_legs;
        }		
        spread_class get_spread_class() const {
            return m_spread_class;
        }		
        limit_type get_limit_type() const {
            return m_limit_type;
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
        pkg_theo_prc get_pkg_theo_prc() const {
            return m_pkg_theo_prc;
        }		
        pkg_bid_prc get_pkg_bid_prc() const {
            return m_pkg_bid_prc;
        }		
        pkg_ask_prc get_pkg_ask_prc() const {
            return m_pkg_ask_prc;
        }		
        point_value get_point_value() const {
            return m_point_value;
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
        include_srnetwork get_include_srnetwork() const {
            return m_include_srnetwork;
        }
        const std::vector<directed_counter_party>& get_directed_counter_party_list() const {
            return m_directed_counter_party;
        }
        const directed_counter_party& get_directed_counter_party(const int i) const {
            return m_directed_counter_party.at(i);
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
        void set_short_code(const short_code& value)  {
            m_short_code = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_auction_event(const auction_event& value)  {
            m_auction_event = value;
        }
        void set_src_auction_id(const src_auction_id& value)  {
            m_src_auction_id = value;
        }
        void set_src_auction_type(const src_auction_type& value)  {
            m_src_auction_type = value;
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
        void set_cust_client_firm(const cust_client_firm& value)  {
            m_cust_client_firm = value;
        }
        void set_comm_enhancement(const comm_enhancement& value)  {
            m_comm_enhancement = value;
        }
        void set_cust_comm_paying(const cust_comm_paying& value)  {
            m_cust_comm_paying = value;
        }
        void set_cust_qty_cond(const cust_qty_cond& value)  {
            m_cust_qty_cond = value;
        }
        void set_auction_duration(const auction_duration& value)  {
            m_auction_duration = value;
        }
        void set_num_opt_legs(const num_opt_legs& value)  {
            m_num_opt_legs = value;
        }
        void set_spread_class(const spread_class& value)  {
            m_spread_class = value;
        }
        void set_limit_type(const limit_type& value)  {
            m_limit_type = value;
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
        void set_pkg_theo_prc(const pkg_theo_prc& value)  {
            m_pkg_theo_prc = value;
        }
        void set_pkg_bid_prc(const pkg_bid_prc& value)  {
            m_pkg_bid_prc = value;
        }
        void set_pkg_ask_prc(const pkg_ask_prc& value)  {
            m_pkg_ask_prc = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
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
        void set_include_srnetwork(const include_srnetwork& value)  {
            m_include_srnetwork = value;
        }
        void set_directed_counter_party_list(const std::vector<directed_counter_party>& list)  {
            m_directed_counter_party = list;
        }
        void add_directed_counter_party(const directed_counter_party& item) {
            m_directed_counter_party.emplace_back(item);
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNotice::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const short_code & value) {
            set_short_code(value);
        }
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const auction_event & value) {
            set_auction_event(value);
        }
        void set(const src_auction_id & value) {
            set_src_auction_id(value);
        }
        void set(const src_auction_type & value) {
            set_src_auction_type(value);
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
        void set(const cust_client_firm & value) {
            set_cust_client_firm(value);
        }
        void set(const comm_enhancement & value) {
            set_comm_enhancement(value);
        }
        void set(const cust_comm_paying & value) {
            set_cust_comm_paying(value);
        }
        void set(const cust_qty_cond & value) {
            set_cust_qty_cond(value);
        }
        void set(const auction_duration & value) {
            set_auction_duration(value);
        }
        void set(const num_opt_legs & value) {
            set_num_opt_legs(value);
        }
        void set(const spread_class & value) {
            set_spread_class(value);
        }
        void set(const limit_type & value) {
            set_limit_type(value);
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
        void set(const pkg_theo_prc & value) {
            set_pkg_theo_prc(value);
        }
        void set(const pkg_bid_prc & value) {
            set_pkg_bid_prc(value);
        }
        void set(const pkg_ask_prc & value) {
            set_pkg_ask_prc(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
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
        void set(const include_srnetwork & value) {
            set_include_srnetwork(value);
        }
        void set(const directed_counter_party & value) {
            add_directed_counter_party(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const AuctionNotice & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_is_test_auction);
            set(value.m_short_code);
            set(value.m_auction_type);
            set(value.m_auction_event);
            set(value.m_src_auction_id);
            set(value.m_src_auction_type);
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
            set(value.m_cust_client_firm);
            set(value.m_comm_enhancement);
            set(value.m_cust_comm_paying);
            set(value.m_cust_qty_cond);
            set(value.m_auction_duration);
            set(value.m_num_opt_legs);
            set(value.m_spread_class);
            set(value.m_limit_type);
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
            set(value.m_pkg_theo_prc);
            set(value.m_pkg_bid_prc);
            set(value.m_pkg_ask_prc);
            set(value.m_point_value);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
            set(value.m_include_srnetwork);set_directed_counter_party_list(value.m_directed_counter_party);set_order_legs_list(value.m_order_legs);
        }

        AuctionNotice() {
            m__meta.set_message_type("AuctionNotice");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2465, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2465, length);
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
             *this = AuctionNotice{};
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
        bool IncludeShortCode() const {
            return !(m_short_code.empty());
        }
        bool IncludeSrcAuctionId() const {
            return !(m_src_auction_id.empty());
        }
        bool IncludeSrcAuctionType() const {
            return !(m_src_auction_type.empty());
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
        bool IncludeCustClientFirm() const {
            return !(m_cust_client_firm.empty());
        }
        bool IncludeCommEnhancement() const {
            return !(m_comm_enhancement == 0.0);
        }
        bool IncludeAuctionDuration() const {
            return !(m_auction_duration == 0);
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
        bool IncludePkgTheoPrc() const {
            return !(m_pkg_theo_prc == 0.0);
        }
        bool IncludePkgBidPrc() const {
            return !(m_pkg_bid_prc == 0.0);
        }
        bool IncludePkgAskPrc() const {
            return !(m_pkg_ask_prc == 0.0);
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
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
        bool IncludeDirectedCounterParty() const {
            return (!m_directed_counter_party.empty());
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(103, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeShortCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_short_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>(m_auction_event)));
            if ( IncludeSrcAuctionId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_src_auction_id);
            }
            if ( IncludeSrcAuctionType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_src_auction_type);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeIndustry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_industry);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_u_avg_daily_vlm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_cust_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_cust_agent_mpid);
            }
            if ( IncludeCustClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_cust_client_firm);
            }
            if ( IncludeCommEnhancement()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_comm_enhancement);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cust_comm_paying)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CustQtyCond>(m_cust_qty_cond)));
            if ( IncludeAuctionDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_auction_duration);
            }
            if ( IncludeNumOptLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_num_opt_legs);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_multi_hedge)));
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_u_ask);
            }
            if ( IncludeNetDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_net_de);
            }
            if ( IncludeNetGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_net_ga);
            }
            if ( IncludeNetTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_net_th);
            }
            if ( IncludeNetVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_net_ve);
            }
            if ( IncludePkgSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_pkg_surf_prc);
            }
            if ( IncludePkgTheoPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_pkg_theo_prc);
            }
            if ( IncludePkgBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_pkg_bid_prc);
            }
            if ( IncludePkgAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_pkg_ask_prc);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(220,m_point_value);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(304,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(307,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(310, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
					totalSize += SRProtobufCPP::TagCodec::Size(316, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(223, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,103, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeShortCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_short_code));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>(m_auction_event)));
            if ( IncludeSrcAuctionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_src_auction_id));
            }
            if ( IncludeSrcAuctionType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_src_auction_type));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeIndustry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_industry));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_u_avg_daily_vlm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_cust_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_cust_agent_mpid));
            }
            if ( IncludeCustClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_cust_client_firm));
            }
            if ( IncludeCommEnhancement()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_comm_enhancement);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cust_comm_paying)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CustQtyCond>(m_cust_qty_cond)));
            if ( IncludeAuctionDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_auction_duration);
            }
            if ( IncludeNumOptLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_num_opt_legs);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_multi_hedge)));
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_u_ask);
            }
            if ( IncludeNetDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_net_de);
            }
            if ( IncludeNetGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_net_ga);
            }
            if ( IncludeNetTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_net_th);
            }
            if ( IncludeNetVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_net_ve);
            }
            if ( IncludePkgSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_pkg_surf_prc);
            }
            if ( IncludePkgTheoPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_pkg_theo_prc);
            }
            if ( IncludePkgBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_pkg_bid_prc);
            }
            if ( IncludePkgAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_pkg_ask_prc);
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,220,m_point_value);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,304,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,307,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 310, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 316, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 223, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_test_auction = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_short_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_event = static_cast<spiderrock::protobuf::api::AuctionEvent>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_auction_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_auction_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_industry = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_avg_daily_vlm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cust_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cust_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_cust_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cust_agent_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cust_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comm_enhancement = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_comm_paying = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_qty_cond = static_cast<spiderrock::protobuf::api::CustQtyCond>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_class = static_cast<spiderrock::protobuf::api::ToolSpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_flavor = static_cast<spiderrock::protobuf::api::SpreadFlavor>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_multi_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_theo_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 313: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_srnetwork = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            directed_counter_party item_directed_counter_party;
                            item_directed_counter_party.Decode(pos, pos+length);  
                            m_directed_counter_party.emplace_back(item_directed_counter_party);
                        }
                        break;
                    }
                    case 223: {
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

    template<> inline const auto AuctionNotice::get<AuctionNotice::_meta>() const { return AuctionNotice::_meta{ m__meta}; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::pkey>() const { return AuctionNotice::pkey{ m_pkey}; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::ticker>() const { return AuctionNotice::ticker{ m_ticker}; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::trade_date>() const { return AuctionNotice::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::short_code>() const { return m_short_code; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::auction_event>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>( m_auction_event)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::src_auction_id>() const { return m_src_auction_id; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::src_auction_type>() const { return m_src_auction_type; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::industry>() const { return m_industry; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::u_avg_daily_vlm>() const { return m_u_avg_daily_vlm; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_prc>() const { return m_cust_prc; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::has_cust_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cust_prc)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_cust_firm_type)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_agent_mpid>() const { return m_cust_agent_mpid; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_client_firm>() const { return m_cust_client_firm; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::comm_enhancement>() const { return m_comm_enhancement; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_comm_paying>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_cust_comm_paying)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::cust_qty_cond>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CustQtyCond>( m_cust_qty_cond)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::auction_duration>() const { return m_auction_duration; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::num_opt_legs>() const { return m_num_opt_legs; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>( m_spread_class)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_limit_type)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::spread_flavor>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>( m_spread_flavor)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::contains_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_hedge)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::contains_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_flex)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::contains_multi_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_multi_hedge)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::u_bid>() const { return m_u_bid; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::u_ask>() const { return m_u_ask; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::net_de>() const { return m_net_de; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::net_ga>() const { return m_net_ga; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::net_th>() const { return m_net_th; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::net_ve>() const { return m_net_ve; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::pkg_surf_prc>() const { return m_pkg_surf_prc; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::pkg_theo_prc>() const { return m_pkg_theo_prc; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::pkg_bid_prc>() const { return m_pkg_bid_prc; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::pkg_ask_prc>() const { return m_pkg_ask_prc; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::point_value>() const { return m_point_value; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionNotice::get<AuctionNotice::include_srnetwork>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>( m_include_srnetwork)); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::directed_counter_party>(int i) const { return AuctionNotice::directed_counter_party{ get_directed_counter_party(i)}; }
    template<> inline int AuctionNotice::count<AuctionNotice::directed_counter_party>() const { return static_cast<int>( m_directed_counter_party.size()); }
    template<> inline const auto AuctionNotice::get<AuctionNotice::order_legs>(int i) const { return AuctionNotice::order_legs{ get_order_legs(i)}; }
    template<> inline int AuctionNotice::count<AuctionNotice::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto AuctionNotice_PKey::get<AuctionNotice_PKey::notice_number>() const { return m_notice_number; }
    
    template<> inline const auto AuctionNotice_DirectedCounterParty::get<AuctionNotice_DirectedCounterParty::client_firm>() const { return m_client_firm; }
    template<> inline const auto AuctionNotice_DirectedCounterParty::get<AuctionNotice_DirectedCounterParty::incl_excl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl));}
    template<> inline const auto AuctionNotice_DirectedCounterParty::get<AuctionNotice_DirectedCounterParty::is_comm_paying>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying));}
    
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::sec_key>() const { return AuctionNotice_OrderLegs::sec_key{m_sec_key}; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::ratio>() const { return m_ratio; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::und_per_cn>() const { return m_und_per_cn; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::exp_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExpiryType>(m_exp_type));}
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::years>() const { return m_years; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::rate>() const { return m_rate; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::t_vol>() const { return m_t_vol; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::t_prc>() const { return m_t_prc; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::s_vol>() const { return m_s_vol; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::s_div>() const { return m_s_div; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::s_prc>() const { return m_s_prc; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::de>() const { return m_de; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::ga>() const { return m_ga; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::th>() const { return m_th; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::ve>() const { return m_ve; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::s_vol_ok>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_s_vol_ok));}
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::o_bid>() const { return m_o_bid; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::o_bid_sz>() const { return m_o_bid_sz; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::o_bid_mask>() const { return m_o_bid_mask; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::o_ask>() const { return m_o_ask; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::o_ask_sz>() const { return m_o_ask_sz; }
    template<> inline const auto AuctionNotice_OrderLegs::get<AuctionNotice_OrderLegs::o_ask_mask>() const { return m_o_ask_mask; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionNotice_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionNotice_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionNotice_DirectedCounterParty& m) {
        o << "\"client_firm\":\"" << m.get<AuctionNotice_DirectedCounterParty::client_firm>() << "\"";
        o << ",\"incl_excl\":" << (int64_t)m.get<AuctionNotice_DirectedCounterParty::incl_excl>();
        o << ",\"is_comm_paying\":" << (int64_t)m.get<AuctionNotice_DirectedCounterParty::is_comm_paying>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionNotice_OrderLegs& m) {
        o << "\"sec_key\":{" << m.get<AuctionNotice_OrderLegs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<AuctionNotice_OrderLegs::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<AuctionNotice_OrderLegs::side>();
        o << ",\"ratio\":" << m.get<AuctionNotice_OrderLegs::ratio>();
        o << ",\"und_per_cn\":" << m.get<AuctionNotice_OrderLegs::und_per_cn>();
        o << ",\"exp_type\":" << (int64_t)m.get<AuctionNotice_OrderLegs::exp_type>();
        o << ",\"years\":" << m.get<AuctionNotice_OrderLegs::years>();
        o << ",\"rate\":" << m.get<AuctionNotice_OrderLegs::rate>();
        o << ",\"atm_vol\":" << m.get<AuctionNotice_OrderLegs::atm_vol>();
        o << ",\"ddiv_pv\":" << m.get<AuctionNotice_OrderLegs::ddiv_pv>();
        o << ",\"t_vol\":" << m.get<AuctionNotice_OrderLegs::t_vol>();
        o << ",\"t_prc\":" << m.get<AuctionNotice_OrderLegs::t_prc>();
        o << ",\"s_vol\":" << m.get<AuctionNotice_OrderLegs::s_vol>();
        o << ",\"s_div\":" << m.get<AuctionNotice_OrderLegs::s_div>();
        o << ",\"s_prc\":" << m.get<AuctionNotice_OrderLegs::s_prc>();
        o << ",\"de\":" << m.get<AuctionNotice_OrderLegs::de>();
        o << ",\"ga\":" << m.get<AuctionNotice_OrderLegs::ga>();
        o << ",\"th\":" << m.get<AuctionNotice_OrderLegs::th>();
        o << ",\"ve\":" << m.get<AuctionNotice_OrderLegs::ve>();
        o << ",\"s_vol_ok\":" << (int64_t)m.get<AuctionNotice_OrderLegs::s_vol_ok>();
        o << ",\"o_bid\":" << m.get<AuctionNotice_OrderLegs::o_bid>();
        o << ",\"o_bid_sz\":" << m.get<AuctionNotice_OrderLegs::o_bid_sz>();
        o << ",\"o_bid_mask\":" << m.get<AuctionNotice_OrderLegs::o_bid_mask>();
        o << ",\"o_ask\":" << m.get<AuctionNotice_OrderLegs::o_ask>();
        o << ",\"o_ask_sz\":" << m.get<AuctionNotice_OrderLegs::o_ask_sz>();
        o << ",\"o_ask_mask\":" << m.get<AuctionNotice_OrderLegs::o_ask_mask>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionNotice& m) {
        o << "\"_meta\":{" << m.get<AuctionNotice::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionNotice::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionNotice::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionNotice::trade_date>() << "}";
        o << ",\"is_test_auction\":" << (int64_t)m.get<AuctionNotice::is_test_auction>();
        o << ",\"short_code\":\"" << m.get<AuctionNotice::short_code>() << "\"";
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionNotice::auction_type>();
        o << ",\"auction_event\":" << (int64_t)m.get<AuctionNotice::auction_event>();
        o << ",\"src_auction_id\":\"" << m.get<AuctionNotice::src_auction_id>() << "\"";
        o << ",\"src_auction_type\":\"" << m.get<AuctionNotice::src_auction_type>() << "\"";
        o << ",\"auction_source\":" << (int64_t)m.get<AuctionNotice::auction_source>();
        o << ",\"industry\":\"" << m.get<AuctionNotice::industry>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<AuctionNotice::symbol_type>();
        o << ",\"u_avg_daily_vlm\":" << m.get<AuctionNotice::u_avg_daily_vlm>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionNotice::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionNotice::cust_qty>();
        o << ",\"cust_prc\":" << m.get<AuctionNotice::cust_prc>();
        o << ",\"has_cust_prc\":" << (int64_t)m.get<AuctionNotice::has_cust_prc>();
        o << ",\"cust_firm_type\":" << (int64_t)m.get<AuctionNotice::cust_firm_type>();
        o << ",\"cust_agent_mpid\":\"" << m.get<AuctionNotice::cust_agent_mpid>() << "\"";
        o << ",\"cust_client_firm\":\"" << m.get<AuctionNotice::cust_client_firm>() << "\"";
        o << ",\"comm_enhancement\":" << m.get<AuctionNotice::comm_enhancement>();
        o << ",\"cust_comm_paying\":" << (int64_t)m.get<AuctionNotice::cust_comm_paying>();
        o << ",\"cust_qty_cond\":" << (int64_t)m.get<AuctionNotice::cust_qty_cond>();
        o << ",\"auction_duration\":" << m.get<AuctionNotice::auction_duration>();
        o << ",\"num_opt_legs\":" << m.get<AuctionNotice::num_opt_legs>();
        o << ",\"spread_class\":" << (int64_t)m.get<AuctionNotice::spread_class>();
        o << ",\"limit_type\":" << (int64_t)m.get<AuctionNotice::limit_type>();
        o << ",\"spread_flavor\":" << (int64_t)m.get<AuctionNotice::spread_flavor>();
        o << ",\"contains_hedge\":" << (int64_t)m.get<AuctionNotice::contains_hedge>();
        o << ",\"contains_flex\":" << (int64_t)m.get<AuctionNotice::contains_flex>();
        o << ",\"contains_multi_hedge\":" << (int64_t)m.get<AuctionNotice::contains_multi_hedge>();
        o << ",\"u_bid\":" << m.get<AuctionNotice::u_bid>();
        o << ",\"u_ask\":" << m.get<AuctionNotice::u_ask>();
        o << ",\"net_de\":" << m.get<AuctionNotice::net_de>();
        o << ",\"net_ga\":" << m.get<AuctionNotice::net_ga>();
        o << ",\"net_th\":" << m.get<AuctionNotice::net_th>();
        o << ",\"net_ve\":" << m.get<AuctionNotice::net_ve>();
        o << ",\"pkg_surf_prc\":" << m.get<AuctionNotice::pkg_surf_prc>();
        o << ",\"pkg_theo_prc\":" << m.get<AuctionNotice::pkg_theo_prc>();
        o << ",\"pkg_bid_prc\":" << m.get<AuctionNotice::pkg_bid_prc>();
        o << ",\"pkg_ask_prc\":" << m.get<AuctionNotice::pkg_ask_prc>();
        o << ",\"point_value\":" << m.get<AuctionNotice::point_value>();
        o << ",\"src_timestamp\":" << m.get<AuctionNotice::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<AuctionNotice::net_timestamp>();
        {
            std::time_t tt = m.get<AuctionNotice::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"include_srnetwork\":" << (int64_t)m.get<AuctionNotice::include_srnetwork>();
        o << ",\"directed_counter_party\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AuctionNotice::directed_counter_party>(); ++i) {
                o << delim << m.get<AuctionNotice::directed_counter_party>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AuctionNotice::order_legs>(); ++i) {
                o << delim << m.get<AuctionNotice::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}