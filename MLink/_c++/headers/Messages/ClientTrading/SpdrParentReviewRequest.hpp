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

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _parent_shape__GUARD__
    #define _parent_shape__GUARD__
    DECL_STRONG_TYPE(parent_shape, spiderrock::protobuf::api::SpdrOrderShape);
    #endif//_parent_shape__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _alt_prev_order_id__GUARD__
    #define _alt_prev_order_id__GUARD__
    DECL_STRONG_TYPE(alt_prev_order_id, string);
    #endif//_alt_prev_order_id__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _firm_type__GUARD__
    #define _firm_type__GUARD__
    DECL_STRONG_TYPE(firm_type, spiderrock::protobuf::api::FirmType);
    #endif//_firm_type__GUARD__

    #ifndef _order_capacity__GUARD__
    #define _order_capacity__GUARD__
    DECL_STRONG_TYPE(order_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_order_capacity__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _locate_quan__GUARD__
    #define _locate_quan__GUARD__
    DECL_STRONG_TYPE(locate_quan, int32);
    #endif//_locate_quan__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

    #ifndef _no_cross_group__GUARD__
    #define _no_cross_group__GUARD__
    DECL_STRONG_TYPE(no_cross_group, string);
    #endif//_no_cross_group__GUARD__

    #ifndef _exch_trader_id__GUARD__
    #define _exch_trader_id__GUARD__
    DECL_STRONG_TYPE(exch_trader_id, string);
    #endif//_exch_trader_id__GUARD__

    #ifndef _large_trader_id__GUARD__
    #define _large_trader_id__GUARD__
    DECL_STRONG_TYPE(large_trader_id, string);
    #endif//_large_trader_id__GUARD__

    #ifndef _trading_location__GUARD__
    #define _trading_location__GUARD__
    DECL_STRONG_TYPE(trading_location, string);
    #endif//_trading_location__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

    #ifndef _hedge_units__GUARD__
    #define _hedge_units__GUARD__
    DECL_STRONG_TYPE(hedge_units, float);
    #endif//_hedge_units__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _child_data__GUARD__
    #define _child_data__GUARD__
    DECL_STRONG_TYPE(child_data, string);
    #endif//_child_data__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _stock_side__GUARD__
    #define _stock_side__GUARD__
    DECL_STRONG_TYPE(stock_side, spiderrock::protobuf::api::BuySell);
    #endif//_stock_side__GUARD__

    #ifndef _stock_shares__GUARD__
    #define _stock_shares__GUARD__
    DECL_STRONG_TYPE(stock_shares, int32);
    #endif//_stock_shares__GUARD__

    #ifndef _stock_leg_id__GUARD__
    #define _stock_leg_id__GUARD__
    DECL_STRONG_TYPE(stock_leg_id, int64);
    #endif//_stock_leg_id__GUARD__

    #ifndef _alt_stk_leg_id__GUARD__
    #define _alt_stk_leg_id__GUARD__
    DECL_STRONG_TYPE(alt_stk_leg_id, string);
    #endif//_alt_stk_leg_id__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _num_legs__GUARD__
    #define _num_legs__GUARD__
    DECL_STRONG_TYPE(num_legs, int32);
    #endif//_num_legs__GUARD__

    #ifndef _sec_key1__GUARD__
    #define _sec_key1__GUARD__
    DECL_STRONG_TYPE(sec_key1, OptionKey);
    #endif//_sec_key1__GUARD__

    #ifndef _sec_type1__GUARD__
    #define _sec_type1__GUARD__
    DECL_STRONG_TYPE(sec_type1, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type1__GUARD__

    #ifndef _mult1__GUARD__
    #define _mult1__GUARD__
    DECL_STRONG_TYPE(mult1, uint32);
    #endif//_mult1__GUARD__

    #ifndef _side1__GUARD__
    #define _side1__GUARD__
    DECL_STRONG_TYPE(side1, spiderrock::protobuf::api::BuySell);
    #endif//_side1__GUARD__

    #ifndef _leg_id1__GUARD__
    #define _leg_id1__GUARD__
    DECL_STRONG_TYPE(leg_id1, int64);
    #endif//_leg_id1__GUARD__

    #ifndef _alt_leg_id1__GUARD__
    #define _alt_leg_id1__GUARD__
    DECL_STRONG_TYPE(alt_leg_id1, string);
    #endif//_alt_leg_id1__GUARD__

    #ifndef _pos_type1__GUARD__
    #define _pos_type1__GUARD__
    DECL_STRONG_TYPE(pos_type1, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type1__GUARD__

    #ifndef _ssale_flag1__GUARD__
    #define _ssale_flag1__GUARD__
    DECL_STRONG_TYPE(ssale_flag1, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag1__GUARD__

    #ifndef _sec_key2__GUARD__
    #define _sec_key2__GUARD__
    DECL_STRONG_TYPE(sec_key2, OptionKey);
    #endif//_sec_key2__GUARD__

    #ifndef _sec_type2__GUARD__
    #define _sec_type2__GUARD__
    DECL_STRONG_TYPE(sec_type2, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type2__GUARD__

    #ifndef _mult2__GUARD__
    #define _mult2__GUARD__
    DECL_STRONG_TYPE(mult2, uint32);
    #endif//_mult2__GUARD__

    #ifndef _side2__GUARD__
    #define _side2__GUARD__
    DECL_STRONG_TYPE(side2, spiderrock::protobuf::api::BuySell);
    #endif//_side2__GUARD__

    #ifndef _leg_id2__GUARD__
    #define _leg_id2__GUARD__
    DECL_STRONG_TYPE(leg_id2, int64);
    #endif//_leg_id2__GUARD__

    #ifndef _alt_leg_id2__GUARD__
    #define _alt_leg_id2__GUARD__
    DECL_STRONG_TYPE(alt_leg_id2, string);
    #endif//_alt_leg_id2__GUARD__

    #ifndef _pos_type2__GUARD__
    #define _pos_type2__GUARD__
    DECL_STRONG_TYPE(pos_type2, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type2__GUARD__

    #ifndef _ssale_flag2__GUARD__
    #define _ssale_flag2__GUARD__
    DECL_STRONG_TYPE(ssale_flag2, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag2__GUARD__

    #ifndef _sec_key3__GUARD__
    #define _sec_key3__GUARD__
    DECL_STRONG_TYPE(sec_key3, OptionKey);
    #endif//_sec_key3__GUARD__

    #ifndef _sec_type3__GUARD__
    #define _sec_type3__GUARD__
    DECL_STRONG_TYPE(sec_type3, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type3__GUARD__

    #ifndef _mult3__GUARD__
    #define _mult3__GUARD__
    DECL_STRONG_TYPE(mult3, uint32);
    #endif//_mult3__GUARD__

    #ifndef _side3__GUARD__
    #define _side3__GUARD__
    DECL_STRONG_TYPE(side3, spiderrock::protobuf::api::BuySell);
    #endif//_side3__GUARD__

    #ifndef _leg_id3__GUARD__
    #define _leg_id3__GUARD__
    DECL_STRONG_TYPE(leg_id3, int64);
    #endif//_leg_id3__GUARD__

    #ifndef _alt_leg_id3__GUARD__
    #define _alt_leg_id3__GUARD__
    DECL_STRONG_TYPE(alt_leg_id3, string);
    #endif//_alt_leg_id3__GUARD__

    #ifndef _pos_type3__GUARD__
    #define _pos_type3__GUARD__
    DECL_STRONG_TYPE(pos_type3, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type3__GUARD__

    #ifndef _ssale_flag3__GUARD__
    #define _ssale_flag3__GUARD__
    DECL_STRONG_TYPE(ssale_flag3, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag3__GUARD__

    #ifndef _sec_key4__GUARD__
    #define _sec_key4__GUARD__
    DECL_STRONG_TYPE(sec_key4, OptionKey);
    #endif//_sec_key4__GUARD__

    #ifndef _sec_type4__GUARD__
    #define _sec_type4__GUARD__
    DECL_STRONG_TYPE(sec_type4, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type4__GUARD__

    #ifndef _mult4__GUARD__
    #define _mult4__GUARD__
    DECL_STRONG_TYPE(mult4, uint32);
    #endif//_mult4__GUARD__

    #ifndef _side4__GUARD__
    #define _side4__GUARD__
    DECL_STRONG_TYPE(side4, spiderrock::protobuf::api::BuySell);
    #endif//_side4__GUARD__

    #ifndef _leg_id4__GUARD__
    #define _leg_id4__GUARD__
    DECL_STRONG_TYPE(leg_id4, int64);
    #endif//_leg_id4__GUARD__

    #ifndef _alt_leg_id4__GUARD__
    #define _alt_leg_id4__GUARD__
    DECL_STRONG_TYPE(alt_leg_id4, string);
    #endif//_alt_leg_id4__GUARD__

    #ifndef _pos_type4__GUARD__
    #define _pos_type4__GUARD__
    DECL_STRONG_TYPE(pos_type4, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type4__GUARD__

    #ifndef _ssale_flag4__GUARD__
    #define _ssale_flag4__GUARD__
    DECL_STRONG_TYPE(ssale_flag4, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag4__GUARD__

    #ifndef _sec_key5__GUARD__
    #define _sec_key5__GUARD__
    DECL_STRONG_TYPE(sec_key5, OptionKey);
    #endif//_sec_key5__GUARD__

    #ifndef _sec_type5__GUARD__
    #define _sec_type5__GUARD__
    DECL_STRONG_TYPE(sec_type5, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type5__GUARD__

    #ifndef _mult5__GUARD__
    #define _mult5__GUARD__
    DECL_STRONG_TYPE(mult5, uint32);
    #endif//_mult5__GUARD__

    #ifndef _side5__GUARD__
    #define _side5__GUARD__
    DECL_STRONG_TYPE(side5, spiderrock::protobuf::api::BuySell);
    #endif//_side5__GUARD__

    #ifndef _leg_id5__GUARD__
    #define _leg_id5__GUARD__
    DECL_STRONG_TYPE(leg_id5, int64);
    #endif//_leg_id5__GUARD__

    #ifndef _alt_leg_id5__GUARD__
    #define _alt_leg_id5__GUARD__
    DECL_STRONG_TYPE(alt_leg_id5, string);
    #endif//_alt_leg_id5__GUARD__

    #ifndef _pos_type5__GUARD__
    #define _pos_type5__GUARD__
    DECL_STRONG_TYPE(pos_type5, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type5__GUARD__

    #ifndef _ssale_flag5__GUARD__
    #define _ssale_flag5__GUARD__
    DECL_STRONG_TYPE(ssale_flag5, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag5__GUARD__

    #ifndef _sec_key6__GUARD__
    #define _sec_key6__GUARD__
    DECL_STRONG_TYPE(sec_key6, OptionKey);
    #endif//_sec_key6__GUARD__

    #ifndef _sec_type6__GUARD__
    #define _sec_type6__GUARD__
    DECL_STRONG_TYPE(sec_type6, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type6__GUARD__

    #ifndef _mult6__GUARD__
    #define _mult6__GUARD__
    DECL_STRONG_TYPE(mult6, uint32);
    #endif//_mult6__GUARD__

    #ifndef _side6__GUARD__
    #define _side6__GUARD__
    DECL_STRONG_TYPE(side6, spiderrock::protobuf::api::BuySell);
    #endif//_side6__GUARD__

    #ifndef _leg_id6__GUARD__
    #define _leg_id6__GUARD__
    DECL_STRONG_TYPE(leg_id6, int64);
    #endif//_leg_id6__GUARD__

    #ifndef _alt_leg_id6__GUARD__
    #define _alt_leg_id6__GUARD__
    DECL_STRONG_TYPE(alt_leg_id6, string);
    #endif//_alt_leg_id6__GUARD__

    #ifndef _pos_type6__GUARD__
    #define _pos_type6__GUARD__
    DECL_STRONG_TYPE(pos_type6, spiderrock::protobuf::api::PositionType);
    #endif//_pos_type6__GUARD__

    #ifndef _ssale_flag6__GUARD__
    #define _ssale_flag6__GUARD__
    DECL_STRONG_TYPE(ssale_flag6, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag6__GUARD__

    
    class SpdrParentReviewRequest_PKey {
        public:
        //using statements for all types used in this class
        using parent_number = spiderrock::protobuf::api::parent_number;

        private:
        parent_number m_parent_number{};

        public:
        parent_number get_parent_number() const {
            return m_parent_number;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const parent_number & value) { set_parent_number(value); }


        SpdrParentReviewRequest_PKey() {}

        virtual ~SpdrParentReviewRequest_PKey() {
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
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_parent_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_parent_number);
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
                    case 10: {m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpdrParentReviewRequest_OrderLegs {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using stock_side = spiderrock::protobuf::api::stock_side;
        using stock_shares = spiderrock::protobuf::api::stock_shares;
        using stock_leg_id = spiderrock::protobuf::api::stock_leg_id;
        using alt_stk_leg_id = spiderrock::protobuf::api::alt_stk_leg_id;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using num_legs = spiderrock::protobuf::api::num_legs;
        using sec_key1 = spiderrock::protobuf::api::sec_key1;
        using sec_type1 = spiderrock::protobuf::api::sec_type1;
        using mult1 = spiderrock::protobuf::api::mult1;
        using side1 = spiderrock::protobuf::api::side1;
        using leg_id1 = spiderrock::protobuf::api::leg_id1;
        using alt_leg_id1 = spiderrock::protobuf::api::alt_leg_id1;
        using pos_type1 = spiderrock::protobuf::api::pos_type1;
        using ssale_flag1 = spiderrock::protobuf::api::ssale_flag1;
        using sec_key2 = spiderrock::protobuf::api::sec_key2;
        using sec_type2 = spiderrock::protobuf::api::sec_type2;
        using mult2 = spiderrock::protobuf::api::mult2;
        using side2 = spiderrock::protobuf::api::side2;
        using leg_id2 = spiderrock::protobuf::api::leg_id2;
        using alt_leg_id2 = spiderrock::protobuf::api::alt_leg_id2;
        using pos_type2 = spiderrock::protobuf::api::pos_type2;
        using ssale_flag2 = spiderrock::protobuf::api::ssale_flag2;
        using sec_key3 = spiderrock::protobuf::api::sec_key3;
        using sec_type3 = spiderrock::protobuf::api::sec_type3;
        using mult3 = spiderrock::protobuf::api::mult3;
        using side3 = spiderrock::protobuf::api::side3;
        using leg_id3 = spiderrock::protobuf::api::leg_id3;
        using alt_leg_id3 = spiderrock::protobuf::api::alt_leg_id3;
        using pos_type3 = spiderrock::protobuf::api::pos_type3;
        using ssale_flag3 = spiderrock::protobuf::api::ssale_flag3;
        using sec_key4 = spiderrock::protobuf::api::sec_key4;
        using sec_type4 = spiderrock::protobuf::api::sec_type4;
        using mult4 = spiderrock::protobuf::api::mult4;
        using side4 = spiderrock::protobuf::api::side4;
        using leg_id4 = spiderrock::protobuf::api::leg_id4;
        using alt_leg_id4 = spiderrock::protobuf::api::alt_leg_id4;
        using pos_type4 = spiderrock::protobuf::api::pos_type4;
        using ssale_flag4 = spiderrock::protobuf::api::ssale_flag4;
        using sec_key5 = spiderrock::protobuf::api::sec_key5;
        using sec_type5 = spiderrock::protobuf::api::sec_type5;
        using mult5 = spiderrock::protobuf::api::mult5;
        using side5 = spiderrock::protobuf::api::side5;
        using leg_id5 = spiderrock::protobuf::api::leg_id5;
        using alt_leg_id5 = spiderrock::protobuf::api::alt_leg_id5;
        using pos_type5 = spiderrock::protobuf::api::pos_type5;
        using ssale_flag5 = spiderrock::protobuf::api::ssale_flag5;
        using sec_key6 = spiderrock::protobuf::api::sec_key6;
        using sec_type6 = spiderrock::protobuf::api::sec_type6;
        using mult6 = spiderrock::protobuf::api::mult6;
        using side6 = spiderrock::protobuf::api::side6;
        using leg_id6 = spiderrock::protobuf::api::leg_id6;
        using alt_leg_id6 = spiderrock::protobuf::api::alt_leg_id6;
        using pos_type6 = spiderrock::protobuf::api::pos_type6;
        using ssale_flag6 = spiderrock::protobuf::api::ssale_flag6;

        private:
        ticker m_ticker{};
        stock_side m_stock_side{};
        stock_shares m_stock_shares{};
        stock_leg_id m_stock_leg_id{};
        alt_stk_leg_id m_alt_stk_leg_id{};
        ssale_flag m_ssale_flag{};
        num_legs m_num_legs{};
        sec_key1 m_sec_key1{};
        sec_type1 m_sec_type1{};
        mult1 m_mult1{};
        side1 m_side1{};
        leg_id1 m_leg_id1{};
        alt_leg_id1 m_alt_leg_id1{};
        pos_type1 m_pos_type1{};
        ssale_flag1 m_ssale_flag1{};
        sec_key2 m_sec_key2{};
        sec_type2 m_sec_type2{};
        mult2 m_mult2{};
        side2 m_side2{};
        leg_id2 m_leg_id2{};
        alt_leg_id2 m_alt_leg_id2{};
        pos_type2 m_pos_type2{};
        ssale_flag2 m_ssale_flag2{};
        sec_key3 m_sec_key3{};
        sec_type3 m_sec_type3{};
        mult3 m_mult3{};
        side3 m_side3{};
        leg_id3 m_leg_id3{};
        alt_leg_id3 m_alt_leg_id3{};
        pos_type3 m_pos_type3{};
        ssale_flag3 m_ssale_flag3{};
        sec_key4 m_sec_key4{};
        sec_type4 m_sec_type4{};
        mult4 m_mult4{};
        side4 m_side4{};
        leg_id4 m_leg_id4{};
        alt_leg_id4 m_alt_leg_id4{};
        pos_type4 m_pos_type4{};
        ssale_flag4 m_ssale_flag4{};
        sec_key5 m_sec_key5{};
        sec_type5 m_sec_type5{};
        mult5 m_mult5{};
        side5 m_side5{};
        leg_id5 m_leg_id5{};
        alt_leg_id5 m_alt_leg_id5{};
        pos_type5 m_pos_type5{};
        ssale_flag5 m_ssale_flag5{};
        sec_key6 m_sec_key6{};
        sec_type6 m_sec_type6{};
        mult6 m_mult6{};
        side6 m_side6{};
        leg_id6 m_leg_id6{};
        alt_leg_id6 m_alt_leg_id6{};
        pos_type6 m_pos_type6{};
        ssale_flag6 m_ssale_flag6{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        stock_side get_stock_side() const {
            return m_stock_side;
        }
        stock_shares get_stock_shares() const {
            return m_stock_shares;
        }
        stock_leg_id get_stock_leg_id() const {
            return m_stock_leg_id;
        }
        alt_stk_leg_id get_alt_stk_leg_id() const {
            return m_alt_stk_leg_id;
        }
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }
        num_legs get_num_legs() const {
            return m_num_legs;
        }
		sec_key1 get_sec_key1() const {
            return m_sec_key1;
        }
        sec_type1 get_sec_type1() const {
            return m_sec_type1;
        }
        mult1 get_mult1() const {
            return m_mult1;
        }
        side1 get_side1() const {
            return m_side1;
        }
        leg_id1 get_leg_id1() const {
            return m_leg_id1;
        }
        alt_leg_id1 get_alt_leg_id1() const {
            return m_alt_leg_id1;
        }
        pos_type1 get_pos_type1() const {
            return m_pos_type1;
        }
        ssale_flag1 get_ssale_flag1() const {
            return m_ssale_flag1;
        }
		sec_key2 get_sec_key2() const {
            return m_sec_key2;
        }
        sec_type2 get_sec_type2() const {
            return m_sec_type2;
        }
        mult2 get_mult2() const {
            return m_mult2;
        }
        side2 get_side2() const {
            return m_side2;
        }
        leg_id2 get_leg_id2() const {
            return m_leg_id2;
        }
        alt_leg_id2 get_alt_leg_id2() const {
            return m_alt_leg_id2;
        }
        pos_type2 get_pos_type2() const {
            return m_pos_type2;
        }
        ssale_flag2 get_ssale_flag2() const {
            return m_ssale_flag2;
        }
		sec_key3 get_sec_key3() const {
            return m_sec_key3;
        }
        sec_type3 get_sec_type3() const {
            return m_sec_type3;
        }
        mult3 get_mult3() const {
            return m_mult3;
        }
        side3 get_side3() const {
            return m_side3;
        }
        leg_id3 get_leg_id3() const {
            return m_leg_id3;
        }
        alt_leg_id3 get_alt_leg_id3() const {
            return m_alt_leg_id3;
        }
        pos_type3 get_pos_type3() const {
            return m_pos_type3;
        }
        ssale_flag3 get_ssale_flag3() const {
            return m_ssale_flag3;
        }
		sec_key4 get_sec_key4() const {
            return m_sec_key4;
        }
        sec_type4 get_sec_type4() const {
            return m_sec_type4;
        }
        mult4 get_mult4() const {
            return m_mult4;
        }
        side4 get_side4() const {
            return m_side4;
        }
        leg_id4 get_leg_id4() const {
            return m_leg_id4;
        }
        alt_leg_id4 get_alt_leg_id4() const {
            return m_alt_leg_id4;
        }
        pos_type4 get_pos_type4() const {
            return m_pos_type4;
        }
        ssale_flag4 get_ssale_flag4() const {
            return m_ssale_flag4;
        }
		sec_key5 get_sec_key5() const {
            return m_sec_key5;
        }
        sec_type5 get_sec_type5() const {
            return m_sec_type5;
        }
        mult5 get_mult5() const {
            return m_mult5;
        }
        side5 get_side5() const {
            return m_side5;
        }
        leg_id5 get_leg_id5() const {
            return m_leg_id5;
        }
        alt_leg_id5 get_alt_leg_id5() const {
            return m_alt_leg_id5;
        }
        pos_type5 get_pos_type5() const {
            return m_pos_type5;
        }
        ssale_flag5 get_ssale_flag5() const {
            return m_ssale_flag5;
        }
		sec_key6 get_sec_key6() const {
            return m_sec_key6;
        }
        sec_type6 get_sec_type6() const {
            return m_sec_type6;
        }
        mult6 get_mult6() const {
            return m_mult6;
        }
        side6 get_side6() const {
            return m_side6;
        }
        leg_id6 get_leg_id6() const {
            return m_leg_id6;
        }
        alt_leg_id6 get_alt_leg_id6() const {
            return m_alt_leg_id6;
        }
        pos_type6 get_pos_type6() const {
            return m_pos_type6;
        }
        ssale_flag6 get_ssale_flag6() const {
            return m_ssale_flag6;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_stock_side(const stock_side& value)  {
            m_stock_side = value;
        }
        void set_stock_shares(const stock_shares& value)  {
            m_stock_shares = value;
        }
        void set_stock_leg_id(const stock_leg_id& value)  {
            m_stock_leg_id = value;
        }
        void set_alt_stk_leg_id(const alt_stk_leg_id& value)  {
            m_alt_stk_leg_id = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_num_legs(const num_legs& value)  {
            m_num_legs = value;
        }
        void set_sec_key1(const sec_key1& value)  {
            m_sec_key1 = value;
        }
        void set_sec_type1(const sec_type1& value)  {
            m_sec_type1 = value;
        }
        void set_mult1(const mult1& value)  {
            m_mult1 = value;
        }
        void set_side1(const side1& value)  {
            m_side1 = value;
        }
        void set_leg_id1(const leg_id1& value)  {
            m_leg_id1 = value;
        }
        void set_alt_leg_id1(const alt_leg_id1& value)  {
            m_alt_leg_id1 = value;
        }
        void set_pos_type1(const pos_type1& value)  {
            m_pos_type1 = value;
        }
        void set_ssale_flag1(const ssale_flag1& value)  {
            m_ssale_flag1 = value;
        }
        void set_sec_key2(const sec_key2& value)  {
            m_sec_key2 = value;
        }
        void set_sec_type2(const sec_type2& value)  {
            m_sec_type2 = value;
        }
        void set_mult2(const mult2& value)  {
            m_mult2 = value;
        }
        void set_side2(const side2& value)  {
            m_side2 = value;
        }
        void set_leg_id2(const leg_id2& value)  {
            m_leg_id2 = value;
        }
        void set_alt_leg_id2(const alt_leg_id2& value)  {
            m_alt_leg_id2 = value;
        }
        void set_pos_type2(const pos_type2& value)  {
            m_pos_type2 = value;
        }
        void set_ssale_flag2(const ssale_flag2& value)  {
            m_ssale_flag2 = value;
        }
        void set_sec_key3(const sec_key3& value)  {
            m_sec_key3 = value;
        }
        void set_sec_type3(const sec_type3& value)  {
            m_sec_type3 = value;
        }
        void set_mult3(const mult3& value)  {
            m_mult3 = value;
        }
        void set_side3(const side3& value)  {
            m_side3 = value;
        }
        void set_leg_id3(const leg_id3& value)  {
            m_leg_id3 = value;
        }
        void set_alt_leg_id3(const alt_leg_id3& value)  {
            m_alt_leg_id3 = value;
        }
        void set_pos_type3(const pos_type3& value)  {
            m_pos_type3 = value;
        }
        void set_ssale_flag3(const ssale_flag3& value)  {
            m_ssale_flag3 = value;
        }
        void set_sec_key4(const sec_key4& value)  {
            m_sec_key4 = value;
        }
        void set_sec_type4(const sec_type4& value)  {
            m_sec_type4 = value;
        }
        void set_mult4(const mult4& value)  {
            m_mult4 = value;
        }
        void set_side4(const side4& value)  {
            m_side4 = value;
        }
        void set_leg_id4(const leg_id4& value)  {
            m_leg_id4 = value;
        }
        void set_alt_leg_id4(const alt_leg_id4& value)  {
            m_alt_leg_id4 = value;
        }
        void set_pos_type4(const pos_type4& value)  {
            m_pos_type4 = value;
        }
        void set_ssale_flag4(const ssale_flag4& value)  {
            m_ssale_flag4 = value;
        }
        void set_sec_key5(const sec_key5& value)  {
            m_sec_key5 = value;
        }
        void set_sec_type5(const sec_type5& value)  {
            m_sec_type5 = value;
        }
        void set_mult5(const mult5& value)  {
            m_mult5 = value;
        }
        void set_side5(const side5& value)  {
            m_side5 = value;
        }
        void set_leg_id5(const leg_id5& value)  {
            m_leg_id5 = value;
        }
        void set_alt_leg_id5(const alt_leg_id5& value)  {
            m_alt_leg_id5 = value;
        }
        void set_pos_type5(const pos_type5& value)  {
            m_pos_type5 = value;
        }
        void set_ssale_flag5(const ssale_flag5& value)  {
            m_ssale_flag5 = value;
        }
        void set_sec_key6(const sec_key6& value)  {
            m_sec_key6 = value;
        }
        void set_sec_type6(const sec_type6& value)  {
            m_sec_type6 = value;
        }
        void set_mult6(const mult6& value)  {
            m_mult6 = value;
        }
        void set_side6(const side6& value)  {
            m_side6 = value;
        }
        void set_leg_id6(const leg_id6& value)  {
            m_leg_id6 = value;
        }
        void set_alt_leg_id6(const alt_leg_id6& value)  {
            m_alt_leg_id6 = value;
        }
        void set_pos_type6(const pos_type6& value)  {
            m_pos_type6 = value;
        }
        void set_ssale_flag6(const ssale_flag6& value)  {
            m_ssale_flag6 = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const stock_side & value) { set_stock_side(value); }
        void set(const stock_shares & value) { set_stock_shares(value); }
        void set(const stock_leg_id & value) { set_stock_leg_id(value); }
        void set(const alt_stk_leg_id & value) { set_alt_stk_leg_id(value); }
        void set(const ssale_flag & value) { set_ssale_flag(value); }
        void set(const num_legs & value) { set_num_legs(value); }
        void set(const sec_key1 & value) { set_sec_key1(value); }
        void set(const sec_type1 & value) { set_sec_type1(value); }
        void set(const mult1 & value) { set_mult1(value); }
        void set(const side1 & value) { set_side1(value); }
        void set(const leg_id1 & value) { set_leg_id1(value); }
        void set(const alt_leg_id1 & value) { set_alt_leg_id1(value); }
        void set(const pos_type1 & value) { set_pos_type1(value); }
        void set(const ssale_flag1 & value) { set_ssale_flag1(value); }
        void set(const sec_key2 & value) { set_sec_key2(value); }
        void set(const sec_type2 & value) { set_sec_type2(value); }
        void set(const mult2 & value) { set_mult2(value); }
        void set(const side2 & value) { set_side2(value); }
        void set(const leg_id2 & value) { set_leg_id2(value); }
        void set(const alt_leg_id2 & value) { set_alt_leg_id2(value); }
        void set(const pos_type2 & value) { set_pos_type2(value); }
        void set(const ssale_flag2 & value) { set_ssale_flag2(value); }
        void set(const sec_key3 & value) { set_sec_key3(value); }
        void set(const sec_type3 & value) { set_sec_type3(value); }
        void set(const mult3 & value) { set_mult3(value); }
        void set(const side3 & value) { set_side3(value); }
        void set(const leg_id3 & value) { set_leg_id3(value); }
        void set(const alt_leg_id3 & value) { set_alt_leg_id3(value); }
        void set(const pos_type3 & value) { set_pos_type3(value); }
        void set(const ssale_flag3 & value) { set_ssale_flag3(value); }
        void set(const sec_key4 & value) { set_sec_key4(value); }
        void set(const sec_type4 & value) { set_sec_type4(value); }
        void set(const mult4 & value) { set_mult4(value); }
        void set(const side4 & value) { set_side4(value); }
        void set(const leg_id4 & value) { set_leg_id4(value); }
        void set(const alt_leg_id4 & value) { set_alt_leg_id4(value); }
        void set(const pos_type4 & value) { set_pos_type4(value); }
        void set(const ssale_flag4 & value) { set_ssale_flag4(value); }
        void set(const sec_key5 & value) { set_sec_key5(value); }
        void set(const sec_type5 & value) { set_sec_type5(value); }
        void set(const mult5 & value) { set_mult5(value); }
        void set(const side5 & value) { set_side5(value); }
        void set(const leg_id5 & value) { set_leg_id5(value); }
        void set(const alt_leg_id5 & value) { set_alt_leg_id5(value); }
        void set(const pos_type5 & value) { set_pos_type5(value); }
        void set(const ssale_flag5 & value) { set_ssale_flag5(value); }
        void set(const sec_key6 & value) { set_sec_key6(value); }
        void set(const sec_type6 & value) { set_sec_type6(value); }
        void set(const mult6 & value) { set_mult6(value); }
        void set(const side6 & value) { set_side6(value); }
        void set(const leg_id6 & value) { set_leg_id6(value); }
        void set(const alt_leg_id6 & value) { set_alt_leg_id6(value); }
        void set(const pos_type6 & value) { set_pos_type6(value); }
        void set(const ssale_flag6 & value) { set_ssale_flag6(value); }


        SpdrParentReviewRequest_OrderLegs() {}

        virtual ~SpdrParentReviewRequest_OrderLegs() {
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
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(211,tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_stock_shares);
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(220,m_stock_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_alt_stk_leg_id);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(229,m_num_legs);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1;
            m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(232,optionKeyLayout_sec_key1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(238,m_mult1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(244,m_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(247,m_alt_leg_id1);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2;
            m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(256,optionKeyLayout_sec_key2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(262,m_mult2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(265,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(268,m_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(271,m_alt_leg_id2);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(274,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3;
            m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(280,optionKeyLayout_sec_key3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(283,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(286,m_mult3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(292,m_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(295,m_alt_leg_id3);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4;
            m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(304,optionKeyLayout_sec_key4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(310,m_mult4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(316,m_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(319,m_alt_leg_id4);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5;
            m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(328,optionKeyLayout_sec_key5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(334,m_mult5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(340,m_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(343,m_alt_leg_id5);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6;
            m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(352,optionKeyLayout_sec_key6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(358,m_mult6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(361,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(364,m_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(367,m_alt_leg_id6);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(370,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
            m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 211, tickerKeyLayout_ticker);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_stock_shares);
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,220,m_stock_leg_id);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_alt_stk_leg_id));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,229,m_num_legs);
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1;
            m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 232, optionKeyLayout_sec_key1);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,238,m_mult1);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,244,m_leg_id1);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,247,static_cast<string>(m_alt_leg_id1));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,253,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2;
            m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 256, optionKeyLayout_sec_key2);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,262,m_mult2);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,265,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,268,m_leg_id2);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,271,static_cast<string>(m_alt_leg_id2));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,274,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,277,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3;
            m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 280, optionKeyLayout_sec_key3);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,283,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,286,m_mult3);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,289,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,292,m_leg_id3);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,295,static_cast<string>(m_alt_leg_id3));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,298,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,301,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4;
            m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 304, optionKeyLayout_sec_key4);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,307,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,310,m_mult4);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,313,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,316,m_leg_id4);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,319,static_cast<string>(m_alt_leg_id4));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,325,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5;
            m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 328, optionKeyLayout_sec_key5);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,331,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,334,m_mult5);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,340,m_leg_id5);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,343,static_cast<string>(m_alt_leg_id5));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,349,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5)));
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6;
            m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 352, optionKeyLayout_sec_key6);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,355,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,358,m_mult6);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,361,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,364,m_leg_id6);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,367,static_cast<string>(m_alt_leg_id6));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,370,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6)));
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 214: {m_stock_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 217: {m_stock_shares = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 220: {m_stock_leg_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 223: {m_alt_stk_leg_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 226: {m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 229: {m_num_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 232: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key1.setFromCodec(optionKey);
                        break;
                    }
                    case 235: {m_sec_type1 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 238: {m_mult1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 241: {m_side1 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 244: {m_leg_id1 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 247: {m_alt_leg_id1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 250: {m_pos_type1 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 253: {m_ssale_flag1 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 256: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key2.setFromCodec(optionKey);
                        break;
                    }
                    case 259: {m_sec_type2 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 262: {m_mult2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 265: {m_side2 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 268: {m_leg_id2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 271: {m_alt_leg_id2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 274: {m_pos_type2 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 277: {m_ssale_flag2 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 280: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key3.setFromCodec(optionKey);
                        break;
                    }
                    case 283: {m_sec_type3 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 286: {m_mult3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 289: {m_side3 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 292: {m_leg_id3 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 295: {m_alt_leg_id3 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 298: {m_pos_type3 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 301: {m_ssale_flag3 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 304: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key4.setFromCodec(optionKey);
                        break;
                    }
                    case 307: {m_sec_type4 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 310: {m_mult4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 313: {m_side4 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 316: {m_leg_id4 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 319: {m_alt_leg_id4 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 322: {m_pos_type4 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 325: {m_ssale_flag4 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 328: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key5.setFromCodec(optionKey);
                        break;
                    }
                    case 331: {m_sec_type5 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 334: {m_mult5 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 337: {m_side5 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 340: {m_leg_id5 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 343: {m_alt_leg_id5 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 346: {m_pos_type5 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 349: {m_ssale_flag5 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 352: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key6.setFromCodec(optionKey);
                        break;
                    }
                    case 355: {m_sec_type6 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 358: {m_mult6 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 361: {m_side6 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 364: {m_leg_id6 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 367: {m_alt_leg_id6 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 370: {m_pos_type6 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 373: {m_ssale_flag6 = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrParentReviewRequest {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrParentReviewRequest_PKey;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using parent_shape = spiderrock::protobuf::api::parent_shape;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using alt_prev_order_id = spiderrock::protobuf::api::alt_prev_order_id;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_name = spiderrock::protobuf::api::user_name;
        using order_side = spiderrock::protobuf::api::order_side;
        using order_size = spiderrock::protobuf::api::order_size;
        using firm_type = spiderrock::protobuf::api::firm_type;
        using order_capacity = spiderrock::protobuf::api::order_capacity;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using locate_quan = spiderrock::protobuf::api::locate_quan;
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;
        using no_cross_group = spiderrock::protobuf::api::no_cross_group;
        using exch_trader_id = spiderrock::protobuf::api::exch_trader_id;
        using large_trader_id = spiderrock::protobuf::api::large_trader_id;
        using trading_location = spiderrock::protobuf::api::trading_location;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using hedge_units = spiderrock::protobuf::api::hedge_units;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using child_data = spiderrock::protobuf::api::child_data;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using order_legs = spiderrock::protobuf::api::SpdrParentReviewRequest_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        parent_shape m_parent_shape{};
        alt_order_id m_alt_order_id{};
        alt_prev_order_id m_alt_prev_order_id{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        security_desc m_security_desc{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        strategy m_strategy{};
        user_name m_user_name{};
        order_side m_order_side{};
        order_size m_order_size{};
        firm_type m_firm_type{};
        order_capacity m_order_capacity{};
        position_type m_position_type{};
        ssale_flag m_ssale_flag{};
        locate_quan m_locate_quan{};
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};
        no_cross_group m_no_cross_group{};
        exch_trader_id m_exch_trader_id{};
        large_trader_id m_large_trader_id{};
        trading_location m_trading_location{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        hedge_units m_hedge_units{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        child_data m_child_data{};
        timestamp m_timestamp{};
        std::vector<order_legs> m_order_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        parent_shape get_parent_shape() const {
            return m_parent_shape;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        alt_prev_order_id get_alt_prev_order_id() const {
            return m_alt_prev_order_id;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        client_firm get_client_firm() const {
            return m_client_firm;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        order_side get_order_side() const {
            return m_order_side;
        }		
        order_size get_order_size() const {
            return m_order_size;
        }		
        firm_type get_firm_type() const {
            return m_firm_type;
        }		
        order_capacity get_order_capacity() const {
            return m_order_capacity;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        locate_quan get_locate_quan() const {
            return m_locate_quan;
        }		
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }		
        locate_pool get_locate_pool() const {
            return m_locate_pool;
        }		
        no_cross_group get_no_cross_group() const {
            return m_no_cross_group;
        }		
        exch_trader_id get_exch_trader_id() const {
            return m_exch_trader_id;
        }		
        large_trader_id get_large_trader_id() const {
            return m_large_trader_id;
        }		
        trading_location get_trading_location() const {
            return m_trading_location;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
        }		
        hedge_units get_hedge_units() const {
            return m_hedge_units;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        child_data get_child_data() const {
            return m_child_data;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
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
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_parent_shape(const parent_shape& value)  {
            m_parent_shape = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_alt_prev_order_id(const alt_prev_order_id& value)  {
            m_alt_prev_order_id = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_firm_type(const firm_type& value)  {
            m_firm_type = value;
        }
        void set_order_capacity(const order_capacity& value)  {
            m_order_capacity = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_locate_quan(const locate_quan& value)  {
            m_locate_quan = value;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
        }
        void set_no_cross_group(const no_cross_group& value)  {
            m_no_cross_group = value;
        }
        void set_exch_trader_id(const exch_trader_id& value)  {
            m_exch_trader_id = value;
        }
        void set_large_trader_id(const large_trader_id& value)  {
            m_large_trader_id = value;
        }
        void set_trading_location(const trading_location& value)  {
            m_trading_location = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
        }
        void set_hedge_units(const hedge_units& value)  {
            m_hedge_units = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_child_data(const child_data& value)  {
            m_child_data = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrParentReviewRequest::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const parent_shape & value) {
            set_parent_shape(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const alt_prev_order_id & value) {
            set_alt_prev_order_id(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const client_firm & value) {
            set_client_firm(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const grouping_code & value) {
            set_grouping_code(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const order_side & value) {
            set_order_side(value);
        }
        void set(const order_size & value) {
            set_order_size(value);
        }
        void set(const firm_type & value) {
            set_firm_type(value);
        }
        void set(const order_capacity & value) {
            set_order_capacity(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const locate_quan & value) {
            set_locate_quan(value);
        }
        void set(const locate_firm & value) {
            set_locate_firm(value);
        }
        void set(const locate_pool & value) {
            set_locate_pool(value);
        }
        void set(const no_cross_group & value) {
            set_no_cross_group(value);
        }
        void set(const exch_trader_id & value) {
            set_exch_trader_id(value);
        }
        void set(const large_trader_id & value) {
            set_large_trader_id(value);
        }
        void set(const trading_location & value) {
            set_trading_location(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_sec_type & value) {
            set_hedge_sec_type(value);
        }
        void set(const hedge_units & value) {
            set_hedge_units(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const child_data & value) {
            set_child_data(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const SpdrParentReviewRequest & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_parent_shape);
            set(value.m_alt_order_id);
            set(value.m_alt_prev_order_id);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_security_desc);
            set(value.m_accnt);
            set(value.m_client_firm);
            set(value.m_spdr_source);
            set(value.m_grouping_code);
            set(value.m_strategy);
            set(value.m_user_name);
            set(value.m_order_side);
            set(value.m_order_size);
            set(value.m_firm_type);
            set(value.m_order_capacity);
            set(value.m_position_type);
            set(value.m_ssale_flag);
            set(value.m_locate_quan);
            set(value.m_locate_firm);
            set(value.m_locate_pool);
            set(value.m_no_cross_group);
            set(value.m_exch_trader_id);
            set(value.m_large_trader_id);
            set(value.m_trading_location);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_hedge_units);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_child_data);
            set(value.m_timestamp);set_order_legs_list(value.m_order_legs);
        }

        SpdrParentReviewRequest() {
            m__meta.set_message_type("SpdrParentReviewRequest");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4195, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4195, length);
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
             *this = SpdrParentReviewRequest{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludeAltPrevOrderId() const {
            return !(m_alt_prev_order_id.empty());
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeOrderSize() const {
            return !(m_order_size == 0);
        }
        bool IncludeLocateQuan() const {
            return !(m_locate_quan == 0);
        }
        bool IncludeLocateFirm() const {
            return !(m_locate_firm.empty());
        }
        bool IncludeLocatePool() const {
            return !(m_locate_pool.empty());
        }
        bool IncludeNoCrossGroup() const {
            return !(m_no_cross_group.empty());
        }
        bool IncludeExchTraderId() const {
            return !(m_exch_trader_id.empty());
        }
        bool IncludeLargeTraderId() const {
            return !(m_large_trader_id.empty());
        }
        bool IncludeTradingLocation() const {
            return !(m_trading_location.empty());
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeUnits() const {
            return !(m_hedge_units == 0.0);
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeChildData() const {
            return !(m_child_data.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_alt_order_id);
            }
            if ( IncludeAltPrevOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_alt_prev_order_id);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_alt_user_name);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(121, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_security_desc);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(139,m_grouping_code);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_strategy);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_order_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            if ( IncludeLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_locate_quan);
            }
            if ( IncludeLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_locate_firm);
            }
            if ( IncludeLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_locate_pool);
            }
            if ( IncludeNoCrossGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(175,m_no_cross_group);
            }
            if ( IncludeExchTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(178,m_exch_trader_id);
            }
            if ( IncludeLargeTraderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_large_trader_id);
            }
            if ( IncludeTradingLocation()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(184,m_trading_location);
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(187, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeUnits()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_hedge_units);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(196,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_user_data2);
            }
            if ( IncludeChildData()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(202,m_child_data);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(205, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>(m_parent_shape)));
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_alt_order_id));
            }
            if ( IncludeAltPrevOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_alt_prev_order_id));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 121, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_security_desc));
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,139,m_grouping_code);
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_strategy));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_order_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>(m_firm_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,157,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_order_capacity)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,160,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            if ( IncludeLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_locate_quan);
            }
            if ( IncludeLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_locate_firm));
            }
            if ( IncludeLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_locate_pool));
            }
            if ( IncludeNoCrossGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,175,static_cast<string>(m_no_cross_group));
            }
            if ( IncludeExchTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,178,static_cast<string>(m_exch_trader_id));
            }
            if ( IncludeLargeTraderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_large_trader_id));
            }
            if ( IncludeTradingLocation()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,184,static_cast<string>(m_trading_location));
            }
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 187, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeUnits()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_hedge_units);
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,196,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_user_data2));
            }
            if ( IncludeChildData()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,202,static_cast<string>(m_child_data));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 205, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_shape = static_cast<spiderrock::protobuf::api::SpdrOrderShape>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_prev_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_firm_type = static_cast<spiderrock::protobuf::api::FirmType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 160: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_no_cross_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_large_trader_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_trading_location = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_units = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_data = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 208: {
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

    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::_meta>() const { return SpdrParentReviewRequest::_meta{ m__meta}; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::pkey>() const { return SpdrParentReviewRequest::pkey{ m_pkey}; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::parent_shape>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderShape>( m_parent_shape)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::alt_prev_order_id>() const { return m_alt_prev_order_id; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::sec_key>() const { return SpdrParentReviewRequest::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::security_desc>() const { return m_security_desc; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::client_firm>() const { return m_client_firm; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::strategy>() const { return m_strategy; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_order_side)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::firm_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FirmType>( m_firm_type)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::order_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_order_capacity)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::locate_quan>() const { return m_locate_quan; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::locate_pool>() const { return m_locate_pool; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::no_cross_group>() const { return m_no_cross_group; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::exch_trader_id>() const { return m_exch_trader_id; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::large_trader_id>() const { return m_large_trader_id; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::trading_location>() const { return m_trading_location; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::hedge_sec_key>() const { return SpdrParentReviewRequest::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::hedge_units>() const { return m_hedge_units; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::child_data>() const { return m_child_data; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrParentReviewRequest::get<SpdrParentReviewRequest::order_legs>(int i) const { return SpdrParentReviewRequest::order_legs{ get_order_legs(i)}; }
    template<> inline int SpdrParentReviewRequest::count<SpdrParentReviewRequest::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto SpdrParentReviewRequest_PKey::get<SpdrParentReviewRequest_PKey::parent_number>() const { return m_parent_number; }
    
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ticker>() const { return SpdrParentReviewRequest_OrderLegs::ticker{m_ticker}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::stock_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::stock_shares>() const { return m_stock_shares; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::stock_leg_id>() const { return m_stock_leg_id; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_stk_leg_id>() const { return m_alt_stk_leg_id; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::num_legs>() const { return m_num_legs; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_key1>() const { return SpdrParentReviewRequest_OrderLegs::sec_key1{m_sec_key1}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::mult1>() const { return m_mult1; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::side1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::leg_id1>() const { return m_leg_id1; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_leg_id1>() const { return m_alt_leg_id1; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::pos_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type1));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag1));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_key2>() const { return SpdrParentReviewRequest_OrderLegs::sec_key2{m_sec_key2}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::mult2>() const { return m_mult2; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::side2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::leg_id2>() const { return m_leg_id2; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_leg_id2>() const { return m_alt_leg_id2; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::pos_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type2));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag2));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_key3>() const { return SpdrParentReviewRequest_OrderLegs::sec_key3{m_sec_key3}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::mult3>() const { return m_mult3; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::side3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::leg_id3>() const { return m_leg_id3; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_leg_id3>() const { return m_alt_leg_id3; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::pos_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type3));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag3));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_key4>() const { return SpdrParentReviewRequest_OrderLegs::sec_key4{m_sec_key4}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::mult4>() const { return m_mult4; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::side4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::leg_id4>() const { return m_leg_id4; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_leg_id4>() const { return m_alt_leg_id4; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::pos_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type4));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag4));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_key5>() const { return SpdrParentReviewRequest_OrderLegs::sec_key5{m_sec_key5}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::mult5>() const { return m_mult5; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::side5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::leg_id5>() const { return m_leg_id5; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_leg_id5>() const { return m_alt_leg_id5; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::pos_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type5));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag5));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_key6>() const { return SpdrParentReviewRequest_OrderLegs::sec_key6{m_sec_key6}; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::sec_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::mult6>() const { return m_mult6; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::side6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::leg_id6>() const { return m_leg_id6; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::alt_leg_id6>() const { return m_alt_leg_id6; }
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::pos_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_pos_type6));}
    template<> inline const auto SpdrParentReviewRequest_OrderLegs::get<SpdrParentReviewRequest_OrderLegs::ssale_flag6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag6));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReviewRequest_PKey& m) {
        o << "\"parent_number\":" << m.get<SpdrParentReviewRequest_PKey::parent_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReviewRequest_OrderLegs& m) {
        o << "\"ticker\":{" << m.get<SpdrParentReviewRequest_OrderLegs::ticker>() << "}";
        o << ",\"stock_side\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::stock_side>();
        o << ",\"stock_shares\":" << m.get<SpdrParentReviewRequest_OrderLegs::stock_shares>();
        o << ",\"stock_leg_id\":" << m.get<SpdrParentReviewRequest_OrderLegs::stock_leg_id>();
        o << ",\"alt_stk_leg_id\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_stk_leg_id>() << "\"";
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag>();
        o << ",\"num_legs\":" << m.get<SpdrParentReviewRequest_OrderLegs::num_legs>();
        o << ",\"sec_key1\":{" << m.get<SpdrParentReviewRequest_OrderLegs::sec_key1>() << "}";
        o << ",\"sec_type1\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::sec_type1>();
        o << ",\"mult1\":" << m.get<SpdrParentReviewRequest_OrderLegs::mult1>();
        o << ",\"side1\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::side1>();
        o << ",\"leg_id1\":" << m.get<SpdrParentReviewRequest_OrderLegs::leg_id1>();
        o << ",\"alt_leg_id1\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_leg_id1>() << "\"";
        o << ",\"pos_type1\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::pos_type1>();
        o << ",\"ssale_flag1\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag1>();
        o << ",\"sec_key2\":{" << m.get<SpdrParentReviewRequest_OrderLegs::sec_key2>() << "}";
        o << ",\"sec_type2\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::sec_type2>();
        o << ",\"mult2\":" << m.get<SpdrParentReviewRequest_OrderLegs::mult2>();
        o << ",\"side2\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::side2>();
        o << ",\"leg_id2\":" << m.get<SpdrParentReviewRequest_OrderLegs::leg_id2>();
        o << ",\"alt_leg_id2\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_leg_id2>() << "\"";
        o << ",\"pos_type2\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::pos_type2>();
        o << ",\"ssale_flag2\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag2>();
        o << ",\"sec_key3\":{" << m.get<SpdrParentReviewRequest_OrderLegs::sec_key3>() << "}";
        o << ",\"sec_type3\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::sec_type3>();
        o << ",\"mult3\":" << m.get<SpdrParentReviewRequest_OrderLegs::mult3>();
        o << ",\"side3\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::side3>();
        o << ",\"leg_id3\":" << m.get<SpdrParentReviewRequest_OrderLegs::leg_id3>();
        o << ",\"alt_leg_id3\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_leg_id3>() << "\"";
        o << ",\"pos_type3\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::pos_type3>();
        o << ",\"ssale_flag3\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag3>();
        o << ",\"sec_key4\":{" << m.get<SpdrParentReviewRequest_OrderLegs::sec_key4>() << "}";
        o << ",\"sec_type4\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::sec_type4>();
        o << ",\"mult4\":" << m.get<SpdrParentReviewRequest_OrderLegs::mult4>();
        o << ",\"side4\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::side4>();
        o << ",\"leg_id4\":" << m.get<SpdrParentReviewRequest_OrderLegs::leg_id4>();
        o << ",\"alt_leg_id4\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_leg_id4>() << "\"";
        o << ",\"pos_type4\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::pos_type4>();
        o << ",\"ssale_flag4\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag4>();
        o << ",\"sec_key5\":{" << m.get<SpdrParentReviewRequest_OrderLegs::sec_key5>() << "}";
        o << ",\"sec_type5\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::sec_type5>();
        o << ",\"mult5\":" << m.get<SpdrParentReviewRequest_OrderLegs::mult5>();
        o << ",\"side5\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::side5>();
        o << ",\"leg_id5\":" << m.get<SpdrParentReviewRequest_OrderLegs::leg_id5>();
        o << ",\"alt_leg_id5\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_leg_id5>() << "\"";
        o << ",\"pos_type5\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::pos_type5>();
        o << ",\"ssale_flag5\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag5>();
        o << ",\"sec_key6\":{" << m.get<SpdrParentReviewRequest_OrderLegs::sec_key6>() << "}";
        o << ",\"sec_type6\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::sec_type6>();
        o << ",\"mult6\":" << m.get<SpdrParentReviewRequest_OrderLegs::mult6>();
        o << ",\"side6\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::side6>();
        o << ",\"leg_id6\":" << m.get<SpdrParentReviewRequest_OrderLegs::leg_id6>();
        o << ",\"alt_leg_id6\":\"" << m.get<SpdrParentReviewRequest_OrderLegs::alt_leg_id6>() << "\"";
        o << ",\"pos_type6\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::pos_type6>();
        o << ",\"ssale_flag6\":" << (int64_t)m.get<SpdrParentReviewRequest_OrderLegs::ssale_flag6>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrParentReviewRequest& m) {
        o << "\"_meta\":{" << m.get<SpdrParentReviewRequest::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrParentReviewRequest::pkey>() << "}";
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrParentReviewRequest::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrParentReviewRequest::run_status>();
        o << ",\"parent_shape\":" << (int64_t)m.get<SpdrParentReviewRequest::parent_shape>();
        o << ",\"alt_order_id\":\"" << m.get<SpdrParentReviewRequest::alt_order_id>() << "\"";
        o << ",\"alt_prev_order_id\":\"" << m.get<SpdrParentReviewRequest::alt_prev_order_id>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<SpdrParentReviewRequest::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrParentReviewRequest::alt_user_name>() << "\"";
        o << ",\"sec_key\":{" << m.get<SpdrParentReviewRequest::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrParentReviewRequest::sec_type>();
        o << ",\"security_desc\":\"" << m.get<SpdrParentReviewRequest::security_desc>() << "\"";
        o << ",\"accnt\":\"" << m.get<SpdrParentReviewRequest::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrParentReviewRequest::client_firm>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrParentReviewRequest::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrParentReviewRequest::grouping_code>();
        o << ",\"strategy\":\"" << m.get<SpdrParentReviewRequest::strategy>() << "\"";
        o << ",\"user_name\":\"" << m.get<SpdrParentReviewRequest::user_name>() << "\"";
        o << ",\"order_side\":" << (int64_t)m.get<SpdrParentReviewRequest::order_side>();
        o << ",\"order_size\":" << m.get<SpdrParentReviewRequest::order_size>();
        o << ",\"firm_type\":" << (int64_t)m.get<SpdrParentReviewRequest::firm_type>();
        o << ",\"order_capacity\":" << (int64_t)m.get<SpdrParentReviewRequest::order_capacity>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrParentReviewRequest::position_type>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrParentReviewRequest::ssale_flag>();
        o << ",\"locate_quan\":" << m.get<SpdrParentReviewRequest::locate_quan>();
        o << ",\"locate_firm\":\"" << m.get<SpdrParentReviewRequest::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<SpdrParentReviewRequest::locate_pool>() << "\"";
        o << ",\"no_cross_group\":\"" << m.get<SpdrParentReviewRequest::no_cross_group>() << "\"";
        o << ",\"exch_trader_id\":\"" << m.get<SpdrParentReviewRequest::exch_trader_id>() << "\"";
        o << ",\"large_trader_id\":\"" << m.get<SpdrParentReviewRequest::large_trader_id>() << "\"";
        o << ",\"trading_location\":\"" << m.get<SpdrParentReviewRequest::trading_location>() << "\"";
        o << ",\"hedge_sec_key\":{" << m.get<SpdrParentReviewRequest::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrParentReviewRequest::hedge_sec_type>();
        o << ",\"hedge_units\":" << m.get<SpdrParentReviewRequest::hedge_units>();
        o << ",\"user_data1\":\"" << m.get<SpdrParentReviewRequest::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrParentReviewRequest::user_data2>() << "\"";
        o << ",\"child_data\":\"" << m.get<SpdrParentReviewRequest::child_data>() << "\"";
        {
            std::time_t tt = m.get<SpdrParentReviewRequest::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpdrParentReviewRequest::order_legs>(); ++i) {
                o << delim << m.get<SpdrParentReviewRequest::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}