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

    #ifndef _lo_strike__GUARD__
    #define _lo_strike__GUARD__
    DECL_STRONG_TYPE(lo_strike, double);
    #endif//_lo_strike__GUARD__

    #ifndef _hi_strike__GUARD__
    #define _hi_strike__GUARD__
    DECL_STRONG_TYPE(hi_strike, double);
    #endif//_hi_strike__GUARD__

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

    #ifndef _strike_pv__double__GUARD__
    #define _strike_pv__double__GUARD__
    DECL_STRONG_TYPE(strike_pv__double, double);
    #endif//_strike_pv__double__GUARD__

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

    #ifndef _prt_uprc__GUARD__
    #define _prt_uprc__GUARD__
    DECL_STRONG_TYPE(prt_uprc, double);
    #endif//_prt_uprc__GUARD__

    #ifndef _prt_surf_prc__GUARD__
    #define _prt_surf_prc__GUARD__
    DECL_STRONG_TYPE(prt_surf_prc, float);
    #endif//_prt_surf_prc__GUARD__

    #ifndef _prt_money_rate__GUARD__
    #define _prt_money_rate__GUARD__
    DECL_STRONG_TYPE(prt_money_rate, double);
    #endif//_prt_money_rate__GUARD__

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

    #ifndef _surf_rate1m__GUARD__
    #define _surf_rate1m__GUARD__
    DECL_STRONG_TYPE(surf_rate1m, double);
    #endif//_surf_rate1m__GUARD__

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

    #ifndef _surf_rate10m__GUARD__
    #define _surf_rate10m__GUARD__
    DECL_STRONG_TYPE(surf_rate10m, double);
    #endif//_surf_rate10m__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    
    class AuctionPrintBX_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrintBX_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrintBX_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }


        AuctionPrintBX_PKey() {}

        virtual ~AuctionPrintBX_PKey() {
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
    

    class AuctionPrintBX {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionPrintBX_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using notice_time = spiderrock::protobuf::api::notice_time;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using contains_flex = spiderrock::protobuf::api::contains_flex;
        using root = spiderrock::protobuf::api::root;
        using expiry = spiderrock::protobuf::api::expiry;
        using lo_strike = spiderrock::protobuf::api::lo_strike;
        using hi_strike = spiderrock::protobuf::api::hi_strike;
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
        using notice_ubid = spiderrock::protobuf::api::notice_ubid;
        using notice_uask = spiderrock::protobuf::api::notice_uask;
        using net_surf_prc = spiderrock::protobuf::api::net_surf_prc;
        using i_days = spiderrock::protobuf::api::i_days__double;
        using i_years = spiderrock::protobuf::api::i_years;
        using money_rate = spiderrock::protobuf::api::money_rate;
        using strike_pv = spiderrock::protobuf::api::strike_pv__double;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_price2 = spiderrock::protobuf::api::prt_price2;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_size2 = spiderrock::protobuf::api::prt_size2;
        using prt_time = spiderrock::protobuf::api::prt_time;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using prt_uprc = spiderrock::protobuf::api::prt_uprc;
        using prt_surf_prc = spiderrock::protobuf::api::prt_surf_prc;
        using prt_money_rate = spiderrock::protobuf::api::prt_money_rate;
        using u_prc1m = spiderrock::protobuf::api::u_prc1m;
        using bid_prc1m = spiderrock::protobuf::api::bid_prc1m;
        using ask_prc1m = spiderrock::protobuf::api::ask_prc1m;
        using surf_prc1m = spiderrock::protobuf::api::surf_prc1m;
        using surf_rate1m = spiderrock::protobuf::api::surf_rate1m;
        using u_prc10m = spiderrock::protobuf::api::u_prc10m;
        using bid_prc10m = spiderrock::protobuf::api::bid_prc10m;
        using ask_prc10m = spiderrock::protobuf::api::ask_prc10m;
        using surf_prc10m = spiderrock::protobuf::api::surf_prc10m;
        using surf_rate10m = spiderrock::protobuf::api::surf_rate10m;
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
        lo_strike m_lo_strike{};
        hi_strike m_hi_strike{};
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
        strike_pv m_strike_pv{};
        prt_price m_prt_price{};
        prt_price2 m_prt_price2{};
        prt_size m_prt_size{};
        prt_size2 m_prt_size2{};
        prt_time m_prt_time{};
        prt_type m_prt_type{};
        prt_uprc m_prt_uprc{};
        prt_surf_prc m_prt_surf_prc{};
        prt_money_rate m_prt_money_rate{};
        u_prc1m m_u_prc1m{};
        bid_prc1m m_bid_prc1m{};
        ask_prc1m m_ask_prc1m{};
        surf_prc1m m_surf_prc1m{};
        surf_rate1m m_surf_rate1m{};
        u_prc10m m_u_prc10m{};
        bid_prc10m m_bid_prc10m{};
        ask_prc10m m_ask_prc10m{};
        surf_prc10m m_surf_prc10m{};
        surf_rate10m m_surf_rate10m{};
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
        lo_strike get_lo_strike() const {
            return m_lo_strike;
        }		
        hi_strike get_hi_strike() const {
            return m_hi_strike;
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
        strike_pv get_strike_pv() const {
            return m_strike_pv;
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
        prt_uprc get_prt_uprc() const {
            return m_prt_uprc;
        }		
        prt_surf_prc get_prt_surf_prc() const {
            return m_prt_surf_prc;
        }		
        prt_money_rate get_prt_money_rate() const {
            return m_prt_money_rate;
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
        surf_rate1m get_surf_rate1m() const {
            return m_surf_rate1m;
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
        surf_rate10m get_surf_rate10m() const {
            return m_surf_rate10m;
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
        void set_lo_strike(const lo_strike& value)  {
            m_lo_strike = value;
        }
        void set_hi_strike(const hi_strike& value)  {
            m_hi_strike = value;
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
        void set_strike_pv(const strike_pv& value)  {
            m_strike_pv = value;
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
        void set_prt_uprc(const prt_uprc& value)  {
            m_prt_uprc = value;
        }
        void set_prt_surf_prc(const prt_surf_prc& value)  {
            m_prt_surf_prc = value;
        }
        void set_prt_money_rate(const prt_money_rate& value)  {
            m_prt_money_rate = value;
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
        void set_surf_rate1m(const surf_rate1m& value)  {
            m_surf_rate1m = value;
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
        void set_surf_rate10m(const surf_rate10m& value)  {
            m_surf_rate10m = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrintBX::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const lo_strike & value) {
            set_lo_strike(value);
        }
        void set(const hi_strike & value) {
            set_hi_strike(value);
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
        void set(const strike_pv & value) {
            set_strike_pv(value);
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
        void set(const prt_uprc & value) {
            set_prt_uprc(value);
        }
        void set(const prt_surf_prc & value) {
            set_prt_surf_prc(value);
        }
        void set(const prt_money_rate & value) {
            set_prt_money_rate(value);
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
        void set(const surf_rate1m & value) {
            set_surf_rate1m(value);
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
        void set(const surf_rate10m & value) {
            set_surf_rate10m(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const AuctionPrintBX & value) {
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
            set(value.m_lo_strike);
            set(value.m_hi_strike);
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
            set(value.m_strike_pv);
            set(value.m_prt_price);
            set(value.m_prt_price2);
            set(value.m_prt_size);
            set(value.m_prt_size2);
            set(value.m_prt_time);
            set(value.m_prt_type);
            set(value.m_prt_uprc);
            set(value.m_prt_surf_prc);
            set(value.m_prt_money_rate);
            set(value.m_u_prc1m);
            set(value.m_bid_prc1m);
            set(value.m_ask_prc1m);
            set(value.m_surf_prc1m);
            set(value.m_surf_rate1m);
            set(value.m_u_prc10m);
            set(value.m_bid_prc10m);
            set(value.m_ask_prc10m);
            set(value.m_surf_prc10m);
            set(value.m_surf_rate10m);
            set(value.m_timestamp);
        }

        AuctionPrintBX() {
            m__meta.set_message_type("AuctionPrintBX");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2488, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2488, length);
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
             *this = AuctionPrintBX{};
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
        bool IncludeLoStrike() const {
            return !(m_lo_strike == 0.0);
        }
        bool IncludeHiStrike() const {
            return !(m_hi_strike == 0.0);
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
        bool IncludeStrikePv() const {
            return !(m_strike_pv == 0.0);
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
        bool IncludePrtUprc() const {
            return !(m_prt_uprc == 0.0);
        }
        bool IncludePrtSurfPrc() const {
            return !(m_prt_surf_prc == 0.0);
        }
        bool IncludePrtMoneyRate() const {
            return !(m_prt_money_rate == 0.0);
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
        bool IncludeSurfRate1m() const {
            return !(m_surf_rate1m == 0.0);
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
        bool IncludeSurfRate10m() const {
            return !(m_surf_rate10m == 0.0);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(101, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeNoticeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(103, m_notice_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root{};
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(107, tickerKeyLayout_root);
            }
            if ( IncludeExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(108, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeLoStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_lo_strike);
            }
            if ( IncludeHiStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(110,m_hi_strike);
            }
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
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_comm_enhancement);
            }
            if ( IncludeNoticeUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_notice_ubid);
            }
            if ( IncludeNoticeUask()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(122,m_notice_uask);
            }
            if ( IncludeNetSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(123,m_net_surf_prc);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_i_days);
            }
            if ( IncludeIYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(125,m_i_years);
            }
            if ( IncludeMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(126,m_money_rate);
            }
            if ( IncludeStrikePv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_strike_pv);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(128,m_prt_price);
            }
            if ( IncludePrtPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(129,m_prt_price2);
            }
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_prt_size);
            }
            if ( IncludePrtSize2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(131,m_prt_size2);
            }
            if ( IncludePrtTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(132, m_prt_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(134,m_prt_uprc);
            }
            if ( IncludePrtSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(135,m_prt_surf_prc);
            }
            if ( IncludePrtMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_prt_money_rate);
            }
            if ( IncludeUPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(137,m_u_prc1m);
            }
            if ( IncludeBidPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(138,m_bid_prc1m);
            }
            if ( IncludeAskPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_ask_prc1m);
            }
            if ( IncludeSurfPrc1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(140,m_surf_prc1m);
            }
            if ( IncludeSurfRate1m()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(141,m_surf_rate1m);
            }
            if ( IncludeUPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_u_prc10m);
            }
            if ( IncludeBidPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(143,m_bid_prc10m);
            }
            if ( IncludeAskPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(144,m_ask_prc10m);
            }
            if ( IncludeSurfPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_surf_prc10m);
            }
            if ( IncludeSurfRate10m()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(146,m_surf_rate10m);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(147, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            if ( IncludeNoticeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 103, m_notice_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            if ( IncludeRoot()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_root{};
                m_root.setCodecTickerKey(tickerKeyLayout_root);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 107, tickerKeyLayout_root);
            }
            if ( IncludeExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,108, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeLoStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_lo_strike);
            }
            if ( IncludeHiStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,110,m_hi_strike);
            }
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
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_comm_enhancement);
            }
            if ( IncludeNoticeUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_notice_ubid);
            }
            if ( IncludeNoticeUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,122,m_notice_uask);
            }
            if ( IncludeNetSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,123,m_net_surf_prc);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_i_days);
            }
            if ( IncludeIYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,125,m_i_years);
            }
            if ( IncludeMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,126,m_money_rate);
            }
            if ( IncludeStrikePv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_strike_pv);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,128,m_prt_price);
            }
            if ( IncludePrtPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,129,m_prt_price2);
            }
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_prt_size);
            }
            if ( IncludePrtSize2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,131,m_prt_size2);
            }
            if ( IncludePrtTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 132, m_prt_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludePrtUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,134,m_prt_uprc);
            }
            if ( IncludePrtSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,135,m_prt_surf_prc);
            }
            if ( IncludePrtMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_prt_money_rate);
            }
            if ( IncludeUPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,137,m_u_prc1m);
            }
            if ( IncludeBidPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,138,m_bid_prc1m);
            }
            if ( IncludeAskPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_ask_prc1m);
            }
            if ( IncludeSurfPrc1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,140,m_surf_prc1m);
            }
            if ( IncludeSurfRate1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,141,m_surf_rate1m);
            }
            if ( IncludeUPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_u_prc10m);
            }
            if ( IncludeBidPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,143,m_bid_prc10m);
            }
            if ( IncludeAskPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,144,m_ask_prc10m);
            }
            if ( IncludeSurfPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_surf_prc10m);
            }
            if ( IncludeSurfRate10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,146,m_surf_rate10m);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 147, m_timestamp);
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
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_test_auction = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_notice_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 104: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 105: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_root.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiry.set_year(dateKey.year());
                            m_expiry.set_month(dateKey.month());
                            m_expiry.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_lo_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_hi_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
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
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comm_enhancement = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_notice_ubid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_notice_uask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_prt_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_prc1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_surf_rate1m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 143: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_surf_rate10m = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 147: {
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

    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::_meta>() const { return AuctionPrintBX::_meta{ m__meta}; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::pkey>() const { return AuctionPrintBX::pkey{ m_pkey}; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::ticker>() const { return AuctionPrintBX::ticker{ m_ticker}; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::trade_date>() const { return AuctionPrintBX::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::notice_time>() const { return m_notice_time; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::contains_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_flex)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::root>() const { return AuctionPrintBX::root{ m_root}; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::expiry>() const { return AuctionPrintBX::expiry{ m_expiry}; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::lo_strike>() const { return m_lo_strike; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::hi_strike>() const { return m_hi_strike; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::industry>() const { return m_industry; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::u_avg_daily_vlm>() const { return m_u_avg_daily_vlm; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::cust_prc>() const { return m_cust_prc; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::has_cust_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cust_prc)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::cust_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_cust_firm_type)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::cust_agent_mpid>() const { return m_cust_agent_mpid; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::comm_enhancement>() const { return m_comm_enhancement; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::notice_ubid>() const { return m_notice_ubid; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::notice_uask>() const { return m_notice_uask; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::net_surf_prc>() const { return m_net_surf_prc; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::i_days>() const { return m_i_days; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::i_years>() const { return m_i_years; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::money_rate>() const { return m_money_rate; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::strike_pv>() const { return m_strike_pv; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_price>() const { return m_prt_price; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_price2>() const { return m_prt_price2; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_size>() const { return m_prt_size; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_size2>() const { return m_prt_size2; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_time>() const { return m_prt_time; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_prt_type)); }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_uprc>() const { return m_prt_uprc; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_surf_prc>() const { return m_prt_surf_prc; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::prt_money_rate>() const { return m_prt_money_rate; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::u_prc1m>() const { return m_u_prc1m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::bid_prc1m>() const { return m_bid_prc1m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::ask_prc1m>() const { return m_ask_prc1m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::surf_prc1m>() const { return m_surf_prc1m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::surf_rate1m>() const { return m_surf_rate1m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::u_prc10m>() const { return m_u_prc10m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::bid_prc10m>() const { return m_bid_prc10m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::ask_prc10m>() const { return m_ask_prc10m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::surf_prc10m>() const { return m_surf_prc10m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::surf_rate10m>() const { return m_surf_rate10m; }
    template<> inline const auto AuctionPrintBX::get<AuctionPrintBX::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionPrintBX_PKey::get<AuctionPrintBX_PKey::notice_number>() const { return m_notice_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrintBX_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionPrintBX_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrintBX& m) {
        o << "\"_meta\":{" << m.get<AuctionPrintBX::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionPrintBX::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionPrintBX::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionPrintBX::trade_date>() << "}";
        o << ",\"is_test_auction\":" << (int64_t)m.get<AuctionPrintBX::is_test_auction>();
        {
            std::time_t tt = m.get<AuctionPrintBX::notice_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"notice_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionPrintBX::auction_type>();
        o << ",\"auction_source\":" << (int64_t)m.get<AuctionPrintBX::auction_source>();
        o << ",\"contains_flex\":" << (int64_t)m.get<AuctionPrintBX::contains_flex>();
        o << ",\"root\":{" << m.get<AuctionPrintBX::root>() << "}";
        o << ",\"expiry\":{" << m.get<AuctionPrintBX::expiry>() << "}";
        o << ",\"lo_strike\":" << m.get<AuctionPrintBX::lo_strike>();
        o << ",\"hi_strike\":" << m.get<AuctionPrintBX::hi_strike>();
        o << ",\"industry\":\"" << m.get<AuctionPrintBX::industry>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<AuctionPrintBX::symbol_type>();
        o << ",\"u_avg_daily_vlm\":" << m.get<AuctionPrintBX::u_avg_daily_vlm>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionPrintBX::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionPrintBX::cust_qty>();
        o << ",\"cust_prc\":" << m.get<AuctionPrintBX::cust_prc>();
        o << ",\"has_cust_prc\":" << (int64_t)m.get<AuctionPrintBX::has_cust_prc>();
        o << ",\"cust_firm_type\":" << (int64_t)m.get<AuctionPrintBX::cust_firm_type>();
        o << ",\"cust_agent_mpid\":\"" << m.get<AuctionPrintBX::cust_agent_mpid>() << "\"";
        o << ",\"comm_enhancement\":" << m.get<AuctionPrintBX::comm_enhancement>();
        o << ",\"notice_ubid\":" << m.get<AuctionPrintBX::notice_ubid>();
        o << ",\"notice_uask\":" << m.get<AuctionPrintBX::notice_uask>();
        o << ",\"net_surf_prc\":" << m.get<AuctionPrintBX::net_surf_prc>();
        o << ",\"i_days\":" << m.get<AuctionPrintBX::i_days>();
        o << ",\"i_years\":" << m.get<AuctionPrintBX::i_years>();
        o << ",\"money_rate\":" << m.get<AuctionPrintBX::money_rate>();
        o << ",\"strike_pv\":" << m.get<AuctionPrintBX::strike_pv>();
        o << ",\"prt_price\":" << m.get<AuctionPrintBX::prt_price>();
        o << ",\"prt_price2\":" << m.get<AuctionPrintBX::prt_price2>();
        o << ",\"prt_size\":" << m.get<AuctionPrintBX::prt_size>();
        o << ",\"prt_size2\":" << m.get<AuctionPrintBX::prt_size2>();
        {
            std::time_t tt = m.get<AuctionPrintBX::prt_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"prt_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"prt_type\":" << (int64_t)m.get<AuctionPrintBX::prt_type>();
        o << ",\"prt_uprc\":" << m.get<AuctionPrintBX::prt_uprc>();
        o << ",\"prt_surf_prc\":" << m.get<AuctionPrintBX::prt_surf_prc>();
        o << ",\"prt_money_rate\":" << m.get<AuctionPrintBX::prt_money_rate>();
        o << ",\"u_prc1m\":" << m.get<AuctionPrintBX::u_prc1m>();
        o << ",\"bid_prc1m\":" << m.get<AuctionPrintBX::bid_prc1m>();
        o << ",\"ask_prc1m\":" << m.get<AuctionPrintBX::ask_prc1m>();
        o << ",\"surf_prc1m\":" << m.get<AuctionPrintBX::surf_prc1m>();
        o << ",\"surf_rate1m\":" << m.get<AuctionPrintBX::surf_rate1m>();
        o << ",\"u_prc10m\":" << m.get<AuctionPrintBX::u_prc10m>();
        o << ",\"bid_prc10m\":" << m.get<AuctionPrintBX::bid_prc10m>();
        o << ",\"ask_prc10m\":" << m.get<AuctionPrintBX::ask_prc10m>();
        o << ",\"surf_prc10m\":" << m.get<AuctionPrintBX::surf_prc10m>();
        o << ",\"surf_rate10m\":" << m.get<AuctionPrintBX::surf_rate10m>();
        {
            std::time_t tt = m.get<AuctionPrintBX::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}