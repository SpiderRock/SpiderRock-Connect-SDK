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

    #ifndef _is_test_auction__GUARD__
    #define _is_test_auction__GUARD__
    DECL_STRONG_TYPE(is_test_auction, spiderrock::protobuf::api::YesNo);
    #endif//_is_test_auction__GUARD__

    #ifndef _auction_event__GUARD__
    #define _auction_event__GUARD__
    DECL_STRONG_TYPE(auction_event, spiderrock::protobuf::api::AuctionEvent);
    #endif//_auction_event__GUARD__

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

    #ifndef _auction_size__GUARD__
    #define _auction_size__GUARD__
    DECL_STRONG_TYPE(auction_size, int32);
    #endif//_auction_size__GUARD__

    #ifndef _auction_price__double__GUARD__
    #define _auction_price__double__GUARD__
    DECL_STRONG_TYPE(auction_price__double, double);
    #endif//_auction_price__double__GUARD__

    #ifndef _is_auction_price_valid__GUARD__
    #define _is_auction_price_valid__GUARD__
    DECL_STRONG_TYPE(is_auction_price_valid, spiderrock::protobuf::api::YesNo);
    #endif//_is_auction_price_valid__GUARD__

    #ifndef _auction_duration__GUARD__
    #define _auction_duration__GUARD__
    DECL_STRONG_TYPE(auction_duration, int32);
    #endif//_auction_duration__GUARD__

    #ifndef _auction_start_size__GUARD__
    #define _auction_start_size__GUARD__
    DECL_STRONG_TYPE(auction_start_size, int32);
    #endif//_auction_start_size__GUARD__

    #ifndef _auction_start_price__GUARD__
    #define _auction_start_price__GUARD__
    DECL_STRONG_TYPE(auction_start_price, double);
    #endif//_auction_start_price__GUARD__

    #ifndef _auction_start_timestamp__GUARD__
    #define _auction_start_timestamp__GUARD__
    DECL_STRONG_TYPE(auction_start_timestamp, int64);
    #endif//_auction_start_timestamp__GUARD__

    #ifndef _min_response_size__GUARD__
    #define _min_response_size__GUARD__
    DECL_STRONG_TYPE(min_response_size, int32);
    #endif//_min_response_size__GUARD__

    #ifndef _limit_type__AuctionLimitType__GUARD__
    #define _limit_type__AuctionLimitType__GUARD__
    DECL_STRONG_TYPE(limit_type__AuctionLimitType, spiderrock::protobuf::api::AuctionLimitType);
    #endif//_limit_type__AuctionLimitType__GUARD__

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

    #ifndef _matched_size__GUARD__
    #define _matched_size__GUARD__
    DECL_STRONG_TYPE(matched_size, int32);
    #endif//_matched_size__GUARD__

    #ifndef _num_updates__GUARD__
    #define _num_updates__GUARD__
    DECL_STRONG_TYPE(num_updates, int32);
    #endif//_num_updates__GUARD__

    #ifndef _num_responses__int32__GUARD__
    #define _num_responses__int32__GUARD__
    DECL_STRONG_TYPE(num_responses__int32, int32);
    #endif//_num_responses__int32__GUARD__

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

    #ifndef _market_status__GUARD__
    #define _market_status__GUARD__
    DECL_STRONG_TYPE(market_status, spiderrock::protobuf::api::MarketStatus);
    #endif//_market_status__GUARD__

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

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _auction_exch__GUARD__
    #define _auction_exch__GUARD__
    DECL_STRONG_TYPE(auction_exch, spiderrock::protobuf::api::OptExch);
    #endif//_auction_exch__GUARD__

    #ifndef _auction_ex_dest__GUARD__
    #define _auction_ex_dest__GUARD__
    DECL_STRONG_TYPE(auction_ex_dest, string);
    #endif//_auction_ex_dest__GUARD__

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

    
    class SpdrAuctionState_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using auction_exch = spiderrock::protobuf::api::auction_exch;
        using auction_ex_dest = spiderrock::protobuf::api::auction_ex_dest;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        auction_exch m_auction_exch{};
        auction_ex_dest m_auction_ex_dest{};

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
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const auction_exch & value) { set_auction_exch(value); }
        void set(const auction_ex_dest & value) { set_auction_ex_dest(value); }


        SpdrAuctionState_PKey() {}

        virtual ~SpdrAuctionState_PKey() {
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
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_auction_ex_dest);
            }
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
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_auction_ex_dest));
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
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_auction_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {m_auction_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrAuctionState_Legs {
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
		leg_sec_key get_leg_sec_key() const {
            return m_leg_sec_key;
        }
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState_Legs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState_Legs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_sec_key & value) { set_leg_sec_key(value); }
        void set(const leg_sec_type & value) { set_leg_sec_type(value); }
        void set(const leg_side & value) { set_leg_side(value); }
        void set(const leg_ratio & value) { set_leg_ratio(value); }


        SpdrAuctionState_Legs() {}

        virtual ~SpdrAuctionState_Legs() {
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
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(202,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(211,m_leg_ratio);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 202, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,211,m_leg_ratio);
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
                    case 202: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_leg_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 205: {m_leg_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 208: {m_leg_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 211: {m_leg_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrAuctionState {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAuctionState_PKey;
        using sr_auction_id = spiderrock::protobuf::api::sr_auction_id;
        using exch_auction_id = spiderrock::protobuf::api::exch_auction_id;
        using exch_auction_type = spiderrock::protobuf::api::exch_auction_type;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using auction_event = spiderrock::protobuf::api::auction_event;
        using auction_shape = spiderrock::protobuf::api::auction_shape;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using auction_side = spiderrock::protobuf::api::auction_side;
        using auction_size = spiderrock::protobuf::api::auction_size;
        using auction_price = spiderrock::protobuf::api::auction_price__double;
        using is_auction_price_valid = spiderrock::protobuf::api::is_auction_price_valid;
        using auction_duration = spiderrock::protobuf::api::auction_duration;
        using auction_start_size = spiderrock::protobuf::api::auction_start_size;
        using auction_start_price = spiderrock::protobuf::api::auction_start_price;
        using auction_start_timestamp = spiderrock::protobuf::api::auction_start_timestamp;
        using min_response_size = spiderrock::protobuf::api::min_response_size;
        using limit_type = spiderrock::protobuf::api::limit_type__AuctionLimitType;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using member_mpid = spiderrock::protobuf::api::member_mpid;
        using client_accnt = spiderrock::protobuf::api::client_accnt;
        using other_detail = spiderrock::protobuf::api::other_detail;
        using matched_size = spiderrock::protobuf::api::matched_size;
        using num_updates = spiderrock::protobuf::api::num_updates;
        using num_responses = spiderrock::protobuf::api::num_responses__int32;
        using best_response_size = spiderrock::protobuf::api::best_response_size;
        using best_response_price = spiderrock::protobuf::api::best_response_price;
        using cum_fill_quantity = spiderrock::protobuf::api::cum_fill_quantity;
        using avg_fill_price = spiderrock::protobuf::api::avg_fill_price;
        using market_status = spiderrock::protobuf::api::market_status;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using dgw_timestamp = spiderrock::protobuf::api::dgw_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using legs = spiderrock::protobuf::api::SpdrAuctionState_Legs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sr_auction_id m_sr_auction_id{};
        exch_auction_id m_exch_auction_id{};
        exch_auction_type m_exch_auction_type{};
        is_test_auction m_is_test_auction{};
        auction_event m_auction_event{};
        auction_shape m_auction_shape{};
        auction_type m_auction_type{};
        auction_side m_auction_side{};
        auction_size m_auction_size{};
        auction_price m_auction_price{};
        is_auction_price_valid m_is_auction_price_valid{};
        auction_duration m_auction_duration{};
        auction_start_size m_auction_start_size{};
        auction_start_price m_auction_start_price{};
        auction_start_timestamp m_auction_start_timestamp{};
        min_response_size m_min_response_size{};
        limit_type m_limit_type{};
        firm_type m_firm_type{};
        member_mpid m_member_mpid{};
        client_accnt m_client_accnt{};
        other_detail m_other_detail{};
        matched_size m_matched_size{};
        num_updates m_num_updates{};
        num_responses m_num_responses{};
        best_response_size m_best_response_size{};
        best_response_price m_best_response_price{};
        cum_fill_quantity m_cum_fill_quantity{};
        avg_fill_price m_avg_fill_price{};
        market_status m_market_status{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        dgw_timestamp m_dgw_timestamp{};
        timestamp m_timestamp{};
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
        is_test_auction get_is_test_auction() const {
            return m_is_test_auction;
        }		
        auction_event get_auction_event() const {
            return m_auction_event;
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
        auction_start_size get_auction_start_size() const {
            return m_auction_start_size;
        }		
        auction_start_price get_auction_start_price() const {
            return m_auction_start_price;
        }		
        auction_start_timestamp get_auction_start_timestamp() const {
            return m_auction_start_timestamp;
        }		
        min_response_size get_min_response_size() const {
            return m_min_response_size;
        }		
        limit_type get_limit_type() const {
            return m_limit_type;
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
        matched_size get_matched_size() const {
            return m_matched_size;
        }		
        num_updates get_num_updates() const {
            return m_num_updates;
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
        market_status get_market_status() const {
            return m_market_status;
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
        timestamp get_timestamp() const {
            return m_timestamp;
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
        void set_is_test_auction(const is_test_auction& value)  {
            m_is_test_auction = value;
        }
        void set_auction_event(const auction_event& value)  {
            m_auction_event = value;
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
        void set_auction_start_size(const auction_start_size& value)  {
            m_auction_start_size = value;
        }
        void set_auction_start_price(const auction_start_price& value)  {
            m_auction_start_price = value;
        }
        void set_auction_start_timestamp(const auction_start_timestamp& value)  {
            m_auction_start_timestamp = value;
        }
        void set_min_response_size(const min_response_size& value)  {
            m_min_response_size = value;
        }
        void set_limit_type(const limit_type& value)  {
            m_limit_type = value;
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
        void set_matched_size(const matched_size& value)  {
            m_matched_size = value;
        }
        void set_num_updates(const num_updates& value)  {
            m_num_updates = value;
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
        void set_market_status(const market_status& value)  {
            m_market_status = value;
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
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_legs_list(const std::vector<legs>& list)  {
            m_legs = list;
        }
        void add_legs(const legs& item) {
            m_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAuctionState::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const is_test_auction & value) {
            set_is_test_auction(value);
        }
        void set(const auction_event & value) {
            set_auction_event(value);
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
        void set(const auction_start_size & value) {
            set_auction_start_size(value);
        }
        void set(const auction_start_price & value) {
            set_auction_start_price(value);
        }
        void set(const auction_start_timestamp & value) {
            set_auction_start_timestamp(value);
        }
        void set(const min_response_size & value) {
            set_min_response_size(value);
        }
        void set(const limit_type & value) {
            set_limit_type(value);
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
        void set(const matched_size & value) {
            set_matched_size(value);
        }
        void set(const num_updates & value) {
            set_num_updates(value);
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
        void set(const market_status & value) {
            set_market_status(value);
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
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const legs & value) {
            add_legs(value);
        }

        void set(const SpdrAuctionState & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sr_auction_id);
            set(value.m_exch_auction_id);
            set(value.m_exch_auction_type);
            set(value.m_is_test_auction);
            set(value.m_auction_event);
            set(value.m_auction_shape);
            set(value.m_auction_type);
            set(value.m_auction_side);
            set(value.m_auction_size);
            set(value.m_auction_price);
            set(value.m_is_auction_price_valid);
            set(value.m_auction_duration);
            set(value.m_auction_start_size);
            set(value.m_auction_start_price);
            set(value.m_auction_start_timestamp);
            set(value.m_min_response_size);
            set(value.m_limit_type);
            set(value.m_firm_type);
            set(value.m_member_mpid);
            set(value.m_client_accnt);
            set(value.m_other_detail);
            set(value.m_matched_size);
            set(value.m_num_updates);
            set(value.m_num_responses);
            set(value.m_best_response_size);
            set(value.m_best_response_price);
            set(value.m_cum_fill_quantity);
            set(value.m_avg_fill_price);
            set(value.m_market_status);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_dgw_timestamp);
            set(value.m_timestamp);set_legs_list(value.m_legs);
        }

        SpdrAuctionState() {
            m__meta.set_message_type("SpdrAuctionState");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2525, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2525, length);
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
             *this = SpdrAuctionState{};
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
        bool IncludeAuctionSize() const {
            return !(m_auction_size == 0);
        }
        bool IncludeAuctionPrice() const {
            return !(m_auction_price == 0.0);
        }
        bool IncludeAuctionDuration() const {
            return !(m_auction_duration == 0);
        }
        bool IncludeAuctionStartSize() const {
            return !(m_auction_start_size == 0);
        }
        bool IncludeAuctionStartPrice() const {
            return !(m_auction_start_price == 0.0);
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
        bool IncludeMatchedSize() const {
            return !(m_matched_size == 0);
        }
        bool IncludeNumUpdates() const {
            return !(m_num_updates == 0);
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
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeDgwTimestamp() const {
            return !(m_dgw_timestamp == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(212,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>(m_auction_event)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeShape>(m_auction_shape)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_auction_side)));
            if ( IncludeAuctionSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_auction_size);
            }
            if ( IncludeAuctionPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_auction_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_auction_price_valid)));
            if ( IncludeAuctionDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(133,m_auction_duration);
            }
            if ( IncludeAuctionStartSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(136,m_auction_start_size);
            }
            if ( IncludeAuctionStartPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_auction_start_price);
            }
            if ( IncludeAuctionStartTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(142,m_auction_start_timestamp);
            }
            if ( IncludeMinResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_min_response_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionLimitType>(m_limit_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludeMemberMpid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_member_mpid);
            }
            if ( IncludeClientAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_client_accnt);
            }
            if ( IncludeOtherDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_other_detail);
            }
            if ( IncludeMatchedSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(163,m_matched_size);
            }
            if ( IncludeNumUpdates()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_num_updates);
            }
            if ( IncludeNumResponses()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_num_responses);
            }
            if ( IncludeBestResponseSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_best_response_size);
            }
            if ( IncludeBestResponsePrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(175,m_best_response_price);
            }
            if ( IncludeCumFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_avg_fill_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(187,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(190,m_net_timestamp);
            }
            if ( IncludeDgwTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(193,m_dgw_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(196, m_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(199, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,212,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>(m_auction_event)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeShape>(m_auction_shape)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_auction_side)));
            if ( IncludeAuctionSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_auction_size);
            }
            if ( IncludeAuctionPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_auction_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_auction_price_valid)));
            if ( IncludeAuctionDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,133,m_auction_duration);
            }
            if ( IncludeAuctionStartSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,136,m_auction_start_size);
            }
            if ( IncludeAuctionStartPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_auction_start_price);
            }
            if ( IncludeAuctionStartTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,142,m_auction_start_timestamp);
            }
            if ( IncludeMinResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_min_response_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionLimitType>(m_limit_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            if ( IncludeMemberMpid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_member_mpid));
            }
            if ( IncludeClientAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_client_accnt));
            }
            if ( IncludeOtherDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_other_detail));
            }
            if ( IncludeMatchedSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,163,m_matched_size);
            }
            if ( IncludeNumUpdates()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_num_updates);
            }
            if ( IncludeNumResponses()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_num_responses);
            }
            if ( IncludeBestResponseSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_best_response_size);
            }
            if ( IncludeBestResponsePrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,175,m_best_response_price);
            }
            if ( IncludeCumFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_cum_fill_quantity);
            }
            if ( IncludeAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_avg_fill_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>(m_market_status)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,187,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,190,m_net_timestamp);
            }
            if ( IncludeDgwTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,193,m_dgw_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 196, m_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 199, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_is_test_auction = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 212: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_event = static_cast<spiderrock::protobuf::api::AuctionEvent>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_shape = static_cast<spiderrock::protobuf::api::NoticeShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_auction_price_valid = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_auction_start_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_auction_start_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_auction_start_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_response_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_limit_type = static_cast<spiderrock::protobuf::api::AuctionLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_member_mpid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_other_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_matched_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_updates = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_responses = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_best_response_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_best_response_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_status = static_cast<spiderrock::protobuf::api::MarketStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_dgw_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 199: {
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

    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::_meta>() const { return SpdrAuctionState::_meta{ m__meta}; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::pkey>() const { return SpdrAuctionState::pkey{ m_pkey}; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::sr_auction_id>() const { return m_sr_auction_id; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::exch_auction_id>() const { return m_exch_auction_id; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::exch_auction_type>() const { return m_exch_auction_type; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_event>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionEvent>( m_auction_event)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::NoticeShape>( m_auction_shape)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_auction_side)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_size>() const { return m_auction_size; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_price>() const { return m_auction_price; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::is_auction_price_valid>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_auction_price_valid)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_duration>() const { return m_auction_duration; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_start_size>() const { return m_auction_start_size; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_start_price>() const { return m_auction_start_price; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::auction_start_timestamp>() const { return m_auction_start_timestamp; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::min_response_size>() const { return m_min_response_size; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionLimitType>( m_limit_type)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::member_mpid>() const { return m_member_mpid; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::client_accnt>() const { return m_client_accnt; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::other_detail>() const { return m_other_detail; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::matched_size>() const { return m_matched_size; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::num_updates>() const { return m_num_updates; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::num_responses>() const { return m_num_responses; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::best_response_size>() const { return m_best_response_size; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::best_response_price>() const { return m_best_response_price; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::cum_fill_quantity>() const { return m_cum_fill_quantity; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::avg_fill_price>() const { return m_avg_fill_price; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::market_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketStatus>( m_market_status)); }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::dgw_timestamp>() const { return m_dgw_timestamp; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAuctionState::get<SpdrAuctionState::legs>(int i) const { return SpdrAuctionState::legs{ get_legs(i)}; }
    template<> inline int SpdrAuctionState::count<SpdrAuctionState::legs>() const { return static_cast<int>( m_legs.size()); }
    template<> inline const auto SpdrAuctionState_PKey::get<SpdrAuctionState_PKey::sec_key>() const { return SpdrAuctionState_PKey::sec_key{m_sec_key}; }
    template<> inline const auto SpdrAuctionState_PKey::get<SpdrAuctionState_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto SpdrAuctionState_PKey::get<SpdrAuctionState_PKey::auction_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_auction_exch));}
    template<> inline const auto SpdrAuctionState_PKey::get<SpdrAuctionState_PKey::auction_ex_dest>() const { return m_auction_ex_dest; }
    
    template<> inline const auto SpdrAuctionState_Legs::get<SpdrAuctionState_Legs::leg_sec_key>() const { return SpdrAuctionState_Legs::leg_sec_key{m_leg_sec_key}; }
    template<> inline const auto SpdrAuctionState_Legs::get<SpdrAuctionState_Legs::leg_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type));}
    template<> inline const auto SpdrAuctionState_Legs::get<SpdrAuctionState_Legs::leg_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side));}
    template<> inline const auto SpdrAuctionState_Legs::get<SpdrAuctionState_Legs::leg_ratio>() const { return m_leg_ratio; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionState_PKey& m) {
        o << "\"sec_key\":{" << m.get<SpdrAuctionState_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAuctionState_PKey::sec_type>();
        o << ",\"auction_exch\":" << (int64_t)m.get<SpdrAuctionState_PKey::auction_exch>();
        o << ",\"auction_ex_dest\":\"" << m.get<SpdrAuctionState_PKey::auction_ex_dest>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionState_Legs& m) {
        o << "\"leg_sec_key\":{" << m.get<SpdrAuctionState_Legs::leg_sec_key>() << "}";
        o << ",\"leg_sec_type\":" << (int64_t)m.get<SpdrAuctionState_Legs::leg_sec_type>();
        o << ",\"leg_side\":" << (int64_t)m.get<SpdrAuctionState_Legs::leg_side>();
        o << ",\"leg_ratio\":" << m.get<SpdrAuctionState_Legs::leg_ratio>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAuctionState& m) {
        o << "\"_meta\":{" << m.get<SpdrAuctionState::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAuctionState::pkey>() << "}";
        o << ",\"sr_auction_id\":" << m.get<SpdrAuctionState::sr_auction_id>();
        o << ",\"exch_auction_id\":\"" << m.get<SpdrAuctionState::exch_auction_id>() << "\"";
        o << ",\"exch_auction_type\":\"" << m.get<SpdrAuctionState::exch_auction_type>() << "\"";
        o << ",\"is_test_auction\":" << (int64_t)m.get<SpdrAuctionState::is_test_auction>();
        o << ",\"auction_event\":" << (int64_t)m.get<SpdrAuctionState::auction_event>();
        o << ",\"auction_shape\":" << (int64_t)m.get<SpdrAuctionState::auction_shape>();
        o << ",\"auction_type\":" << (int64_t)m.get<SpdrAuctionState::auction_type>();
        o << ",\"auction_side\":" << (int64_t)m.get<SpdrAuctionState::auction_side>();
        o << ",\"auction_size\":" << m.get<SpdrAuctionState::auction_size>();
        o << ",\"auction_price\":" << m.get<SpdrAuctionState::auction_price>();
        o << ",\"is_auction_price_valid\":" << (int64_t)m.get<SpdrAuctionState::is_auction_price_valid>();
        o << ",\"auction_duration\":" << m.get<SpdrAuctionState::auction_duration>();
        o << ",\"auction_start_size\":" << m.get<SpdrAuctionState::auction_start_size>();
        o << ",\"auction_start_price\":" << m.get<SpdrAuctionState::auction_start_price>();
        o << ",\"auction_start_timestamp\":" << m.get<SpdrAuctionState::auction_start_timestamp>();
        o << ",\"min_response_size\":" << m.get<SpdrAuctionState::min_response_size>();
        o << ",\"limit_type\":" << (int64_t)m.get<SpdrAuctionState::limit_type>();
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrAuctionState::firm_type>();
        o << ",\"member_mpid\":\"" << m.get<SpdrAuctionState::member_mpid>() << "\"";
        o << ",\"client_accnt\":\"" << m.get<SpdrAuctionState::client_accnt>() << "\"";
        o << ",\"other_detail\":\"" << m.get<SpdrAuctionState::other_detail>() << "\"";
        o << ",\"matched_size\":" << m.get<SpdrAuctionState::matched_size>();
        o << ",\"num_updates\":" << m.get<SpdrAuctionState::num_updates>();
        o << ",\"num_responses\":" << m.get<SpdrAuctionState::num_responses>();
        o << ",\"best_response_size\":" << m.get<SpdrAuctionState::best_response_size>();
        o << ",\"best_response_price\":" << m.get<SpdrAuctionState::best_response_price>();
        o << ",\"cum_fill_quantity\":" << m.get<SpdrAuctionState::cum_fill_quantity>();
        o << ",\"avg_fill_price\":" << m.get<SpdrAuctionState::avg_fill_price>();
        o << ",\"market_status\":" << (int64_t)m.get<SpdrAuctionState::market_status>();
        o << ",\"src_timestamp\":" << m.get<SpdrAuctionState::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<SpdrAuctionState::net_timestamp>();
        o << ",\"dgw_timestamp\":" << m.get<SpdrAuctionState::dgw_timestamp>();
        {
            std::time_t tt = m.get<SpdrAuctionState::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrAuctionState::legs>(); ++i) {
                o << delim << m.get<SpdrAuctionState::legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}