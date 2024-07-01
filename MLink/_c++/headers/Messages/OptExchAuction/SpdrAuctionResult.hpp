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

    #ifndef _sr_auction_id__GUARD__
    #define _sr_auction_id__GUARD__
    DECL_STRONG_TYPE(sr_auction_id, int64);
    #endif//_sr_auction_id__GUARD__

    #ifndef _exch_auction_id__GUARD__
    #define _exch_auction_id__GUARD__
    DECL_STRONG_TYPE(exch_auction_id, string);
    #endif//_exch_auction_id__GUARD__

    #ifndef _exch_auction_type__GUARD__
    #define _exch_auction_type__GUARD__
    DECL_STRONG_TYPE(exch_auction_type, string);
    #endif//_exch_auction_type__GUARD__

    #ifndef _auction_shape__GUARD__
    #define _auction_shape__GUARD__
    DECL_STRONG_TYPE(auction_shape, spiderrock::protobuf::api::NoticeShape);
    #endif//_auction_shape__GUARD__

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _auction_side__GUARD__
    #define _auction_side__GUARD__
    DECL_STRONG_TYPE(auction_side, spiderrock::protobuf::api::BuySell);
    #endif//_auction_side__GUARD__

    #ifndef _matched_size__GUARD__
    #define _matched_size__GUARD__
    DECL_STRONG_TYPE(matched_size, int32);
    #endif//_matched_size__GUARD__

    #ifndef _auction_size__GUARD__
    #define _auction_size__GUARD__
    DECL_STRONG_TYPE(auction_size, int32);
    #endif//_auction_size__GUARD__

    #ifndef _auction_price__GUARD__
    #define _auction_price__GUARD__
    DECL_STRONG_TYPE(auction_price, double);
    #endif//_auction_price__GUARD__

    #ifndef _is_auction_price_valid__GUARD__
    #define _is_auction_price_valid__GUARD__
    DECL_STRONG_TYPE(is_auction_price_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_auction_price_valid__GUARD__

    #ifndef _auction_duration__GUARD__
    #define _auction_duration__GUARD__
    DECL_STRONG_TYPE(auction_duration, int32);
    #endif//_auction_duration__GUARD__

    #ifndef _auction_start_timestamp__GUARD__
    #define _auction_start_timestamp__GUARD__
    DECL_STRONG_TYPE(auction_start_timestamp, int64);
    #endif//_auction_start_timestamp__GUARD__

    #ifndef _min_response_size__GUARD__
    #define _min_response_size__GUARD__
    DECL_STRONG_TYPE(min_response_size, int32);
    #endif//_min_response_size__GUARD__

    #ifndef _client_limit_type__GUARD__
    #define _client_limit_type__GUARD__
    DECL_STRONG_TYPE(client_limit_type, spiderrock::protobuf::api::AuctionLimitType);
    #endif//_client_limit_type__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _member_mpid__GUARD__
    #define _member_mpid__GUARD__
    DECL_STRONG_TYPE(member_mpid, string);
    #endif//_member_mpid__GUARD__

    #ifndef _client_accnt__GUARD__
    #define _client_accnt__GUARD__
    DECL_STRONG_TYPE(client_accnt, string);
    #endif//_client_accnt__GUARD__

    #ifndef _other_detail__GUARD__
    #define _other_detail__GUARD__
    DECL_STRONG_TYPE(other_detail, string);
    #endif//_other_detail__GUARD__

    #ifndef _market_status__GUARD__
    #define _market_status__GUARD__
    DECL_STRONG_TYPE(market_status, spiderrock::protobuf::api::MarketStatus);
    #endif//_market_status__GUARD__

    #ifndef _num_updates__GUARD__
    #define _num_updates__GUARD__
    DECL_STRONG_TYPE(num_updates, int32);
    #endif//_num_updates__GUARD__

    #ifndef _auction_final_timestamp__GUARD__
    #define _auction_final_timestamp__GUARD__
    DECL_STRONG_TYPE(auction_final_timestamp, int64);
    #endif//_auction_final_timestamp__GUARD__

    #ifndef _auction_start_size__GUARD__
    #define _auction_start_size__GUARD__
    DECL_STRONG_TYPE(auction_start_size, int32);
    #endif//_auction_start_size__GUARD__

    #ifndef _auction_start_price__GUARD__
    #define _auction_start_price__GUARD__
    DECL_STRONG_TYPE(auction_start_price, double);
    #endif//_auction_start_price__GUARD__

    #ifndef _auction_start_matched_size__GUARD__
    #define _auction_start_matched_size__GUARD__
    DECL_STRONG_TYPE(auction_start_matched_size, int32);
    #endif//_auction_start_matched_size__GUARD__

    #ifndef _num_responses__GUARD__
    #define _num_responses__GUARD__
    DECL_STRONG_TYPE(num_responses, int32);
    #endif//_num_responses__GUARD__

    #ifndef _best_response_size__GUARD__
    #define _best_response_size__GUARD__
    DECL_STRONG_TYPE(best_response_size, int32);
    #endif//_best_response_size__GUARD__

    #ifndef _best_response_price__GUARD__
    #define _best_response_price__GUARD__
    DECL_STRONG_TYPE(best_response_price, double);
    #endif//_best_response_price__GUARD__

    #ifndef _cum_fill_quantity__GUARD__
    #define _cum_fill_quantity__GUARD__
    DECL_STRONG_TYPE(cum_fill_quantity, int32);
    #endif//_cum_fill_quantity__GUARD__

    #ifndef _avg_fill_price__GUARD__
    #define _avg_fill_price__GUARD__
    DECL_STRONG_TYPE(avg_fill_price, double);
    #endif//_avg_fill_price__GUARD__

    #ifndef _auction_final_price__GUARD__
    #define _auction_final_price__GUARD__
    DECL_STRONG_TYPE(auction_final_price, double);
    #endif//_auction_final_price__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _dgw_timestamp__GUARD__
    #define _dgw_timestamp__GUARD__
    DECL_STRONG_TYPE(dgw_timestamp, int64);
    #endif//_dgw_timestamp__GUARD__

    #ifndef _mmr_timestamp__GUARD__
    #define _mmr_timestamp__GUARD__
    DECL_STRONG_TYPE(mmr_timestamp, int64);
    #endif//_mmr_timestamp__GUARD__

    #ifndef _eng_timestamp__GUARD__
    #define _eng_timestamp__GUARD__
    DECL_STRONG_TYPE(eng_timestamp, int64);
    #endif//_eng_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _auction_start__GUARD__
    #define _auction_start__GUARD__
    DECL_STRONG_TYPE(auction_start, double);
    #endif//_auction_start__GUARD__

    #ifndef _auction_nbbo_stance__GUARD__
    #define _auction_nbbo_stance__GUARD__
    DECL_STRONG_TYPE(auction_nbbo_stance, spiderrock::protobuf::api::AuctionMktStance);
    #endif//_auction_nbbo_stance__GUARD__

    #ifndef _auction_exch_stance__GUARD__
    #define _auction_exch_stance__GUARD__
    DECL_STRONG_TYPE(auction_exch_stance, spiderrock::protobuf::api::AuctionMktStance);
    #endif//_auction_exch_stance__GUARD__

    #ifndef _bid_price__float__GUARD__
    #define _bid_price__float__GUARD__
    DECL_STRONG_TYPE(bid_price__float, float);
    #endif//_bid_price__float__GUARD__

    #ifndef _ask_price__float__GUARD__
    #define _ask_price__float__GUARD__
    DECL_STRONG_TYPE(ask_price__float, float);
    #endif//_ask_price__float__GUARD__

    #ifndef _cum_bid_size__GUARD__
    #define _cum_bid_size__GUARD__
    DECL_STRONG_TYPE(cum_bid_size, int32);
    #endif//_cum_bid_size__GUARD__

    #ifndef _cum_ask_size__GUARD__
    #define _cum_ask_size__GUARD__
    DECL_STRONG_TYPE(cum_ask_size, int32);
    #endif//_cum_ask_size__GUARD__

    #ifndef _exch_bid_prc__GUARD__
    #define _exch_bid_prc__GUARD__
    DECL_STRONG_TYPE(exch_bid_prc, float);
    #endif//_exch_bid_prc__GUARD__

    #ifndef _exch_ask_prc__GUARD__
    #define _exch_ask_prc__GUARD__
    DECL_STRONG_TYPE(exch_ask_prc, float);
    #endif//_exch_ask_prc__GUARD__

    #ifndef _exch_bid_size__GUARD__
    #define _exch_bid_size__GUARD__
    DECL_STRONG_TYPE(exch_bid_size, int32);
    #endif//_exch_bid_size__GUARD__

    #ifndef _exch_ask_size__GUARD__
    #define _exch_ask_size__GUARD__
    DECL_STRONG_TYPE(exch_ask_size, int32);
    #endif//_exch_ask_size__GUARD__

    #ifndef _rsp_probability__GUARD__
    #define _rsp_probability__GUARD__
    DECL_STRONG_TYPE(rsp_probability, float);
    #endif//_rsp_probability__GUARD__

    #ifndef _svol__GUARD__
    #define _svol__GUARD__
    DECL_STRONG_TYPE(svol, float);
    #endif//_svol__GUARD__

    #ifndef _sprc__GUARD__
    #define _sprc__GUARD__
    DECL_STRONG_TYPE(sprc, float);
    #endif//_sprc__GUARD__

    #ifndef _vega__GUARD__
    #define _vega__GUARD__
    DECL_STRONG_TYPE(vega, float);
    #endif//_vega__GUARD__

    #ifndef _delta__float__GUARD__
    #define _delta__float__GUARD__
    DECL_STRONG_TYPE(delta__float, float);
    #endif//_delta__float__GUARD__

    #ifndef _s_edge_start__GUARD__
    #define _s_edge_start__GUARD__
    DECL_STRONG_TYPE(s_edge_start, float);
    #endif//_s_edge_start__GUARD__

    #ifndef _s_edge_print__GUARD__
    #define _s_edge_print__GUARD__
    DECL_STRONG_TYPE(s_edge_print, float);
    #endif//_s_edge_print__GUARD__

    #ifndef _u_bid__float__GUARD__
    #define _u_bid__float__GUARD__
    DECL_STRONG_TYPE(u_bid__float, float);
    #endif//_u_bid__float__GUARD__

    #ifndef _u_ask__float__GUARD__
    #define _u_ask__float__GUARD__
    DECL_STRONG_TYPE(u_ask__float, float);
    #endif//_u_ask__float__GUARD__

    #ifndef _u_bid_t__GUARD__
    #define _u_bid_t__GUARD__
    DECL_STRONG_TYPE(u_bid_t, float);
    #endif//_u_bid_t__GUARD__

    #ifndef _u_ask_t__GUARD__
    #define _u_ask_t__GUARD__
    DECL_STRONG_TYPE(u_ask_t, float);
    #endif//_u_ask_t__GUARD__

    #ifndef _auction_print_result__GUARD__
    #define _auction_print_result__GUARD__
    DECL_STRONG_TYPE(auction_print_result, spiderrock::protobuf::api::AuctionPrintResult);
    #endif//_auction_print_result__GUARD__

    #ifndef _first_print_size__GUARD__
    #define _first_print_size__GUARD__
    DECL_STRONG_TYPE(first_print_size, float);
    #endif//_first_print_size__GUARD__

    #ifndef _first_print_price__GUARD__
    #define _first_print_price__GUARD__
    DECL_STRONG_TYPE(first_print_price, double);
    #endif//_first_print_price__GUARD__

    #ifndef _first_print_side__GUARD__
    #define _first_print_side__GUARD__
    DECL_STRONG_TYPE(first_print_side, spiderrock::protobuf::api::PrtSide);
    #endif//_first_print_side__GUARD__

    #ifndef _first_print_type__GUARD__
    #define _first_print_type__GUARD__
    DECL_STRONG_TYPE(first_print_type, spiderrock::protobuf::api::PrtType);
    #endif//_first_print_type__GUARD__

    #ifndef _first_src_timestamp__GUARD__
    #define _first_src_timestamp__GUARD__
    DECL_STRONG_TYPE(first_src_timestamp, int64);
    #endif//_first_src_timestamp__GUARD__

    #ifndef _first_net_timestamp__GUARD__
    #define _first_net_timestamp__GUARD__
    DECL_STRONG_TYPE(first_net_timestamp, int64);
    #endif//_first_net_timestamp__GUARD__

    #ifndef _first_src_latency__GUARD__
    #define _first_src_latency__GUARD__
    DECL_STRONG_TYPE(first_src_latency, float);
    #endif//_first_src_latency__GUARD__

    #ifndef _first_net_latency__GUARD__
    #define _first_net_latency__GUARD__
    DECL_STRONG_TYPE(first_net_latency, float);
    #endif//_first_net_latency__GUARD__

    #ifndef _first_away_prt_size__GUARD__
    #define _first_away_prt_size__GUARD__
    DECL_STRONG_TYPE(first_away_prt_size, int32);
    #endif//_first_away_prt_size__GUARD__

    #ifndef _first_away_prt_price__GUARD__
    #define _first_away_prt_price__GUARD__
    DECL_STRONG_TYPE(first_away_prt_price, double);
    #endif//_first_away_prt_price__GUARD__

    #ifndef _first_away_net_latency__GUARD__
    #define _first_away_net_latency__GUARD__
    DECL_STRONG_TYPE(first_away_net_latency, float);
    #endif//_first_away_net_latency__GUARD__

    #ifndef _num_prints__GUARD__
    #define _num_prints__GUARD__
    DECL_STRONG_TYPE(num_prints, int32);
    #endif//_num_prints__GUARD__

    #ifndef _cum_print_size__GUARD__
    #define _cum_print_size__GUARD__
    DECL_STRONG_TYPE(cum_print_size, int32);
    #endif//_cum_print_size__GUARD__

    #ifndef _avg_print_price__GUARD__
    #define _avg_print_price__GUARD__
    DECL_STRONG_TYPE(avg_print_price, double);
    #endif//_avg_print_price__GUARD__

    #ifndef _num_print_legs__GUARD__
    #define _num_print_legs__GUARD__
    DECL_STRONG_TYPE(num_print_legs, int32);
    #endif//_num_print_legs__GUARD__

    #ifndef _mark_m1__GUARD__
    #define _mark_m1__GUARD__
    DECL_STRONG_TYPE(mark_m1, float);
    #endif//_mark_m1__GUARD__

    #ifndef _u_mark_m1__GUARD__
    #define _u_mark_m1__GUARD__
    DECL_STRONG_TYPE(u_mark_m1, float);
    #endif//_u_mark_m1__GUARD__

    #ifndef _pnl_m1__GUARD__
    #define _pnl_m1__GUARD__
    DECL_STRONG_TYPE(pnl_m1, float);
    #endif//_pnl_m1__GUARD__

    #ifndef _pnl_m1_err__GUARD__
    #define _pnl_m1_err__GUARD__
    DECL_STRONG_TYPE(pnl_m1_err, spiderrock::protobuf::api::YesNo);
    #endif//_pnl_m1_err__GUARD__

    #ifndef _mark_m10__GUARD__
    #define _mark_m10__GUARD__
    DECL_STRONG_TYPE(mark_m10, float);
    #endif//_mark_m10__GUARD__

    #ifndef _u_mark_m10__GUARD__
    #define _u_mark_m10__GUARD__
    DECL_STRONG_TYPE(u_mark_m10, float);
    #endif//_u_mark_m10__GUARD__

    #ifndef _pnl_m10__GUARD__
    #define _pnl_m10__GUARD__
    DECL_STRONG_TYPE(pnl_m10, float);
    #endif//_pnl_m10__GUARD__

    #ifndef _pnl_m10_err__GUARD__
    #define _pnl_m10_err__GUARD__
    DECL_STRONG_TYPE(pnl_m10_err, spiderrock::protobuf::api::YesNo);
    #endif//_pnl_m10_err__GUARD__

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__GUARD__
    #define _sec_type__GUARD__
    DECL_STRONG_TYPE(sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__GUARD__

    #ifndef _auction_exch__GUARD__
    #define _auction_exch__GUARD__
    DECL_STRONG_TYPE(auction_exch, spiderrock::protobuf::api::OptExch);
    #endif//_auction_exch__GUARD__

    #ifndef _auction_ex_dest__GUARD__
    #define _auction_ex_dest__GUARD__
    DECL_STRONG_TYPE(auction_ex_dest, string);
    #endif//_auction_ex_dest__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _leg_sec_key__GUARD__
    #define _leg_sec_key__GUARD__
    DECL_STRONG_TYPE(leg_sec_key, OptionKey);
    #endif//_leg_sec_key__GUARD__

    #ifndef _leg_sec_type__GUARD__
    #define _leg_sec_type__GUARD__
    DECL_STRONG_TYPE(leg_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_leg_sec_type__GUARD__

    #ifndef _leg_side__GUARD__
    #define _leg_side__GUARD__
    DECL_STRONG_TYPE(leg_side, spiderrock::protobuf::api::BuySell);
    #endif//_leg_side__GUARD__

    #ifndef _leg_ratio__GUARD__
    #define _leg_ratio__GUARD__
    DECL_STRONG_TYPE(leg_ratio, uint32);
    #endif//_leg_ratio__GUARD__

    
    class SpdrAuctionResult_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type;
        using auction_exch = spiderrock::protobuf::api::auction_exch;
        using auction_ex_dest = spiderrock::protobuf::api::auction_ex_dest;
        using run_status = spiderrock::protobuf::api::run_status;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        auction_exch m_auction_exch{};
        auction_ex_dest m_auction_ex_dest{};
        run_status m_run_status{};

        public:
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        auction_exch get_auction_exch() const {
            return m_auction_exch;
        }
        auction_ex_dest get_auction_ex_dest() const {
            return m_auction_ex_dest;
        }
        run_status get_run_status() const {
            return m_run_status;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_auction_exch(const auction_exch& value)  {
            m_auction_exch = value;
        }
        void set_auction_ex_dest(const auction_ex_dest& value)  {
            m_auction_ex_dest = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const auction_exch & value) { set_auction_exch(value); }
        void set(const auction_ex_dest & value) { set_auction_ex_dest(value); }
        void set(const run_status & value) { set_run_status(value); }


        SpdrAuctionResult_PKey() {}

        virtual ~SpdrAuctionResult_PKey() {
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
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeAuctionExDest() const {
            return !(m_auction_ex_dest.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_sec_key.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_auction_exch)));
            if ( IncludeAuctionExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_auction_ex_dest);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_sec_key.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_auction_exch)));
            if ( IncludeAuctionExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_auction_ex_dest));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
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
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_auction_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_auction_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 14: {m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrAuctionResult_Legs {
        public:
        //using statements for all types used in this class
        using leg_sec_key = spiderrock::protobuf::api::leg_sec_key;
        using leg_sec_type = spiderrock::protobuf::api::leg_sec_type;
        using leg_side = spiderrock::protobuf::api::leg_side;
        using leg_ratio = spiderrock::protobuf::api::leg_ratio;

        private:
        leg_sec_key m_leg_sec_key{};
        leg_sec_type m_leg_sec_type{};
        leg_side m_leg_side{};
        leg_ratio m_leg_ratio{};

        public:
        leg_sec_type get_leg_sec_type() const {
            return m_leg_sec_type;
        }
        leg_side get_leg_side() const {
            return m_leg_side;
        }
        leg_ratio get_leg_ratio() const {
            return m_leg_ratio;
        }
        void set_leg_sec_key(const leg_sec_key& value)  {
            m_leg_sec_key = value;
        }
        void set_leg_sec_type(const leg_sec_type& value)  {
            m_leg_sec_type = value;
        }
        void set_leg_side(const leg_side& value)  {
            m_leg_side = value;
        }
        void set_leg_ratio(const leg_ratio& value)  {
            m_leg_ratio = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult_Legs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult_Legs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_sec_key & value) { set_leg_sec_key(value); }
        void set(const leg_sec_type & value) { set_leg_sec_type(value); }
        void set(const leg_side & value) { set_leg_side(value); }
        void set(const leg_ratio & value) { set_leg_ratio(value); }


        SpdrAuctionResult_Legs() {}

        virtual ~SpdrAuctionResult_Legs() {
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
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(211,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(220,m_leg_ratio);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 211, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,217,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,220,m_leg_ratio);
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
                    case 211: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_leg_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 214: {m_leg_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 217: {m_leg_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 220: {m_leg_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrAuctionResult {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAuctionResult_PKey;
        using sr_auction_id = spiderrock::protobuf::api::sr_auction_id;
        using exch_auction_id = spiderrock::protobuf::api::exch_auction_id;
        using exch_auction_type = spiderrock::protobuf::api::exch_auction_type;
        using auction_shape = spiderrock::protobuf::api::auction_shape;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_side = spiderrock::protobuf::api::auction_side;
        using matched_size = spiderrock::protobuf::api::matched_size;
        using auction_size = spiderrock::protobuf::api::auction_size;
        using auction_price = spiderrock::protobuf::api::auction_price;
        using is_auction_price_valid = spiderrock::protobuf::api::is_auction_price_valid;
        using auction_duration = spiderrock::protobuf::api::auction_duration;
        using auction_start_timestamp = spiderrock::protobuf::api::auction_start_timestamp;
        using min_response_size = spiderrock::protobuf::api::min_response_size;
        using client_limit_type = spiderrock::protobuf::api::client_limit_type;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using member_mpid = spiderrock::protobuf::api::member_mpid;
        using client_accnt = spiderrock::protobuf::api::client_accnt;
        using other_detail = spiderrock::protobuf::api::other_detail;
        using market_status = spiderrock::protobuf::api::market_status;
        using num_updates = spiderrock::protobuf::api::num_updates;
        using auction_final_timestamp = spiderrock::protobuf::api::auction_final_timestamp;
        using auction_start_size = spiderrock::protobuf::api::auction_start_size;
        using auction_start_price = spiderrock::protobuf::api::auction_start_price;
        using auction_start_matched_size = spiderrock::protobuf::api::auction_start_matched_size;
        using num_responses = spiderrock::protobuf::api::num_responses;
        using best_response_size = spiderrock::protobuf::api::best_response_size;
        using best_response_price = spiderrock::protobuf::api::best_response_price;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using auction_final_price = spiderrock::protobuf::api::auction_final_price;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using dgw_timestamp = spiderrock::protobuf::api::dgw_timestamp;
        using mmr_timestamp = spiderrock::protobuf::api::mmr_timestamp;
        using eng_timestamp = spiderrock::protobuf::api::eng_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using auction_start = spiderrock::protobuf::api::auction_start;
        using auction_nbbo_stance = spiderrock::protobuf::api::auction_nbbo_stance;
        using auction_exch_stance = spiderrock::protobuf::api::auction_exch_stance;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using cum_bid_size = spiderrock::protobuf::api::cum_bid_size;
        using cum_ask_size = spiderrock::protobuf::api::cum_ask_size;
        using exch_bid_prc = spiderrock::protobuf::api::exch_bid_prc;
        using exch_ask_prc = spiderrock::protobuf::api::exch_ask_prc;
        using exch_bid_size = spiderrock::protobuf::api::exch_bid_size;
        using exch_ask_size = spiderrock::protobuf::api::exch_ask_size;
        using rsp_probability = spiderrock::protobuf::api::rsp_probability;
        using svol = spiderrock::protobuf::api::svol;
        using sprc = spiderrock::protobuf::api::sprc;
        using vega = spiderrock::protobuf::api::vega;
        using delta = spiderrock::protobuf::api::delta__float;
        using s_edge_start = spiderrock::protobuf::api::s_edge_start;
        using s_edge_print = spiderrock::protobuf::api::s_edge_print;
        using u_bid = spiderrock::protobuf::api::u_bid__float;
        using u_ask = spiderrock::protobuf::api::u_ask__float;
        using u_bid_t = spiderrock::protobuf::api::u_bid_t;
        using u_ask_t = spiderrock::protobuf::api::u_ask_t;
        using auction_print_result = spiderrock::protobuf::api::auction_print_result;
        using first_print_size = spiderrock::protobuf::api::first_print_size;
        using first_print_price = spiderrock::protobuf::api::first_print_price;
        using first_print_side = spiderrock::protobuf::api::first_print_side;
        using first_print_type = spiderrock::protobuf::api::first_print_type;
        using first_src_timestamp = spiderrock::protobuf::api::first_src_timestamp;
        using first_net_timestamp = spiderrock::protobuf::api::first_net_timestamp;
        using first_src_latency = spiderrock::protobuf::api::first_src_latency;
        using first_net_latency = spiderrock::protobuf::api::first_net_latency;
        using first_away_prt_size = spiderrock::protobuf::api::first_away_prt_size;
        using first_away_prt_price = spiderrock::protobuf::api::first_away_prt_price;
        using first_away_net_latency = spiderrock::protobuf::api::first_away_net_latency;
        using num_prints = spiderrock::protobuf::api::num_prints;
        using cum_print_size = spiderrock::protobuf::api::cum_print_size;
        using avg_print_price = spiderrock::protobuf::api::avg_print_price;
        using num_print_legs = spiderrock::protobuf::api::num_print_legs;
        using mark_m1 = spiderrock::protobuf::api::mark_m1;
        using u_mark_m1 = spiderrock::protobuf::api::u_mark_m1;
        using pnl_m1 = spiderrock::protobuf::api::pnl_m1;
        using pnl_m1_err = spiderrock::protobuf::api::pnl_m1_err;
        using mark_m10 = spiderrock::protobuf::api::mark_m10;
        using u_mark_m10 = spiderrock::protobuf::api::u_mark_m10;
        using pnl_m10 = spiderrock::protobuf::api::pnl_m10;
        using pnl_m10_err = spiderrock::protobuf::api::pnl_m10_err;
        using legs = spiderrock::protobuf::api::SpdrAuctionResult_Legs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sr_auction_id m_sr_auction_id{};
        exch_auction_id m_exch_auction_id{};
        exch_auction_type m_exch_auction_type{};
        auction_shape m_auction_shape{};
        auction_type m_auction_type{};
        auction_side m_auction_side{};
        matched_size m_matched_size{};
        auction_size m_auction_size{};
        auction_price m_auction_price{};
        is_auction_price_valid m_is_auction_price_valid{};
        auction_duration m_auction_duration{};
        auction_start_timestamp m_auction_start_timestamp{};
        min_response_size m_min_response_size{};
        client_limit_type m_client_limit_type{};
        firm_type m_firm_type{};
        member_mpid m_member_mpid{};
        client_accnt m_client_accnt{};
        other_detail m_other_detail{};
        market_status m_market_status{};
        num_updates m_num_updates{};
        auction_final_timestamp m_auction_final_timestamp{};
        auction_start_size m_auction_start_size{};
        auction_start_price m_auction_start_price{};
        auction_start_matched_size m_auction_start_matched_size{};
        num_responses m_num_responses{};
        best_response_size m_best_response_size{};
        best_response_price m_best_response_price{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        auction_final_price m_auction_final_price{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        dgw_timestamp m_dgw_timestamp{};
        mmr_timestamp m_mmr_timestamp{};
        eng_timestamp m_eng_timestamp{};
        timestamp m_timestamp{};
        auction_start m_auction_start{};
        auction_nbbo_stance m_auction_nbbo_stance{};
        auction_exch_stance m_auction_exch_stance{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        cum_bid_size m_cum_bid_size{};
        cum_ask_size m_cum_ask_size{};
        exch_bid_prc m_exch_bid_prc{};
        exch_ask_prc m_exch_ask_prc{};
        exch_bid_size m_exch_bid_size{};
        exch_ask_size m_exch_ask_size{};
        rsp_probability m_rsp_probability{};
        svol m_svol{};
        sprc m_sprc{};
        vega m_vega{};
        delta m_delta{};
        s_edge_start m_s_edge_start{};
        s_edge_print m_s_edge_print{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        u_bid_t m_u_bid_t{};
        u_ask_t m_u_ask_t{};
        auction_print_result m_auction_print_result{};
        first_print_size m_first_print_size{};
        first_print_price m_first_print_price{};
        first_print_side m_first_print_side{};
        first_print_type m_first_print_type{};
        first_src_timestamp m_first_src_timestamp{};
        first_net_timestamp m_first_net_timestamp{};
        first_src_latency m_first_src_latency{};
        first_net_latency m_first_net_latency{};
        first_away_prt_size m_first_away_prt_size{};
        first_away_prt_price m_first_away_prt_price{};
        first_away_net_latency m_first_away_net_latency{};
        num_prints m_num_prints{};
        cum_print_size m_cum_print_size{};
        avg_print_price m_avg_print_price{};
        num_print_legs m_num_print_legs{};
        mark_m1 m_mark_m1{};
        u_mark_m1 m_u_mark_m1{};
        pnl_m1 m_pnl_m1{};
        pnl_m1_err m_pnl_m1_err{};
        mark_m10 m_mark_m10{};
        u_mark_m10 m_u_mark_m10{};
        pnl_m10 m_pnl_m10{};
        pnl_m10_err m_pnl_m10_err{};
        std::vector<legs> m_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sr_auction_id get_sr_auction_id() const {
            return m_sr_auction_id;
        }		
        exch_auction_id get_exch_auction_id() const {
            return m_exch_auction_id;
        }		
        exch_auction_type get_exch_auction_type() const {
            return m_exch_auction_type;
        }		
        auction_shape get_auction_shape() const {
            return m_auction_shape;
        }		
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        auction_side get_auction_side() const {
            return m_auction_side;
        }		
        matched_size get_matched_size() const {
            return m_matched_size;
        }		
        auction_size get_auction_size() const {
            return m_auction_size;
        }		
        auction_price get_auction_price() const {
            return m_auction_price;
        }		
        is_auction_price_valid get_is_auction_price_valid() const {
            return m_is_auction_price_valid;
        }		
        auction_duration get_auction_duration() const {
            return m_auction_duration;
        }		
        auction_start_timestamp get_auction_start_timestamp() const {
            return m_auction_start_timestamp;
        }		
        min_response_size get_min_response_size() const {
            return m_min_response_size;
        }		
        client_limit_type get_client_limit_type() const {
            return m_client_limit_type;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        member_mpid get_member_mpid() const {
            return m_member_mpid;
        }		
        client_accnt get_client_accnt() const {
            return m_client_accnt;
        }		
        other_detail get_other_detail() const {
            return m_other_detail;
        }		
        market_status get_market_status() const {
            return m_market_status;
        }		
        num_updates get_num_updates() const {
            return m_num_updates;
        }		
        auction_final_timestamp get_auction_final_timestamp() const {
            return m_auction_final_timestamp;
        }		
        auction_start_size get_auction_start_size() const {
            return m_auction_start_size;
        }		
        auction_start_price get_auction_start_price() const {
            return m_auction_start_price;
        }		
        auction_start_matched_size get_auction_start_matched_size() const {
            return m_auction_start_matched_size;
        }		
        num_responses get_num_responses() const {
            return m_num_responses;
        }		
        best_response_size get_best_response_size() const {
            return m_best_response_size;
        }		
        best_response_price get_best_response_price() const {
            return m_best_response_price;
        }		
        cum_fill_quantity get_cum_fill_quantity() const {
            return m_cum_fill_quantity;
        }		
        avg_fill_price get_avg_fill_price() const {
            return m_avg_fill_price;
        }		
        auction_final_price get_auction_final_price() const {
            return m_auction_final_price;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        dgw_timestamp get_dgw_timestamp() const {
            return m_dgw_timestamp;
        }		
        mmr_timestamp get_mmr_timestamp() const {
            return m_mmr_timestamp;
        }		
        eng_timestamp get_eng_timestamp() const {
            return m_eng_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        auction_start get_auction_start() const {
            return m_auction_start;
        }		
        auction_nbbo_stance get_auction_nbbo_stance() const {
            return m_auction_nbbo_stance;
        }		
        auction_exch_stance get_auction_exch_stance() const {
            return m_auction_exch_stance;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        cum_bid_size get_cum_bid_size() const {
            return m_cum_bid_size;
        }		
        cum_ask_size get_cum_ask_size() const {
            return m_cum_ask_size;
        }		
        exch_bid_prc get_exch_bid_prc() const {
            return m_exch_bid_prc;
        }		
        exch_ask_prc get_exch_ask_prc() const {
            return m_exch_ask_prc;
        }		
        exch_bid_size get_exch_bid_size() const {
            return m_exch_bid_size;
        }		
        exch_ask_size get_exch_ask_size() const {
            return m_exch_ask_size;
        }		
        rsp_probability get_rsp_probability() const {
            return m_rsp_probability;
        }		
        svol get_svol() const {
            return m_svol;
        }		
        sprc get_sprc() const {
            return m_sprc;
        }		
        vega get_vega() const {
            return m_vega;
        }		
        delta get_delta() const {
            return m_delta;
        }		
        s_edge_start get_s_edge_start() const {
            return m_s_edge_start;
        }		
        s_edge_print get_s_edge_print() const {
            return m_s_edge_print;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        u_bid_t get_u_bid_t() const {
            return m_u_bid_t;
        }		
        u_ask_t get_u_ask_t() const {
            return m_u_ask_t;
        }		
        auction_print_result get_auction_print_result() const {
            return m_auction_print_result;
        }		
        first_print_size get_first_print_size() const {
            return m_first_print_size;
        }		
        first_print_price get_first_print_price() const {
            return m_first_print_price;
        }		
        first_print_side get_first_print_side() const {
            return m_first_print_side;
        }		
        first_print_type get_first_print_type() const {
            return m_first_print_type;
        }		
        first_src_timestamp get_first_src_timestamp() const {
            return m_first_src_timestamp;
        }		
        first_net_timestamp get_first_net_timestamp() const {
            return m_first_net_timestamp;
        }		
        first_src_latency get_first_src_latency() const {
            return m_first_src_latency;
        }		
        first_net_latency get_first_net_latency() const {
            return m_first_net_latency;
        }		
        first_away_prt_size get_first_away_prt_size() const {
            return m_first_away_prt_size;
        }		
        first_away_prt_price get_first_away_prt_price() const {
            return m_first_away_prt_price;
        }		
        first_away_net_latency get_first_away_net_latency() const {
            return m_first_away_net_latency;
        }		
        num_prints get_num_prints() const {
            return m_num_prints;
        }		
        cum_print_size get_cum_print_size() const {
            return m_cum_print_size;
        }		
        avg_print_price get_avg_print_price() const {
            return m_avg_print_price;
        }		
        num_print_legs get_num_print_legs() const {
            return m_num_print_legs;
        }		
        mark_m1 get_mark_m1() const {
            return m_mark_m1;
        }		
        u_mark_m1 get_u_mark_m1() const {
            return m_u_mark_m1;
        }		
        pnl_m1 get_pnl_m1() const {
            return m_pnl_m1;
        }		
        pnl_m1_err get_pnl_m1_err() const {
            return m_pnl_m1_err;
        }		
        mark_m10 get_mark_m10() const {
            return m_mark_m10;
        }		
        u_mark_m10 get_u_mark_m10() const {
            return m_u_mark_m10;
        }		
        pnl_m10 get_pnl_m10() const {
            return m_pnl_m10;
        }		
        pnl_m10_err get_pnl_m10_err() const {
            return m_pnl_m10_err;
        }
        const std::vector<legs>& get_legs_list() const {
            return m_legs;
        }
        const legs& get_legs(const int i) const {
            return m_legs.at(i);
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
        void set_sr_auction_id(const sr_auction_id& value)  {
            m_sr_auction_id = value;
        }
        void set_exch_auction_id(const exch_auction_id& value)  {
            m_exch_auction_id = value;
        }
        void set_exch_auction_type(const exch_auction_type& value)  {
            m_exch_auction_type = value;
        }
        void set_auction_shape(const auction_shape& value)  {
            m_auction_shape = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_auction_side(const auction_side& value)  {
            m_auction_side = value;
        }
        void set_matched_size(const matched_size& value)  {
            m_matched_size = value;
        }
        void set_auction_size(const auction_size& value)  {
            m_auction_size = value;
        }
        void set_auction_price(const auction_price& value)  {
            m_auction_price = value;
        }
        void set_is_auction_price_valid(const is_auction_price_valid& value)  {
            m_is_auction_price_valid = value;
        }
        void set_auction_duration(const auction_duration& value)  {
            m_auction_duration = value;
        }
        void set_auction_start_timestamp(const auction_start_timestamp& value)  {
            m_auction_start_timestamp = value;
        }
        void set_min_response_size(const min_response_size& value)  {
            m_min_response_size = value;
        }
        void set_client_limit_type(const client_limit_type& value)  {
            m_client_limit_type = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_member_mpid(const member_mpid& value)  {
            m_member_mpid = value;
        }
        void set_client_accnt(const client_accnt& value)  {
            m_client_accnt = value;
        }
        void set_other_detail(const other_detail& value)  {
            m_other_detail = value;
        }
        void set_market_status(const market_status& value)  {
            m_market_status = value;
        }
        void set_num_updates(const num_updates& value)  {
            m_num_updates = value;
        }
        void set_auction_final_timestamp(const auction_final_timestamp& value)  {
            m_auction_final_timestamp = value;
        }
        void set_auction_start_size(const auction_start_size& value)  {
            m_auction_start_size = value;
        }
        void set_auction_start_price(const auction_start_price& value)  {
            m_auction_start_price = value;
        }
        void set_auction_start_matched_size(const auction_start_matched_size& value)  {
            m_auction_start_matched_size = value;
        }
        void set_num_responses(const num_responses& value)  {
            m_num_responses = value;
        }
        void set_best_response_size(const best_response_size& value)  {
            m_best_response_size = value;
        }
        void set_best_response_price(const best_response_price& value)  {
            m_best_response_price = value;
        }
        void set_cum_fill_quantity(const cum_fill_quantity& value)  {
            m_cum_fill_quantity = value;
        }
        void set_avg_fill_price(const avg_fill_price& value)  {
            m_avg_fill_price = value;
        }
        void set_auction_final_price(const auction_final_price& value)  {
            m_auction_final_price = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_dgw_timestamp(const dgw_timestamp& value)  {
            m_dgw_timestamp = value;
        }
        void set_mmr_timestamp(const mmr_timestamp& value)  {
            m_mmr_timestamp = value;
        }
        void set_eng_timestamp(const eng_timestamp& value)  {
            m_eng_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_auction_start(const auction_start& value)  {
            m_auction_start = value;
        }
        void set_auction_nbbo_stance(const auction_nbbo_stance& value)  {
            m_auction_nbbo_stance = value;
        }
        void set_auction_exch_stance(const auction_exch_stance& value)  {
            m_auction_exch_stance = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_cum_bid_size(const cum_bid_size& value)  {
            m_cum_bid_size = value;
        }
        void set_cum_ask_size(const cum_ask_size& value)  {
            m_cum_ask_size = value;
        }
        void set_exch_bid_prc(const exch_bid_prc& value)  {
            m_exch_bid_prc = value;
        }
        void set_exch_ask_prc(const exch_ask_prc& value)  {
            m_exch_ask_prc = value;
        }
        void set_exch_bid_size(const exch_bid_size& value)  {
            m_exch_bid_size = value;
        }
        void set_exch_ask_size(const exch_ask_size& value)  {
            m_exch_ask_size = value;
        }
        void set_rsp_probability(const rsp_probability& value)  {
            m_rsp_probability = value;
        }
        void set_svol(const svol& value)  {
            m_svol = value;
        }
        void set_sprc(const sprc& value)  {
            m_sprc = value;
        }
        void set_vega(const vega& value)  {
            m_vega = value;
        }
        void set_delta(const delta& value)  {
            m_delta = value;
        }
        void set_s_edge_start(const s_edge_start& value)  {
            m_s_edge_start = value;
        }
        void set_s_edge_print(const s_edge_print& value)  {
            m_s_edge_print = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_u_bid_t(const u_bid_t& value)  {
            m_u_bid_t = value;
        }
        void set_u_ask_t(const u_ask_t& value)  {
            m_u_ask_t = value;
        }
        void set_auction_print_result(const auction_print_result& value)  {
            m_auction_print_result = value;
        }
        void set_first_print_size(const first_print_size& value)  {
            m_first_print_size = value;
        }
        void set_first_print_price(const first_print_price& value)  {
            m_first_print_price = value;
        }
        void set_first_print_side(const first_print_side& value)  {
            m_first_print_side = value;
        }
        void set_first_print_type(const first_print_type& value)  {
            m_first_print_type = value;
        }
        void set_first_src_timestamp(const first_src_timestamp& value)  {
            m_first_src_timestamp = value;
        }
        void set_first_net_timestamp(const first_net_timestamp& value)  {
            m_first_net_timestamp = value;
        }
        void set_first_src_latency(const first_src_latency& value)  {
            m_first_src_latency = value;
        }
        void set_first_net_latency(const first_net_latency& value)  {
            m_first_net_latency = value;
        }
        void set_first_away_prt_size(const first_away_prt_size& value)  {
            m_first_away_prt_size = value;
        }
        void set_first_away_prt_price(const first_away_prt_price& value)  {
            m_first_away_prt_price = value;
        }
        void set_first_away_net_latency(const first_away_net_latency& value)  {
            m_first_away_net_latency = value;
        }
        void set_num_prints(const num_prints& value)  {
            m_num_prints = value;
        }
        void set_cum_print_size(const cum_print_size& value)  {
            m_cum_print_size = value;
        }
        void set_avg_print_price(const avg_print_price& value)  {
            m_avg_print_price = value;
        }
        void set_num_print_legs(const num_print_legs& value)  {
            m_num_print_legs = value;
        }
        void set_mark_m1(const mark_m1& value)  {
            m_mark_m1 = value;
        }
        void set_u_mark_m1(const u_mark_m1& value)  {
            m_u_mark_m1 = value;
        }
        void set_pnl_m1(const pnl_m1& value)  {
            m_pnl_m1 = value;
        }
        void set_pnl_m1_err(const pnl_m1_err& value)  {
            m_pnl_m1_err = value;
        }
        void set_mark_m10(const mark_m10& value)  {
            m_mark_m10 = value;
        }
        void set_u_mark_m10(const u_mark_m10& value)  {
            m_u_mark_m10 = value;
        }
        void set_pnl_m10(const pnl_m10& value)  {
            m_pnl_m10 = value;
        }
        void set_pnl_m10_err(const pnl_m10_err& value)  {
            m_pnl_m10_err = value;
        }
        void set_legs_list(const std::vector<legs>& list)  {
            m_legs = list;
        }
        void add_legs(const legs& item) {
            m_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionResult::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sr_auction_id & value) {
            set_sr_auction_id(value);
        }
        void set(const exch_auction_id & value) {
            set_exch_auction_id(value);
        }
        void set(const exch_auction_type & value) {
            set_exch_auction_type(value);
        }
        void set(const auction_shape & value) {
            set_auction_shape(value);
        }
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const auction_side & value) {
            set_auction_side(value);
        }
        void set(const matched_size & value) {
            set_matched_size(value);
        }
        void set(const auction_size & value) {
            set_auction_size(value);
        }
        void set(const auction_price & value) {
            set_auction_price(value);
        }
        void set(const is_auction_price_valid & value) {
            set_is_auction_price_valid(value);
        }
        void set(const auction_duration & value) {
            set_auction_duration(value);
        }
        void set(const auction_start_timestamp & value) {
            set_auction_start_timestamp(value);
        }
        void set(const min_response_size & value) {
            set_min_response_size(value);
        }
        void set(const client_limit_type & value) {
            set_client_limit_type(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const member_mpid & value) {
            set_member_mpid(value);
        }
        void set(const client_accnt & value) {
            set_client_accnt(value);
        }
        void set(const other_detail & value) {
            set_other_detail(value);
        }
        void set(const market_status & value) {
            set_market_status(value);
        }
        void set(const num_updates & value) {
            set_num_updates(value);
        }
        void set(const auction_final_timestamp & value) {
            set_auction_final_timestamp(value);
        }
        void set(const auction_start_size & value) {
            set_auction_start_size(value);
        }
        void set(const auction_start_price & value) {
            set_auction_start_price(value);
        }
        void set(const auction_start_matched_size & value) {
            set_auction_start_matched_size(value);
        }
        void set(const num_responses & value) {
            set_num_responses(value);
        }
        void set(const best_response_size & value) {
            set_best_response_size(value);
        }
        void set(const best_response_price & value) {
            set_best_response_price(value);
        }
        void set(const cum_fill_quantity & value) {
            set_cum_fill_quantity(value);
        }
        void set(const avg_fill_price & value) {
            set_avg_fill_price(value);
        }
        void set(const auction_final_price & value) {
            set_auction_final_price(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const dgw_timestamp & value) {
            set_dgw_timestamp(value);
        }
        void set(const mmr_timestamp & value) {
            set_mmr_timestamp(value);
        }
        void set(const eng_timestamp & value) {
            set_eng_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const auction_start & value) {
            set_auction_start(value);
        }
        void set(const auction_nbbo_stance & value) {
            set_auction_nbbo_stance(value);
        }
        void set(const auction_exch_stance & value) {
            set_auction_exch_stance(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const cum_bid_size & value) {
            set_cum_bid_size(value);
        }
        void set(const cum_ask_size & value) {
            set_cum_ask_size(value);
        }
        void set(const exch_bid_prc & value) {
            set_exch_bid_prc(value);
        }
        void set(const exch_ask_prc & value) {
            set_exch_ask_prc(value);
        }
        void set(const exch_bid_size & value) {
            set_exch_bid_size(value);
        }
        void set(const exch_ask_size & value) {
            set_exch_ask_size(value);
        }
        void set(const rsp_probability & value) {
            set_rsp_probability(value);
        }
        void set(const svol & value) {
            set_svol(value);
        }
        void set(const sprc & value) {
            set_sprc(value);
        }
        void set(const vega & value) {
            set_vega(value);
        }
        void set(const delta & value) {
            set_delta(value);
        }
        void set(const s_edge_start & value) {
            set_s_edge_start(value);
        }
        void set(const s_edge_print & value) {
            set_s_edge_print(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const u_bid_t & value) {
            set_u_bid_t(value);
        }
        void set(const u_ask_t & value) {
            set_u_ask_t(value);
        }
        void set(const auction_print_result & value) {
            set_auction_print_result(value);
        }
        void set(const first_print_size & value) {
            set_first_print_size(value);
        }
        void set(const first_print_price & value) {
            set_first_print_price(value);
        }
        void set(const first_print_side & value) {
            set_first_print_side(value);
        }
        void set(const first_print_type & value) {
            set_first_print_type(value);
        }
        void set(const first_src_timestamp & value) {
            set_first_src_timestamp(value);
        }
        void set(const first_net_timestamp & value) {
            set_first_net_timestamp(value);
        }
        void set(const first_src_latency & value) {
            set_first_src_latency(value);
        }
        void set(const first_net_latency & value) {
            set_first_net_latency(value);
        }
        void set(const first_away_prt_size & value) {
            set_first_away_prt_size(value);
        }
        void set(const first_away_prt_price & value) {
            set_first_away_prt_price(value);
        }
        void set(const first_away_net_latency & value) {
            set_first_away_net_latency(value);
        }
        void set(const num_prints & value) {
            set_num_prints(value);
        }
        void set(const cum_print_size & value) {
            set_cum_print_size(value);
        }
        void set(const avg_print_price & value) {
            set_avg_print_price(value);
        }
        void set(const num_print_legs & value) {
            set_num_print_legs(value);
        }
        void set(const mark_m1 & value) {
            set_mark_m1(value);
        }
        void set(const u_mark_m1 & value) {
            set_u_mark_m1(value);
        }
        void set(const pnl_m1 & value) {
            set_pnl_m1(value);
        }
        void set(const pnl_m1_err & value) {
            set_pnl_m1_err(value);
        }
        void set(const mark_m10 & value) {
            set_mark_m10(value);
        }
        void set(const u_mark_m10 & value) {
            set_u_mark_m10(value);
        }
        void set(const pnl_m10 & value) {
            set_pnl_m10(value);
        }
        void set(const pnl_m10_err & value) {
            set_pnl_m10_err(value);
        }
        void set(const legs & value) {
            add_legs(value);
        }

        void set(const SpdrAuctionResult & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sr_auction_id);
            set(value.m_exch_auction_id);
            set(value.m_exch_auction_type);
            set(value.m_auction_shape);
            set(value.m_auction_type);
            set(value.m_auction_side);
            set(value.m_matched_size);
            set(value.m_auction_size);
            set(value.m_auction_price);
            set(value.m_is_auction_price_valid);
            set(value.m_auction_duration);
            set(value.m_auction_start_timestamp);
            set(value.m_min_response_size);
            set(value.m_client_limit_type);
            set(value.m_firm_type);
            set(value.m_member_mpid);
            set(value.m_client_accnt);
            set(value.m_other_detail);
            set(value.m_market_status);
            set(value.m_num_updates);
            set(value.m_auction_final_timestamp);
            set(value.m_auction_start_size);
            set(value.m_auction_start_price);
            set(value.m_auction_start_matched_size);
            set(value.m_num_responses);
            set(value.m_best_response_size);
            set(value.m_best_response_price);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_price);
            set(value.m_auction_final_price);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_dgw_timestamp);
            set(value.m_mmr_timestamp);
            set(value.m_eng_timestamp);
            set(value.m_timestamp);
            set(value.m_auction_start);
            set(value.m_auction_nbbo_stance);
            set(value.m_auction_exch_stance);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_cum_bid_size);
            set(value.m_cum_ask_size);
            set(value.m_exch_bid_prc);
            set(value.m_exch_ask_prc);
            set(value.m_exch_bid_size);
            set(value.m_exch_ask_size);
            set(value.m_rsp_probability);
            set(value.m_svol);
            set(value.m_sprc);
            set(value.m_vega);
            set(value.m_delta);
            set(value.m_s_edge_start);
            set(value.m_s_edge_print);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_u_bid_t);
            set(value.m_u_ask_t);
            set(value.m_auction_print_result);
            set(value.m_first_print_size);
            set(value.m_first_print_price);
            set(value.m_first_print_side);
            set(value.m_first_print_type);
            set(value.m_first_src_timestamp);
            set(value.m_first_net_timestamp);
            set(value.m_first_src_latency);
            set(value.m_first_net_latency);
            set(value.m_first_away_prt_size);
            set(value.m_first_away_prt_price);
            set(value.m_first_away_net_latency);
            set(value.m_num_prints);
            set(value.m_cum_print_size);
            set(value.m_avg_print_price);
            set(value.m_num_print_legs);
            set(value.m_mark_m1);
            set(value.m_u_mark_m1);
            set(value.m_pnl_m1);
            set(value.m_pnl_m1_err);
            set(value.m_mark_m10);
            set(value.m_u_mark_m10);
            set(value.m_pnl_m10);
            set(value.m_pnl_m10_err);set_legs_list(value.m_legs);
        }

        SpdrAuctionResult() {
            m__meta.set_message_type("SpdrAuctionResult");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2520, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2520, length);
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
             *this = SpdrAuctionResult{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSrAuctionId() const {
            return !(m_sr_auction_id == 0);
        }
        bool IncludeExchAuctionId() const {
            return !(m_exch_auction_id.empty());
        }
        bool IncludeExchAuctionType() const {
            return !(m_exch_auction_type.empty());
        }
        bool IncludeMatchedSize() const {
            return !(m_matched_size == 0);
        }
        bool IncludeAuctionSize() const {
            return !(m_auction_size == 0);
        }
        bool IncludeAuctionPrice() const {
            return !(m_auction_price == 0.0);
        }
        bool IncludeAuctionDuration() const {
            return !(m_auction_duration == 0);
        }
        bool IncludeAuctionStartTimestamp() const {
            return !(m_auction_start_timestamp == 0);
        }
        bool IncludeMinResponseSize() const {
            return !(m_min_response_size == 0);
        }
        bool IncludeMemberMpid() const {
            return !(m_member_mpid.empty());
        }
        bool IncludeClientAccnt() const {
            return !(m_client_accnt.empty());
        }
        bool IncludeOtherDetail() const {
            return !(m_other_detail.empty());
        }
        bool IncludeNumUpdates() const {
            return !(m_num_updates == 0);
        }
        bool IncludeAuctionFinalTimestamp() const {
            return !(m_auction_final_timestamp == 0);
        }
        bool IncludeAuctionStartSize() const {
            return !(m_auction_start_size == 0);
        }
        bool IncludeAuctionStartPrice() const {
            return !(m_auction_start_price == 0.0);
        }
        bool IncludeAuctionStartMatchedSize() const {
            return !(m_auction_start_matched_size == 0);
        }
        bool IncludeNumResponses() const {
            return !(m_num_responses == 0);
        }
        bool IncludeBestResponseSize() const {
            return !(m_best_response_size == 0);
        }
        bool IncludeBestResponsePrice() const {
            return !(m_best_response_price == 0.0);
        }
        bool IncludeCumFillQuantity() const {
            return !(m_cum_fill_quantity == 0);
        }
        bool IncludeAvgFillPrice() const {
            return !(m_avg_fill_price == 0.0);
        }
        bool IncludeAuctionFinalPrice() const {
            return !(m_auction_final_price == 0.0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeDgwTimestamp() const {
            return !(m_dgw_timestamp == 0);
        }
        bool IncludeMmrTimestamp() const {
            return !(m_mmr_timestamp == 0);
        }
        bool IncludeEngTimestamp() const {
            return !(m_eng_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAuctionStart() const {
            return !(m_auction_start == 0.0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeCumBidSize() const {
            return !(m_cum_bid_size == 0);
        }
        bool IncludeCumAskSize() const {
            return !(m_cum_ask_size == 0);
        }
        bool IncludeExchBidPrc() const {
            return !(m_exch_bid_prc == 0.0);
        }
        bool IncludeExchAskPrc() const {
            return !(m_exch_ask_prc == 0.0);
        }
        bool IncludeExchBidSize() const {
            return !(m_exch_bid_size == 0);
        }
        bool IncludeExchAskSize() const {
            return !(m_exch_ask_size == 0);
        }
        bool IncludeRspProbability() const {
            return !(m_rsp_probability == 0.0);
        }
        bool IncludeSvol() const {
            return !(m_svol == 0.0);
        }
        bool IncludeSprc() const {
            return !(m_sprc == 0.0);
        }
        bool IncludeVega() const {
            return !(m_vega == 0.0);
        }
        bool IncludeDelta() const {
            return !(m_delta == 0.0);
        }
        bool IncludeSEdgeStart() const {
            return !(m_s_edge_start == 0.0);
        }
        bool IncludeSEdgePrint() const {
            return !(m_s_edge_print == 0.0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeUBidT() const {
            return !(m_u_bid_t == 0.0);
        }
        bool IncludeUAskT() const {
            return !(m_u_ask_t == 0.0);
        }
        bool IncludeFirstPrintSize() const {
            return !(m_first_print_size == 0.0);
        }
        bool IncludeFirstPrintPrice() const {
            return !(m_first_print_price == 0.0);
        }
        bool IncludeFirstSrcTimestamp() const {
            return !(m_first_src_timestamp == 0);
        }
        bool IncludeFirstNetTimestamp() const {
            return !(m_first_net_timestamp == 0);
        }
        bool IncludeFirstSrcLatency() const {
            return !(m_first_src_latency == 0.0);
        }
        bool IncludeFirstNetLatency() const {
            return !(m_first_net_latency == 0.0);
        }
        bool IncludeFirstAwayPrtSize() const {
            return !(m_first_away_prt_size == 0);
        }
        bool IncludeFirstAwayPrtPrice() const {
            return !(m_first_away_prt_price == 0.0);
        }
        bool IncludeFirstAwayNetLatency() const {
            return !(m_first_away_net_latency == 0.0);
        }
        bool IncludeNumPrints() const {
            return !(m_num_prints == 0);
        }
        bool IncludeCumPrintSize() const {
            return !(m_cum_print_size == 0);
        }
        bool IncludeAvgPrintPrice() const {
            return !(m_avg_print_price == 0.0);
        }
        bool IncludeNumPrintLegs() const {
            return !(m_num_print_legs == 0);
        }
        bool IncludeMarkM1() const {
            return !(m_mark_m1 == 0.0);
        }
        bool IncludeUMarkM1() const {
            return !(m_u_mark_m1 == 0.0);
        }
        bool IncludePnlM1() const {
            return !(m_pnl_m1 == 0.0);
        }
        bool IncludeMarkM10() const {
            return !(m_mark_m10 == 0.0);
        }
        bool IncludeUMarkM10() const {
            return !(m_u_mark_m10 == 0.0);
        }
        bool IncludePnlM10() const {
            return !(m_pnl_m10 == 0.0);
        }
        bool IncludeLegs() const {
            return (!m_legs.empty());
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
            if ( IncludeSrAuctionId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_sr_auction_id);
            }
            if ( IncludeExchAuctionId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_exch_auction_id);
            }
            if ( IncludeExchAuctionType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_exch_auction_type);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeShape>(m_auction_shape)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_auction_side)));
            if ( IncludeMatchedSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_matched_size);
            }
            if ( IncludeAuctionSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_auction_size);
            }
            if ( IncludeAuctionPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_auction_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_auction_price_valid)));
            if ( IncludeAuctionDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(130,m_auction_duration);
            }
            if ( IncludeAuctionStartTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_auction_start_timestamp);
            }
            if ( IncludeMinResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_min_response_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionLimitType>(m_client_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludeMemberMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_member_mpid);
            }
            if ( IncludeClientAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_client_accnt);
            }
            if ( IncludeOtherDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_other_detail);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeNumUpdates()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_num_updates);
            }
            if ( IncludeAuctionFinalTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_auction_final_timestamp);
            }
            if ( IncludeAuctionStartSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_auction_start_size);
            }
            if ( IncludeAuctionStartPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(166,m_auction_start_price);
            }
            if ( IncludeAuctionStartMatchedSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_auction_start_matched_size);
            }
            if ( IncludeNumResponses()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_num_responses);
            }
            if ( IncludeBestResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_best_response_size);
            }
            if ( IncludeBestResponsePrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(178,m_best_response_price);
            }
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(181,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(184,m_avg_fill_price);
            }
            if ( IncludeAuctionFinalPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(187,m_auction_final_price);
            }
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(190,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(193,m_net_timestamp);
            }
            if ( IncludeDgwTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(196,m_dgw_timestamp);
            }
            if ( IncludeMmrTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(199,m_mmr_timestamp);
            }
            if ( IncludeEngTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(202,m_eng_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(205, m_timestamp);
            }
            if ( IncludeAuctionStart()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(223,m_auction_start);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionMktStance>(m_auction_nbbo_stance)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionMktStance>(m_auction_exch_stance)));
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_ask_price);
            }
            if ( IncludeCumBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(238,m_cum_bid_size);
            }
            if ( IncludeCumAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(241,m_cum_ask_size);
            }
            if ( IncludeExchBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_exch_bid_prc);
            }
            if ( IncludeExchAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_exch_ask_prc);
            }
            if ( IncludeExchBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(250,m_exch_bid_size);
            }
            if ( IncludeExchAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(253,m_exch_ask_size);
            }
            if ( IncludeRspProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_rsp_probability);
            }
            if ( IncludeSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_svol);
            }
            if ( IncludeSprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_sprc);
            }
            if ( IncludeVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_vega);
            }
            if ( IncludeDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_delta);
            }
            if ( IncludeSEdgeStart()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_s_edge_start);
            }
            if ( IncludeSEdgePrint()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_s_edge_print);
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(277,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(280,m_u_ask);
            }
            if ( IncludeUBidT()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(283,m_u_bid_t);
            }
            if ( IncludeUAskT()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_u_ask_t);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionPrintResult>(m_auction_print_result)));
            if ( IncludeFirstPrintSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(292,m_first_print_size);
            }
            if ( IncludeFirstPrintPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(295,m_first_print_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_first_print_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_first_print_type)));
            if ( IncludeFirstSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(304,m_first_src_timestamp);
            }
            if ( IncludeFirstNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(307,m_first_net_timestamp);
            }
            if ( IncludeFirstSrcLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(310,m_first_src_latency);
            }
            if ( IncludeFirstNetLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_first_net_latency);
            }
            if ( IncludeFirstAwayPrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(316,m_first_away_prt_size);
            }
            if ( IncludeFirstAwayPrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(319,m_first_away_prt_price);
            }
            if ( IncludeFirstAwayNetLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(322,m_first_away_net_latency);
            }
            if ( IncludeNumPrints()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(325,m_num_prints);
            }
            if ( IncludeCumPrintSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(328,m_cum_print_size);
            }
            if ( IncludeAvgPrintPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(331,m_avg_print_price);
            }
            if ( IncludeNumPrintLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(334,m_num_print_legs);
            }
            if ( IncludeMarkM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(337,m_mark_m1);
            }
            if ( IncludeUMarkM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(340,m_u_mark_m1);
            }
            if ( IncludePnlM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(343,m_pnl_m1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m1_err)));
            if ( IncludeMarkM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(349,m_mark_m10);
            }
            if ( IncludeUMarkM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(352,m_u_mark_m10);
            }
            if ( IncludePnlM10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(355,m_pnl_m10);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(358,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m10_err)));
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(208, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeSrAuctionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_sr_auction_id);
            }
            if ( IncludeExchAuctionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_exch_auction_id));
            }
            if ( IncludeExchAuctionType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_exch_auction_type));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeShape>(m_auction_shape)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_auction_side)));
            if ( IncludeMatchedSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_matched_size);
            }
            if ( IncludeAuctionSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_auction_size);
            }
            if ( IncludeAuctionPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_auction_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_auction_price_valid)));
            if ( IncludeAuctionDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,130,m_auction_duration);
            }
            if ( IncludeAuctionStartTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_auction_start_timestamp);
            }
            if ( IncludeMinResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_min_response_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionLimitType>(m_client_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludeMemberMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_member_mpid));
            }
            if ( IncludeClientAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_client_accnt));
            }
            if ( IncludeOtherDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_other_detail));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeNumUpdates()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_num_updates);
            }
            if ( IncludeAuctionFinalTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_auction_final_timestamp);
            }
            if ( IncludeAuctionStartSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_auction_start_size);
            }
            if ( IncludeAuctionStartPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,166,m_auction_start_price);
            }
            if ( IncludeAuctionStartMatchedSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_auction_start_matched_size);
            }
            if ( IncludeNumResponses()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_num_responses);
            }
            if ( IncludeBestResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_best_response_size);
            }
            if ( IncludeBestResponsePrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,178,m_best_response_price);
            }
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,181,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,184,m_avg_fill_price);
            }
            if ( IncludeAuctionFinalPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,187,m_auction_final_price);
            }
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,190,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,193,m_net_timestamp);
            }
            if ( IncludeDgwTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,196,m_dgw_timestamp);
            }
            if ( IncludeMmrTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,199,m_mmr_timestamp);
            }
            if ( IncludeEngTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,202,m_eng_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 205, m_timestamp);
            }
            if ( IncludeAuctionStart()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,223,m_auction_start);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionMktStance>(m_auction_nbbo_stance)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionMktStance>(m_auction_exch_stance)));
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_ask_price);
            }
            if ( IncludeCumBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,238,m_cum_bid_size);
            }
            if ( IncludeCumAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,241,m_cum_ask_size);
            }
            if ( IncludeExchBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_exch_bid_prc);
            }
            if ( IncludeExchAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_exch_ask_prc);
            }
            if ( IncludeExchBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,250,m_exch_bid_size);
            }
            if ( IncludeExchAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,253,m_exch_ask_size);
            }
            if ( IncludeRspProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_rsp_probability);
            }
            if ( IncludeSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_svol);
            }
            if ( IncludeSprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_sprc);
            }
            if ( IncludeVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_vega);
            }
            if ( IncludeDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_delta);
            }
            if ( IncludeSEdgeStart()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_s_edge_start);
            }
            if ( IncludeSEdgePrint()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_s_edge_print);
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,277,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,280,m_u_ask);
            }
            if ( IncludeUBidT()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,283,m_u_bid_t);
            }
            if ( IncludeUAskT()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_u_ask_t);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionPrintResult>(m_auction_print_result)));
            if ( IncludeFirstPrintSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,292,m_first_print_size);
            }
            if ( IncludeFirstPrintPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,295,m_first_print_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>(m_first_print_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_first_print_type)));
            if ( IncludeFirstSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,304,m_first_src_timestamp);
            }
            if ( IncludeFirstNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,307,m_first_net_timestamp);
            }
            if ( IncludeFirstSrcLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,310,m_first_src_latency);
            }
            if ( IncludeFirstNetLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_first_net_latency);
            }
            if ( IncludeFirstAwayPrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,316,m_first_away_prt_size);
            }
            if ( IncludeFirstAwayPrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,319,m_first_away_prt_price);
            }
            if ( IncludeFirstAwayNetLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,322,m_first_away_net_latency);
            }
            if ( IncludeNumPrints()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,325,m_num_prints);
            }
            if ( IncludeCumPrintSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,328,m_cum_print_size);
            }
            if ( IncludeAvgPrintPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,331,m_avg_print_price);
            }
            if ( IncludeNumPrintLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,334,m_num_print_legs);
            }
            if ( IncludeMarkM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,337,m_mark_m1);
            }
            if ( IncludeUMarkM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,340,m_u_mark_m1);
            }
            if ( IncludePnlM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,343,m_pnl_m1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m1_err)));
            if ( IncludeMarkM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,349,m_mark_m10);
            }
            if ( IncludeUMarkM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,352,m_u_mark_m10);
            }
            if ( IncludePnlM10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,355,m_pnl_m10);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,358,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_pnl_m10_err)));
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 208, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_sr_auction_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_auction_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_auction_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_shape = static_cast<spiderrock::protobuf::api::NoticeShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_matched_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_auction_price_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_auction_start_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_response_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_client_limit_type = static_cast<spiderrock::protobuf::api::AuctionLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_member_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_other_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_status = static_cast<spiderrock::protobuf::api::MarketStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_updates = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_auction_final_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_start_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_start_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_start_matched_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_responses = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_best_response_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_best_response_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_final_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_dgw_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_mmr_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_eng_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_start = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 226: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_nbbo_stance = static_cast<spiderrock::protobuf::api::AuctionMktStance>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_exch_stance = static_cast<spiderrock::protobuf::api::AuctionMktStance>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_exch_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_exch_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rsp_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_edge_start = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_edge_print = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_bid_t = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_ask_t = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 289: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_print_result = static_cast<spiderrock::protobuf::api::AuctionPrintResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 292: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_first_print_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 295: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_first_print_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 298: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_first_print_side = static_cast<spiderrock::protobuf::api::PrtSide>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 301: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_first_print_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_first_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_first_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_first_src_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_first_net_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_first_away_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_first_away_prt_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 322: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_first_away_net_latency = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_prints = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_print_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_print_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_print_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 337: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mark_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_mark_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 343: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 346: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pnl_m1_err = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mark_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_mark_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pnl_m10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 358: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_pnl_m10_err = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            legs item_legs;
                            item_legs.Decode(pos, pos+length);  
                            m_legs.emplace_back(item_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::_meta>() const { return SpdrAuctionResult::_meta{ m__meta}; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::pkey>() const { return SpdrAuctionResult::pkey{ m_pkey}; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::sr_auction_id>() const { return m_sr_auction_id; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::exch_auction_id>() const { return m_exch_auction_id; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::exch_auction_type>() const { return m_exch_auction_type; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeShape>( m_auction_shape)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_auction_side)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::matched_size>() const { return m_matched_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_size>() const { return m_auction_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_price>() const { return m_auction_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::is_auction_price_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_auction_price_valid)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_duration>() const { return m_auction_duration; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_start_timestamp>() const { return m_auction_start_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::min_response_size>() const { return m_min_response_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::client_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionLimitType>( m_client_limit_type)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::member_mpid>() const { return m_member_mpid; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::client_accnt>() const { return m_client_accnt; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::other_detail>() const { return m_other_detail; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::market_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>( m_market_status)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::num_updates>() const { return m_num_updates; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_final_timestamp>() const { return m_auction_final_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_start_size>() const { return m_auction_start_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_start_price>() const { return m_auction_start_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_start_matched_size>() const { return m_auction_start_matched_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::num_responses>() const { return m_num_responses; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::best_response_size>() const { return m_best_response_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::best_response_price>() const { return m_best_response_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_final_price>() const { return m_auction_final_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::dgw_timestamp>() const { return m_dgw_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::mmr_timestamp>() const { return m_mmr_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::eng_timestamp>() const { return m_eng_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_start>() const { return m_auction_start; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_nbbo_stance>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionMktStance>( m_auction_nbbo_stance)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_exch_stance>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionMktStance>( m_auction_exch_stance)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::bid_price>() const { return m_bid_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::ask_price>() const { return m_ask_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::cum_bid_size>() const { return m_cum_bid_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::cum_ask_size>() const { return m_cum_ask_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::exch_bid_prc>() const { return m_exch_bid_prc; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::exch_ask_prc>() const { return m_exch_ask_prc; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::exch_bid_size>() const { return m_exch_bid_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::exch_ask_size>() const { return m_exch_ask_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::rsp_probability>() const { return m_rsp_probability; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::svol>() const { return m_svol; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::sprc>() const { return m_sprc; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::vega>() const { return m_vega; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::delta>() const { return m_delta; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::s_edge_start>() const { return m_s_edge_start; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::s_edge_print>() const { return m_s_edge_print; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::u_bid>() const { return m_u_bid; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::u_ask>() const { return m_u_ask; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::u_bid_t>() const { return m_u_bid_t; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::u_ask_t>() const { return m_u_ask_t; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::auction_print_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionPrintResult>( m_auction_print_result)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_print_size>() const { return m_first_print_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_print_price>() const { return m_first_print_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_print_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSide>( m_first_print_side)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_print_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>( m_first_print_type)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_src_timestamp>() const { return m_first_src_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_net_timestamp>() const { return m_first_net_timestamp; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_src_latency>() const { return m_first_src_latency; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_net_latency>() const { return m_first_net_latency; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_away_prt_size>() const { return m_first_away_prt_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_away_prt_price>() const { return m_first_away_prt_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::first_away_net_latency>() const { return m_first_away_net_latency; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::num_prints>() const { return m_num_prints; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::cum_print_size>() const { return m_cum_print_size; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::avg_print_price>() const { return m_avg_print_price; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::num_print_legs>() const { return m_num_print_legs; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::mark_m1>() const { return m_mark_m1; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::u_mark_m1>() const { return m_u_mark_m1; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::pnl_m1>() const { return m_pnl_m1; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::pnl_m1_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_pnl_m1_err)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::mark_m10>() const { return m_mark_m10; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::u_mark_m10>() const { return m_u_mark_m10; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::pnl_m10>() const { return m_pnl_m10; }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::pnl_m10_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_pnl_m10_err)); }
    template<> inline const auto SpdrAuctionResult::get<SpdrAuctionResult::legs>(int i) const { return SpdrAuctionResult::legs{ get_legs(i)}; }
    template<> inline int SpdrAuctionResult::count<SpdrAuctionResult::legs>() const { return static_cast<int>( m_legs.size()); }
    template<> inline const auto SpdrAuctionResult_PKey::get<SpdrAuctionResult_PKey::sec_key>() const { return SpdrAuctionResult_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SpdrAuctionResult_PKey::get<SpdrAuctionResult_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrAuctionResult_PKey::get<SpdrAuctionResult_PKey::auction_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_auction_exch));}
    template<> inline const auto SpdrAuctionResult_PKey::get<SpdrAuctionResult_PKey::auction_ex_dest>() const { return m_auction_ex_dest; }
    template<> inline const auto SpdrAuctionResult_PKey::get<SpdrAuctionResult_PKey::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status));}
    
    template<> inline const auto SpdrAuctionResult_Legs::get<SpdrAuctionResult_Legs::leg_sec_key>() const { return SpdrAuctionResult_Legs::leg_sec_key{m_leg_sec_key}; }
    template<> inline const auto SpdrAuctionResult_Legs::get<SpdrAuctionResult_Legs::leg_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type));}
    template<> inline const auto SpdrAuctionResult_Legs::get<SpdrAuctionResult_Legs::leg_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side));}
    template<> inline const auto SpdrAuctionResult_Legs::get<SpdrAuctionResult_Legs::leg_ratio>() const { return m_leg_ratio; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionResult_PKey& m) {
        o << "\"sec_key\":{" << m.get<SpdrAuctionResult_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAuctionResult_PKey::sec_type>();
        o << ",\"auction_exch\":" << (int64_t)m.get<SpdrAuctionResult_PKey::auction_exch>();
        o << ",\"auction_ex_dest\":\"" << m.get<SpdrAuctionResult_PKey::auction_ex_dest>() << "\"";
        o << ",\"run_status\":" << (int64_t)m.get<SpdrAuctionResult_PKey::run_status>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionResult_Legs& m) {
        o << "\"leg_sec_key\":{" << m.get<SpdrAuctionResult_Legs::leg_sec_key>() << "}";
        o << ",\"leg_sec_type\":" << (int64_t)m.get<SpdrAuctionResult_Legs::leg_sec_type>();
        o << ",\"leg_side\":" << (int64_t)m.get<SpdrAuctionResult_Legs::leg_side>();
        o << ",\"leg_ratio\":" << m.get<SpdrAuctionResult_Legs::leg_ratio>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionResult& m) {
        o << "\"_meta\":{" << m.get<SpdrAuctionResult::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAuctionResult::pkey>() << "}";
        o << ",\"sr_auction_id\":" << m.get<SpdrAuctionResult::sr_auction_id>();
        o << ",\"exch_auction_id\":\"" << m.get<SpdrAuctionResult::exch_auction_id>() << "\"";
        o << ",\"exch_auction_type\":\"" << m.get<SpdrAuctionResult::exch_auction_type>() << "\"";
        o << ",\"auction_shape\":" << (int64_t)m.get<SpdrAuctionResult::auction_shape>();
        o << ",\"auction_type\":" << (int64_t)m.get<SpdrAuctionResult::auction_type>();
        o << ",\"auction_side\":" << (int64_t)m.get<SpdrAuctionResult::auction_side>();
        o << ",\"matched_size\":" << m.get<SpdrAuctionResult::matched_size>();
        o << ",\"auction_size\":" << m.get<SpdrAuctionResult::auction_size>();
        o << ",\"auction_price\":" << m.get<SpdrAuctionResult::auction_price>();
        o << ",\"is_auction_price_valid\":" << (int64_t)m.get<SpdrAuctionResult::is_auction_price_valid>();
        o << ",\"auction_duration\":" << m.get<SpdrAuctionResult::auction_duration>();
        o << ",\"auction_start_timestamp\":" << m.get<SpdrAuctionResult::auction_start_timestamp>();
        o << ",\"min_response_size\":" << m.get<SpdrAuctionResult::min_response_size>();
        o << ",\"client_limit_type\":" << (int64_t)m.get<SpdrAuctionResult::client_limit_type>();
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrAuctionResult::firm_type>();
        o << ",\"member_mpid\":\"" << m.get<SpdrAuctionResult::member_mpid>() << "\"";
        o << ",\"client_accnt\":\"" << m.get<SpdrAuctionResult::client_accnt>() << "\"";
        o << ",\"other_detail\":\"" << m.get<SpdrAuctionResult::other_detail>() << "\"";
        o << ",\"market_status\":" << (int64_t)m.get<SpdrAuctionResult::market_status>();
        o << ",\"num_updates\":" << m.get<SpdrAuctionResult::num_updates>();
        o << ",\"auction_final_timestamp\":" << m.get<SpdrAuctionResult::auction_final_timestamp>();
        o << ",\"auction_start_size\":" << m.get<SpdrAuctionResult::auction_start_size>();
        o << ",\"auction_start_price\":" << m.get<SpdrAuctionResult::auction_start_price>();
        o << ",\"auction_start_matched_size\":" << m.get<SpdrAuctionResult::auction_start_matched_size>();
        o << ",\"num_responses\":" << m.get<SpdrAuctionResult::num_responses>();
        o << ",\"best_response_size\":" << m.get<SpdrAuctionResult::best_response_size>();
        o << ",\"best_response_price\":" << m.get<SpdrAuctionResult::best_response_price>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrAuctionResult::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrAuctionResult::avg_fill_price>();
        o << ",\"auction_final_price\":" << m.get<SpdrAuctionResult::auction_final_price>();
        o << ",\"src_timestamp\":" << m.get<SpdrAuctionResult::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<SpdrAuctionResult::net_timestamp>();
        o << ",\"dgw_timestamp\":" << m.get<SpdrAuctionResult::dgw_timestamp>();
        o << ",\"mmr_timestamp\":" << m.get<SpdrAuctionResult::mmr_timestamp>();
        o << ",\"eng_timestamp\":" << m.get<SpdrAuctionResult::eng_timestamp>();
        {
            std::time_t tt = m.get<SpdrAuctionResult::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auction_start\":" << m.get<SpdrAuctionResult::auction_start>();
        o << ",\"auction_nbbo_stance\":" << (int64_t)m.get<SpdrAuctionResult::auction_nbbo_stance>();
        o << ",\"auction_exch_stance\":" << (int64_t)m.get<SpdrAuctionResult::auction_exch_stance>();
        o << ",\"bid_price\":" << m.get<SpdrAuctionResult::bid_price>();
        o << ",\"ask_price\":" << m.get<SpdrAuctionResult::ask_price>();
        o << ",\"cum_bid_size\":" << m.get<SpdrAuctionResult::cum_bid_size>();
        o << ",\"cum_ask_size\":" << m.get<SpdrAuctionResult::cum_ask_size>();
        o << ",\"exch_bid_prc\":" << m.get<SpdrAuctionResult::exch_bid_prc>();
        o << ",\"exch_ask_prc\":" << m.get<SpdrAuctionResult::exch_ask_prc>();
        o << ",\"exch_bid_size\":" << m.get<SpdrAuctionResult::exch_bid_size>();
        o << ",\"exch_ask_size\":" << m.get<SpdrAuctionResult::exch_ask_size>();
        o << ",\"rsp_probability\":" << m.get<SpdrAuctionResult::rsp_probability>();
        o << ",\"svol\":" << m.get<SpdrAuctionResult::svol>();
        o << ",\"sprc\":" << m.get<SpdrAuctionResult::sprc>();
        o << ",\"vega\":" << m.get<SpdrAuctionResult::vega>();
        o << ",\"delta\":" << m.get<SpdrAuctionResult::delta>();
        o << ",\"s_edge_start\":" << m.get<SpdrAuctionResult::s_edge_start>();
        o << ",\"s_edge_print\":" << m.get<SpdrAuctionResult::s_edge_print>();
        o << ",\"u_bid\":" << m.get<SpdrAuctionResult::u_bid>();
        o << ",\"u_ask\":" << m.get<SpdrAuctionResult::u_ask>();
        o << ",\"u_bid_t\":" << m.get<SpdrAuctionResult::u_bid_t>();
        o << ",\"u_ask_t\":" << m.get<SpdrAuctionResult::u_ask_t>();
        o << ",\"auction_print_result\":" << (int64_t)m.get<SpdrAuctionResult::auction_print_result>();
        o << ",\"first_print_size\":" << m.get<SpdrAuctionResult::first_print_size>();
        o << ",\"first_print_price\":" << m.get<SpdrAuctionResult::first_print_price>();
        o << ",\"first_print_side\":" << (int64_t)m.get<SpdrAuctionResult::first_print_side>();
        o << ",\"first_print_type\":" << (int64_t)m.get<SpdrAuctionResult::first_print_type>();
        o << ",\"first_src_timestamp\":" << m.get<SpdrAuctionResult::first_src_timestamp>();
        o << ",\"first_net_timestamp\":" << m.get<SpdrAuctionResult::first_net_timestamp>();
        o << ",\"first_src_latency\":" << m.get<SpdrAuctionResult::first_src_latency>();
        o << ",\"first_net_latency\":" << m.get<SpdrAuctionResult::first_net_latency>();
        o << ",\"first_away_prt_size\":" << m.get<SpdrAuctionResult::first_away_prt_size>();
        o << ",\"first_away_prt_price\":" << m.get<SpdrAuctionResult::first_away_prt_price>();
        o << ",\"first_away_net_latency\":" << m.get<SpdrAuctionResult::first_away_net_latency>();
        o << ",\"num_prints\":" << m.get<SpdrAuctionResult::num_prints>();
        o << ",\"cum_print_size\":" << m.get<SpdrAuctionResult::cum_print_size>();
        o << ",\"avg_print_price\":" << m.get<SpdrAuctionResult::avg_print_price>();
        o << ",\"num_print_legs\":" << m.get<SpdrAuctionResult::num_print_legs>();
        o << ",\"mark_m1\":" << m.get<SpdrAuctionResult::mark_m1>();
        o << ",\"u_mark_m1\":" << m.get<SpdrAuctionResult::u_mark_m1>();
        o << ",\"pnl_m1\":" << m.get<SpdrAuctionResult::pnl_m1>();
        o << ",\"pnl_m1_err\":" << (int64_t)m.get<SpdrAuctionResult::pnl_m1_err>();
        o << ",\"mark_m10\":" << m.get<SpdrAuctionResult::mark_m10>();
        o << ",\"u_mark_m10\":" << m.get<SpdrAuctionResult::u_mark_m10>();
        o << ",\"pnl_m10\":" << m.get<SpdrAuctionResult::pnl_m10>();
        o << ",\"pnl_m10_err\":" << (int64_t)m.get<SpdrAuctionResult::pnl_m10_err>();
        o << ",\"legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAuctionResult::legs>(); ++i) {
                o << delim << m.get<SpdrAuctionResult::legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}