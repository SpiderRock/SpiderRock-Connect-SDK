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

    #ifndef _cn_prt__GUARD__
    #define _cn_prt__GUARD__
    DECL_STRONG_TYPE(cn_prt, int32);
    #endif//_cn_prt__GUARD__

    #ifndef _cn_bot__GUARD__
    #define _cn_bot__GUARD__
    DECL_STRONG_TYPE(cn_bot, int32);
    #endif//_cn_bot__GUARD__

    #ifndef _cn_sld__GUARD__
    #define _cn_sld__GUARD__
    DECL_STRONG_TYPE(cn_sld, int32);
    #endif//_cn_sld__GUARD__

    #ifndef _ve_prt__GUARD__
    #define _ve_prt__GUARD__
    DECL_STRONG_TYPE(ve_prt, float);
    #endif//_ve_prt__GUARD__

    #ifndef _ve_bot__GUARD__
    #define _ve_bot__GUARD__
    DECL_STRONG_TYPE(ve_bot, float);
    #endif//_ve_bot__GUARD__

    #ifndef _ve_sld__GUARD__
    #define _ve_sld__GUARD__
    DECL_STRONG_TYPE(ve_sld, float);
    #endif//_ve_sld__GUARD__

    #ifndef _ve_dd_prt__GUARD__
    #define _ve_dd_prt__GUARD__
    DECL_STRONG_TYPE(ve_dd_prt, float);
    #endif//_ve_dd_prt__GUARD__

    #ifndef _ve_dn_prt__GUARD__
    #define _ve_dn_prt__GUARD__
    DECL_STRONG_TYPE(ve_dn_prt, float);
    #endif//_ve_dn_prt__GUARD__

    #ifndef _ve_at_prt__GUARD__
    #define _ve_at_prt__GUARD__
    DECL_STRONG_TYPE(ve_at_prt, float);
    #endif//_ve_at_prt__GUARD__

    #ifndef _ve_up_prt__GUARD__
    #define _ve_up_prt__GUARD__
    DECL_STRONG_TYPE(ve_up_prt, float);
    #endif//_ve_up_prt__GUARD__

    #ifndef _ve_du_prt__GUARD__
    #define _ve_du_prt__GUARD__
    DECL_STRONG_TYPE(ve_du_prt, float);
    #endif//_ve_du_prt__GUARD__

    #ifndef _ve_dd_bot__GUARD__
    #define _ve_dd_bot__GUARD__
    DECL_STRONG_TYPE(ve_dd_bot, float);
    #endif//_ve_dd_bot__GUARD__

    #ifndef _ve_dn_bot__GUARD__
    #define _ve_dn_bot__GUARD__
    DECL_STRONG_TYPE(ve_dn_bot, float);
    #endif//_ve_dn_bot__GUARD__

    #ifndef _ve_at_bot__GUARD__
    #define _ve_at_bot__GUARD__
    DECL_STRONG_TYPE(ve_at_bot, float);
    #endif//_ve_at_bot__GUARD__

    #ifndef _ve_up_bot__GUARD__
    #define _ve_up_bot__GUARD__
    DECL_STRONG_TYPE(ve_up_bot, float);
    #endif//_ve_up_bot__GUARD__

    #ifndef _ve_du_bot__GUARD__
    #define _ve_du_bot__GUARD__
    DECL_STRONG_TYPE(ve_du_bot, float);
    #endif//_ve_du_bot__GUARD__

    #ifndef _ve_dd_sld__GUARD__
    #define _ve_dd_sld__GUARD__
    DECL_STRONG_TYPE(ve_dd_sld, float);
    #endif//_ve_dd_sld__GUARD__

    #ifndef _ve_dn_sld__GUARD__
    #define _ve_dn_sld__GUARD__
    DECL_STRONG_TYPE(ve_dn_sld, float);
    #endif//_ve_dn_sld__GUARD__

    #ifndef _ve_at_sld__GUARD__
    #define _ve_at_sld__GUARD__
    DECL_STRONG_TYPE(ve_at_sld, float);
    #endif//_ve_at_sld__GUARD__

    #ifndef _ve_up_sld__GUARD__
    #define _ve_up_sld__GUARD__
    DECL_STRONG_TYPE(ve_up_sld, float);
    #endif//_ve_up_sld__GUARD__

    #ifndef _ve_du_sld__GUARD__
    #define _ve_du_sld__GUARD__
    DECL_STRONG_TYPE(ve_du_sld, float);
    #endif//_ve_du_sld__GUARD__

    #ifndef _rec_cnt__GUARD__
    #define _rec_cnt__GUARD__
    DECL_STRONG_TYPE(rec_cnt, int32);
    #endif//_rec_cnt__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _prt_summary_type__GUARD__
    #define _prt_summary_type__GUARD__
    DECL_STRONG_TYPE(prt_summary_type, spiderrock::protobuf::api::PrtSummaryType);
    #endif//_prt_summary_type__GUARD__

    
    class OptionPrintSummary_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using prt_summary_type = spiderrock::protobuf::api::prt_summary_type;

        private:
        ekey m_ekey{};
        prt_summary_type m_prt_summary_type{};

        public:
		ekey get_ekey() const {
            return m_ekey;
        }
        prt_summary_type get_prt_summary_type() const {
            return m_prt_summary_type;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_prt_summary_type(const prt_summary_type& value)  {
            m_prt_summary_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const prt_summary_type & value) { set_prt_summary_type(value); }


        OptionPrintSummary_PKey() {}

        virtual ~OptionPrintSummary_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_ekey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSummaryType>(m_prt_summary_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_ekey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSummaryType>(m_prt_summary_type)));
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
                    case 11: {m_prt_summary_type = static_cast<spiderrock::protobuf::api::PrtSummaryType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class OptionPrintSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPrintSummary_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using cn_prt = spiderrock::protobuf::api::cn_prt;
        using cn_bot = spiderrock::protobuf::api::cn_bot;
        using cn_sld = spiderrock::protobuf::api::cn_sld;
        using ve_prt = spiderrock::protobuf::api::ve_prt;
        using ve_bot = spiderrock::protobuf::api::ve_bot;
        using ve_sld = spiderrock::protobuf::api::ve_sld;
        using ve_dd_prt = spiderrock::protobuf::api::ve_dd_prt;
        using ve_dn_prt = spiderrock::protobuf::api::ve_dn_prt;
        using ve_at_prt = spiderrock::protobuf::api::ve_at_prt;
        using ve_up_prt = spiderrock::protobuf::api::ve_up_prt;
        using ve_du_prt = spiderrock::protobuf::api::ve_du_prt;
        using ve_dd_bot = spiderrock::protobuf::api::ve_dd_bot;
        using ve_dn_bot = spiderrock::protobuf::api::ve_dn_bot;
        using ve_at_bot = spiderrock::protobuf::api::ve_at_bot;
        using ve_up_bot = spiderrock::protobuf::api::ve_up_bot;
        using ve_du_bot = spiderrock::protobuf::api::ve_du_bot;
        using ve_dd_sld = spiderrock::protobuf::api::ve_dd_sld;
        using ve_dn_sld = spiderrock::protobuf::api::ve_dn_sld;
        using ve_at_sld = spiderrock::protobuf::api::ve_at_sld;
        using ve_up_sld = spiderrock::protobuf::api::ve_up_sld;
        using ve_du_sld = spiderrock::protobuf::api::ve_du_sld;
        using rec_cnt = spiderrock::protobuf::api::rec_cnt;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        cn_prt m_cn_prt{};
        cn_bot m_cn_bot{};
        cn_sld m_cn_sld{};
        ve_prt m_ve_prt{};
        ve_bot m_ve_bot{};
        ve_sld m_ve_sld{};
        ve_dd_prt m_ve_dd_prt{};
        ve_dn_prt m_ve_dn_prt{};
        ve_at_prt m_ve_at_prt{};
        ve_up_prt m_ve_up_prt{};
        ve_du_prt m_ve_du_prt{};
        ve_dd_bot m_ve_dd_bot{};
        ve_dn_bot m_ve_dn_bot{};
        ve_at_bot m_ve_at_bot{};
        ve_up_bot m_ve_up_bot{};
        ve_du_bot m_ve_du_bot{};
        ve_dd_sld m_ve_dd_sld{};
        ve_dn_sld m_ve_dn_sld{};
        ve_at_sld m_ve_at_sld{};
        ve_up_sld m_ve_up_sld{};
        ve_du_sld m_ve_du_sld{};
        rec_cnt m_rec_cnt{};
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
        cn_prt get_cn_prt() const {
            return m_cn_prt;
        }		
        cn_bot get_cn_bot() const {
            return m_cn_bot;
        }		
        cn_sld get_cn_sld() const {
            return m_cn_sld;
        }		
        ve_prt get_ve_prt() const {
            return m_ve_prt;
        }		
        ve_bot get_ve_bot() const {
            return m_ve_bot;
        }		
        ve_sld get_ve_sld() const {
            return m_ve_sld;
        }		
        ve_dd_prt get_ve_dd_prt() const {
            return m_ve_dd_prt;
        }		
        ve_dn_prt get_ve_dn_prt() const {
            return m_ve_dn_prt;
        }		
        ve_at_prt get_ve_at_prt() const {
            return m_ve_at_prt;
        }		
        ve_up_prt get_ve_up_prt() const {
            return m_ve_up_prt;
        }		
        ve_du_prt get_ve_du_prt() const {
            return m_ve_du_prt;
        }		
        ve_dd_bot get_ve_dd_bot() const {
            return m_ve_dd_bot;
        }		
        ve_dn_bot get_ve_dn_bot() const {
            return m_ve_dn_bot;
        }		
        ve_at_bot get_ve_at_bot() const {
            return m_ve_at_bot;
        }		
        ve_up_bot get_ve_up_bot() const {
            return m_ve_up_bot;
        }		
        ve_du_bot get_ve_du_bot() const {
            return m_ve_du_bot;
        }		
        ve_dd_sld get_ve_dd_sld() const {
            return m_ve_dd_sld;
        }		
        ve_dn_sld get_ve_dn_sld() const {
            return m_ve_dn_sld;
        }		
        ve_at_sld get_ve_at_sld() const {
            return m_ve_at_sld;
        }		
        ve_up_sld get_ve_up_sld() const {
            return m_ve_up_sld;
        }		
        ve_du_sld get_ve_du_sld() const {
            return m_ve_du_sld;
        }		
        rec_cnt get_rec_cnt() const {
            return m_rec_cnt;
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
        void set_cn_prt(const cn_prt& value)  {
            m_cn_prt = value;
        }
        void set_cn_bot(const cn_bot& value)  {
            m_cn_bot = value;
        }
        void set_cn_sld(const cn_sld& value)  {
            m_cn_sld = value;
        }
        void set_ve_prt(const ve_prt& value)  {
            m_ve_prt = value;
        }
        void set_ve_bot(const ve_bot& value)  {
            m_ve_bot = value;
        }
        void set_ve_sld(const ve_sld& value)  {
            m_ve_sld = value;
        }
        void set_ve_dd_prt(const ve_dd_prt& value)  {
            m_ve_dd_prt = value;
        }
        void set_ve_dn_prt(const ve_dn_prt& value)  {
            m_ve_dn_prt = value;
        }
        void set_ve_at_prt(const ve_at_prt& value)  {
            m_ve_at_prt = value;
        }
        void set_ve_up_prt(const ve_up_prt& value)  {
            m_ve_up_prt = value;
        }
        void set_ve_du_prt(const ve_du_prt& value)  {
            m_ve_du_prt = value;
        }
        void set_ve_dd_bot(const ve_dd_bot& value)  {
            m_ve_dd_bot = value;
        }
        void set_ve_dn_bot(const ve_dn_bot& value)  {
            m_ve_dn_bot = value;
        }
        void set_ve_at_bot(const ve_at_bot& value)  {
            m_ve_at_bot = value;
        }
        void set_ve_up_bot(const ve_up_bot& value)  {
            m_ve_up_bot = value;
        }
        void set_ve_du_bot(const ve_du_bot& value)  {
            m_ve_du_bot = value;
        }
        void set_ve_dd_sld(const ve_dd_sld& value)  {
            m_ve_dd_sld = value;
        }
        void set_ve_dn_sld(const ve_dn_sld& value)  {
            m_ve_dn_sld = value;
        }
        void set_ve_at_sld(const ve_at_sld& value)  {
            m_ve_at_sld = value;
        }
        void set_ve_up_sld(const ve_up_sld& value)  {
            m_ve_up_sld = value;
        }
        void set_ve_du_sld(const ve_du_sld& value)  {
            m_ve_du_sld = value;
        }
        void set_rec_cnt(const rec_cnt& value)  {
            m_rec_cnt = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const cn_prt & value) {
            set_cn_prt(value);
        }
        void set(const cn_bot & value) {
            set_cn_bot(value);
        }
        void set(const cn_sld & value) {
            set_cn_sld(value);
        }
        void set(const ve_prt & value) {
            set_ve_prt(value);
        }
        void set(const ve_bot & value) {
            set_ve_bot(value);
        }
        void set(const ve_sld & value) {
            set_ve_sld(value);
        }
        void set(const ve_dd_prt & value) {
            set_ve_dd_prt(value);
        }
        void set(const ve_dn_prt & value) {
            set_ve_dn_prt(value);
        }
        void set(const ve_at_prt & value) {
            set_ve_at_prt(value);
        }
        void set(const ve_up_prt & value) {
            set_ve_up_prt(value);
        }
        void set(const ve_du_prt & value) {
            set_ve_du_prt(value);
        }
        void set(const ve_dd_bot & value) {
            set_ve_dd_bot(value);
        }
        void set(const ve_dn_bot & value) {
            set_ve_dn_bot(value);
        }
        void set(const ve_at_bot & value) {
            set_ve_at_bot(value);
        }
        void set(const ve_up_bot & value) {
            set_ve_up_bot(value);
        }
        void set(const ve_du_bot & value) {
            set_ve_du_bot(value);
        }
        void set(const ve_dd_sld & value) {
            set_ve_dd_sld(value);
        }
        void set(const ve_dn_sld & value) {
            set_ve_dn_sld(value);
        }
        void set(const ve_at_sld & value) {
            set_ve_at_sld(value);
        }
        void set(const ve_up_sld & value) {
            set_ve_up_sld(value);
        }
        void set(const ve_du_sld & value) {
            set_ve_du_sld(value);
        }
        void set(const rec_cnt & value) {
            set_rec_cnt(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionPrintSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_cn_prt);
            set(value.m_cn_bot);
            set(value.m_cn_sld);
            set(value.m_ve_prt);
            set(value.m_ve_bot);
            set(value.m_ve_sld);
            set(value.m_ve_dd_prt);
            set(value.m_ve_dn_prt);
            set(value.m_ve_at_prt);
            set(value.m_ve_up_prt);
            set(value.m_ve_du_prt);
            set(value.m_ve_dd_bot);
            set(value.m_ve_dn_bot);
            set(value.m_ve_at_bot);
            set(value.m_ve_up_bot);
            set(value.m_ve_du_bot);
            set(value.m_ve_dd_sld);
            set(value.m_ve_dn_sld);
            set(value.m_ve_at_sld);
            set(value.m_ve_up_sld);
            set(value.m_ve_du_sld);
            set(value.m_rec_cnt);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        OptionPrintSummary() {
            m__meta.set_message_type("OptionPrintSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2825, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2825, length);
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
             *this = OptionPrintSummary{};
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
        bool IncludeCnPrt() const {
            return !(m_cn_prt == 0);
        }
        bool IncludeCnBot() const {
            return !(m_cn_bot == 0);
        }
        bool IncludeCnSld() const {
            return !(m_cn_sld == 0);
        }
        bool IncludeVePrt() const {
            return !(m_ve_prt == 0.0);
        }
        bool IncludeVeBot() const {
            return !(m_ve_bot == 0.0);
        }
        bool IncludeVeSld() const {
            return !(m_ve_sld == 0.0);
        }
        bool IncludeVeDdPrt() const {
            return !(m_ve_dd_prt == 0.0);
        }
        bool IncludeVeDnPrt() const {
            return !(m_ve_dn_prt == 0.0);
        }
        bool IncludeVeAtPrt() const {
            return !(m_ve_at_prt == 0.0);
        }
        bool IncludeVeUpPrt() const {
            return !(m_ve_up_prt == 0.0);
        }
        bool IncludeVeDuPrt() const {
            return !(m_ve_du_prt == 0.0);
        }
        bool IncludeVeDdBot() const {
            return !(m_ve_dd_bot == 0.0);
        }
        bool IncludeVeDnBot() const {
            return !(m_ve_dn_bot == 0.0);
        }
        bool IncludeVeAtBot() const {
            return !(m_ve_at_bot == 0.0);
        }
        bool IncludeVeUpBot() const {
            return !(m_ve_up_bot == 0.0);
        }
        bool IncludeVeDuBot() const {
            return !(m_ve_du_bot == 0.0);
        }
        bool IncludeVeDdSld() const {
            return !(m_ve_dd_sld == 0.0);
        }
        bool IncludeVeDnSld() const {
            return !(m_ve_dn_sld == 0.0);
        }
        bool IncludeVeAtSld() const {
            return !(m_ve_at_sld == 0.0);
        }
        bool IncludeVeUpSld() const {
            return !(m_ve_up_sld == 0.0);
        }
        bool IncludeVeDuSld() const {
            return !(m_ve_du_sld == 0.0);
        }
        bool IncludeRecCnt() const {
            return !(m_rec_cnt == 0);
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
            if ( IncludeCnPrt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_cn_prt);
            }
            if ( IncludeCnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_cn_sld);
            }
            if ( IncludeVePrt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_ve_prt);
            }
            if ( IncludeVeBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ve_bot);
            }
            if ( IncludeVeSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ve_sld);
            }
            if ( IncludeVeDdPrt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ve_dd_prt);
            }
            if ( IncludeVeDnPrt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_ve_dn_prt);
            }
            if ( IncludeVeAtPrt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_ve_at_prt);
            }
            if ( IncludeVeUpPrt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_ve_up_prt);
            }
            if ( IncludeVeDuPrt()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_ve_du_prt);
            }
            if ( IncludeVeDdBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_ve_dd_bot);
            }
            if ( IncludeVeDnBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_ve_dn_bot);
            }
            if ( IncludeVeAtBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_ve_at_bot);
            }
            if ( IncludeVeUpBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_ve_up_bot);
            }
            if ( IncludeVeDuBot()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_ve_du_bot);
            }
            if ( IncludeVeDdSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_ve_dd_sld);
            }
            if ( IncludeVeDnSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_ve_dn_sld);
            }
            if ( IncludeVeAtSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_ve_at_sld);
            }
            if ( IncludeVeUpSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_ve_up_sld);
            }
            if ( IncludeVeDuSld()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_ve_du_sld);
            }
            if ( IncludeRecCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(166,m_rec_cnt);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(169,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(170, m_timestamp);
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
            if ( IncludeCnPrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_cn_prt);
            }
            if ( IncludeCnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_cn_bot);
            }
            if ( IncludeCnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_cn_sld);
            }
            if ( IncludeVePrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_ve_prt);
            }
            if ( IncludeVeBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ve_bot);
            }
            if ( IncludeVeSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ve_sld);
            }
            if ( IncludeVeDdPrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ve_dd_prt);
            }
            if ( IncludeVeDnPrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_ve_dn_prt);
            }
            if ( IncludeVeAtPrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_ve_at_prt);
            }
            if ( IncludeVeUpPrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_ve_up_prt);
            }
            if ( IncludeVeDuPrt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_ve_du_prt);
            }
            if ( IncludeVeDdBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_ve_dd_bot);
            }
            if ( IncludeVeDnBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_ve_dn_bot);
            }
            if ( IncludeVeAtBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_ve_at_bot);
            }
            if ( IncludeVeUpBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_ve_up_bot);
            }
            if ( IncludeVeDuBot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_ve_du_bot);
            }
            if ( IncludeVeDdSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_ve_dd_sld);
            }
            if ( IncludeVeDnSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_ve_dn_sld);
            }
            if ( IncludeVeAtSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_ve_at_sld);
            }
            if ( IncludeVeUpSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_ve_up_sld);
            }
            if ( IncludeVeDuSld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_ve_du_sld);
            }
            if ( IncludeRecCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,166,m_rec_cnt);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,169,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 170, m_timestamp);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_prt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_bot = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cn_sld = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_prt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_dd_prt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_dn_prt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_at_prt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_up_prt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_du_prt = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_dd_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_dn_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_at_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_up_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_du_bot = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_dd_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_dn_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_at_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_up_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve_du_sld = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_rec_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 170: {
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

    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::_meta>() const { return OptionPrintSummary::_meta{ m__meta}; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::pkey>() const { return OptionPrintSummary::pkey{ m_pkey}; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ticker>() const { return OptionPrintSummary::ticker{ m_ticker}; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::cn_prt>() const { return m_cn_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::cn_bot>() const { return m_cn_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::cn_sld>() const { return m_cn_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_prt>() const { return m_ve_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_bot>() const { return m_ve_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_sld>() const { return m_ve_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_dd_prt>() const { return m_ve_dd_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_dn_prt>() const { return m_ve_dn_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_at_prt>() const { return m_ve_at_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_up_prt>() const { return m_ve_up_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_du_prt>() const { return m_ve_du_prt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_dd_bot>() const { return m_ve_dd_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_dn_bot>() const { return m_ve_dn_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_at_bot>() const { return m_ve_at_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_up_bot>() const { return m_ve_up_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_du_bot>() const { return m_ve_du_bot; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_dd_sld>() const { return m_ve_dd_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_dn_sld>() const { return m_ve_dn_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_at_sld>() const { return m_ve_at_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_up_sld>() const { return m_ve_up_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::ve_du_sld>() const { return m_ve_du_sld; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::rec_cnt>() const { return m_rec_cnt; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionPrintSummary::get<OptionPrintSummary::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionPrintSummary_PKey::get<OptionPrintSummary_PKey::ekey>() const { return OptionPrintSummary_PKey::ekey{m_ekey}; }
    template<> inline const auto OptionPrintSummary_PKey::get<OptionPrintSummary_PKey::prt_summary_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtSummaryType>(m_prt_summary_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintSummary_PKey& m) {
        o << "\"ekey\":{" << m.get<OptionPrintSummary_PKey::ekey>() << "}";
        o << ",\"prt_summary_type\":" << (int64_t)m.get<OptionPrintSummary_PKey::prt_summary_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintSummary& m) {
        o << "\"_meta\":{" << m.get<OptionPrintSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPrintSummary::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptionPrintSummary::ticker>() << "}";
        o << ",\"cn_prt\":" << m.get<OptionPrintSummary::cn_prt>();
        o << ",\"cn_bot\":" << m.get<OptionPrintSummary::cn_bot>();
        o << ",\"cn_sld\":" << m.get<OptionPrintSummary::cn_sld>();
        o << ",\"ve_prt\":" << m.get<OptionPrintSummary::ve_prt>();
        o << ",\"ve_bot\":" << m.get<OptionPrintSummary::ve_bot>();
        o << ",\"ve_sld\":" << m.get<OptionPrintSummary::ve_sld>();
        o << ",\"ve_dd_prt\":" << m.get<OptionPrintSummary::ve_dd_prt>();
        o << ",\"ve_dn_prt\":" << m.get<OptionPrintSummary::ve_dn_prt>();
        o << ",\"ve_at_prt\":" << m.get<OptionPrintSummary::ve_at_prt>();
        o << ",\"ve_up_prt\":" << m.get<OptionPrintSummary::ve_up_prt>();
        o << ",\"ve_du_prt\":" << m.get<OptionPrintSummary::ve_du_prt>();
        o << ",\"ve_dd_bot\":" << m.get<OptionPrintSummary::ve_dd_bot>();
        o << ",\"ve_dn_bot\":" << m.get<OptionPrintSummary::ve_dn_bot>();
        o << ",\"ve_at_bot\":" << m.get<OptionPrintSummary::ve_at_bot>();
        o << ",\"ve_up_bot\":" << m.get<OptionPrintSummary::ve_up_bot>();
        o << ",\"ve_du_bot\":" << m.get<OptionPrintSummary::ve_du_bot>();
        o << ",\"ve_dd_sld\":" << m.get<OptionPrintSummary::ve_dd_sld>();
        o << ",\"ve_dn_sld\":" << m.get<OptionPrintSummary::ve_dn_sld>();
        o << ",\"ve_at_sld\":" << m.get<OptionPrintSummary::ve_at_sld>();
        o << ",\"ve_up_sld\":" << m.get<OptionPrintSummary::ve_up_sld>();
        o << ",\"ve_du_sld\":" << m.get<OptionPrintSummary::ve_du_sld>();
        o << ",\"rec_cnt\":" << m.get<OptionPrintSummary::rec_cnt>();
        o << ",\"net_timestamp\":" << m.get<OptionPrintSummary::net_timestamp>();
        {
            std::time_t tt = m.get<OptionPrintSummary::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}