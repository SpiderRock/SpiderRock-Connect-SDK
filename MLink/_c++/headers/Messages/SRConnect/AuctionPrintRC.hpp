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

    #ifndef _contains_flex__GUARD__
    #define _contains_flex__GUARD__
    DECL_STRONG_TYPE(contains_flex, spiderrock::protobuf::api::YesNo);
    #endif//_contains_flex__GUARD__

    #ifndef _root__GUARD__
    #define _root__GUARD__
    DECL_STRONG_TYPE(root, TickerKey);
    #endif//_root__GUARD__

    #ifndef _expiry__GUARD__
    #define _expiry__GUARD__
    DECL_STRONG_TYPE(expiry, DateKey);
    #endif//_expiry__GUARD__

    #ifndef _strike__GUARD__
    #define _strike__GUARD__
    DECL_STRONG_TYPE(strike, double);
    #endif//_strike__GUARD__

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

    #ifndef _comm_enhancement__GUARD__
    #define _comm_enhancement__GUARD__
    DECL_STRONG_TYPE(comm_enhancement, float);
    #endif//_comm_enhancement__GUARD__

    #ifndef _notice_ubid__GUARD__
    #define _notice_ubid__GUARD__
    DECL_STRONG_TYPE(notice_ubid, double);
    #endif//_notice_ubid__GUARD__

    #ifndef _notice_uask__GUARD__
    #define _notice_uask__GUARD__
    DECL_STRONG_TYPE(notice_uask, double);
    #endif//_notice_uask__GUARD__

    #ifndef _net_surf_prc__GUARD__
    #define _net_surf_prc__GUARD__
    DECL_STRONG_TYPE(net_surf_prc, float);
    #endif//_net_surf_prc__GUARD__

    #ifndef _i_days__double__GUARD__
    #define _i_days__double__GUARD__
    DECL_STRONG_TYPE(i_days__double, double);
    #endif//_i_days__double__GUARD__

    #ifndef _i_years__GUARD__
    #define _i_years__GUARD__
    DECL_STRONG_TYPE(i_years, double);
    #endif//_i_years__GUARD__

    #ifndef _money_rate__GUARD__
    #define _money_rate__GUARD__
    DECL_STRONG_TYPE(money_rate, double);
    #endif//_money_rate__GUARD__

    #ifndef _ddiv_pv__double__GUARD__
    #define _ddiv_pv__double__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__double, double);
    #endif//_ddiv_pv__double__GUARD__

    #ifndef _has_est_ddivs__GUARD__
    #define _has_est_ddivs__GUARD__
    DECL_STRONG_TYPE(has_est_ddivs, spiderrock::protobuf::api::YesNo);
    #endif//_has_est_ddivs__GUARD__

    #ifndef _s_vol__double__GUARD__
    #define _s_vol__double__GUARD__
    DECL_STRONG_TYPE(s_vol__double, double);
    #endif//_s_vol__double__GUARD__

    #ifndef _rc_eex_prem__double__GUARD__
    #define _rc_eex_prem__double__GUARD__
    DECL_STRONG_TYPE(rc_eex_prem__double, double);
    #endif//_rc_eex_prem__double__GUARD__

    #ifndef _strike_pv__double__GUARD__
    #define _strike_pv__double__GUARD__
    DECL_STRONG_TYPE(strike_pv__double, double);
    #endif//_strike_pv__double__GUARD__

    #ifndef _eff_stock_lend_pv__GUARD__
    #define _eff_stock_lend_pv__GUARD__
    DECL_STRONG_TYPE(eff_stock_lend_pv, double);
    #endif//_eff_stock_lend_pv__GUARD__

    #ifndef _eff_stock_rate__GUARD__
    #define _eff_stock_rate__GUARD__
    DECL_STRONG_TYPE(eff_stock_rate, double);
    #endif//_eff_stock_rate__GUARD__

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

    #ifndef _prt_surf_prc__GUARD__
    #define _prt_surf_prc__GUARD__
    DECL_STRONG_TYPE(prt_surf_prc, float);
    #endif//_prt_surf_prc__GUARD__

    #ifndef _prt_stock_lend_pv__GUARD__
    #define _prt_stock_lend_pv__GUARD__
    DECL_STRONG_TYPE(prt_stock_lend_pv, double);
    #endif//_prt_stock_lend_pv__GUARD__

    #ifndef _prt_stock_rate__GUARD__
    #define _prt_stock_rate__GUARD__
    DECL_STRONG_TYPE(prt_stock_rate, double);
    #endif//_prt_stock_rate__GUARD__

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

    #ifndef _surf_prc1m__GUARD__
    #define _surf_prc1m__GUARD__
    DECL_STRONG_TYPE(surf_prc1m, float);
    #endif//_surf_prc1m__GUARD__

    #ifndef _prt_stock_lend_pv1m__GUARD__
    #define _prt_stock_lend_pv1m__GUARD__
    DECL_STRONG_TYPE(prt_stock_lend_pv1m, double);
    #endif//_prt_stock_lend_pv1m__GUARD__

    #ifndef _prt_stock_rate1m__GUARD__
    #define _prt_stock_rate1m__GUARD__
    DECL_STRONG_TYPE(prt_stock_rate1m, double);
    #endif//_prt_stock_rate1m__GUARD__

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

    #ifndef _surf_prc10m__GUARD__
    #define _surf_prc10m__GUARD__
    DECL_STRONG_TYPE(surf_prc10m, float);
    #endif//_surf_prc10m__GUARD__

    #ifndef _prt_stock_lend_pv10m__GUARD__
    #define _prt_stock_lend_pv10m__GUARD__
    DECL_STRONG_TYPE(prt_stock_lend_pv10m, double);
    #endif//_prt_stock_lend_pv10m__GUARD__

    #ifndef _prt_stock_rate10m__GUARD__
    #define _prt_stock_rate10m__GUARD__
    DECL_STRONG_TYPE(prt_stock_rate10m, double);
    #endif//_prt_stock_rate10m__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    
    class AuctionPrintRC_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrintRC_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrintRC_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }


        AuctionPrintRC_PKey() {}

        virtual ~AuctionPrintRC_PKey() {
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
    

    class AuctionPrintRC {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionPrintRC_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using notice_time = spiderrock::protobuf::api::notice_time;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using contains_flex = spiderrock::protobuf::api::contains_flex;
        using root = spiderrock::protobuf::api::root;
        using expiry = spiderrock::protobuf::api::expiry;
        using strike = spiderrock::protobuf::api::strike;
        using industry = spiderrock::protobuf::api::industry;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using u_avg_daily_vlm = spiderrock::protobuf::api::u_avg_daily_vlm;
        using cust_side = spiderrock::protobuf::api::cust_side;
        using cust_qty = spiderrock::protobuf::api::cust_qty;
        using cust_prc = spiderrock::protobuf::api::cust_prc;
        using has_cust_prc = spiderrock::protobuf::api::has_cust_prc;
        using cust_firm_type = spiderrock::protobuf::api::cust_firm_type;
        using cust_agent_mpid = spiderrock::protobuf::api::cust_agent_mpid;
        using comm_enhancement = spiderrock::protobuf::api::comm_enhancement;
        using notice_ubid = spiderrock::protobuf::api::notice_ubid;
        using notice_uask = spiderrock::protobuf::api::notice_uask;
        using net_surf_prc = spiderrock::protobuf::api::net_surf_prc;
        using i_days = spiderrock::protobuf::api::i_days__double;
        using i_years = spiderrock::protobuf::api::i_years;
        using money_rate = spiderrock::protobuf::api::money_rate;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__double;
        using has_est_ddivs = spiderrock::protobuf::api::has_est_ddivs;
        using s_vol = spiderrock::protobuf::api::s_vol__double;
        using rc_eex_prem = spiderrock::protobuf::api::rc_eex_prem__double;
        using strike_pv = spiderrock::protobuf::api::strike_pv__double;
        using eff_stock_lend_pv = spiderrock::protobuf::api::eff_stock_lend_pv;
        using eff_stock_rate = spiderrock::protobuf::api::eff_stock_rate;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_price2 = spiderrock::protobuf::api::prt_price2;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_size2 = spiderrock::protobuf::api::prt_size2;
        using prt_time = spiderrock::protobuf::api::prt_time;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using prt_ubid = spiderrock::protobuf::api::prt_ubid;
        using prt_uask = spiderrock::protobuf::api::prt_uask;
        using prt_uprc = spiderrock::protobuf::api::prt_uprc;
        using prt_surf_prc = spiderrock::protobuf::api::prt_surf_prc;
        using prt_stock_lend_pv = spiderrock::protobuf::api::prt_stock_lend_pv;
        using prt_stock_rate = spiderrock::protobuf::api::prt_stock_rate;
        using u_prc1m = spiderrock::protobuf::api::u_prc1m;
        using bid_prc1m = spiderrock::protobuf::api::bid_prc1m;
        using ask_prc1m = spiderrock::protobuf::api::ask_prc1m;
        using surf_prc1m = spiderrock::protobuf::api::surf_prc1m;
        using prt_stock_lend_pv1m = spiderrock::protobuf::api::prt_stock_lend_pv1m;
        using prt_stock_rate1m = spiderrock::protobuf::api::prt_stock_rate1m;
        using u_prc10m = spiderrock::protobuf::api::u_prc10m;
        using bid_prc10m = spiderrock::protobuf::api::bid_prc10m;
        using ask_prc10m = spiderrock::protobuf::api::ask_prc10m;
        using surf_prc10m = spiderrock::protobuf::api::surf_prc10m;
        using prt_stock_lend_pv10m = spiderrock::protobuf::api::prt_stock_lend_pv10m;
        using prt_stock_rate10m = spiderrock::protobuf::api::prt_stock_rate10m;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        is_test_auction m_is_test_auction{};
        notice_time m_notice_time{};
        auction_type m_auction_type{};
        auction_source m_auction_source{};
        contains_flex m_contains_flex{};
        root m_root{};
        expiry m_expiry{};
        strike m_strike{};
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
        notice_ubid m_notice_ubid{};
        notice_uask m_notice_uask{};
        net_surf_prc m_net_surf_prc{};
        i_days m_i_days{};
        i_years m_i_years{};
        money_rate m_money_rate{};
        ddiv_pv m_ddiv_pv{};
        has_est_ddivs m_has_est_ddivs{};
        s_vol m_s_vol{};
        rc_eex_prem m_rc_eex_prem{};
        strike_pv m_strike_pv{};
        eff_stock_lend_pv m_eff_stock_lend_pv{};
        eff_stock_rate m_eff_stock_rate{};
        prt_price m_prt_price{};
        prt_price2 m_prt_price2{};
        prt_size m_prt_size{};
        prt_size2 m_prt_size2{};
        prt_time m_prt_time{};
        prt_type m_prt_type{};
        prt_ubid m_prt_ubid{};
        prt_uask m_prt_uask{};
        prt_uprc m_prt_uprc{};
        prt_surf_prc m_prt_surf_prc{};
        prt_stock_lend_pv m_prt_stock_lend_pv{};
        prt_stock_rate m_prt_stock_rate{};
        u_prc1m m_u_prc1m{};
        bid_prc1m m_bid_prc1m{};
        ask_prc1m m_ask_prc1m{};
        surf_prc1m m_surf_prc1m{};
        prt_stock_lend_pv1m m_prt_stock_lend_pv1m{};
        prt_stock_rate1m m_prt_stock_rate1m{};
        u_prc10m m_u_prc10m{};
        bid_prc10m m_bid_prc10m{};
        ask_prc10m m_ask_prc10m{};
        surf_prc10m m_surf_prc10m{};
        prt_stock_lend_pv10m m_prt_stock_lend_pv10m{};
        prt_stock_rate10m m_prt_stock_rate10m{};
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
        contains_flex get_contains_flex() const {
            return m_contains_flex;
        }		
        root get_root() const {
            return m_root;
        }		
        expiry get_expiry() const {
            return m_expiry;
        }		
        strike get_strike() const {
            return m_strike;
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
        notice_ubid get_notice_ubid() const {
            return m_notice_ubid;
        }		
        notice_uask get_notice_uask() const {
            return m_notice_uask;
        }		
        net_surf_prc get_net_surf_prc() const {
            return m_net_surf_prc;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        i_years get_i_years() const {
            return m_i_years;
        }		
        money_rate get_money_rate() const {
            return m_money_rate;
        }		
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        has_est_ddivs get_has_est_ddivs() const {
            return m_has_est_ddivs;
        }		
        s_vol get_s_vol() const {
            return m_s_vol;
        }		
        rc_eex_prem get_rc_eex_prem() const {
            return m_rc_eex_prem;
        }		
        strike_pv get_strike_pv() const {
            return m_strike_pv;
        }		
        eff_stock_lend_pv get_eff_stock_lend_pv() const {
            return m_eff_stock_lend_pv;
        }		
        eff_stock_rate get_eff_stock_rate() const {
            return m_eff_stock_rate;
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
        prt_surf_prc get_prt_surf_prc() const {
            return m_prt_surf_prc;
        }		
        prt_stock_lend_pv get_prt_stock_lend_pv() const {
            return m_prt_stock_lend_pv;
        }		
        prt_stock_rate get_prt_stock_rate() const {
            return m_prt_stock_rate;
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
        surf_prc1m get_surf_prc1m() const {
            return m_surf_prc1m;
        }		
        prt_stock_lend_pv1m get_prt_stock_lend_pv1m() const {
            return m_prt_stock_lend_pv1m;
        }		
        prt_stock_rate1m get_prt_stock_rate1m() const {
            return m_prt_stock_rate1m;
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
        surf_prc10m get_surf_prc10m() const {
            return m_surf_prc10m;
        }		
        prt_stock_lend_pv10m get_prt_stock_lend_pv10m() const {
            return m_prt_stock_lend_pv10m;
        }		
        prt_stock_rate10m get_prt_stock_rate10m() const {
            return m_prt_stock_rate10m;
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
        void set_contains_flex(const contains_flex& value)  {
            m_contains_flex = value;
        }
        void set_root(const root& value)  {
            m_root = value;
        }
        void set_expiry(const expiry& value)  {
            m_expiry = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
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
        void set_notice_ubid(const notice_ubid& value)  {
            m_notice_ubid = value;
        }
        void set_notice_uask(const notice_uask& value)  {
            m_notice_uask = value;
        }
        void set_net_surf_prc(const net_surf_prc& value)  {
            m_net_surf_prc = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_i_years(const i_years& value)  {
            m_i_years = value;
        }
        void set_money_rate(const money_rate& value)  {
            m_money_rate = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_has_est_ddivs(const has_est_ddivs& value)  {
            m_has_est_ddivs = value;
        }
        void set_s_vol(const s_vol& value)  {
            m_s_vol = value;
        }
        void set_rc_eex_prem(const rc_eex_prem& value)  {
            m_rc_eex_prem = value;
        }
        void set_strike_pv(const strike_pv& value)  {
            m_strike_pv = value;
        }
        void set_eff_stock_lend_pv(const eff_stock_lend_pv& value)  {
            m_eff_stock_lend_pv = value;
        }
        void set_eff_stock_rate(const eff_stock_rate& value)  {
            m_eff_stock_rate = value;
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
        void set_prt_surf_prc(const prt_surf_prc& value)  {
            m_prt_surf_prc = value;
        }
        void set_prt_stock_lend_pv(const prt_stock_lend_pv& value)  {
            m_prt_stock_lend_pv = value;
        }
        void set_prt_stock_rate(const prt_stock_rate& value)  {
            m_prt_stock_rate = value;
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
        void set_surf_prc1m(const surf_prc1m& value)  {
            m_surf_prc1m = value;
        }
        void set_prt_stock_lend_pv1m(const prt_stock_lend_pv1m& value)  {
            m_prt_stock_lend_pv1m = value;
        }
        void set_prt_stock_rate1m(const prt_stock_rate1m& value)  {
            m_prt_stock_rate1m = value;
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
        void set_surf_prc10m(const surf_prc10m& value)  {
            m_surf_prc10m = value;
        }
        void set_prt_stock_lend_pv10m(const prt_stock_lend_pv10m& value)  {
            m_prt_stock_lend_pv10m = value;
        }
        void set_prt_stock_rate10m(const prt_stock_rate10m& value)  {
            m_prt_stock_rate10m = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrintRC::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const contains_flex & value) {
            set_contains_flex(value);
        }
        void set(const root & value) {
            set_root(value);
        }
        void set(const expiry & value) {
            set_expiry(value);
        }
        void set(const strike & value) {
            set_strike(value);
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
        void set(const notice_ubid & value) {
            set_notice_ubid(value);
        }
        void set(const notice_uask & value) {
            set_notice_uask(value);
        }
        void set(const net_surf_prc & value) {
            set_net_surf_prc(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const i_years & value) {
            set_i_years(value);
        }
        void set(const money_rate & value) {
            set_money_rate(value);
        }
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const has_est_ddivs & value) {
            set_has_est_ddivs(value);
        }
        void set(const s_vol & value) {
            set_s_vol(value);
        }
        void set(const rc_eex_prem & value) {
            set_rc_eex_prem(value);
        }
        void set(const strike_pv & value) {
            set_strike_pv(value);
        }
        void set(const eff_stock_lend_pv & value) {
            set_eff_stock_lend_pv(value);
        }
        void set(const eff_stock_rate & value) {
            set_eff_stock_rate(value);
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
        void set(const prt_surf_prc & value) {
            set_prt_surf_prc(value);
        }
        void set(const prt_stock_lend_pv & value) {
            set_prt_stock_lend_pv(value);
        }
        void set(const prt_stock_rate & value) {
            set_prt_stock_rate(value);
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
        void set(const surf_prc1m & value) {
            set_surf_prc1m(value);
        }
        void set(const prt_stock_lend_pv1m & value) {
            set_prt_stock_lend_pv1m(value);
        }
        void set(const prt_stock_rate1m & value) {
            set_prt_stock_rate1m(value);
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
        void set(const surf_prc10m & value) {
            set_surf_prc10m(value);
        }
        void set(const prt_stock_lend_pv10m & value) {
            set_prt_stock_lend_pv10m(value);
        }
        void set(const prt_stock_rate10m & value) {
            set_prt_stock_rate10m(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const AuctionPrintRC & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_is_test_auction);
            set(value.m_notice_time);
            set(value.m_auction_type);
            set(value.m_auction_source);
            set(value.m_contains_flex);
            set(value.m_root);
            set(value.m_expiry);
            set(value.m_strike);
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
            set(value.m_notice_ubid);
            set(value.m_notice_uask);
            set(value.m_net_surf_prc);
            set(value.m_i_days);
            set(value.m_i_years);
            set(value.m_money_rate);
            set(value.m_ddiv_pv);
            set(value.m_has_est_ddivs);
            set(value.m_s_vol);
            set(value.m_rc_eex_prem);
            set(value.m_strike_pv);
            set(value.m_eff_stock_lend_pv);
            set(value.m_eff_stock_rate);
            set(value.m_prt_price);
            set(value.m_prt_price2);
            set(value.m_prt_size);
            set(value.m_prt_size2);
            set(value.m_prt_time);
            set(value.m_prt_type);
            set(value.m_prt_ubid);
            set(value.m_prt_uask);
            set(value.m_prt_uprc);
            set(value.m_prt_surf_prc);
            set(value.m_prt_stock_lend_pv);
            set(value.m_prt_stock_rate);
            set(value.m_u_prc1m);
            set(value.m_bid_prc1m);
            set(value.m_ask_prc1m);
            set(value.m_surf_prc1m);
            set(value.m_prt_stock_lend_pv1m);
            set(value.m_prt_stock_rate1m);
            set(value.m_u_prc10m);
            set(value.m_bid_prc10m);
            set(value.m_ask_prc10m);
            set(value.m_surf_prc10m);
            set(value.m_prt_stock_lend_pv10m);
            set(value.m_prt_stock_rate10m);
            set(value.m_timestamp);
        }

        AuctionPrintRC() {
            m__meta.set_message_type("AuctionPrintRC");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2486, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2486, length);
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
             *this = AuctionPrintRC{};
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
        bool IncludeRoot() const {
            return (m_root.ByteSizeLong() > 0);
        }
        bool IncludeExpiry() const {
            return (m_expiry.ByteSizeLong() > 0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
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
        bool IncludeNoticeUbid() const {
            return !(m_notice_ubid == 0.0);
        }
        bool IncludeNoticeUask() const {
            return !(m_notice_uask == 0.0);
        }
        bool IncludeNetSurfPrc() const {
            return !(m_net_surf_prc == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0.0);
        }
        bool IncludeIYears() const {
            return !(m_i_years == 0.0);
        }
        bool IncludeMoneyRate() const {
            return !(m_money_rate == 0.0);
        }
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludeSVol() const {
            return !(m_s_vol == 0.0);
        }
        bool IncludeRcEexPrem() const {
            return !(m_rc_eex_prem == 0.0);
        }
        bool IncludeStrikePv() const {
            return !(m_strike_pv == 0.0);
        }
        bool IncludeEffStockLendPv() const {
            return !(m_eff_stock_lend_pv == 0.0);
        }
        bool IncludeEffStockRate() const {
            return !(m_eff_stock_rate == 0.0);
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
        bool IncludePrtSurfPrc() const {
            return !(m_prt_surf_prc == 0.0);
        }
        bool IncludePrtStockLendPv() const {
            return !(m_prt_stock_lend_pv == 0.0);
        }
        bool IncludePrtStockRate() const {
            return !(m_prt_stock_rate == 0.0);
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
        bool IncludeSurfPrc1m() const {
            return !(m_surf_prc1m == 0.0);
        }
        bool IncludePrtStockLendPv1m() const {
            return !(m_prt_stock_lend_pv1m == 0.0);
        }
        bool IncludePrtStockRate1m() const {
            return !(m_prt_stock_rate1m == 0.0);
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
        bool IncludeSurfPrc10m() const {
            return !(m_surf_prc10m == 0.0);
        }
        bool IncludePrtStockLendPv10m() const {
            return !(m_prt_stock_lend_pv10m == 0.0);
        }
        bool IncludePrtStockRate10m() const {
            return !(m_prt_stock_rate10m == 0.0);
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(103, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeNoticeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(109, m_notice_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_root.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(121, tickerKeyLayout);
            }
            if ( IncludeExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(124, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_strike);
            }
            if ( IncludeIndustry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_industry);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_u_avg_daily_vlm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(142,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_cust_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_cust_agent_mpid);
            }
            if ( IncludeCommEnhancement()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_comm_enhancement);
            }
            if ( IncludeNoticeUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(160,m_notice_ubid);
            }
            if ( IncludeNoticeUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_notice_uask);
            }
            if ( IncludeNetSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_net_surf_prc);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(169,m_i_days);
            }
            if ( IncludeIYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(172,m_i_years);
            }
            if ( IncludeMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_money_rate);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_est_ddivs)));
            if ( IncludeSVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_s_vol);
            }
            if ( IncludeRcEexPrem()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(187,m_rc_eex_prem);
            }
            if ( IncludeStrikePv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_strike_pv);
            }
            if ( IncludeEffStockLendPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_eff_stock_lend_pv);
            }
            if ( IncludeEffStockRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_eff_stock_rate);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_prt_price);
            }
            if ( IncludePrtPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_prt_price2);
            }
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_prt_size);
            }
            if ( IncludePrtSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(208,m_prt_size2);
            }
            if ( IncludePrtTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(211, m_prt_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(217,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(220,m_prt_uask);
            }
            if ( IncludePrtUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(223,m_prt_uprc);
            }
            if ( IncludePrtSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_prt_surf_prc);
            }
            if ( IncludePrtStockLendPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(229,m_prt_stock_lend_pv);
            }
            if ( IncludePrtStockRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(232,m_prt_stock_rate);
            }
            if ( IncludeUPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_u_prc1m);
            }
            if ( IncludeBidPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_bid_prc1m);
            }
            if ( IncludeAskPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_ask_prc1m);
            }
            if ( IncludeSurfPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_surf_prc1m);
            }
            if ( IncludePrtStockLendPv1m()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(247,m_prt_stock_lend_pv1m);
            }
            if ( IncludePrtStockRate1m()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(250,m_prt_stock_rate1m);
            }
            if ( IncludeUPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_u_prc10m);
            }
            if ( IncludeBidPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_bid_prc10m);
            }
            if ( IncludeAskPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_ask_prc10m);
            }
            if ( IncludeSurfPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_surf_prc10m);
            }
            if ( IncludePrtStockLendPv10m()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(265,m_prt_stock_lend_pv10m);
            }
            if ( IncludePrtStockRate10m()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(268,m_prt_stock_rate10m);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(271, m_timestamp);
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
            if ( IncludeNoticeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 109, m_notice_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_root.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 121, tickerKeyLayout);
            }
            if ( IncludeExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,124, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_strike);
            }
            if ( IncludeIndustry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_industry));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_u_avg_daily_vlm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,142,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_cust_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_cust_agent_mpid));
            }
            if ( IncludeCommEnhancement()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_comm_enhancement);
            }
            if ( IncludeNoticeUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,160,m_notice_ubid);
            }
            if ( IncludeNoticeUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_notice_uask);
            }
            if ( IncludeNetSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_net_surf_prc);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,169,m_i_days);
            }
            if ( IncludeIYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,172,m_i_years);
            }
            if ( IncludeMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_money_rate);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_est_ddivs)));
            if ( IncludeSVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_s_vol);
            }
            if ( IncludeRcEexPrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,187,m_rc_eex_prem);
            }
            if ( IncludeStrikePv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_strike_pv);
            }
            if ( IncludeEffStockLendPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_eff_stock_lend_pv);
            }
            if ( IncludeEffStockRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_eff_stock_rate);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_prt_price);
            }
            if ( IncludePrtPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_prt_price2);
            }
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_prt_size);
            }
            if ( IncludePrtSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,208,m_prt_size2);
            }
            if ( IncludePrtTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 211, m_prt_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,217,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,220,m_prt_uask);
            }
            if ( IncludePrtUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,223,m_prt_uprc);
            }
            if ( IncludePrtSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_prt_surf_prc);
            }
            if ( IncludePrtStockLendPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,229,m_prt_stock_lend_pv);
            }
            if ( IncludePrtStockRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,232,m_prt_stock_rate);
            }
            if ( IncludeUPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_u_prc1m);
            }
            if ( IncludeBidPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_bid_prc1m);
            }
            if ( IncludeAskPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_ask_prc1m);
            }
            if ( IncludeSurfPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_surf_prc1m);
            }
            if ( IncludePrtStockLendPv1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,247,m_prt_stock_lend_pv1m);
            }
            if ( IncludePrtStockRate1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,250,m_prt_stock_rate1m);
            }
            if ( IncludeUPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_u_prc10m);
            }
            if ( IncludeBidPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_bid_prc10m);
            }
            if ( IncludeAskPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_ask_prc10m);
            }
            if ( IncludeSurfPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_surf_prc10m);
            }
            if ( IncludePrtStockLendPv10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,265,m_prt_stock_lend_pv10m);
            }
            if ( IncludePrtStockRate10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,268,m_prt_stock_rate10m);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 271, m_timestamp);
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_notice_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_root.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiry.set_year(dateKey.year());
                            m_expiry.set_month(dateKey.month());
                            m_expiry.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_industry = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_avg_daily_vlm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cust_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cust_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_cust_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cust_agent_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comm_enhancement = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_notice_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_notice_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_est_ddivs = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_s_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rc_eex_prem = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_stock_lend_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_eff_stock_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_prt_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_stock_lend_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_stock_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_stock_lend_pv1m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_stock_rate1m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_stock_lend_pv10m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_stock_rate10m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 271: {
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

    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::_meta>() const { return AuctionPrintRC::_meta{ m__meta}; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::pkey>() const { return AuctionPrintRC::pkey{ m_pkey}; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::ticker>() const { return AuctionPrintRC::ticker{ m_ticker}; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::trade_date>() const { return AuctionPrintRC::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::notice_time>() const { return m_notice_time; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::contains_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_flex)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::root>() const { return AuctionPrintRC::root{ m_root}; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::expiry>() const { return AuctionPrintRC::expiry{ m_expiry}; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::strike>() const { return m_strike; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::industry>() const { return m_industry; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::u_avg_daily_vlm>() const { return m_u_avg_daily_vlm; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::cust_prc>() const { return m_cust_prc; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::has_cust_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cust_prc)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::cust_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_cust_firm_type)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::cust_agent_mpid>() const { return m_cust_agent_mpid; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::comm_enhancement>() const { return m_comm_enhancement; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::notice_ubid>() const { return m_notice_ubid; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::notice_uask>() const { return m_notice_uask; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::net_surf_prc>() const { return m_net_surf_prc; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::i_days>() const { return m_i_days; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::i_years>() const { return m_i_years; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::money_rate>() const { return m_money_rate; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::has_est_ddivs>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_est_ddivs)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::s_vol>() const { return m_s_vol; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::rc_eex_prem>() const { return m_rc_eex_prem; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::strike_pv>() const { return m_strike_pv; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::eff_stock_lend_pv>() const { return m_eff_stock_lend_pv; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::eff_stock_rate>() const { return m_eff_stock_rate; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_price>() const { return m_prt_price; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_price2>() const { return m_prt_price2; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_size>() const { return m_prt_size; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_size2>() const { return m_prt_size2; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_time>() const { return m_prt_time; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_prt_type)); }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_ubid>() const { return m_prt_ubid; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_uask>() const { return m_prt_uask; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_uprc>() const { return m_prt_uprc; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_surf_prc>() const { return m_prt_surf_prc; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_stock_lend_pv>() const { return m_prt_stock_lend_pv; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_stock_rate>() const { return m_prt_stock_rate; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::u_prc1m>() const { return m_u_prc1m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::bid_prc1m>() const { return m_bid_prc1m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::ask_prc1m>() const { return m_ask_prc1m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::surf_prc1m>() const { return m_surf_prc1m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_stock_lend_pv1m>() const { return m_prt_stock_lend_pv1m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_stock_rate1m>() const { return m_prt_stock_rate1m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::u_prc10m>() const { return m_u_prc10m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::bid_prc10m>() const { return m_bid_prc10m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::ask_prc10m>() const { return m_ask_prc10m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::surf_prc10m>() const { return m_surf_prc10m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_stock_lend_pv10m>() const { return m_prt_stock_lend_pv10m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::prt_stock_rate10m>() const { return m_prt_stock_rate10m; }
    template<> inline const auto AuctionPrintRC::get<AuctionPrintRC::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionPrintRC_PKey::get<AuctionPrintRC_PKey::notice_number>() const { return m_notice_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrintRC_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionPrintRC_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrintRC& m) {
        o << "\"_meta\":{" << m.get<AuctionPrintRC::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionPrintRC::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionPrintRC::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionPrintRC::trade_date>() << "}";
        o << ",\"is_test_auction\":" << (int64_t)m.get<AuctionPrintRC::is_test_auction>();
        {
            std::time_t tt = m.get<AuctionPrintRC::notice_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"notice_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionPrintRC::auction_type>();
        o << ",\"auction_source\":" << (int64_t)m.get<AuctionPrintRC::auction_source>();
        o << ",\"contains_flex\":" << (int64_t)m.get<AuctionPrintRC::contains_flex>();
        o << ",\"root\":{" << m.get<AuctionPrintRC::root>() << "}";
        o << ",\"expiry\":{" << m.get<AuctionPrintRC::expiry>() << "}";
        o << ",\"strike\":" << m.get<AuctionPrintRC::strike>();
        o << ",\"industry\":\"" << m.get<AuctionPrintRC::industry>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<AuctionPrintRC::symbol_type>();
        o << ",\"u_avg_daily_vlm\":" << m.get<AuctionPrintRC::u_avg_daily_vlm>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionPrintRC::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionPrintRC::cust_qty>();
        o << ",\"cust_prc\":" << m.get<AuctionPrintRC::cust_prc>();
        o << ",\"has_cust_prc\":" << (int64_t)m.get<AuctionPrintRC::has_cust_prc>();
        o << ",\"cust_firm_type\":" << (int64_t)m.get<AuctionPrintRC::cust_firm_type>();
        o << ",\"cust_agent_mpid\":\"" << m.get<AuctionPrintRC::cust_agent_mpid>() << "\"";
        o << ",\"comm_enhancement\":" << m.get<AuctionPrintRC::comm_enhancement>();
        o << ",\"notice_ubid\":" << m.get<AuctionPrintRC::notice_ubid>();
        o << ",\"notice_uask\":" << m.get<AuctionPrintRC::notice_uask>();
        o << ",\"net_surf_prc\":" << m.get<AuctionPrintRC::net_surf_prc>();
        o << ",\"i_days\":" << m.get<AuctionPrintRC::i_days>();
        o << ",\"i_years\":" << m.get<AuctionPrintRC::i_years>();
        o << ",\"money_rate\":" << m.get<AuctionPrintRC::money_rate>();
        o << ",\"ddiv_pv\":" << m.get<AuctionPrintRC::ddiv_pv>();
        o << ",\"has_est_ddivs\":" << (int64_t)m.get<AuctionPrintRC::has_est_ddivs>();
        o << ",\"s_vol\":" << m.get<AuctionPrintRC::s_vol>();
        o << ",\"rc_eex_prem\":" << m.get<AuctionPrintRC::rc_eex_prem>();
        o << ",\"strike_pv\":" << m.get<AuctionPrintRC::strike_pv>();
        o << ",\"eff_stock_lend_pv\":" << m.get<AuctionPrintRC::eff_stock_lend_pv>();
        o << ",\"eff_stock_rate\":" << m.get<AuctionPrintRC::eff_stock_rate>();
        o << ",\"prt_price\":" << m.get<AuctionPrintRC::prt_price>();
        o << ",\"prt_price2\":" << m.get<AuctionPrintRC::prt_price2>();
        o << ",\"prt_size\":" << m.get<AuctionPrintRC::prt_size>();
        o << ",\"prt_size2\":" << m.get<AuctionPrintRC::prt_size2>();
        {
            std::time_t tt = m.get<AuctionPrintRC::prt_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"prt_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"prt_type\":" << (int64_t)m.get<AuctionPrintRC::prt_type>();
        o << ",\"prt_ubid\":" << m.get<AuctionPrintRC::prt_ubid>();
        o << ",\"prt_uask\":" << m.get<AuctionPrintRC::prt_uask>();
        o << ",\"prt_uprc\":" << m.get<AuctionPrintRC::prt_uprc>();
        o << ",\"prt_surf_prc\":" << m.get<AuctionPrintRC::prt_surf_prc>();
        o << ",\"prt_stock_lend_pv\":" << m.get<AuctionPrintRC::prt_stock_lend_pv>();
        o << ",\"prt_stock_rate\":" << m.get<AuctionPrintRC::prt_stock_rate>();
        o << ",\"u_prc1m\":" << m.get<AuctionPrintRC::u_prc1m>();
        o << ",\"bid_prc1m\":" << m.get<AuctionPrintRC::bid_prc1m>();
        o << ",\"ask_prc1m\":" << m.get<AuctionPrintRC::ask_prc1m>();
        o << ",\"surf_prc1m\":" << m.get<AuctionPrintRC::surf_prc1m>();
        o << ",\"prt_stock_lend_pv1m\":" << m.get<AuctionPrintRC::prt_stock_lend_pv1m>();
        o << ",\"prt_stock_rate1m\":" << m.get<AuctionPrintRC::prt_stock_rate1m>();
        o << ",\"u_prc10m\":" << m.get<AuctionPrintRC::u_prc10m>();
        o << ",\"bid_prc10m\":" << m.get<AuctionPrintRC::bid_prc10m>();
        o << ",\"ask_prc10m\":" << m.get<AuctionPrintRC::ask_prc10m>();
        o << ",\"surf_prc10m\":" << m.get<AuctionPrintRC::surf_prc10m>();
        o << ",\"prt_stock_lend_pv10m\":" << m.get<AuctionPrintRC::prt_stock_lend_pv10m>();
        o << ",\"prt_stock_rate10m\":" << m.get<AuctionPrintRC::prt_stock_rate10m>();
        {
            std::time_t tt = m.get<AuctionPrintRC::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}