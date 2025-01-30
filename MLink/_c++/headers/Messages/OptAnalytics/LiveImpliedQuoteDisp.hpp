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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _u_prc__float__GUARD__
    #define _u_prc__float__GUARD__
    DECL_STRONG_TYPE(u_prc__float, float);
    #endif//_u_prc__float__GUARD__

    #ifndef _cls_bid_iv__GUARD__
    #define _cls_bid_iv__GUARD__
    DECL_STRONG_TYPE(cls_bid_iv, float);
    #endif//_cls_bid_iv__GUARD__

    #ifndef _cls_ask_iv__GUARD__
    #define _cls_ask_iv__GUARD__
    DECL_STRONG_TYPE(cls_ask_iv, float);
    #endif//_cls_ask_iv__GUARD__

    #ifndef _cls_mid_vol__GUARD__
    #define _cls_mid_vol__GUARD__
    DECL_STRONG_TYPE(cls_mid_vol, float);
    #endif//_cls_mid_vol__GUARD__

    #ifndef _cls_sr_vol__GUARD__
    #define _cls_sr_vol__GUARD__
    DECL_STRONG_TYPE(cls_sr_vol, float);
    #endif//_cls_sr_vol__GUARD__

    #ifndef _o_bid_iv__float__GUARD__
    #define _o_bid_iv__float__GUARD__
    DECL_STRONG_TYPE(o_bid_iv__float, float);
    #endif//_o_bid_iv__float__GUARD__

    #ifndef _o_ask_iv__float__GUARD__
    #define _o_ask_iv__float__GUARD__
    DECL_STRONG_TYPE(o_ask_iv__float, float);
    #endif//_o_ask_iv__float__GUARD__

    #ifndef _mid_vol__GUARD__
    #define _mid_vol__GUARD__
    DECL_STRONG_TYPE(mid_vol, float);
    #endif//_mid_vol__GUARD__

    #ifndef _s_vol__float__GUARD__
    #define _s_vol__float__GUARD__
    DECL_STRONG_TYPE(s_vol__float, float);
    #endif//_s_vol__float__GUARD__

    #ifndef _s_prc__GUARD__
    #define _s_prc__GUARD__
    DECL_STRONG_TYPE(s_prc, float);
    #endif//_s_prc__GUARD__

    #ifndef _prt_prc__GUARD__
    #define _prt_prc__GUARD__
    DECL_STRONG_TYPE(prt_prc, float);
    #endif//_prt_prc__GUARD__

    #ifndef _surf_vol__float__GUARD__
    #define _surf_vol__float__GUARD__
    DECL_STRONG_TYPE(surf_vol__float, float);
    #endif//_surf_vol__float__GUARD__

    #ifndef _prt_volume__GUARD__
    #define _prt_volume__GUARD__
    DECL_STRONG_TYPE(prt_volume, int32);
    #endif//_prt_volume__GUARD__

    #ifndef _prt_iv__GUARD__
    #define _prt_iv__GUARD__
    DECL_STRONG_TYPE(prt_iv, float);
    #endif//_prt_iv__GUARD__

    #ifndef _de__GUARD__
    #define _de__GUARD__
    DECL_STRONG_TYPE(de, float);
    #endif//_de__GUARD__

    #ifndef _ga__GUARD__
    #define _ga__GUARD__
    DECL_STRONG_TYPE(ga, float);
    #endif//_ga__GUARD__

    #ifndef _th__GUARD__
    #define _th__GUARD__
    DECL_STRONG_TYPE(th, float);
    #endif//_th__GUARD__

    #ifndef _ve__GUARD__
    #define _ve__GUARD__
    DECL_STRONG_TYPE(ve, float);
    #endif//_ve__GUARD__

    #ifndef _va__GUARD__
    #define _va__GUARD__
    DECL_STRONG_TYPE(va, float);
    #endif//_va__GUARD__

    #ifndef _vo__GUARD__
    #define _vo__GUARD__
    DECL_STRONG_TYPE(vo, float);
    #endif//_vo__GUARD__

    #ifndef _ro__GUARD__
    #define _ro__GUARD__
    DECL_STRONG_TYPE(ro, float);
    #endif//_ro__GUARD__

    #ifndef _ph__GUARD__
    #define _ph__GUARD__
    DECL_STRONG_TYPE(ph, float);
    #endif//_ph__GUARD__

    #ifndef _calc_err__ImpliedQuoteError__GUARD__
    #define _calc_err__ImpliedQuoteError__GUARD__
    DECL_STRONG_TYPE(calc_err__ImpliedQuoteError, spiderrock::protobuf::api::ImpliedQuoteError);
    #endif//_calc_err__ImpliedQuoteError__GUARD__

    #ifndef _calc_source__GUARD__
    #define _calc_source__GUARD__
    DECL_STRONG_TYPE(calc_source, spiderrock::protobuf::api::CalcSource);
    #endif//_calc_source__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class LiveImpliedQuoteDisp_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuoteDisp_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuoteDisp_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        LiveImpliedQuoteDisp_PKey() {}

        virtual ~LiveImpliedQuoteDisp_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_okey);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_okey);
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
                    case 10: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                }
            }
        }

    };
    

    class LiveImpliedQuoteDisp {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveImpliedQuoteDisp_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using u_prc = spiderrock::protobuf::api::u_prc__float;
        using cls_bid_iv = spiderrock::protobuf::api::cls_bid_iv;
        using cls_ask_iv = spiderrock::protobuf::api::cls_ask_iv;
        using cls_mid_vol = spiderrock::protobuf::api::cls_mid_vol;
        using cls_sr_vol = spiderrock::protobuf::api::cls_sr_vol;
        using o_bid_iv = spiderrock::protobuf::api::o_bid_iv__float;
        using o_ask_iv = spiderrock::protobuf::api::o_ask_iv__float;
        using mid_vol = spiderrock::protobuf::api::mid_vol;
        using s_vol = spiderrock::protobuf::api::s_vol__float;
        using s_prc = spiderrock::protobuf::api::s_prc;
        using prt_prc = spiderrock::protobuf::api::prt_prc;
        using surf_vol = spiderrock::protobuf::api::surf_vol__float;
        using prt_volume = spiderrock::protobuf::api::prt_volume;
        using prt_iv = spiderrock::protobuf::api::prt_iv;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using va = spiderrock::protobuf::api::va;
        using vo = spiderrock::protobuf::api::vo;
        using ro = spiderrock::protobuf::api::ro;
        using ph = spiderrock::protobuf::api::ph;
        using calc_err = spiderrock::protobuf::api::calc_err__ImpliedQuoteError;
        using calc_source = spiderrock::protobuf::api::calc_source;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        u_prc m_u_prc{};
        cls_bid_iv m_cls_bid_iv{};
        cls_ask_iv m_cls_ask_iv{};
        cls_mid_vol m_cls_mid_vol{};
        cls_sr_vol m_cls_sr_vol{};
        o_bid_iv m_o_bid_iv{};
        o_ask_iv m_o_ask_iv{};
        mid_vol m_mid_vol{};
        s_vol m_s_vol{};
        s_prc m_s_prc{};
        prt_prc m_prt_prc{};
        surf_vol m_surf_vol{};
        prt_volume m_prt_volume{};
        prt_iv m_prt_iv{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        va m_va{};
        vo m_vo{};
        ro m_ro{};
        ph m_ph{};
        calc_err m_calc_err{};
        calc_source m_calc_source{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        cls_bid_iv get_cls_bid_iv() const {
            return m_cls_bid_iv;
        }		
        cls_ask_iv get_cls_ask_iv() const {
            return m_cls_ask_iv;
        }		
        cls_mid_vol get_cls_mid_vol() const {
            return m_cls_mid_vol;
        }		
        cls_sr_vol get_cls_sr_vol() const {
            return m_cls_sr_vol;
        }		
        o_bid_iv get_o_bid_iv() const {
            return m_o_bid_iv;
        }		
        o_ask_iv get_o_ask_iv() const {
            return m_o_ask_iv;
        }		
        mid_vol get_mid_vol() const {
            return m_mid_vol;
        }		
        s_vol get_s_vol() const {
            return m_s_vol;
        }		
        s_prc get_s_prc() const {
            return m_s_prc;
        }		
        prt_prc get_prt_prc() const {
            return m_prt_prc;
        }		
        surf_vol get_surf_vol() const {
            return m_surf_vol;
        }		
        prt_volume get_prt_volume() const {
            return m_prt_volume;
        }		
        prt_iv get_prt_iv() const {
            return m_prt_iv;
        }		
        de get_de() const {
            return m_de;
        }		
        ga get_ga() const {
            return m_ga;
        }		
        th get_th() const {
            return m_th;
        }		
        ve get_ve() const {
            return m_ve;
        }		
        va get_va() const {
            return m_va;
        }		
        vo get_vo() const {
            return m_vo;
        }		
        ro get_ro() const {
            return m_ro;
        }		
        ph get_ph() const {
            return m_ph;
        }		
        calc_err get_calc_err() const {
            return m_calc_err;
        }		
        calc_source get_calc_source() const {
            return m_calc_source;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_cls_bid_iv(const cls_bid_iv& value)  {
            m_cls_bid_iv = value;
        }
        void set_cls_ask_iv(const cls_ask_iv& value)  {
            m_cls_ask_iv = value;
        }
        void set_cls_mid_vol(const cls_mid_vol& value)  {
            m_cls_mid_vol = value;
        }
        void set_cls_sr_vol(const cls_sr_vol& value)  {
            m_cls_sr_vol = value;
        }
        void set_o_bid_iv(const o_bid_iv& value)  {
            m_o_bid_iv = value;
        }
        void set_o_ask_iv(const o_ask_iv& value)  {
            m_o_ask_iv = value;
        }
        void set_mid_vol(const mid_vol& value)  {
            m_mid_vol = value;
        }
        void set_s_vol(const s_vol& value)  {
            m_s_vol = value;
        }
        void set_s_prc(const s_prc& value)  {
            m_s_prc = value;
        }
        void set_prt_prc(const prt_prc& value)  {
            m_prt_prc = value;
        }
        void set_surf_vol(const surf_vol& value)  {
            m_surf_vol = value;
        }
        void set_prt_volume(const prt_volume& value)  {
            m_prt_volume = value;
        }
        void set_prt_iv(const prt_iv& value)  {
            m_prt_iv = value;
        }
        void set_de(const de& value)  {
            m_de = value;
        }
        void set_ga(const ga& value)  {
            m_ga = value;
        }
        void set_th(const th& value)  {
            m_th = value;
        }
        void set_ve(const ve& value)  {
            m_ve = value;
        }
        void set_va(const va& value)  {
            m_va = value;
        }
        void set_vo(const vo& value)  {
            m_vo = value;
        }
        void set_ro(const ro& value)  {
            m_ro = value;
        }
        void set_ph(const ph& value)  {
            m_ph = value;
        }
        void set_calc_err(const calc_err& value)  {
            m_calc_err = value;
        }
        void set_calc_source(const calc_source& value)  {
            m_calc_source = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveImpliedQuoteDisp::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const cls_bid_iv & value) {
            set_cls_bid_iv(value);
        }
        void set(const cls_ask_iv & value) {
            set_cls_ask_iv(value);
        }
        void set(const cls_mid_vol & value) {
            set_cls_mid_vol(value);
        }
        void set(const cls_sr_vol & value) {
            set_cls_sr_vol(value);
        }
        void set(const o_bid_iv & value) {
            set_o_bid_iv(value);
        }
        void set(const o_ask_iv & value) {
            set_o_ask_iv(value);
        }
        void set(const mid_vol & value) {
            set_mid_vol(value);
        }
        void set(const s_vol & value) {
            set_s_vol(value);
        }
        void set(const s_prc & value) {
            set_s_prc(value);
        }
        void set(const prt_prc & value) {
            set_prt_prc(value);
        }
        void set(const surf_vol & value) {
            set_surf_vol(value);
        }
        void set(const prt_volume & value) {
            set_prt_volume(value);
        }
        void set(const prt_iv & value) {
            set_prt_iv(value);
        }
        void set(const de & value) {
            set_de(value);
        }
        void set(const ga & value) {
            set_ga(value);
        }
        void set(const th & value) {
            set_th(value);
        }
        void set(const ve & value) {
            set_ve(value);
        }
        void set(const va & value) {
            set_va(value);
        }
        void set(const vo & value) {
            set_vo(value);
        }
        void set(const ro & value) {
            set_ro(value);
        }
        void set(const ph & value) {
            set_ph(value);
        }
        void set(const calc_err & value) {
            set_calc_err(value);
        }
        void set(const calc_source & value) {
            set_calc_source(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveImpliedQuoteDisp & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_u_prc);
            set(value.m_cls_bid_iv);
            set(value.m_cls_ask_iv);
            set(value.m_cls_mid_vol);
            set(value.m_cls_sr_vol);
            set(value.m_o_bid_iv);
            set(value.m_o_ask_iv);
            set(value.m_mid_vol);
            set(value.m_s_vol);
            set(value.m_s_prc);
            set(value.m_prt_prc);
            set(value.m_surf_vol);
            set(value.m_prt_volume);
            set(value.m_prt_iv);
            set(value.m_de);
            set(value.m_ga);
            set(value.m_th);
            set(value.m_ve);
            set(value.m_va);
            set(value.m_vo);
            set(value.m_ro);
            set(value.m_ph);
            set(value.m_calc_err);
            set(value.m_calc_source);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        LiveImpliedQuoteDisp() {
            m__meta.set_message_type("LiveImpliedQuoteDisp");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1017, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1017, length);
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
             *this = LiveImpliedQuoteDisp{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeClsBidIv() const {
            return !(m_cls_bid_iv == 0.0);
        }
        bool IncludeClsAskIv() const {
            return !(m_cls_ask_iv == 0.0);
        }
        bool IncludeClsMidVol() const {
            return !(m_cls_mid_vol == 0.0);
        }
        bool IncludeClsSrVol() const {
            return !(m_cls_sr_vol == 0.0);
        }
        bool IncludeOBidIv() const {
            return !(m_o_bid_iv == 0.0);
        }
        bool IncludeOAskIv() const {
            return !(m_o_ask_iv == 0.0);
        }
        bool IncludeMidVol() const {
            return !(m_mid_vol == 0.0);
        }
        bool IncludeSVol() const {
            return !(m_s_vol == 0.0);
        }
        bool IncludeSPrc() const {
            return !(m_s_prc == 0.0);
        }
        bool IncludePrtPrc() const {
            return !(m_prt_prc == 0.0);
        }
        bool IncludeSurfVol() const {
            return !(m_surf_vol == 0.0);
        }
        bool IncludePrtVolume() const {
            return !(m_prt_volume == 0);
        }
        bool IncludePrtIv() const {
            return !(m_prt_iv == 0.0);
        }
        bool IncludeDe() const {
            return !(m_de == 0.0);
        }
        bool IncludeGa() const {
            return !(m_ga == 0.0);
        }
        bool IncludeTh() const {
            return !(m_th == 0.0);
        }
        bool IncludeVe() const {
            return !(m_ve == 0.0);
        }
        bool IncludeVa() const {
            return !(m_va == 0.0);
        }
        bool IncludeVo() const {
            return !(m_vo == 0.0);
        }
        bool IncludeRo() const {
            return !(m_ro == 0.0);
        }
        bool IncludePh() const {
            return !(m_ph == 0.0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(101,m_u_prc);
            }
            if ( IncludeClsBidIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(102,m_cls_bid_iv);
            }
            if ( IncludeClsAskIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_cls_ask_iv);
            }
            if ( IncludeClsMidVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(104,m_cls_mid_vol);
            }
            if ( IncludeClsSrVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_cls_sr_vol);
            }
            if ( IncludeOBidIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_o_bid_iv);
            }
            if ( IncludeOAskIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_o_ask_iv);
            }
            if ( IncludeMidVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_mid_vol);
            }
            if ( IncludeSVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_s_vol);
            }
            if ( IncludeSPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_s_prc);
            }
            if ( IncludePrtPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_prt_prc);
            }
            if ( IncludeSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_surf_vol);
            }
            if ( IncludePrtVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(113,m_prt_volume);
            }
            if ( IncludePrtIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_prt_iv);
            }
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_de);
            }
            if ( IncludeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(116,m_ga);
            }
            if ( IncludeTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(117,m_th);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ve);
            }
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(119,m_va);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(120,m_vo);
            }
            if ( IncludeRo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ro);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_ph);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(123,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImpliedQuoteError>(m_calc_err)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(125,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(126,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,101,m_u_prc);
            }
            if ( IncludeClsBidIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,102,m_cls_bid_iv);
            }
            if ( IncludeClsAskIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_cls_ask_iv);
            }
            if ( IncludeClsMidVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,104,m_cls_mid_vol);
            }
            if ( IncludeClsSrVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_cls_sr_vol);
            }
            if ( IncludeOBidIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_o_bid_iv);
            }
            if ( IncludeOAskIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_o_ask_iv);
            }
            if ( IncludeMidVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_mid_vol);
            }
            if ( IncludeSVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_s_vol);
            }
            if ( IncludeSPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_s_prc);
            }
            if ( IncludePrtPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_prt_prc);
            }
            if ( IncludeSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_surf_vol);
            }
            if ( IncludePrtVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,113,m_prt_volume);
            }
            if ( IncludePrtIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_prt_iv);
            }
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_de);
            }
            if ( IncludeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,116,m_ga);
            }
            if ( IncludeTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,117,m_th);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ve);
            }
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,119,m_va);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,120,m_vo);
            }
            if ( IncludeRo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ro);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_ph);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,123,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImpliedQuoteError>(m_calc_err)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,125,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,126,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_timestamp);
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
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_bid_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_ask_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_mid_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_sr_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_bid_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_o_ask_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mid_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_volume = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 116: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ro = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_err = static_cast<spiderrock::protobuf::api::ImpliedQuoteError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_source = static_cast<spiderrock::protobuf::api::CalcSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {
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

    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::_meta>() const { return LiveImpliedQuoteDisp::_meta{ m__meta}; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::pkey>() const { return LiveImpliedQuoteDisp::pkey{ m_pkey}; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::ticker>() const { return LiveImpliedQuoteDisp::ticker{ m_ticker}; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::cls_bid_iv>() const { return m_cls_bid_iv; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::cls_ask_iv>() const { return m_cls_ask_iv; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::cls_mid_vol>() const { return m_cls_mid_vol; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::cls_sr_vol>() const { return m_cls_sr_vol; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::o_bid_iv>() const { return m_o_bid_iv; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::o_ask_iv>() const { return m_o_ask_iv; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::mid_vol>() const { return m_mid_vol; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::s_vol>() const { return m_s_vol; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::s_prc>() const { return m_s_prc; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::prt_prc>() const { return m_prt_prc; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::surf_vol>() const { return m_surf_vol; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::prt_volume>() const { return m_prt_volume; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::prt_iv>() const { return m_prt_iv; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::de>() const { return m_de; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::ga>() const { return m_ga; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::th>() const { return m_th; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::ve>() const { return m_ve; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::va>() const { return m_va; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::vo>() const { return m_vo; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::ro>() const { return m_ro; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::ph>() const { return m_ph; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::calc_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ImpliedQuoteError>( m_calc_err)); }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::calc_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>( m_calc_source)); }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto LiveImpliedQuoteDisp::get<LiveImpliedQuoteDisp::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveImpliedQuoteDisp_PKey::get<LiveImpliedQuoteDisp_PKey::okey>() const { return LiveImpliedQuoteDisp_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveImpliedQuoteDisp_PKey& m) {
        o << "\"okey\":{" << m.get<LiveImpliedQuoteDisp_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveImpliedQuoteDisp& m) {
        o << "\"_meta\":{" << m.get<LiveImpliedQuoteDisp::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveImpliedQuoteDisp::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveImpliedQuoteDisp::ticker>() << "}";
        o << ",\"u_prc\":" << m.get<LiveImpliedQuoteDisp::u_prc>();
        o << ",\"cls_bid_iv\":" << m.get<LiveImpliedQuoteDisp::cls_bid_iv>();
        o << ",\"cls_ask_iv\":" << m.get<LiveImpliedQuoteDisp::cls_ask_iv>();
        o << ",\"cls_mid_vol\":" << m.get<LiveImpliedQuoteDisp::cls_mid_vol>();
        o << ",\"cls_sr_vol\":" << m.get<LiveImpliedQuoteDisp::cls_sr_vol>();
        o << ",\"o_bid_iv\":" << m.get<LiveImpliedQuoteDisp::o_bid_iv>();
        o << ",\"o_ask_iv\":" << m.get<LiveImpliedQuoteDisp::o_ask_iv>();
        o << ",\"mid_vol\":" << m.get<LiveImpliedQuoteDisp::mid_vol>();
        o << ",\"s_vol\":" << m.get<LiveImpliedQuoteDisp::s_vol>();
        o << ",\"s_prc\":" << m.get<LiveImpliedQuoteDisp::s_prc>();
        o << ",\"prt_prc\":" << m.get<LiveImpliedQuoteDisp::prt_prc>();
        o << ",\"surf_vol\":" << m.get<LiveImpliedQuoteDisp::surf_vol>();
        o << ",\"prt_volume\":" << m.get<LiveImpliedQuoteDisp::prt_volume>();
        o << ",\"prt_iv\":" << m.get<LiveImpliedQuoteDisp::prt_iv>();
        o << ",\"de\":" << m.get<LiveImpliedQuoteDisp::de>();
        o << ",\"ga\":" << m.get<LiveImpliedQuoteDisp::ga>();
        o << ",\"th\":" << m.get<LiveImpliedQuoteDisp::th>();
        o << ",\"ve\":" << m.get<LiveImpliedQuoteDisp::ve>();
        o << ",\"va\":" << m.get<LiveImpliedQuoteDisp::va>();
        o << ",\"vo\":" << m.get<LiveImpliedQuoteDisp::vo>();
        o << ",\"ro\":" << m.get<LiveImpliedQuoteDisp::ro>();
        o << ",\"ph\":" << m.get<LiveImpliedQuoteDisp::ph>();
        o << ",\"calc_err\":" << (int64_t)m.get<LiveImpliedQuoteDisp::calc_err>();
        o << ",\"calc_source\":" << (int64_t)m.get<LiveImpliedQuoteDisp::calc_source>();
        o << ",\"src_timestamp\":" << m.get<LiveImpliedQuoteDisp::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<LiveImpliedQuoteDisp::net_timestamp>();
        {
            std::time_t tt = m.get<LiveImpliedQuoteDisp::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}