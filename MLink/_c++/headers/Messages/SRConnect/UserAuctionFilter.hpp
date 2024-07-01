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

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _disabled__GUARD__
    #define _disabled__GUARD__
    DECL_STRONG_TYPE(disabled, spiderrock::protobuf::api::YesNo);
    #endif//_disabled__GUARD__

    #ifndef _include_covered__GUARD__
    #define _include_covered__GUARD__
    DECL_STRONG_TYPE(include_covered, spiderrock::protobuf::api::YesNo);
    #endif//_include_covered__GUARD__

    #ifndef _include_etfs__GUARD__
    #define _include_etfs__GUARD__
    DECL_STRONG_TYPE(include_etfs, spiderrock::protobuf::api::YesNo);
    #endif//_include_etfs__GUARD__

    #ifndef _include_adrs__GUARD__
    #define _include_adrs__GUARD__
    DECL_STRONG_TYPE(include_adrs, spiderrock::protobuf::api::YesNo);
    #endif//_include_adrs__GUARD__

    #ifndef _include_indexes__GUARD__
    #define _include_indexes__GUARD__
    DECL_STRONG_TYPE(include_indexes, spiderrock::protobuf::api::YesNo);
    #endif//_include_indexes__GUARD__

    #ifndef _min_uprc__GUARD__
    #define _min_uprc__GUARD__
    DECL_STRONG_TYPE(min_uprc, float);
    #endif//_min_uprc__GUARD__

    #ifndef _has_uavg_daily_vlm_filter__GUARD__
    #define _has_uavg_daily_vlm_filter__GUARD__
    DECL_STRONG_TYPE(has_uavg_daily_vlm_filter, spiderrock::protobuf::api::YesNo);
    #endif//_has_uavg_daily_vlm_filter__GUARD__

    #ifndef _min_uavg_daily_vlm__GUARD__
    #define _min_uavg_daily_vlm__GUARD__
    DECL_STRONG_TYPE(min_uavg_daily_vlm, float);
    #endif//_min_uavg_daily_vlm__GUARD__

    #ifndef _max_uavg_daily_vlm__GUARD__
    #define _max_uavg_daily_vlm__GUARD__
    DECL_STRONG_TYPE(max_uavg_daily_vlm, float);
    #endif//_max_uavg_daily_vlm__GUARD__

    #ifndef _min_size__GUARD__
    #define _min_size__GUARD__
    DECL_STRONG_TYPE(min_size, float);
    #endif//_min_size__GUARD__

    #ifndef _min_abs_vega__GUARD__
    #define _min_abs_vega__GUARD__
    DECL_STRONG_TYPE(min_abs_vega, float);
    #endif//_min_abs_vega__GUARD__

    #ifndef _has_abs_delta_filter__GUARD__
    #define _has_abs_delta_filter__GUARD__
    DECL_STRONG_TYPE(has_abs_delta_filter, spiderrock::protobuf::api::YesNo);
    #endif//_has_abs_delta_filter__GUARD__

    #ifndef _min_abs_delta__GUARD__
    #define _min_abs_delta__GUARD__
    DECL_STRONG_TYPE(min_abs_delta, float);
    #endif//_min_abs_delta__GUARD__

    #ifndef _max_abs_delta__GUARD__
    #define _max_abs_delta__GUARD__
    DECL_STRONG_TYPE(max_abs_delta, float);
    #endif//_max_abs_delta__GUARD__

    #ifndef _has_xdelta_filter__GUARD__
    #define _has_xdelta_filter__GUARD__
    DECL_STRONG_TYPE(has_xdelta_filter, spiderrock::protobuf::api::YesNo);
    #endif//_has_xdelta_filter__GUARD__

    #ifndef _min_xdelta__GUARD__
    #define _min_xdelta__GUARD__
    DECL_STRONG_TYPE(min_xdelta, float);
    #endif//_min_xdelta__GUARD__

    #ifndef _max_xdelta__GUARD__
    #define _max_xdelta__GUARD__
    DECL_STRONG_TYPE(max_xdelta, float);
    #endif//_max_xdelta__GUARD__

    #ifndef _has_atm_svol_filter__GUARD__
    #define _has_atm_svol_filter__GUARD__
    DECL_STRONG_TYPE(has_atm_svol_filter, spiderrock::protobuf::api::YesNo);
    #endif//_has_atm_svol_filter__GUARD__

    #ifndef _min_atm_svol__GUARD__
    #define _min_atm_svol__GUARD__
    DECL_STRONG_TYPE(min_atm_svol, float);
    #endif//_min_atm_svol__GUARD__

    #ifndef _max_atm_svol__GUARD__
    #define _max_atm_svol__GUARD__
    DECL_STRONG_TYPE(max_atm_svol, float);
    #endif//_max_atm_svol__GUARD__

    #ifndef _has_atm_sdiv_filter__GUARD__
    #define _has_atm_sdiv_filter__GUARD__
    DECL_STRONG_TYPE(has_atm_sdiv_filter, spiderrock::protobuf::api::YesNo);
    #endif//_has_atm_sdiv_filter__GUARD__

    #ifndef _min_atm_sdiv__GUARD__
    #define _min_atm_sdiv__GUARD__
    DECL_STRONG_TYPE(min_atm_sdiv, float);
    #endif//_min_atm_sdiv__GUARD__

    #ifndef _max_atm_sdiv__GUARD__
    #define _max_atm_sdiv__GUARD__
    DECL_STRONG_TYPE(max_atm_sdiv, float);
    #endif//_max_atm_sdiv__GUARD__

    #ifndef _has_expiry_days__GUARD__
    #define _has_expiry_days__GUARD__
    DECL_STRONG_TYPE(has_expiry_days, spiderrock::protobuf::api::YesNo);
    #endif//_has_expiry_days__GUARD__

    #ifndef _min_expiry_days__GUARD__
    #define _min_expiry_days__GUARD__
    DECL_STRONG_TYPE(min_expiry_days, int32);
    #endif//_min_expiry_days__GUARD__

    #ifndef _max_expiry_days__GUARD__
    #define _max_expiry_days__GUARD__
    DECL_STRONG_TYPE(max_expiry_days, int32);
    #endif//_max_expiry_days__GUARD__

    #ifndef _include_zdte__GUARD__
    #define _include_zdte__GUARD__
    DECL_STRONG_TYPE(include_zdte, spiderrock::protobuf::api::YesNo);
    #endif//_include_zdte__GUARD__

    #ifndef _include_daily__GUARD__
    #define _include_daily__GUARD__
    DECL_STRONG_TYPE(include_daily, spiderrock::protobuf::api::YesNo);
    #endif//_include_daily__GUARD__

    #ifndef _include_weekly__GUARD__
    #define _include_weekly__GUARD__
    DECL_STRONG_TYPE(include_weekly, spiderrock::protobuf::api::YesNo);
    #endif//_include_weekly__GUARD__

    #ifndef _include_regular__GUARD__
    #define _include_regular__GUARD__
    DECL_STRONG_TYPE(include_regular, spiderrock::protobuf::api::YesNo);
    #endif//_include_regular__GUARD__

    #ifndef _include_quarterly__GUARD__
    #define _include_quarterly__GUARD__
    DECL_STRONG_TYPE(include_quarterly, spiderrock::protobuf::api::YesNo);
    #endif//_include_quarterly__GUARD__

    #ifndef _include_long_term__GUARD__
    #define _include_long_term__GUARD__
    DECL_STRONG_TYPE(include_long_term, spiderrock::protobuf::api::YesNo);
    #endif//_include_long_term__GUARD__

    #ifndef _include_other_exp__GUARD__
    #define _include_other_exp__GUARD__
    DECL_STRONG_TYPE(include_other_exp, spiderrock::protobuf::api::YesNo);
    #endif//_include_other_exp__GUARD__

    #ifndef _include_flex__GUARD__
    #define _include_flex__GUARD__
    DECL_STRONG_TYPE(include_flex, spiderrock::protobuf::api::YesNo);
    #endif//_include_flex__GUARD__

    #ifndef _include_directed__GUARD__
    #define _include_directed__GUARD__
    DECL_STRONG_TYPE(include_directed, spiderrock::protobuf::api::YesNo);
    #endif//_include_directed__GUARD__

    #ifndef _include_comm_paying__GUARD__
    #define _include_comm_paying__GUARD__
    DECL_STRONG_TYPE(include_comm_paying, spiderrock::protobuf::api::YesNo);
    #endif//_include_comm_paying__GUARD__

    #ifndef _direction__GUARD__
    #define _direction__GUARD__
    DECL_STRONG_TYPE(direction, spiderrock::protobuf::api::BuySell);
    #endif//_direction__GUARD__

    #ifndef _net_vega_direction__GUARD__
    #define _net_vega_direction__GUARD__
    DECL_STRONG_TYPE(net_vega_direction, spiderrock::protobuf::api::BuySell);
    #endif//_net_vega_direction__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _filter_name__GUARD__
    #define _filter_name__GUARD__
    DECL_STRONG_TYPE(filter_name, string);
    #endif//_filter_name__GUARD__

    #ifndef _auction_source__GUARD__
    #define _auction_source__GUARD__
    DECL_STRONG_TYPE(auction_source, spiderrock::protobuf::api::AuctionSource);
    #endif//_auction_source__GUARD__

    #ifndef _auction_type__AuctionType__GUARD__
    #define _auction_type__AuctionType__GUARD__
    DECL_STRONG_TYPE(auction_type__AuctionType, spiderrock::protobuf::api::AuctionType);
    #endif//_auction_type__AuctionType__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _industry__GUARD__
    #define _industry__GUARD__
    DECL_STRONG_TYPE(industry, string);
    #endif//_industry__GUARD__

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::ToolSpreadClass);
    #endif//_spread_class__GUARD__

    
    class UserAuctionFilter_PKey {
        public:
        //using statements for all types used in this class
        using user_name = spiderrock::protobuf::api::user_name;
        using filter_name = spiderrock::protobuf::api::filter_name;

        private:
        user_name m_user_name{};
        filter_name m_filter_name{};

        public:
        user_name get_user_name() const {
            return m_user_name;
        }
        filter_name get_filter_name() const {
            return m_filter_name;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_filter_name(const filter_name& value)  {
            m_filter_name = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const user_name & value) { set_user_name(value); }
        void set(const filter_name & value) { set_filter_name(value); }


        UserAuctionFilter_PKey() {}

        virtual ~UserAuctionFilter_PKey() {
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
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeFilterName() const {
            return !(m_filter_name.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_user_name);
            }
            if ( IncludeFilterName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_filter_name);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_user_name));
            }
            if ( IncludeFilterName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_filter_name));
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
                    case 10: {m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_filter_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserAuctionFilter_AuctionSources {
        public:
        //using statements for all types used in this class
        using auction_source = spiderrock::protobuf::api::auction_source;

        private:
        auction_source m_auction_source{};

        public:
        auction_source get_auction_source() const {
            return m_auction_source;
        }
        void set_auction_source(const auction_source& value)  {
            m_auction_source = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_AuctionSources::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_AuctionSources::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const auction_source & value) { set_auction_source(value); }


        UserAuctionFilter_AuctionSources() {}

        virtual ~UserAuctionFilter_AuctionSources() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(113,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,113,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source)));
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
                    case 113: {m_auction_source = static_cast<spiderrock::protobuf::api::AuctionSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class UserAuctionFilter_AuctionTypes {
        public:
        //using statements for all types used in this class
        using auction_type = spiderrock::protobuf::api::auction_type__AuctionType;

        private:
        auction_type m_auction_type{};

        public:
        auction_type get_auction_type() const {
            return m_auction_type;
        }
        void set_auction_type(const auction_type& value)  {
            m_auction_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_AuctionTypes::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_AuctionTypes::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const auction_type & value) { set_auction_type(value); }


        UserAuctionFilter_AuctionTypes() {}

        virtual ~UserAuctionFilter_AuctionTypes() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type)));
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
                    case 111: {m_auction_type = static_cast<spiderrock::protobuf::api::AuctionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class UserAuctionFilter_ExcludeTicker {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_ExcludeTicker::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_ExcludeTicker::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        UserAuctionFilter_ExcludeTicker() {}

        virtual ~UserAuctionFilter_ExcludeTicker() {
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
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(107,tickerKeyLayout);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 107, tickerKeyLayout);
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
                    case 107: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    
    class UserAuctionFilter_IncludeTicker {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_IncludeTicker::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_IncludeTicker::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        UserAuctionFilter_IncludeTicker() {}

        virtual ~UserAuctionFilter_IncludeTicker() {
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
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(105,tickerKeyLayout);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 105, tickerKeyLayout);
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
                    case 105: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    
    class UserAuctionFilter_Industry {
        public:
        //using statements for all types used in this class
        using industry = spiderrock::protobuf::api::industry;

        private:
        industry m_industry{};

        public:
        industry get_industry() const {
            return m_industry;
        }
        void set_industry(const industry& value)  {
            m_industry = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_Industry::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_Industry::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const industry & value) { set_industry(value); }


        UserAuctionFilter_Industry() {}

        virtual ~UserAuctionFilter_Industry() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_industry);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_industry));
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
                    case 103: {m_industry = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class UserAuctionFilter_SpreadClass {
        public:
        //using statements for all types used in this class
        using spread_class = spiderrock::protobuf::api::spread_class;

        private:
        spread_class m_spread_class{};

        public:
        spread_class get_spread_class() const {
            return m_spread_class;
        }
        void set_spread_class(const spread_class& value)  {
            m_spread_class = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_SpreadClass::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter_SpreadClass::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const spread_class & value) { set_spread_class(value); }


        UserAuctionFilter_SpreadClass() {}

        virtual ~UserAuctionFilter_SpreadClass() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
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
                    case 109: {m_spread_class = static_cast<spiderrock::protobuf::api::ToolSpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class UserAuctionFilter {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::UserAuctionFilter_PKey;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using disabled = spiderrock::protobuf::api::disabled;
        using include_covered = spiderrock::protobuf::api::include_covered;
        using include_etfs = spiderrock::protobuf::api::include_etfs;
        using include_adrs = spiderrock::protobuf::api::include_adrs;
        using include_indexes = spiderrock::protobuf::api::include_indexes;
        using min_uprc = spiderrock::protobuf::api::min_uprc;
        using has_uavg_daily_vlm_filter = spiderrock::protobuf::api::has_uavg_daily_vlm_filter;
        using min_uavg_daily_vlm = spiderrock::protobuf::api::min_uavg_daily_vlm;
        using max_uavg_daily_vlm = spiderrock::protobuf::api::max_uavg_daily_vlm;
        using min_size = spiderrock::protobuf::api::min_size;
        using min_abs_vega = spiderrock::protobuf::api::min_abs_vega;
        using has_abs_delta_filter = spiderrock::protobuf::api::has_abs_delta_filter;
        using min_abs_delta = spiderrock::protobuf::api::min_abs_delta;
        using max_abs_delta = spiderrock::protobuf::api::max_abs_delta;
        using has_xdelta_filter = spiderrock::protobuf::api::has_xdelta_filter;
        using min_xdelta = spiderrock::protobuf::api::min_xdelta;
        using max_xdelta = spiderrock::protobuf::api::max_xdelta;
        using has_atm_svol_filter = spiderrock::protobuf::api::has_atm_svol_filter;
        using min_atm_svol = spiderrock::protobuf::api::min_atm_svol;
        using max_atm_svol = spiderrock::protobuf::api::max_atm_svol;
        using has_atm_sdiv_filter = spiderrock::protobuf::api::has_atm_sdiv_filter;
        using min_atm_sdiv = spiderrock::protobuf::api::min_atm_sdiv;
        using max_atm_sdiv = spiderrock::protobuf::api::max_atm_sdiv;
        using has_expiry_days = spiderrock::protobuf::api::has_expiry_days;
        using min_expiry_days = spiderrock::protobuf::api::min_expiry_days;
        using max_expiry_days = spiderrock::protobuf::api::max_expiry_days;
        using include_zdte = spiderrock::protobuf::api::include_zdte;
        using include_daily = spiderrock::protobuf::api::include_daily;
        using include_weekly = spiderrock::protobuf::api::include_weekly;
        using include_regular = spiderrock::protobuf::api::include_regular;
        using include_quarterly = spiderrock::protobuf::api::include_quarterly;
        using include_long_term = spiderrock::protobuf::api::include_long_term;
        using include_other_exp = spiderrock::protobuf::api::include_other_exp;
        using include_flex = spiderrock::protobuf::api::include_flex;
        using include_directed = spiderrock::protobuf::api::include_directed;
        using include_comm_paying = spiderrock::protobuf::api::include_comm_paying;
        using direction = spiderrock::protobuf::api::direction;
        using net_vega_direction = spiderrock::protobuf::api::net_vega_direction;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using auction_sources = spiderrock::protobuf::api::UserAuctionFilter_AuctionSources;
        using auction_types = spiderrock::protobuf::api::UserAuctionFilter_AuctionTypes;
        using exclude_ticker = spiderrock::protobuf::api::UserAuctionFilter_ExcludeTicker;
        using include_ticker = spiderrock::protobuf::api::UserAuctionFilter_IncludeTicker;
        using industry = spiderrock::protobuf::api::UserAuctionFilter_Industry;
        using spread_class = spiderrock::protobuf::api::UserAuctionFilter_SpreadClass;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        client_firm m_client_firm{};
        disabled m_disabled{};
        include_covered m_include_covered{};
        include_etfs m_include_etfs{};
        include_adrs m_include_adrs{};
        include_indexes m_include_indexes{};
        min_uprc m_min_uprc{};
        has_uavg_daily_vlm_filter m_has_uavg_daily_vlm_filter{};
        min_uavg_daily_vlm m_min_uavg_daily_vlm{};
        max_uavg_daily_vlm m_max_uavg_daily_vlm{};
        min_size m_min_size{};
        min_abs_vega m_min_abs_vega{};
        has_abs_delta_filter m_has_abs_delta_filter{};
        min_abs_delta m_min_abs_delta{};
        max_abs_delta m_max_abs_delta{};
        has_xdelta_filter m_has_xdelta_filter{};
        min_xdelta m_min_xdelta{};
        max_xdelta m_max_xdelta{};
        has_atm_svol_filter m_has_atm_svol_filter{};
        min_atm_svol m_min_atm_svol{};
        max_atm_svol m_max_atm_svol{};
        has_atm_sdiv_filter m_has_atm_sdiv_filter{};
        min_atm_sdiv m_min_atm_sdiv{};
        max_atm_sdiv m_max_atm_sdiv{};
        has_expiry_days m_has_expiry_days{};
        min_expiry_days m_min_expiry_days{};
        max_expiry_days m_max_expiry_days{};
        include_zdte m_include_zdte{};
        include_daily m_include_daily{};
        include_weekly m_include_weekly{};
        include_regular m_include_regular{};
        include_quarterly m_include_quarterly{};
        include_long_term m_include_long_term{};
        include_other_exp m_include_other_exp{};
        include_flex m_include_flex{};
        include_directed m_include_directed{};
        include_comm_paying m_include_comm_paying{};
        direction m_direction{};
        net_vega_direction m_net_vega_direction{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<auction_sources> m_auction_sources{};
        std::vector<auction_types> m_auction_types{};
        std::vector<exclude_ticker> m_exclude_ticker{};
        std::vector<include_ticker> m_include_ticker{};
        std::vector<industry> m_industry{};
        std::vector<spread_class> m_spread_class{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        disabled get_disabled() const {
            return m_disabled;
        }		
        include_covered get_include_covered() const {
            return m_include_covered;
        }		
        include_etfs get_include_etfs() const {
            return m_include_etfs;
        }		
        include_adrs get_include_adrs() const {
            return m_include_adrs;
        }		
        include_indexes get_include_indexes() const {
            return m_include_indexes;
        }		
        min_uprc get_min_uprc() const {
            return m_min_uprc;
        }		
        has_uavg_daily_vlm_filter get_has_uavg_daily_vlm_filter() const {
            return m_has_uavg_daily_vlm_filter;
        }		
        min_uavg_daily_vlm get_min_uavg_daily_vlm() const {
            return m_min_uavg_daily_vlm;
        }		
        max_uavg_daily_vlm get_max_uavg_daily_vlm() const {
            return m_max_uavg_daily_vlm;
        }		
        min_size get_min_size() const {
            return m_min_size;
        }		
        min_abs_vega get_min_abs_vega() const {
            return m_min_abs_vega;
        }		
        has_abs_delta_filter get_has_abs_delta_filter() const {
            return m_has_abs_delta_filter;
        }		
        min_abs_delta get_min_abs_delta() const {
            return m_min_abs_delta;
        }		
        max_abs_delta get_max_abs_delta() const {
            return m_max_abs_delta;
        }		
        has_xdelta_filter get_has_xdelta_filter() const {
            return m_has_xdelta_filter;
        }		
        min_xdelta get_min_xdelta() const {
            return m_min_xdelta;
        }		
        max_xdelta get_max_xdelta() const {
            return m_max_xdelta;
        }		
        has_atm_svol_filter get_has_atm_svol_filter() const {
            return m_has_atm_svol_filter;
        }		
        min_atm_svol get_min_atm_svol() const {
            return m_min_atm_svol;
        }		
        max_atm_svol get_max_atm_svol() const {
            return m_max_atm_svol;
        }		
        has_atm_sdiv_filter get_has_atm_sdiv_filter() const {
            return m_has_atm_sdiv_filter;
        }		
        min_atm_sdiv get_min_atm_sdiv() const {
            return m_min_atm_sdiv;
        }		
        max_atm_sdiv get_max_atm_sdiv() const {
            return m_max_atm_sdiv;
        }		
        has_expiry_days get_has_expiry_days() const {
            return m_has_expiry_days;
        }		
        min_expiry_days get_min_expiry_days() const {
            return m_min_expiry_days;
        }		
        max_expiry_days get_max_expiry_days() const {
            return m_max_expiry_days;
        }		
        include_zdte get_include_zdte() const {
            return m_include_zdte;
        }		
        include_daily get_include_daily() const {
            return m_include_daily;
        }		
        include_weekly get_include_weekly() const {
            return m_include_weekly;
        }		
        include_regular get_include_regular() const {
            return m_include_regular;
        }		
        include_quarterly get_include_quarterly() const {
            return m_include_quarterly;
        }		
        include_long_term get_include_long_term() const {
            return m_include_long_term;
        }		
        include_other_exp get_include_other_exp() const {
            return m_include_other_exp;
        }		
        include_flex get_include_flex() const {
            return m_include_flex;
        }		
        include_directed get_include_directed() const {
            return m_include_directed;
        }		
        include_comm_paying get_include_comm_paying() const {
            return m_include_comm_paying;
        }		
        direction get_direction() const {
            return m_direction;
        }		
        net_vega_direction get_net_vega_direction() const {
            return m_net_vega_direction;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<auction_sources>& get_auction_sources_list() const {
            return m_auction_sources;
        }
        const auction_sources& get_auction_sources(const int i) const {
            return m_auction_sources.at(i);
        }
        const std::vector<auction_types>& get_auction_types_list() const {
            return m_auction_types;
        }
        const auction_types& get_auction_types(const int i) const {
            return m_auction_types.at(i);
        }
        const std::vector<exclude_ticker>& get_exclude_ticker_list() const {
            return m_exclude_ticker;
        }
        const exclude_ticker& get_exclude_ticker(const int i) const {
            return m_exclude_ticker.at(i);
        }
        const std::vector<include_ticker>& get_include_ticker_list() const {
            return m_include_ticker;
        }
        const include_ticker& get_include_ticker(const int i) const {
            return m_include_ticker.at(i);
        }
        const std::vector<industry>& get_industry_list() const {
            return m_industry;
        }
        const industry& get_industry(const int i) const {
            return m_industry.at(i);
        }
        const std::vector<spread_class>& get_spread_class_list() const {
            return m_spread_class;
        }
        const spread_class& get_spread_class(const int i) const {
            return m_spread_class.at(i);
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
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_disabled(const disabled& value)  {
            m_disabled = value;
        }
        void set_include_covered(const include_covered& value)  {
            m_include_covered = value;
        }
        void set_include_etfs(const include_etfs& value)  {
            m_include_etfs = value;
        }
        void set_include_adrs(const include_adrs& value)  {
            m_include_adrs = value;
        }
        void set_include_indexes(const include_indexes& value)  {
            m_include_indexes = value;
        }
        void set_min_uprc(const min_uprc& value)  {
            m_min_uprc = value;
        }
        void set_has_uavg_daily_vlm_filter(const has_uavg_daily_vlm_filter& value)  {
            m_has_uavg_daily_vlm_filter = value;
        }
        void set_min_uavg_daily_vlm(const min_uavg_daily_vlm& value)  {
            m_min_uavg_daily_vlm = value;
        }
        void set_max_uavg_daily_vlm(const max_uavg_daily_vlm& value)  {
            m_max_uavg_daily_vlm = value;
        }
        void set_min_size(const min_size& value)  {
            m_min_size = value;
        }
        void set_min_abs_vega(const min_abs_vega& value)  {
            m_min_abs_vega = value;
        }
        void set_has_abs_delta_filter(const has_abs_delta_filter& value)  {
            m_has_abs_delta_filter = value;
        }
        void set_min_abs_delta(const min_abs_delta& value)  {
            m_min_abs_delta = value;
        }
        void set_max_abs_delta(const max_abs_delta& value)  {
            m_max_abs_delta = value;
        }
        void set_has_xdelta_filter(const has_xdelta_filter& value)  {
            m_has_xdelta_filter = value;
        }
        void set_min_xdelta(const min_xdelta& value)  {
            m_min_xdelta = value;
        }
        void set_max_xdelta(const max_xdelta& value)  {
            m_max_xdelta = value;
        }
        void set_has_atm_svol_filter(const has_atm_svol_filter& value)  {
            m_has_atm_svol_filter = value;
        }
        void set_min_atm_svol(const min_atm_svol& value)  {
            m_min_atm_svol = value;
        }
        void set_max_atm_svol(const max_atm_svol& value)  {
            m_max_atm_svol = value;
        }
        void set_has_atm_sdiv_filter(const has_atm_sdiv_filter& value)  {
            m_has_atm_sdiv_filter = value;
        }
        void set_min_atm_sdiv(const min_atm_sdiv& value)  {
            m_min_atm_sdiv = value;
        }
        void set_max_atm_sdiv(const max_atm_sdiv& value)  {
            m_max_atm_sdiv = value;
        }
        void set_has_expiry_days(const has_expiry_days& value)  {
            m_has_expiry_days = value;
        }
        void set_min_expiry_days(const min_expiry_days& value)  {
            m_min_expiry_days = value;
        }
        void set_max_expiry_days(const max_expiry_days& value)  {
            m_max_expiry_days = value;
        }
        void set_include_zdte(const include_zdte& value)  {
            m_include_zdte = value;
        }
        void set_include_daily(const include_daily& value)  {
            m_include_daily = value;
        }
        void set_include_weekly(const include_weekly& value)  {
            m_include_weekly = value;
        }
        void set_include_regular(const include_regular& value)  {
            m_include_regular = value;
        }
        void set_include_quarterly(const include_quarterly& value)  {
            m_include_quarterly = value;
        }
        void set_include_long_term(const include_long_term& value)  {
            m_include_long_term = value;
        }
        void set_include_other_exp(const include_other_exp& value)  {
            m_include_other_exp = value;
        }
        void set_include_flex(const include_flex& value)  {
            m_include_flex = value;
        }
        void set_include_directed(const include_directed& value)  {
            m_include_directed = value;
        }
        void set_include_comm_paying(const include_comm_paying& value)  {
            m_include_comm_paying = value;
        }
        void set_direction(const direction& value)  {
            m_direction = value;
        }
        void set_net_vega_direction(const net_vega_direction& value)  {
            m_net_vega_direction = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_auction_sources_list(const std::vector<auction_sources>& list)  {
            m_auction_sources = list;
        }
        void add_auction_sources(const auction_sources& item) {
            m_auction_sources.emplace_back(item);
        }
        void set_auction_types_list(const std::vector<auction_types>& list)  {
            m_auction_types = list;
        }
        void add_auction_types(const auction_types& item) {
            m_auction_types.emplace_back(item);
        }
        void set_exclude_ticker_list(const std::vector<exclude_ticker>& list)  {
            m_exclude_ticker = list;
        }
        void add_exclude_ticker(const exclude_ticker& item) {
            m_exclude_ticker.emplace_back(item);
        }
        void set_include_ticker_list(const std::vector<include_ticker>& list)  {
            m_include_ticker = list;
        }
        void add_include_ticker(const include_ticker& item) {
            m_include_ticker.emplace_back(item);
        }
        void set_industry_list(const std::vector<industry>& list)  {
            m_industry = list;
        }
        void add_industry(const industry& item) {
            m_industry.emplace_back(item);
        }
        void set_spread_class_list(const std::vector<spread_class>& list)  {
            m_spread_class = list;
        }
        void add_spread_class(const spread_class& item) {
            m_spread_class.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserAuctionFilter::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const disabled & value) {
            set_disabled(value);
        }
        void set(const include_covered & value) {
            set_include_covered(value);
        }
        void set(const include_etfs & value) {
            set_include_etfs(value);
        }
        void set(const include_adrs & value) {
            set_include_adrs(value);
        }
        void set(const include_indexes & value) {
            set_include_indexes(value);
        }
        void set(const min_uprc & value) {
            set_min_uprc(value);
        }
        void set(const has_uavg_daily_vlm_filter & value) {
            set_has_uavg_daily_vlm_filter(value);
        }
        void set(const min_uavg_daily_vlm & value) {
            set_min_uavg_daily_vlm(value);
        }
        void set(const max_uavg_daily_vlm & value) {
            set_max_uavg_daily_vlm(value);
        }
        void set(const min_size & value) {
            set_min_size(value);
        }
        void set(const min_abs_vega & value) {
            set_min_abs_vega(value);
        }
        void set(const has_abs_delta_filter & value) {
            set_has_abs_delta_filter(value);
        }
        void set(const min_abs_delta & value) {
            set_min_abs_delta(value);
        }
        void set(const max_abs_delta & value) {
            set_max_abs_delta(value);
        }
        void set(const has_xdelta_filter & value) {
            set_has_xdelta_filter(value);
        }
        void set(const min_xdelta & value) {
            set_min_xdelta(value);
        }
        void set(const max_xdelta & value) {
            set_max_xdelta(value);
        }
        void set(const has_atm_svol_filter & value) {
            set_has_atm_svol_filter(value);
        }
        void set(const min_atm_svol & value) {
            set_min_atm_svol(value);
        }
        void set(const max_atm_svol & value) {
            set_max_atm_svol(value);
        }
        void set(const has_atm_sdiv_filter & value) {
            set_has_atm_sdiv_filter(value);
        }
        void set(const min_atm_sdiv & value) {
            set_min_atm_sdiv(value);
        }
        void set(const max_atm_sdiv & value) {
            set_max_atm_sdiv(value);
        }
        void set(const has_expiry_days & value) {
            set_has_expiry_days(value);
        }
        void set(const min_expiry_days & value) {
            set_min_expiry_days(value);
        }
        void set(const max_expiry_days & value) {
            set_max_expiry_days(value);
        }
        void set(const include_zdte & value) {
            set_include_zdte(value);
        }
        void set(const include_daily & value) {
            set_include_daily(value);
        }
        void set(const include_weekly & value) {
            set_include_weekly(value);
        }
        void set(const include_regular & value) {
            set_include_regular(value);
        }
        void set(const include_quarterly & value) {
            set_include_quarterly(value);
        }
        void set(const include_long_term & value) {
            set_include_long_term(value);
        }
        void set(const include_other_exp & value) {
            set_include_other_exp(value);
        }
        void set(const include_flex & value) {
            set_include_flex(value);
        }
        void set(const include_directed & value) {
            set_include_directed(value);
        }
        void set(const include_comm_paying & value) {
            set_include_comm_paying(value);
        }
        void set(const direction & value) {
            set_direction(value);
        }
        void set(const net_vega_direction & value) {
            set_net_vega_direction(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const auction_sources & value) {
            add_auction_sources(value);
        }
        void set(const auction_types & value) {
            add_auction_types(value);
        }
        void set(const exclude_ticker & value) {
            add_exclude_ticker(value);
        }
        void set(const include_ticker & value) {
            add_include_ticker(value);
        }
        void set(const industry & value) {
            add_industry(value);
        }
        void set(const spread_class & value) {
            add_spread_class(value);
        }

        void set(const UserAuctionFilter & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_client_firm);
            set(value.m_disabled);
            set(value.m_include_covered);
            set(value.m_include_etfs);
            set(value.m_include_adrs);
            set(value.m_include_indexes);
            set(value.m_min_uprc);
            set(value.m_has_uavg_daily_vlm_filter);
            set(value.m_min_uavg_daily_vlm);
            set(value.m_max_uavg_daily_vlm);
            set(value.m_min_size);
            set(value.m_min_abs_vega);
            set(value.m_has_abs_delta_filter);
            set(value.m_min_abs_delta);
            set(value.m_max_abs_delta);
            set(value.m_has_xdelta_filter);
            set(value.m_min_xdelta);
            set(value.m_max_xdelta);
            set(value.m_has_atm_svol_filter);
            set(value.m_min_atm_svol);
            set(value.m_max_atm_svol);
            set(value.m_has_atm_sdiv_filter);
            set(value.m_min_atm_sdiv);
            set(value.m_max_atm_sdiv);
            set(value.m_has_expiry_days);
            set(value.m_min_expiry_days);
            set(value.m_max_expiry_days);
            set(value.m_include_zdte);
            set(value.m_include_daily);
            set(value.m_include_weekly);
            set(value.m_include_regular);
            set(value.m_include_quarterly);
            set(value.m_include_long_term);
            set(value.m_include_other_exp);
            set(value.m_include_flex);
            set(value.m_include_directed);
            set(value.m_include_comm_paying);
            set(value.m_direction);
            set(value.m_net_vega_direction);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_auction_sources_list(value.m_auction_sources);set_auction_types_list(value.m_auction_types);set_exclude_ticker_list(value.m_exclude_ticker);set_include_ticker_list(value.m_include_ticker);set_industry_list(value.m_industry);set_spread_class_list(value.m_spread_class);
        }

        UserAuctionFilter() {
            m__meta.set_message_type("UserAuctionFilter");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1915, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1915, length);
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
             *this = UserAuctionFilter{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeMinUprc() const {
            return !(m_min_uprc == 0.0);
        }
        bool IncludeMinUavgDailyVlm() const {
            return !(m_min_uavg_daily_vlm == 0.0);
        }
        bool IncludeMaxUavgDailyVlm() const {
            return !(m_max_uavg_daily_vlm == 0.0);
        }
        bool IncludeMinSize() const {
            return !(m_min_size == 0.0);
        }
        bool IncludeMinAbsVega() const {
            return !(m_min_abs_vega == 0.0);
        }
        bool IncludeMinAbsDelta() const {
            return !(m_min_abs_delta == 0.0);
        }
        bool IncludeMaxAbsDelta() const {
            return !(m_max_abs_delta == 0.0);
        }
        bool IncludeMinXdelta() const {
            return !(m_min_xdelta == 0.0);
        }
        bool IncludeMaxXdelta() const {
            return !(m_max_xdelta == 0.0);
        }
        bool IncludeMinAtmSvol() const {
            return !(m_min_atm_svol == 0.0);
        }
        bool IncludeMaxAtmSvol() const {
            return !(m_max_atm_svol == 0.0);
        }
        bool IncludeMinAtmSdiv() const {
            return !(m_min_atm_sdiv == 0.0);
        }
        bool IncludeMaxAtmSdiv() const {
            return !(m_max_atm_sdiv == 0.0);
        }
        bool IncludeMinExpiryDays() const {
            return !(m_min_expiry_days == 0);
        }
        bool IncludeMaxExpiryDays() const {
            return !(m_max_expiry_days == 0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAuctionSources() const {
            return (!m_auction_sources.empty());
        }
        bool IncludeAuctionTypes() const {
            return (!m_auction_types.empty());
        }
        bool IncludeExcludeTicker() const {
            return (!m_exclude_ticker.empty());
        }
        bool IncludeIncludeTicker() const {
            return (!m_include_ticker.empty());
        }
        bool IncludeIndustry() const {
            return (!m_industry.empty());
        }
        bool IncludeSpreadClass() const {
            return (!m_spread_class.empty());
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
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_disabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(114,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_covered)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_etfs)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_adrs)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_indexes)));
            if ( IncludeMinUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_min_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_uavg_daily_vlm_filter)));
            if ( IncludeMinUavgDailyVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_min_uavg_daily_vlm);
            }
            if ( IncludeMaxUavgDailyVlm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_max_uavg_daily_vlm);
            }
            if ( IncludeMinSize()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_min_size);
            }
            if ( IncludeMinAbsVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(152,m_min_abs_vega);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_abs_delta_filter)));
            if ( IncludeMinAbsDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(125,m_min_abs_delta);
            }
            if ( IncludeMaxAbsDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(126,m_max_abs_delta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_xdelta_filter)));
            if ( IncludeMinXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(128,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(129,m_max_xdelta);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_atm_svol_filter)));
            if ( IncludeMinAtmSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(131,m_min_atm_svol);
            }
            if ( IncludeMaxAtmSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(132,m_max_atm_svol);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_atm_sdiv_filter)));
            if ( IncludeMinAtmSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(134,m_min_atm_sdiv);
            }
            if ( IncludeMaxAtmSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(135,m_max_atm_sdiv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_expiry_days)));
            if ( IncludeMinExpiryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(137,m_min_expiry_days);
            }
            if ( IncludeMaxExpiryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(138,m_max_expiry_days);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_zdte)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(140,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_daily)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(141,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_weekly)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_regular)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_quarterly)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(153,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_long_term)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_other_exp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(144,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_flex)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(156,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_directed)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_comm_paying)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(146,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_direction)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(155,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_net_vega_direction)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(149,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(150, m_timestamp);
            }
            if ( IncludeAuctionSources()) {
                for (auto& item : m_auction_sources) {
					totalSize += SRProtobufCPP::TagCodec::Size(112, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeAuctionTypes()) {
                for (auto& item : m_auction_types) {
					totalSize += SRProtobufCPP::TagCodec::Size(110, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeExcludeTicker()) {
                for (auto& item : m_exclude_ticker) {
					totalSize += SRProtobufCPP::TagCodec::Size(106, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeIncludeTicker()) {
                for (auto& item : m_include_ticker) {
					totalSize += SRProtobufCPP::TagCodec::Size(104, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeIndustry()) {
                for (auto& item : m_industry) {
					totalSize += SRProtobufCPP::TagCodec::Size(102, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeSpreadClass()) {
                for (auto& item : m_spread_class) {
					totalSize += SRProtobufCPP::TagCodec::Size(108, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_disabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,114,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_covered)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_etfs)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_adrs)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_indexes)));
            if ( IncludeMinUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_min_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_uavg_daily_vlm_filter)));
            if ( IncludeMinUavgDailyVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_min_uavg_daily_vlm);
            }
            if ( IncludeMaxUavgDailyVlm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_max_uavg_daily_vlm);
            }
            if ( IncludeMinSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_min_size);
            }
            if ( IncludeMinAbsVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,152,m_min_abs_vega);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_abs_delta_filter)));
            if ( IncludeMinAbsDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,125,m_min_abs_delta);
            }
            if ( IncludeMaxAbsDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,126,m_max_abs_delta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_xdelta_filter)));
            if ( IncludeMinXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,128,m_min_xdelta);
            }
            if ( IncludeMaxXdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,129,m_max_xdelta);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_atm_svol_filter)));
            if ( IncludeMinAtmSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,131,m_min_atm_svol);
            }
            if ( IncludeMaxAtmSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,132,m_max_atm_svol);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_atm_sdiv_filter)));
            if ( IncludeMinAtmSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,134,m_min_atm_sdiv);
            }
            if ( IncludeMaxAtmSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,135,m_max_atm_sdiv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_expiry_days)));
            if ( IncludeMinExpiryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,137,m_min_expiry_days);
            }
            if ( IncludeMaxExpiryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,138,m_max_expiry_days);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_zdte)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,140,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_daily)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,141,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_weekly)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_regular)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_quarterly)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,153,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_long_term)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_other_exp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,144,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_flex)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,156,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_directed)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_include_comm_paying)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,146,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_direction)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,155,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_net_vega_direction)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,149,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 150, m_timestamp);
            }
            if ( IncludeAuctionSources()) {
                for (auto& item : m_auction_sources) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 112, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeAuctionTypes()) {
                for (auto& item : m_auction_types) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 110, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeExcludeTicker()) {
                for (auto& item : m_exclude_ticker) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 106, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeIncludeTicker()) {
                for (auto& item : m_include_ticker) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 104, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeIndustry()) {
                for (auto& item : m_industry) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 102, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeSpreadClass()) {
                for (auto& item : m_spread_class) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 108, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 114: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_covered = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_etfs = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 116: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_adrs = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 117: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_indexes = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_uavg_daily_vlm_filter = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_uavg_daily_vlm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uavg_daily_vlm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_size = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 152: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_abs_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_abs_delta_filter = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_abs_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_abs_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_xdelta_filter = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_xdelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_atm_svol_filter = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_atm_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_atm_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_atm_sdiv_filter = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_atm_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_atm_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_expiry_days = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_expiry_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_expiry_days = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_zdte = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 140: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_daily = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 141: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_weekly = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_regular = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 143: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_quarterly = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 153: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_long_term = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_other_exp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 144: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_flex = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 156: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_directed = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_include_comm_paying = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 146: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_direction = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 155: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_net_vega_direction = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 149: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 150: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            auction_sources item_auction_sources;
                            item_auction_sources.Decode(pos, pos+length);  
                            m_auction_sources.emplace_back(item_auction_sources);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            auction_types item_auction_types;
                            item_auction_types.Decode(pos, pos+length);  
                            m_auction_types.emplace_back(item_auction_types);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exclude_ticker item_exclude_ticker;
                            item_exclude_ticker.Decode(pos, pos+length);  
                            m_exclude_ticker.emplace_back(item_exclude_ticker);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            include_ticker item_include_ticker;
                            item_include_ticker.Decode(pos, pos+length);  
                            m_include_ticker.emplace_back(item_include_ticker);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            industry item_industry;
                            item_industry.Decode(pos, pos+length);  
                            m_industry.emplace_back(item_industry);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            spread_class item_spread_class;
                            item_spread_class.Decode(pos, pos+length);  
                            m_spread_class.emplace_back(item_spread_class);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::_meta>() const { return UserAuctionFilter::_meta{ m__meta}; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::pkey>() const { return UserAuctionFilter::pkey{ m_pkey}; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::client_firm>() const { return m_client_firm; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_disabled)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_covered>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_covered)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_etfs>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_etfs)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_adrs>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_adrs)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_indexes>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_indexes)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_uprc>() const { return m_min_uprc; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::has_uavg_daily_vlm_filter>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_uavg_daily_vlm_filter)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_uavg_daily_vlm>() const { return m_min_uavg_daily_vlm; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::max_uavg_daily_vlm>() const { return m_max_uavg_daily_vlm; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_size>() const { return m_min_size; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_abs_vega>() const { return m_min_abs_vega; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::has_abs_delta_filter>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_abs_delta_filter)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_abs_delta>() const { return m_min_abs_delta; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::max_abs_delta>() const { return m_max_abs_delta; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::has_xdelta_filter>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_xdelta_filter)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_xdelta>() const { return m_min_xdelta; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::max_xdelta>() const { return m_max_xdelta; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::has_atm_svol_filter>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_atm_svol_filter)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_atm_svol>() const { return m_min_atm_svol; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::max_atm_svol>() const { return m_max_atm_svol; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::has_atm_sdiv_filter>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_atm_sdiv_filter)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_atm_sdiv>() const { return m_min_atm_sdiv; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::max_atm_sdiv>() const { return m_max_atm_sdiv; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::has_expiry_days>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_expiry_days)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::min_expiry_days>() const { return m_min_expiry_days; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::max_expiry_days>() const { return m_max_expiry_days; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_zdte>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_zdte)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_daily>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_daily)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_weekly>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_weekly)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_regular>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_regular)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_quarterly>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_quarterly)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_long_term>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_long_term)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_other_exp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_other_exp)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_flex>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_flex)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_directed>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_directed)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_comm_paying>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_include_comm_paying)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::direction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_direction)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::net_vega_direction>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_net_vega_direction)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::modified_by>() const { return m_modified_by; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::auction_sources>(int i) const { return UserAuctionFilter::auction_sources{ get_auction_sources(i)}; }
    template<> inline int UserAuctionFilter::count<UserAuctionFilter::auction_sources>() const { return static_cast<int>( m_auction_sources.size()); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::auction_types>(int i) const { return UserAuctionFilter::auction_types{ get_auction_types(i)}; }
    template<> inline int UserAuctionFilter::count<UserAuctionFilter::auction_types>() const { return static_cast<int>( m_auction_types.size()); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::exclude_ticker>(int i) const { return UserAuctionFilter::exclude_ticker{ get_exclude_ticker(i)}; }
    template<> inline int UserAuctionFilter::count<UserAuctionFilter::exclude_ticker>() const { return static_cast<int>( m_exclude_ticker.size()); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::include_ticker>(int i) const { return UserAuctionFilter::include_ticker{ get_include_ticker(i)}; }
    template<> inline int UserAuctionFilter::count<UserAuctionFilter::include_ticker>() const { return static_cast<int>( m_include_ticker.size()); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::industry>(int i) const { return UserAuctionFilter::industry{ get_industry(i)}; }
    template<> inline int UserAuctionFilter::count<UserAuctionFilter::industry>() const { return static_cast<int>( m_industry.size()); }
    template<> inline const auto UserAuctionFilter::get<UserAuctionFilter::spread_class>(int i) const { return UserAuctionFilter::spread_class{ get_spread_class(i)}; }
    template<> inline int UserAuctionFilter::count<UserAuctionFilter::spread_class>() const { return static_cast<int>( m_spread_class.size()); }
    template<> inline const auto UserAuctionFilter_PKey::get<UserAuctionFilter_PKey::user_name>() const { return m_user_name; }
    template<> inline const auto UserAuctionFilter_PKey::get<UserAuctionFilter_PKey::filter_name>() const { return m_filter_name; }
    
    template<> inline const auto UserAuctionFilter_AuctionSources::get<UserAuctionFilter_AuctionSources::auction_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionSource>(m_auction_source));}
    
    template<> inline const auto UserAuctionFilter_AuctionTypes::get<UserAuctionFilter_AuctionTypes::auction_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AuctionType>(m_auction_type));}
    
    template<> inline const auto UserAuctionFilter_ExcludeTicker::get<UserAuctionFilter_ExcludeTicker::ticker>() const { return UserAuctionFilter_ExcludeTicker::ticker{m_ticker}; }
    
    template<> inline const auto UserAuctionFilter_IncludeTicker::get<UserAuctionFilter_IncludeTicker::ticker>() const { return UserAuctionFilter_IncludeTicker::ticker{m_ticker}; }
    
    template<> inline const auto UserAuctionFilter_Industry::get<UserAuctionFilter_Industry::industry>() const { return m_industry; }
    
    template<> inline const auto UserAuctionFilter_SpreadClass::get<UserAuctionFilter_SpreadClass::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_PKey& m) {
        o << "\"user_name\":\"" << m.get<UserAuctionFilter_PKey::user_name>() << "\"";
        o << ",\"filter_name\":\"" << m.get<UserAuctionFilter_PKey::filter_name>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_AuctionSources& m) {
        o << "\"auction_source\":" << (int64_t)m.get<UserAuctionFilter_AuctionSources::auction_source>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_AuctionTypes& m) {
        o << "\"auction_type\":" << (int64_t)m.get<UserAuctionFilter_AuctionTypes::auction_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_ExcludeTicker& m) {
        o << "\"ticker\":{" << m.get<UserAuctionFilter_ExcludeTicker::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_IncludeTicker& m) {
        o << "\"ticker\":{" << m.get<UserAuctionFilter_IncludeTicker::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_Industry& m) {
        o << "\"industry\":\"" << m.get<UserAuctionFilter_Industry::industry>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter_SpreadClass& m) {
        o << "\"spread_class\":" << (int64_t)m.get<UserAuctionFilter_SpreadClass::spread_class>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserAuctionFilter& m) {
        o << "\"_meta\":{" << m.get<UserAuctionFilter::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<UserAuctionFilter::pkey>() << "}";
        o << ",\"client_firm\":\"" << m.get<UserAuctionFilter::client_firm>() << "\"";
        o << ",\"disabled\":" << (int64_t)m.get<UserAuctionFilter::disabled>();
        o << ",\"include_covered\":" << (int64_t)m.get<UserAuctionFilter::include_covered>();
        o << ",\"include_etfs\":" << (int64_t)m.get<UserAuctionFilter::include_etfs>();
        o << ",\"include_adrs\":" << (int64_t)m.get<UserAuctionFilter::include_adrs>();
        o << ",\"include_indexes\":" << (int64_t)m.get<UserAuctionFilter::include_indexes>();
        o << ",\"min_uprc\":" << m.get<UserAuctionFilter::min_uprc>();
        o << ",\"has_uavg_daily_vlm_filter\":" << (int64_t)m.get<UserAuctionFilter::has_uavg_daily_vlm_filter>();
        o << ",\"min_uavg_daily_vlm\":" << m.get<UserAuctionFilter::min_uavg_daily_vlm>();
        o << ",\"max_uavg_daily_vlm\":" << m.get<UserAuctionFilter::max_uavg_daily_vlm>();
        o << ",\"min_size\":" << m.get<UserAuctionFilter::min_size>();
        o << ",\"min_abs_vega\":" << m.get<UserAuctionFilter::min_abs_vega>();
        o << ",\"has_abs_delta_filter\":" << (int64_t)m.get<UserAuctionFilter::has_abs_delta_filter>();
        o << ",\"min_abs_delta\":" << m.get<UserAuctionFilter::min_abs_delta>();
        o << ",\"max_abs_delta\":" << m.get<UserAuctionFilter::max_abs_delta>();
        o << ",\"has_xdelta_filter\":" << (int64_t)m.get<UserAuctionFilter::has_xdelta_filter>();
        o << ",\"min_xdelta\":" << m.get<UserAuctionFilter::min_xdelta>();
        o << ",\"max_xdelta\":" << m.get<UserAuctionFilter::max_xdelta>();
        o << ",\"has_atm_svol_filter\":" << (int64_t)m.get<UserAuctionFilter::has_atm_svol_filter>();
        o << ",\"min_atm_svol\":" << m.get<UserAuctionFilter::min_atm_svol>();
        o << ",\"max_atm_svol\":" << m.get<UserAuctionFilter::max_atm_svol>();
        o << ",\"has_atm_sdiv_filter\":" << (int64_t)m.get<UserAuctionFilter::has_atm_sdiv_filter>();
        o << ",\"min_atm_sdiv\":" << m.get<UserAuctionFilter::min_atm_sdiv>();
        o << ",\"max_atm_sdiv\":" << m.get<UserAuctionFilter::max_atm_sdiv>();
        o << ",\"has_expiry_days\":" << (int64_t)m.get<UserAuctionFilter::has_expiry_days>();
        o << ",\"min_expiry_days\":" << m.get<UserAuctionFilter::min_expiry_days>();
        o << ",\"max_expiry_days\":" << m.get<UserAuctionFilter::max_expiry_days>();
        o << ",\"include_zdte\":" << (int64_t)m.get<UserAuctionFilter::include_zdte>();
        o << ",\"include_daily\":" << (int64_t)m.get<UserAuctionFilter::include_daily>();
        o << ",\"include_weekly\":" << (int64_t)m.get<UserAuctionFilter::include_weekly>();
        o << ",\"include_regular\":" << (int64_t)m.get<UserAuctionFilter::include_regular>();
        o << ",\"include_quarterly\":" << (int64_t)m.get<UserAuctionFilter::include_quarterly>();
        o << ",\"include_long_term\":" << (int64_t)m.get<UserAuctionFilter::include_long_term>();
        o << ",\"include_other_exp\":" << (int64_t)m.get<UserAuctionFilter::include_other_exp>();
        o << ",\"include_flex\":" << (int64_t)m.get<UserAuctionFilter::include_flex>();
        o << ",\"include_directed\":" << (int64_t)m.get<UserAuctionFilter::include_directed>();
        o << ",\"include_comm_paying\":" << (int64_t)m.get<UserAuctionFilter::include_comm_paying>();
        o << ",\"direction\":" << (int64_t)m.get<UserAuctionFilter::direction>();
        o << ",\"net_vega_direction\":" << (int64_t)m.get<UserAuctionFilter::net_vega_direction>();
        o << ",\"modified_by\":\"" << m.get<UserAuctionFilter::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<UserAuctionFilter::modified_in>();
        {
            std::time_t tt = m.get<UserAuctionFilter::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"auction_sources\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserAuctionFilter::auction_sources>(); ++i) {
                o << delim << m.get<UserAuctionFilter::auction_sources>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"auction_types\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserAuctionFilter::auction_types>(); ++i) {
                o << delim << m.get<UserAuctionFilter::auction_types>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"exclude_ticker\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserAuctionFilter::exclude_ticker>(); ++i) {
                o << delim << m.get<UserAuctionFilter::exclude_ticker>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"include_ticker\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserAuctionFilter::include_ticker>(); ++i) {
                o << delim << m.get<UserAuctionFilter::include_ticker>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"industry\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserAuctionFilter::industry>(); ++i) {
                o << delim << m.get<UserAuctionFilter::industry>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"spread_class\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<UserAuctionFilter::spread_class>(); ++i) {
                o << delim << m.get<UserAuctionFilter::spread_class>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}