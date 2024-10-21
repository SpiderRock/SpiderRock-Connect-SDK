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

    #ifndef _date__string__GUARD__
    #define _date__string__GUARD__
    DECL_STRONG_TYPE(date__string, string);
    #endif//_date__string__GUARD__

    #ifndef _time__string__GUARD__
    #define _time__string__GUARD__
    DECL_STRONG_TYPE(time__string, string);
    #endif//_time__string__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _strike__float__GUARD__
    #define _strike__float__GUARD__
    DECL_STRONG_TYPE(strike__float, float);
    #endif//_strike__float__GUARD__

    #ifndef _t_emove__GUARD__
    #define _t_emove__GUARD__
    DECL_STRONG_TYPE(t_emove, float);
    #endif//_t_emove__GUARD__

    #ifndef _c_tvol__GUARD__
    #define _c_tvol__GUARD__
    DECL_STRONG_TYPE(c_tvol, float);
    #endif//_c_tvol__GUARD__

    #ifndef _p_tvol__GUARD__
    #define _p_tvol__GUARD__
    DECL_STRONG_TYPE(p_tvol, float);
    #endif//_p_tvol__GUARD__

    #ifndef _c_topx__GUARD__
    #define _c_topx__GUARD__
    DECL_STRONG_TYPE(c_topx, float);
    #endif//_c_topx__GUARD__

    #ifndef _p_topx__GUARD__
    #define _p_topx__GUARD__
    DECL_STRONG_TYPE(p_topx, float);
    #endif//_p_topx__GUARD__

    #ifndef _fix_ctvol__GUARD__
    #define _fix_ctvol__GUARD__
    DECL_STRONG_TYPE(fix_ctvol, float);
    #endif//_fix_ctvol__GUARD__

    #ifndef _fix_ptvol__GUARD__
    #define _fix_ptvol__GUARD__
    DECL_STRONG_TYPE(fix_ptvol, float);
    #endif//_fix_ptvol__GUARD__

    #ifndef _fix_ctopx__GUARD__
    #define _fix_ctopx__GUARD__
    DECL_STRONG_TYPE(fix_ctopx, float);
    #endif//_fix_ctopx__GUARD__

    #ifndef _fix_ptopx__GUARD__
    #define _fix_ptopx__GUARD__
    DECL_STRONG_TYPE(fix_ptopx, float);
    #endif//_fix_ptopx__GUARD__

    #ifndef _prv_strike__GUARD__
    #define _prv_strike__GUARD__
    DECL_STRONG_TYPE(prv_strike, float);
    #endif//_prv_strike__GUARD__

    #ifndef _prv_temove__GUARD__
    #define _prv_temove__GUARD__
    DECL_STRONG_TYPE(prv_temove, float);
    #endif//_prv_temove__GUARD__

    #ifndef _prv_ctvol__GUARD__
    #define _prv_ctvol__GUARD__
    DECL_STRONG_TYPE(prv_ctvol, float);
    #endif//_prv_ctvol__GUARD__

    #ifndef _prv_ptvol__GUARD__
    #define _prv_ptvol__GUARD__
    DECL_STRONG_TYPE(prv_ptvol, float);
    #endif//_prv_ptvol__GUARD__

    #ifndef _prv_ctopx__GUARD__
    #define _prv_ctopx__GUARD__
    DECL_STRONG_TYPE(prv_ctopx, float);
    #endif//_prv_ctopx__GUARD__

    #ifndef _prv_ptopx__GUARD__
    #define _prv_ptopx__GUARD__
    DECL_STRONG_TYPE(prv_ptopx, float);
    #endif//_prv_ptopx__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _perf_surf_type__GUARD__
    #define _perf_surf_type__GUARD__
    DECL_STRONG_TYPE(perf_surf_type, spiderrock::protobuf::api::PerfSurfaceType);
    #endif//_perf_surf_type__GUARD__

    
    class TheoSurfacePerf_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using perf_surf_type = spiderrock::protobuf::api::perf_surf_type;

        private:
        ekey m_ekey{};
        theo_model m_theo_model{};
        client_firm m_client_firm{};
        perf_surf_type m_perf_surf_type{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        theo_model get_theo_model() const {
            return m_theo_model;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        perf_surf_type get_perf_surf_type() const {
            return m_perf_surf_type;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_perf_surf_type(const perf_surf_type& value)  {
            m_perf_surf_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TheoSurfacePerf_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to TheoSurfacePerf_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const theo_model & value) { set_theo_model(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const perf_surf_type & value) { set_perf_surf_type(value); }


        TheoSurfacePerf_PKey() {}

        virtual ~TheoSurfacePerf_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_theo_model);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PerfSurfaceType>(m_perf_surf_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_theo_model));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PerfSurfaceType>(m_perf_surf_type)));
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 11: {m_theo_model = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_perf_surf_type = static_cast<spiderrock::protobuf::api::PerfSurfaceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class TheoSurfacePerf {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::TheoSurfacePerf_PKey;
        using date = spiderrock::protobuf::api::date__string;
        using time = spiderrock::protobuf::api::time__string;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using strike = spiderrock::protobuf::api::strike__float;
        using t_emove = spiderrock::protobuf::api::t_emove;
        using c_tvol = spiderrock::protobuf::api::c_tvol;
        using p_tvol = spiderrock::protobuf::api::p_tvol;
        using c_topx = spiderrock::protobuf::api::c_topx;
        using p_topx = spiderrock::protobuf::api::p_topx;
        using fix_ctvol = spiderrock::protobuf::api::fix_ctvol;
        using fix_ptvol = spiderrock::protobuf::api::fix_ptvol;
        using fix_ctopx = spiderrock::protobuf::api::fix_ctopx;
        using fix_ptopx = spiderrock::protobuf::api::fix_ptopx;
        using prv_strike = spiderrock::protobuf::api::prv_strike;
        using prv_temove = spiderrock::protobuf::api::prv_temove;
        using prv_ctvol = spiderrock::protobuf::api::prv_ctvol;
        using prv_ptvol = spiderrock::protobuf::api::prv_ptvol;
        using prv_ctopx = spiderrock::protobuf::api::prv_ctopx;
        using prv_ptopx = spiderrock::protobuf::api::prv_ptopx;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        date m_date{};
        time m_time{};
        ticker m_ticker{};
        strike m_strike{};
        t_emove m_t_emove{};
        c_tvol m_c_tvol{};
        p_tvol m_p_tvol{};
        c_topx m_c_topx{};
        p_topx m_p_topx{};
        fix_ctvol m_fix_ctvol{};
        fix_ptvol m_fix_ptvol{};
        fix_ctopx m_fix_ctopx{};
        fix_ptopx m_fix_ptopx{};
        prv_strike m_prv_strike{};
        prv_temove m_prv_temove{};
        prv_ctvol m_prv_ctvol{};
        prv_ptvol m_prv_ptvol{};
        prv_ctopx m_prv_ctopx{};
        prv_ptopx m_prv_ptopx{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        date get_date() const {
            return m_date;
        }		
        time get_time() const {
            return m_time;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        strike get_strike() const {
            return m_strike;
        }		
        t_emove get_t_emove() const {
            return m_t_emove;
        }		
        c_tvol get_c_tvol() const {
            return m_c_tvol;
        }		
        p_tvol get_p_tvol() const {
            return m_p_tvol;
        }		
        c_topx get_c_topx() const {
            return m_c_topx;
        }		
        p_topx get_p_topx() const {
            return m_p_topx;
        }		
        fix_ctvol get_fix_ctvol() const {
            return m_fix_ctvol;
        }		
        fix_ptvol get_fix_ptvol() const {
            return m_fix_ptvol;
        }		
        fix_ctopx get_fix_ctopx() const {
            return m_fix_ctopx;
        }		
        fix_ptopx get_fix_ptopx() const {
            return m_fix_ptopx;
        }		
        prv_strike get_prv_strike() const {
            return m_prv_strike;
        }		
        prv_temove get_prv_temove() const {
            return m_prv_temove;
        }		
        prv_ctvol get_prv_ctvol() const {
            return m_prv_ctvol;
        }		
        prv_ptvol get_prv_ptvol() const {
            return m_prv_ptvol;
        }		
        prv_ctopx get_prv_ctopx() const {
            return m_prv_ctopx;
        }		
        prv_ptopx get_prv_ptopx() const {
            return m_prv_ptopx;
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
        void set_date(const date& value)  {
            m_date = value;
        }
        void set_time(const time& value)  {
            m_time = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
        }
        void set_t_emove(const t_emove& value)  {
            m_t_emove = value;
        }
        void set_c_tvol(const c_tvol& value)  {
            m_c_tvol = value;
        }
        void set_p_tvol(const p_tvol& value)  {
            m_p_tvol = value;
        }
        void set_c_topx(const c_topx& value)  {
            m_c_topx = value;
        }
        void set_p_topx(const p_topx& value)  {
            m_p_topx = value;
        }
        void set_fix_ctvol(const fix_ctvol& value)  {
            m_fix_ctvol = value;
        }
        void set_fix_ptvol(const fix_ptvol& value)  {
            m_fix_ptvol = value;
        }
        void set_fix_ctopx(const fix_ctopx& value)  {
            m_fix_ctopx = value;
        }
        void set_fix_ptopx(const fix_ptopx& value)  {
            m_fix_ptopx = value;
        }
        void set_prv_strike(const prv_strike& value)  {
            m_prv_strike = value;
        }
        void set_prv_temove(const prv_temove& value)  {
            m_prv_temove = value;
        }
        void set_prv_ctvol(const prv_ctvol& value)  {
            m_prv_ctvol = value;
        }
        void set_prv_ptvol(const prv_ptvol& value)  {
            m_prv_ptvol = value;
        }
        void set_prv_ctopx(const prv_ctopx& value)  {
            m_prv_ctopx = value;
        }
        void set_prv_ptopx(const prv_ptopx& value)  {
            m_prv_ptopx = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TheoSurfacePerf::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const date & value) {
            set_date(value);
        }
        void set(const time & value) {
            set_time(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const strike & value) {
            set_strike(value);
        }
        void set(const t_emove & value) {
            set_t_emove(value);
        }
        void set(const c_tvol & value) {
            set_c_tvol(value);
        }
        void set(const p_tvol & value) {
            set_p_tvol(value);
        }
        void set(const c_topx & value) {
            set_c_topx(value);
        }
        void set(const p_topx & value) {
            set_p_topx(value);
        }
        void set(const fix_ctvol & value) {
            set_fix_ctvol(value);
        }
        void set(const fix_ptvol & value) {
            set_fix_ptvol(value);
        }
        void set(const fix_ctopx & value) {
            set_fix_ctopx(value);
        }
        void set(const fix_ptopx & value) {
            set_fix_ptopx(value);
        }
        void set(const prv_strike & value) {
            set_prv_strike(value);
        }
        void set(const prv_temove & value) {
            set_prv_temove(value);
        }
        void set(const prv_ctvol & value) {
            set_prv_ctvol(value);
        }
        void set(const prv_ptvol & value) {
            set_prv_ptvol(value);
        }
        void set(const prv_ctopx & value) {
            set_prv_ctopx(value);
        }
        void set(const prv_ptopx & value) {
            set_prv_ptopx(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const TheoSurfacePerf & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_date);
            set(value.m_time);
            set(value.m_ticker);
            set(value.m_strike);
            set(value.m_t_emove);
            set(value.m_c_tvol);
            set(value.m_p_tvol);
            set(value.m_c_topx);
            set(value.m_p_topx);
            set(value.m_fix_ctvol);
            set(value.m_fix_ptvol);
            set(value.m_fix_ctopx);
            set(value.m_fix_ptopx);
            set(value.m_prv_strike);
            set(value.m_prv_temove);
            set(value.m_prv_ctvol);
            set(value.m_prv_ptvol);
            set(value.m_prv_ctopx);
            set(value.m_prv_ptopx);
            set(value.m_timestamp);
        }

        TheoSurfacePerf() {
            m__meta.set_message_type("TheoSurfacePerf");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1105, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1105, length);
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
             *this = TheoSurfacePerf{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeDate() const {
            return !(m_date.empty());
        }
        bool IncludeTime() const {
            return !(m_time.empty());
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
        }
        bool IncludeTEmove() const {
            return !(m_t_emove == 0.0);
        }
        bool IncludeCTvol() const {
            return !(m_c_tvol == 0.0);
        }
        bool IncludePTvol() const {
            return !(m_p_tvol == 0.0);
        }
        bool IncludeCTopx() const {
            return !(m_c_topx == 0.0);
        }
        bool IncludePTopx() const {
            return !(m_p_topx == 0.0);
        }
        bool IncludeFixCtvol() const {
            return !(m_fix_ctvol == 0.0);
        }
        bool IncludeFixPtvol() const {
            return !(m_fix_ptvol == 0.0);
        }
        bool IncludeFixCtopx() const {
            return !(m_fix_ctopx == 0.0);
        }
        bool IncludeFixPtopx() const {
            return !(m_fix_ptopx == 0.0);
        }
        bool IncludePrvStrike() const {
            return !(m_prv_strike == 0.0);
        }
        bool IncludePrvTemove() const {
            return !(m_prv_temove == 0.0);
        }
        bool IncludePrvCtvol() const {
            return !(m_prv_ctvol == 0.0);
        }
        bool IncludePrvPtvol() const {
            return !(m_prv_ptvol == 0.0);
        }
        bool IncludePrvCtopx() const {
            return !(m_prv_ctopx == 0.0);
        }
        bool IncludePrvPtopx() const {
            return !(m_prv_ptopx == 0.0);
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
            if ( IncludeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_date);
            }
            if ( IncludeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_time);
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(106, tickerKeyLayout);
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_strike);
            }
            if ( IncludeTEmove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_t_emove);
            }
            if ( IncludeCTvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_c_tvol);
            }
            if ( IncludePTvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_p_tvol);
            }
            if ( IncludeCTopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_c_topx);
            }
            if ( IncludePTopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_p_topx);
            }
            if ( IncludeFixCtvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_fix_ctvol);
            }
            if ( IncludeFixPtvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_fix_ptvol);
            }
            if ( IncludeFixCtopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_fix_ctopx);
            }
            if ( IncludeFixPtopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_fix_ptopx);
            }
            if ( IncludePrvStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_prv_strike);
            }
            if ( IncludePrvTemove()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_prv_temove);
            }
            if ( IncludePrvCtvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_prv_ctvol);
            }
            if ( IncludePrvPtvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_prv_ptvol);
            }
            if ( IncludePrvCtopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_prv_ctopx);
            }
            if ( IncludePrvPtopx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_prv_ptopx);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_timestamp);
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
            if ( IncludeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_date));
            }
            if ( IncludeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_time));
            }
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 106, tickerKeyLayout);
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_strike);
            }
            if ( IncludeTEmove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_t_emove);
            }
            if ( IncludeCTvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_c_tvol);
            }
            if ( IncludePTvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_p_tvol);
            }
            if ( IncludeCTopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_c_topx);
            }
            if ( IncludePTopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_p_topx);
            }
            if ( IncludeFixCtvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_fix_ctvol);
            }
            if ( IncludeFixPtvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_fix_ptvol);
            }
            if ( IncludeFixCtopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_fix_ctopx);
            }
            if ( IncludeFixPtopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_fix_ptopx);
            }
            if ( IncludePrvStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_prv_strike);
            }
            if ( IncludePrvTemove()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_prv_temove);
            }
            if ( IncludePrvCtvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_prv_ctvol);
            }
            if ( IncludePrvPtvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_prv_ptvol);
            }
            if ( IncludePrvCtopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_prv_ctopx);
            }
            if ( IncludePrvPtopx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_prv_ptopx);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_timestamp);
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
                            m_date = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_time = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_t_emove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_tvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_tvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_c_topx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_p_topx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_ctvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_ptvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_ctopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fix_ptopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_strike = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_temove = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_ctvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_ptvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_ctopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prv_ptopx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
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

    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::_meta>() const { return TheoSurfacePerf::_meta{ m__meta}; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::pkey>() const { return TheoSurfacePerf::pkey{ m_pkey}; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::date>() const { return m_date; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::time>() const { return m_time; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::ticker>() const { return TheoSurfacePerf::ticker{ m_ticker}; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::strike>() const { return m_strike; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::t_emove>() const { return m_t_emove; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::c_tvol>() const { return m_c_tvol; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::p_tvol>() const { return m_p_tvol; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::c_topx>() const { return m_c_topx; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::p_topx>() const { return m_p_topx; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::fix_ctvol>() const { return m_fix_ctvol; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::fix_ptvol>() const { return m_fix_ptvol; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::fix_ctopx>() const { return m_fix_ctopx; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::fix_ptopx>() const { return m_fix_ptopx; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::prv_strike>() const { return m_prv_strike; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::prv_temove>() const { return m_prv_temove; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::prv_ctvol>() const { return m_prv_ctvol; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::prv_ptvol>() const { return m_prv_ptvol; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::prv_ctopx>() const { return m_prv_ctopx; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::prv_ptopx>() const { return m_prv_ptopx; }
    template<> inline const auto TheoSurfacePerf::get<TheoSurfacePerf::timestamp>() const { return m_timestamp; }
    template<> inline const auto TheoSurfacePerf_PKey::get<TheoSurfacePerf_PKey::ekey>() const { return TheoSurfacePerf_PKey::ekey{m_ekey}; }
    template<> inline const auto TheoSurfacePerf_PKey::get<TheoSurfacePerf_PKey::theo_model>() const { return m_theo_model; }
    template<> inline const auto TheoSurfacePerf_PKey::get<TheoSurfacePerf_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto TheoSurfacePerf_PKey::get<TheoSurfacePerf_PKey::perf_surf_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PerfSurfaceType>(m_perf_surf_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const TheoSurfacePerf_PKey& m) {
        o << "\"ekey\":{" << m.get<TheoSurfacePerf_PKey::ekey>() << "}";
        o << ",\"theo_model\":\"" << m.get<TheoSurfacePerf_PKey::theo_model>() << "\"";
        o << ",\"client_firm\":\"" << m.get<TheoSurfacePerf_PKey::client_firm>() << "\"";
        o << ",\"perf_surf_type\":" << (int64_t)m.get<TheoSurfacePerf_PKey::perf_surf_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TheoSurfacePerf& m) {
        o << "\"_meta\":{" << m.get<TheoSurfacePerf::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<TheoSurfacePerf::pkey>() << "}";
        o << ",\"date\":\"" << m.get<TheoSurfacePerf::date>() << "\"";
        o << ",\"time\":\"" << m.get<TheoSurfacePerf::time>() << "\"";
        o << ",\"ticker\":{" << m.get<TheoSurfacePerf::ticker>() << "}";
        o << ",\"strike\":" << m.get<TheoSurfacePerf::strike>();
        o << ",\"t_emove\":" << m.get<TheoSurfacePerf::t_emove>();
        o << ",\"c_tvol\":" << m.get<TheoSurfacePerf::c_tvol>();
        o << ",\"p_tvol\":" << m.get<TheoSurfacePerf::p_tvol>();
        o << ",\"c_topx\":" << m.get<TheoSurfacePerf::c_topx>();
        o << ",\"p_topx\":" << m.get<TheoSurfacePerf::p_topx>();
        o << ",\"fix_ctvol\":" << m.get<TheoSurfacePerf::fix_ctvol>();
        o << ",\"fix_ptvol\":" << m.get<TheoSurfacePerf::fix_ptvol>();
        o << ",\"fix_ctopx\":" << m.get<TheoSurfacePerf::fix_ctopx>();
        o << ",\"fix_ptopx\":" << m.get<TheoSurfacePerf::fix_ptopx>();
        o << ",\"prv_strike\":" << m.get<TheoSurfacePerf::prv_strike>();
        o << ",\"prv_temove\":" << m.get<TheoSurfacePerf::prv_temove>();
        o << ",\"prv_ctvol\":" << m.get<TheoSurfacePerf::prv_ctvol>();
        o << ",\"prv_ptvol\":" << m.get<TheoSurfacePerf::prv_ptvol>();
        o << ",\"prv_ctopx\":" << m.get<TheoSurfacePerf::prv_ctopx>();
        o << ",\"prv_ptopx\":" << m.get<TheoSurfacePerf::prv_ptopx>();
        {
            std::time_t tt = m.get<TheoSurfacePerf::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}