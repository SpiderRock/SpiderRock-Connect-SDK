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

    #ifndef _block_short_sales__GUARD__
    #define _block_short_sales__GUARD__
    DECL_STRONG_TYPE(block_short_sales, spiderrock::protobuf::api::YesNo);
    #endif//_block_short_sales__GUARD__

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

    #ifndef _risk_firm__GUARD__
    #define _risk_firm__GUARD__
    DECL_STRONG_TYPE(risk_firm, string);
    #endif//_risk_firm__GUARD__

    #ifndef _risk_group__GUARD__
    #define _risk_group__GUARD__
    DECL_STRONG_TYPE(risk_group, string);
    #endif//_risk_group__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _is_test_accnt__GUARD__
    #define _is_test_accnt__GUARD__
    DECL_STRONG_TYPE(is_test_accnt, spiderrock::protobuf::api::YesNo);
    #endif//_is_test_accnt__GUARD__

    
    class MarRiskControlTkOverride_PKey {
        public:
        //using statements for all types used in this class
        using risk_firm = spiderrock::protobuf::api::risk_firm;
        using risk_group = spiderrock::protobuf::api::risk_group;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using is_test_accnt = spiderrock::protobuf::api::is_test_accnt;

        private:
        risk_firm m_risk_firm{};
        risk_group m_risk_group{};
        ticker m_ticker{};
        is_test_accnt m_is_test_accnt{};

        public:
        risk_firm get_risk_firm() const {
            return m_risk_firm;
        }
        risk_group get_risk_group() const {
            return m_risk_group;
        }
		ticker get_ticker() const {
            return m_ticker;
        }
        is_test_accnt get_is_test_accnt() const {
            return m_is_test_accnt;
        }
        void set_risk_firm(const risk_firm& value)  {
            m_risk_firm = value;
        }
        void set_risk_group(const risk_group& value)  {
            m_risk_group = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_is_test_accnt(const is_test_accnt& value)  {
            m_is_test_accnt = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskControlTkOverride_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskControlTkOverride_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const risk_firm & value) { set_risk_firm(value); }
        void set(const risk_group & value) { set_risk_group(value); }
        void set(const ticker & value) { set_ticker(value); }
        void set(const is_test_accnt & value) { set_is_test_accnt(value); }


        MarRiskControlTkOverride_PKey() {}

        virtual ~MarRiskControlTkOverride_PKey() {
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
        bool IncludeRiskFirm() const {
            return !(m_risk_firm.empty());
        }
        bool IncludeRiskGroup() const {
            return !(m_risk_group.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeRiskFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_risk_firm);
            }
            if ( IncludeRiskGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_risk_group);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(12,tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeRiskFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_risk_firm));
            }
            if ( IncludeRiskGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_risk_group));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 12, tickerKeyLayout_ticker);
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
                    case 10: {m_risk_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_risk_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {m_is_test_accnt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class MarRiskControlTkOverride {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::MarRiskControlTkOverride_PKey;
        using stk_enabled = spiderrock::protobuf::api::stk_enabled;
        using fut_enabled = spiderrock::protobuf::api::fut_enabled;
        using opt_enabled = spiderrock::protobuf::api::opt_enabled;
        using block_short_sales = spiderrock::protobuf::api::block_short_sales;
        using order_max_stk_qty = spiderrock::protobuf::api::order_max_stk_qty;
        using order_max_fut_qty = spiderrock::protobuf::api::order_max_fut_qty;
        using order_max_opt_qty = spiderrock::protobuf::api::order_max_opt_qty;
        using order_max_stk_ddelta = spiderrock::protobuf::api::order_max_stk_ddelta;
        using order_max_fut_ddelta = spiderrock::protobuf::api::order_max_fut_ddelta;
        using order_max_opt_ddelta = spiderrock::protobuf::api::order_max_opt_ddelta;
        using stk_collar_pct = spiderrock::protobuf::api::stk_collar_pct;
        using fut_collar_pct = spiderrock::protobuf::api::fut_collar_pct;
        using opt_collar_pct = spiderrock::protobuf::api::opt_collar_pct;
        using max_acc_fut_cn_abs = spiderrock::protobuf::api::max_acc_fut_cn_abs;
        using max_day_fut_cn_bot = spiderrock::protobuf::api::max_day_fut_cn_bot;
        using max_day_fut_cn_sld = spiderrock::protobuf::api::max_day_fut_cn_sld;
        using max_day_fut_cn_abs = spiderrock::protobuf::api::max_day_fut_cn_abs;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        stk_enabled m_stk_enabled{};
        fut_enabled m_fut_enabled{};
        opt_enabled m_opt_enabled{};
        block_short_sales m_block_short_sales{};
        order_max_stk_qty m_order_max_stk_qty{};
        order_max_fut_qty m_order_max_fut_qty{};
        order_max_opt_qty m_order_max_opt_qty{};
        order_max_stk_ddelta m_order_max_stk_ddelta{};
        order_max_fut_ddelta m_order_max_fut_ddelta{};
        order_max_opt_ddelta m_order_max_opt_ddelta{};
        stk_collar_pct m_stk_collar_pct{};
        fut_collar_pct m_fut_collar_pct{};
        opt_collar_pct m_opt_collar_pct{};
        max_acc_fut_cn_abs m_max_acc_fut_cn_abs{};
        max_day_fut_cn_bot m_max_day_fut_cn_bot{};
        max_day_fut_cn_sld m_max_day_fut_cn_sld{};
        max_day_fut_cn_abs m_max_day_fut_cn_abs{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
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
        block_short_sales get_block_short_sales() const {
            return m_block_short_sales;
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
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_stk_enabled(const stk_enabled& value)  {
            m_stk_enabled = value;
        }
        void set_fut_enabled(const fut_enabled& value)  {
            m_fut_enabled = value;
        }
        void set_opt_enabled(const opt_enabled& value)  {
            m_opt_enabled = value;
        }
        void set_block_short_sales(const block_short_sales& value)  {
            m_block_short_sales = value;
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
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskControlTkOverride::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
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
        void set(const block_short_sales & value) {
            set_block_short_sales(value);
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
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const MarRiskControlTkOverride & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_stk_enabled);
            set(value.m_fut_enabled);
            set(value.m_opt_enabled);
            set(value.m_block_short_sales);
            set(value.m_order_max_stk_qty);
            set(value.m_order_max_fut_qty);
            set(value.m_order_max_opt_qty);
            set(value.m_order_max_stk_ddelta);
            set(value.m_order_max_fut_ddelta);
            set(value.m_order_max_opt_ddelta);
            set(value.m_stk_collar_pct);
            set(value.m_fut_collar_pct);
            set(value.m_opt_collar_pct);
            set(value.m_max_acc_fut_cn_abs);
            set(value.m_max_day_fut_cn_bot);
            set(value.m_max_day_fut_cn_sld);
            set(value.m_max_day_fut_cn_abs);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        MarRiskControlTkOverride() {
            m__meta.set_message_type("MarRiskControlTkOverride");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4551, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4551, length);
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
             *this = MarRiskControlTkOverride{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
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
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_block_short_sales)));
            if ( IncludeOrderMaxStkQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(104,m_order_max_stk_qty);
            }
            if ( IncludeOrderMaxFutQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(105,m_order_max_fut_qty);
            }
            if ( IncludeOrderMaxOptQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_order_max_opt_qty);
            }
            if ( IncludeOrderMaxStkDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_order_max_stk_ddelta);
            }
            if ( IncludeOrderMaxFutDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_order_max_fut_ddelta);
            }
            if ( IncludeOrderMaxOptDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_order_max_opt_ddelta);
            }
            if ( IncludeStkCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_stk_collar_pct);
            }
            if ( IncludeFutCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_fut_collar_pct);
            }
            if ( IncludeOptCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_opt_collar_pct);
            }
            if ( IncludeMaxAccFutCnAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(113,m_max_acc_fut_cn_abs);
            }
            if ( IncludeMaxDayFutCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(114,m_max_day_fut_cn_bot);
            }
            if ( IncludeMaxDayFutCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_max_day_fut_cn_sld);
            }
            if ( IncludeMaxDayFutCnAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(116,m_max_day_fut_cn_abs);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(117,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(119, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_block_short_sales)));
            if ( IncludeOrderMaxStkQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,104,m_order_max_stk_qty);
            }
            if ( IncludeOrderMaxFutQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,105,m_order_max_fut_qty);
            }
            if ( IncludeOrderMaxOptQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_order_max_opt_qty);
            }
            if ( IncludeOrderMaxStkDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_order_max_stk_ddelta);
            }
            if ( IncludeOrderMaxFutDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_order_max_fut_ddelta);
            }
            if ( IncludeOrderMaxOptDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_order_max_opt_ddelta);
            }
            if ( IncludeStkCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_stk_collar_pct);
            }
            if ( IncludeFutCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_fut_collar_pct);
            }
            if ( IncludeOptCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_opt_collar_pct);
            }
            if ( IncludeMaxAccFutCnAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,113,m_max_acc_fut_cn_abs);
            }
            if ( IncludeMaxDayFutCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,114,m_max_day_fut_cn_bot);
            }
            if ( IncludeMaxDayFutCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_max_day_fut_cn_sld);
            }
            if ( IncludeMaxDayFutCnAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,116,m_max_day_fut_cn_abs);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,117,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 119, m_timestamp);
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
                            m_stk_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_block_short_sales = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_stk_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_fut_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_opt_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_stk_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_fut_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_opt_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_acc_fut_cn_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_day_fut_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_day_fut_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_day_fut_cn_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 119: {
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

    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::_meta>() const { return MarRiskControlTkOverride::_meta{ m__meta}; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::pkey>() const { return MarRiskControlTkOverride::pkey{ m_pkey}; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::stk_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_stk_enabled)); }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::fut_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_fut_enabled)); }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::opt_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_opt_enabled)); }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::block_short_sales>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_block_short_sales)); }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::order_max_stk_qty>() const { return m_order_max_stk_qty; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::order_max_fut_qty>() const { return m_order_max_fut_qty; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::order_max_opt_qty>() const { return m_order_max_opt_qty; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::order_max_stk_ddelta>() const { return m_order_max_stk_ddelta; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::order_max_fut_ddelta>() const { return m_order_max_fut_ddelta; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::order_max_opt_ddelta>() const { return m_order_max_opt_ddelta; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::stk_collar_pct>() const { return m_stk_collar_pct; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::fut_collar_pct>() const { return m_fut_collar_pct; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::opt_collar_pct>() const { return m_opt_collar_pct; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::max_acc_fut_cn_abs>() const { return m_max_acc_fut_cn_abs; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::max_day_fut_cn_bot>() const { return m_max_day_fut_cn_bot; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::max_day_fut_cn_sld>() const { return m_max_day_fut_cn_sld; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::max_day_fut_cn_abs>() const { return m_max_day_fut_cn_abs; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::modified_by>() const { return m_modified_by; }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto MarRiskControlTkOverride::get<MarRiskControlTkOverride::timestamp>() const { return m_timestamp; }
    template<> inline const auto MarRiskControlTkOverride_PKey::get<MarRiskControlTkOverride_PKey::risk_firm>() const { return m_risk_firm; }
    template<> inline const auto MarRiskControlTkOverride_PKey::get<MarRiskControlTkOverride_PKey::risk_group>() const { return m_risk_group; }
    template<> inline const auto MarRiskControlTkOverride_PKey::get<MarRiskControlTkOverride_PKey::ticker>() const { return MarRiskControlTkOverride_PKey::ticker{m_ticker}; }
    template<> inline const auto MarRiskControlTkOverride_PKey::get<MarRiskControlTkOverride_PKey::is_test_accnt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MarRiskControlTkOverride_PKey& m) {
        o << "\"risk_firm\":\"" << m.get<MarRiskControlTkOverride_PKey::risk_firm>() << "\"";
        o << ",\"risk_group\":\"" << m.get<MarRiskControlTkOverride_PKey::risk_group>() << "\"";
        o << ",\"ticker\":{" << m.get<MarRiskControlTkOverride_PKey::ticker>() << "}";
        o << ",\"is_test_accnt\":" << (int64_t)m.get<MarRiskControlTkOverride_PKey::is_test_accnt>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MarRiskControlTkOverride& m) {
        o << "\"_meta\":{" << m.get<MarRiskControlTkOverride::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<MarRiskControlTkOverride::pkey>() << "}";
        o << ",\"stk_enabled\":" << (int64_t)m.get<MarRiskControlTkOverride::stk_enabled>();
        o << ",\"fut_enabled\":" << (int64_t)m.get<MarRiskControlTkOverride::fut_enabled>();
        o << ",\"opt_enabled\":" << (int64_t)m.get<MarRiskControlTkOverride::opt_enabled>();
        o << ",\"block_short_sales\":" << (int64_t)m.get<MarRiskControlTkOverride::block_short_sales>();
        o << ",\"order_max_stk_qty\":" << m.get<MarRiskControlTkOverride::order_max_stk_qty>();
        o << ",\"order_max_fut_qty\":" << m.get<MarRiskControlTkOverride::order_max_fut_qty>();
        o << ",\"order_max_opt_qty\":" << m.get<MarRiskControlTkOverride::order_max_opt_qty>();
        o << ",\"order_max_stk_ddelta\":" << m.get<MarRiskControlTkOverride::order_max_stk_ddelta>();
        o << ",\"order_max_fut_ddelta\":" << m.get<MarRiskControlTkOverride::order_max_fut_ddelta>();
        o << ",\"order_max_opt_ddelta\":" << m.get<MarRiskControlTkOverride::order_max_opt_ddelta>();
        o << ",\"stk_collar_pct\":" << m.get<MarRiskControlTkOverride::stk_collar_pct>();
        o << ",\"fut_collar_pct\":" << m.get<MarRiskControlTkOverride::fut_collar_pct>();
        o << ",\"opt_collar_pct\":" << m.get<MarRiskControlTkOverride::opt_collar_pct>();
        o << ",\"max_acc_fut_cn_abs\":" << m.get<MarRiskControlTkOverride::max_acc_fut_cn_abs>();
        o << ",\"max_day_fut_cn_bot\":" << m.get<MarRiskControlTkOverride::max_day_fut_cn_bot>();
        o << ",\"max_day_fut_cn_sld\":" << m.get<MarRiskControlTkOverride::max_day_fut_cn_sld>();
        o << ",\"max_day_fut_cn_abs\":" << m.get<MarRiskControlTkOverride::max_day_fut_cn_abs>();
        o << ",\"modified_by\":\"" << m.get<MarRiskControlTkOverride::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<MarRiskControlTkOverride::modified_in>();
        {
            std::time_t tt = m.get<MarRiskControlTkOverride::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}