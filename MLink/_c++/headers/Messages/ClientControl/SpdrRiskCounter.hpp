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

    #ifndef _sys_realm__GUARD__
    #define _sys_realm__GUARD__
    DECL_STRONG_TYPE(sys_realm, spiderrock::protobuf::api::SysRealm);
    #endif//_sys_realm__GUARD__

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _risk_engine__GUARD__
    #define _risk_engine__GUARD__
    DECL_STRONG_TYPE(risk_engine, string);
    #endif//_risk_engine__GUARD__

    #ifndef _net_day_ddelta__GUARD__
    #define _net_day_ddelta__GUARD__
    DECL_STRONG_TYPE(net_day_ddelta, float);
    #endif//_net_day_ddelta__GUARD__

    #ifndef _abs_day_ddelta__GUARD__
    #define _abs_day_ddelta__GUARD__
    DECL_STRONG_TYPE(abs_day_ddelta, float);
    #endif//_abs_day_ddelta__GUARD__

    #ifndef _net_day_vega__GUARD__
    #define _net_day_vega__GUARD__
    DECL_STRONG_TYPE(net_day_vega, float);
    #endif//_net_day_vega__GUARD__

    #ifndef _abs_day_vega__GUARD__
    #define _abs_day_vega__GUARD__
    DECL_STRONG_TYPE(abs_day_vega, float);
    #endif//_abs_day_vega__GUARD__

    #ifndef _net_day_wt_vega__GUARD__
    #define _net_day_wt_vega__GUARD__
    DECL_STRONG_TYPE(net_day_wt_vega, float);
    #endif//_net_day_wt_vega__GUARD__

    #ifndef _abs_day_wt_vega__GUARD__
    #define _abs_day_wt_vega__GUARD__
    DECL_STRONG_TYPE(abs_day_wt_vega, float);
    #endif//_abs_day_wt_vega__GUARD__

    #ifndef _net_day_nvalue__GUARD__
    #define _net_day_nvalue__GUARD__
    DECL_STRONG_TYPE(net_day_nvalue, float);
    #endif//_net_day_nvalue__GUARD__

    #ifndef _abs_day_nvalue__GUARD__
    #define _abs_day_nvalue__GUARD__
    DECL_STRONG_TYPE(abs_day_nvalue, float);
    #endif//_abs_day_nvalue__GUARD__

    #ifndef _net_day_rmetric7__GUARD__
    #define _net_day_rmetric7__GUARD__
    DECL_STRONG_TYPE(net_day_rmetric7, float);
    #endif//_net_day_rmetric7__GUARD__

    #ifndef _abs_day_rmetric7__GUARD__
    #define _abs_day_rmetric7__GUARD__
    DECL_STRONG_TYPE(abs_day_rmetric7, float);
    #endif//_abs_day_rmetric7__GUARD__

    #ifndef _net_day_ddelta_ema__GUARD__
    #define _net_day_ddelta_ema__GUARD__
    DECL_STRONG_TYPE(net_day_ddelta_ema, float);
    #endif//_net_day_ddelta_ema__GUARD__

    #ifndef _net_day_wt_vega_ema__GUARD__
    #define _net_day_wt_vega_ema__GUARD__
    DECL_STRONG_TYPE(net_day_wt_vega_ema, float);
    #endif//_net_day_wt_vega_ema__GUARD__

    #ifndef _ema_timestamp__GUARD__
    #define _ema_timestamp__GUARD__
    DECL_STRONG_TYPE(ema_timestamp, double);
    #endif//_ema_timestamp__GUARD__

    #ifndef _live_margin_day__GUARD__
    #define _live_margin_day__GUARD__
    DECL_STRONG_TYPE(live_margin_day, float);
    #endif//_live_margin_day__GUARD__

    #ifndef _live_open_exposure__GUARD__
    #define _live_open_exposure__GUARD__
    DECL_STRONG_TYPE(live_open_exposure, float);
    #endif//_live_open_exposure__GUARD__

    #ifndef _day_margin_udn_vdn__GUARD__
    #define _day_margin_udn_vdn__GUARD__
    DECL_STRONG_TYPE(day_margin_udn_vdn, float);
    #endif//_day_margin_udn_vdn__GUARD__

    #ifndef _day_margin_udn_vup__GUARD__
    #define _day_margin_udn_vup__GUARD__
    DECL_STRONG_TYPE(day_margin_udn_vup, float);
    #endif//_day_margin_udn_vup__GUARD__

    #ifndef _day_margin_uup_vdn__GUARD__
    #define _day_margin_uup_vdn__GUARD__
    DECL_STRONG_TYPE(day_margin_uup_vdn, float);
    #endif//_day_margin_uup_vdn__GUARD__

    #ifndef _day_margin_uup_vup__GUARD__
    #define _day_margin_uup_vup__GUARD__
    DECL_STRONG_TYPE(day_margin_uup_vup, float);
    #endif//_day_margin_uup_vup__GUARD__

    #ifndef _num_stk_child_orders__GUARD__
    #define _num_stk_child_orders__GUARD__
    DECL_STRONG_TYPE(num_stk_child_orders, int32);
    #endif//_num_stk_child_orders__GUARD__

    #ifndef _num_fut_child_orders__GUARD__
    #define _num_fut_child_orders__GUARD__
    DECL_STRONG_TYPE(num_fut_child_orders, int32);
    #endif//_num_fut_child_orders__GUARD__

    #ifndef _num_opt_child_orders__GUARD__
    #define _num_opt_child_orders__GUARD__
    DECL_STRONG_TYPE(num_opt_child_orders, int32);
    #endif//_num_opt_child_orders__GUARD__

    #ifndef _num_mleg_child_orders__GUARD__
    #define _num_mleg_child_orders__GUARD__
    DECL_STRONG_TYPE(num_mleg_child_orders, int32);
    #endif//_num_mleg_child_orders__GUARD__

    #ifndef _counter__GUARD__
    #define _counter__GUARD__
    DECL_STRONG_TYPE(counter, int32);
    #endif//_counter__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _risk_control_key__GUARD__
    #define _risk_control_key__GUARD__
    DECL_STRONG_TYPE(risk_control_key, string);
    #endif//_risk_control_key__GUARD__

    #ifndef _risk_control_level__GUARD__
    #define _risk_control_level__GUARD__
    DECL_STRONG_TYPE(risk_control_level, spiderrock::protobuf::api::RiskControlLevel);
    #endif//_risk_control_level__GUARD__

    #ifndef _risk_firm__GUARD__
    #define _risk_firm__GUARD__
    DECL_STRONG_TYPE(risk_firm, string);
    #endif//_risk_firm__GUARD__

    #ifndef _is_test_accnt__GUARD__
    #define _is_test_accnt__GUARD__
    DECL_STRONG_TYPE(is_test_accnt, spiderrock::protobuf::api::YesNo);
    #endif//_is_test_accnt__GUARD__

    
    class SpdrRiskCounter_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using risk_control_key = spiderrock::protobuf::api::risk_control_key;
        using risk_control_level = spiderrock::protobuf::api::risk_control_level;
        using risk_firm = spiderrock::protobuf::api::risk_firm;
        using is_test_accnt = spiderrock::protobuf::api::is_test_accnt;

        private:
        ticker m_ticker{};
        risk_control_key m_risk_control_key{};
        risk_control_level m_risk_control_level{};
        risk_firm m_risk_firm{};
        is_test_accnt m_is_test_accnt{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        risk_control_key get_risk_control_key() const {
            return m_risk_control_key;
        }
        risk_control_level get_risk_control_level() const {
            return m_risk_control_level;
        }
        risk_firm get_risk_firm() const {
            return m_risk_firm;
        }
        is_test_accnt get_is_test_accnt() const {
            return m_is_test_accnt;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_risk_control_key(const risk_control_key& value)  {
            m_risk_control_key = value;
        }
        void set_risk_control_level(const risk_control_level& value)  {
            m_risk_control_level = value;
        }
        void set_risk_firm(const risk_firm& value)  {
            m_risk_firm = value;
        }
        void set_is_test_accnt(const is_test_accnt& value)  {
            m_is_test_accnt = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskCounter_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskCounter_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const risk_control_key & value) { set_risk_control_key(value); }
        void set(const risk_control_level & value) { set_risk_control_level(value); }
        void set(const risk_firm & value) { set_risk_firm(value); }
        void set(const is_test_accnt & value) { set_is_test_accnt(value); }


        SpdrRiskCounter_PKey() {}

        virtual ~SpdrRiskCounter_PKey() {
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeRiskControlKey() const {
            return !(m_risk_control_key.empty());
        }
        bool IncludeRiskFirm() const {
            return !(m_risk_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            if ( IncludeRiskControlKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_risk_control_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskControlLevel>(m_risk_control_level)));
            if ( IncludeRiskFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_risk_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            if ( IncludeRiskControlKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_risk_control_key));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskControlLevel>(m_risk_control_level)));
            if ( IncludeRiskFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_risk_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_risk_control_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_risk_control_level = static_cast<spiderrock::protobuf::api::RiskControlLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_risk_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 14: {m_is_test_accnt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrRiskCounter {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrRiskCounter_PKey;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using risk_engine = spiderrock::protobuf::api::risk_engine;
        using net_day_ddelta = spiderrock::protobuf::api::net_day_ddelta;
        using abs_day_ddelta = spiderrock::protobuf::api::abs_day_ddelta;
        using net_day_vega = spiderrock::protobuf::api::net_day_vega;
        using abs_day_vega = spiderrock::protobuf::api::abs_day_vega;
        using net_day_wt_vega = spiderrock::protobuf::api::net_day_wt_vega;
        using abs_day_wt_vega = spiderrock::protobuf::api::abs_day_wt_vega;
        using net_day_nvalue = spiderrock::protobuf::api::net_day_nvalue;
        using abs_day_nvalue = spiderrock::protobuf::api::abs_day_nvalue;
        using net_day_rmetric7 = spiderrock::protobuf::api::net_day_rmetric7;
        using abs_day_rmetric7 = spiderrock::protobuf::api::abs_day_rmetric7;
        using net_day_ddelta_ema = spiderrock::protobuf::api::net_day_ddelta_ema;
        using net_day_wt_vega_ema = spiderrock::protobuf::api::net_day_wt_vega_ema;
        using ema_timestamp = spiderrock::protobuf::api::ema_timestamp;
        using live_margin_day = spiderrock::protobuf::api::live_margin_day;
        using live_open_exposure = spiderrock::protobuf::api::live_open_exposure;
        using day_margin_udn_vdn = spiderrock::protobuf::api::day_margin_udn_vdn;
        using day_margin_udn_vup = spiderrock::protobuf::api::day_margin_udn_vup;
        using day_margin_uup_vdn = spiderrock::protobuf::api::day_margin_uup_vdn;
        using day_margin_uup_vup = spiderrock::protobuf::api::day_margin_uup_vup;
        using num_stk_child_orders = spiderrock::protobuf::api::num_stk_child_orders;
        using num_fut_child_orders = spiderrock::protobuf::api::num_fut_child_orders;
        using num_opt_child_orders = spiderrock::protobuf::api::num_opt_child_orders;
        using num_mleg_child_orders = spiderrock::protobuf::api::num_mleg_child_orders;
        using counter = spiderrock::protobuf::api::counter;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_realm m_sys_realm{};
        sys_environment m_sys_environment{};
        risk_engine m_risk_engine{};
        net_day_ddelta m_net_day_ddelta{};
        abs_day_ddelta m_abs_day_ddelta{};
        net_day_vega m_net_day_vega{};
        abs_day_vega m_abs_day_vega{};
        net_day_wt_vega m_net_day_wt_vega{};
        abs_day_wt_vega m_abs_day_wt_vega{};
        net_day_nvalue m_net_day_nvalue{};
        abs_day_nvalue m_abs_day_nvalue{};
        net_day_rmetric7 m_net_day_rmetric7{};
        abs_day_rmetric7 m_abs_day_rmetric7{};
        net_day_ddelta_ema m_net_day_ddelta_ema{};
        net_day_wt_vega_ema m_net_day_wt_vega_ema{};
        ema_timestamp m_ema_timestamp{};
        live_margin_day m_live_margin_day{};
        live_open_exposure m_live_open_exposure{};
        day_margin_udn_vdn m_day_margin_udn_vdn{};
        day_margin_udn_vup m_day_margin_udn_vup{};
        day_margin_uup_vdn m_day_margin_uup_vdn{};
        day_margin_uup_vup m_day_margin_uup_vup{};
        num_stk_child_orders m_num_stk_child_orders{};
        num_fut_child_orders m_num_fut_child_orders{};
        num_opt_child_orders m_num_opt_child_orders{};
        num_mleg_child_orders m_num_mleg_child_orders{};
        counter m_counter{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sys_realm get_sys_realm() const {
            return m_sys_realm;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        risk_engine get_risk_engine() const {
            return m_risk_engine;
        }		
        net_day_ddelta get_net_day_ddelta() const {
            return m_net_day_ddelta;
        }		
        abs_day_ddelta get_abs_day_ddelta() const {
            return m_abs_day_ddelta;
        }		
        net_day_vega get_net_day_vega() const {
            return m_net_day_vega;
        }		
        abs_day_vega get_abs_day_vega() const {
            return m_abs_day_vega;
        }		
        net_day_wt_vega get_net_day_wt_vega() const {
            return m_net_day_wt_vega;
        }		
        abs_day_wt_vega get_abs_day_wt_vega() const {
            return m_abs_day_wt_vega;
        }		
        net_day_nvalue get_net_day_nvalue() const {
            return m_net_day_nvalue;
        }		
        abs_day_nvalue get_abs_day_nvalue() const {
            return m_abs_day_nvalue;
        }		
        net_day_rmetric7 get_net_day_rmetric7() const {
            return m_net_day_rmetric7;
        }		
        abs_day_rmetric7 get_abs_day_rmetric7() const {
            return m_abs_day_rmetric7;
        }		
        net_day_ddelta_ema get_net_day_ddelta_ema() const {
            return m_net_day_ddelta_ema;
        }		
        net_day_wt_vega_ema get_net_day_wt_vega_ema() const {
            return m_net_day_wt_vega_ema;
        }		
        ema_timestamp get_ema_timestamp() const {
            return m_ema_timestamp;
        }		
        live_margin_day get_live_margin_day() const {
            return m_live_margin_day;
        }		
        live_open_exposure get_live_open_exposure() const {
            return m_live_open_exposure;
        }		
        day_margin_udn_vdn get_day_margin_udn_vdn() const {
            return m_day_margin_udn_vdn;
        }		
        day_margin_udn_vup get_day_margin_udn_vup() const {
            return m_day_margin_udn_vup;
        }		
        day_margin_uup_vdn get_day_margin_uup_vdn() const {
            return m_day_margin_uup_vdn;
        }		
        day_margin_uup_vup get_day_margin_uup_vup() const {
            return m_day_margin_uup_vup;
        }		
        num_stk_child_orders get_num_stk_child_orders() const {
            return m_num_stk_child_orders;
        }		
        num_fut_child_orders get_num_fut_child_orders() const {
            return m_num_fut_child_orders;
        }		
        num_opt_child_orders get_num_opt_child_orders() const {
            return m_num_opt_child_orders;
        }		
        num_mleg_child_orders get_num_mleg_child_orders() const {
            return m_num_mleg_child_orders;
        }		
        counter get_counter() const {
            return m_counter;
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
        void set_sys_realm(const sys_realm& value)  {
            m_sys_realm = value;
        }
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_risk_engine(const risk_engine& value)  {
            m_risk_engine = value;
        }
        void set_net_day_ddelta(const net_day_ddelta& value)  {
            m_net_day_ddelta = value;
        }
        void set_abs_day_ddelta(const abs_day_ddelta& value)  {
            m_abs_day_ddelta = value;
        }
        void set_net_day_vega(const net_day_vega& value)  {
            m_net_day_vega = value;
        }
        void set_abs_day_vega(const abs_day_vega& value)  {
            m_abs_day_vega = value;
        }
        void set_net_day_wt_vega(const net_day_wt_vega& value)  {
            m_net_day_wt_vega = value;
        }
        void set_abs_day_wt_vega(const abs_day_wt_vega& value)  {
            m_abs_day_wt_vega = value;
        }
        void set_net_day_nvalue(const net_day_nvalue& value)  {
            m_net_day_nvalue = value;
        }
        void set_abs_day_nvalue(const abs_day_nvalue& value)  {
            m_abs_day_nvalue = value;
        }
        void set_net_day_rmetric7(const net_day_rmetric7& value)  {
            m_net_day_rmetric7 = value;
        }
        void set_abs_day_rmetric7(const abs_day_rmetric7& value)  {
            m_abs_day_rmetric7 = value;
        }
        void set_net_day_ddelta_ema(const net_day_ddelta_ema& value)  {
            m_net_day_ddelta_ema = value;
        }
        void set_net_day_wt_vega_ema(const net_day_wt_vega_ema& value)  {
            m_net_day_wt_vega_ema = value;
        }
        void set_ema_timestamp(const ema_timestamp& value)  {
            m_ema_timestamp = value;
        }
        void set_live_margin_day(const live_margin_day& value)  {
            m_live_margin_day = value;
        }
        void set_live_open_exposure(const live_open_exposure& value)  {
            m_live_open_exposure = value;
        }
        void set_day_margin_udn_vdn(const day_margin_udn_vdn& value)  {
            m_day_margin_udn_vdn = value;
        }
        void set_day_margin_udn_vup(const day_margin_udn_vup& value)  {
            m_day_margin_udn_vup = value;
        }
        void set_day_margin_uup_vdn(const day_margin_uup_vdn& value)  {
            m_day_margin_uup_vdn = value;
        }
        void set_day_margin_uup_vup(const day_margin_uup_vup& value)  {
            m_day_margin_uup_vup = value;
        }
        void set_num_stk_child_orders(const num_stk_child_orders& value)  {
            m_num_stk_child_orders = value;
        }
        void set_num_fut_child_orders(const num_fut_child_orders& value)  {
            m_num_fut_child_orders = value;
        }
        void set_num_opt_child_orders(const num_opt_child_orders& value)  {
            m_num_opt_child_orders = value;
        }
        void set_num_mleg_child_orders(const num_mleg_child_orders& value)  {
            m_num_mleg_child_orders = value;
        }
        void set_counter(const counter& value)  {
            m_counter = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskCounter::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_realm & value) {
            set_sys_realm(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const risk_engine & value) {
            set_risk_engine(value);
        }
        void set(const net_day_ddelta & value) {
            set_net_day_ddelta(value);
        }
        void set(const abs_day_ddelta & value) {
            set_abs_day_ddelta(value);
        }
        void set(const net_day_vega & value) {
            set_net_day_vega(value);
        }
        void set(const abs_day_vega & value) {
            set_abs_day_vega(value);
        }
        void set(const net_day_wt_vega & value) {
            set_net_day_wt_vega(value);
        }
        void set(const abs_day_wt_vega & value) {
            set_abs_day_wt_vega(value);
        }
        void set(const net_day_nvalue & value) {
            set_net_day_nvalue(value);
        }
        void set(const abs_day_nvalue & value) {
            set_abs_day_nvalue(value);
        }
        void set(const net_day_rmetric7 & value) {
            set_net_day_rmetric7(value);
        }
        void set(const abs_day_rmetric7 & value) {
            set_abs_day_rmetric7(value);
        }
        void set(const net_day_ddelta_ema & value) {
            set_net_day_ddelta_ema(value);
        }
        void set(const net_day_wt_vega_ema & value) {
            set_net_day_wt_vega_ema(value);
        }
        void set(const ema_timestamp & value) {
            set_ema_timestamp(value);
        }
        void set(const live_margin_day & value) {
            set_live_margin_day(value);
        }
        void set(const live_open_exposure & value) {
            set_live_open_exposure(value);
        }
        void set(const day_margin_udn_vdn & value) {
            set_day_margin_udn_vdn(value);
        }
        void set(const day_margin_udn_vup & value) {
            set_day_margin_udn_vup(value);
        }
        void set(const day_margin_uup_vdn & value) {
            set_day_margin_uup_vdn(value);
        }
        void set(const day_margin_uup_vup & value) {
            set_day_margin_uup_vup(value);
        }
        void set(const num_stk_child_orders & value) {
            set_num_stk_child_orders(value);
        }
        void set(const num_fut_child_orders & value) {
            set_num_fut_child_orders(value);
        }
        void set(const num_opt_child_orders & value) {
            set_num_opt_child_orders(value);
        }
        void set(const num_mleg_child_orders & value) {
            set_num_mleg_child_orders(value);
        }
        void set(const counter & value) {
            set_counter(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrRiskCounter & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_realm);
            set(value.m_sys_environment);
            set(value.m_risk_engine);
            set(value.m_net_day_ddelta);
            set(value.m_abs_day_ddelta);
            set(value.m_net_day_vega);
            set(value.m_abs_day_vega);
            set(value.m_net_day_wt_vega);
            set(value.m_abs_day_wt_vega);
            set(value.m_net_day_nvalue);
            set(value.m_abs_day_nvalue);
            set(value.m_net_day_rmetric7);
            set(value.m_abs_day_rmetric7);
            set(value.m_net_day_ddelta_ema);
            set(value.m_net_day_wt_vega_ema);
            set(value.m_ema_timestamp);
            set(value.m_live_margin_day);
            set(value.m_live_open_exposure);
            set(value.m_day_margin_udn_vdn);
            set(value.m_day_margin_udn_vup);
            set(value.m_day_margin_uup_vdn);
            set(value.m_day_margin_uup_vup);
            set(value.m_num_stk_child_orders);
            set(value.m_num_fut_child_orders);
            set(value.m_num_opt_child_orders);
            set(value.m_num_mleg_child_orders);
            set(value.m_counter);
            set(value.m_timestamp);
        }

        SpdrRiskCounter() {
            m__meta.set_message_type("SpdrRiskCounter");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4660, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4660, length);
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
             *this = SpdrRiskCounter{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRiskEngine() const {
            return !(m_risk_engine.empty());
        }
        bool IncludeNetDayDdelta() const {
            return !(m_net_day_ddelta == 0.0);
        }
        bool IncludeAbsDayDdelta() const {
            return !(m_abs_day_ddelta == 0.0);
        }
        bool IncludeNetDayVega() const {
            return !(m_net_day_vega == 0.0);
        }
        bool IncludeAbsDayVega() const {
            return !(m_abs_day_vega == 0.0);
        }
        bool IncludeNetDayWtVega() const {
            return !(m_net_day_wt_vega == 0.0);
        }
        bool IncludeAbsDayWtVega() const {
            return !(m_abs_day_wt_vega == 0.0);
        }
        bool IncludeNetDayNvalue() const {
            return !(m_net_day_nvalue == 0.0);
        }
        bool IncludeAbsDayNvalue() const {
            return !(m_abs_day_nvalue == 0.0);
        }
        bool IncludeNetDayRmetric7() const {
            return !(m_net_day_rmetric7 == 0.0);
        }
        bool IncludeAbsDayRmetric7() const {
            return !(m_abs_day_rmetric7 == 0.0);
        }
        bool IncludeNetDayDdeltaEma() const {
            return !(m_net_day_ddelta_ema == 0.0);
        }
        bool IncludeNetDayWtVegaEma() const {
            return !(m_net_day_wt_vega_ema == 0.0);
        }
        bool IncludeEmaTimestamp() const {
            return !(m_ema_timestamp == 0.0);
        }
        bool IncludeLiveMarginDay() const {
            return !(m_live_margin_day == 0.0);
        }
        bool IncludeLiveOpenExposure() const {
            return !(m_live_open_exposure == 0.0);
        }
        bool IncludeDayMarginUdnVdn() const {
            return !(m_day_margin_udn_vdn == 0.0);
        }
        bool IncludeDayMarginUdnVup() const {
            return !(m_day_margin_udn_vup == 0.0);
        }
        bool IncludeDayMarginUupVdn() const {
            return !(m_day_margin_uup_vdn == 0.0);
        }
        bool IncludeDayMarginUupVup() const {
            return !(m_day_margin_uup_vup == 0.0);
        }
        bool IncludeNumStkChildOrders() const {
            return !(m_num_stk_child_orders == 0);
        }
        bool IncludeNumFutChildOrders() const {
            return !(m_num_fut_child_orders == 0);
        }
        bool IncludeNumOptChildOrders() const {
            return !(m_num_opt_child_orders == 0);
        }
        bool IncludeNumMlegChildOrders() const {
            return !(m_num_mleg_child_orders == 0);
        }
        bool IncludeCounter() const {
            return !(m_counter == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            if ( IncludeRiskEngine()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(102,m_risk_engine);
            }
            if ( IncludeNetDayDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_net_day_ddelta);
            }
            if ( IncludeAbsDayDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_abs_day_ddelta);
            }
            if ( IncludeNetDayVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_net_day_vega);
            }
            if ( IncludeAbsDayVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_abs_day_vega);
            }
            if ( IncludeNetDayWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_net_day_wt_vega);
            }
            if ( IncludeAbsDayWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_abs_day_wt_vega);
            }
            if ( IncludeNetDayNvalue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_net_day_nvalue);
            }
            if ( IncludeAbsDayNvalue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_abs_day_nvalue);
            }
            if ( IncludeNetDayRmetric7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_net_day_rmetric7);
            }
            if ( IncludeAbsDayRmetric7()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_abs_day_rmetric7);
            }
            if ( IncludeNetDayDdeltaEma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_net_day_ddelta_ema);
            }
            if ( IncludeNetDayWtVegaEma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_net_day_wt_vega_ema);
            }
            if ( IncludeEmaTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(117,m_ema_timestamp);
            }
            if ( IncludeLiveMarginDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_live_margin_day);
            }
            if ( IncludeLiveOpenExposure()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(119,m_live_open_exposure);
            }
            if ( IncludeDayMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_day_margin_udn_vdn);
            }
            if ( IncludeDayMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_day_margin_udn_vup);
            }
            if ( IncludeDayMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_day_margin_uup_vdn);
            }
            if ( IncludeDayMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(123,m_day_margin_uup_vup);
            }
            if ( IncludeNumStkChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_num_stk_child_orders);
            }
            if ( IncludeNumFutChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(125,m_num_fut_child_orders);
            }
            if ( IncludeNumOptChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(126,m_num_opt_child_orders);
            }
            if ( IncludeNumMlegChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_num_mleg_child_orders);
            }
            if ( IncludeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(128,m_counter);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(129, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>(m_sys_realm)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            if ( IncludeRiskEngine()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,102,static_cast<string>(m_risk_engine));
            }
            if ( IncludeNetDayDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_net_day_ddelta);
            }
            if ( IncludeAbsDayDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_abs_day_ddelta);
            }
            if ( IncludeNetDayVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_net_day_vega);
            }
            if ( IncludeAbsDayVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_abs_day_vega);
            }
            if ( IncludeNetDayWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_net_day_wt_vega);
            }
            if ( IncludeAbsDayWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_abs_day_wt_vega);
            }
            if ( IncludeNetDayNvalue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_net_day_nvalue);
            }
            if ( IncludeAbsDayNvalue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_abs_day_nvalue);
            }
            if ( IncludeNetDayRmetric7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_net_day_rmetric7);
            }
            if ( IncludeAbsDayRmetric7()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_abs_day_rmetric7);
            }
            if ( IncludeNetDayDdeltaEma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_net_day_ddelta_ema);
            }
            if ( IncludeNetDayWtVegaEma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_net_day_wt_vega_ema);
            }
            if ( IncludeEmaTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,117,m_ema_timestamp);
            }
            if ( IncludeLiveMarginDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_live_margin_day);
            }
            if ( IncludeLiveOpenExposure()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,119,m_live_open_exposure);
            }
            if ( IncludeDayMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_day_margin_udn_vdn);
            }
            if ( IncludeDayMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_day_margin_udn_vup);
            }
            if ( IncludeDayMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_day_margin_uup_vdn);
            }
            if ( IncludeDayMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,123,m_day_margin_uup_vup);
            }
            if ( IncludeNumStkChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_num_stk_child_orders);
            }
            if ( IncludeNumFutChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,125,m_num_fut_child_orders);
            }
            if ( IncludeNumOptChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,126,m_num_opt_child_orders);
            }
            if ( IncludeNumMlegChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_num_mleg_child_orders);
            }
            if ( IncludeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,128,m_counter);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 129, m_timestamp);
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
                            m_sys_realm = static_cast<spiderrock::protobuf::api::SysRealm>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_engine = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_abs_day_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_abs_day_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_abs_day_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_nvalue = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_abs_day_nvalue = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_rmetric7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_abs_day_rmetric7 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_ddelta_ema = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_net_day_wt_vega_ema = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ema_timestamp = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_live_margin_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_live_open_exposure = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_stk_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_fut_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_opt_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_mleg_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 129: {
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

    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::_meta>() const { return SpdrRiskCounter::_meta{ m__meta}; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::pkey>() const { return SpdrRiskCounter::pkey{ m_pkey}; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::risk_engine>() const { return m_risk_engine; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_ddelta>() const { return m_net_day_ddelta; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::abs_day_ddelta>() const { return m_abs_day_ddelta; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_vega>() const { return m_net_day_vega; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::abs_day_vega>() const { return m_abs_day_vega; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_wt_vega>() const { return m_net_day_wt_vega; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::abs_day_wt_vega>() const { return m_abs_day_wt_vega; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_nvalue>() const { return m_net_day_nvalue; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::abs_day_nvalue>() const { return m_abs_day_nvalue; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_rmetric7>() const { return m_net_day_rmetric7; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::abs_day_rmetric7>() const { return m_abs_day_rmetric7; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_ddelta_ema>() const { return m_net_day_ddelta_ema; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::net_day_wt_vega_ema>() const { return m_net_day_wt_vega_ema; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::ema_timestamp>() const { return m_ema_timestamp; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::live_margin_day>() const { return m_live_margin_day; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::live_open_exposure>() const { return m_live_open_exposure; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::day_margin_udn_vdn>() const { return m_day_margin_udn_vdn; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::day_margin_udn_vup>() const { return m_day_margin_udn_vup; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::day_margin_uup_vdn>() const { return m_day_margin_uup_vdn; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::day_margin_uup_vup>() const { return m_day_margin_uup_vup; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::num_stk_child_orders>() const { return m_num_stk_child_orders; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::num_fut_child_orders>() const { return m_num_fut_child_orders; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::num_opt_child_orders>() const { return m_num_opt_child_orders; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::num_mleg_child_orders>() const { return m_num_mleg_child_orders; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::counter>() const { return m_counter; }
    template<> inline const auto SpdrRiskCounter::get<SpdrRiskCounter::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrRiskCounter_PKey::get<SpdrRiskCounter_PKey::ticker>() const { return SpdrRiskCounter_PKey::ticker{m_ticker}; }
    template<> inline const auto SpdrRiskCounter_PKey::get<SpdrRiskCounter_PKey::risk_control_key>() const { return m_risk_control_key; }
    template<> inline const auto SpdrRiskCounter_PKey::get<SpdrRiskCounter_PKey::risk_control_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskControlLevel>(m_risk_control_level));}
    template<> inline const auto SpdrRiskCounter_PKey::get<SpdrRiskCounter_PKey::risk_firm>() const { return m_risk_firm; }
    template<> inline const auto SpdrRiskCounter_PKey::get<SpdrRiskCounter_PKey::is_test_accnt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskCounter_PKey& m) {
        o << "\"ticker\":{" << m.get<SpdrRiskCounter_PKey::ticker>() << "}";
        o << ",\"risk_control_key\":\"" << m.get<SpdrRiskCounter_PKey::risk_control_key>() << "\"";
        o << ",\"risk_control_level\":" << (int64_t)m.get<SpdrRiskCounter_PKey::risk_control_level>();
        o << ",\"risk_firm\":\"" << m.get<SpdrRiskCounter_PKey::risk_firm>() << "\"";
        o << ",\"is_test_accnt\":" << (int64_t)m.get<SpdrRiskCounter_PKey::is_test_accnt>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskCounter& m) {
        o << "\"_meta\":{" << m.get<SpdrRiskCounter::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrRiskCounter::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<SpdrRiskCounter::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrRiskCounter::sys_environment>();
        o << ",\"risk_engine\":\"" << m.get<SpdrRiskCounter::risk_engine>() << "\"";
        o << ",\"net_day_ddelta\":" << m.get<SpdrRiskCounter::net_day_ddelta>();
        o << ",\"abs_day_ddelta\":" << m.get<SpdrRiskCounter::abs_day_ddelta>();
        o << ",\"net_day_vega\":" << m.get<SpdrRiskCounter::net_day_vega>();
        o << ",\"abs_day_vega\":" << m.get<SpdrRiskCounter::abs_day_vega>();
        o << ",\"net_day_wt_vega\":" << m.get<SpdrRiskCounter::net_day_wt_vega>();
        o << ",\"abs_day_wt_vega\":" << m.get<SpdrRiskCounter::abs_day_wt_vega>();
        o << ",\"net_day_nvalue\":" << m.get<SpdrRiskCounter::net_day_nvalue>();
        o << ",\"abs_day_nvalue\":" << m.get<SpdrRiskCounter::abs_day_nvalue>();
        o << ",\"net_day_rmetric7\":" << m.get<SpdrRiskCounter::net_day_rmetric7>();
        o << ",\"abs_day_rmetric7\":" << m.get<SpdrRiskCounter::abs_day_rmetric7>();
        o << ",\"net_day_ddelta_ema\":" << m.get<SpdrRiskCounter::net_day_ddelta_ema>();
        o << ",\"net_day_wt_vega_ema\":" << m.get<SpdrRiskCounter::net_day_wt_vega_ema>();
        o << ",\"ema_timestamp\":" << m.get<SpdrRiskCounter::ema_timestamp>();
        o << ",\"live_margin_day\":" << m.get<SpdrRiskCounter::live_margin_day>();
        o << ",\"live_open_exposure\":" << m.get<SpdrRiskCounter::live_open_exposure>();
        o << ",\"day_margin_udn_vdn\":" << m.get<SpdrRiskCounter::day_margin_udn_vdn>();
        o << ",\"day_margin_udn_vup\":" << m.get<SpdrRiskCounter::day_margin_udn_vup>();
        o << ",\"day_margin_uup_vdn\":" << m.get<SpdrRiskCounter::day_margin_uup_vdn>();
        o << ",\"day_margin_uup_vup\":" << m.get<SpdrRiskCounter::day_margin_uup_vup>();
        o << ",\"num_stk_child_orders\":" << m.get<SpdrRiskCounter::num_stk_child_orders>();
        o << ",\"num_fut_child_orders\":" << m.get<SpdrRiskCounter::num_fut_child_orders>();
        o << ",\"num_opt_child_orders\":" << m.get<SpdrRiskCounter::num_opt_child_orders>();
        o << ",\"num_mleg_child_orders\":" << m.get<SpdrRiskCounter::num_mleg_child_orders>();
        o << ",\"counter\":" << m.get<SpdrRiskCounter::counter>();
        {
            std::time_t tt = m.get<SpdrRiskCounter::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}