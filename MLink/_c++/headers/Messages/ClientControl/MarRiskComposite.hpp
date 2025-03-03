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

    #ifndef _live_margin_acc__GUARD__
    #define _live_margin_acc__GUARD__
    DECL_STRONG_TYPE(live_margin_acc, float);
    #endif//_live_margin_acc__GUARD__

    #ifndef _live_margin_day__GUARD__
    #define _live_margin_day__GUARD__
    DECL_STRONG_TYPE(live_margin_day, float);
    #endif//_live_margin_day__GUARD__

    #ifndef _live_open_exposure__GUARD__
    #define _live_open_exposure__GUARD__
    DECL_STRONG_TYPE(live_open_exposure, float);
    #endif//_live_open_exposure__GUARD__

    #ifndef _day_fut_cn_bot__GUARD__
    #define _day_fut_cn_bot__GUARD__
    DECL_STRONG_TYPE(day_fut_cn_bot, int32);
    #endif//_day_fut_cn_bot__GUARD__

    #ifndef _day_fut_cn_sld__GUARD__
    #define _day_fut_cn_sld__GUARD__
    DECL_STRONG_TYPE(day_fut_cn_sld, int32);
    #endif//_day_fut_cn_sld__GUARD__

    #ifndef _acc_fut_cn_net__GUARD__
    #define _acc_fut_cn_net__GUARD__
    DECL_STRONG_TYPE(acc_fut_cn_net, int32);
    #endif//_acc_fut_cn_net__GUARD__

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

    #ifndef _acc_margin_udn_vdn__GUARD__
    #define _acc_margin_udn_vdn__GUARD__
    DECL_STRONG_TYPE(acc_margin_udn_vdn, float);
    #endif//_acc_margin_udn_vdn__GUARD__

    #ifndef _acc_margin_udn_vup__GUARD__
    #define _acc_margin_udn_vup__GUARD__
    DECL_STRONG_TYPE(acc_margin_udn_vup, float);
    #endif//_acc_margin_udn_vup__GUARD__

    #ifndef _acc_margin_uup_vdn__GUARD__
    #define _acc_margin_uup_vdn__GUARD__
    DECL_STRONG_TYPE(acc_margin_uup_vdn, float);
    #endif//_acc_margin_uup_vdn__GUARD__

    #ifndef _acc_margin_uup_vup__GUARD__
    #define _acc_margin_uup_vup__GUARD__
    DECL_STRONG_TYPE(acc_margin_uup_vup, float);
    #endif//_acc_margin_uup_vup__GUARD__

    #ifndef _stk_enabled__GUARD__
    #define _stk_enabled__GUARD__
    DECL_STRONG_TYPE(stk_enabled, spiderrock::protobuf::api::MarState);
    #endif//_stk_enabled__GUARD__

    #ifndef _fut_enabled__GUARD__
    #define _fut_enabled__GUARD__
    DECL_STRONG_TYPE(fut_enabled, spiderrock::protobuf::api::MarState);
    #endif//_fut_enabled__GUARD__

    #ifndef _opt_enabled__GUARD__
    #define _opt_enabled__GUARD__
    DECL_STRONG_TYPE(opt_enabled, spiderrock::protobuf::api::MarState);
    #endif//_opt_enabled__GUARD__

    #ifndef _margin_limit_acc__GUARD__
    #define _margin_limit_acc__GUARD__
    DECL_STRONG_TYPE(margin_limit_acc, float);
    #endif//_margin_limit_acc__GUARD__

    #ifndef _margin_limit_day__GUARD__
    #define _margin_limit_day__GUARD__
    DECL_STRONG_TYPE(margin_limit_day, float);
    #endif//_margin_limit_day__GUARD__

    #ifndef _open_exposure_limit__GUARD__
    #define _open_exposure_limit__GUARD__
    DECL_STRONG_TYPE(open_exposure_limit, float);
    #endif//_open_exposure_limit__GUARD__

    #ifndef _max_acc_fut_cn_abs__GUARD__
    #define _max_acc_fut_cn_abs__GUARD__
    DECL_STRONG_TYPE(max_acc_fut_cn_abs, int32);
    #endif//_max_acc_fut_cn_abs__GUARD__

    #ifndef _max_day_fut_cn_bot__GUARD__
    #define _max_day_fut_cn_bot__GUARD__
    DECL_STRONG_TYPE(max_day_fut_cn_bot, int32);
    #endif//_max_day_fut_cn_bot__GUARD__

    #ifndef _max_day_fut_cn_sld__GUARD__
    #define _max_day_fut_cn_sld__GUARD__
    DECL_STRONG_TYPE(max_day_fut_cn_sld, int32);
    #endif//_max_day_fut_cn_sld__GUARD__

    #ifndef _max_day_fut_cn_abs__GUARD__
    #define _max_day_fut_cn_abs__GUARD__
    DECL_STRONG_TYPE(max_day_fut_cn_abs, int32);
    #endif//_max_day_fut_cn_abs__GUARD__

    #ifndef _order_max_stk_qty__GUARD__
    #define _order_max_stk_qty__GUARD__
    DECL_STRONG_TYPE(order_max_stk_qty, int32);
    #endif//_order_max_stk_qty__GUARD__

    #ifndef _order_max_fut_qty__GUARD__
    #define _order_max_fut_qty__GUARD__
    DECL_STRONG_TYPE(order_max_fut_qty, int32);
    #endif//_order_max_fut_qty__GUARD__

    #ifndef _order_max_opt_qty__GUARD__
    #define _order_max_opt_qty__GUARD__
    DECL_STRONG_TYPE(order_max_opt_qty, int32);
    #endif//_order_max_opt_qty__GUARD__

    #ifndef _order_max_stk_ddelta__GUARD__
    #define _order_max_stk_ddelta__GUARD__
    DECL_STRONG_TYPE(order_max_stk_ddelta, float);
    #endif//_order_max_stk_ddelta__GUARD__

    #ifndef _order_max_fut_ddelta__GUARD__
    #define _order_max_fut_ddelta__GUARD__
    DECL_STRONG_TYPE(order_max_fut_ddelta, float);
    #endif//_order_max_fut_ddelta__GUARD__

    #ifndef _order_max_opt_ddelta__GUARD__
    #define _order_max_opt_ddelta__GUARD__
    DECL_STRONG_TYPE(order_max_opt_ddelta, float);
    #endif//_order_max_opt_ddelta__GUARD__

    #ifndef _stk_collar_pct__GUARD__
    #define _stk_collar_pct__GUARD__
    DECL_STRONG_TYPE(stk_collar_pct, float);
    #endif//_stk_collar_pct__GUARD__

    #ifndef _fut_collar_pct__GUARD__
    #define _fut_collar_pct__GUARD__
    DECL_STRONG_TYPE(fut_collar_pct, float);
    #endif//_fut_collar_pct__GUARD__

    #ifndef _opt_collar_pct__GUARD__
    #define _opt_collar_pct__GUARD__
    DECL_STRONG_TYPE(opt_collar_pct, float);
    #endif//_opt_collar_pct__GUARD__

    #ifndef _allow_stk_odd_lots__GUARD__
    #define _allow_stk_odd_lots__GUARD__
    DECL_STRONG_TYPE(allow_stk_odd_lots, spiderrock::protobuf::api::YesNo);
    #endif//_allow_stk_odd_lots__GUARD__

    #ifndef _allow_limit_on_close__GUARD__
    #define _allow_limit_on_close__GUARD__
    DECL_STRONG_TYPE(allow_limit_on_close, spiderrock::protobuf::api::YesNo);
    #endif//_allow_limit_on_close__GUARD__

    #ifndef _allow_market_on_close__GUARD__
    #define _allow_market_on_close__GUARD__
    DECL_STRONG_TYPE(allow_market_on_close, spiderrock::protobuf::api::YesNo);
    #endif//_allow_market_on_close__GUARD__

    #ifndef _allow_short_sale_exempt__GUARD__
    #define _allow_short_sale_exempt__GUARD__
    DECL_STRONG_TYPE(allow_short_sale_exempt, spiderrock::protobuf::api::YesNo);
    #endif//_allow_short_sale_exempt__GUARD__

    #ifndef _allow_inter_market_sweep__GUARD__
    #define _allow_inter_market_sweep__GUARD__
    DECL_STRONG_TYPE(allow_inter_market_sweep, spiderrock::protobuf::api::YesNo);
    #endif//_allow_inter_market_sweep__GUARD__

    #ifndef _block_short_sales__GUARD__
    #define _block_short_sales__GUARD__
    DECL_STRONG_TYPE(block_short_sales, spiderrock::protobuf::api::YesNo);
    #endif//_block_short_sales__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

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

    #ifndef _risk_group__GUARD__
    #define _risk_group__GUARD__
    DECL_STRONG_TYPE(risk_group, string);
    #endif//_risk_group__GUARD__

    #ifndef _risk_firm__GUARD__
    #define _risk_firm__GUARD__
    DECL_STRONG_TYPE(risk_firm, string);
    #endif//_risk_firm__GUARD__

    #ifndef _is_test_accnt__GUARD__
    #define _is_test_accnt__GUARD__
    DECL_STRONG_TYPE(is_test_accnt, spiderrock::protobuf::api::YesNo);
    #endif//_is_test_accnt__GUARD__

    
    class MarRiskComposite_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using risk_group = spiderrock::protobuf::api::risk_group;
        using risk_firm = spiderrock::protobuf::api::risk_firm;
        using is_test_accnt = spiderrock::protobuf::api::is_test_accnt;

        private:
        ticker m_ticker{};
        risk_group m_risk_group{};
        risk_firm m_risk_firm{};
        is_test_accnt m_is_test_accnt{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        risk_group get_risk_group() const {
            return m_risk_group;
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
        void set_risk_group(const risk_group& value)  {
            m_risk_group = value;
        }
        void set_risk_firm(const risk_firm& value)  {
            m_risk_firm = value;
        }
        void set_is_test_accnt(const is_test_accnt& value)  {
            m_is_test_accnt = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskComposite_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskComposite_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const risk_group & value) { set_risk_group(value); }
        void set(const risk_firm & value) { set_risk_firm(value); }
        void set(const is_test_accnt & value) { set_is_test_accnt(value); }


        MarRiskComposite_PKey() {}

        virtual ~MarRiskComposite_PKey() {
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
        bool IncludeRiskGroup() const {
            return !(m_risk_group.empty());
        }
        bool IncludeRiskFirm() const {
            return !(m_risk_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeRiskGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_risk_group);
            }
            if ( IncludeRiskFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_risk_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeRiskGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_risk_group));
            }
            if ( IncludeRiskFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_risk_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
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
                    case 11: {m_risk_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_risk_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_is_test_accnt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class MarRiskComposite {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::MarRiskComposite_PKey;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using risk_engine = spiderrock::protobuf::api::risk_engine;
        using live_margin_acc = spiderrock::protobuf::api::live_margin_acc;
        using live_margin_day = spiderrock::protobuf::api::live_margin_day;
        using live_open_exposure = spiderrock::protobuf::api::live_open_exposure;
        using day_fut_cn_bot = spiderrock::protobuf::api::day_fut_cn_bot;
        using day_fut_cn_sld = spiderrock::protobuf::api::day_fut_cn_sld;
        using acc_fut_cn_net = spiderrock::protobuf::api::acc_fut_cn_net;
        using day_margin_udn_vdn = spiderrock::protobuf::api::day_margin_udn_vdn;
        using day_margin_udn_vup = spiderrock::protobuf::api::day_margin_udn_vup;
        using day_margin_uup_vdn = spiderrock::protobuf::api::day_margin_uup_vdn;
        using day_margin_uup_vup = spiderrock::protobuf::api::day_margin_uup_vup;
        using acc_margin_udn_vdn = spiderrock::protobuf::api::acc_margin_udn_vdn;
        using acc_margin_udn_vup = spiderrock::protobuf::api::acc_margin_udn_vup;
        using acc_margin_uup_vdn = spiderrock::protobuf::api::acc_margin_uup_vdn;
        using acc_margin_uup_vup = spiderrock::protobuf::api::acc_margin_uup_vup;
        using stk_enabled = spiderrock::protobuf::api::stk_enabled;
        using fut_enabled = spiderrock::protobuf::api::fut_enabled;
        using opt_enabled = spiderrock::protobuf::api::opt_enabled;
        using margin_limit_acc = spiderrock::protobuf::api::margin_limit_acc;
        using margin_limit_day = spiderrock::protobuf::api::margin_limit_day;
        using open_exposure_limit = spiderrock::protobuf::api::open_exposure_limit;
        using max_acc_fut_cn_abs = spiderrock::protobuf::api::max_acc_fut_cn_abs;
        using max_day_fut_cn_bot = spiderrock::protobuf::api::max_day_fut_cn_bot;
        using max_day_fut_cn_sld = spiderrock::protobuf::api::max_day_fut_cn_sld;
        using max_day_fut_cn_abs = spiderrock::protobuf::api::max_day_fut_cn_abs;
        using order_max_stk_qty = spiderrock::protobuf::api::order_max_stk_qty;
        using order_max_fut_qty = spiderrock::protobuf::api::order_max_fut_qty;
        using order_max_opt_qty = spiderrock::protobuf::api::order_max_opt_qty;
        using order_max_stk_ddelta = spiderrock::protobuf::api::order_max_stk_ddelta;
        using order_max_fut_ddelta = spiderrock::protobuf::api::order_max_fut_ddelta;
        using order_max_opt_ddelta = spiderrock::protobuf::api::order_max_opt_ddelta;
        using stk_collar_pct = spiderrock::protobuf::api::stk_collar_pct;
        using fut_collar_pct = spiderrock::protobuf::api::fut_collar_pct;
        using opt_collar_pct = spiderrock::protobuf::api::opt_collar_pct;
        using allow_stk_odd_lots = spiderrock::protobuf::api::allow_stk_odd_lots;
        using allow_limit_on_close = spiderrock::protobuf::api::allow_limit_on_close;
        using allow_market_on_close = spiderrock::protobuf::api::allow_market_on_close;
        using allow_short_sale_exempt = spiderrock::protobuf::api::allow_short_sale_exempt;
        using allow_inter_market_sweep = spiderrock::protobuf::api::allow_inter_market_sweep;
        using block_short_sales = spiderrock::protobuf::api::block_short_sales;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using counter = spiderrock::protobuf::api::counter;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_realm m_sys_realm{};
        sys_environment m_sys_environment{};
        risk_engine m_risk_engine{};
        live_margin_acc m_live_margin_acc{};
        live_margin_day m_live_margin_day{};
        live_open_exposure m_live_open_exposure{};
        day_fut_cn_bot m_day_fut_cn_bot{};
        day_fut_cn_sld m_day_fut_cn_sld{};
        acc_fut_cn_net m_acc_fut_cn_net{};
        day_margin_udn_vdn m_day_margin_udn_vdn{};
        day_margin_udn_vup m_day_margin_udn_vup{};
        day_margin_uup_vdn m_day_margin_uup_vdn{};
        day_margin_uup_vup m_day_margin_uup_vup{};
        acc_margin_udn_vdn m_acc_margin_udn_vdn{};
        acc_margin_udn_vup m_acc_margin_udn_vup{};
        acc_margin_uup_vdn m_acc_margin_uup_vdn{};
        acc_margin_uup_vup m_acc_margin_uup_vup{};
        stk_enabled m_stk_enabled{};
        fut_enabled m_fut_enabled{};
        opt_enabled m_opt_enabled{};
        margin_limit_acc m_margin_limit_acc{};
        margin_limit_day m_margin_limit_day{};
        open_exposure_limit m_open_exposure_limit{};
        max_acc_fut_cn_abs m_max_acc_fut_cn_abs{};
        max_day_fut_cn_bot m_max_day_fut_cn_bot{};
        max_day_fut_cn_sld m_max_day_fut_cn_sld{};
        max_day_fut_cn_abs m_max_day_fut_cn_abs{};
        order_max_stk_qty m_order_max_stk_qty{};
        order_max_fut_qty m_order_max_fut_qty{};
        order_max_opt_qty m_order_max_opt_qty{};
        order_max_stk_ddelta m_order_max_stk_ddelta{};
        order_max_fut_ddelta m_order_max_fut_ddelta{};
        order_max_opt_ddelta m_order_max_opt_ddelta{};
        stk_collar_pct m_stk_collar_pct{};
        fut_collar_pct m_fut_collar_pct{};
        opt_collar_pct m_opt_collar_pct{};
        allow_stk_odd_lots m_allow_stk_odd_lots{};
        allow_limit_on_close m_allow_limit_on_close{};
        allow_market_on_close m_allow_market_on_close{};
        allow_short_sale_exempt m_allow_short_sale_exempt{};
        allow_inter_market_sweep m_allow_inter_market_sweep{};
        block_short_sales m_block_short_sales{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
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
        live_margin_acc get_live_margin_acc() const {
            return m_live_margin_acc;
        }		
        live_margin_day get_live_margin_day() const {
            return m_live_margin_day;
        }		
        live_open_exposure get_live_open_exposure() const {
            return m_live_open_exposure;
        }		
        day_fut_cn_bot get_day_fut_cn_bot() const {
            return m_day_fut_cn_bot;
        }		
        day_fut_cn_sld get_day_fut_cn_sld() const {
            return m_day_fut_cn_sld;
        }		
        acc_fut_cn_net get_acc_fut_cn_net() const {
            return m_acc_fut_cn_net;
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
        acc_margin_udn_vdn get_acc_margin_udn_vdn() const {
            return m_acc_margin_udn_vdn;
        }		
        acc_margin_udn_vup get_acc_margin_udn_vup() const {
            return m_acc_margin_udn_vup;
        }		
        acc_margin_uup_vdn get_acc_margin_uup_vdn() const {
            return m_acc_margin_uup_vdn;
        }		
        acc_margin_uup_vup get_acc_margin_uup_vup() const {
            return m_acc_margin_uup_vup;
        }		
        stk_enabled get_stk_enabled() const {
            return m_stk_enabled;
        }		
        fut_enabled get_fut_enabled() const {
            return m_fut_enabled;
        }		
        opt_enabled get_opt_enabled() const {
            return m_opt_enabled;
        }		
        margin_limit_acc get_margin_limit_acc() const {
            return m_margin_limit_acc;
        }		
        margin_limit_day get_margin_limit_day() const {
            return m_margin_limit_day;
        }		
        open_exposure_limit get_open_exposure_limit() const {
            return m_open_exposure_limit;
        }		
        max_acc_fut_cn_abs get_max_acc_fut_cn_abs() const {
            return m_max_acc_fut_cn_abs;
        }		
        max_day_fut_cn_bot get_max_day_fut_cn_bot() const {
            return m_max_day_fut_cn_bot;
        }		
        max_day_fut_cn_sld get_max_day_fut_cn_sld() const {
            return m_max_day_fut_cn_sld;
        }		
        max_day_fut_cn_abs get_max_day_fut_cn_abs() const {
            return m_max_day_fut_cn_abs;
        }		
        order_max_stk_qty get_order_max_stk_qty() const {
            return m_order_max_stk_qty;
        }		
        order_max_fut_qty get_order_max_fut_qty() const {
            return m_order_max_fut_qty;
        }		
        order_max_opt_qty get_order_max_opt_qty() const {
            return m_order_max_opt_qty;
        }		
        order_max_stk_ddelta get_order_max_stk_ddelta() const {
            return m_order_max_stk_ddelta;
        }		
        order_max_fut_ddelta get_order_max_fut_ddelta() const {
            return m_order_max_fut_ddelta;
        }		
        order_max_opt_ddelta get_order_max_opt_ddelta() const {
            return m_order_max_opt_ddelta;
        }		
        stk_collar_pct get_stk_collar_pct() const {
            return m_stk_collar_pct;
        }		
        fut_collar_pct get_fut_collar_pct() const {
            return m_fut_collar_pct;
        }		
        opt_collar_pct get_opt_collar_pct() const {
            return m_opt_collar_pct;
        }		
        allow_stk_odd_lots get_allow_stk_odd_lots() const {
            return m_allow_stk_odd_lots;
        }		
        allow_limit_on_close get_allow_limit_on_close() const {
            return m_allow_limit_on_close;
        }		
        allow_market_on_close get_allow_market_on_close() const {
            return m_allow_market_on_close;
        }		
        allow_short_sale_exempt get_allow_short_sale_exempt() const {
            return m_allow_short_sale_exempt;
        }		
        allow_inter_market_sweep get_allow_inter_market_sweep() const {
            return m_allow_inter_market_sweep;
        }		
        block_short_sales get_block_short_sales() const {
            return m_block_short_sales;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_live_margin_acc(const live_margin_acc& value)  {
            m_live_margin_acc = value;
        }
        void set_live_margin_day(const live_margin_day& value)  {
            m_live_margin_day = value;
        }
        void set_live_open_exposure(const live_open_exposure& value)  {
            m_live_open_exposure = value;
        }
        void set_day_fut_cn_bot(const day_fut_cn_bot& value)  {
            m_day_fut_cn_bot = value;
        }
        void set_day_fut_cn_sld(const day_fut_cn_sld& value)  {
            m_day_fut_cn_sld = value;
        }
        void set_acc_fut_cn_net(const acc_fut_cn_net& value)  {
            m_acc_fut_cn_net = value;
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
        void set_acc_margin_udn_vdn(const acc_margin_udn_vdn& value)  {
            m_acc_margin_udn_vdn = value;
        }
        void set_acc_margin_udn_vup(const acc_margin_udn_vup& value)  {
            m_acc_margin_udn_vup = value;
        }
        void set_acc_margin_uup_vdn(const acc_margin_uup_vdn& value)  {
            m_acc_margin_uup_vdn = value;
        }
        void set_acc_margin_uup_vup(const acc_margin_uup_vup& value)  {
            m_acc_margin_uup_vup = value;
        }
        void set_stk_enabled(const stk_enabled& value)  {
            m_stk_enabled = value;
        }
        void set_fut_enabled(const fut_enabled& value)  {
            m_fut_enabled = value;
        }
        void set_opt_enabled(const opt_enabled& value)  {
            m_opt_enabled = value;
        }
        void set_margin_limit_acc(const margin_limit_acc& value)  {
            m_margin_limit_acc = value;
        }
        void set_margin_limit_day(const margin_limit_day& value)  {
            m_margin_limit_day = value;
        }
        void set_open_exposure_limit(const open_exposure_limit& value)  {
            m_open_exposure_limit = value;
        }
        void set_max_acc_fut_cn_abs(const max_acc_fut_cn_abs& value)  {
            m_max_acc_fut_cn_abs = value;
        }
        void set_max_day_fut_cn_bot(const max_day_fut_cn_bot& value)  {
            m_max_day_fut_cn_bot = value;
        }
        void set_max_day_fut_cn_sld(const max_day_fut_cn_sld& value)  {
            m_max_day_fut_cn_sld = value;
        }
        void set_max_day_fut_cn_abs(const max_day_fut_cn_abs& value)  {
            m_max_day_fut_cn_abs = value;
        }
        void set_order_max_stk_qty(const order_max_stk_qty& value)  {
            m_order_max_stk_qty = value;
        }
        void set_order_max_fut_qty(const order_max_fut_qty& value)  {
            m_order_max_fut_qty = value;
        }
        void set_order_max_opt_qty(const order_max_opt_qty& value)  {
            m_order_max_opt_qty = value;
        }
        void set_order_max_stk_ddelta(const order_max_stk_ddelta& value)  {
            m_order_max_stk_ddelta = value;
        }
        void set_order_max_fut_ddelta(const order_max_fut_ddelta& value)  {
            m_order_max_fut_ddelta = value;
        }
        void set_order_max_opt_ddelta(const order_max_opt_ddelta& value)  {
            m_order_max_opt_ddelta = value;
        }
        void set_stk_collar_pct(const stk_collar_pct& value)  {
            m_stk_collar_pct = value;
        }
        void set_fut_collar_pct(const fut_collar_pct& value)  {
            m_fut_collar_pct = value;
        }
        void set_opt_collar_pct(const opt_collar_pct& value)  {
            m_opt_collar_pct = value;
        }
        void set_allow_stk_odd_lots(const allow_stk_odd_lots& value)  {
            m_allow_stk_odd_lots = value;
        }
        void set_allow_limit_on_close(const allow_limit_on_close& value)  {
            m_allow_limit_on_close = value;
        }
        void set_allow_market_on_close(const allow_market_on_close& value)  {
            m_allow_market_on_close = value;
        }
        void set_allow_short_sale_exempt(const allow_short_sale_exempt& value)  {
            m_allow_short_sale_exempt = value;
        }
        void set_allow_inter_market_sweep(const allow_inter_market_sweep& value)  {
            m_allow_inter_market_sweep = value;
        }
        void set_block_short_sales(const block_short_sales& value)  {
            m_block_short_sales = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_counter(const counter& value)  {
            m_counter = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskComposite::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const live_margin_acc & value) {
            set_live_margin_acc(value);
        }
        void set(const live_margin_day & value) {
            set_live_margin_day(value);
        }
        void set(const live_open_exposure & value) {
            set_live_open_exposure(value);
        }
        void set(const day_fut_cn_bot & value) {
            set_day_fut_cn_bot(value);
        }
        void set(const day_fut_cn_sld & value) {
            set_day_fut_cn_sld(value);
        }
        void set(const acc_fut_cn_net & value) {
            set_acc_fut_cn_net(value);
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
        void set(const acc_margin_udn_vdn & value) {
            set_acc_margin_udn_vdn(value);
        }
        void set(const acc_margin_udn_vup & value) {
            set_acc_margin_udn_vup(value);
        }
        void set(const acc_margin_uup_vdn & value) {
            set_acc_margin_uup_vdn(value);
        }
        void set(const acc_margin_uup_vup & value) {
            set_acc_margin_uup_vup(value);
        }
        void set(const stk_enabled & value) {
            set_stk_enabled(value);
        }
        void set(const fut_enabled & value) {
            set_fut_enabled(value);
        }
        void set(const opt_enabled & value) {
            set_opt_enabled(value);
        }
        void set(const margin_limit_acc & value) {
            set_margin_limit_acc(value);
        }
        void set(const margin_limit_day & value) {
            set_margin_limit_day(value);
        }
        void set(const open_exposure_limit & value) {
            set_open_exposure_limit(value);
        }
        void set(const max_acc_fut_cn_abs & value) {
            set_max_acc_fut_cn_abs(value);
        }
        void set(const max_day_fut_cn_bot & value) {
            set_max_day_fut_cn_bot(value);
        }
        void set(const max_day_fut_cn_sld & value) {
            set_max_day_fut_cn_sld(value);
        }
        void set(const max_day_fut_cn_abs & value) {
            set_max_day_fut_cn_abs(value);
        }
        void set(const order_max_stk_qty & value) {
            set_order_max_stk_qty(value);
        }
        void set(const order_max_fut_qty & value) {
            set_order_max_fut_qty(value);
        }
        void set(const order_max_opt_qty & value) {
            set_order_max_opt_qty(value);
        }
        void set(const order_max_stk_ddelta & value) {
            set_order_max_stk_ddelta(value);
        }
        void set(const order_max_fut_ddelta & value) {
            set_order_max_fut_ddelta(value);
        }
        void set(const order_max_opt_ddelta & value) {
            set_order_max_opt_ddelta(value);
        }
        void set(const stk_collar_pct & value) {
            set_stk_collar_pct(value);
        }
        void set(const fut_collar_pct & value) {
            set_fut_collar_pct(value);
        }
        void set(const opt_collar_pct & value) {
            set_opt_collar_pct(value);
        }
        void set(const allow_stk_odd_lots & value) {
            set_allow_stk_odd_lots(value);
        }
        void set(const allow_limit_on_close & value) {
            set_allow_limit_on_close(value);
        }
        void set(const allow_market_on_close & value) {
            set_allow_market_on_close(value);
        }
        void set(const allow_short_sale_exempt & value) {
            set_allow_short_sale_exempt(value);
        }
        void set(const allow_inter_market_sweep & value) {
            set_allow_inter_market_sweep(value);
        }
        void set(const block_short_sales & value) {
            set_block_short_sales(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const counter & value) {
            set_counter(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const MarRiskComposite & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_realm);
            set(value.m_sys_environment);
            set(value.m_risk_engine);
            set(value.m_live_margin_acc);
            set(value.m_live_margin_day);
            set(value.m_live_open_exposure);
            set(value.m_day_fut_cn_bot);
            set(value.m_day_fut_cn_sld);
            set(value.m_acc_fut_cn_net);
            set(value.m_day_margin_udn_vdn);
            set(value.m_day_margin_udn_vup);
            set(value.m_day_margin_uup_vdn);
            set(value.m_day_margin_uup_vup);
            set(value.m_acc_margin_udn_vdn);
            set(value.m_acc_margin_udn_vup);
            set(value.m_acc_margin_uup_vdn);
            set(value.m_acc_margin_uup_vup);
            set(value.m_stk_enabled);
            set(value.m_fut_enabled);
            set(value.m_opt_enabled);
            set(value.m_margin_limit_acc);
            set(value.m_margin_limit_day);
            set(value.m_open_exposure_limit);
            set(value.m_max_acc_fut_cn_abs);
            set(value.m_max_day_fut_cn_bot);
            set(value.m_max_day_fut_cn_sld);
            set(value.m_max_day_fut_cn_abs);
            set(value.m_order_max_stk_qty);
            set(value.m_order_max_fut_qty);
            set(value.m_order_max_opt_qty);
            set(value.m_order_max_stk_ddelta);
            set(value.m_order_max_fut_ddelta);
            set(value.m_order_max_opt_ddelta);
            set(value.m_stk_collar_pct);
            set(value.m_fut_collar_pct);
            set(value.m_opt_collar_pct);
            set(value.m_allow_stk_odd_lots);
            set(value.m_allow_limit_on_close);
            set(value.m_allow_market_on_close);
            set(value.m_allow_short_sale_exempt);
            set(value.m_allow_inter_market_sweep);
            set(value.m_block_short_sales);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_counter);
            set(value.m_timestamp);
        }

        MarRiskComposite() {
            m__meta.set_message_type("MarRiskComposite");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4675, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4675, length);
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
             *this = MarRiskComposite{};
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
        bool IncludeLiveMarginAcc() const {
            return !(m_live_margin_acc == 0.0);
        }
        bool IncludeLiveMarginDay() const {
            return !(m_live_margin_day == 0.0);
        }
        bool IncludeLiveOpenExposure() const {
            return !(m_live_open_exposure == 0.0);
        }
        bool IncludeDayFutCnBot() const {
            return !(m_day_fut_cn_bot == 0);
        }
        bool IncludeDayFutCnSld() const {
            return !(m_day_fut_cn_sld == 0);
        }
        bool IncludeAccFutCnNet() const {
            return !(m_acc_fut_cn_net == 0);
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
        bool IncludeAccMarginUdnVdn() const {
            return !(m_acc_margin_udn_vdn == 0.0);
        }
        bool IncludeAccMarginUdnVup() const {
            return !(m_acc_margin_udn_vup == 0.0);
        }
        bool IncludeAccMarginUupVdn() const {
            return !(m_acc_margin_uup_vdn == 0.0);
        }
        bool IncludeAccMarginUupVup() const {
            return !(m_acc_margin_uup_vup == 0.0);
        }
        bool IncludeMarginLimitAcc() const {
            return !(m_margin_limit_acc == 0.0);
        }
        bool IncludeMarginLimitDay() const {
            return !(m_margin_limit_day == 0.0);
        }
        bool IncludeOpenExposureLimit() const {
            return !(m_open_exposure_limit == 0.0);
        }
        bool IncludeMaxAccFutCnAbs() const {
            return !(m_max_acc_fut_cn_abs == 0);
        }
        bool IncludeMaxDayFutCnBot() const {
            return !(m_max_day_fut_cn_bot == 0);
        }
        bool IncludeMaxDayFutCnSld() const {
            return !(m_max_day_fut_cn_sld == 0);
        }
        bool IncludeMaxDayFutCnAbs() const {
            return !(m_max_day_fut_cn_abs == 0);
        }
        bool IncludeOrderMaxStkQty() const {
            return !(m_order_max_stk_qty == 0);
        }
        bool IncludeOrderMaxFutQty() const {
            return !(m_order_max_fut_qty == 0);
        }
        bool IncludeOrderMaxOptQty() const {
            return !(m_order_max_opt_qty == 0);
        }
        bool IncludeOrderMaxStkDdelta() const {
            return !(m_order_max_stk_ddelta == 0.0);
        }
        bool IncludeOrderMaxFutDdelta() const {
            return !(m_order_max_fut_ddelta == 0.0);
        }
        bool IncludeOrderMaxOptDdelta() const {
            return !(m_order_max_opt_ddelta == 0.0);
        }
        bool IncludeStkCollarPct() const {
            return !(m_stk_collar_pct == 0.0);
        }
        bool IncludeFutCollarPct() const {
            return !(m_fut_collar_pct == 0.0);
        }
        bool IncludeOptCollarPct() const {
            return !(m_opt_collar_pct == 0.0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            if ( IncludeLiveMarginAcc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_live_margin_acc);
            }
            if ( IncludeLiveMarginDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(104,m_live_margin_day);
            }
            if ( IncludeLiveOpenExposure()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_live_open_exposure);
            }
            if ( IncludeDayFutCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_day_fut_cn_bot);
            }
            if ( IncludeDayFutCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(107,m_day_fut_cn_sld);
            }
            if ( IncludeAccFutCnNet()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(108,m_acc_fut_cn_net);
            }
            if ( IncludeDayMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_day_margin_udn_vdn);
            }
            if ( IncludeDayMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_day_margin_udn_vup);
            }
            if ( IncludeDayMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_day_margin_uup_vdn);
            }
            if ( IncludeDayMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_day_margin_uup_vup);
            }
            if ( IncludeAccMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_acc_margin_udn_vdn);
            }
            if ( IncludeAccMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_acc_margin_udn_vup);
            }
            if ( IncludeAccMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_acc_margin_uup_vdn);
            }
            if ( IncludeAccMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_acc_margin_uup_vup);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            if ( IncludeMarginLimitAcc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_margin_limit_acc);
            }
            if ( IncludeMarginLimitDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_margin_limit_day);
            }
            if ( IncludeOpenExposureLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_open_exposure_limit);
            }
            if ( IncludeMaxAccFutCnAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(123,m_max_acc_fut_cn_abs);
            }
            if ( IncludeMaxDayFutCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(124,m_max_day_fut_cn_bot);
            }
            if ( IncludeMaxDayFutCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(125,m_max_day_fut_cn_sld);
            }
            if ( IncludeMaxDayFutCnAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(126,m_max_day_fut_cn_abs);
            }
            if ( IncludeOrderMaxStkQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_order_max_stk_qty);
            }
            if ( IncludeOrderMaxFutQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(128,m_order_max_fut_qty);
            }
            if ( IncludeOrderMaxOptQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(129,m_order_max_opt_qty);
            }
            if ( IncludeOrderMaxStkDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_order_max_stk_ddelta);
            }
            if ( IncludeOrderMaxFutDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(131,m_order_max_fut_ddelta);
            }
            if ( IncludeOrderMaxOptDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(132,m_order_max_opt_ddelta);
            }
            if ( IncludeStkCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_stk_collar_pct);
            }
            if ( IncludeFutCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(134,m_fut_collar_pct);
            }
            if ( IncludeOptCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(135,m_opt_collar_pct);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_stk_odd_lots)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(137,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_limit_on_close)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(138,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_market_on_close)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_short_sale_exempt)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(140,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_inter_market_sweep)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(141,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_block_short_sales)));
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(144,m_counter);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(145, m_timestamp);
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
            if ( IncludeLiveMarginAcc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_live_margin_acc);
            }
            if ( IncludeLiveMarginDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,104,m_live_margin_day);
            }
            if ( IncludeLiveOpenExposure()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_live_open_exposure);
            }
            if ( IncludeDayFutCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_day_fut_cn_bot);
            }
            if ( IncludeDayFutCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,107,m_day_fut_cn_sld);
            }
            if ( IncludeAccFutCnNet()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,108,m_acc_fut_cn_net);
            }
            if ( IncludeDayMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_day_margin_udn_vdn);
            }
            if ( IncludeDayMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_day_margin_udn_vup);
            }
            if ( IncludeDayMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_day_margin_uup_vdn);
            }
            if ( IncludeDayMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_day_margin_uup_vup);
            }
            if ( IncludeAccMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_acc_margin_udn_vdn);
            }
            if ( IncludeAccMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_acc_margin_udn_vup);
            }
            if ( IncludeAccMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_acc_margin_uup_vdn);
            }
            if ( IncludeAccMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_acc_margin_uup_vup);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            if ( IncludeMarginLimitAcc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_margin_limit_acc);
            }
            if ( IncludeMarginLimitDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_margin_limit_day);
            }
            if ( IncludeOpenExposureLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_open_exposure_limit);
            }
            if ( IncludeMaxAccFutCnAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,123,m_max_acc_fut_cn_abs);
            }
            if ( IncludeMaxDayFutCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,124,m_max_day_fut_cn_bot);
            }
            if ( IncludeMaxDayFutCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,125,m_max_day_fut_cn_sld);
            }
            if ( IncludeMaxDayFutCnAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,126,m_max_day_fut_cn_abs);
            }
            if ( IncludeOrderMaxStkQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_order_max_stk_qty);
            }
            if ( IncludeOrderMaxFutQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,128,m_order_max_fut_qty);
            }
            if ( IncludeOrderMaxOptQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,129,m_order_max_opt_qty);
            }
            if ( IncludeOrderMaxStkDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_order_max_stk_ddelta);
            }
            if ( IncludeOrderMaxFutDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,131,m_order_max_fut_ddelta);
            }
            if ( IncludeOrderMaxOptDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,132,m_order_max_opt_ddelta);
            }
            if ( IncludeStkCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_stk_collar_pct);
            }
            if ( IncludeFutCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,134,m_fut_collar_pct);
            }
            if ( IncludeOptCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,135,m_opt_collar_pct);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_stk_odd_lots)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,137,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_limit_on_close)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,138,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_market_on_close)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_short_sale_exempt)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,140,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_allow_inter_market_sweep)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,141,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_block_short_sales)));
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,143,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,144,m_counter);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 145, m_timestamp);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_live_margin_acc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_live_margin_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_live_open_exposure = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_day_fut_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_day_fut_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_acc_fut_cn_net = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 119: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_limit_acc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_limit_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_open_exposure_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_acc_fut_cn_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_day_fut_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_day_fut_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_day_fut_cn_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_stk_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_fut_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_opt_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_stk_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_fut_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_opt_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allow_stk_odd_lots = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 137: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allow_limit_on_close = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 138: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allow_market_on_close = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allow_short_sale_exempt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 140: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_allow_inter_market_sweep = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 141: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_block_short_sales = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 143: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 145: {
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

    template<> inline const auto MarRiskComposite::get<MarRiskComposite::_meta>() const { return MarRiskComposite::_meta{ m__meta}; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::pkey>() const { return MarRiskComposite::pkey{ m_pkey}; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::risk_engine>() const { return m_risk_engine; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::live_margin_acc>() const { return m_live_margin_acc; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::live_margin_day>() const { return m_live_margin_day; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::live_open_exposure>() const { return m_live_open_exposure; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::day_fut_cn_bot>() const { return m_day_fut_cn_bot; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::day_fut_cn_sld>() const { return m_day_fut_cn_sld; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::acc_fut_cn_net>() const { return m_acc_fut_cn_net; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::day_margin_udn_vdn>() const { return m_day_margin_udn_vdn; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::day_margin_udn_vup>() const { return m_day_margin_udn_vup; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::day_margin_uup_vdn>() const { return m_day_margin_uup_vdn; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::day_margin_uup_vup>() const { return m_day_margin_uup_vup; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::acc_margin_udn_vdn>() const { return m_acc_margin_udn_vdn; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::acc_margin_udn_vup>() const { return m_acc_margin_udn_vup; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::acc_margin_uup_vdn>() const { return m_acc_margin_uup_vdn; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::acc_margin_uup_vup>() const { return m_acc_margin_uup_vup; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::stk_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_stk_enabled)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::fut_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_fut_enabled)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::opt_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_opt_enabled)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::margin_limit_acc>() const { return m_margin_limit_acc; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::margin_limit_day>() const { return m_margin_limit_day; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::open_exposure_limit>() const { return m_open_exposure_limit; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::max_acc_fut_cn_abs>() const { return m_max_acc_fut_cn_abs; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::max_day_fut_cn_bot>() const { return m_max_day_fut_cn_bot; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::max_day_fut_cn_sld>() const { return m_max_day_fut_cn_sld; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::max_day_fut_cn_abs>() const { return m_max_day_fut_cn_abs; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::order_max_stk_qty>() const { return m_order_max_stk_qty; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::order_max_fut_qty>() const { return m_order_max_fut_qty; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::order_max_opt_qty>() const { return m_order_max_opt_qty; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::order_max_stk_ddelta>() const { return m_order_max_stk_ddelta; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::order_max_fut_ddelta>() const { return m_order_max_fut_ddelta; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::order_max_opt_ddelta>() const { return m_order_max_opt_ddelta; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::stk_collar_pct>() const { return m_stk_collar_pct; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::fut_collar_pct>() const { return m_fut_collar_pct; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::opt_collar_pct>() const { return m_opt_collar_pct; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::allow_stk_odd_lots>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_allow_stk_odd_lots)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::allow_limit_on_close>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_allow_limit_on_close)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::allow_market_on_close>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_allow_market_on_close)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::allow_short_sale_exempt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_allow_short_sale_exempt)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::allow_inter_market_sweep>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_allow_inter_market_sweep)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::block_short_sales>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_block_short_sales)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::modified_by>() const { return m_modified_by; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::counter>() const { return m_counter; }
    template<> inline const auto MarRiskComposite::get<MarRiskComposite::timestamp>() const { return m_timestamp; }
    template<> inline const auto MarRiskComposite_PKey::get<MarRiskComposite_PKey::ticker>() const { return MarRiskComposite_PKey::ticker{m_ticker}; }
    template<> inline const auto MarRiskComposite_PKey::get<MarRiskComposite_PKey::risk_group>() const { return m_risk_group; }
    template<> inline const auto MarRiskComposite_PKey::get<MarRiskComposite_PKey::risk_firm>() const { return m_risk_firm; }
    template<> inline const auto MarRiskComposite_PKey::get<MarRiskComposite_PKey::is_test_accnt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MarRiskComposite_PKey& m) {
        o << "\"ticker\":{" << m.get<MarRiskComposite_PKey::ticker>() << "}";
        o << ",\"risk_group\":\"" << m.get<MarRiskComposite_PKey::risk_group>() << "\"";
        o << ",\"risk_firm\":\"" << m.get<MarRiskComposite_PKey::risk_firm>() << "\"";
        o << ",\"is_test_accnt\":" << (int64_t)m.get<MarRiskComposite_PKey::is_test_accnt>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MarRiskComposite& m) {
        o << "\"_meta\":{" << m.get<MarRiskComposite::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<MarRiskComposite::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<MarRiskComposite::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<MarRiskComposite::sys_environment>();
        o << ",\"risk_engine\":\"" << m.get<MarRiskComposite::risk_engine>() << "\"";
        o << ",\"live_margin_acc\":" << m.get<MarRiskComposite::live_margin_acc>();
        o << ",\"live_margin_day\":" << m.get<MarRiskComposite::live_margin_day>();
        o << ",\"live_open_exposure\":" << m.get<MarRiskComposite::live_open_exposure>();
        o << ",\"day_fut_cn_bot\":" << m.get<MarRiskComposite::day_fut_cn_bot>();
        o << ",\"day_fut_cn_sld\":" << m.get<MarRiskComposite::day_fut_cn_sld>();
        o << ",\"acc_fut_cn_net\":" << m.get<MarRiskComposite::acc_fut_cn_net>();
        o << ",\"day_margin_udn_vdn\":" << m.get<MarRiskComposite::day_margin_udn_vdn>();
        o << ",\"day_margin_udn_vup\":" << m.get<MarRiskComposite::day_margin_udn_vup>();
        o << ",\"day_margin_uup_vdn\":" << m.get<MarRiskComposite::day_margin_uup_vdn>();
        o << ",\"day_margin_uup_vup\":" << m.get<MarRiskComposite::day_margin_uup_vup>();
        o << ",\"acc_margin_udn_vdn\":" << m.get<MarRiskComposite::acc_margin_udn_vdn>();
        o << ",\"acc_margin_udn_vup\":" << m.get<MarRiskComposite::acc_margin_udn_vup>();
        o << ",\"acc_margin_uup_vdn\":" << m.get<MarRiskComposite::acc_margin_uup_vdn>();
        o << ",\"acc_margin_uup_vup\":" << m.get<MarRiskComposite::acc_margin_uup_vup>();
        o << ",\"stk_enabled\":" << (int64_t)m.get<MarRiskComposite::stk_enabled>();
        o << ",\"fut_enabled\":" << (int64_t)m.get<MarRiskComposite::fut_enabled>();
        o << ",\"opt_enabled\":" << (int64_t)m.get<MarRiskComposite::opt_enabled>();
        o << ",\"margin_limit_acc\":" << m.get<MarRiskComposite::margin_limit_acc>();
        o << ",\"margin_limit_day\":" << m.get<MarRiskComposite::margin_limit_day>();
        o << ",\"open_exposure_limit\":" << m.get<MarRiskComposite::open_exposure_limit>();
        o << ",\"max_acc_fut_cn_abs\":" << m.get<MarRiskComposite::max_acc_fut_cn_abs>();
        o << ",\"max_day_fut_cn_bot\":" << m.get<MarRiskComposite::max_day_fut_cn_bot>();
        o << ",\"max_day_fut_cn_sld\":" << m.get<MarRiskComposite::max_day_fut_cn_sld>();
        o << ",\"max_day_fut_cn_abs\":" << m.get<MarRiskComposite::max_day_fut_cn_abs>();
        o << ",\"order_max_stk_qty\":" << m.get<MarRiskComposite::order_max_stk_qty>();
        o << ",\"order_max_fut_qty\":" << m.get<MarRiskComposite::order_max_fut_qty>();
        o << ",\"order_max_opt_qty\":" << m.get<MarRiskComposite::order_max_opt_qty>();
        o << ",\"order_max_stk_ddelta\":" << m.get<MarRiskComposite::order_max_stk_ddelta>();
        o << ",\"order_max_fut_ddelta\":" << m.get<MarRiskComposite::order_max_fut_ddelta>();
        o << ",\"order_max_opt_ddelta\":" << m.get<MarRiskComposite::order_max_opt_ddelta>();
        o << ",\"stk_collar_pct\":" << m.get<MarRiskComposite::stk_collar_pct>();
        o << ",\"fut_collar_pct\":" << m.get<MarRiskComposite::fut_collar_pct>();
        o << ",\"opt_collar_pct\":" << m.get<MarRiskComposite::opt_collar_pct>();
        o << ",\"allow_stk_odd_lots\":" << (int64_t)m.get<MarRiskComposite::allow_stk_odd_lots>();
        o << ",\"allow_limit_on_close\":" << (int64_t)m.get<MarRiskComposite::allow_limit_on_close>();
        o << ",\"allow_market_on_close\":" << (int64_t)m.get<MarRiskComposite::allow_market_on_close>();
        o << ",\"allow_short_sale_exempt\":" << (int64_t)m.get<MarRiskComposite::allow_short_sale_exempt>();
        o << ",\"allow_inter_market_sweep\":" << (int64_t)m.get<MarRiskComposite::allow_inter_market_sweep>();
        o << ",\"block_short_sales\":" << (int64_t)m.get<MarRiskComposite::block_short_sales>();
        o << ",\"modified_by\":\"" << m.get<MarRiskComposite::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<MarRiskComposite::modified_in>();
        o << ",\"counter\":" << m.get<MarRiskComposite::counter>();
        {
            std::time_t tt = m.get<MarRiskComposite::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}