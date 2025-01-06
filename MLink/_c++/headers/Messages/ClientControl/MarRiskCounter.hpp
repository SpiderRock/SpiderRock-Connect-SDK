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

    
    class MarRiskCounter_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskCounter_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskCounter_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const risk_group & value) { set_risk_group(value); }
        void set(const risk_firm & value) { set_risk_firm(value); }
        void set(const is_test_accnt & value) { set_is_test_accnt(value); }


        MarRiskCounter_PKey() {}

        virtual ~MarRiskCounter_PKey() {
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
    

    class MarRiskCounter {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::MarRiskCounter_PKey;
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
        void set_counter(const counter& value)  {
            m_counter = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MarRiskCounter::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const counter & value) {
            set_counter(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const MarRiskCounter & value) {
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
            set(value.m_counter);
            set(value.m_timestamp);
        }

        MarRiskCounter() {
            m__meta.set_message_type("MarRiskCounter");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4670, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4670, length);
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
             *this = MarRiskCounter{};
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
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(116,m_day_fut_cn_bot);
            }
            if ( IncludeDayFutCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(117,m_day_fut_cn_sld);
            }
            if ( IncludeAccFutCnNet()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_acc_fut_cn_net);
            }
            if ( IncludeDayMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_day_margin_udn_vdn);
            }
            if ( IncludeDayMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_day_margin_udn_vup);
            }
            if ( IncludeDayMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_day_margin_uup_vdn);
            }
            if ( IncludeDayMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_day_margin_uup_vup);
            }
            if ( IncludeAccMarginUdnVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_acc_margin_udn_vdn);
            }
            if ( IncludeAccMarginUdnVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_acc_margin_udn_vup);
            }
            if ( IncludeAccMarginUupVdn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_acc_margin_uup_vdn);
            }
            if ( IncludeAccMarginUupVup()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_acc_margin_uup_vup);
            }
            if ( IncludeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(114,m_counter);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_timestamp);
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
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,116,m_day_fut_cn_bot);
            }
            if ( IncludeDayFutCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,117,m_day_fut_cn_sld);
            }
            if ( IncludeAccFutCnNet()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_acc_fut_cn_net);
            }
            if ( IncludeDayMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_day_margin_udn_vdn);
            }
            if ( IncludeDayMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_day_margin_udn_vup);
            }
            if ( IncludeDayMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_day_margin_uup_vdn);
            }
            if ( IncludeDayMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_day_margin_uup_vup);
            }
            if ( IncludeAccMarginUdnVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_acc_margin_udn_vdn);
            }
            if ( IncludeAccMarginUdnVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_acc_margin_udn_vup);
            }
            if ( IncludeAccMarginUupVdn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_acc_margin_uup_vdn);
            }
            if ( IncludeAccMarginUupVup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_acc_margin_uup_vup);
            }
            if ( IncludeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,114,m_counter);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_timestamp);
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
                    case 116: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_day_fut_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_day_fut_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_acc_fut_cn_net = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_day_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_udn_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_udn_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_uup_vdn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_acc_margin_uup_vup = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
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

    template<> inline const auto MarRiskCounter::get<MarRiskCounter::_meta>() const { return MarRiskCounter::_meta{ m__meta}; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::pkey>() const { return MarRiskCounter::pkey{ m_pkey}; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::risk_engine>() const { return m_risk_engine; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::live_margin_acc>() const { return m_live_margin_acc; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::live_margin_day>() const { return m_live_margin_day; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::live_open_exposure>() const { return m_live_open_exposure; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::day_fut_cn_bot>() const { return m_day_fut_cn_bot; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::day_fut_cn_sld>() const { return m_day_fut_cn_sld; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::acc_fut_cn_net>() const { return m_acc_fut_cn_net; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::day_margin_udn_vdn>() const { return m_day_margin_udn_vdn; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::day_margin_udn_vup>() const { return m_day_margin_udn_vup; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::day_margin_uup_vdn>() const { return m_day_margin_uup_vdn; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::day_margin_uup_vup>() const { return m_day_margin_uup_vup; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::acc_margin_udn_vdn>() const { return m_acc_margin_udn_vdn; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::acc_margin_udn_vup>() const { return m_acc_margin_udn_vup; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::acc_margin_uup_vdn>() const { return m_acc_margin_uup_vdn; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::acc_margin_uup_vup>() const { return m_acc_margin_uup_vup; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::counter>() const { return m_counter; }
    template<> inline const auto MarRiskCounter::get<MarRiskCounter::timestamp>() const { return m_timestamp; }
    template<> inline const auto MarRiskCounter_PKey::get<MarRiskCounter_PKey::ticker>() const { return MarRiskCounter_PKey::ticker{m_ticker}; }
    template<> inline const auto MarRiskCounter_PKey::get<MarRiskCounter_PKey::risk_group>() const { return m_risk_group; }
    template<> inline const auto MarRiskCounter_PKey::get<MarRiskCounter_PKey::risk_firm>() const { return m_risk_firm; }
    template<> inline const auto MarRiskCounter_PKey::get<MarRiskCounter_PKey::is_test_accnt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MarRiskCounter_PKey& m) {
        o << "\"ticker\":{" << m.get<MarRiskCounter_PKey::ticker>() << "}";
        o << ",\"risk_group\":\"" << m.get<MarRiskCounter_PKey::risk_group>() << "\"";
        o << ",\"risk_firm\":\"" << m.get<MarRiskCounter_PKey::risk_firm>() << "\"";
        o << ",\"is_test_accnt\":" << (int64_t)m.get<MarRiskCounter_PKey::is_test_accnt>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MarRiskCounter& m) {
        o << "\"_meta\":{" << m.get<MarRiskCounter::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<MarRiskCounter::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<MarRiskCounter::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<MarRiskCounter::sys_environment>();
        o << ",\"risk_engine\":\"" << m.get<MarRiskCounter::risk_engine>() << "\"";
        o << ",\"live_margin_acc\":" << m.get<MarRiskCounter::live_margin_acc>();
        o << ",\"live_margin_day\":" << m.get<MarRiskCounter::live_margin_day>();
        o << ",\"live_open_exposure\":" << m.get<MarRiskCounter::live_open_exposure>();
        o << ",\"day_fut_cn_bot\":" << m.get<MarRiskCounter::day_fut_cn_bot>();
        o << ",\"day_fut_cn_sld\":" << m.get<MarRiskCounter::day_fut_cn_sld>();
        o << ",\"acc_fut_cn_net\":" << m.get<MarRiskCounter::acc_fut_cn_net>();
        o << ",\"day_margin_udn_vdn\":" << m.get<MarRiskCounter::day_margin_udn_vdn>();
        o << ",\"day_margin_udn_vup\":" << m.get<MarRiskCounter::day_margin_udn_vup>();
        o << ",\"day_margin_uup_vdn\":" << m.get<MarRiskCounter::day_margin_uup_vdn>();
        o << ",\"day_margin_uup_vup\":" << m.get<MarRiskCounter::day_margin_uup_vup>();
        o << ",\"acc_margin_udn_vdn\":" << m.get<MarRiskCounter::acc_margin_udn_vdn>();
        o << ",\"acc_margin_udn_vup\":" << m.get<MarRiskCounter::acc_margin_udn_vup>();
        o << ",\"acc_margin_uup_vdn\":" << m.get<MarRiskCounter::acc_margin_uup_vdn>();
        o << ",\"acc_margin_uup_vup\":" << m.get<MarRiskCounter::acc_margin_uup_vup>();
        o << ",\"counter\":" << m.get<MarRiskCounter::counter>();
        {
            std::time_t tt = m.get<MarRiskCounter::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}