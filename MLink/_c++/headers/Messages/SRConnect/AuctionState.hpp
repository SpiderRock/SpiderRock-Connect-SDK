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

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _block_auction_counter__GUARD__
    #define _block_auction_counter__GUARD__
    DECL_STRONG_TYPE(block_auction_counter, int32);
    #endif//_block_auction_counter__GUARD__

    #ifndef _block_auction_status__GUARD__
    #define _block_auction_status__GUARD__
    DECL_STRONG_TYPE(block_auction_status, spiderrock::protobuf::api::BlockAuctionStatus);
    #endif//_block_auction_status__GUARD__

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

    #ifndef _u_bid__float__GUARD__
    #define _u_bid__float__GUARD__
    DECL_STRONG_TYPE(u_bid__float, float);
    #endif//_u_bid__float__GUARD__

    #ifndef _u_ask__float__GUARD__
    #define _u_ask__float__GUARD__
    DECL_STRONG_TYPE(u_ask__float, float);
    #endif//_u_ask__float__GUARD__

    #ifndef _nbbo_bid__GUARD__
    #define _nbbo_bid__GUARD__
    DECL_STRONG_TYPE(nbbo_bid, float);
    #endif//_nbbo_bid__GUARD__

    #ifndef _nbbo_ask__GUARD__
    #define _nbbo_ask__GUARD__
    DECL_STRONG_TYPE(nbbo_ask, float);
    #endif//_nbbo_ask__GUARD__

    #ifndef _nbbo_bid_sz__GUARD__
    #define _nbbo_bid_sz__GUARD__
    DECL_STRONG_TYPE(nbbo_bid_sz, int32);
    #endif//_nbbo_bid_sz__GUARD__

    #ifndef _nbbo_ask_sz__GUARD__
    #define _nbbo_ask_sz__GUARD__
    DECL_STRONG_TYPE(nbbo_ask_sz, int32);
    #endif//_nbbo_ask_sz__GUARD__

    #ifndef _surface_prc__GUARD__
    #define _surface_prc__GUARD__
    DECL_STRONG_TYPE(surface_prc, float);
    #endif//_surface_prc__GUARD__

    #ifndef _surface_vol__GUARD__
    #define _surface_vol__GUARD__
    DECL_STRONG_TYPE(surface_vol, float);
    #endif//_surface_vol__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _num_responders__GUARD__
    #define _num_responders__GUARD__
    DECL_STRONG_TYPE(num_responders, int32);
    #endif//_num_responders__GUARD__

    #ifndef _match_price__GUARD__
    #define _match_price__GUARD__
    DECL_STRONG_TYPE(match_price, double);
    #endif//_match_price__GUARD__

    #ifndef _match_size__GUARD__
    #define _match_size__GUARD__
    DECL_STRONG_TYPE(match_size, int32);
    #endif//_match_size__GUARD__

    #ifndef _num_responders__GUARD__
    #define _num_responders__GUARD__
    DECL_STRONG_TYPE(num_responders, int32);
    #endif//_num_responders__GUARD__

    #ifndef _match_price__GUARD__
    #define _match_price__GUARD__
    DECL_STRONG_TYPE(match_price, double);
    #endif//_match_price__GUARD__

    #ifndef _match_size__GUARD__
    #define _match_size__GUARD__
    DECL_STRONG_TYPE(match_size, int32);
    #endif//_match_size__GUARD__

    
    class AuctionState_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }


        AuctionState_PKey() {}

        virtual ~AuctionState_PKey() {
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
    
    class AuctionState_AskSolution {
        public:
        //using statements for all types used in this class
        using num_responders = spiderrock::protobuf::api::num_responders;
        using match_price = spiderrock::protobuf::api::match_price;
        using match_size = spiderrock::protobuf::api::match_size;

        private:
        num_responders m_num_responders{};
        match_price m_match_price{};
        match_size m_match_size{};

        public:
        num_responders get_num_responders() const {
            return m_num_responders;
        }
        match_price get_match_price() const {
            return m_match_price;
        }
        match_size get_match_size() const {
            return m_match_size;
        }
        void set_num_responders(const num_responders& value)  {
            m_num_responders = value;
        }
        void set_match_price(const match_price& value)  {
            m_match_price = value;
        }
        void set_match_size(const match_size& value)  {
            m_match_size = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState_AskSolution::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState_AskSolution::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const num_responders & value) { set_num_responders(value); }
        void set(const match_price & value) { set_match_price(value); }
        void set(const match_size & value) { set_match_size(value); }


        AuctionState_AskSolution() {}

        virtual ~AuctionState_AskSolution() {
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
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(123,m_num_responders);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_match_price);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(125,m_match_size);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,123,m_num_responders);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_match_price);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,125,m_match_size);
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
                    case 123: {m_num_responders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 124: {m_match_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 125: {m_match_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AuctionState_BidSolution {
        public:
        //using statements for all types used in this class
        using num_responders = spiderrock::protobuf::api::num_responders;
        using match_price = spiderrock::protobuf::api::match_price;
        using match_size = spiderrock::protobuf::api::match_size;

        private:
        num_responders m_num_responders{};
        match_price m_match_price{};
        match_size m_match_size{};

        public:
        num_responders get_num_responders() const {
            return m_num_responders;
        }
        match_price get_match_price() const {
            return m_match_price;
        }
        match_size get_match_size() const {
            return m_match_size;
        }
        void set_num_responders(const num_responders& value)  {
            m_num_responders = value;
        }
        void set_match_price(const match_price& value)  {
            m_match_price = value;
        }
        void set_match_size(const match_size& value)  {
            m_match_size = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState_BidSolution::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState_BidSolution::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const num_responders & value) { set_num_responders(value); }
        void set(const match_price & value) { set_match_price(value); }
        void set(const match_size & value) { set_match_size(value); }


        AuctionState_BidSolution() {}

        virtual ~AuctionState_BidSolution() {
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
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(119,m_num_responders);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(120,m_match_price);
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_match_size);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,119,m_num_responders);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,120,m_match_price);
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_match_size);
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
                    case 119: {m_num_responders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 120: {m_match_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 121: {m_match_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class AuctionState {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AuctionState_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using is_test_auction = spiderrock::protobuf::api::is_test_auction;
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;
        using block_auction_counter = spiderrock::protobuf::api::block_auction_counter;
        using block_auction_status = spiderrock::protobuf::api::block_auction_status;
        using cust_side = spiderrock::protobuf::api::cust_side;
        using cust_qty = spiderrock::protobuf::api::cust_qty;
        using cust_prc = spiderrock::protobuf::api::cust_prc;
        using has_cust_prc = spiderrock::protobuf::api::has_cust_prc;
        using u_bid = spiderrock::protobuf::api::u_bid__float;
        using u_ask = spiderrock::protobuf::api::u_ask__float;
        using nbbo_bid = spiderrock::protobuf::api::nbbo_bid;
        using nbbo_ask = spiderrock::protobuf::api::nbbo_ask;
        using nbbo_bid_sz = spiderrock::protobuf::api::nbbo_bid_sz;
        using nbbo_ask_sz = spiderrock::protobuf::api::nbbo_ask_sz;
        using surface_prc = spiderrock::protobuf::api::surface_prc;
        using surface_vol = spiderrock::protobuf::api::surface_vol;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using ask_solution = spiderrock::protobuf::api::AuctionState_AskSolution;
        using bid_solution = spiderrock::protobuf::api::AuctionState_BidSolution;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        is_test_auction m_is_test_auction{};
        auction_type m_auction_type{};
        block_auction_counter m_block_auction_counter{};
        block_auction_status m_block_auction_status{};
        cust_side m_cust_side{};
        cust_qty m_cust_qty{};
        cust_prc m_cust_prc{};
        has_cust_prc m_has_cust_prc{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        nbbo_bid m_nbbo_bid{};
        nbbo_ask m_nbbo_ask{};
        nbbo_bid_sz m_nbbo_bid_sz{};
        nbbo_ask_sz m_nbbo_ask_sz{};
        surface_prc m_surface_prc{};
        surface_vol m_surface_vol{};
        timestamp m_timestamp{};
        std::vector<ask_solution> m_ask_solution{};
        std::vector<bid_solution> m_bid_solution{};

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
        auction_type get_auction_type() const {
            return m_auction_type;
        }		
        block_auction_counter get_block_auction_counter() const {
            return m_block_auction_counter;
        }		
        block_auction_status get_block_auction_status() const {
            return m_block_auction_status;
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
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        nbbo_bid get_nbbo_bid() const {
            return m_nbbo_bid;
        }		
        nbbo_ask get_nbbo_ask() const {
            return m_nbbo_ask;
        }		
        nbbo_bid_sz get_nbbo_bid_sz() const {
            return m_nbbo_bid_sz;
        }		
        nbbo_ask_sz get_nbbo_ask_sz() const {
            return m_nbbo_ask_sz;
        }		
        surface_prc get_surface_prc() const {
            return m_surface_prc;
        }		
        surface_vol get_surface_vol() const {
            return m_surface_vol;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<ask_solution>& get_ask_solution_list() const {
            return m_ask_solution;
        }
        const ask_solution& get_ask_solution(const int i) const {
            return m_ask_solution.at(i);
        }
        const std::vector<bid_solution>& get_bid_solution_list() const {
            return m_bid_solution;
        }
        const bid_solution& get_bid_solution(const int i) const {
            return m_bid_solution.at(i);
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
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        void set_block_auction_counter(const block_auction_counter& value)  {
            m_block_auction_counter = value;
        }
        void set_block_auction_status(const block_auction_status& value)  {
            m_block_auction_status = value;
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
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_nbbo_bid(const nbbo_bid& value)  {
            m_nbbo_bid = value;
        }
        void set_nbbo_ask(const nbbo_ask& value)  {
            m_nbbo_ask = value;
        }
        void set_nbbo_bid_sz(const nbbo_bid_sz& value)  {
            m_nbbo_bid_sz = value;
        }
        void set_nbbo_ask_sz(const nbbo_ask_sz& value)  {
            m_nbbo_ask_sz = value;
        }
        void set_surface_prc(const surface_prc& value)  {
            m_surface_prc = value;
        }
        void set_surface_vol(const surface_vol& value)  {
            m_surface_vol = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_ask_solution_list(const std::vector<ask_solution>& list)  {
            m_ask_solution = list;
        }
        void add_ask_solution(const ask_solution& item) {
            m_ask_solution.emplace_back(item);
        }
        void set_bid_solution_list(const std::vector<bid_solution>& list)  {
            m_bid_solution = list;
        }
        void add_bid_solution(const bid_solution& item) {
            m_bid_solution.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AuctionState::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const auction_type & value) {
            set_auction_type(value);
        }
        void set(const block_auction_counter & value) {
            set_block_auction_counter(value);
        }
        void set(const block_auction_status & value) {
            set_block_auction_status(value);
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
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const nbbo_bid & value) {
            set_nbbo_bid(value);
        }
        void set(const nbbo_ask & value) {
            set_nbbo_ask(value);
        }
        void set(const nbbo_bid_sz & value) {
            set_nbbo_bid_sz(value);
        }
        void set(const nbbo_ask_sz & value) {
            set_nbbo_ask_sz(value);
        }
        void set(const surface_prc & value) {
            set_surface_prc(value);
        }
        void set(const surface_vol & value) {
            set_surface_vol(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const ask_solution & value) {
            add_ask_solution(value);
        }
        void set(const bid_solution & value) {
            add_bid_solution(value);
        }

        void set(const AuctionState & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_is_test_auction);
            set(value.m_auction_type);
            set(value.m_block_auction_counter);
            set(value.m_block_auction_status);
            set(value.m_cust_side);
            set(value.m_cust_qty);
            set(value.m_cust_prc);
            set(value.m_has_cust_prc);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_nbbo_bid);
            set(value.m_nbbo_ask);
            set(value.m_nbbo_bid_sz);
            set(value.m_nbbo_ask_sz);
            set(value.m_surface_prc);
            set(value.m_surface_vol);
            set(value.m_timestamp);set_ask_solution_list(value.m_ask_solution);set_bid_solution_list(value.m_bid_solution);
        }

        AuctionState() {
            m__meta.set_message_type("AuctionState");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2464, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2464, length);
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
             *this = AuctionState{};
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
        bool IncludeBlockAuctionCounter() const {
            return !(m_block_auction_counter == 0);
        }
        bool IncludeCustQty() const {
            return !(m_cust_qty == 0);
        }
        bool IncludeCustPrc() const {
            return !(m_cust_prc == 0.0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeNbboBid() const {
            return !(m_nbbo_bid == 0.0);
        }
        bool IncludeNbboAsk() const {
            return !(m_nbbo_ask == 0.0);
        }
        bool IncludeNbboBidSz() const {
            return !(m_nbbo_bid_sz == 0);
        }
        bool IncludeNbboAskSz() const {
            return !(m_nbbo_ask_sz == 0);
        }
        bool IncludeSurfacePrc() const {
            return !(m_surface_prc == 0.0);
        }
        bool IncludeSurfaceVol() const {
            return !(m_surface_vol == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAskSolution() const {
            return (!m_ask_solution.empty());
        }
        bool IncludeBidSolution() const {
            return (!m_bid_solution.empty());
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
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(101, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            if ( IncludeBlockAuctionCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(104,m_block_auction_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockAuctionStatus>(m_block_auction_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(107,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(108,m_cust_prc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_u_ask);
            }
            if ( IncludeNbboBid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_nbbo_ask);
            }
            if ( IncludeNbboBidSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(114,m_nbbo_bid_sz);
            }
            if ( IncludeNbboAskSz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_nbbo_ask_sz);
            }
            if ( IncludeSurfacePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(117,m_surface_vol);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(126, m_timestamp);
            }
            if ( IncludeAskSolution()) {
                for (auto& item : m_ask_solution) {
					totalSize += SRProtobufCPP::TagCodec::Size(122, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeBidSolution()) {
                for (auto& item : m_bid_solution) {
					totalSize += SRProtobufCPP::TagCodec::Size(118, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,101, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_auction)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            if ( IncludeBlockAuctionCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,104,m_block_auction_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockAuctionStatus>(m_block_auction_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_cust_side)));
            if ( IncludeCustQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,107,m_cust_qty);
            }
            if ( IncludeCustPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,108,m_cust_prc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cust_prc)));
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_u_ask);
            }
            if ( IncludeNbboBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_nbbo_bid);
            }
            if ( IncludeNbboAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_nbbo_ask);
            }
            if ( IncludeNbboBidSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,114,m_nbbo_bid_sz);
            }
            if ( IncludeNbboAskSz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_nbbo_ask_sz);
            }
            if ( IncludeSurfacePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,117,m_surface_vol);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 126, m_timestamp);
            }
            if ( IncludeAskSolution()) {
                for (auto& item : m_ask_solution) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 122, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeBidSolution()) {
                for (auto& item : m_bid_solution) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 118, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_test_auction = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_block_auction_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 105: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_block_auction_status = static_cast<spiderrock::protobuf::api::BlockAuctionStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cust_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cust_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cust_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_cust_prc = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_nbbo_bid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_nbbo_ask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_bid_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbbo_ask_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            ask_solution item_ask_solution;
                            item_ask_solution.Decode(pos, pos+length);  
                            m_ask_solution.emplace_back(item_ask_solution);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            bid_solution item_bid_solution;
                            item_bid_solution.Decode(pos, pos+length);  
                            m_bid_solution.emplace_back(item_bid_solution);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AuctionState::get<AuctionState::_meta>() const { return AuctionState::_meta{ m__meta}; }
    template<> inline const auto AuctionState::get<AuctionState::pkey>() const { return AuctionState::pkey{ m_pkey}; }
    template<> inline const auto AuctionState::get<AuctionState::ticker>() const { return AuctionState::ticker{ m_ticker}; }
    template<> inline const auto AuctionState::get<AuctionState::trade_date>() const { return AuctionState::trade_date{ m_trade_date}; }
    template<> inline const auto AuctionState::get<AuctionState::is_test_auction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_test_auction)); }
    template<> inline const auto AuctionState::get<AuctionState::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>( m_auction_type)); }
    template<> inline const auto AuctionState::get<AuctionState::block_auction_counter>() const { return m_block_auction_counter; }
    template<> inline const auto AuctionState::get<AuctionState::block_auction_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockAuctionStatus>( m_block_auction_status)); }
    template<> inline const auto AuctionState::get<AuctionState::cust_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_cust_side)); }
    template<> inline const auto AuctionState::get<AuctionState::cust_qty>() const { return m_cust_qty; }
    template<> inline const auto AuctionState::get<AuctionState::cust_prc>() const { return m_cust_prc; }
    template<> inline const auto AuctionState::get<AuctionState::has_cust_prc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cust_prc)); }
    template<> inline const auto AuctionState::get<AuctionState::u_bid>() const { return m_u_bid; }
    template<> inline const auto AuctionState::get<AuctionState::u_ask>() const { return m_u_ask; }
    template<> inline const auto AuctionState::get<AuctionState::nbbo_bid>() const { return m_nbbo_bid; }
    template<> inline const auto AuctionState::get<AuctionState::nbbo_ask>() const { return m_nbbo_ask; }
    template<> inline const auto AuctionState::get<AuctionState::nbbo_bid_sz>() const { return m_nbbo_bid_sz; }
    template<> inline const auto AuctionState::get<AuctionState::nbbo_ask_sz>() const { return m_nbbo_ask_sz; }
    template<> inline const auto AuctionState::get<AuctionState::surface_prc>() const { return m_surface_prc; }
    template<> inline const auto AuctionState::get<AuctionState::surface_vol>() const { return m_surface_vol; }
    template<> inline const auto AuctionState::get<AuctionState::timestamp>() const { return m_timestamp; }
    template<> inline const auto AuctionState::get<AuctionState::ask_solution>(int i) const { return AuctionState::ask_solution{ get_ask_solution(i)}; }
    template<> inline int AuctionState::count<AuctionState::ask_solution>() const { return static_cast<int>( m_ask_solution.size()); }
    template<> inline const auto AuctionState::get<AuctionState::bid_solution>(int i) const { return AuctionState::bid_solution{ get_bid_solution(i)}; }
    template<> inline int AuctionState::count<AuctionState::bid_solution>() const { return static_cast<int>( m_bid_solution.size()); }
    template<> inline const auto AuctionState_PKey::get<AuctionState_PKey::notice_number>() const { return m_notice_number; }
    
    template<> inline const auto AuctionState_AskSolution::get<AuctionState_AskSolution::num_responders>() const { return m_num_responders; }
    template<> inline const auto AuctionState_AskSolution::get<AuctionState_AskSolution::match_price>() const { return m_match_price; }
    template<> inline const auto AuctionState_AskSolution::get<AuctionState_AskSolution::match_size>() const { return m_match_size; }
    
    template<> inline const auto AuctionState_BidSolution::get<AuctionState_BidSolution::num_responders>() const { return m_num_responders; }
    template<> inline const auto AuctionState_BidSolution::get<AuctionState_BidSolution::match_price>() const { return m_match_price; }
    template<> inline const auto AuctionState_BidSolution::get<AuctionState_BidSolution::match_size>() const { return m_match_size; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AuctionState_PKey& m) {
        o << "\"notice_number\":" << m.get<AuctionState_PKey::notice_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionState_AskSolution& m) {
        o << "\"num_responders\":" << m.get<AuctionState_AskSolution::num_responders>();
        o << ",\"match_price\":" << m.get<AuctionState_AskSolution::match_price>();
        o << ",\"match_size\":" << m.get<AuctionState_AskSolution::match_size>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionState_BidSolution& m) {
        o << "\"num_responders\":" << m.get<AuctionState_BidSolution::num_responders>();
        o << ",\"match_price\":" << m.get<AuctionState_BidSolution::match_price>();
        o << ",\"match_size\":" << m.get<AuctionState_BidSolution::match_size>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AuctionState& m) {
        o << "\"_meta\":{" << m.get<AuctionState::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AuctionState::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<AuctionState::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<AuctionState::trade_date>() << "}";
        o << ",\"is_test_auction\":" << (int64_t)m.get<AuctionState::is_test_auction>();
        o << ",\"auction_type\":" << (int64_t)m.get<AuctionState::auction_type>();
        o << ",\"block_auction_counter\":" << m.get<AuctionState::block_auction_counter>();
        o << ",\"block_auction_status\":" << (int64_t)m.get<AuctionState::block_auction_status>();
        o << ",\"cust_side\":" << (int64_t)m.get<AuctionState::cust_side>();
        o << ",\"cust_qty\":" << m.get<AuctionState::cust_qty>();
        o << ",\"cust_prc\":" << m.get<AuctionState::cust_prc>();
        o << ",\"has_cust_prc\":" << (int64_t)m.get<AuctionState::has_cust_prc>();
        o << ",\"u_bid\":" << m.get<AuctionState::u_bid>();
        o << ",\"u_ask\":" << m.get<AuctionState::u_ask>();
        o << ",\"nbbo_bid\":" << m.get<AuctionState::nbbo_bid>();
        o << ",\"nbbo_ask\":" << m.get<AuctionState::nbbo_ask>();
        o << ",\"nbbo_bid_sz\":" << m.get<AuctionState::nbbo_bid_sz>();
        o << ",\"nbbo_ask_sz\":" << m.get<AuctionState::nbbo_ask_sz>();
        o << ",\"surface_prc\":" << m.get<AuctionState::surface_prc>();
        o << ",\"surface_vol\":" << m.get<AuctionState::surface_vol>();
        {
            std::time_t tt = m.get<AuctionState::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"ask_solution\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AuctionState::ask_solution>(); ++i) {
                o << delim << m.get<AuctionState::ask_solution>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"bid_solution\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AuctionState::bid_solution>(); ++i) {
                o << delim << m.get<AuctionState::bid_solution>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}