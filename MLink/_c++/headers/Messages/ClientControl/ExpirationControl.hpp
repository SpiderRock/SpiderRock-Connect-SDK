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

    #ifndef _exp_status__GUARD__
    #define _exp_status__GUARD__
    DECL_STRONG_TYPE(exp_status, spiderrock::protobuf::api::OptStatus);
    #endif//_exp_status__GUARD__

    #ifndef _min_theta__GUARD__
    #define _min_theta__GUARD__
    DECL_STRONG_TYPE(min_theta, float);
    #endif//_min_theta__GUARD__

    #ifndef _max_theta__GUARD__
    #define _max_theta__GUARD__
    DECL_STRONG_TYPE(max_theta, float);
    #endif//_max_theta__GUARD__

    #ifndef _min_wt_vega__float__GUARD__
    #define _min_wt_vega__float__GUARD__
    DECL_STRONG_TYPE(min_wt_vega__float, float);
    #endif//_min_wt_vega__float__GUARD__

    #ifndef _max_wt_vega__float__GUARD__
    #define _max_wt_vega__float__GUARD__
    DECL_STRONG_TYPE(max_wt_vega__float, float);
    #endif//_max_wt_vega__float__GUARD__

    #ifndef _max_wt_ve_pct_dd__GUARD__
    #define _max_wt_ve_pct_dd__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_dd, float);
    #endif//_max_wt_ve_pct_dd__GUARD__

    #ifndef _max_wt_ve_pct_dn__GUARD__
    #define _max_wt_ve_pct_dn__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_dn, float);
    #endif//_max_wt_ve_pct_dn__GUARD__

    #ifndef _max_wt_ve_pct_at__GUARD__
    #define _max_wt_ve_pct_at__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_at, float);
    #endif//_max_wt_ve_pct_at__GUARD__

    #ifndef _max_wt_ve_pct_up__GUARD__
    #define _max_wt_ve_pct_up__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_up, float);
    #endif//_max_wt_ve_pct_up__GUARD__

    #ifndef _max_wt_ve_pct_du__GUARD__
    #define _max_wt_ve_pct_du__GUARD__
    DECL_STRONG_TYPE(max_wt_ve_pct_du, float);
    #endif//_max_wt_ve_pct_du__GUARD__

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

    #ifndef _year__GUARD__
    #define _year__GUARD__
    DECL_STRONG_TYPE(year, int32);
    #endif//_year__GUARD__

    #ifndef _month__GUARD__
    #define _month__GUARD__
    DECL_STRONG_TYPE(month, int32);
    #endif//_month__GUARD__

    #ifndef _day__GUARD__
    #define _day__GUARD__
    DECL_STRONG_TYPE(day, int32);
    #endif//_day__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class ExpirationControl_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using year = spiderrock::protobuf::api::year;
        using month = spiderrock::protobuf::api::month;
        using day = spiderrock::protobuf::api::day;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        year m_year{};
        month m_month{};
        day m_day{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        year get_year() const {
            return m_year;
        }
        month get_month() const {
            return m_month;
        }
        day get_day() const {
            return m_day;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_year(const year& value)  {
            m_year = value;
        }
        void set_month(const month& value)  {
            m_month = value;
        }
        void set_day(const day& value)  {
            m_day = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpirationControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpirationControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const year & value) { set_year(value); }
        void set(const month & value) { set_month(value); }
        void set(const day & value) { set_day(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        ExpirationControl_PKey() {}

        virtual ~ExpirationControl_PKey() {
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
        bool IncludeYear() const {
            return !(m_year == 0);
        }
        bool IncludeMonth() const {
            return !(m_month == 0);
        }
        bool IncludeDay() const {
            return !(m_day == 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeYear()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(11,m_year);
            }
            if ( IncludeMonth()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(12,m_month);
            }
            if ( IncludeDay()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(13,m_day);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeYear()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,11,m_year);
            }
            if ( IncludeMonth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,12,m_month);
            }
            if ( IncludeDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,13,m_day);
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
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
                    case 11: {m_year = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 12: {m_month = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 13: {m_day = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class ExpirationControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ExpirationControl_PKey;
        using exp_status = spiderrock::protobuf::api::exp_status;
        using min_theta = spiderrock::protobuf::api::min_theta;
        using max_theta = spiderrock::protobuf::api::max_theta;
        using min_wt_vega = spiderrock::protobuf::api::min_wt_vega__float;
        using max_wt_vega = spiderrock::protobuf::api::max_wt_vega__float;
        using max_wt_ve_pct_dd = spiderrock::protobuf::api::max_wt_ve_pct_dd;
        using max_wt_ve_pct_dn = spiderrock::protobuf::api::max_wt_ve_pct_dn;
        using max_wt_ve_pct_at = spiderrock::protobuf::api::max_wt_ve_pct_at;
        using max_wt_ve_pct_up = spiderrock::protobuf::api::max_wt_ve_pct_up;
        using max_wt_ve_pct_du = spiderrock::protobuf::api::max_wt_ve_pct_du;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        exp_status m_exp_status{};
        min_theta m_min_theta{};
        max_theta m_max_theta{};
        min_wt_vega m_min_wt_vega{};
        max_wt_vega m_max_wt_vega{};
        max_wt_ve_pct_dd m_max_wt_ve_pct_dd{};
        max_wt_ve_pct_dn m_max_wt_ve_pct_dn{};
        max_wt_ve_pct_at m_max_wt_ve_pct_at{};
        max_wt_ve_pct_up m_max_wt_ve_pct_up{};
        max_wt_ve_pct_du m_max_wt_ve_pct_du{};
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
        exp_status get_exp_status() const {
            return m_exp_status;
        }		
        min_theta get_min_theta() const {
            return m_min_theta;
        }		
        max_theta get_max_theta() const {
            return m_max_theta;
        }		
        min_wt_vega get_min_wt_vega() const {
            return m_min_wt_vega;
        }		
        max_wt_vega get_max_wt_vega() const {
            return m_max_wt_vega;
        }		
        max_wt_ve_pct_dd get_max_wt_ve_pct_dd() const {
            return m_max_wt_ve_pct_dd;
        }		
        max_wt_ve_pct_dn get_max_wt_ve_pct_dn() const {
            return m_max_wt_ve_pct_dn;
        }		
        max_wt_ve_pct_at get_max_wt_ve_pct_at() const {
            return m_max_wt_ve_pct_at;
        }		
        max_wt_ve_pct_up get_max_wt_ve_pct_up() const {
            return m_max_wt_ve_pct_up;
        }		
        max_wt_ve_pct_du get_max_wt_ve_pct_du() const {
            return m_max_wt_ve_pct_du;
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
        void set_exp_status(const exp_status& value)  {
            m_exp_status = value;
        }
        void set_min_theta(const min_theta& value)  {
            m_min_theta = value;
        }
        void set_max_theta(const max_theta& value)  {
            m_max_theta = value;
        }
        void set_min_wt_vega(const min_wt_vega& value)  {
            m_min_wt_vega = value;
        }
        void set_max_wt_vega(const max_wt_vega& value)  {
            m_max_wt_vega = value;
        }
        void set_max_wt_ve_pct_dd(const max_wt_ve_pct_dd& value)  {
            m_max_wt_ve_pct_dd = value;
        }
        void set_max_wt_ve_pct_dn(const max_wt_ve_pct_dn& value)  {
            m_max_wt_ve_pct_dn = value;
        }
        void set_max_wt_ve_pct_at(const max_wt_ve_pct_at& value)  {
            m_max_wt_ve_pct_at = value;
        }
        void set_max_wt_ve_pct_up(const max_wt_ve_pct_up& value)  {
            m_max_wt_ve_pct_up = value;
        }
        void set_max_wt_ve_pct_du(const max_wt_ve_pct_du& value)  {
            m_max_wt_ve_pct_du = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpirationControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const exp_status & value) {
            set_exp_status(value);
        }
        void set(const min_theta & value) {
            set_min_theta(value);
        }
        void set(const max_theta & value) {
            set_max_theta(value);
        }
        void set(const min_wt_vega & value) {
            set_min_wt_vega(value);
        }
        void set(const max_wt_vega & value) {
            set_max_wt_vega(value);
        }
        void set(const max_wt_ve_pct_dd & value) {
            set_max_wt_ve_pct_dd(value);
        }
        void set(const max_wt_ve_pct_dn & value) {
            set_max_wt_ve_pct_dn(value);
        }
        void set(const max_wt_ve_pct_at & value) {
            set_max_wt_ve_pct_at(value);
        }
        void set(const max_wt_ve_pct_up & value) {
            set_max_wt_ve_pct_up(value);
        }
        void set(const max_wt_ve_pct_du & value) {
            set_max_wt_ve_pct_du(value);
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

        void set(const ExpirationControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_exp_status);
            set(value.m_min_theta);
            set(value.m_max_theta);
            set(value.m_min_wt_vega);
            set(value.m_max_wt_vega);
            set(value.m_max_wt_ve_pct_dd);
            set(value.m_max_wt_ve_pct_dn);
            set(value.m_max_wt_ve_pct_at);
            set(value.m_max_wt_ve_pct_up);
            set(value.m_max_wt_ve_pct_du);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        ExpirationControl() {
            m__meta.set_message_type("ExpirationControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1645, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1645, length);
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
             *this = ExpirationControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeMinTheta() const {
            return !(m_min_theta == 0.0);
        }
        bool IncludeMaxTheta() const {
            return !(m_max_theta == 0.0);
        }
        bool IncludeMinWtVega() const {
            return !(m_min_wt_vega == 0.0);
        }
        bool IncludeMaxWtVega() const {
            return !(m_max_wt_vega == 0.0);
        }
        bool IncludeMaxWtVePctDd() const {
            return !(m_max_wt_ve_pct_dd == 0.0);
        }
        bool IncludeMaxWtVePctDn() const {
            return !(m_max_wt_ve_pct_dn == 0.0);
        }
        bool IncludeMaxWtVePctAt() const {
            return !(m_max_wt_ve_pct_at == 0.0);
        }
        bool IncludeMaxWtVePctUp() const {
            return !(m_max_wt_ve_pct_up == 0.0);
        }
        bool IncludeMaxWtVePctDu() const {
            return !(m_max_wt_ve_pct_du == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_exp_status)));
            if ( IncludeMinTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_min_theta);
            }
            if ( IncludeMaxTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_max_theta);
            }
            if ( IncludeMinWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_min_wt_vega);
            }
            if ( IncludeMaxWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_max_wt_vega);
            }
            if ( IncludeMaxWtVePctDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_max_wt_ve_pct_dd);
            }
            if ( IncludeMaxWtVePctDn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_max_wt_ve_pct_dn);
            }
            if ( IncludeMaxWtVePctAt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_max_wt_ve_pct_at);
            }
            if ( IncludeMaxWtVePctUp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_max_wt_ve_pct_up);
            }
            if ( IncludeMaxWtVePctDu()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_max_wt_ve_pct_du);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_exp_status)));
            if ( IncludeMinTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_min_theta);
            }
            if ( IncludeMaxTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_max_theta);
            }
            if ( IncludeMinWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_min_wt_vega);
            }
            if ( IncludeMaxWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_max_wt_vega);
            }
            if ( IncludeMaxWtVePctDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_max_wt_ve_pct_dd);
            }
            if ( IncludeMaxWtVePctDn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_max_wt_ve_pct_dn);
            }
            if ( IncludeMaxWtVePctAt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_max_wt_ve_pct_at);
            }
            if ( IncludeMaxWtVePctUp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_max_wt_ve_pct_up);
            }
            if ( IncludeMaxWtVePctDu()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_max_wt_ve_pct_du);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_timestamp);
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
                            m_exp_status = static_cast<spiderrock::protobuf::api::OptStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_dn = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_at = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_up = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_wt_ve_pct_du = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
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

    template<> inline const auto ExpirationControl::get<ExpirationControl::_meta>() const { return ExpirationControl::_meta{ m__meta}; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::pkey>() const { return ExpirationControl::pkey{ m_pkey}; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::exp_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>( m_exp_status)); }
    template<> inline const auto ExpirationControl::get<ExpirationControl::min_theta>() const { return m_min_theta; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_theta>() const { return m_max_theta; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::min_wt_vega>() const { return m_min_wt_vega; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_wt_vega>() const { return m_max_wt_vega; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_wt_ve_pct_dd>() const { return m_max_wt_ve_pct_dd; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_wt_ve_pct_dn>() const { return m_max_wt_ve_pct_dn; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_wt_ve_pct_at>() const { return m_max_wt_ve_pct_at; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_wt_ve_pct_up>() const { return m_max_wt_ve_pct_up; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::max_wt_ve_pct_du>() const { return m_max_wt_ve_pct_du; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto ExpirationControl::get<ExpirationControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ExpirationControl::get<ExpirationControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto ExpirationControl_PKey::get<ExpirationControl_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ExpirationControl_PKey::get<ExpirationControl_PKey::year>() const { return m_year; }
    template<> inline const auto ExpirationControl_PKey::get<ExpirationControl_PKey::month>() const { return m_month; }
    template<> inline const auto ExpirationControl_PKey::get<ExpirationControl_PKey::day>() const { return m_day; }
    template<> inline const auto ExpirationControl_PKey::get<ExpirationControl_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ExpirationControl_PKey& m) {
        o << "\"accnt\":\"" << m.get<ExpirationControl_PKey::accnt>() << "\"";
        o << ",\"year\":" << m.get<ExpirationControl_PKey::year>();
        o << ",\"month\":" << m.get<ExpirationControl_PKey::month>();
        o << ",\"day\":" << m.get<ExpirationControl_PKey::day>();
        o << ",\"client_firm\":\"" << m.get<ExpirationControl_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ExpirationControl& m) {
        o << "\"_meta\":{" << m.get<ExpirationControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ExpirationControl::pkey>() << "}";
        o << ",\"exp_status\":" << (int64_t)m.get<ExpirationControl::exp_status>();
        o << ",\"min_theta\":" << m.get<ExpirationControl::min_theta>();
        o << ",\"max_theta\":" << m.get<ExpirationControl::max_theta>();
        o << ",\"min_wt_vega\":" << m.get<ExpirationControl::min_wt_vega>();
        o << ",\"max_wt_vega\":" << m.get<ExpirationControl::max_wt_vega>();
        o << ",\"max_wt_ve_pct_dd\":" << m.get<ExpirationControl::max_wt_ve_pct_dd>();
        o << ",\"max_wt_ve_pct_dn\":" << m.get<ExpirationControl::max_wt_ve_pct_dn>();
        o << ",\"max_wt_ve_pct_at\":" << m.get<ExpirationControl::max_wt_ve_pct_at>();
        o << ",\"max_wt_ve_pct_up\":" << m.get<ExpirationControl::max_wt_ve_pct_up>();
        o << ",\"max_wt_ve_pct_du\":" << m.get<ExpirationControl::max_wt_ve_pct_du>();
        o << ",\"modified_by\":\"" << m.get<ExpirationControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ExpirationControl::modified_in>();
        {
            std::time_t tt = m.get<ExpirationControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}