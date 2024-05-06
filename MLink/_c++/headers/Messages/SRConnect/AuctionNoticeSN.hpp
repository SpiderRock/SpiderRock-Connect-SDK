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

    #ifndef _is_test_auction__GUARD__
    #define _is_test_auction__GUARD__
    DECL_STRONG_TYPE(is_test_auction, spiderrock::protobuf::api::YesNo);
    #endif//_is_test_auction__GUARD__

    #ifndef _contains_flex__GUARD__
    #define _contains_flex__GUARD__
    DECL_STRONG_TYPE(contains_flex, spiderrock::protobuf::api::YesNo);
    #endif//_contains_flex__GUARD__

    #ifndef _short_code__GUARD__
    #define _short_code__GUARD__
    DECL_STRONG_TYPE(short_code, string);
    #endif//_short_code__GUARD__

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

    #ifndef _expiry__GUARD__
    #define _expiry__GUARD__
    DECL_STRONG_TYPE(expiry, DateKey);
    #endif//_expiry__GUARD__

    #ifndef _strike__GUARD__
    #define _strike__GUARD__
    DECL_STRONG_TYPE(strike, double);
    #endif//_strike__GUARD__

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

    #ifndef _u_bid__GUARD__
    #define _u_bid__GUARD__
    DECL_STRONG_TYPE(u_bid, double);
    #endif//_u_bid__GUARD__

    #ifndef _u_ask__GUARD__
    #define _u_ask__GUARD__
    DECL_STRONG_TYPE(u_ask, double);
    #endif//_u_ask__GUARD__

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

    
    class AuctionNoticeSN_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }


        AuctionNoticeSN_PKey() {}

        virtual ~AuctionNoticeSN_PKey() {
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
    
    class AuctionNoticeSN_DirectedCounterParty {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN_DirectedCounterParty::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN_DirectedCounterParty::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const incl_excl & value) { set_incl_excl(value); }
        void set(const is_comm_paying & value) { set_is_comm_paying(value); }


        AuctionNoticeSN_DirectedCounterParty() {}

        virtual ~AuctionNoticeSN_DirectedCounterParty() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(220,m_client_firm);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(223,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,220,static_cast<string>(m_client_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,223,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying)));
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
                    case 220: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 223: {m_incl_excl = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 226: {m_is_comm_paying = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class AuctionNoticeSN {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionNoticeSN_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_event = spiderrock::protobuf::api::auction_event;
        using src_auction_id = spiderrock::protobuf::api::src_auction_id;
        using src_auction_type = spiderrock::protobuf::api::src_auction_type;
        using auction_source = spiderrock::protobuf::api::auction_source;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using contains_flex = spiderrock::protobuf::api::contains_flex;
        using short_code = spiderrock::protobuf::api::short_code;
        using industry = spiderrock::protobuf::api::industry;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using u_avg_daily_vlm = spiderrock::protobuf::api::u_avg_daily_vlm;
        using expiry = spiderrock::protobuf::api::expiry;
        using strike = spiderrock::protobuf::api::strike;
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
        using u_bid = spiderrock::protobuf::api::u_bid;
        using u_ask = spiderrock::protobuf::api::u_ask;
        using i_days = spiderrock::protobuf::api::i_days__double;
        using i_years = spiderrock::protobuf::api::i_years;
        using money_rate = spiderrock::protobuf::api::money_rate;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__double;
        using has_est_ddivs = spiderrock::protobuf::api::has_est_ddivs;
        using s_vol = spiderrock::protobuf::api::s_vol__double;
        using rc_eex_prem = spiderrock::protobuf::api::rc_eex_prem__double;
        using strike_pv = spiderrock::protobuf::api::strike_pv__double;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using include_srnetwork = spiderrock::protobuf::api::include_srnetwork;
        using directed_counter_party = spiderrock::protobuf::api::AuctionNoticeSN_DirectedCounterParty;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        auction_type m_auction_type{};
        auction_event m_auction_event{};
        src_auction_id m_src_auction_id{};
        src_auction_type m_src_auction_type{};
        auction_source m_auction_source{};
        is_test_auction m_is_test_auction{};
        contains_flex m_contains_flex{};
        short_code m_short_code{};
        industry m_industry{};
        symbol_type m_symbol_type{};
        u_avg_daily_vlm m_u_avg_daily_vlm{};
        expiry m_expiry{};
        strike m_strike{};
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
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        i_days m_i_days{};
        i_years m_i_years{};
        money_rate m_money_rate{};
        ddiv_pv m_ddiv_pv{};
        has_est_ddivs m_has_est_ddivs{};
        s_vol m_s_vol{};
        rc_eex_prem m_rc_eex_prem{};
        strike_pv m_strike_pv{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};
        include_srnetwork m_include_srnetwork{};
        std::vector<directed_counter_party> m_directed_counter_party{};

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
        is_test_auction get_is_test_auction() const {
            return m_is_test_auction;
        }		
        contains_flex get_contains_flex() const {
            return m_contains_flex;
        }		
        short_code get_short_code() const {
            return m_short_code;
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
        expiry get_expiry() const {
            return m_expiry;
        }		
        strike get_strike() const {
            return m_strike;
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
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
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
        void set_is_test_auction(const is_test_auction& value)  {
            m_is_test_auction = value;
        }
        void set_contains_flex(const contains_flex& value)  {
            m_contains_flex = value;
        }
        void set_short_code(const short_code& value)  {
            m_short_code = value;
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
        void set_expiry(const expiry& value)  {
            m_expiry = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
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
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
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

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionNoticeSN::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const is_test_auction & value) {
            set_is_test_auction(value);
        }
        void set(const contains_flex & value) {
            set_contains_flex(value);
        }
        void set(const short_code & value) {
            set_short_code(value);
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
        void set(const expiry & value) {
            set_expiry(value);
        }
        void set(const strike & value) {
            set_strike(value);
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
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
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

        void set(const AuctionNoticeSN & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_auction_type);
            set(value.m_auction_event);
            set(value.m_src_auction_id);
            set(value.m_src_auction_type);
            set(value.m_auction_source);
            set(value.m_is_test_auction);
            set(value.m_contains_flex);
            set(value.m_short_code);
            set(value.m_industry);
            set(value.m_symbol_type);
            set(value.m_u_avg_daily_vlm);
            set(value.m_expiry);
            set(value.m_strike);
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
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_i_days);
            set(value.m_i_years);
            set(value.m_money_rate);
            set(value.m_ddiv_pv);
            set(value.m_has_est_ddivs);
            set(value.m_s_vol);
            set(value.m_rc_eex_prem);
            set(value.m_strike_pv);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
            set(value.m_include_srnetwork);set_directed_counter_party_list(value.m_directed_counter_party);
        }

        AuctionNoticeSN() {
            m__meta.set_message_type("AuctionNoticeSN");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2467, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2467, length);
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
             *this = AuctionNoticeSN{};
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
        bool IncludeSrcAuctionId() const {
            return !(m_src_auction_id.empty());
        }
        bool IncludeSrcAuctionType() const {
            return !(m_src_auction_type.empty());
        }
        bool IncludeShortCode() const {
            return !(m_short_code.empty());
        }
        bool IncludeIndustry() const {
            return !(m_industry.empty());
        }
        bool IncludeUAvgDailyVlm() const {
            return !(m_u_avg_daily_vlm == 0.0);
        }
        bool IncludeExpiry() const {
            return (m_expiry.ByteSizeLong() > 0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
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
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>(m_auction_event)));
            if ( IncludeSrcAuctionId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_src_auction_id);
            }
            if ( IncludeSrcAuctionType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_src_auction_type);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(122,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            if ( IncludeShortCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_short_code);
            }
            if ( IncludeIndustry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_industry);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_u_avg_daily_vlm);
            }
            if ( IncludeExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(136, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_strike);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_cust_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_cust_agent_mpid);
            }
            if ( IncludeCustClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_cust_client_firm);
            }
            if ( IncludeCommEnhancement()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_comm_enhancement);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cust_comm_paying)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CustQtyCond>(m_cust_qty_cond)));
            if ( IncludeAuctionDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_auction_duration);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_u_ask);
            }
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_i_days);
            }
            if ( IncludeIYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(187,m_i_years);
            }
            if ( IncludeMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(190,m_money_rate);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(193,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(194,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_est_ddivs)));
            if ( IncludeSVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(196,m_s_vol);
            }
            if ( IncludeRcEexPrem()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(199,m_rc_eex_prem);
            }
            if ( IncludeStrikePv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_strike_pv);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(205,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(208,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(211, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
					totalSize += SRProtobufCPP::TagCodec::Size(217, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>(m_auction_event)));
            if ( IncludeSrcAuctionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_src_auction_id));
            }
            if ( IncludeSrcAuctionType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_src_auction_type));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,122,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_contains_flex)));
            if ( IncludeShortCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_short_code));
            }
            if ( IncludeIndustry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_industry));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeUAvgDailyVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_u_avg_daily_vlm);
            }
            if ( IncludeExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,136, m_expiry.get_year(), m_expiry.get_month(), m_expiry.get_day());
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_strike);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_cust_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_cust_firm_type)));
            if ( IncludeCustAgentMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_cust_agent_mpid));
            }
            if ( IncludeCustClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_cust_client_firm));
            }
            if ( IncludeCommEnhancement()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_comm_enhancement);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,169,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cust_comm_paying)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CustQtyCond>(m_cust_qty_cond)));
            if ( IncludeAuctionDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_auction_duration);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_u_ask);
            }
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_i_days);
            }
            if ( IncludeIYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,187,m_i_years);
            }
            if ( IncludeMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,190,m_money_rate);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,193,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,194,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_est_ddivs)));
            if ( IncludeSVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,196,m_s_vol);
            }
            if ( IncludeRcEexPrem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,199,m_rc_eex_prem);
            }
            if ( IncludeStrikePv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_strike_pv);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,205,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,208,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 211, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_include_srnetwork)));
            if ( IncludeDirectedCounterParty()) {
                for (auto& item : m_directed_counter_party) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 217, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_event = static_cast<spiderrock::protobuf::api::AuctionEvent>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_auction_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_auction_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_test_auction = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 122: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_contains_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_short_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiry.set_year(dateKey.year());
                            m_expiry.set_month(dateKey.month());
                            m_expiry.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cust_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cust_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_cust_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cust_agent_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cust_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_comm_enhancement = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_comm_paying = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_qty_cond = static_cast<spiderrock::protobuf::api::CustQtyCond>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 194: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_est_ddivs = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_s_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rc_eex_prem = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike_pv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_srnetwork = static_cast<spiderrock::protobuf::api::InclExclDisclose>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            directed_counter_party item_directed_counter_party;
                            item_directed_counter_party.Decode(pos, pos+length);  
                            m_directed_counter_party.emplace_back(item_directed_counter_party);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::_meta>() const { return AuctionNoticeSN::_meta{ m__meta}; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::pkey>() const { return AuctionNoticeSN::pkey{ m_pkey}; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::ticker>() const { return AuctionNoticeSN::ticker{ m_ticker}; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::trade_date>() const { return AuctionNoticeSN::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::auction_event>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>( m_auction_event)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::src_auction_id>() const { return m_src_auction_id; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::src_auction_type>() const { return m_src_auction_type; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>( m_auction_source)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::contains_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_contains_flex)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::short_code>() const { return m_short_code; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::industry>() const { return m_industry; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::u_avg_daily_vlm>() const { return m_u_avg_daily_vlm; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::expiry>() const { return AuctionNoticeSN::expiry{ m_expiry}; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::strike>() const { return m_strike; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_prc>() const { return m_cust_prc; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::has_cust_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cust_prc)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_cust_firm_type)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_agent_mpid>() const { return m_cust_agent_mpid; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_client_firm>() const { return m_cust_client_firm; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::comm_enhancement>() const { return m_comm_enhancement; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_comm_paying>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_cust_comm_paying)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::cust_qty_cond>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CustQtyCond>( m_cust_qty_cond)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::auction_duration>() const { return m_auction_duration; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::u_bid>() const { return m_u_bid; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::u_ask>() const { return m_u_ask; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::i_days>() const { return m_i_days; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::i_years>() const { return m_i_years; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::money_rate>() const { return m_money_rate; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::has_est_ddivs>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_est_ddivs)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::s_vol>() const { return m_s_vol; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::rc_eex_prem>() const { return m_rc_eex_prem; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::strike_pv>() const { return m_strike_pv; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::include_srnetwork>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>( m_include_srnetwork)); }
    template<> inline const auto AuctionNoticeSN::get<AuctionNoticeSN::directed_counter_party>(int i) const { return AuctionNoticeSN::directed_counter_party{ get_directed_counter_party(i)}; }
    template<> inline int AuctionNoticeSN::count<AuctionNoticeSN::directed_counter_party>() const { return static_cast<int>( m_directed_counter_party.size()); }
    template<> inline const auto AuctionNoticeSN_PKey::get<AuctionNoticeSN_PKey::notice_number>() const { return m_notice_number; }
    
    template<> inline const auto AuctionNoticeSN_DirectedCounterParty::get<AuctionNoticeSN_DirectedCounterParty::client_firm>() const { return m_client_firm; }
    template<> inline const auto AuctionNoticeSN_DirectedCounterParty::get<AuctionNoticeSN_DirectedCounterParty::incl_excl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::InclExclDisclose>(m_incl_excl));}
    template<> inline const auto AuctionNoticeSN_DirectedCounterParty::get<AuctionNoticeSN_DirectedCounterParty::is_comm_paying>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_comm_paying));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionNoticeSN_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionNoticeSN_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionNoticeSN_DirectedCounterParty& m) {
        o << "\"client_firm\":\"" << m.get<AuctionNoticeSN_DirectedCounterParty::client_firm>() << "\"";
        o << ",\"incl_excl\":" << (int64_t)m.get<AuctionNoticeSN_DirectedCounterParty::incl_excl>();
        o << ",\"is_comm_paying\":" << (int64_t)m.get<AuctionNoticeSN_DirectedCounterParty::is_comm_paying>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionNoticeSN& m) {
        o << "\"_meta\":{" << m.get<AuctionNoticeSN::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionNoticeSN::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionNoticeSN::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionNoticeSN::trade_date>() << "}";
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionNoticeSN::auction_type>();
        o << ",\"auction_event\":" << (int64_t)m.get<AuctionNoticeSN::auction_event>();
        o << ",\"src_auction_id\":\"" << m.get<AuctionNoticeSN::src_auction_id>() << "\"";
        o << ",\"src_auction_type\":\"" << m.get<AuctionNoticeSN::src_auction_type>() << "\"";
        o << ",\"auction_source\":" << (int64_t)m.get<AuctionNoticeSN::auction_source>();
        o << ",\"is_test_auction\":" << (int64_t)m.get<AuctionNoticeSN::is_test_auction>();
        o << ",\"contains_flex\":" << (int64_t)m.get<AuctionNoticeSN::contains_flex>();
        o << ",\"short_code\":\"" << m.get<AuctionNoticeSN::short_code>() << "\"";
        o << ",\"industry\":\"" << m.get<AuctionNoticeSN::industry>() << "\"";
        o << ",\"symbol_type\":" << (int64_t)m.get<AuctionNoticeSN::symbol_type>();
        o << ",\"u_avg_daily_vlm\":" << m.get<AuctionNoticeSN::u_avg_daily_vlm>();
        o << ",\"expiry\":{" << m.get<AuctionNoticeSN::expiry>() << "}";
        o << ",\"strike\":" << m.get<AuctionNoticeSN::strike>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionNoticeSN::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionNoticeSN::cust_qty>();
        o << ",\"cust_prc\":" << m.get<AuctionNoticeSN::cust_prc>();
        o << ",\"has_cust_prc\":" << (int64_t)m.get<AuctionNoticeSN::has_cust_prc>();
        o << ",\"cust_firm_type\":" << (int64_t)m.get<AuctionNoticeSN::cust_firm_type>();
        o << ",\"cust_agent_mpid\":\"" << m.get<AuctionNoticeSN::cust_agent_mpid>() << "\"";
        o << ",\"cust_client_firm\":\"" << m.get<AuctionNoticeSN::cust_client_firm>() << "\"";
        o << ",\"comm_enhancement\":" << m.get<AuctionNoticeSN::comm_enhancement>();
        o << ",\"cust_comm_paying\":" << (int64_t)m.get<AuctionNoticeSN::cust_comm_paying>();
        o << ",\"cust_qty_cond\":" << (int64_t)m.get<AuctionNoticeSN::cust_qty_cond>();
        o << ",\"auction_duration\":" << m.get<AuctionNoticeSN::auction_duration>();
        o << ",\"u_bid\":" << m.get<AuctionNoticeSN::u_bid>();
        o << ",\"u_ask\":" << m.get<AuctionNoticeSN::u_ask>();
        o << ",\"i_days\":" << m.get<AuctionNoticeSN::i_days>();
        o << ",\"i_years\":" << m.get<AuctionNoticeSN::i_years>();
        o << ",\"money_rate\":" << m.get<AuctionNoticeSN::money_rate>();
        o << ",\"ddiv_pv\":" << m.get<AuctionNoticeSN::ddiv_pv>();
        o << ",\"has_est_ddivs\":" << (int64_t)m.get<AuctionNoticeSN::has_est_ddivs>();
        o << ",\"s_vol\":" << m.get<AuctionNoticeSN::s_vol>();
        o << ",\"rc_eex_prem\":" << m.get<AuctionNoticeSN::rc_eex_prem>();
        o << ",\"strike_pv\":" << m.get<AuctionNoticeSN::strike_pv>();
        o << ",\"src_timestamp\":" << m.get<AuctionNoticeSN::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<AuctionNoticeSN::net_timestamp>();
        {
            std::time_t tt = m.get<AuctionNoticeSN::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"include_srnetwork\":" << (int64_t)m.get<AuctionNoticeSN::include_srnetwork>();
        o << ",\"directed_counter_party\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AuctionNoticeSN::directed_counter_party>(); ++i) {
                o << delim << m.get<AuctionNoticeSN::directed_counter_party>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}