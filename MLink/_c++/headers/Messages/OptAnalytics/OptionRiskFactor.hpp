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

    #ifndef _svol__GUARD__
    #define _svol__GUARD__
    DECL_STRONG_TYPE(svol, float);
    #endif//_svol__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _up50__GUARD__
    #define _up50__GUARD__
    DECL_STRONG_TYPE(up50, float);
    #endif//_up50__GUARD__

    #ifndef _dn50__GUARD__
    #define _dn50__GUARD__
    DECL_STRONG_TYPE(dn50, float);
    #endif//_dn50__GUARD__

    #ifndef _up15__GUARD__
    #define _up15__GUARD__
    DECL_STRONG_TYPE(up15, float);
    #endif//_up15__GUARD__

    #ifndef _dn15__GUARD__
    #define _dn15__GUARD__
    DECL_STRONG_TYPE(dn15, float);
    #endif//_dn15__GUARD__

    #ifndef _up12__GUARD__
    #define _up12__GUARD__
    DECL_STRONG_TYPE(up12, float);
    #endif//_up12__GUARD__

    #ifndef _dn12__GUARD__
    #define _dn12__GUARD__
    DECL_STRONG_TYPE(dn12, float);
    #endif//_dn12__GUARD__

    #ifndef _up09__GUARD__
    #define _up09__GUARD__
    DECL_STRONG_TYPE(up09, float);
    #endif//_up09__GUARD__

    #ifndef _dn09__GUARD__
    #define _dn09__GUARD__
    DECL_STRONG_TYPE(dn09, float);
    #endif//_dn09__GUARD__

    #ifndef _dn08__GUARD__
    #define _dn08__GUARD__
    DECL_STRONG_TYPE(dn08, float);
    #endif//_dn08__GUARD__

    #ifndef _up06__GUARD__
    #define _up06__GUARD__
    DECL_STRONG_TYPE(up06, float);
    #endif//_up06__GUARD__

    #ifndef _dn06__GUARD__
    #define _dn06__GUARD__
    DECL_STRONG_TYPE(dn06, float);
    #endif//_dn06__GUARD__

    #ifndef _up03__GUARD__
    #define _up03__GUARD__
    DECL_STRONG_TYPE(up03, float);
    #endif//_up03__GUARD__

    #ifndef _dn03__GUARD__
    #define _dn03__GUARD__
    DECL_STRONG_TYPE(dn03, float);
    #endif//_dn03__GUARD__

    #ifndef _calc_err__string__GUARD__
    #define _calc_err__string__GUARD__
    DECL_STRONG_TYPE(calc_err__string, string);
    #endif//_calc_err__string__GUARD__

    #ifndef _calc_source__GUARD__
    #define _calc_source__GUARD__
    DECL_STRONG_TYPE(calc_source, spiderrock::protobuf::api::CalcSource);
    #endif//_calc_source__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionRiskFactor_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionRiskFactor_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionRiskFactor_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionRiskFactor_PKey() {}

        virtual ~OptionRiskFactor_PKey() {
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
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
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
    

    class OptionRiskFactor {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionRiskFactor_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using svol = spiderrock::protobuf::api::svol;
        using years = spiderrock::protobuf::api::years__float;
        using up50 = spiderrock::protobuf::api::up50;
        using dn50 = spiderrock::protobuf::api::dn50;
        using up15 = spiderrock::protobuf::api::up15;
        using dn15 = spiderrock::protobuf::api::dn15;
        using up12 = spiderrock::protobuf::api::up12;
        using dn12 = spiderrock::protobuf::api::dn12;
        using up09 = spiderrock::protobuf::api::up09;
        using dn09 = spiderrock::protobuf::api::dn09;
        using dn08 = spiderrock::protobuf::api::dn08;
        using up06 = spiderrock::protobuf::api::up06;
        using dn06 = spiderrock::protobuf::api::dn06;
        using up03 = spiderrock::protobuf::api::up03;
        using dn03 = spiderrock::protobuf::api::dn03;
        using calc_err = spiderrock::protobuf::api::calc_err__string;
        using calc_source = spiderrock::protobuf::api::calc_source;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        svol m_svol{};
        years m_years{};
        up50 m_up50{};
        dn50 m_dn50{};
        up15 m_up15{};
        dn15 m_dn15{};
        up12 m_up12{};
        dn12 m_dn12{};
        up09 m_up09{};
        dn09 m_dn09{};
        dn08 m_dn08{};
        up06 m_up06{};
        dn06 m_dn06{};
        up03 m_up03{};
        dn03 m_dn03{};
        calc_err m_calc_err{};
        calc_source m_calc_source{};
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
        svol get_svol() const {
            return m_svol;
        }		
        years get_years() const {
            return m_years;
        }		
        up50 get_up50() const {
            return m_up50;
        }		
        dn50 get_dn50() const {
            return m_dn50;
        }		
        up15 get_up15() const {
            return m_up15;
        }		
        dn15 get_dn15() const {
            return m_dn15;
        }		
        up12 get_up12() const {
            return m_up12;
        }		
        dn12 get_dn12() const {
            return m_dn12;
        }		
        up09 get_up09() const {
            return m_up09;
        }		
        dn09 get_dn09() const {
            return m_dn09;
        }		
        dn08 get_dn08() const {
            return m_dn08;
        }		
        up06 get_up06() const {
            return m_up06;
        }		
        dn06 get_dn06() const {
            return m_dn06;
        }		
        up03 get_up03() const {
            return m_up03;
        }		
        dn03 get_dn03() const {
            return m_dn03;
        }		
        calc_err get_calc_err() const {
            return m_calc_err;
        }		
        calc_source get_calc_source() const {
            return m_calc_source;
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
        void set_svol(const svol& value)  {
            m_svol = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_up50(const up50& value)  {
            m_up50 = value;
        }
        void set_dn50(const dn50& value)  {
            m_dn50 = value;
        }
        void set_up15(const up15& value)  {
            m_up15 = value;
        }
        void set_dn15(const dn15& value)  {
            m_dn15 = value;
        }
        void set_up12(const up12& value)  {
            m_up12 = value;
        }
        void set_dn12(const dn12& value)  {
            m_dn12 = value;
        }
        void set_up09(const up09& value)  {
            m_up09 = value;
        }
        void set_dn09(const dn09& value)  {
            m_dn09 = value;
        }
        void set_dn08(const dn08& value)  {
            m_dn08 = value;
        }
        void set_up06(const up06& value)  {
            m_up06 = value;
        }
        void set_dn06(const dn06& value)  {
            m_dn06 = value;
        }
        void set_up03(const up03& value)  {
            m_up03 = value;
        }
        void set_dn03(const dn03& value)  {
            m_dn03 = value;
        }
        void set_calc_err(const calc_err& value)  {
            m_calc_err = value;
        }
        void set_calc_source(const calc_source& value)  {
            m_calc_source = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionRiskFactor::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const svol & value) {
            set_svol(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const up50 & value) {
            set_up50(value);
        }
        void set(const dn50 & value) {
            set_dn50(value);
        }
        void set(const up15 & value) {
            set_up15(value);
        }
        void set(const dn15 & value) {
            set_dn15(value);
        }
        void set(const up12 & value) {
            set_up12(value);
        }
        void set(const dn12 & value) {
            set_dn12(value);
        }
        void set(const up09 & value) {
            set_up09(value);
        }
        void set(const dn09 & value) {
            set_dn09(value);
        }
        void set(const dn08 & value) {
            set_dn08(value);
        }
        void set(const up06 & value) {
            set_up06(value);
        }
        void set(const dn06 & value) {
            set_dn06(value);
        }
        void set(const up03 & value) {
            set_up03(value);
        }
        void set(const dn03 & value) {
            set_dn03(value);
        }
        void set(const calc_err & value) {
            set_calc_err(value);
        }
        void set(const calc_source & value) {
            set_calc_source(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionRiskFactor & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_svol);
            set(value.m_years);
            set(value.m_up50);
            set(value.m_dn50);
            set(value.m_up15);
            set(value.m_dn15);
            set(value.m_up12);
            set(value.m_dn12);
            set(value.m_up09);
            set(value.m_dn09);
            set(value.m_dn08);
            set(value.m_up06);
            set(value.m_dn06);
            set(value.m_up03);
            set(value.m_dn03);
            set(value.m_calc_err);
            set(value.m_calc_source);
            set(value.m_timestamp);
        }

        OptionRiskFactor() {
            m__meta.set_message_type("OptionRiskFactor");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1095, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1095, length);
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
             *this = OptionRiskFactor{};
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
        bool IncludeSvol() const {
            return !(m_svol == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeUp50() const {
            return !(m_up50 == 0.0);
        }
        bool IncludeDn50() const {
            return !(m_dn50 == 0.0);
        }
        bool IncludeUp15() const {
            return !(m_up15 == 0.0);
        }
        bool IncludeDn15() const {
            return !(m_dn15 == 0.0);
        }
        bool IncludeUp12() const {
            return !(m_up12 == 0.0);
        }
        bool IncludeDn12() const {
            return !(m_dn12 == 0.0);
        }
        bool IncludeUp09() const {
            return !(m_up09 == 0.0);
        }
        bool IncludeDn09() const {
            return !(m_dn09 == 0.0);
        }
        bool IncludeDn08() const {
            return !(m_dn08 == 0.0);
        }
        bool IncludeUp06() const {
            return !(m_up06 == 0.0);
        }
        bool IncludeDn06() const {
            return !(m_dn06 == 0.0);
        }
        bool IncludeUp03() const {
            return !(m_up03 == 0.0);
        }
        bool IncludeDn03() const {
            return !(m_dn03 == 0.0);
        }
        bool IncludeCalcErr() const {
            return !(m_calc_err.empty());
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_svol);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_years);
            }
            if ( IncludeUp50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_up50);
            }
            if ( IncludeDn50()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_dn50);
            }
            if ( IncludeUp15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_up15);
            }
            if ( IncludeDn15()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_dn15);
            }
            if ( IncludeUp12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_up12);
            }
            if ( IncludeDn12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_dn12);
            }
            if ( IncludeUp09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_up09);
            }
            if ( IncludeDn09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_dn09);
            }
            if ( IncludeDn08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_dn08);
            }
            if ( IncludeUp06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_up06);
            }
            if ( IncludeDn06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_dn06);
            }
            if ( IncludeUp03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_up03);
            }
            if ( IncludeDn03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_dn03);
            }
            if ( IncludeCalcErr()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_calc_err);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(154, m_timestamp);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_svol);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_years);
            }
            if ( IncludeUp50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_up50);
            }
            if ( IncludeDn50()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_dn50);
            }
            if ( IncludeUp15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_up15);
            }
            if ( IncludeDn15()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_dn15);
            }
            if ( IncludeUp12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_up12);
            }
            if ( IncludeDn12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_dn12);
            }
            if ( IncludeUp09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_up09);
            }
            if ( IncludeDn09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_dn09);
            }
            if ( IncludeDn08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_dn08);
            }
            if ( IncludeUp06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_up06);
            }
            if ( IncludeDn06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_dn06);
            }
            if ( IncludeUp03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_up03);
            }
            if ( IncludeDn03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_dn03);
            }
            if ( IncludeCalcErr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_calc_err));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,151,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>(m_calc_source)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 154, m_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn50 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn15 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_up03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_dn03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_calc_err = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_calc_source = static_cast<spiderrock::protobuf::api::CalcSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
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

    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::_meta>() const { return OptionRiskFactor::_meta{ m__meta}; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::pkey>() const { return OptionRiskFactor::pkey{ m_pkey}; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::ticker>() const { return OptionRiskFactor::ticker{ m_ticker}; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::svol>() const { return m_svol; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::years>() const { return m_years; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::up50>() const { return m_up50; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn50>() const { return m_dn50; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::up15>() const { return m_up15; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn15>() const { return m_dn15; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::up12>() const { return m_up12; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn12>() const { return m_dn12; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::up09>() const { return m_up09; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn09>() const { return m_dn09; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn08>() const { return m_dn08; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::up06>() const { return m_up06; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn06>() const { return m_dn06; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::up03>() const { return m_up03; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::dn03>() const { return m_dn03; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::calc_err>() const { return m_calc_err; }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::calc_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcSource>( m_calc_source)); }
    template<> inline const auto OptionRiskFactor::get<OptionRiskFactor::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionRiskFactor_PKey::get<OptionRiskFactor_PKey::okey>() const { return OptionRiskFactor_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionRiskFactor_PKey& m) {
        o << "\"okey\":{" << m.get<OptionRiskFactor_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionRiskFactor& m) {
        o << "\"_meta\":{" << m.get<OptionRiskFactor::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionRiskFactor::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<OptionRiskFactor::ticker>() << "}";
        o << ",\"svol\":" << m.get<OptionRiskFactor::svol>();
        o << ",\"years\":" << m.get<OptionRiskFactor::years>();
        o << ",\"up50\":" << m.get<OptionRiskFactor::up50>();
        o << ",\"dn50\":" << m.get<OptionRiskFactor::dn50>();
        o << ",\"up15\":" << m.get<OptionRiskFactor::up15>();
        o << ",\"dn15\":" << m.get<OptionRiskFactor::dn15>();
        o << ",\"up12\":" << m.get<OptionRiskFactor::up12>();
        o << ",\"dn12\":" << m.get<OptionRiskFactor::dn12>();
        o << ",\"up09\":" << m.get<OptionRiskFactor::up09>();
        o << ",\"dn09\":" << m.get<OptionRiskFactor::dn09>();
        o << ",\"dn08\":" << m.get<OptionRiskFactor::dn08>();
        o << ",\"up06\":" << m.get<OptionRiskFactor::up06>();
        o << ",\"dn06\":" << m.get<OptionRiskFactor::dn06>();
        o << ",\"up03\":" << m.get<OptionRiskFactor::up03>();
        o << ",\"dn03\":" << m.get<OptionRiskFactor::dn03>();
        o << ",\"calc_err\":\"" << m.get<OptionRiskFactor::calc_err>() << "\"";
        o << ",\"calc_source\":" << (int64_t)m.get<OptionRiskFactor::calc_source>();
        {
            std::time_t tt = m.get<OptionRiskFactor::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}