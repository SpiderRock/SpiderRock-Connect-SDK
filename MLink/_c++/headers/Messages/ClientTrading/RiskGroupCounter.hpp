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

    #ifndef _change_reason__GUARD__
    #define _change_reason__GUARD__
    DECL_STRONG_TYPE(change_reason, spiderrock::protobuf::api::ChangeReason);
    #endif//_change_reason__GUARD__

    #ifndef _opt_qty_bot_ioc_filled__GUARD__
    #define _opt_qty_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(opt_qty_bot_ioc_filled, float);
    #endif//_opt_qty_bot_ioc_filled__GUARD__

    #ifndef _opt_qty_sld_ioc_filled__GUARD__
    #define _opt_qty_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(opt_qty_sld_ioc_filled, float);
    #endif//_opt_qty_sld_ioc_filled__GUARD__

    #ifndef _dd_bot_ioc_filled__GUARD__
    #define _dd_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(dd_bot_ioc_filled, float);
    #endif//_dd_bot_ioc_filled__GUARD__

    #ifndef _dd_sld_ioc_filled__GUARD__
    #define _dd_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(dd_sld_ioc_filled, float);
    #endif//_dd_sld_ioc_filled__GUARD__

    #ifndef _ve_bot_ioc_filled__GUARD__
    #define _ve_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(ve_bot_ioc_filled, float);
    #endif//_ve_bot_ioc_filled__GUARD__

    #ifndef _ve_sld_ioc_filled__GUARD__
    #define _ve_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(ve_sld_ioc_filled, float);
    #endif//_ve_sld_ioc_filled__GUARD__

    #ifndef _wt_ve_bot_ioc_filled__GUARD__
    #define _wt_ve_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(wt_ve_bot_ioc_filled, float);
    #endif//_wt_ve_bot_ioc_filled__GUARD__

    #ifndef _wt_ve_sld_ioc_filled__GUARD__
    #define _wt_ve_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(wt_ve_sld_ioc_filled, float);
    #endif//_wt_ve_sld_ioc_filled__GUARD__

    #ifndef _nv_bot_ioc_filled__GUARD__
    #define _nv_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(nv_bot_ioc_filled, float);
    #endif//_nv_bot_ioc_filled__GUARD__

    #ifndef _nv_sld_ioc_filled__GUARD__
    #define _nv_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(nv_sld_ioc_filled, float);
    #endif//_nv_sld_ioc_filled__GUARD__

    #ifndef _rm1_bot_ioc_filled__GUARD__
    #define _rm1_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm1_bot_ioc_filled, float);
    #endif//_rm1_bot_ioc_filled__GUARD__

    #ifndef _rm1_sld_ioc_filled__GUARD__
    #define _rm1_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm1_sld_ioc_filled, float);
    #endif//_rm1_sld_ioc_filled__GUARD__

    #ifndef _rm2_bot_ioc_filled__GUARD__
    #define _rm2_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm2_bot_ioc_filled, float);
    #endif//_rm2_bot_ioc_filled__GUARD__

    #ifndef _rm2_sld_ioc_filled__GUARD__
    #define _rm2_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm2_sld_ioc_filled, float);
    #endif//_rm2_sld_ioc_filled__GUARD__

    #ifndef _rm3_bot_ioc_filled__GUARD__
    #define _rm3_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm3_bot_ioc_filled, float);
    #endif//_rm3_bot_ioc_filled__GUARD__

    #ifndef _rm3_sld_ioc_filled__GUARD__
    #define _rm3_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm3_sld_ioc_filled, float);
    #endif//_rm3_sld_ioc_filled__GUARD__

    #ifndef _rm4_bot_ioc_filled__GUARD__
    #define _rm4_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm4_bot_ioc_filled, float);
    #endif//_rm4_bot_ioc_filled__GUARD__

    #ifndef _rm4_sld_ioc_filled__GUARD__
    #define _rm4_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm4_sld_ioc_filled, float);
    #endif//_rm4_sld_ioc_filled__GUARD__

    #ifndef _rm5_bot_ioc_filled__GUARD__
    #define _rm5_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm5_bot_ioc_filled, float);
    #endif//_rm5_bot_ioc_filled__GUARD__

    #ifndef _rm5_sld_ioc_filled__GUARD__
    #define _rm5_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm5_sld_ioc_filled, float);
    #endif//_rm5_sld_ioc_filled__GUARD__

    #ifndef _rm6_bot_ioc_filled__GUARD__
    #define _rm6_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm6_bot_ioc_filled, float);
    #endif//_rm6_bot_ioc_filled__GUARD__

    #ifndef _rm6_sld_ioc_filled__GUARD__
    #define _rm6_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm6_sld_ioc_filled, float);
    #endif//_rm6_sld_ioc_filled__GUARD__

    #ifndef _rm7_bot_ioc_filled__GUARD__
    #define _rm7_bot_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm7_bot_ioc_filled, float);
    #endif//_rm7_bot_ioc_filled__GUARD__

    #ifndef _rm7_sld_ioc_filled__GUARD__
    #define _rm7_sld_ioc_filled__GUARD__
    DECL_STRONG_TYPE(rm7_sld_ioc_filled, float);
    #endif//_rm7_sld_ioc_filled__GUARD__

    #ifndef _counter__GUARD__
    #define _counter__GUARD__
    DECL_STRONG_TYPE(counter, int32);
    #endif//_counter__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _risk_firm__GUARD__
    #define _risk_firm__GUARD__
    DECL_STRONG_TYPE(risk_firm, string);
    #endif//_risk_firm__GUARD__

    
    class RiskGroupCounter_PKey {
        public:
        //using statements for all types used in this class
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using accnt = spiderrock::protobuf::api::accnt;
        using risk_firm = spiderrock::protobuf::api::risk_firm;

        private:
        risk_group_id m_risk_group_id{};
        accnt m_accnt{};
        risk_firm m_risk_firm{};

        public:
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
        risk_firm get_risk_firm() const {
            return m_risk_firm;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_risk_firm(const risk_firm& value)  {
            m_risk_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskGroupCounter_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskGroupCounter_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const risk_group_id & value) { set_risk_group_id(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const risk_firm & value) { set_risk_firm(value); }


        RiskGroupCounter_PKey() {}

        virtual ~RiskGroupCounter_PKey() {
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
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeRiskFirm() const {
            return !(m_risk_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(13,m_risk_group_id);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeRiskFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_risk_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,13,m_risk_group_id);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeRiskFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_risk_firm));
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
                    case 13: {m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_risk_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RiskGroupCounter {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RiskGroupCounter_PKey;
        using sys_realm = spiderrock::protobuf::api::sys_realm;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using risk_engine = spiderrock::protobuf::api::risk_engine;
        using change_reason = spiderrock::protobuf::api::change_reason;
        using opt_qty_bot_ioc_filled = spiderrock::protobuf::api::opt_qty_bot_ioc_filled;
        using opt_qty_sld_ioc_filled = spiderrock::protobuf::api::opt_qty_sld_ioc_filled;
        using dd_bot_ioc_filled = spiderrock::protobuf::api::dd_bot_ioc_filled;
        using dd_sld_ioc_filled = spiderrock::protobuf::api::dd_sld_ioc_filled;
        using ve_bot_ioc_filled = spiderrock::protobuf::api::ve_bot_ioc_filled;
        using ve_sld_ioc_filled = spiderrock::protobuf::api::ve_sld_ioc_filled;
        using wt_ve_bot_ioc_filled = spiderrock::protobuf::api::wt_ve_bot_ioc_filled;
        using wt_ve_sld_ioc_filled = spiderrock::protobuf::api::wt_ve_sld_ioc_filled;
        using nv_bot_ioc_filled = spiderrock::protobuf::api::nv_bot_ioc_filled;
        using nv_sld_ioc_filled = spiderrock::protobuf::api::nv_sld_ioc_filled;
        using rm1_bot_ioc_filled = spiderrock::protobuf::api::rm1_bot_ioc_filled;
        using rm1_sld_ioc_filled = spiderrock::protobuf::api::rm1_sld_ioc_filled;
        using rm2_bot_ioc_filled = spiderrock::protobuf::api::rm2_bot_ioc_filled;
        using rm2_sld_ioc_filled = spiderrock::protobuf::api::rm2_sld_ioc_filled;
        using rm3_bot_ioc_filled = spiderrock::protobuf::api::rm3_bot_ioc_filled;
        using rm3_sld_ioc_filled = spiderrock::protobuf::api::rm3_sld_ioc_filled;
        using rm4_bot_ioc_filled = spiderrock::protobuf::api::rm4_bot_ioc_filled;
        using rm4_sld_ioc_filled = spiderrock::protobuf::api::rm4_sld_ioc_filled;
        using rm5_bot_ioc_filled = spiderrock::protobuf::api::rm5_bot_ioc_filled;
        using rm5_sld_ioc_filled = spiderrock::protobuf::api::rm5_sld_ioc_filled;
        using rm6_bot_ioc_filled = spiderrock::protobuf::api::rm6_bot_ioc_filled;
        using rm6_sld_ioc_filled = spiderrock::protobuf::api::rm6_sld_ioc_filled;
        using rm7_bot_ioc_filled = spiderrock::protobuf::api::rm7_bot_ioc_filled;
        using rm7_sld_ioc_filled = spiderrock::protobuf::api::rm7_sld_ioc_filled;
        using counter = spiderrock::protobuf::api::counter;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_realm m_sys_realm{};
        sys_environment m_sys_environment{};
        risk_engine m_risk_engine{};
        change_reason m_change_reason{};
        opt_qty_bot_ioc_filled m_opt_qty_bot_ioc_filled{};
        opt_qty_sld_ioc_filled m_opt_qty_sld_ioc_filled{};
        dd_bot_ioc_filled m_dd_bot_ioc_filled{};
        dd_sld_ioc_filled m_dd_sld_ioc_filled{};
        ve_bot_ioc_filled m_ve_bot_ioc_filled{};
        ve_sld_ioc_filled m_ve_sld_ioc_filled{};
        wt_ve_bot_ioc_filled m_wt_ve_bot_ioc_filled{};
        wt_ve_sld_ioc_filled m_wt_ve_sld_ioc_filled{};
        nv_bot_ioc_filled m_nv_bot_ioc_filled{};
        nv_sld_ioc_filled m_nv_sld_ioc_filled{};
        rm1_bot_ioc_filled m_rm1_bot_ioc_filled{};
        rm1_sld_ioc_filled m_rm1_sld_ioc_filled{};
        rm2_bot_ioc_filled m_rm2_bot_ioc_filled{};
        rm2_sld_ioc_filled m_rm2_sld_ioc_filled{};
        rm3_bot_ioc_filled m_rm3_bot_ioc_filled{};
        rm3_sld_ioc_filled m_rm3_sld_ioc_filled{};
        rm4_bot_ioc_filled m_rm4_bot_ioc_filled{};
        rm4_sld_ioc_filled m_rm4_sld_ioc_filled{};
        rm5_bot_ioc_filled m_rm5_bot_ioc_filled{};
        rm5_sld_ioc_filled m_rm5_sld_ioc_filled{};
        rm6_bot_ioc_filled m_rm6_bot_ioc_filled{};
        rm6_sld_ioc_filled m_rm6_sld_ioc_filled{};
        rm7_bot_ioc_filled m_rm7_bot_ioc_filled{};
        rm7_sld_ioc_filled m_rm7_sld_ioc_filled{};
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
        change_reason get_change_reason() const {
            return m_change_reason;
        }		
        opt_qty_bot_ioc_filled get_opt_qty_bot_ioc_filled() const {
            return m_opt_qty_bot_ioc_filled;
        }		
        opt_qty_sld_ioc_filled get_opt_qty_sld_ioc_filled() const {
            return m_opt_qty_sld_ioc_filled;
        }		
        dd_bot_ioc_filled get_dd_bot_ioc_filled() const {
            return m_dd_bot_ioc_filled;
        }		
        dd_sld_ioc_filled get_dd_sld_ioc_filled() const {
            return m_dd_sld_ioc_filled;
        }		
        ve_bot_ioc_filled get_ve_bot_ioc_filled() const {
            return m_ve_bot_ioc_filled;
        }		
        ve_sld_ioc_filled get_ve_sld_ioc_filled() const {
            return m_ve_sld_ioc_filled;
        }		
        wt_ve_bot_ioc_filled get_wt_ve_bot_ioc_filled() const {
            return m_wt_ve_bot_ioc_filled;
        }		
        wt_ve_sld_ioc_filled get_wt_ve_sld_ioc_filled() const {
            return m_wt_ve_sld_ioc_filled;
        }		
        nv_bot_ioc_filled get_nv_bot_ioc_filled() const {
            return m_nv_bot_ioc_filled;
        }		
        nv_sld_ioc_filled get_nv_sld_ioc_filled() const {
            return m_nv_sld_ioc_filled;
        }		
        rm1_bot_ioc_filled get_rm1_bot_ioc_filled() const {
            return m_rm1_bot_ioc_filled;
        }		
        rm1_sld_ioc_filled get_rm1_sld_ioc_filled() const {
            return m_rm1_sld_ioc_filled;
        }		
        rm2_bot_ioc_filled get_rm2_bot_ioc_filled() const {
            return m_rm2_bot_ioc_filled;
        }		
        rm2_sld_ioc_filled get_rm2_sld_ioc_filled() const {
            return m_rm2_sld_ioc_filled;
        }		
        rm3_bot_ioc_filled get_rm3_bot_ioc_filled() const {
            return m_rm3_bot_ioc_filled;
        }		
        rm3_sld_ioc_filled get_rm3_sld_ioc_filled() const {
            return m_rm3_sld_ioc_filled;
        }		
        rm4_bot_ioc_filled get_rm4_bot_ioc_filled() const {
            return m_rm4_bot_ioc_filled;
        }		
        rm4_sld_ioc_filled get_rm4_sld_ioc_filled() const {
            return m_rm4_sld_ioc_filled;
        }		
        rm5_bot_ioc_filled get_rm5_bot_ioc_filled() const {
            return m_rm5_bot_ioc_filled;
        }		
        rm5_sld_ioc_filled get_rm5_sld_ioc_filled() const {
            return m_rm5_sld_ioc_filled;
        }		
        rm6_bot_ioc_filled get_rm6_bot_ioc_filled() const {
            return m_rm6_bot_ioc_filled;
        }		
        rm6_sld_ioc_filled get_rm6_sld_ioc_filled() const {
            return m_rm6_sld_ioc_filled;
        }		
        rm7_bot_ioc_filled get_rm7_bot_ioc_filled() const {
            return m_rm7_bot_ioc_filled;
        }		
        rm7_sld_ioc_filled get_rm7_sld_ioc_filled() const {
            return m_rm7_sld_ioc_filled;
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
        void set_change_reason(const change_reason& value)  {
            m_change_reason = value;
        }
        void set_opt_qty_bot_ioc_filled(const opt_qty_bot_ioc_filled& value)  {
            m_opt_qty_bot_ioc_filled = value;
        }
        void set_opt_qty_sld_ioc_filled(const opt_qty_sld_ioc_filled& value)  {
            m_opt_qty_sld_ioc_filled = value;
        }
        void set_dd_bot_ioc_filled(const dd_bot_ioc_filled& value)  {
            m_dd_bot_ioc_filled = value;
        }
        void set_dd_sld_ioc_filled(const dd_sld_ioc_filled& value)  {
            m_dd_sld_ioc_filled = value;
        }
        void set_ve_bot_ioc_filled(const ve_bot_ioc_filled& value)  {
            m_ve_bot_ioc_filled = value;
        }
        void set_ve_sld_ioc_filled(const ve_sld_ioc_filled& value)  {
            m_ve_sld_ioc_filled = value;
        }
        void set_wt_ve_bot_ioc_filled(const wt_ve_bot_ioc_filled& value)  {
            m_wt_ve_bot_ioc_filled = value;
        }
        void set_wt_ve_sld_ioc_filled(const wt_ve_sld_ioc_filled& value)  {
            m_wt_ve_sld_ioc_filled = value;
        }
        void set_nv_bot_ioc_filled(const nv_bot_ioc_filled& value)  {
            m_nv_bot_ioc_filled = value;
        }
        void set_nv_sld_ioc_filled(const nv_sld_ioc_filled& value)  {
            m_nv_sld_ioc_filled = value;
        }
        void set_rm1_bot_ioc_filled(const rm1_bot_ioc_filled& value)  {
            m_rm1_bot_ioc_filled = value;
        }
        void set_rm1_sld_ioc_filled(const rm1_sld_ioc_filled& value)  {
            m_rm1_sld_ioc_filled = value;
        }
        void set_rm2_bot_ioc_filled(const rm2_bot_ioc_filled& value)  {
            m_rm2_bot_ioc_filled = value;
        }
        void set_rm2_sld_ioc_filled(const rm2_sld_ioc_filled& value)  {
            m_rm2_sld_ioc_filled = value;
        }
        void set_rm3_bot_ioc_filled(const rm3_bot_ioc_filled& value)  {
            m_rm3_bot_ioc_filled = value;
        }
        void set_rm3_sld_ioc_filled(const rm3_sld_ioc_filled& value)  {
            m_rm3_sld_ioc_filled = value;
        }
        void set_rm4_bot_ioc_filled(const rm4_bot_ioc_filled& value)  {
            m_rm4_bot_ioc_filled = value;
        }
        void set_rm4_sld_ioc_filled(const rm4_sld_ioc_filled& value)  {
            m_rm4_sld_ioc_filled = value;
        }
        void set_rm5_bot_ioc_filled(const rm5_bot_ioc_filled& value)  {
            m_rm5_bot_ioc_filled = value;
        }
        void set_rm5_sld_ioc_filled(const rm5_sld_ioc_filled& value)  {
            m_rm5_sld_ioc_filled = value;
        }
        void set_rm6_bot_ioc_filled(const rm6_bot_ioc_filled& value)  {
            m_rm6_bot_ioc_filled = value;
        }
        void set_rm6_sld_ioc_filled(const rm6_sld_ioc_filled& value)  {
            m_rm6_sld_ioc_filled = value;
        }
        void set_rm7_bot_ioc_filled(const rm7_bot_ioc_filled& value)  {
            m_rm7_bot_ioc_filled = value;
        }
        void set_rm7_sld_ioc_filled(const rm7_sld_ioc_filled& value)  {
            m_rm7_sld_ioc_filled = value;
        }
        void set_counter(const counter& value)  {
            m_counter = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskGroupCounter::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const change_reason & value) {
            set_change_reason(value);
        }
        void set(const opt_qty_bot_ioc_filled & value) {
            set_opt_qty_bot_ioc_filled(value);
        }
        void set(const opt_qty_sld_ioc_filled & value) {
            set_opt_qty_sld_ioc_filled(value);
        }
        void set(const dd_bot_ioc_filled & value) {
            set_dd_bot_ioc_filled(value);
        }
        void set(const dd_sld_ioc_filled & value) {
            set_dd_sld_ioc_filled(value);
        }
        void set(const ve_bot_ioc_filled & value) {
            set_ve_bot_ioc_filled(value);
        }
        void set(const ve_sld_ioc_filled & value) {
            set_ve_sld_ioc_filled(value);
        }
        void set(const wt_ve_bot_ioc_filled & value) {
            set_wt_ve_bot_ioc_filled(value);
        }
        void set(const wt_ve_sld_ioc_filled & value) {
            set_wt_ve_sld_ioc_filled(value);
        }
        void set(const nv_bot_ioc_filled & value) {
            set_nv_bot_ioc_filled(value);
        }
        void set(const nv_sld_ioc_filled & value) {
            set_nv_sld_ioc_filled(value);
        }
        void set(const rm1_bot_ioc_filled & value) {
            set_rm1_bot_ioc_filled(value);
        }
        void set(const rm1_sld_ioc_filled & value) {
            set_rm1_sld_ioc_filled(value);
        }
        void set(const rm2_bot_ioc_filled & value) {
            set_rm2_bot_ioc_filled(value);
        }
        void set(const rm2_sld_ioc_filled & value) {
            set_rm2_sld_ioc_filled(value);
        }
        void set(const rm3_bot_ioc_filled & value) {
            set_rm3_bot_ioc_filled(value);
        }
        void set(const rm3_sld_ioc_filled & value) {
            set_rm3_sld_ioc_filled(value);
        }
        void set(const rm4_bot_ioc_filled & value) {
            set_rm4_bot_ioc_filled(value);
        }
        void set(const rm4_sld_ioc_filled & value) {
            set_rm4_sld_ioc_filled(value);
        }
        void set(const rm5_bot_ioc_filled & value) {
            set_rm5_bot_ioc_filled(value);
        }
        void set(const rm5_sld_ioc_filled & value) {
            set_rm5_sld_ioc_filled(value);
        }
        void set(const rm6_bot_ioc_filled & value) {
            set_rm6_bot_ioc_filled(value);
        }
        void set(const rm6_sld_ioc_filled & value) {
            set_rm6_sld_ioc_filled(value);
        }
        void set(const rm7_bot_ioc_filled & value) {
            set_rm7_bot_ioc_filled(value);
        }
        void set(const rm7_sld_ioc_filled & value) {
            set_rm7_sld_ioc_filled(value);
        }
        void set(const counter & value) {
            set_counter(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const RiskGroupCounter & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_realm);
            set(value.m_sys_environment);
            set(value.m_risk_engine);
            set(value.m_change_reason);
            set(value.m_opt_qty_bot_ioc_filled);
            set(value.m_opt_qty_sld_ioc_filled);
            set(value.m_dd_bot_ioc_filled);
            set(value.m_dd_sld_ioc_filled);
            set(value.m_ve_bot_ioc_filled);
            set(value.m_ve_sld_ioc_filled);
            set(value.m_wt_ve_bot_ioc_filled);
            set(value.m_wt_ve_sld_ioc_filled);
            set(value.m_nv_bot_ioc_filled);
            set(value.m_nv_sld_ioc_filled);
            set(value.m_rm1_bot_ioc_filled);
            set(value.m_rm1_sld_ioc_filled);
            set(value.m_rm2_bot_ioc_filled);
            set(value.m_rm2_sld_ioc_filled);
            set(value.m_rm3_bot_ioc_filled);
            set(value.m_rm3_sld_ioc_filled);
            set(value.m_rm4_bot_ioc_filled);
            set(value.m_rm4_sld_ioc_filled);
            set(value.m_rm5_bot_ioc_filled);
            set(value.m_rm5_sld_ioc_filled);
            set(value.m_rm6_bot_ioc_filled);
            set(value.m_rm6_sld_ioc_filled);
            set(value.m_rm7_bot_ioc_filled);
            set(value.m_rm7_sld_ioc_filled);
            set(value.m_counter);
            set(value.m_timestamp);
        }

        RiskGroupCounter() {
            m__meta.set_message_type("RiskGroupCounter");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4655, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4655, length);
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
             *this = RiskGroupCounter{};
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
        bool IncludeOptQtyBotIocFilled() const {
            return !(m_opt_qty_bot_ioc_filled == 0.0);
        }
        bool IncludeOptQtySldIocFilled() const {
            return !(m_opt_qty_sld_ioc_filled == 0.0);
        }
        bool IncludeDdBotIocFilled() const {
            return !(m_dd_bot_ioc_filled == 0.0);
        }
        bool IncludeDdSldIocFilled() const {
            return !(m_dd_sld_ioc_filled == 0.0);
        }
        bool IncludeVeBotIocFilled() const {
            return !(m_ve_bot_ioc_filled == 0.0);
        }
        bool IncludeVeSldIocFilled() const {
            return !(m_ve_sld_ioc_filled == 0.0);
        }
        bool IncludeWtVeBotIocFilled() const {
            return !(m_wt_ve_bot_ioc_filled == 0.0);
        }
        bool IncludeWtVeSldIocFilled() const {
            return !(m_wt_ve_sld_ioc_filled == 0.0);
        }
        bool IncludeNvBotIocFilled() const {
            return !(m_nv_bot_ioc_filled == 0.0);
        }
        bool IncludeNvSldIocFilled() const {
            return !(m_nv_sld_ioc_filled == 0.0);
        }
        bool IncludeRm1BotIocFilled() const {
            return !(m_rm1_bot_ioc_filled == 0.0);
        }
        bool IncludeRm1SldIocFilled() const {
            return !(m_rm1_sld_ioc_filled == 0.0);
        }
        bool IncludeRm2BotIocFilled() const {
            return !(m_rm2_bot_ioc_filled == 0.0);
        }
        bool IncludeRm2SldIocFilled() const {
            return !(m_rm2_sld_ioc_filled == 0.0);
        }
        bool IncludeRm3BotIocFilled() const {
            return !(m_rm3_bot_ioc_filled == 0.0);
        }
        bool IncludeRm3SldIocFilled() const {
            return !(m_rm3_sld_ioc_filled == 0.0);
        }
        bool IncludeRm4BotIocFilled() const {
            return !(m_rm4_bot_ioc_filled == 0.0);
        }
        bool IncludeRm4SldIocFilled() const {
            return !(m_rm4_sld_ioc_filled == 0.0);
        }
        bool IncludeRm5BotIocFilled() const {
            return !(m_rm5_bot_ioc_filled == 0.0);
        }
        bool IncludeRm5SldIocFilled() const {
            return !(m_rm5_sld_ioc_filled == 0.0);
        }
        bool IncludeRm6BotIocFilled() const {
            return !(m_rm6_bot_ioc_filled == 0.0);
        }
        bool IncludeRm6SldIocFilled() const {
            return !(m_rm6_sld_ioc_filled == 0.0);
        }
        bool IncludeRm7BotIocFilled() const {
            return !(m_rm7_bot_ioc_filled == 0.0);
        }
        bool IncludeRm7SldIocFilled() const {
            return !(m_rm7_sld_ioc_filled == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChangeReason>(m_change_reason)));
            if ( IncludeOptQtyBotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(104,m_opt_qty_bot_ioc_filled);
            }
            if ( IncludeOptQtySldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_opt_qty_sld_ioc_filled);
            }
            if ( IncludeDdBotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_dd_bot_ioc_filled);
            }
            if ( IncludeDdSldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_dd_sld_ioc_filled);
            }
            if ( IncludeVeBotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_ve_bot_ioc_filled);
            }
            if ( IncludeVeSldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_ve_sld_ioc_filled);
            }
            if ( IncludeWtVeBotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_wt_ve_bot_ioc_filled);
            }
            if ( IncludeWtVeSldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_wt_ve_sld_ioc_filled);
            }
            if ( IncludeNvBotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_nv_bot_ioc_filled);
            }
            if ( IncludeNvSldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_nv_sld_ioc_filled);
            }
            if ( IncludeRm1BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_rm1_bot_ioc_filled);
            }
            if ( IncludeRm1SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_rm1_sld_ioc_filled);
            }
            if ( IncludeRm2BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_rm2_bot_ioc_filled);
            }
            if ( IncludeRm2SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(117,m_rm2_sld_ioc_filled);
            }
            if ( IncludeRm3BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_rm3_bot_ioc_filled);
            }
            if ( IncludeRm3SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(119,m_rm3_sld_ioc_filled);
            }
            if ( IncludeRm4BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_rm4_bot_ioc_filled);
            }
            if ( IncludeRm4SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_rm4_sld_ioc_filled);
            }
            if ( IncludeRm5BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_rm5_bot_ioc_filled);
            }
            if ( IncludeRm5SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(123,m_rm5_sld_ioc_filled);
            }
            if ( IncludeRm6BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_rm6_bot_ioc_filled);
            }
            if ( IncludeRm6SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(125,m_rm6_sld_ioc_filled);
            }
            if ( IncludeRm7BotIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(126,m_rm7_bot_ioc_filled);
            }
            if ( IncludeRm7SldIocFilled()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_rm7_sld_ioc_filled);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChangeReason>(m_change_reason)));
            if ( IncludeOptQtyBotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,104,m_opt_qty_bot_ioc_filled);
            }
            if ( IncludeOptQtySldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_opt_qty_sld_ioc_filled);
            }
            if ( IncludeDdBotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_dd_bot_ioc_filled);
            }
            if ( IncludeDdSldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_dd_sld_ioc_filled);
            }
            if ( IncludeVeBotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_ve_bot_ioc_filled);
            }
            if ( IncludeVeSldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_ve_sld_ioc_filled);
            }
            if ( IncludeWtVeBotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_wt_ve_bot_ioc_filled);
            }
            if ( IncludeWtVeSldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_wt_ve_sld_ioc_filled);
            }
            if ( IncludeNvBotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_nv_bot_ioc_filled);
            }
            if ( IncludeNvSldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_nv_sld_ioc_filled);
            }
            if ( IncludeRm1BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_rm1_bot_ioc_filled);
            }
            if ( IncludeRm1SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_rm1_sld_ioc_filled);
            }
            if ( IncludeRm2BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_rm2_bot_ioc_filled);
            }
            if ( IncludeRm2SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,117,m_rm2_sld_ioc_filled);
            }
            if ( IncludeRm3BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_rm3_bot_ioc_filled);
            }
            if ( IncludeRm3SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,119,m_rm3_sld_ioc_filled);
            }
            if ( IncludeRm4BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_rm4_bot_ioc_filled);
            }
            if ( IncludeRm4SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_rm4_sld_ioc_filled);
            }
            if ( IncludeRm5BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_rm5_bot_ioc_filled);
            }
            if ( IncludeRm5SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,123,m_rm5_sld_ioc_filled);
            }
            if ( IncludeRm6BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_rm6_bot_ioc_filled);
            }
            if ( IncludeRm6SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,125,m_rm6_sld_ioc_filled);
            }
            if ( IncludeRm7BotIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,126,m_rm7_bot_ioc_filled);
            }
            if ( IncludeRm7SldIocFilled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_rm7_sld_ioc_filled);
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
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_change_reason = static_cast<spiderrock::protobuf::api::ChangeReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_qty_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_qty_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dd_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dd_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wt_ve_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_nv_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_nv_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm1_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm1_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm2_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm2_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm3_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm3_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm4_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm4_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm5_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm5_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm6_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm6_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm7_bot_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rm7_sld_ioc_filled = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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

    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::_meta>() const { return RiskGroupCounter::_meta{ m__meta}; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::pkey>() const { return RiskGroupCounter::pkey{ m_pkey}; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::sys_realm>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysRealm>( m_sys_realm)); }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::risk_engine>() const { return m_risk_engine; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::change_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ChangeReason>( m_change_reason)); }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::opt_qty_bot_ioc_filled>() const { return m_opt_qty_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::opt_qty_sld_ioc_filled>() const { return m_opt_qty_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::dd_bot_ioc_filled>() const { return m_dd_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::dd_sld_ioc_filled>() const { return m_dd_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::ve_bot_ioc_filled>() const { return m_ve_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::ve_sld_ioc_filled>() const { return m_ve_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::wt_ve_bot_ioc_filled>() const { return m_wt_ve_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::wt_ve_sld_ioc_filled>() const { return m_wt_ve_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::nv_bot_ioc_filled>() const { return m_nv_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::nv_sld_ioc_filled>() const { return m_nv_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm1_bot_ioc_filled>() const { return m_rm1_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm1_sld_ioc_filled>() const { return m_rm1_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm2_bot_ioc_filled>() const { return m_rm2_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm2_sld_ioc_filled>() const { return m_rm2_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm3_bot_ioc_filled>() const { return m_rm3_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm3_sld_ioc_filled>() const { return m_rm3_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm4_bot_ioc_filled>() const { return m_rm4_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm4_sld_ioc_filled>() const { return m_rm4_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm5_bot_ioc_filled>() const { return m_rm5_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm5_sld_ioc_filled>() const { return m_rm5_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm6_bot_ioc_filled>() const { return m_rm6_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm6_sld_ioc_filled>() const { return m_rm6_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm7_bot_ioc_filled>() const { return m_rm7_bot_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::rm7_sld_ioc_filled>() const { return m_rm7_sld_ioc_filled; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::counter>() const { return m_counter; }
    template<> inline const auto RiskGroupCounter::get<RiskGroupCounter::timestamp>() const { return m_timestamp; }
    template<> inline const auto RiskGroupCounter_PKey::get<RiskGroupCounter_PKey::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto RiskGroupCounter_PKey::get<RiskGroupCounter_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto RiskGroupCounter_PKey::get<RiskGroupCounter_PKey::risk_firm>() const { return m_risk_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RiskGroupCounter_PKey& m) {
        o << "\"risk_group_id\":" << m.get<RiskGroupCounter_PKey::risk_group_id>();
        o << ",\"accnt\":\"" << m.get<RiskGroupCounter_PKey::accnt>() << "\"";
        o << ",\"risk_firm\":\"" << m.get<RiskGroupCounter_PKey::risk_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RiskGroupCounter& m) {
        o << "\"_meta\":{" << m.get<RiskGroupCounter::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RiskGroupCounter::pkey>() << "}";
        o << ",\"sys_realm\":" << (int64_t)m.get<RiskGroupCounter::sys_realm>();
        o << ",\"sys_environment\":" << (int64_t)m.get<RiskGroupCounter::sys_environment>();
        o << ",\"risk_engine\":\"" << m.get<RiskGroupCounter::risk_engine>() << "\"";
        o << ",\"change_reason\":" << (int64_t)m.get<RiskGroupCounter::change_reason>();
        o << ",\"opt_qty_bot_ioc_filled\":" << m.get<RiskGroupCounter::opt_qty_bot_ioc_filled>();
        o << ",\"opt_qty_sld_ioc_filled\":" << m.get<RiskGroupCounter::opt_qty_sld_ioc_filled>();
        o << ",\"dd_bot_ioc_filled\":" << m.get<RiskGroupCounter::dd_bot_ioc_filled>();
        o << ",\"dd_sld_ioc_filled\":" << m.get<RiskGroupCounter::dd_sld_ioc_filled>();
        o << ",\"ve_bot_ioc_filled\":" << m.get<RiskGroupCounter::ve_bot_ioc_filled>();
        o << ",\"ve_sld_ioc_filled\":" << m.get<RiskGroupCounter::ve_sld_ioc_filled>();
        o << ",\"wt_ve_bot_ioc_filled\":" << m.get<RiskGroupCounter::wt_ve_bot_ioc_filled>();
        o << ",\"wt_ve_sld_ioc_filled\":" << m.get<RiskGroupCounter::wt_ve_sld_ioc_filled>();
        o << ",\"nv_bot_ioc_filled\":" << m.get<RiskGroupCounter::nv_bot_ioc_filled>();
        o << ",\"nv_sld_ioc_filled\":" << m.get<RiskGroupCounter::nv_sld_ioc_filled>();
        o << ",\"rm1_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm1_bot_ioc_filled>();
        o << ",\"rm1_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm1_sld_ioc_filled>();
        o << ",\"rm2_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm2_bot_ioc_filled>();
        o << ",\"rm2_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm2_sld_ioc_filled>();
        o << ",\"rm3_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm3_bot_ioc_filled>();
        o << ",\"rm3_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm3_sld_ioc_filled>();
        o << ",\"rm4_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm4_bot_ioc_filled>();
        o << ",\"rm4_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm4_sld_ioc_filled>();
        o << ",\"rm5_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm5_bot_ioc_filled>();
        o << ",\"rm5_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm5_sld_ioc_filled>();
        o << ",\"rm6_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm6_bot_ioc_filled>();
        o << ",\"rm6_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm6_sld_ioc_filled>();
        o << ",\"rm7_bot_ioc_filled\":" << m.get<RiskGroupCounter::rm7_bot_ioc_filled>();
        o << ",\"rm7_sld_ioc_filled\":" << m.get<RiskGroupCounter::rm7_sld_ioc_filled>();
        o << ",\"counter\":" << m.get<RiskGroupCounter::counter>();
        {
            std::time_t tt = m.get<RiskGroupCounter::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}