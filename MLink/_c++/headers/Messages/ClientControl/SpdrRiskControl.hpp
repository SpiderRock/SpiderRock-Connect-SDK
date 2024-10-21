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

    #ifndef _margin_limit_day__GUARD__
    #define _margin_limit_day__GUARD__
    DECL_STRONG_TYPE(margin_limit_day, float);
    #endif//_margin_limit_day__GUARD__

    #ifndef _open_exposure_limit__GUARD__
    #define _open_exposure_limit__GUARD__
    DECL_STRONG_TYPE(open_exposure_limit, float);
    #endif//_open_exposure_limit__GUARD__

    #ifndef _max_day_ddelta_ln__GUARD__
    #define _max_day_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(max_day_ddelta_ln, float);
    #endif//_max_day_ddelta_ln__GUARD__

    #ifndef _max_day_ddelta_sh__GUARD__
    #define _max_day_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(max_day_ddelta_sh, float);
    #endif//_max_day_ddelta_sh__GUARD__

    #ifndef _max_day_ddelta_abs__GUARD__
    #define _max_day_ddelta_abs__GUARD__
    DECL_STRONG_TYPE(max_day_ddelta_abs, float);
    #endif//_max_day_ddelta_abs__GUARD__

    #ifndef _max_day_wt_vega_ln__GUARD__
    #define _max_day_wt_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_day_wt_vega_ln, float);
    #endif//_max_day_wt_vega_ln__GUARD__

    #ifndef _max_day_wt_vega_sh__GUARD__
    #define _max_day_wt_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_day_wt_vega_sh, float);
    #endif//_max_day_wt_vega_sh__GUARD__

    #ifndef _max_day_wt_vega_abs__GUARD__
    #define _max_day_wt_vega_abs__GUARD__
    DECL_STRONG_TYPE(max_day_wt_vega_abs, float);
    #endif//_max_day_wt_vega_abs__GUARD__

    #ifndef _max_day_nvalue_ln__GUARD__
    #define _max_day_nvalue_ln__GUARD__
    DECL_STRONG_TYPE(max_day_nvalue_ln, float);
    #endif//_max_day_nvalue_ln__GUARD__

    #ifndef _max_day_nvalue_sh__GUARD__
    #define _max_day_nvalue_sh__GUARD__
    DECL_STRONG_TYPE(max_day_nvalue_sh, float);
    #endif//_max_day_nvalue_sh__GUARD__

    #ifndef _max_day_nvalue_abs__GUARD__
    #define _max_day_nvalue_abs__GUARD__
    DECL_STRONG_TYPE(max_day_nvalue_abs, float);
    #endif//_max_day_nvalue_abs__GUARD__

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

    
    class SpdrRiskControl_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const risk_control_key & value) { set_risk_control_key(value); }
        void set(const risk_control_level & value) { set_risk_control_level(value); }
        void set(const risk_firm & value) { set_risk_firm(value); }
        void set(const is_test_accnt & value) { set_is_test_accnt(value); }


        SpdrRiskControl_PKey() {}

        virtual ~SpdrRiskControl_PKey() {
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
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(12,tickerKeyLayout);
            }
            if ( IncludeRiskControlKey()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_risk_control_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskControlLevel>(m_risk_control_level)));
            if ( IncludeRiskFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(15,m_risk_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(16,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 12, tickerKeyLayout);
            }
            if ( IncludeRiskControlKey()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_risk_control_key));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskControlLevel>(m_risk_control_level)));
            if ( IncludeRiskFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,15,static_cast<string>(m_risk_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,16,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt)));
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
                    case 12: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {m_risk_control_key = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 14: {m_risk_control_level = static_cast<spiderrock::protobuf::api::RiskControlLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 15: {m_risk_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 16: {m_is_test_accnt = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrRiskControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrRiskControl_PKey;
        using stk_enabled = spiderrock::protobuf::api::stk_enabled;
        using fut_enabled = spiderrock::protobuf::api::fut_enabled;
        using opt_enabled = spiderrock::protobuf::api::opt_enabled;
        using margin_limit_day = spiderrock::protobuf::api::margin_limit_day;
        using open_exposure_limit = spiderrock::protobuf::api::open_exposure_limit;
        using max_day_ddelta_ln = spiderrock::protobuf::api::max_day_ddelta_ln;
        using max_day_ddelta_sh = spiderrock::protobuf::api::max_day_ddelta_sh;
        using max_day_ddelta_abs = spiderrock::protobuf::api::max_day_ddelta_abs;
        using max_day_wt_vega_ln = spiderrock::protobuf::api::max_day_wt_vega_ln;
        using max_day_wt_vega_sh = spiderrock::protobuf::api::max_day_wt_vega_sh;
        using max_day_wt_vega_abs = spiderrock::protobuf::api::max_day_wt_vega_abs;
        using max_day_nvalue_ln = spiderrock::protobuf::api::max_day_nvalue_ln;
        using max_day_nvalue_sh = spiderrock::protobuf::api::max_day_nvalue_sh;
        using max_day_nvalue_abs = spiderrock::protobuf::api::max_day_nvalue_abs;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        stk_enabled m_stk_enabled{};
        fut_enabled m_fut_enabled{};
        opt_enabled m_opt_enabled{};
        margin_limit_day m_margin_limit_day{};
        open_exposure_limit m_open_exposure_limit{};
        max_day_ddelta_ln m_max_day_ddelta_ln{};
        max_day_ddelta_sh m_max_day_ddelta_sh{};
        max_day_ddelta_abs m_max_day_ddelta_abs{};
        max_day_wt_vega_ln m_max_day_wt_vega_ln{};
        max_day_wt_vega_sh m_max_day_wt_vega_sh{};
        max_day_wt_vega_abs m_max_day_wt_vega_abs{};
        max_day_nvalue_ln m_max_day_nvalue_ln{};
        max_day_nvalue_sh m_max_day_nvalue_sh{};
        max_day_nvalue_abs m_max_day_nvalue_abs{};
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
        margin_limit_day get_margin_limit_day() const {
            return m_margin_limit_day;
        }		
        open_exposure_limit get_open_exposure_limit() const {
            return m_open_exposure_limit;
        }		
        max_day_ddelta_ln get_max_day_ddelta_ln() const {
            return m_max_day_ddelta_ln;
        }		
        max_day_ddelta_sh get_max_day_ddelta_sh() const {
            return m_max_day_ddelta_sh;
        }		
        max_day_ddelta_abs get_max_day_ddelta_abs() const {
            return m_max_day_ddelta_abs;
        }		
        max_day_wt_vega_ln get_max_day_wt_vega_ln() const {
            return m_max_day_wt_vega_ln;
        }		
        max_day_wt_vega_sh get_max_day_wt_vega_sh() const {
            return m_max_day_wt_vega_sh;
        }		
        max_day_wt_vega_abs get_max_day_wt_vega_abs() const {
            return m_max_day_wt_vega_abs;
        }		
        max_day_nvalue_ln get_max_day_nvalue_ln() const {
            return m_max_day_nvalue_ln;
        }		
        max_day_nvalue_sh get_max_day_nvalue_sh() const {
            return m_max_day_nvalue_sh;
        }		
        max_day_nvalue_abs get_max_day_nvalue_abs() const {
            return m_max_day_nvalue_abs;
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
        void set_margin_limit_day(const margin_limit_day& value)  {
            m_margin_limit_day = value;
        }
        void set_open_exposure_limit(const open_exposure_limit& value)  {
            m_open_exposure_limit = value;
        }
        void set_max_day_ddelta_ln(const max_day_ddelta_ln& value)  {
            m_max_day_ddelta_ln = value;
        }
        void set_max_day_ddelta_sh(const max_day_ddelta_sh& value)  {
            m_max_day_ddelta_sh = value;
        }
        void set_max_day_ddelta_abs(const max_day_ddelta_abs& value)  {
            m_max_day_ddelta_abs = value;
        }
        void set_max_day_wt_vega_ln(const max_day_wt_vega_ln& value)  {
            m_max_day_wt_vega_ln = value;
        }
        void set_max_day_wt_vega_sh(const max_day_wt_vega_sh& value)  {
            m_max_day_wt_vega_sh = value;
        }
        void set_max_day_wt_vega_abs(const max_day_wt_vega_abs& value)  {
            m_max_day_wt_vega_abs = value;
        }
        void set_max_day_nvalue_ln(const max_day_nvalue_ln& value)  {
            m_max_day_nvalue_ln = value;
        }
        void set_max_day_nvalue_sh(const max_day_nvalue_sh& value)  {
            m_max_day_nvalue_sh = value;
        }
        void set_max_day_nvalue_abs(const max_day_nvalue_abs& value)  {
            m_max_day_nvalue_abs = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrRiskControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const margin_limit_day & value) {
            set_margin_limit_day(value);
        }
        void set(const open_exposure_limit & value) {
            set_open_exposure_limit(value);
        }
        void set(const max_day_ddelta_ln & value) {
            set_max_day_ddelta_ln(value);
        }
        void set(const max_day_ddelta_sh & value) {
            set_max_day_ddelta_sh(value);
        }
        void set(const max_day_ddelta_abs & value) {
            set_max_day_ddelta_abs(value);
        }
        void set(const max_day_wt_vega_ln & value) {
            set_max_day_wt_vega_ln(value);
        }
        void set(const max_day_wt_vega_sh & value) {
            set_max_day_wt_vega_sh(value);
        }
        void set(const max_day_wt_vega_abs & value) {
            set_max_day_wt_vega_abs(value);
        }
        void set(const max_day_nvalue_ln & value) {
            set_max_day_nvalue_ln(value);
        }
        void set(const max_day_nvalue_sh & value) {
            set_max_day_nvalue_sh(value);
        }
        void set(const max_day_nvalue_abs & value) {
            set_max_day_nvalue_abs(value);
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

        void set(const SpdrRiskControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_stk_enabled);
            set(value.m_fut_enabled);
            set(value.m_opt_enabled);
            set(value.m_margin_limit_day);
            set(value.m_open_exposure_limit);
            set(value.m_max_day_ddelta_ln);
            set(value.m_max_day_ddelta_sh);
            set(value.m_max_day_ddelta_abs);
            set(value.m_max_day_wt_vega_ln);
            set(value.m_max_day_wt_vega_sh);
            set(value.m_max_day_wt_vega_abs);
            set(value.m_max_day_nvalue_ln);
            set(value.m_max_day_nvalue_sh);
            set(value.m_max_day_nvalue_abs);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrRiskControl() {
            m__meta.set_message_type("SpdrRiskControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4560, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4560, length);
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
             *this = SpdrRiskControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeMarginLimitDay() const {
            return !(m_margin_limit_day == 0.0);
        }
        bool IncludeOpenExposureLimit() const {
            return !(m_open_exposure_limit == 0.0);
        }
        bool IncludeMaxDayDdeltaLn() const {
            return !(m_max_day_ddelta_ln == 0.0);
        }
        bool IncludeMaxDayDdeltaSh() const {
            return !(m_max_day_ddelta_sh == 0.0);
        }
        bool IncludeMaxDayDdeltaAbs() const {
            return !(m_max_day_ddelta_abs == 0.0);
        }
        bool IncludeMaxDayWtVegaLn() const {
            return !(m_max_day_wt_vega_ln == 0.0);
        }
        bool IncludeMaxDayWtVegaSh() const {
            return !(m_max_day_wt_vega_sh == 0.0);
        }
        bool IncludeMaxDayWtVegaAbs() const {
            return !(m_max_day_wt_vega_abs == 0.0);
        }
        bool IncludeMaxDayNvalueLn() const {
            return !(m_max_day_nvalue_ln == 0.0);
        }
        bool IncludeMaxDayNvalueSh() const {
            return !(m_max_day_nvalue_sh == 0.0);
        }
        bool IncludeMaxDayNvalueAbs() const {
            return !(m_max_day_nvalue_abs == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(197,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(198,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            if ( IncludeMarginLimitDay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(200,m_margin_limit_day);
            }
            if ( IncludeOpenExposureLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(201,m_open_exposure_limit);
            }
            if ( IncludeMaxDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_max_day_ddelta_ln);
            }
            if ( IncludeMaxDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_max_day_ddelta_sh);
            }
            if ( IncludeMaxDayDdeltaAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_max_day_ddelta_abs);
            }
            if ( IncludeMaxDayWtVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_max_day_wt_vega_ln);
            }
            if ( IncludeMaxDayWtVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_max_day_wt_vega_sh);
            }
            if ( IncludeMaxDayWtVegaAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_max_day_wt_vega_abs);
            }
            if ( IncludeMaxDayNvalueLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(202,m_max_day_nvalue_ln);
            }
            if ( IncludeMaxDayNvalueSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(203,m_max_day_nvalue_sh);
            }
            if ( IncludeMaxDayNvalueAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(204,m_max_day_nvalue_abs);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(178, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,197,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,198,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,199,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            if ( IncludeMarginLimitDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,200,m_margin_limit_day);
            }
            if ( IncludeOpenExposureLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,201,m_open_exposure_limit);
            }
            if ( IncludeMaxDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_max_day_ddelta_ln);
            }
            if ( IncludeMaxDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_max_day_ddelta_sh);
            }
            if ( IncludeMaxDayDdeltaAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_max_day_ddelta_abs);
            }
            if ( IncludeMaxDayWtVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_max_day_wt_vega_ln);
            }
            if ( IncludeMaxDayWtVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_max_day_wt_vega_sh);
            }
            if ( IncludeMaxDayWtVegaAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_max_day_wt_vega_abs);
            }
            if ( IncludeMaxDayNvalueLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,202,m_max_day_nvalue_ln);
            }
            if ( IncludeMaxDayNvalueSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,203,m_max_day_nvalue_sh);
            }
            if ( IncludeMaxDayNvalueAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,204,m_max_day_nvalue_abs);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 178, m_timestamp);
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
                    case 197: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 198: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 200: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_margin_limit_day = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 201: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_open_exposure_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_ddelta_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_wt_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_wt_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_wt_vega_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_nvalue_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 203: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_nvalue_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 204: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_day_nvalue_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {
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

    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::_meta>() const { return SpdrRiskControl::_meta{ m__meta}; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::pkey>() const { return SpdrRiskControl::pkey{ m_pkey}; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::stk_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_stk_enabled)); }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::fut_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_fut_enabled)); }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::opt_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_opt_enabled)); }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::margin_limit_day>() const { return m_margin_limit_day; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::open_exposure_limit>() const { return m_open_exposure_limit; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_ddelta_ln>() const { return m_max_day_ddelta_ln; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_ddelta_sh>() const { return m_max_day_ddelta_sh; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_ddelta_abs>() const { return m_max_day_ddelta_abs; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_wt_vega_ln>() const { return m_max_day_wt_vega_ln; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_wt_vega_sh>() const { return m_max_day_wt_vega_sh; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_wt_vega_abs>() const { return m_max_day_wt_vega_abs; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_nvalue_ln>() const { return m_max_day_nvalue_ln; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_nvalue_sh>() const { return m_max_day_nvalue_sh; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::max_day_nvalue_abs>() const { return m_max_day_nvalue_abs; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrRiskControl::get<SpdrRiskControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrRiskControl_PKey::get<SpdrRiskControl_PKey::ticker>() const { return SpdrRiskControl_PKey::ticker{m_ticker}; }
    template<> inline const auto SpdrRiskControl_PKey::get<SpdrRiskControl_PKey::risk_control_key>() const { return m_risk_control_key; }
    template<> inline const auto SpdrRiskControl_PKey::get<SpdrRiskControl_PKey::risk_control_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RiskControlLevel>(m_risk_control_level));}
    template<> inline const auto SpdrRiskControl_PKey::get<SpdrRiskControl_PKey::risk_firm>() const { return m_risk_firm; }
    template<> inline const auto SpdrRiskControl_PKey::get<SpdrRiskControl_PKey::is_test_accnt>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_test_accnt));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskControl_PKey& m) {
        o << "\"ticker\":{" << m.get<SpdrRiskControl_PKey::ticker>() << "}";
        o << ",\"risk_control_key\":\"" << m.get<SpdrRiskControl_PKey::risk_control_key>() << "\"";
        o << ",\"risk_control_level\":" << (int64_t)m.get<SpdrRiskControl_PKey::risk_control_level>();
        o << ",\"risk_firm\":\"" << m.get<SpdrRiskControl_PKey::risk_firm>() << "\"";
        o << ",\"is_test_accnt\":" << (int64_t)m.get<SpdrRiskControl_PKey::is_test_accnt>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrRiskControl& m) {
        o << "\"_meta\":{" << m.get<SpdrRiskControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrRiskControl::pkey>() << "}";
        o << ",\"stk_enabled\":" << (int64_t)m.get<SpdrRiskControl::stk_enabled>();
        o << ",\"fut_enabled\":" << (int64_t)m.get<SpdrRiskControl::fut_enabled>();
        o << ",\"opt_enabled\":" << (int64_t)m.get<SpdrRiskControl::opt_enabled>();
        o << ",\"margin_limit_day\":" << m.get<SpdrRiskControl::margin_limit_day>();
        o << ",\"open_exposure_limit\":" << m.get<SpdrRiskControl::open_exposure_limit>();
        o << ",\"max_day_ddelta_ln\":" << m.get<SpdrRiskControl::max_day_ddelta_ln>();
        o << ",\"max_day_ddelta_sh\":" << m.get<SpdrRiskControl::max_day_ddelta_sh>();
        o << ",\"max_day_ddelta_abs\":" << m.get<SpdrRiskControl::max_day_ddelta_abs>();
        o << ",\"max_day_wt_vega_ln\":" << m.get<SpdrRiskControl::max_day_wt_vega_ln>();
        o << ",\"max_day_wt_vega_sh\":" << m.get<SpdrRiskControl::max_day_wt_vega_sh>();
        o << ",\"max_day_wt_vega_abs\":" << m.get<SpdrRiskControl::max_day_wt_vega_abs>();
        o << ",\"max_day_nvalue_ln\":" << m.get<SpdrRiskControl::max_day_nvalue_ln>();
        o << ",\"max_day_nvalue_sh\":" << m.get<SpdrRiskControl::max_day_nvalue_sh>();
        o << ",\"max_day_nvalue_abs\":" << m.get<SpdrRiskControl::max_day_nvalue_abs>();
        o << ",\"modified_by\":\"" << m.get<SpdrRiskControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrRiskControl::modified_in>();
        {
            std::time_t tt = m.get<SpdrRiskControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}