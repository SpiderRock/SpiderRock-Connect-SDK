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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _option_roots__GUARD__
    #define _option_roots__GUARD__
    DECL_STRONG_TYPE(option_roots, string);
    #endif//_option_roots__GUARD__

    #ifndef _exch_auction_id__GUARD__
    #define _exch_auction_id__GUARD__
    DECL_STRONG_TYPE(exch_auction_id, string);
    #endif//_exch_auction_id__GUARD__

    #ifndef _exch_auction_type__GUARD__
    #define _exch_auction_type__GUARD__
    DECL_STRONG_TYPE(exch_auction_type, string);
    #endif//_exch_auction_type__GUARD__

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _auction_side__GUARD__
    #define _auction_side__GUARD__
    DECL_STRONG_TYPE(auction_side, spiderrock::protobuf::api::BuySell);
    #endif//_auction_side__GUARD__

    #ifndef _auction_size__GUARD__
    #define _auction_size__GUARD__
    DECL_STRONG_TYPE(auction_size, int32);
    #endif//_auction_size__GUARD__

    #ifndef _num_legs__GUARD__
    #define _num_legs__GUARD__
    DECL_STRONG_TYPE(num_legs, int32);
    #endif//_num_legs__GUARD__

    #ifndef _num_opt_legs__GUARD__
    #define _num_opt_legs__GUARD__
    DECL_STRONG_TYPE(num_opt_legs, int32);
    #endif//_num_opt_legs__GUARD__

    #ifndef _incl_stock__GUARD__
    #define _incl_stock__GUARD__
    DECL_STRONG_TYPE(incl_stock, spiderrock::protobuf::api::YesNo);
    #endif//_incl_stock__GUARD__

    #ifndef _incl_multihedge__GUARD__
    #define _incl_multihedge__GUARD__
    DECL_STRONG_TYPE(incl_multihedge, spiderrock::protobuf::api::YesNo);
    #endif//_incl_multihedge__GUARD__

    #ifndef _min_years__GUARD__
    #define _min_years__GUARD__
    DECL_STRONG_TYPE(min_years, float);
    #endif//_min_years__GUARD__

    #ifndef _max_years__GUARD__
    #define _max_years__GUARD__
    DECL_STRONG_TYPE(max_years, float);
    #endif//_max_years__GUARD__

    #ifndef _min_expiry__GUARD__
    #define _min_expiry__GUARD__
    DECL_STRONG_TYPE(min_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_min_expiry__GUARD__

    #ifndef _max_expiry__GUARD__
    #define _max_expiry__GUARD__
    DECL_STRONG_TYPE(max_expiry, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_expiry__GUARD__

    #ifndef _max_years_range__GUARD__
    #define _max_years_range__GUARD__
    DECL_STRONG_TYPE(max_years_range, float);
    #endif//_max_years_range__GUARD__

    #ifndef _min_abs_de__GUARD__
    #define _min_abs_de__GUARD__
    DECL_STRONG_TYPE(min_abs_de, float);
    #endif//_min_abs_de__GUARD__

    #ifndef _max_abs_de__GUARD__
    #define _max_abs_de__GUARD__
    DECL_STRONG_TYPE(max_abs_de, float);
    #endif//_max_abs_de__GUARD__

    #ifndef _min_xaxis__GUARD__
    #define _min_xaxis__GUARD__
    DECL_STRONG_TYPE(min_xaxis, float);
    #endif//_min_xaxis__GUARD__

    #ifndef _max_xaxis__GUARD__
    #define _max_xaxis__GUARD__
    DECL_STRONG_TYPE(max_xaxis, float);
    #endif//_max_xaxis__GUARD__

    #ifndef _min_strike__GUARD__
    #define _min_strike__GUARD__
    DECL_STRONG_TYPE(min_strike, float);
    #endif//_min_strike__GUARD__

    #ifndef _max_strike__GUARD__
    #define _max_strike__GUARD__
    DECL_STRONG_TYPE(max_strike, float);
    #endif//_max_strike__GUARD__

    #ifndef _max_strike_range__GUARD__
    #define _max_strike_range__GUARD__
    DECL_STRONG_TYPE(max_strike_range, float);
    #endif//_max_strike_range__GUARD__

    #ifndef _delta_range__GUARD__
    #define _delta_range__GUARD__
    DECL_STRONG_TYPE(delta_range, float);
    #endif//_delta_range__GUARD__

    #ifndef _auction_price__GUARD__
    #define _auction_price__GUARD__
    DECL_STRONG_TYPE(auction_price, double);
    #endif//_auction_price__GUARD__

    #ifndef _is_auction_price_valid__GUARD__
    #define _is_auction_price_valid__GUARD__
    DECL_STRONG_TYPE(is_auction_price_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_auction_price_valid__GUARD__

    #ifndef _surf_price__float__GUARD__
    #define _surf_price__float__GUARD__
    DECL_STRONG_TYPE(surf_price__float, float);
    #endif//_surf_price__float__GUARD__

    #ifndef _prob_price__GUARD__
    #define _prob_price__GUARD__
    DECL_STRONG_TYPE(prob_price, float);
    #endif//_prob_price__GUARD__

    #ifndef _bid_price__float__GUARD__
    #define _bid_price__float__GUARD__
    DECL_STRONG_TYPE(bid_price__float, float);
    #endif//_bid_price__float__GUARD__

    #ifndef _ask_price__float__GUARD__
    #define _ask_price__float__GUARD__
    DECL_STRONG_TYPE(ask_price__float, float);
    #endif//_ask_price__float__GUARD__

    #ifndef _spread_shape__GUARD__
    #define _spread_shape__GUARD__
    DECL_STRONG_TYPE(spread_shape, spiderrock::protobuf::api::SpreadShape);
    #endif//_spread_shape__GUARD__

    #ifndef _num_valid_legs__GUARD__
    #define _num_valid_legs__GUARD__
    DECL_STRONG_TYPE(num_valid_legs, int32);
    #endif//_num_valid_legs__GUARD__

    #ifndef _u_prc__float__GUARD__
    #define _u_prc__float__GUARD__
    DECL_STRONG_TYPE(u_prc__float, float);
    #endif//_u_prc__float__GUARD__

    #ifndef _pkg_abs_cn__GUARD__
    #define _pkg_abs_cn__GUARD__
    DECL_STRONG_TYPE(pkg_abs_cn, int32);
    #endif//_pkg_abs_cn__GUARD__

    #ifndef _pkg_net_cn__GUARD__
    #define _pkg_net_cn__GUARD__
    DECL_STRONG_TYPE(pkg_net_cn, int32);
    #endif//_pkg_net_cn__GUARD__

    #ifndef _pkg_abs_dde__GUARD__
    #define _pkg_abs_dde__GUARD__
    DECL_STRONG_TYPE(pkg_abs_dde, float);
    #endif//_pkg_abs_dde__GUARD__

    #ifndef _pkg_net_dde__GUARD__
    #define _pkg_net_dde__GUARD__
    DECL_STRONG_TYPE(pkg_net_dde, float);
    #endif//_pkg_net_dde__GUARD__

    #ifndef _pkg_abs_pr__GUARD__
    #define _pkg_abs_pr__GUARD__
    DECL_STRONG_TYPE(pkg_abs_pr, float);
    #endif//_pkg_abs_pr__GUARD__

    #ifndef _pkg_net_pr__GUARD__
    #define _pkg_net_pr__GUARD__
    DECL_STRONG_TYPE(pkg_net_pr, float);
    #endif//_pkg_net_pr__GUARD__

    #ifndef _pkg_abs_ve__GUARD__
    #define _pkg_abs_ve__GUARD__
    DECL_STRONG_TYPE(pkg_abs_ve, float);
    #endif//_pkg_abs_ve__GUARD__

    #ifndef _pkg_net_ve__GUARD__
    #define _pkg_net_ve__GUARD__
    DECL_STRONG_TYPE(pkg_net_ve, float);
    #endif//_pkg_net_ve__GUARD__

    #ifndef _pkg_abs_tve__GUARD__
    #define _pkg_abs_tve__GUARD__
    DECL_STRONG_TYPE(pkg_abs_tve, float);
    #endif//_pkg_abs_tve__GUARD__

    #ifndef _pkg_net_tve__GUARD__
    #define _pkg_net_tve__GUARD__
    DECL_STRONG_TYPE(pkg_net_tve, float);
    #endif//_pkg_net_tve__GUARD__

    #ifndef _pkg_abs_wve__GUARD__
    #define _pkg_abs_wve__GUARD__
    DECL_STRONG_TYPE(pkg_abs_wve, float);
    #endif//_pkg_abs_wve__GUARD__

    #ifndef _pkg_net_wve__GUARD__
    #define _pkg_net_wve__GUARD__
    DECL_STRONG_TYPE(pkg_net_wve, float);
    #endif//_pkg_net_wve__GUARD__

    #ifndef _pkg_abs_wtve__GUARD__
    #define _pkg_abs_wtve__GUARD__
    DECL_STRONG_TYPE(pkg_abs_wtve, float);
    #endif//_pkg_abs_wtve__GUARD__

    #ifndef _pkg_net_wtve__GUARD__
    #define _pkg_net_wtve__GUARD__
    DECL_STRONG_TYPE(pkg_net_wtve, float);
    #endif//_pkg_net_wtve__GUARD__

    #ifndef _pkg_abs_th__GUARD__
    #define _pkg_abs_th__GUARD__
    DECL_STRONG_TYPE(pkg_abs_th, float);
    #endif//_pkg_abs_th__GUARD__

    #ifndef _pkg_net_th__GUARD__
    #define _pkg_net_th__GUARD__
    DECL_STRONG_TYPE(pkg_net_th, float);
    #endif//_pkg_net_th__GUARD__

    #ifndef _pkg_abs_dth__GUARD__
    #define _pkg_abs_dth__GUARD__
    DECL_STRONG_TYPE(pkg_abs_dth, float);
    #endif//_pkg_abs_dth__GUARD__

    #ifndef _pkg_abs_ga__GUARD__
    #define _pkg_abs_ga__GUARD__
    DECL_STRONG_TYPE(pkg_abs_ga, float);
    #endif//_pkg_abs_ga__GUARD__

    #ifndef _pkg_net_ga__GUARD__
    #define _pkg_net_ga__GUARD__
    DECL_STRONG_TYPE(pkg_net_ga, float);
    #endif//_pkg_net_ga__GUARD__

    #ifndef _pkg_abs_dga__GUARD__
    #define _pkg_abs_dga__GUARD__
    DECL_STRONG_TYPE(pkg_abs_dga, float);
    #endif//_pkg_abs_dga__GUARD__

    #ifndef _pkg_net_dga__GUARD__
    #define _pkg_net_dga__GUARD__
    DECL_STRONG_TYPE(pkg_net_dga, float);
    #endif//_pkg_net_dga__GUARD__

    #ifndef _pkg_net_uup_vup__GUARD__
    #define _pkg_net_uup_vup__GUARD__
    DECL_STRONG_TYPE(pkg_net_uup_vup, float);
    #endif//_pkg_net_uup_vup__GUARD__

    #ifndef _pkg_net_uup_vdn__GUARD__
    #define _pkg_net_uup_vdn__GUARD__
    DECL_STRONG_TYPE(pkg_net_uup_vdn, float);
    #endif//_pkg_net_uup_vdn__GUARD__

    #ifndef _pkg_net_udn_vup__GUARD__
    #define _pkg_net_udn_vup__GUARD__
    DECL_STRONG_TYPE(pkg_net_udn_vup, float);
    #endif//_pkg_net_udn_vup__GUARD__

    #ifndef _pkg_net_udn_vdn__GUARD__
    #define _pkg_net_udn_vdn__GUARD__
    DECL_STRONG_TYPE(pkg_net_udn_vdn, float);
    #endif//_pkg_net_udn_vdn__GUARD__

    #ifndef _pkg_net_up15_pn_l__GUARD__
    #define _pkg_net_up15_pn_l__GUARD__
    DECL_STRONG_TYPE(pkg_net_up15_pn_l, float);
    #endif//_pkg_net_up15_pn_l__GUARD__

    #ifndef _pkg_net_dn15_pn_l__GUARD__
    #define _pkg_net_dn15_pn_l__GUARD__
    DECL_STRONG_TYPE(pkg_net_dn15_pn_l, float);
    #endif//_pkg_net_dn15_pn_l__GUARD__

    #ifndef _pkg_net_up50_pn_l__GUARD__
    #define _pkg_net_up50_pn_l__GUARD__
    DECL_STRONG_TYPE(pkg_net_up50_pn_l, float);
    #endif//_pkg_net_up50_pn_l__GUARD__

    #ifndef _pkg_net_dn50_pn_l__GUARD__
    #define _pkg_net_dn50_pn_l__GUARD__
    DECL_STRONG_TYPE(pkg_net_dn50_pn_l, float);
    #endif//_pkg_net_dn50_pn_l__GUARD__

    #ifndef _markup_result__GUARD__
    #define _markup_result__GUARD__
    DECL_STRONG_TYPE(markup_result, spiderrock::protobuf::api::MarkupResult);
    #endif//_markup_result__GUARD__

    #ifndef _markup_detail__GUARD__
    #define _markup_detail__GUARD__
    DECL_STRONG_TYPE(markup_detail, string);
    #endif//_markup_detail__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

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

    
    class SpdrAuctionMarkup_PKey {
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
		sec_key get_sec_key() const {
            return m_sec_key;
        }
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionMarkup_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionMarkup_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const auction_exch & value) { set_auction_exch(value); }
        void set(const auction_ex_dest & value) { set_auction_ex_dest(value); }
        void set(const run_status & value) { set_run_status(value); }


        SpdrAuctionMarkup_PKey() {}

        virtual ~SpdrAuctionMarkup_PKey() {
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
    

    class SpdrAuctionMarkup {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAuctionMarkup_PKey;
        using sr_auction_id = spiderrock::protobuf::api::sr_auction_id;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using option_roots = spiderrock::protobuf::api::option_roots;
        using exch_auction_id = spiderrock::protobuf::api::exch_auction_id;
        using exch_auction_type = spiderrock::protobuf::api::exch_auction_type;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_side = spiderrock::protobuf::api::auction_side;
        using auction_size = spiderrock::protobuf::api::auction_size;
        using num_legs = spiderrock::protobuf::api::num_legs;
        using num_opt_legs = spiderrock::protobuf::api::num_opt_legs;
        using incl_stock = spiderrock::protobuf::api::incl_stock;
        using incl_multihedge = spiderrock::protobuf::api::incl_multihedge;
        using min_years = spiderrock::protobuf::api::min_years;
        using max_years = spiderrock::protobuf::api::max_years;
        using min_expiry = spiderrock::protobuf::api::min_expiry;
        using max_expiry = spiderrock::protobuf::api::max_expiry;
        using max_years_range = spiderrock::protobuf::api::max_years_range;
        using min_abs_de = spiderrock::protobuf::api::min_abs_de;
        using max_abs_de = spiderrock::protobuf::api::max_abs_de;
        using min_xaxis = spiderrock::protobuf::api::min_xaxis;
        using max_xaxis = spiderrock::protobuf::api::max_xaxis;
        using min_strike = spiderrock::protobuf::api::min_strike;
        using max_strike = spiderrock::protobuf::api::max_strike;
        using max_strike_range = spiderrock::protobuf::api::max_strike_range;
        using delta_range = spiderrock::protobuf::api::delta_range;
        using auction_price = spiderrock::protobuf::api::auction_price;
        using is_auction_price_valid = spiderrock::protobuf::api::is_auction_price_valid;
        using surf_price = spiderrock::protobuf::api::surf_price__float;
        using prob_price = spiderrock::protobuf::api::prob_price;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using spread_shape = spiderrock::protobuf::api::spread_shape;
        using num_valid_legs = spiderrock::protobuf::api::num_valid_legs;
        using u_prc = spiderrock::protobuf::api::u_prc__float;
        using pkg_abs_cn = spiderrock::protobuf::api::pkg_abs_cn;
        using pkg_net_cn = spiderrock::protobuf::api::pkg_net_cn;
        using pkg_abs_dde = spiderrock::protobuf::api::pkg_abs_dde;
        using pkg_net_dde = spiderrock::protobuf::api::pkg_net_dde;
        using pkg_abs_pr = spiderrock::protobuf::api::pkg_abs_pr;
        using pkg_net_pr = spiderrock::protobuf::api::pkg_net_pr;
        using pkg_abs_ve = spiderrock::protobuf::api::pkg_abs_ve;
        using pkg_net_ve = spiderrock::protobuf::api::pkg_net_ve;
        using pkg_abs_tve = spiderrock::protobuf::api::pkg_abs_tve;
        using pkg_net_tve = spiderrock::protobuf::api::pkg_net_tve;
        using pkg_abs_wve = spiderrock::protobuf::api::pkg_abs_wve;
        using pkg_net_wve = spiderrock::protobuf::api::pkg_net_wve;
        using pkg_abs_wtve = spiderrock::protobuf::api::pkg_abs_wtve;
        using pkg_net_wtve = spiderrock::protobuf::api::pkg_net_wtve;
        using pkg_abs_th = spiderrock::protobuf::api::pkg_abs_th;
        using pkg_net_th = spiderrock::protobuf::api::pkg_net_th;
        using pkg_abs_dth = spiderrock::protobuf::api::pkg_abs_dth;
        using pkg_abs_ga = spiderrock::protobuf::api::pkg_abs_ga;
        using pkg_net_ga = spiderrock::protobuf::api::pkg_net_ga;
        using pkg_abs_dga = spiderrock::protobuf::api::pkg_abs_dga;
        using pkg_net_dga = spiderrock::protobuf::api::pkg_net_dga;
        using pkg_net_uup_vup = spiderrock::protobuf::api::pkg_net_uup_vup;
        using pkg_net_uup_vdn = spiderrock::protobuf::api::pkg_net_uup_vdn;
        using pkg_net_udn_vup = spiderrock::protobuf::api::pkg_net_udn_vup;
        using pkg_net_udn_vdn = spiderrock::protobuf::api::pkg_net_udn_vdn;
        using pkg_net_up15_pn_l = spiderrock::protobuf::api::pkg_net_up15_pn_l;
        using pkg_net_dn15_pn_l = spiderrock::protobuf::api::pkg_net_dn15_pn_l;
        using pkg_net_up50_pn_l = spiderrock::protobuf::api::pkg_net_up50_pn_l;
        using pkg_net_dn50_pn_l = spiderrock::protobuf::api::pkg_net_dn50_pn_l;
        using markup_result = spiderrock::protobuf::api::markup_result;
        using markup_detail = spiderrock::protobuf::api::markup_detail;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sr_auction_id m_sr_auction_id{};
        ticker m_ticker{};
        option_roots m_option_roots{};
        exch_auction_id m_exch_auction_id{};
        exch_auction_type m_exch_auction_type{};
        auction_type m_auction_type{};
        auction_side m_auction_side{};
        auction_size m_auction_size{};
        num_legs m_num_legs{};
        num_opt_legs m_num_opt_legs{};
        incl_stock m_incl_stock{};
        incl_multihedge m_incl_multihedge{};
        min_years m_min_years{};
        max_years m_max_years{};
        min_expiry m_min_expiry{};
        max_expiry m_max_expiry{};
        max_years_range m_max_years_range{};
        min_abs_de m_min_abs_de{};
        max_abs_de m_max_abs_de{};
        min_xaxis m_min_xaxis{};
        max_xaxis m_max_xaxis{};
        min_strike m_min_strike{};
        max_strike m_max_strike{};
        max_strike_range m_max_strike_range{};
        delta_range m_delta_range{};
        auction_price m_auction_price{};
        is_auction_price_valid m_is_auction_price_valid{};
        surf_price m_surf_price{};
        prob_price m_prob_price{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        spread_shape m_spread_shape{};
        num_valid_legs m_num_valid_legs{};
        u_prc m_u_prc{};
        pkg_abs_cn m_pkg_abs_cn{};
        pkg_net_cn m_pkg_net_cn{};
        pkg_abs_dde m_pkg_abs_dde{};
        pkg_net_dde m_pkg_net_dde{};
        pkg_abs_pr m_pkg_abs_pr{};
        pkg_net_pr m_pkg_net_pr{};
        pkg_abs_ve m_pkg_abs_ve{};
        pkg_net_ve m_pkg_net_ve{};
        pkg_abs_tve m_pkg_abs_tve{};
        pkg_net_tve m_pkg_net_tve{};
        pkg_abs_wve m_pkg_abs_wve{};
        pkg_net_wve m_pkg_net_wve{};
        pkg_abs_wtve m_pkg_abs_wtve{};
        pkg_net_wtve m_pkg_net_wtve{};
        pkg_abs_th m_pkg_abs_th{};
        pkg_net_th m_pkg_net_th{};
        pkg_abs_dth m_pkg_abs_dth{};
        pkg_abs_ga m_pkg_abs_ga{};
        pkg_net_ga m_pkg_net_ga{};
        pkg_abs_dga m_pkg_abs_dga{};
        pkg_net_dga m_pkg_net_dga{};
        pkg_net_uup_vup m_pkg_net_uup_vup{};
        pkg_net_uup_vdn m_pkg_net_uup_vdn{};
        pkg_net_udn_vup m_pkg_net_udn_vup{};
        pkg_net_udn_vdn m_pkg_net_udn_vdn{};
        pkg_net_up15_pn_l m_pkg_net_up15_pn_l{};
        pkg_net_dn15_pn_l m_pkg_net_dn15_pn_l{};
        pkg_net_up50_pn_l m_pkg_net_up50_pn_l{};
        pkg_net_dn50_pn_l m_pkg_net_dn50_pn_l{};
        markup_result m_markup_result{};
        markup_detail m_markup_detail{};
        timestamp m_timestamp{};

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
        ticker get_ticker() const {
            return m_ticker;
        }		
        option_roots get_option_roots() const {
            return m_option_roots;
        }		
        exch_auction_id get_exch_auction_id() const {
            return m_exch_auction_id;
        }		
        exch_auction_type get_exch_auction_type() const {
            return m_exch_auction_type;
        }		
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        auction_side get_auction_side() const {
            return m_auction_side;
        }		
        auction_size get_auction_size() const {
            return m_auction_size;
        }		
        num_legs get_num_legs() const {
            return m_num_legs;
        }		
        num_opt_legs get_num_opt_legs() const {
            return m_num_opt_legs;
        }		
        incl_stock get_incl_stock() const {
            return m_incl_stock;
        }		
        incl_multihedge get_incl_multihedge() const {
            return m_incl_multihedge;
        }		
        min_years get_min_years() const {
            return m_min_years;
        }		
        max_years get_max_years() const {
            return m_max_years;
        }		
        min_expiry get_min_expiry() const {
            return m_min_expiry;
        }		
        max_expiry get_max_expiry() const {
            return m_max_expiry;
        }		
        max_years_range get_max_years_range() const {
            return m_max_years_range;
        }		
        min_abs_de get_min_abs_de() const {
            return m_min_abs_de;
        }		
        max_abs_de get_max_abs_de() const {
            return m_max_abs_de;
        }		
        min_xaxis get_min_xaxis() const {
            return m_min_xaxis;
        }		
        max_xaxis get_max_xaxis() const {
            return m_max_xaxis;
        }		
        min_strike get_min_strike() const {
            return m_min_strike;
        }		
        max_strike get_max_strike() const {
            return m_max_strike;
        }		
        max_strike_range get_max_strike_range() const {
            return m_max_strike_range;
        }		
        delta_range get_delta_range() const {
            return m_delta_range;
        }		
        auction_price get_auction_price() const {
            return m_auction_price;
        }		
        is_auction_price_valid get_is_auction_price_valid() const {
            return m_is_auction_price_valid;
        }		
        surf_price get_surf_price() const {
            return m_surf_price;
        }		
        prob_price get_prob_price() const {
            return m_prob_price;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        spread_shape get_spread_shape() const {
            return m_spread_shape;
        }		
        num_valid_legs get_num_valid_legs() const {
            return m_num_valid_legs;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        pkg_abs_cn get_pkg_abs_cn() const {
            return m_pkg_abs_cn;
        }		
        pkg_net_cn get_pkg_net_cn() const {
            return m_pkg_net_cn;
        }		
        pkg_abs_dde get_pkg_abs_dde() const {
            return m_pkg_abs_dde;
        }		
        pkg_net_dde get_pkg_net_dde() const {
            return m_pkg_net_dde;
        }		
        pkg_abs_pr get_pkg_abs_pr() const {
            return m_pkg_abs_pr;
        }		
        pkg_net_pr get_pkg_net_pr() const {
            return m_pkg_net_pr;
        }		
        pkg_abs_ve get_pkg_abs_ve() const {
            return m_pkg_abs_ve;
        }		
        pkg_net_ve get_pkg_net_ve() const {
            return m_pkg_net_ve;
        }		
        pkg_abs_tve get_pkg_abs_tve() const {
            return m_pkg_abs_tve;
        }		
        pkg_net_tve get_pkg_net_tve() const {
            return m_pkg_net_tve;
        }		
        pkg_abs_wve get_pkg_abs_wve() const {
            return m_pkg_abs_wve;
        }		
        pkg_net_wve get_pkg_net_wve() const {
            return m_pkg_net_wve;
        }		
        pkg_abs_wtve get_pkg_abs_wtve() const {
            return m_pkg_abs_wtve;
        }		
        pkg_net_wtve get_pkg_net_wtve() const {
            return m_pkg_net_wtve;
        }		
        pkg_abs_th get_pkg_abs_th() const {
            return m_pkg_abs_th;
        }		
        pkg_net_th get_pkg_net_th() const {
            return m_pkg_net_th;
        }		
        pkg_abs_dth get_pkg_abs_dth() const {
            return m_pkg_abs_dth;
        }		
        pkg_abs_ga get_pkg_abs_ga() const {
            return m_pkg_abs_ga;
        }		
        pkg_net_ga get_pkg_net_ga() const {
            return m_pkg_net_ga;
        }		
        pkg_abs_dga get_pkg_abs_dga() const {
            return m_pkg_abs_dga;
        }		
        pkg_net_dga get_pkg_net_dga() const {
            return m_pkg_net_dga;
        }		
        pkg_net_uup_vup get_pkg_net_uup_vup() const {
            return m_pkg_net_uup_vup;
        }		
        pkg_net_uup_vdn get_pkg_net_uup_vdn() const {
            return m_pkg_net_uup_vdn;
        }		
        pkg_net_udn_vup get_pkg_net_udn_vup() const {
            return m_pkg_net_udn_vup;
        }		
        pkg_net_udn_vdn get_pkg_net_udn_vdn() const {
            return m_pkg_net_udn_vdn;
        }		
        pkg_net_up15_pn_l get_pkg_net_up15_pn_l() const {
            return m_pkg_net_up15_pn_l;
        }		
        pkg_net_dn15_pn_l get_pkg_net_dn15_pn_l() const {
            return m_pkg_net_dn15_pn_l;
        }		
        pkg_net_up50_pn_l get_pkg_net_up50_pn_l() const {
            return m_pkg_net_up50_pn_l;
        }		
        pkg_net_dn50_pn_l get_pkg_net_dn50_pn_l() const {
            return m_pkg_net_dn50_pn_l;
        }		
        markup_result get_markup_result() const {
            return m_markup_result;
        }		
        markup_detail get_markup_detail() const {
            return m_markup_detail;
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
        void set_sr_auction_id(const sr_auction_id& value)  {
            m_sr_auction_id = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_option_roots(const option_roots& value)  {
            m_option_roots = value;
        }
        void set_exch_auction_id(const exch_auction_id& value)  {
            m_exch_auction_id = value;
        }
        void set_exch_auction_type(const exch_auction_type& value)  {
            m_exch_auction_type = value;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_auction_side(const auction_side& value)  {
            m_auction_side = value;
        }
        void set_auction_size(const auction_size& value)  {
            m_auction_size = value;
        }
        void set_num_legs(const num_legs& value)  {
            m_num_legs = value;
        }
        void set_num_opt_legs(const num_opt_legs& value)  {
            m_num_opt_legs = value;
        }
        void set_incl_stock(const incl_stock& value)  {
            m_incl_stock = value;
        }
        void set_incl_multihedge(const incl_multihedge& value)  {
            m_incl_multihedge = value;
        }
        void set_min_years(const min_years& value)  {
            m_min_years = value;
        }
        void set_max_years(const max_years& value)  {
            m_max_years = value;
        }
        void set_min_expiry(const min_expiry& value)  {
            m_min_expiry = value;
        }
        void set_max_expiry(const max_expiry& value)  {
            m_max_expiry = value;
        }
        void set_max_years_range(const max_years_range& value)  {
            m_max_years_range = value;
        }
        void set_min_abs_de(const min_abs_de& value)  {
            m_min_abs_de = value;
        }
        void set_max_abs_de(const max_abs_de& value)  {
            m_max_abs_de = value;
        }
        void set_min_xaxis(const min_xaxis& value)  {
            m_min_xaxis = value;
        }
        void set_max_xaxis(const max_xaxis& value)  {
            m_max_xaxis = value;
        }
        void set_min_strike(const min_strike& value)  {
            m_min_strike = value;
        }
        void set_max_strike(const max_strike& value)  {
            m_max_strike = value;
        }
        void set_max_strike_range(const max_strike_range& value)  {
            m_max_strike_range = value;
        }
        void set_delta_range(const delta_range& value)  {
            m_delta_range = value;
        }
        void set_auction_price(const auction_price& value)  {
            m_auction_price = value;
        }
        void set_is_auction_price_valid(const is_auction_price_valid& value)  {
            m_is_auction_price_valid = value;
        }
        void set_surf_price(const surf_price& value)  {
            m_surf_price = value;
        }
        void set_prob_price(const prob_price& value)  {
            m_prob_price = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_spread_shape(const spread_shape& value)  {
            m_spread_shape = value;
        }
        void set_num_valid_legs(const num_valid_legs& value)  {
            m_num_valid_legs = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_pkg_abs_cn(const pkg_abs_cn& value)  {
            m_pkg_abs_cn = value;
        }
        void set_pkg_net_cn(const pkg_net_cn& value)  {
            m_pkg_net_cn = value;
        }
        void set_pkg_abs_dde(const pkg_abs_dde& value)  {
            m_pkg_abs_dde = value;
        }
        void set_pkg_net_dde(const pkg_net_dde& value)  {
            m_pkg_net_dde = value;
        }
        void set_pkg_abs_pr(const pkg_abs_pr& value)  {
            m_pkg_abs_pr = value;
        }
        void set_pkg_net_pr(const pkg_net_pr& value)  {
            m_pkg_net_pr = value;
        }
        void set_pkg_abs_ve(const pkg_abs_ve& value)  {
            m_pkg_abs_ve = value;
        }
        void set_pkg_net_ve(const pkg_net_ve& value)  {
            m_pkg_net_ve = value;
        }
        void set_pkg_abs_tve(const pkg_abs_tve& value)  {
            m_pkg_abs_tve = value;
        }
        void set_pkg_net_tve(const pkg_net_tve& value)  {
            m_pkg_net_tve = value;
        }
        void set_pkg_abs_wve(const pkg_abs_wve& value)  {
            m_pkg_abs_wve = value;
        }
        void set_pkg_net_wve(const pkg_net_wve& value)  {
            m_pkg_net_wve = value;
        }
        void set_pkg_abs_wtve(const pkg_abs_wtve& value)  {
            m_pkg_abs_wtve = value;
        }
        void set_pkg_net_wtve(const pkg_net_wtve& value)  {
            m_pkg_net_wtve = value;
        }
        void set_pkg_abs_th(const pkg_abs_th& value)  {
            m_pkg_abs_th = value;
        }
        void set_pkg_net_th(const pkg_net_th& value)  {
            m_pkg_net_th = value;
        }
        void set_pkg_abs_dth(const pkg_abs_dth& value)  {
            m_pkg_abs_dth = value;
        }
        void set_pkg_abs_ga(const pkg_abs_ga& value)  {
            m_pkg_abs_ga = value;
        }
        void set_pkg_net_ga(const pkg_net_ga& value)  {
            m_pkg_net_ga = value;
        }
        void set_pkg_abs_dga(const pkg_abs_dga& value)  {
            m_pkg_abs_dga = value;
        }
        void set_pkg_net_dga(const pkg_net_dga& value)  {
            m_pkg_net_dga = value;
        }
        void set_pkg_net_uup_vup(const pkg_net_uup_vup& value)  {
            m_pkg_net_uup_vup = value;
        }
        void set_pkg_net_uup_vdn(const pkg_net_uup_vdn& value)  {
            m_pkg_net_uup_vdn = value;
        }
        void set_pkg_net_udn_vup(const pkg_net_udn_vup& value)  {
            m_pkg_net_udn_vup = value;
        }
        void set_pkg_net_udn_vdn(const pkg_net_udn_vdn& value)  {
            m_pkg_net_udn_vdn = value;
        }
        void set_pkg_net_up15_pn_l(const pkg_net_up15_pn_l& value)  {
            m_pkg_net_up15_pn_l = value;
        }
        void set_pkg_net_dn15_pn_l(const pkg_net_dn15_pn_l& value)  {
            m_pkg_net_dn15_pn_l = value;
        }
        void set_pkg_net_up50_pn_l(const pkg_net_up50_pn_l& value)  {
            m_pkg_net_up50_pn_l = value;
        }
        void set_pkg_net_dn50_pn_l(const pkg_net_dn50_pn_l& value)  {
            m_pkg_net_dn50_pn_l = value;
        }
        void set_markup_result(const markup_result& value)  {
            m_markup_result = value;
        }
        void set_markup_detail(const markup_detail& value)  {
            m_markup_detail = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionMarkup::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const option_roots & value) {
            set_option_roots(value);
        }
        void set(const exch_auction_id & value) {
            set_exch_auction_id(value);
        }
        void set(const exch_auction_type & value) {
            set_exch_auction_type(value);
        }
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const auction_side & value) {
            set_auction_side(value);
        }
        void set(const auction_size & value) {
            set_auction_size(value);
        }
        void set(const num_legs & value) {
            set_num_legs(value);
        }
        void set(const num_opt_legs & value) {
            set_num_opt_legs(value);
        }
        void set(const incl_stock & value) {
            set_incl_stock(value);
        }
        void set(const incl_multihedge & value) {
            set_incl_multihedge(value);
        }
        void set(const min_years & value) {
            set_min_years(value);
        }
        void set(const max_years & value) {
            set_max_years(value);
        }
        void set(const min_expiry & value) {
            set_min_expiry(value);
        }
        void set(const max_expiry & value) {
            set_max_expiry(value);
        }
        void set(const max_years_range & value) {
            set_max_years_range(value);
        }
        void set(const min_abs_de & value) {
            set_min_abs_de(value);
        }
        void set(const max_abs_de & value) {
            set_max_abs_de(value);
        }
        void set(const min_xaxis & value) {
            set_min_xaxis(value);
        }
        void set(const max_xaxis & value) {
            set_max_xaxis(value);
        }
        void set(const min_strike & value) {
            set_min_strike(value);
        }
        void set(const max_strike & value) {
            set_max_strike(value);
        }
        void set(const max_strike_range & value) {
            set_max_strike_range(value);
        }
        void set(const delta_range & value) {
            set_delta_range(value);
        }
        void set(const auction_price & value) {
            set_auction_price(value);
        }
        void set(const is_auction_price_valid & value) {
            set_is_auction_price_valid(value);
        }
        void set(const surf_price & value) {
            set_surf_price(value);
        }
        void set(const prob_price & value) {
            set_prob_price(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const spread_shape & value) {
            set_spread_shape(value);
        }
        void set(const num_valid_legs & value) {
            set_num_valid_legs(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const pkg_abs_cn & value) {
            set_pkg_abs_cn(value);
        }
        void set(const pkg_net_cn & value) {
            set_pkg_net_cn(value);
        }
        void set(const pkg_abs_dde & value) {
            set_pkg_abs_dde(value);
        }
        void set(const pkg_net_dde & value) {
            set_pkg_net_dde(value);
        }
        void set(const pkg_abs_pr & value) {
            set_pkg_abs_pr(value);
        }
        void set(const pkg_net_pr & value) {
            set_pkg_net_pr(value);
        }
        void set(const pkg_abs_ve & value) {
            set_pkg_abs_ve(value);
        }
        void set(const pkg_net_ve & value) {
            set_pkg_net_ve(value);
        }
        void set(const pkg_abs_tve & value) {
            set_pkg_abs_tve(value);
        }
        void set(const pkg_net_tve & value) {
            set_pkg_net_tve(value);
        }
        void set(const pkg_abs_wve & value) {
            set_pkg_abs_wve(value);
        }
        void set(const pkg_net_wve & value) {
            set_pkg_net_wve(value);
        }
        void set(const pkg_abs_wtve & value) {
            set_pkg_abs_wtve(value);
        }
        void set(const pkg_net_wtve & value) {
            set_pkg_net_wtve(value);
        }
        void set(const pkg_abs_th & value) {
            set_pkg_abs_th(value);
        }
        void set(const pkg_net_th & value) {
            set_pkg_net_th(value);
        }
        void set(const pkg_abs_dth & value) {
            set_pkg_abs_dth(value);
        }
        void set(const pkg_abs_ga & value) {
            set_pkg_abs_ga(value);
        }
        void set(const pkg_net_ga & value) {
            set_pkg_net_ga(value);
        }
        void set(const pkg_abs_dga & value) {
            set_pkg_abs_dga(value);
        }
        void set(const pkg_net_dga & value) {
            set_pkg_net_dga(value);
        }
        void set(const pkg_net_uup_vup & value) {
            set_pkg_net_uup_vup(value);
        }
        void set(const pkg_net_uup_vdn & value) {
            set_pkg_net_uup_vdn(value);
        }
        void set(const pkg_net_udn_vup & value) {
            set_pkg_net_udn_vup(value);
        }
        void set(const pkg_net_udn_vdn & value) {
            set_pkg_net_udn_vdn(value);
        }
        void set(const pkg_net_up15_pn_l & value) {
            set_pkg_net_up15_pn_l(value);
        }
        void set(const pkg_net_dn15_pn_l & value) {
            set_pkg_net_dn15_pn_l(value);
        }
        void set(const pkg_net_up50_pn_l & value) {
            set_pkg_net_up50_pn_l(value);
        }
        void set(const pkg_net_dn50_pn_l & value) {
            set_pkg_net_dn50_pn_l(value);
        }
        void set(const markup_result & value) {
            set_markup_result(value);
        }
        void set(const markup_detail & value) {
            set_markup_detail(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrAuctionMarkup & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sr_auction_id);
            set(value.m_ticker);
            set(value.m_option_roots);
            set(value.m_exch_auction_id);
            set(value.m_exch_auction_type);
            set(value.m_auction_type);
            set(value.m_auction_side);
            set(value.m_auction_size);
            set(value.m_num_legs);
            set(value.m_num_opt_legs);
            set(value.m_incl_stock);
            set(value.m_incl_multihedge);
            set(value.m_min_years);
            set(value.m_max_years);
            set(value.m_min_expiry);
            set(value.m_max_expiry);
            set(value.m_max_years_range);
            set(value.m_min_abs_de);
            set(value.m_max_abs_de);
            set(value.m_min_xaxis);
            set(value.m_max_xaxis);
            set(value.m_min_strike);
            set(value.m_max_strike);
            set(value.m_max_strike_range);
            set(value.m_delta_range);
            set(value.m_auction_price);
            set(value.m_is_auction_price_valid);
            set(value.m_surf_price);
            set(value.m_prob_price);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_spread_shape);
            set(value.m_num_valid_legs);
            set(value.m_u_prc);
            set(value.m_pkg_abs_cn);
            set(value.m_pkg_net_cn);
            set(value.m_pkg_abs_dde);
            set(value.m_pkg_net_dde);
            set(value.m_pkg_abs_pr);
            set(value.m_pkg_net_pr);
            set(value.m_pkg_abs_ve);
            set(value.m_pkg_net_ve);
            set(value.m_pkg_abs_tve);
            set(value.m_pkg_net_tve);
            set(value.m_pkg_abs_wve);
            set(value.m_pkg_net_wve);
            set(value.m_pkg_abs_wtve);
            set(value.m_pkg_net_wtve);
            set(value.m_pkg_abs_th);
            set(value.m_pkg_net_th);
            set(value.m_pkg_abs_dth);
            set(value.m_pkg_abs_ga);
            set(value.m_pkg_net_ga);
            set(value.m_pkg_abs_dga);
            set(value.m_pkg_net_dga);
            set(value.m_pkg_net_uup_vup);
            set(value.m_pkg_net_uup_vdn);
            set(value.m_pkg_net_udn_vup);
            set(value.m_pkg_net_udn_vdn);
            set(value.m_pkg_net_up15_pn_l);
            set(value.m_pkg_net_dn15_pn_l);
            set(value.m_pkg_net_up50_pn_l);
            set(value.m_pkg_net_dn50_pn_l);
            set(value.m_markup_result);
            set(value.m_markup_detail);
            set(value.m_timestamp);
        }

        SpdrAuctionMarkup() {
            m__meta.set_message_type("SpdrAuctionMarkup");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2515, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2515, length);
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
             *this = SpdrAuctionMarkup{};
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeOptionRoots() const {
            return !(m_option_roots.empty());
        }
        bool IncludeExchAuctionId() const {
            return !(m_exch_auction_id.empty());
        }
        bool IncludeExchAuctionType() const {
            return !(m_exch_auction_type.empty());
        }
        bool IncludeAuctionSize() const {
            return !(m_auction_size == 0);
        }
        bool IncludeNumLegs() const {
            return !(m_num_legs == 0);
        }
        bool IncludeNumOptLegs() const {
            return !(m_num_opt_legs == 0);
        }
        bool IncludeMinYears() const {
            return !(m_min_years == 0.0);
        }
        bool IncludeMaxYears() const {
            return !(m_max_years == 0.0);
        }
        bool IncludeMinExpiry() const {
            return (m_min_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMaxExpiry() const {
            return (m_max_expiry.time_since_epoch().count() != 0);
        }
        bool IncludeMaxYearsRange() const {
            return !(m_max_years_range == 0.0);
        }
        bool IncludeMinAbsDe() const {
            return !(m_min_abs_de == 0.0);
        }
        bool IncludeMaxAbsDe() const {
            return !(m_max_abs_de == 0.0);
        }
        bool IncludeMinXaxis() const {
            return !(m_min_xaxis == 0.0);
        }
        bool IncludeMaxXaxis() const {
            return !(m_max_xaxis == 0.0);
        }
        bool IncludeMinStrike() const {
            return !(m_min_strike == 0.0);
        }
        bool IncludeMaxStrike() const {
            return !(m_max_strike == 0.0);
        }
        bool IncludeMaxStrikeRange() const {
            return !(m_max_strike_range == 0.0);
        }
        bool IncludeDeltaRange() const {
            return !(m_delta_range == 0.0);
        }
        bool IncludeAuctionPrice() const {
            return !(m_auction_price == 0.0);
        }
        bool IncludeSurfPrice() const {
            return !(m_surf_price == 0.0);
        }
        bool IncludeProbPrice() const {
            return !(m_prob_price == 0.0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeNumValidLegs() const {
            return !(m_num_valid_legs == 0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludePkgAbsCn() const {
            return !(m_pkg_abs_cn == 0);
        }
        bool IncludePkgNetCn() const {
            return !(m_pkg_net_cn == 0);
        }
        bool IncludePkgAbsDde() const {
            return !(m_pkg_abs_dde == 0.0);
        }
        bool IncludePkgNetDde() const {
            return !(m_pkg_net_dde == 0.0);
        }
        bool IncludePkgAbsPr() const {
            return !(m_pkg_abs_pr == 0.0);
        }
        bool IncludePkgNetPr() const {
            return !(m_pkg_net_pr == 0.0);
        }
        bool IncludePkgAbsVe() const {
            return !(m_pkg_abs_ve == 0.0);
        }
        bool IncludePkgNetVe() const {
            return !(m_pkg_net_ve == 0.0);
        }
        bool IncludePkgAbsTve() const {
            return !(m_pkg_abs_tve == 0.0);
        }
        bool IncludePkgNetTve() const {
            return !(m_pkg_net_tve == 0.0);
        }
        bool IncludePkgAbsWve() const {
            return !(m_pkg_abs_wve == 0.0);
        }
        bool IncludePkgNetWve() const {
            return !(m_pkg_net_wve == 0.0);
        }
        bool IncludePkgAbsWtve() const {
            return !(m_pkg_abs_wtve == 0.0);
        }
        bool IncludePkgNetWtve() const {
            return !(m_pkg_net_wtve == 0.0);
        }
        bool IncludePkgAbsTh() const {
            return !(m_pkg_abs_th == 0.0);
        }
        bool IncludePkgNetTh() const {
            return !(m_pkg_net_th == 0.0);
        }
        bool IncludePkgAbsDth() const {
            return !(m_pkg_abs_dth == 0.0);
        }
        bool IncludePkgAbsGa() const {
            return !(m_pkg_abs_ga == 0.0);
        }
        bool IncludePkgNetGa() const {
            return !(m_pkg_net_ga == 0.0);
        }
        bool IncludePkgAbsDga() const {
            return !(m_pkg_abs_dga == 0.0);
        }
        bool IncludePkgNetDga() const {
            return !(m_pkg_net_dga == 0.0);
        }
        bool IncludePkgNetUupVup() const {
            return !(m_pkg_net_uup_vup == 0.0);
        }
        bool IncludePkgNetUupVdn() const {
            return !(m_pkg_net_uup_vdn == 0.0);
        }
        bool IncludePkgNetUdnVup() const {
            return !(m_pkg_net_udn_vup == 0.0);
        }
        bool IncludePkgNetUdnVdn() const {
            return !(m_pkg_net_udn_vdn == 0.0);
        }
        bool IncludePkgNetUp15PnL() const {
            return !(m_pkg_net_up15_pn_l == 0.0);
        }
        bool IncludePkgNetDn15PnL() const {
            return !(m_pkg_net_dn15_pn_l == 0.0);
        }
        bool IncludePkgNetUp50PnL() const {
            return !(m_pkg_net_up50_pn_l == 0.0);
        }
        bool IncludePkgNetDn50PnL() const {
            return !(m_pkg_net_dn50_pn_l == 0.0);
        }
        bool IncludeMarkupDetail() const {
            return !(m_markup_detail.empty());
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
            if ( IncludeSrAuctionId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_sr_auction_id);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(103, tickerKeyLayout);
            }
            if ( IncludeOptionRoots()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_option_roots);
            }
            if ( IncludeExchAuctionId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_exch_auction_id);
            }
            if ( IncludeExchAuctionType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_exch_auction_type);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_auction_side)));
            if ( IncludeAuctionSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_auction_size);
            }
            if ( IncludeNumLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_num_legs);
            }
            if ( IncludeNumOptLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_num_opt_legs);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_incl_stock)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_incl_multihedge)));
            if ( IncludeMinYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_min_years);
            }
            if ( IncludeMaxYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(142, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(145, m_max_expiry);
            }
            if ( IncludeMaxYearsRange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_max_years_range);
            }
            if ( IncludeMinAbsDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_min_abs_de);
            }
            if ( IncludeMaxAbsDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_max_abs_de);
            }
            if ( IncludeMinXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_max_xaxis);
            }
            if ( IncludeMinStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_max_strike);
            }
            if ( IncludeMaxStrikeRange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_max_strike_range);
            }
            if ( IncludeDeltaRange()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_delta_range);
            }
            if ( IncludeAuctionPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_auction_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_auction_price_valid)));
            if ( IncludeSurfPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_surf_price);
            }
            if ( IncludeProbPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_prob_price);
            }
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_ask_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadShape>(m_spread_shape)));
            if ( IncludeNumValidLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(196,m_num_valid_legs);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(199,m_u_prc);
            }
            if ( IncludePkgAbsCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(202,m_pkg_abs_cn);
            }
            if ( IncludePkgNetCn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(205,m_pkg_net_cn);
            }
            if ( IncludePkgAbsDde()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(208,m_pkg_abs_dde);
            }
            if ( IncludePkgNetDde()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_pkg_net_dde);
            }
            if ( IncludePkgAbsPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(214,m_pkg_abs_pr);
            }
            if ( IncludePkgNetPr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(217,m_pkg_net_pr);
            }
            if ( IncludePkgAbsVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(220,m_pkg_abs_ve);
            }
            if ( IncludePkgNetVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_pkg_net_ve);
            }
            if ( IncludePkgAbsTve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(226,m_pkg_abs_tve);
            }
            if ( IncludePkgNetTve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(229,m_pkg_net_tve);
            }
            if ( IncludePkgAbsWve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_pkg_abs_wve);
            }
            if ( IncludePkgNetWve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_pkg_net_wve);
            }
            if ( IncludePkgAbsWtve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_pkg_abs_wtve);
            }
            if ( IncludePkgNetWtve()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(241,m_pkg_net_wtve);
            }
            if ( IncludePkgAbsTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(244,m_pkg_abs_th);
            }
            if ( IncludePkgNetTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(247,m_pkg_net_th);
            }
            if ( IncludePkgAbsDth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(250,m_pkg_abs_dth);
            }
            if ( IncludePkgAbsGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(253,m_pkg_abs_ga);
            }
            if ( IncludePkgNetGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_pkg_net_ga);
            }
            if ( IncludePkgAbsDga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(259,m_pkg_abs_dga);
            }
            if ( IncludePkgNetDga()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_pkg_net_dga);
            }
            if ( IncludePkgNetUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(284,m_pkg_net_uup_vup);
            }
            if ( IncludePkgNetUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(285,m_pkg_net_uup_vdn);
            }
            if ( IncludePkgNetUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(286,m_pkg_net_udn_vup);
            }
            if ( IncludePkgNetUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(287,m_pkg_net_udn_vdn);
            }
            if ( IncludePkgNetUp15PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(265,m_pkg_net_up15_pn_l);
            }
            if ( IncludePkgNetDn15PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(268,m_pkg_net_dn15_pn_l);
            }
            if ( IncludePkgNetUp50PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(271,m_pkg_net_up50_pn_l);
            }
            if ( IncludePkgNetDn50PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_pkg_net_dn50_pn_l);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkupResult>(m_markup_result)));
            if ( IncludeMarkupDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(280,m_markup_detail);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(283, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 103, tickerKeyLayout);
            }
            if ( IncludeOptionRoots()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_option_roots));
            }
            if ( IncludeExchAuctionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_exch_auction_id));
            }
            if ( IncludeExchAuctionType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_exch_auction_type));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_auction_side)));
            if ( IncludeAuctionSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_auction_size);
            }
            if ( IncludeNumLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_num_legs);
            }
            if ( IncludeNumOptLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_num_opt_legs);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_incl_stock)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_incl_multihedge)));
            if ( IncludeMinYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_min_years);
            }
            if ( IncludeMaxYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_max_years);
            }
            if ( IncludeMinExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 142, m_min_expiry);
            }
            if ( IncludeMaxExpiry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 145, m_max_expiry);
            }
            if ( IncludeMaxYearsRange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_max_years_range);
            }
            if ( IncludeMinAbsDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_min_abs_de);
            }
            if ( IncludeMaxAbsDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_max_abs_de);
            }
            if ( IncludeMinXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_min_xaxis);
            }
            if ( IncludeMaxXaxis()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_max_xaxis);
            }
            if ( IncludeMinStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_min_strike);
            }
            if ( IncludeMaxStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_max_strike);
            }
            if ( IncludeMaxStrikeRange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_max_strike_range);
            }
            if ( IncludeDeltaRange()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_delta_range);
            }
            if ( IncludeAuctionPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_auction_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_auction_price_valid)));
            if ( IncludeSurfPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_surf_price);
            }
            if ( IncludeProbPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_prob_price);
            }
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_ask_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadShape>(m_spread_shape)));
            if ( IncludeNumValidLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,196,m_num_valid_legs);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,199,m_u_prc);
            }
            if ( IncludePkgAbsCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,202,m_pkg_abs_cn);
            }
            if ( IncludePkgNetCn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,205,m_pkg_net_cn);
            }
            if ( IncludePkgAbsDde()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,208,m_pkg_abs_dde);
            }
            if ( IncludePkgNetDde()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_pkg_net_dde);
            }
            if ( IncludePkgAbsPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,214,m_pkg_abs_pr);
            }
            if ( IncludePkgNetPr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,217,m_pkg_net_pr);
            }
            if ( IncludePkgAbsVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,220,m_pkg_abs_ve);
            }
            if ( IncludePkgNetVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_pkg_net_ve);
            }
            if ( IncludePkgAbsTve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,226,m_pkg_abs_tve);
            }
            if ( IncludePkgNetTve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,229,m_pkg_net_tve);
            }
            if ( IncludePkgAbsWve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_pkg_abs_wve);
            }
            if ( IncludePkgNetWve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_pkg_net_wve);
            }
            if ( IncludePkgAbsWtve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_pkg_abs_wtve);
            }
            if ( IncludePkgNetWtve()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,241,m_pkg_net_wtve);
            }
            if ( IncludePkgAbsTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,244,m_pkg_abs_th);
            }
            if ( IncludePkgNetTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,247,m_pkg_net_th);
            }
            if ( IncludePkgAbsDth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,250,m_pkg_abs_dth);
            }
            if ( IncludePkgAbsGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,253,m_pkg_abs_ga);
            }
            if ( IncludePkgNetGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_pkg_net_ga);
            }
            if ( IncludePkgAbsDga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,259,m_pkg_abs_dga);
            }
            if ( IncludePkgNetDga()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_pkg_net_dga);
            }
            if ( IncludePkgNetUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,284,m_pkg_net_uup_vup);
            }
            if ( IncludePkgNetUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,285,m_pkg_net_uup_vdn);
            }
            if ( IncludePkgNetUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,286,m_pkg_net_udn_vup);
            }
            if ( IncludePkgNetUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,287,m_pkg_net_udn_vdn);
            }
            if ( IncludePkgNetUp15PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,265,m_pkg_net_up15_pn_l);
            }
            if ( IncludePkgNetDn15PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,268,m_pkg_net_dn15_pn_l);
            }
            if ( IncludePkgNetUp50PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,271,m_pkg_net_up50_pn_l);
            }
            if ( IncludePkgNetDn50PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_pkg_net_dn50_pn_l);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkupResult>(m_markup_result)));
            if ( IncludeMarkupDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,280,static_cast<string>(m_markup_detail));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 283, m_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_option_roots = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_auction_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_auction_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_incl_stock = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_incl_multihedge = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_min_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_expiry = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_years_range = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_abs_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_abs_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xaxis = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_strike_range = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta_range = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_auction_price_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prob_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_shape = static_cast<spiderrock::protobuf::api::SpreadShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_valid_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_pkg_abs_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_pkg_net_cn = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_dde = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_dde = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_pr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 220: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_tve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_tve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_wve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_wve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_wtve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_wtve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 244: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_dth = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_abs_dga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_dga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 284: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 285: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 286: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 287: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_up15_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_dn15_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 271: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_up50_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_pkg_net_dn50_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_markup_result = static_cast<spiderrock::protobuf::api::MarkupResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_markup_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 283: {
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

    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::_meta>() const { return SpdrAuctionMarkup::_meta{ m__meta}; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkey>() const { return SpdrAuctionMarkup::pkey{ m_pkey}; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::sr_auction_id>() const { return m_sr_auction_id; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::ticker>() const { return SpdrAuctionMarkup::ticker{ m_ticker}; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::option_roots>() const { return m_option_roots; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::exch_auction_id>() const { return m_exch_auction_id; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::exch_auction_type>() const { return m_exch_auction_type; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::auction_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_auction_side)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::auction_size>() const { return m_auction_size; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::num_legs>() const { return m_num_legs; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::num_opt_legs>() const { return m_num_opt_legs; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::incl_stock>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_incl_stock)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::incl_multihedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_incl_multihedge)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::min_years>() const { return m_min_years; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_years>() const { return m_max_years; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::min_expiry>() const { return m_min_expiry; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_expiry>() const { return m_max_expiry; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_years_range>() const { return m_max_years_range; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::min_abs_de>() const { return m_min_abs_de; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_abs_de>() const { return m_max_abs_de; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::min_xaxis>() const { return m_min_xaxis; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_xaxis>() const { return m_max_xaxis; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::min_strike>() const { return m_min_strike; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_strike>() const { return m_max_strike; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::max_strike_range>() const { return m_max_strike_range; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::delta_range>() const { return m_delta_range; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::auction_price>() const { return m_auction_price; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::is_auction_price_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_auction_price_valid)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::surf_price>() const { return m_surf_price; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::prob_price>() const { return m_prob_price; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::bid_price>() const { return m_bid_price; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::ask_price>() const { return m_ask_price; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::spread_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadShape>( m_spread_shape)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::num_valid_legs>() const { return m_num_valid_legs; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::u_prc>() const { return m_u_prc; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_cn>() const { return m_pkg_abs_cn; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_cn>() const { return m_pkg_net_cn; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_dde>() const { return m_pkg_abs_dde; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_dde>() const { return m_pkg_net_dde; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_pr>() const { return m_pkg_abs_pr; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_pr>() const { return m_pkg_net_pr; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_ve>() const { return m_pkg_abs_ve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_ve>() const { return m_pkg_net_ve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_tve>() const { return m_pkg_abs_tve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_tve>() const { return m_pkg_net_tve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_wve>() const { return m_pkg_abs_wve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_wve>() const { return m_pkg_net_wve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_wtve>() const { return m_pkg_abs_wtve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_wtve>() const { return m_pkg_net_wtve; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_th>() const { return m_pkg_abs_th; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_th>() const { return m_pkg_net_th; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_dth>() const { return m_pkg_abs_dth; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_ga>() const { return m_pkg_abs_ga; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_ga>() const { return m_pkg_net_ga; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_abs_dga>() const { return m_pkg_abs_dga; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_dga>() const { return m_pkg_net_dga; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_uup_vup>() const { return m_pkg_net_uup_vup; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_uup_vdn>() const { return m_pkg_net_uup_vdn; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_udn_vup>() const { return m_pkg_net_udn_vup; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_udn_vdn>() const { return m_pkg_net_udn_vdn; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_up15_pn_l>() const { return m_pkg_net_up15_pn_l; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_dn15_pn_l>() const { return m_pkg_net_dn15_pn_l; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_up50_pn_l>() const { return m_pkg_net_up50_pn_l; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::pkg_net_dn50_pn_l>() const { return m_pkg_net_dn50_pn_l; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::markup_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkupResult>( m_markup_result)); }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::markup_detail>() const { return m_markup_detail; }
    template<> inline const auto SpdrAuctionMarkup::get<SpdrAuctionMarkup::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAuctionMarkup_PKey::get<SpdrAuctionMarkup_PKey::sec_key>() const { return SpdrAuctionMarkup_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SpdrAuctionMarkup_PKey::get<SpdrAuctionMarkup_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrAuctionMarkup_PKey::get<SpdrAuctionMarkup_PKey::auction_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_auction_exch));}
    template<> inline const auto SpdrAuctionMarkup_PKey::get<SpdrAuctionMarkup_PKey::auction_ex_dest>() const { return m_auction_ex_dest; }
    template<> inline const auto SpdrAuctionMarkup_PKey::get<SpdrAuctionMarkup_PKey::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionMarkup_PKey& m) {
        o << "\"sec_key\":{" << m.get<SpdrAuctionMarkup_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAuctionMarkup_PKey::sec_type>();
        o << ",\"auction_exch\":" << (int64_t)m.get<SpdrAuctionMarkup_PKey::auction_exch>();
        o << ",\"auction_ex_dest\":\"" << m.get<SpdrAuctionMarkup_PKey::auction_ex_dest>() << "\"";
        o << ",\"run_status\":" << (int64_t)m.get<SpdrAuctionMarkup_PKey::run_status>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionMarkup& m) {
        o << "\"_meta\":{" << m.get<SpdrAuctionMarkup::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAuctionMarkup::pkey>() << "}";
        o << ",\"sr_auction_id\":" << m.get<SpdrAuctionMarkup::sr_auction_id>();
        o << ",\"ticker\":{" << m.get<SpdrAuctionMarkup::ticker>() << "}";
        o << ",\"option_roots\":\"" << m.get<SpdrAuctionMarkup::option_roots>() << "\"";
        o << ",\"exch_auction_id\":\"" << m.get<SpdrAuctionMarkup::exch_auction_id>() << "\"";
        o << ",\"exch_auction_type\":\"" << m.get<SpdrAuctionMarkup::exch_auction_type>() << "\"";
        o << ",\"auction_type\":" << (int64_t)m.get<SpdrAuctionMarkup::auction_type>();
        o << ",\"auction_side\":" << (int64_t)m.get<SpdrAuctionMarkup::auction_side>();
        o << ",\"auction_size\":" << m.get<SpdrAuctionMarkup::auction_size>();
        o << ",\"num_legs\":" << m.get<SpdrAuctionMarkup::num_legs>();
        o << ",\"num_opt_legs\":" << m.get<SpdrAuctionMarkup::num_opt_legs>();
        o << ",\"incl_stock\":" << (int64_t)m.get<SpdrAuctionMarkup::incl_stock>();
        o << ",\"incl_multihedge\":" << (int64_t)m.get<SpdrAuctionMarkup::incl_multihedge>();
        o << ",\"min_years\":" << m.get<SpdrAuctionMarkup::min_years>();
        o << ",\"max_years\":" << m.get<SpdrAuctionMarkup::max_years>();
        {
            std::time_t tt = m.get<SpdrAuctionMarkup::min_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"min_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrAuctionMarkup::max_expiry>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_expiry\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"max_years_range\":" << m.get<SpdrAuctionMarkup::max_years_range>();
        o << ",\"min_abs_de\":" << m.get<SpdrAuctionMarkup::min_abs_de>();
        o << ",\"max_abs_de\":" << m.get<SpdrAuctionMarkup::max_abs_de>();
        o << ",\"min_xaxis\":" << m.get<SpdrAuctionMarkup::min_xaxis>();
        o << ",\"max_xaxis\":" << m.get<SpdrAuctionMarkup::max_xaxis>();
        o << ",\"min_strike\":" << m.get<SpdrAuctionMarkup::min_strike>();
        o << ",\"max_strike\":" << m.get<SpdrAuctionMarkup::max_strike>();
        o << ",\"max_strike_range\":" << m.get<SpdrAuctionMarkup::max_strike_range>();
        o << ",\"delta_range\":" << m.get<SpdrAuctionMarkup::delta_range>();
        o << ",\"auction_price\":" << m.get<SpdrAuctionMarkup::auction_price>();
        o << ",\"is_auction_price_valid\":" << (int64_t)m.get<SpdrAuctionMarkup::is_auction_price_valid>();
        o << ",\"surf_price\":" << m.get<SpdrAuctionMarkup::surf_price>();
        o << ",\"prob_price\":" << m.get<SpdrAuctionMarkup::prob_price>();
        o << ",\"bid_price\":" << m.get<SpdrAuctionMarkup::bid_price>();
        o << ",\"ask_price\":" << m.get<SpdrAuctionMarkup::ask_price>();
        o << ",\"spread_shape\":" << (int64_t)m.get<SpdrAuctionMarkup::spread_shape>();
        o << ",\"num_valid_legs\":" << m.get<SpdrAuctionMarkup::num_valid_legs>();
        o << ",\"u_prc\":" << m.get<SpdrAuctionMarkup::u_prc>();
        o << ",\"pkg_abs_cn\":" << m.get<SpdrAuctionMarkup::pkg_abs_cn>();
        o << ",\"pkg_net_cn\":" << m.get<SpdrAuctionMarkup::pkg_net_cn>();
        o << ",\"pkg_abs_dde\":" << m.get<SpdrAuctionMarkup::pkg_abs_dde>();
        o << ",\"pkg_net_dde\":" << m.get<SpdrAuctionMarkup::pkg_net_dde>();
        o << ",\"pkg_abs_pr\":" << m.get<SpdrAuctionMarkup::pkg_abs_pr>();
        o << ",\"pkg_net_pr\":" << m.get<SpdrAuctionMarkup::pkg_net_pr>();
        o << ",\"pkg_abs_ve\":" << m.get<SpdrAuctionMarkup::pkg_abs_ve>();
        o << ",\"pkg_net_ve\":" << m.get<SpdrAuctionMarkup::pkg_net_ve>();
        o << ",\"pkg_abs_tve\":" << m.get<SpdrAuctionMarkup::pkg_abs_tve>();
        o << ",\"pkg_net_tve\":" << m.get<SpdrAuctionMarkup::pkg_net_tve>();
        o << ",\"pkg_abs_wve\":" << m.get<SpdrAuctionMarkup::pkg_abs_wve>();
        o << ",\"pkg_net_wve\":" << m.get<SpdrAuctionMarkup::pkg_net_wve>();
        o << ",\"pkg_abs_wtve\":" << m.get<SpdrAuctionMarkup::pkg_abs_wtve>();
        o << ",\"pkg_net_wtve\":" << m.get<SpdrAuctionMarkup::pkg_net_wtve>();
        o << ",\"pkg_abs_th\":" << m.get<SpdrAuctionMarkup::pkg_abs_th>();
        o << ",\"pkg_net_th\":" << m.get<SpdrAuctionMarkup::pkg_net_th>();
        o << ",\"pkg_abs_dth\":" << m.get<SpdrAuctionMarkup::pkg_abs_dth>();
        o << ",\"pkg_abs_ga\":" << m.get<SpdrAuctionMarkup::pkg_abs_ga>();
        o << ",\"pkg_net_ga\":" << m.get<SpdrAuctionMarkup::pkg_net_ga>();
        o << ",\"pkg_abs_dga\":" << m.get<SpdrAuctionMarkup::pkg_abs_dga>();
        o << ",\"pkg_net_dga\":" << m.get<SpdrAuctionMarkup::pkg_net_dga>();
        o << ",\"pkg_net_uup_vup\":" << m.get<SpdrAuctionMarkup::pkg_net_uup_vup>();
        o << ",\"pkg_net_uup_vdn\":" << m.get<SpdrAuctionMarkup::pkg_net_uup_vdn>();
        o << ",\"pkg_net_udn_vup\":" << m.get<SpdrAuctionMarkup::pkg_net_udn_vup>();
        o << ",\"pkg_net_udn_vdn\":" << m.get<SpdrAuctionMarkup::pkg_net_udn_vdn>();
        o << ",\"pkg_net_up15_pn_l\":" << m.get<SpdrAuctionMarkup::pkg_net_up15_pn_l>();
        o << ",\"pkg_net_dn15_pn_l\":" << m.get<SpdrAuctionMarkup::pkg_net_dn15_pn_l>();
        o << ",\"pkg_net_up50_pn_l\":" << m.get<SpdrAuctionMarkup::pkg_net_up50_pn_l>();
        o << ",\"pkg_net_dn50_pn_l\":" << m.get<SpdrAuctionMarkup::pkg_net_dn50_pn_l>();
        o << ",\"markup_result\":" << (int64_t)m.get<SpdrAuctionMarkup::markup_result>();
        o << ",\"markup_detail\":\"" << m.get<SpdrAuctionMarkup::markup_detail>() << "\"";
        {
            std::time_t tt = m.get<SpdrAuctionMarkup::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}