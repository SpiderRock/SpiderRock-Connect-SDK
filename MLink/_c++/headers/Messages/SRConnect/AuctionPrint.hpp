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

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _auction_source__GUARD__
    #define _auction_source__GUARD__
    DECL_STRONG_TYPE(auction_source, spiderrock::protobuf::api::AuctionSource);
    #endif//_auction_source__GUARD__

    #ifndef _num_opt_legs__GUARD__
    #define _num_opt_legs__GUARD__
    DECL_STRONG_TYPE(num_opt_legs, int32);
    #endif//_num_opt_legs__GUARD__

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::ToolSpreadClass);
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

    #ifndef _cust_side__GUARD__
    #define _cust_side__GUARD__
    DECL_STRONG_TYPE(cust_side, spiderrock::protobuf::api::BuySell);
    #endif//_cust_side__GUARD__

    #ifndef _cust_qty__GUARD__
    #define _cust_qty__GUARD__
    DECL_STRONG_TYPE(cust_qty, int32);
    #endif//_cust_qty__GUARD__

    #ifndef _prt_price__double__GUARD__
    #define _prt_price__double__GUARD__
    DECL_STRONG_TYPE(prt_price__double, double);
    #endif//_prt_price__double__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_time__GUARD__
    #define _prt_time__GUARD__
    DECL_STRONG_TYPE(prt_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_prt_time__GUARD__

    #ifndef _prt_ubid__GUARD__
    #define _prt_ubid__GUARD__
    DECL_STRONG_TYPE(prt_ubid, float);
    #endif//_prt_ubid__GUARD__

    #ifndef _prt_uask__GUARD__
    #define _prt_uask__GUARD__
    DECL_STRONG_TYPE(prt_uask, float);
    #endif//_prt_uask__GUARD__

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

    #ifndef _prt_uprc10m__GUARD__
    #define _prt_uprc10m__GUARD__
    DECL_STRONG_TYPE(prt_uprc10m, float);
    #endif//_prt_uprc10m__GUARD__

    #ifndef _prt_bid_prc10m__GUARD__
    #define _prt_bid_prc10m__GUARD__
    DECL_STRONG_TYPE(prt_bid_prc10m, float);
    #endif//_prt_bid_prc10m__GUARD__

    #ifndef _prt_ask_prc10m__GUARD__
    #define _prt_ask_prc10m__GUARD__
    DECL_STRONG_TYPE(prt_ask_prc10m, float);
    #endif//_prt_ask_prc10m__GUARD__

    #ifndef _prt_surf_vol10m__GUARD__
    #define _prt_surf_vol10m__GUARD__
    DECL_STRONG_TYPE(prt_surf_vol10m, float);
    #endif//_prt_surf_vol10m__GUARD__

    #ifndef _prt_surf_prc10m__GUARD__
    #define _prt_surf_prc10m__GUARD__
    DECL_STRONG_TYPE(prt_surf_prc10m, float);
    #endif//_prt_surf_prc10m__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    
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
    

    class AuctionPrint {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionPrint_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using num_opt_legs = spiderrock::protobuf::api::num_opt_legs;
        using spread_class = spiderrock::protobuf::api::spread_class;
        using spread_flavor = spiderrock::protobuf::api::spread_flavor;
        using contains_hedge = spiderrock::protobuf::api::contains_hedge;
        using contains_flex = spiderrock::protobuf::api::contains_flex;
        using contains_multi_hedge = spiderrock::protobuf::api::contains_multi_hedge;
        using cust_side = spiderrock::protobuf::api::cust_side;
        using cust_qty = spiderrock::protobuf::api::cust_qty;
        using prt_price = spiderrock::protobuf::api::prt_price__double;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_time = spiderrock::protobuf::api::prt_time;
        using prt_ubid = spiderrock::protobuf::api::prt_ubid;
        using prt_uask = spiderrock::protobuf::api::prt_uask;
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
        using net_de = spiderrock::protobuf::api::net_de;
        using net_ga = spiderrock::protobuf::api::net_ga;
        using net_th = spiderrock::protobuf::api::net_th;
        using net_ve = spiderrock::protobuf::api::net_ve;
        using prt_uprc10m = spiderrock::protobuf::api::prt_uprc10m;
        using prt_bid_prc10m = spiderrock::protobuf::api::prt_bid_prc10m;
        using prt_ask_prc10m = spiderrock::protobuf::api::prt_ask_prc10m;
        using prt_surf_vol10m = spiderrock::protobuf::api::prt_surf_vol10m;
        using prt_surf_prc10m = spiderrock::protobuf::api::prt_surf_prc10m;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        auction_type m_auction_type{};
        auction_source m_auction_source{};
        num_opt_legs m_num_opt_legs{};
        spread_class m_spread_class{};
        spread_flavor m_spread_flavor{};
        contains_hedge m_contains_hedge{};
        contains_flex m_contains_flex{};
        contains_multi_hedge m_contains_multi_hedge{};
        cust_side m_cust_side{};
        cust_qty m_cust_qty{};
        prt_price m_prt_price{};
        prt_size m_prt_size{};
        prt_time m_prt_time{};
        prt_ubid m_prt_ubid{};
        prt_uask m_prt_uask{};
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
        net_de m_net_de{};
        net_ga m_net_ga{};
        net_th m_net_th{};
        net_ve m_net_ve{};
        prt_uprc10m m_prt_uprc10m{};
        prt_bid_prc10m m_prt_bid_prc10m{};
        prt_ask_prc10m m_prt_ask_prc10m{};
        prt_surf_vol10m m_prt_surf_vol10m{};
        prt_surf_prc10m m_prt_surf_prc10m{};
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
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        auction_source get_auction_source() const {
            return m_auction_source;
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
        cust_side get_cust_side() const {
            return m_cust_side;
        }		
        cust_qty get_cust_qty() const {
            return m_cust_qty;
        }		
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_time get_prt_time() const {
            return m_prt_time;
        }		
        prt_ubid get_prt_ubid() const {
            return m_prt_ubid;
        }		
        prt_uask get_prt_uask() const {
            return m_prt_uask;
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
        prt_uprc10m get_prt_uprc10m() const {
            return m_prt_uprc10m;
        }		
        prt_bid_prc10m get_prt_bid_prc10m() const {
            return m_prt_bid_prc10m;
        }		
        prt_ask_prc10m get_prt_ask_prc10m() const {
            return m_prt_ask_prc10m;
        }		
        prt_surf_vol10m get_prt_surf_vol10m() const {
            return m_prt_surf_vol10m;
        }		
        prt_surf_prc10m get_prt_surf_prc10m() const {
            return m_prt_surf_prc10m;
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
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_auction_source(const auction_source& value)  {
            m_auction_source = value;
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
        void set_cust_side(const cust_side& value)  {
            m_cust_side = value;
        }
        void set_cust_qty(const cust_qty& value)  {
            m_cust_qty = value;
        }
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_time(const prt_time& value)  {
            m_prt_time = value;
        }
        void set_prt_ubid(const prt_ubid& value)  {
            m_prt_ubid = value;
        }
        void set_prt_uask(const prt_uask& value)  {
            m_prt_uask = value;
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
        void set_prt_uprc10m(const prt_uprc10m& value)  {
            m_prt_uprc10m = value;
        }
        void set_prt_bid_prc10m(const prt_bid_prc10m& value)  {
            m_prt_bid_prc10m = value;
        }
        void set_prt_ask_prc10m(const prt_ask_prc10m& value)  {
            m_prt_ask_prc10m = value;
        }
        void set_prt_surf_vol10m(const prt_surf_vol10m& value)  {
            m_prt_surf_vol10m = value;
        }
        void set_prt_surf_prc10m(const prt_surf_prc10m& value)  {
            m_prt_surf_prc10m = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionPrint::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const auction_source & value) {
            set_auction_source(value);
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
        void set(const cust_side & value) {
            set_cust_side(value);
        }
        void set(const cust_qty & value) {
            set_cust_qty(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_time & value) {
            set_prt_time(value);
        }
        void set(const prt_ubid & value) {
            set_prt_ubid(value);
        }
        void set(const prt_uask & value) {
            set_prt_uask(value);
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
        void set(const prt_uprc10m & value) {
            set_prt_uprc10m(value);
        }
        void set(const prt_bid_prc10m & value) {
            set_prt_bid_prc10m(value);
        }
        void set(const prt_ask_prc10m & value) {
            set_prt_ask_prc10m(value);
        }
        void set(const prt_surf_vol10m & value) {
            set_prt_surf_vol10m(value);
        }
        void set(const prt_surf_prc10m & value) {
            set_prt_surf_prc10m(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const AuctionPrint & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_auction_type);
            set(value.m_auction_source);
            set(value.m_num_opt_legs);
            set(value.m_spread_class);
            set(value.m_spread_flavor);
            set(value.m_contains_hedge);
            set(value.m_contains_flex);
            set(value.m_contains_multi_hedge);
            set(value.m_cust_side);
            set(value.m_cust_qty);
            set(value.m_prt_price);
            set(value.m_prt_size);
            set(value.m_prt_time);
            set(value.m_prt_ubid);
            set(value.m_prt_uask);
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
            set(value.m_net_de);
            set(value.m_net_ga);
            set(value.m_net_th);
            set(value.m_net_ve);
            set(value.m_prt_uprc10m);
            set(value.m_prt_bid_prc10m);
            set(value.m_prt_ask_prc10m);
            set(value.m_prt_surf_vol10m);
            set(value.m_prt_surf_prc10m);
            set(value.m_timestamp);
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
        bool IncludeNumOptLegs() const {
            return !(m_num_opt_legs == 0);
        }
        bool IncludeCustQty() const {
            return !(m_cust_qty == 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
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
        bool IncludePrtUprc10m() const {
            return !(m_prt_uprc10m == 0.0);
        }
        bool IncludePrtBidPrc10m() const {
            return !(m_prt_bid_prc10m == 0.0);
        }
        bool IncludePrtAskPrc10m() const {
            return !(m_prt_ask_prc10m == 0.0);
        }
        bool IncludePrtSurfVol10m() const {
            return !(m_prt_surf_vol10m == 0.0);
        }
        bool IncludePrtSurfPrc10m() const {
            return !(m_prt_surf_prc10m == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeNumOptLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_num_opt_legs);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_multi_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_cust_qty);
            }
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(136,m_prt_price);
            }
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_prt_size);
            }
            if ( IncludePrtTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(142, m_prt_time);
            }
            if ( IncludePrtUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_prt_uask);
            }
            if ( IncludePrtSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_prt_surf_vol);
            }
            if ( IncludePrtSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_prt_surf_prc);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_bid_prc);
            }
            if ( IncludeBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_bid_sz);
            }
            if ( IncludeBidMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(163,m_bid_mask);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_ask_prc);
            }
            if ( IncludeAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_ask_sz);
            }
            if ( IncludeAskMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(172,m_ask_mask);
            }
            if ( IncludeExchBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_exch_bid_prc);
            }
            if ( IncludeExchBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_exch_bid_sz);
            }
            if ( IncludeExchAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_exch_ask_prc);
            }
            if ( IncludeExchAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_exch_ask_sz);
            }
            if ( IncludeNetDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_net_de);
            }
            if ( IncludeNetGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_net_ga);
            }
            if ( IncludeNetTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_net_th);
            }
            if ( IncludeNetVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_net_ve);
            }
            if ( IncludePrtUprc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_prt_uprc10m);
            }
            if ( IncludePrtBidPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_prt_bid_prc10m);
            }
            if ( IncludePrtAskPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_prt_ask_prc10m);
            }
            if ( IncludePrtSurfVol10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_prt_surf_vol10m);
            }
            if ( IncludePrtSurfPrc10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_prt_surf_prc10m);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(214, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            if ( IncludeNumOptLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_num_opt_legs);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_multi_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_cust_qty);
            }
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,136,m_prt_price);
            }
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_prt_size);
            }
            if ( IncludePrtTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 142, m_prt_time);
            }
            if ( IncludePrtUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_prt_ubid);
            }
            if ( IncludePrtUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_prt_uask);
            }
            if ( IncludePrtSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_prt_surf_vol);
            }
            if ( IncludePrtSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_prt_surf_prc);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_bid_prc);
            }
            if ( IncludeBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_bid_sz);
            }
            if ( IncludeBidMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,163,m_bid_mask);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_ask_prc);
            }
            if ( IncludeAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_ask_sz);
            }
            if ( IncludeAskMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,172,m_ask_mask);
            }
            if ( IncludeExchBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_exch_bid_prc);
            }
            if ( IncludeExchBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_exch_bid_sz);
            }
            if ( IncludeExchAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_exch_ask_prc);
            }
            if ( IncludeExchAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_exch_ask_sz);
            }
            if ( IncludeNetDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_net_de);
            }
            if ( IncludeNetGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_net_ga);
            }
            if ( IncludeNetTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_net_th);
            }
            if ( IncludeNetVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_net_ve);
            }
            if ( IncludePrtUprc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_prt_uprc10m);
            }
            if ( IncludePrtBidPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_prt_bid_prc10m);
            }
            if ( IncludePrtAskPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_prt_ask_prc10m);
            }
            if ( IncludePrtSurfVol10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_prt_surf_vol10m);
            }
            if ( IncludePrtSurfPrc10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_prt_surf_prc10m);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 214, m_timestamp);
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
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_class = static_cast<spiderrock::protobuf::api::ToolSpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_flavor = static_cast<spiderrock::protobuf::api::SpreadFlavor>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_multi_hedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cust_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_prt_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_bid_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ask_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_uprc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_bid_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_ask_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_vol10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_surf_prc10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
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

    template<> inline const auto AuctionPrint::get<AuctionPrint::_meta>() const { return AuctionPrint::_meta{ m__meta}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::pkey>() const { return AuctionPrint::pkey{ m_pkey}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::ticker>() const { return AuctionPrint::ticker{ m_ticker}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::trade_date>() const { return AuctionPrint::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::num_opt_legs>() const { return m_num_opt_legs; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>( m_spread_class)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::spread_flavor>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>( m_spread_flavor)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::contains_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_hedge)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::contains_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_flex)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::contains_multi_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_multi_hedge)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionPrint::get<AuctionPrint::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_price>() const { return m_prt_price; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_size>() const { return m_prt_size; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_time>() const { return m_prt_time; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_ubid>() const { return m_prt_ubid; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_uask>() const { return m_prt_uask; }
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
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_de>() const { return m_net_de; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_ga>() const { return m_net_ga; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_th>() const { return m_net_th; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::net_ve>() const { return m_net_ve; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_uprc10m>() const { return m_prt_uprc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_bid_prc10m>() const { return m_prt_bid_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_ask_prc10m>() const { return m_prt_ask_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_surf_vol10m>() const { return m_prt_surf_vol10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::prt_surf_prc10m>() const { return m_prt_surf_prc10m; }
    template<> inline const auto AuctionPrint::get<AuctionPrint::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionPrint_PKey::get<AuctionPrint_PKey::notice_number>() const { return m_notice_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrint_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionPrint_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionPrint& m) {
        o << "\"_meta\":{" << m.get<AuctionPrint::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionPrint::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionPrint::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionPrint::trade_date>() << "}";
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionPrint::auction_type>();
        o << ",\"auction_source\":" << (int64_t)m.get<AuctionPrint::auction_source>();
        o << ",\"num_opt_legs\":" << m.get<AuctionPrint::num_opt_legs>();
        o << ",\"spread_class\":" << (int64_t)m.get<AuctionPrint::spread_class>();
        o << ",\"spread_flavor\":" << (int64_t)m.get<AuctionPrint::spread_flavor>();
        o << ",\"contains_hedge\":" << (int64_t)m.get<AuctionPrint::contains_hedge>();
        o << ",\"contains_flex\":" << (int64_t)m.get<AuctionPrint::contains_flex>();
        o << ",\"contains_multi_hedge\":" << (int64_t)m.get<AuctionPrint::contains_multi_hedge>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionPrint::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionPrint::cust_qty>();
        o << ",\"prt_price\":" << m.get<AuctionPrint::prt_price>();
        o << ",\"prt_size\":" << m.get<AuctionPrint::prt_size>();
        {
            std::time_t tt = m.get<AuctionPrint::prt_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"prt_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"prt_ubid\":" << m.get<AuctionPrint::prt_ubid>();
        o << ",\"prt_uask\":" << m.get<AuctionPrint::prt_uask>();
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
        o << ",\"net_de\":" << m.get<AuctionPrint::net_de>();
        o << ",\"net_ga\":" << m.get<AuctionPrint::net_ga>();
        o << ",\"net_th\":" << m.get<AuctionPrint::net_th>();
        o << ",\"net_ve\":" << m.get<AuctionPrint::net_ve>();
        o << ",\"prt_uprc10m\":" << m.get<AuctionPrint::prt_uprc10m>();
        o << ",\"prt_bid_prc10m\":" << m.get<AuctionPrint::prt_bid_prc10m>();
        o << ",\"prt_ask_prc10m\":" << m.get<AuctionPrint::prt_ask_prc10m>();
        o << ",\"prt_surf_vol10m\":" << m.get<AuctionPrint::prt_surf_vol10m>();
        o << ",\"prt_surf_prc10m\":" << m.get<AuctionPrint::prt_surf_prc10m>();
        {
            std::time_t tt = m.get<AuctionPrint::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}