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

    #ifndef _risk_class_label__GUARD__
    #define _risk_class_label__GUARD__
    DECL_STRONG_TYPE(risk_class_label, string);
    #endif//_risk_class_label__GUARD__

    #ifndef _max_ddelta__GUARD__
    #define _max_ddelta__GUARD__
    DECL_STRONG_TYPE(max_ddelta, int32);
    #endif//_max_ddelta__GUARD__

    #ifndef _min_va_rs50__GUARD__
    #define _min_va_rs50__GUARD__
    DECL_STRONG_TYPE(min_va_rs50, int32);
    #endif//_min_va_rs50__GUARD__

    #ifndef _max_va_rs50__GUARD__
    #define _max_va_rs50__GUARD__
    DECL_STRONG_TYPE(max_va_rs50, int32);
    #endif//_max_va_rs50__GUARD__

    #ifndef _min_va_rs15__GUARD__
    #define _min_va_rs15__GUARD__
    DECL_STRONG_TYPE(min_va_rs15, int32);
    #endif//_min_va_rs15__GUARD__

    #ifndef _max_va_rs15__GUARD__
    #define _max_va_rs15__GUARD__
    DECL_STRONG_TYPE(max_va_rs15, int32);
    #endif//_max_va_rs15__GUARD__

    #ifndef _min_wt_vega__int32__GUARD__
    #define _min_wt_vega__int32__GUARD__
    DECL_STRONG_TYPE(min_wt_vega__int32, int32);
    #endif//_min_wt_vega__int32__GUARD__

    #ifndef _max_wt_vega__int32__GUARD__
    #define _max_wt_vega__int32__GUARD__
    DECL_STRONG_TYPE(max_wt_vega__int32, int32);
    #endif//_max_wt_vega__int32__GUARD__

    #ifndef _max_wt_ve_pct_m1__GUARD__
    #define _max_wt_ve_pct_m1__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_m1, float);
    #endif//_max_wt_ve_pct_m1__GUARD__

    #ifndef _max_wt_ve_pct_m2__GUARD__
    #define _max_wt_ve_pct_m2__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_m2, float);
    #endif//_max_wt_ve_pct_m2__GUARD__

    #ifndef _max_wt_ve_pct_m3__GUARD__
    #define _max_wt_ve_pct_m3__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_m3, float);
    #endif//_max_wt_ve_pct_m3__GUARD__

    #ifndef _max_wt_ve_pct_m4__GUARD__
    #define _max_wt_ve_pct_m4__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_m4, float);
    #endif//_max_wt_ve_pct_m4__GUARD__

    #ifndef _max_wt_ve_pct_m5__GUARD__
    #define _max_wt_ve_pct_m5__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_m5, float);
    #endif//_max_wt_ve_pct_m5__GUARD__

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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _risk_class__GUARD__
    #define _risk_class__GUARD__
    DECL_STRONG_TYPE(risk_class, string);
    #endif//_risk_class__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class RiskClassControl_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using risk_class = spiderrock::protobuf::api::risk_class;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        risk_class m_risk_class{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        risk_class get_risk_class() const {
            return m_risk_class;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_risk_class(const risk_class& value)  {
            m_risk_class = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskClassControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskClassControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const risk_class & value) { set_risk_class(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        RiskClassControl_PKey() {}

        virtual ~RiskClassControl_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeRiskClass() const {
            return !(m_risk_class.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeRiskClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_risk_class);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeRiskClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_risk_class));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_client_firm));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_risk_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RiskClassControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RiskClassControl_PKey;
        using risk_class_label = spiderrock::protobuf::api::risk_class_label;
        using max_ddelta = spiderrock::protobuf::api::max_ddelta;
        using min_va_rs50 = spiderrock::protobuf::api::min_va_rs50;
        using max_va_rs50 = spiderrock::protobuf::api::max_va_rs50;
        using min_va_rs15 = spiderrock::protobuf::api::min_va_rs15;
        using max_va_rs15 = spiderrock::protobuf::api::max_va_rs15;
        using min_wt_vega = spiderrock::protobuf::api::min_wt_vega__int32;
        using max_wt_vega = spiderrock::protobuf::api::max_wt_vega__int32;
        using max_wt_ve_pct_m1 = spiderrock::protobuf::api::max_wt_ve_pct_m1;
        using max_wt_ve_pct_m2 = spiderrock::protobuf::api::max_wt_ve_pct_m2;
        using max_wt_ve_pct_m3 = spiderrock::protobuf::api::max_wt_ve_pct_m3;
        using max_wt_ve_pct_m4 = spiderrock::protobuf::api::max_wt_ve_pct_m4;
        using max_wt_ve_pct_m5 = spiderrock::protobuf::api::max_wt_ve_pct_m5;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        risk_class_label m_risk_class_label{};
        max_ddelta m_max_ddelta{};
        min_va_rs50 m_min_va_rs50{};
        max_va_rs50 m_max_va_rs50{};
        min_va_rs15 m_min_va_rs15{};
        max_va_rs15 m_max_va_rs15{};
        min_wt_vega m_min_wt_vega{};
        max_wt_vega m_max_wt_vega{};
        max_wt_ve_pct_m1 m_max_wt_ve_pct_m1{};
        max_wt_ve_pct_m2 m_max_wt_ve_pct_m2{};
        max_wt_ve_pct_m3 m_max_wt_ve_pct_m3{};
        max_wt_ve_pct_m4 m_max_wt_ve_pct_m4{};
        max_wt_ve_pct_m5 m_max_wt_ve_pct_m5{};
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
        risk_class_label get_risk_class_label() const {
            return m_risk_class_label;
        }		
        max_ddelta get_max_ddelta() const {
            return m_max_ddelta;
        }		
        min_va_rs50 get_min_va_rs50() const {
            return m_min_va_rs50;
        }		
        max_va_rs50 get_max_va_rs50() const {
            return m_max_va_rs50;
        }		
        min_va_rs15 get_min_va_rs15() const {
            return m_min_va_rs15;
        }		
        max_va_rs15 get_max_va_rs15() const {
            return m_max_va_rs15;
        }		
        min_wt_vega get_min_wt_vega() const {
            return m_min_wt_vega;
        }		
        max_wt_vega get_max_wt_vega() const {
            return m_max_wt_vega;
        }		
        max_wt_ve_pct_m1 get_max_wt_ve_pct_m1() const {
            return m_max_wt_ve_pct_m1;
        }		
        max_wt_ve_pct_m2 get_max_wt_ve_pct_m2() const {
            return m_max_wt_ve_pct_m2;
        }		
        max_wt_ve_pct_m3 get_max_wt_ve_pct_m3() const {
            return m_max_wt_ve_pct_m3;
        }		
        max_wt_ve_pct_m4 get_max_wt_ve_pct_m4() const {
            return m_max_wt_ve_pct_m4;
        }		
        max_wt_ve_pct_m5 get_max_wt_ve_pct_m5() const {
            return m_max_wt_ve_pct_m5;
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
        void set_risk_class_label(const risk_class_label& value)  {
            m_risk_class_label = value;
        }
        void set_max_ddelta(const max_ddelta& value)  {
            m_max_ddelta = value;
        }
        void set_min_va_rs50(const min_va_rs50& value)  {
            m_min_va_rs50 = value;
        }
        void set_max_va_rs50(const max_va_rs50& value)  {
            m_max_va_rs50 = value;
        }
        void set_min_va_rs15(const min_va_rs15& value)  {
            m_min_va_rs15 = value;
        }
        void set_max_va_rs15(const max_va_rs15& value)  {
            m_max_va_rs15 = value;
        }
        void set_min_wt_vega(const min_wt_vega& value)  {
            m_min_wt_vega = value;
        }
        void set_max_wt_vega(const max_wt_vega& value)  {
            m_max_wt_vega = value;
        }
        void set_max_wt_ve_pct_m1(const max_wt_ve_pct_m1& value)  {
            m_max_wt_ve_pct_m1 = value;
        }
        void set_max_wt_ve_pct_m2(const max_wt_ve_pct_m2& value)  {
            m_max_wt_ve_pct_m2 = value;
        }
        void set_max_wt_ve_pct_m3(const max_wt_ve_pct_m3& value)  {
            m_max_wt_ve_pct_m3 = value;
        }
        void set_max_wt_ve_pct_m4(const max_wt_ve_pct_m4& value)  {
            m_max_wt_ve_pct_m4 = value;
        }
        void set_max_wt_ve_pct_m5(const max_wt_ve_pct_m5& value)  {
            m_max_wt_ve_pct_m5 = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RiskClassControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const risk_class_label & value) {
            set_risk_class_label(value);
        }
        void set(const max_ddelta & value) {
            set_max_ddelta(value);
        }
        void set(const min_va_rs50 & value) {
            set_min_va_rs50(value);
        }
        void set(const max_va_rs50 & value) {
            set_max_va_rs50(value);
        }
        void set(const min_va_rs15 & value) {
            set_min_va_rs15(value);
        }
        void set(const max_va_rs15 & value) {
            set_max_va_rs15(value);
        }
        void set(const min_wt_vega & value) {
            set_min_wt_vega(value);
        }
        void set(const max_wt_vega & value) {
            set_max_wt_vega(value);
        }
        void set(const max_wt_ve_pct_m1 & value) {
            set_max_wt_ve_pct_m1(value);
        }
        void set(const max_wt_ve_pct_m2 & value) {
            set_max_wt_ve_pct_m2(value);
        }
        void set(const max_wt_ve_pct_m3 & value) {
            set_max_wt_ve_pct_m3(value);
        }
        void set(const max_wt_ve_pct_m4 & value) {
            set_max_wt_ve_pct_m4(value);
        }
        void set(const max_wt_ve_pct_m5 & value) {
            set_max_wt_ve_pct_m5(value);
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

        void set(const RiskClassControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_risk_class_label);
            set(value.m_max_ddelta);
            set(value.m_min_va_rs50);
            set(value.m_max_va_rs50);
            set(value.m_min_va_rs15);
            set(value.m_max_va_rs15);
            set(value.m_min_wt_vega);
            set(value.m_max_wt_vega);
            set(value.m_max_wt_ve_pct_m1);
            set(value.m_max_wt_ve_pct_m2);
            set(value.m_max_wt_ve_pct_m3);
            set(value.m_max_wt_ve_pct_m4);
            set(value.m_max_wt_ve_pct_m5);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        RiskClassControl() {
            m__meta.set_message_type("RiskClassControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1660, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1660, length);
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
             *this = RiskClassControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRiskClassLabel() const {
            return !(m_risk_class_label.empty());
        }
        bool IncludeMaxDdelta() const {
            return !(m_max_ddelta == 0);
        }
        bool IncludeMinVaRs50() const {
            return !(m_min_va_rs50 == 0);
        }
        bool IncludeMaxVaRs50() const {
            return !(m_max_va_rs50 == 0);
        }
        bool IncludeMinVaRs15() const {
            return !(m_min_va_rs15 == 0);
        }
        bool IncludeMaxVaRs15() const {
            return !(m_max_va_rs15 == 0);
        }
        bool IncludeMinWtVega() const {
            return !(m_min_wt_vega == 0);
        }
        bool IncludeMaxWtVega() const {
            return !(m_max_wt_vega == 0);
        }
        bool IncludeMaxWtVePctM1() const {
            return !(m_max_wt_ve_pct_m1 == 0.0);
        }
        bool IncludeMaxWtVePctM2() const {
            return !(m_max_wt_ve_pct_m2 == 0.0);
        }
        bool IncludeMaxWtVePctM3() const {
            return !(m_max_wt_ve_pct_m3 == 0.0);
        }
        bool IncludeMaxWtVePctM4() const {
            return !(m_max_wt_ve_pct_m4 == 0.0);
        }
        bool IncludeMaxWtVePctM5() const {
            return !(m_max_wt_ve_pct_m5 == 0.0);
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
            if ( IncludeRiskClassLabel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_risk_class_label);
            }
            if ( IncludeMaxDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_max_ddelta);
            }
            if ( IncludeMinVaRs50()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_min_va_rs50);
            }
            if ( IncludeMaxVaRs50()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_max_va_rs50);
            }
            if ( IncludeMinVaRs15()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_min_va_rs15);
            }
            if ( IncludeMaxVaRs15()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_max_va_rs15);
            }
            if ( IncludeMinWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_min_wt_vega);
            }
            if ( IncludeMaxWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_max_wt_vega);
            }
            if ( IncludeMaxWtVePctM1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_max_wt_ve_pct_m1);
            }
            if ( IncludeMaxWtVePctM2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_max_wt_ve_pct_m2);
            }
            if ( IncludeMaxWtVePctM3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_max_wt_ve_pct_m3);
            }
            if ( IncludeMaxWtVePctM4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_max_wt_ve_pct_m4);
            }
            if ( IncludeMaxWtVePctM5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_max_wt_ve_pct_m5);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
            if ( IncludeRiskClassLabel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_risk_class_label));
            }
            if ( IncludeMaxDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_max_ddelta);
            }
            if ( IncludeMinVaRs50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_min_va_rs50);
            }
            if ( IncludeMaxVaRs50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_max_va_rs50);
            }
            if ( IncludeMinVaRs15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_min_va_rs15);
            }
            if ( IncludeMaxVaRs15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_max_va_rs15);
            }
            if ( IncludeMinWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_min_wt_vega);
            }
            if ( IncludeMaxWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_max_wt_vega);
            }
            if ( IncludeMaxWtVePctM1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_max_wt_ve_pct_m1);
            }
            if ( IncludeMaxWtVePctM2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_max_wt_ve_pct_m2);
            }
            if ( IncludeMaxWtVePctM3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_max_wt_ve_pct_m3);
            }
            if ( IncludeMaxWtVePctM4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_max_wt_ve_pct_m4);
            }
            if ( IncludeMaxWtVePctM5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_max_wt_ve_pct_m5);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_risk_class_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_ddelta = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_va_rs50 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_va_rs50 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_va_rs15 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_va_rs15 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_wt_vega = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_wt_vega = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_m1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_m2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_m3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_m4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_m5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto RiskClassControl::get<RiskClassControl::_meta>() const { return RiskClassControl::_meta{ m__meta}; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::pkey>() const { return RiskClassControl::pkey{ m_pkey}; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::risk_class_label>() const { return m_risk_class_label; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_ddelta>() const { return m_max_ddelta; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::min_va_rs50>() const { return m_min_va_rs50; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_va_rs50>() const { return m_max_va_rs50; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::min_va_rs15>() const { return m_min_va_rs15; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_va_rs15>() const { return m_max_va_rs15; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::min_wt_vega>() const { return m_min_wt_vega; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_wt_vega>() const { return m_max_wt_vega; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_wt_ve_pct_m1>() const { return m_max_wt_ve_pct_m1; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_wt_ve_pct_m2>() const { return m_max_wt_ve_pct_m2; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_wt_ve_pct_m3>() const { return m_max_wt_ve_pct_m3; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_wt_ve_pct_m4>() const { return m_max_wt_ve_pct_m4; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::max_wt_ve_pct_m5>() const { return m_max_wt_ve_pct_m5; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto RiskClassControl::get<RiskClassControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto RiskClassControl::get<RiskClassControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto RiskClassControl_PKey::get<RiskClassControl_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto RiskClassControl_PKey::get<RiskClassControl_PKey::risk_class>() const { return m_risk_class; }
    template<> inline const auto RiskClassControl_PKey::get<RiskClassControl_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RiskClassControl_PKey& m) {
        o << "\"accnt\":\"" << m.get<RiskClassControl_PKey::accnt>() << "\"";
        o << ",\"risk_class\":\"" << m.get<RiskClassControl_PKey::risk_class>() << "\"";
        o << ",\"client_firm\":\"" << m.get<RiskClassControl_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RiskClassControl& m) {
        o << "\"_meta\":{" << m.get<RiskClassControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RiskClassControl::pkey>() << "}";
        o << ",\"risk_class_label\":\"" << m.get<RiskClassControl::risk_class_label>() << "\"";
        o << ",\"max_ddelta\":" << m.get<RiskClassControl::max_ddelta>();
        o << ",\"min_va_rs50\":" << m.get<RiskClassControl::min_va_rs50>();
        o << ",\"max_va_rs50\":" << m.get<RiskClassControl::max_va_rs50>();
        o << ",\"min_va_rs15\":" << m.get<RiskClassControl::min_va_rs15>();
        o << ",\"max_va_rs15\":" << m.get<RiskClassControl::max_va_rs15>();
        o << ",\"min_wt_vega\":" << m.get<RiskClassControl::min_wt_vega>();
        o << ",\"max_wt_vega\":" << m.get<RiskClassControl::max_wt_vega>();
        o << ",\"max_wt_ve_pct_m1\":" << m.get<RiskClassControl::max_wt_ve_pct_m1>();
        o << ",\"max_wt_ve_pct_m2\":" << m.get<RiskClassControl::max_wt_ve_pct_m2>();
        o << ",\"max_wt_ve_pct_m3\":" << m.get<RiskClassControl::max_wt_ve_pct_m3>();
        o << ",\"max_wt_ve_pct_m4\":" << m.get<RiskClassControl::max_wt_ve_pct_m4>();
        o << ",\"max_wt_ve_pct_m5\":" << m.get<RiskClassControl::max_wt_ve_pct_m5>();
        o << ",\"modified_by\":\"" << m.get<RiskClassControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<RiskClassControl::modified_in>();
        {
            std::time_t tt = m.get<RiskClassControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}