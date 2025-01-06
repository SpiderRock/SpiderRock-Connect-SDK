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

    #ifndef _x_axis_type__GUARD__
    #define _x_axis_type__GUARD__
    DECL_STRONG_TYPE(x_axis_type, spiderrock::protobuf::api::XAxisType);
    #endif//_x_axis_type__GUARD__

    #ifndef _axis_vol__GUARD__
    #define _axis_vol__GUARD__
    DECL_STRONG_TYPE(axis_vol, float);
    #endif//_axis_vol__GUARD__

    #ifndef _x00__GUARD__
    #define _x00__GUARD__
    DECL_STRONG_TYPE(x00, float);
    #endif//_x00__GUARD__

    #ifndef _x01__GUARD__
    #define _x01__GUARD__
    DECL_STRONG_TYPE(x01, float);
    #endif//_x01__GUARD__

    #ifndef _x02__GUARD__
    #define _x02__GUARD__
    DECL_STRONG_TYPE(x02, float);
    #endif//_x02__GUARD__

    #ifndef _x03__GUARD__
    #define _x03__GUARD__
    DECL_STRONG_TYPE(x03, float);
    #endif//_x03__GUARD__

    #ifndef _x04__GUARD__
    #define _x04__GUARD__
    DECL_STRONG_TYPE(x04, float);
    #endif//_x04__GUARD__

    #ifndef _x05__GUARD__
    #define _x05__GUARD__
    DECL_STRONG_TYPE(x05, float);
    #endif//_x05__GUARD__

    #ifndef _x06__GUARD__
    #define _x06__GUARD__
    DECL_STRONG_TYPE(x06, float);
    #endif//_x06__GUARD__

    #ifndef _x07__GUARD__
    #define _x07__GUARD__
    DECL_STRONG_TYPE(x07, float);
    #endif//_x07__GUARD__

    #ifndef _x08__GUARD__
    #define _x08__GUARD__
    DECL_STRONG_TYPE(x08, float);
    #endif//_x08__GUARD__

    #ifndef _x09__GUARD__
    #define _x09__GUARD__
    DECL_STRONG_TYPE(x09, float);
    #endif//_x09__GUARD__

    #ifndef _x10__GUARD__
    #define _x10__GUARD__
    DECL_STRONG_TYPE(x10, float);
    #endif//_x10__GUARD__

    #ifndef _x11__GUARD__
    #define _x11__GUARD__
    DECL_STRONG_TYPE(x11, float);
    #endif//_x11__GUARD__

    #ifndef _x12__GUARD__
    #define _x12__GUARD__
    DECL_STRONG_TYPE(x12, float);
    #endif//_x12__GUARD__

    #ifndef _x13__GUARD__
    #define _x13__GUARD__
    DECL_STRONG_TYPE(x13, float);
    #endif//_x13__GUARD__

    #ifndef _x14__GUARD__
    #define _x14__GUARD__
    DECL_STRONG_TYPE(x14, float);
    #endif//_x14__GUARD__

    #ifndef _y00__GUARD__
    #define _y00__GUARD__
    DECL_STRONG_TYPE(y00, float);
    #endif//_y00__GUARD__

    #ifndef _y01__GUARD__
    #define _y01__GUARD__
    DECL_STRONG_TYPE(y01, float);
    #endif//_y01__GUARD__

    #ifndef _y02__GUARD__
    #define _y02__GUARD__
    DECL_STRONG_TYPE(y02, float);
    #endif//_y02__GUARD__

    #ifndef _y03__GUARD__
    #define _y03__GUARD__
    DECL_STRONG_TYPE(y03, float);
    #endif//_y03__GUARD__

    #ifndef _y04__GUARD__
    #define _y04__GUARD__
    DECL_STRONG_TYPE(y04, float);
    #endif//_y04__GUARD__

    #ifndef _y05__GUARD__
    #define _y05__GUARD__
    DECL_STRONG_TYPE(y05, float);
    #endif//_y05__GUARD__

    #ifndef _y06__GUARD__
    #define _y06__GUARD__
    DECL_STRONG_TYPE(y06, float);
    #endif//_y06__GUARD__

    #ifndef _y07__GUARD__
    #define _y07__GUARD__
    DECL_STRONG_TYPE(y07, float);
    #endif//_y07__GUARD__

    #ifndef _y08__GUARD__
    #define _y08__GUARD__
    DECL_STRONG_TYPE(y08, float);
    #endif//_y08__GUARD__

    #ifndef _y09__GUARD__
    #define _y09__GUARD__
    DECL_STRONG_TYPE(y09, float);
    #endif//_y09__GUARD__

    #ifndef _y10__GUARD__
    #define _y10__GUARD__
    DECL_STRONG_TYPE(y10, float);
    #endif//_y10__GUARD__

    #ifndef _y11__GUARD__
    #define _y11__GUARD__
    DECL_STRONG_TYPE(y11, float);
    #endif//_y11__GUARD__

    #ifndef _y12__GUARD__
    #define _y12__GUARD__
    DECL_STRONG_TYPE(y12, float);
    #endif//_y12__GUARD__

    #ifndef _y13__GUARD__
    #define _y13__GUARD__
    DECL_STRONG_TYPE(y13, float);
    #endif//_y13__GUARD__

    #ifndef _y14__GUARD__
    #define _y14__GUARD__
    DECL_STRONG_TYPE(y14, float);
    #endif//_y14__GUARD__

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

    
    class SpdrTheoExp2PtCurve_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ekey m_ekey{};
        theo_model m_theo_model{};
        client_firm m_client_firm{};

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
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrTheoExp2PtCurve_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrTheoExp2PtCurve_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }
        void set(const theo_model & value) { set_theo_model(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrTheoExp2PtCurve_PKey() {}

        virtual ~SpdrTheoExp2PtCurve_PKey() {
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
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout_ekey);
            }
            if ( IncludeTheoModel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_theo_model);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout_ekey);
            }
            if ( IncludeTheoModel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_theo_model));
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
                }
            }
        }

    };
    

    class SpdrTheoExp2PtCurve {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrTheoExp2PtCurve_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using x_axis_type = spiderrock::protobuf::api::x_axis_type;
        using axis_vol = spiderrock::protobuf::api::axis_vol;
        using x00 = spiderrock::protobuf::api::x00;
        using x01 = spiderrock::protobuf::api::x01;
        using x02 = spiderrock::protobuf::api::x02;
        using x03 = spiderrock::protobuf::api::x03;
        using x04 = spiderrock::protobuf::api::x04;
        using x05 = spiderrock::protobuf::api::x05;
        using x06 = spiderrock::protobuf::api::x06;
        using x07 = spiderrock::protobuf::api::x07;
        using x08 = spiderrock::protobuf::api::x08;
        using x09 = spiderrock::protobuf::api::x09;
        using x10 = spiderrock::protobuf::api::x10;
        using x11 = spiderrock::protobuf::api::x11;
        using x12 = spiderrock::protobuf::api::x12;
        using x13 = spiderrock::protobuf::api::x13;
        using x14 = spiderrock::protobuf::api::x14;
        using y00 = spiderrock::protobuf::api::y00;
        using y01 = spiderrock::protobuf::api::y01;
        using y02 = spiderrock::protobuf::api::y02;
        using y03 = spiderrock::protobuf::api::y03;
        using y04 = spiderrock::protobuf::api::y04;
        using y05 = spiderrock::protobuf::api::y05;
        using y06 = spiderrock::protobuf::api::y06;
        using y07 = spiderrock::protobuf::api::y07;
        using y08 = spiderrock::protobuf::api::y08;
        using y09 = spiderrock::protobuf::api::y09;
        using y10 = spiderrock::protobuf::api::y10;
        using y11 = spiderrock::protobuf::api::y11;
        using y12 = spiderrock::protobuf::api::y12;
        using y13 = spiderrock::protobuf::api::y13;
        using y14 = spiderrock::protobuf::api::y14;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        x_axis_type m_x_axis_type{};
        axis_vol m_axis_vol{};
        x00 m_x00{};
        x01 m_x01{};
        x02 m_x02{};
        x03 m_x03{};
        x04 m_x04{};
        x05 m_x05{};
        x06 m_x06{};
        x07 m_x07{};
        x08 m_x08{};
        x09 m_x09{};
        x10 m_x10{};
        x11 m_x11{};
        x12 m_x12{};
        x13 m_x13{};
        x14 m_x14{};
        y00 m_y00{};
        y01 m_y01{};
        y02 m_y02{};
        y03 m_y03{};
        y04 m_y04{};
        y05 m_y05{};
        y06 m_y06{};
        y07 m_y07{};
        y08 m_y08{};
        y09 m_y09{};
        y10 m_y10{};
        y11 m_y11{};
        y12 m_y12{};
        y13 m_y13{};
        y14 m_y14{};
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
        x_axis_type get_x_axis_type() const {
            return m_x_axis_type;
        }		
        axis_vol get_axis_vol() const {
            return m_axis_vol;
        }		
        x00 get_x00() const {
            return m_x00;
        }		
        x01 get_x01() const {
            return m_x01;
        }		
        x02 get_x02() const {
            return m_x02;
        }		
        x03 get_x03() const {
            return m_x03;
        }		
        x04 get_x04() const {
            return m_x04;
        }		
        x05 get_x05() const {
            return m_x05;
        }		
        x06 get_x06() const {
            return m_x06;
        }		
        x07 get_x07() const {
            return m_x07;
        }		
        x08 get_x08() const {
            return m_x08;
        }		
        x09 get_x09() const {
            return m_x09;
        }		
        x10 get_x10() const {
            return m_x10;
        }		
        x11 get_x11() const {
            return m_x11;
        }		
        x12 get_x12() const {
            return m_x12;
        }		
        x13 get_x13() const {
            return m_x13;
        }		
        x14 get_x14() const {
            return m_x14;
        }		
        y00 get_y00() const {
            return m_y00;
        }		
        y01 get_y01() const {
            return m_y01;
        }		
        y02 get_y02() const {
            return m_y02;
        }		
        y03 get_y03() const {
            return m_y03;
        }		
        y04 get_y04() const {
            return m_y04;
        }		
        y05 get_y05() const {
            return m_y05;
        }		
        y06 get_y06() const {
            return m_y06;
        }		
        y07 get_y07() const {
            return m_y07;
        }		
        y08 get_y08() const {
            return m_y08;
        }		
        y09 get_y09() const {
            return m_y09;
        }		
        y10 get_y10() const {
            return m_y10;
        }		
        y11 get_y11() const {
            return m_y11;
        }		
        y12 get_y12() const {
            return m_y12;
        }		
        y13 get_y13() const {
            return m_y13;
        }		
        y14 get_y14() const {
            return m_y14;
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
        void set_x_axis_type(const x_axis_type& value)  {
            m_x_axis_type = value;
        }
        void set_axis_vol(const axis_vol& value)  {
            m_axis_vol = value;
        }
        void set_x00(const x00& value)  {
            m_x00 = value;
        }
        void set_x01(const x01& value)  {
            m_x01 = value;
        }
        void set_x02(const x02& value)  {
            m_x02 = value;
        }
        void set_x03(const x03& value)  {
            m_x03 = value;
        }
        void set_x04(const x04& value)  {
            m_x04 = value;
        }
        void set_x05(const x05& value)  {
            m_x05 = value;
        }
        void set_x06(const x06& value)  {
            m_x06 = value;
        }
        void set_x07(const x07& value)  {
            m_x07 = value;
        }
        void set_x08(const x08& value)  {
            m_x08 = value;
        }
        void set_x09(const x09& value)  {
            m_x09 = value;
        }
        void set_x10(const x10& value)  {
            m_x10 = value;
        }
        void set_x11(const x11& value)  {
            m_x11 = value;
        }
        void set_x12(const x12& value)  {
            m_x12 = value;
        }
        void set_x13(const x13& value)  {
            m_x13 = value;
        }
        void set_x14(const x14& value)  {
            m_x14 = value;
        }
        void set_y00(const y00& value)  {
            m_y00 = value;
        }
        void set_y01(const y01& value)  {
            m_y01 = value;
        }
        void set_y02(const y02& value)  {
            m_y02 = value;
        }
        void set_y03(const y03& value)  {
            m_y03 = value;
        }
        void set_y04(const y04& value)  {
            m_y04 = value;
        }
        void set_y05(const y05& value)  {
            m_y05 = value;
        }
        void set_y06(const y06& value)  {
            m_y06 = value;
        }
        void set_y07(const y07& value)  {
            m_y07 = value;
        }
        void set_y08(const y08& value)  {
            m_y08 = value;
        }
        void set_y09(const y09& value)  {
            m_y09 = value;
        }
        void set_y10(const y10& value)  {
            m_y10 = value;
        }
        void set_y11(const y11& value)  {
            m_y11 = value;
        }
        void set_y12(const y12& value)  {
            m_y12 = value;
        }
        void set_y13(const y13& value)  {
            m_y13 = value;
        }
        void set_y14(const y14& value)  {
            m_y14 = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrTheoExp2PtCurve::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const x_axis_type & value) {
            set_x_axis_type(value);
        }
        void set(const axis_vol & value) {
            set_axis_vol(value);
        }
        void set(const x00 & value) {
            set_x00(value);
        }
        void set(const x01 & value) {
            set_x01(value);
        }
        void set(const x02 & value) {
            set_x02(value);
        }
        void set(const x03 & value) {
            set_x03(value);
        }
        void set(const x04 & value) {
            set_x04(value);
        }
        void set(const x05 & value) {
            set_x05(value);
        }
        void set(const x06 & value) {
            set_x06(value);
        }
        void set(const x07 & value) {
            set_x07(value);
        }
        void set(const x08 & value) {
            set_x08(value);
        }
        void set(const x09 & value) {
            set_x09(value);
        }
        void set(const x10 & value) {
            set_x10(value);
        }
        void set(const x11 & value) {
            set_x11(value);
        }
        void set(const x12 & value) {
            set_x12(value);
        }
        void set(const x13 & value) {
            set_x13(value);
        }
        void set(const x14 & value) {
            set_x14(value);
        }
        void set(const y00 & value) {
            set_y00(value);
        }
        void set(const y01 & value) {
            set_y01(value);
        }
        void set(const y02 & value) {
            set_y02(value);
        }
        void set(const y03 & value) {
            set_y03(value);
        }
        void set(const y04 & value) {
            set_y04(value);
        }
        void set(const y05 & value) {
            set_y05(value);
        }
        void set(const y06 & value) {
            set_y06(value);
        }
        void set(const y07 & value) {
            set_y07(value);
        }
        void set(const y08 & value) {
            set_y08(value);
        }
        void set(const y09 & value) {
            set_y09(value);
        }
        void set(const y10 & value) {
            set_y10(value);
        }
        void set(const y11 & value) {
            set_y11(value);
        }
        void set(const y12 & value) {
            set_y12(value);
        }
        void set(const y13 & value) {
            set_y13(value);
        }
        void set(const y14 & value) {
            set_y14(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrTheoExp2PtCurve & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_x_axis_type);
            set(value.m_axis_vol);
            set(value.m_x00);
            set(value.m_x01);
            set(value.m_x02);
            set(value.m_x03);
            set(value.m_x04);
            set(value.m_x05);
            set(value.m_x06);
            set(value.m_x07);
            set(value.m_x08);
            set(value.m_x09);
            set(value.m_x10);
            set(value.m_x11);
            set(value.m_x12);
            set(value.m_x13);
            set(value.m_x14);
            set(value.m_y00);
            set(value.m_y01);
            set(value.m_y02);
            set(value.m_y03);
            set(value.m_y04);
            set(value.m_y05);
            set(value.m_y06);
            set(value.m_y07);
            set(value.m_y08);
            set(value.m_y09);
            set(value.m_y10);
            set(value.m_y11);
            set(value.m_y12);
            set(value.m_y13);
            set(value.m_y14);
            set(value.m_timestamp);
        }

        SpdrTheoExp2PtCurve() {
            m__meta.set_message_type("SpdrTheoExp2PtCurve");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1955, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1955, length);
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
             *this = SpdrTheoExp2PtCurve{};
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
        bool IncludeAxisVol() const {
            return !(m_axis_vol == 0.0);
        }
        bool IncludeX00() const {
            return !(m_x00 == 0.0);
        }
        bool IncludeX01() const {
            return !(m_x01 == 0.0);
        }
        bool IncludeX02() const {
            return !(m_x02 == 0.0);
        }
        bool IncludeX03() const {
            return !(m_x03 == 0.0);
        }
        bool IncludeX04() const {
            return !(m_x04 == 0.0);
        }
        bool IncludeX05() const {
            return !(m_x05 == 0.0);
        }
        bool IncludeX06() const {
            return !(m_x06 == 0.0);
        }
        bool IncludeX07() const {
            return !(m_x07 == 0.0);
        }
        bool IncludeX08() const {
            return !(m_x08 == 0.0);
        }
        bool IncludeX09() const {
            return !(m_x09 == 0.0);
        }
        bool IncludeX10() const {
            return !(m_x10 == 0.0);
        }
        bool IncludeX11() const {
            return !(m_x11 == 0.0);
        }
        bool IncludeX12() const {
            return !(m_x12 == 0.0);
        }
        bool IncludeX13() const {
            return !(m_x13 == 0.0);
        }
        bool IncludeX14() const {
            return !(m_x14 == 0.0);
        }
        bool IncludeY00() const {
            return !(m_y00 == 0.0);
        }
        bool IncludeY01() const {
            return !(m_y01 == 0.0);
        }
        bool IncludeY02() const {
            return !(m_y02 == 0.0);
        }
        bool IncludeY03() const {
            return !(m_y03 == 0.0);
        }
        bool IncludeY04() const {
            return !(m_y04 == 0.0);
        }
        bool IncludeY05() const {
            return !(m_y05 == 0.0);
        }
        bool IncludeY06() const {
            return !(m_y06 == 0.0);
        }
        bool IncludeY07() const {
            return !(m_y07 == 0.0);
        }
        bool IncludeY08() const {
            return !(m_y08 == 0.0);
        }
        bool IncludeY09() const {
            return !(m_y09 == 0.0);
        }
        bool IncludeY10() const {
            return !(m_y10 == 0.0);
        }
        bool IncludeY11() const {
            return !(m_y11 == 0.0);
        }
        bool IncludeY12() const {
            return !(m_y12 == 0.0);
        }
        bool IncludeY13() const {
            return !(m_y13 == 0.0);
        }
        bool IncludeY14() const {
            return !(m_y14 == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::XAxisType>(m_x_axis_type)));
            if ( IncludeAxisVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_axis_vol);
            }
            if ( IncludeX00()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_x00);
            }
            if ( IncludeX01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_x01);
            }
            if ( IncludeX02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_x02);
            }
            if ( IncludeX03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_x03);
            }
            if ( IncludeX04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_x04);
            }
            if ( IncludeX05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_x05);
            }
            if ( IncludeX06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_x06);
            }
            if ( IncludeX07()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_x07);
            }
            if ( IncludeX08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_x08);
            }
            if ( IncludeX09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_x09);
            }
            if ( IncludeX10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_x10);
            }
            if ( IncludeX11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_x11);
            }
            if ( IncludeX12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_x12);
            }
            if ( IncludeX13()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_x13);
            }
            if ( IncludeX14()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_x14);
            }
            if ( IncludeY00()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_y00);
            }
            if ( IncludeY01()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_y01);
            }
            if ( IncludeY02()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_y02);
            }
            if ( IncludeY03()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_y03);
            }
            if ( IncludeY04()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_y04);
            }
            if ( IncludeY05()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_y05);
            }
            if ( IncludeY06()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_y06);
            }
            if ( IncludeY07()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_y07);
            }
            if ( IncludeY08()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_y08);
            }
            if ( IncludeY09()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_y09);
            }
            if ( IncludeY10()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_y10);
            }
            if ( IncludeY11()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_y11);
            }
            if ( IncludeY12()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_y12);
            }
            if ( IncludeY13()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(193,m_y13);
            }
            if ( IncludeY14()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_y14);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(199, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::XAxisType>(m_x_axis_type)));
            if ( IncludeAxisVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_axis_vol);
            }
            if ( IncludeX00()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_x00);
            }
            if ( IncludeX01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_x01);
            }
            if ( IncludeX02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_x02);
            }
            if ( IncludeX03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_x03);
            }
            if ( IncludeX04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_x04);
            }
            if ( IncludeX05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_x05);
            }
            if ( IncludeX06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_x06);
            }
            if ( IncludeX07()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_x07);
            }
            if ( IncludeX08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_x08);
            }
            if ( IncludeX09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_x09);
            }
            if ( IncludeX10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_x10);
            }
            if ( IncludeX11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_x11);
            }
            if ( IncludeX12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_x12);
            }
            if ( IncludeX13()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_x13);
            }
            if ( IncludeX14()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_x14);
            }
            if ( IncludeY00()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_y00);
            }
            if ( IncludeY01()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_y01);
            }
            if ( IncludeY02()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_y02);
            }
            if ( IncludeY03()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_y03);
            }
            if ( IncludeY04()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_y04);
            }
            if ( IncludeY05()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_y05);
            }
            if ( IncludeY06()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_y06);
            }
            if ( IncludeY07()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_y07);
            }
            if ( IncludeY08()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_y08);
            }
            if ( IncludeY09()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_y09);
            }
            if ( IncludeY10()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_y10);
            }
            if ( IncludeY11()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_y11);
            }
            if ( IncludeY12()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_y12);
            }
            if ( IncludeY13()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,193,m_y13);
            }
            if ( IncludeY14()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_y14);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 199, m_timestamp);
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
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_x_axis_type = static_cast<spiderrock::protobuf::api::XAxisType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x00 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x07 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x13 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_x14 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y00 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y01 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y02 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y03 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y04 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y05 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y06 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y07 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y08 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y09 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y10 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y11 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y12 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y13 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_y14 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
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

    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::_meta>() const { return SpdrTheoExp2PtCurve::_meta{ m__meta}; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::pkey>() const { return SpdrTheoExp2PtCurve::pkey{ m_pkey}; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::ticker>() const { return SpdrTheoExp2PtCurve::ticker{ m_ticker}; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x_axis_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::XAxisType>( m_x_axis_type)); }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::axis_vol>() const { return m_axis_vol; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x00>() const { return m_x00; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x01>() const { return m_x01; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x02>() const { return m_x02; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x03>() const { return m_x03; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x04>() const { return m_x04; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x05>() const { return m_x05; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x06>() const { return m_x06; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x07>() const { return m_x07; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x08>() const { return m_x08; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x09>() const { return m_x09; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x10>() const { return m_x10; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x11>() const { return m_x11; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x12>() const { return m_x12; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x13>() const { return m_x13; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::x14>() const { return m_x14; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y00>() const { return m_y00; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y01>() const { return m_y01; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y02>() const { return m_y02; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y03>() const { return m_y03; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y04>() const { return m_y04; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y05>() const { return m_y05; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y06>() const { return m_y06; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y07>() const { return m_y07; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y08>() const { return m_y08; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y09>() const { return m_y09; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y10>() const { return m_y10; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y11>() const { return m_y11; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y12>() const { return m_y12; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y13>() const { return m_y13; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::y14>() const { return m_y14; }
    template<> inline const auto SpdrTheoExp2PtCurve::get<SpdrTheoExp2PtCurve::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrTheoExp2PtCurve_PKey::get<SpdrTheoExp2PtCurve_PKey::ekey>() const { return SpdrTheoExp2PtCurve_PKey::ekey{m_ekey}; }
    template<> inline const auto SpdrTheoExp2PtCurve_PKey::get<SpdrTheoExp2PtCurve_PKey::theo_model>() const { return m_theo_model; }
    template<> inline const auto SpdrTheoExp2PtCurve_PKey::get<SpdrTheoExp2PtCurve_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrTheoExp2PtCurve_PKey& m) {
        o << "\"ekey\":{" << m.get<SpdrTheoExp2PtCurve_PKey::ekey>() << "}";
        o << ",\"theo_model\":\"" << m.get<SpdrTheoExp2PtCurve_PKey::theo_model>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrTheoExp2PtCurve_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrTheoExp2PtCurve& m) {
        o << "\"_meta\":{" << m.get<SpdrTheoExp2PtCurve::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrTheoExp2PtCurve::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpdrTheoExp2PtCurve::ticker>() << "}";
        o << ",\"x_axis_type\":" << (int64_t)m.get<SpdrTheoExp2PtCurve::x_axis_type>();
        o << ",\"axis_vol\":" << m.get<SpdrTheoExp2PtCurve::axis_vol>();
        o << ",\"x00\":" << m.get<SpdrTheoExp2PtCurve::x00>();
        o << ",\"x01\":" << m.get<SpdrTheoExp2PtCurve::x01>();
        o << ",\"x02\":" << m.get<SpdrTheoExp2PtCurve::x02>();
        o << ",\"x03\":" << m.get<SpdrTheoExp2PtCurve::x03>();
        o << ",\"x04\":" << m.get<SpdrTheoExp2PtCurve::x04>();
        o << ",\"x05\":" << m.get<SpdrTheoExp2PtCurve::x05>();
        o << ",\"x06\":" << m.get<SpdrTheoExp2PtCurve::x06>();
        o << ",\"x07\":" << m.get<SpdrTheoExp2PtCurve::x07>();
        o << ",\"x08\":" << m.get<SpdrTheoExp2PtCurve::x08>();
        o << ",\"x09\":" << m.get<SpdrTheoExp2PtCurve::x09>();
        o << ",\"x10\":" << m.get<SpdrTheoExp2PtCurve::x10>();
        o << ",\"x11\":" << m.get<SpdrTheoExp2PtCurve::x11>();
        o << ",\"x12\":" << m.get<SpdrTheoExp2PtCurve::x12>();
        o << ",\"x13\":" << m.get<SpdrTheoExp2PtCurve::x13>();
        o << ",\"x14\":" << m.get<SpdrTheoExp2PtCurve::x14>();
        o << ",\"y00\":" << m.get<SpdrTheoExp2PtCurve::y00>();
        o << ",\"y01\":" << m.get<SpdrTheoExp2PtCurve::y01>();
        o << ",\"y02\":" << m.get<SpdrTheoExp2PtCurve::y02>();
        o << ",\"y03\":" << m.get<SpdrTheoExp2PtCurve::y03>();
        o << ",\"y04\":" << m.get<SpdrTheoExp2PtCurve::y04>();
        o << ",\"y05\":" << m.get<SpdrTheoExp2PtCurve::y05>();
        o << ",\"y06\":" << m.get<SpdrTheoExp2PtCurve::y06>();
        o << ",\"y07\":" << m.get<SpdrTheoExp2PtCurve::y07>();
        o << ",\"y08\":" << m.get<SpdrTheoExp2PtCurve::y08>();
        o << ",\"y09\":" << m.get<SpdrTheoExp2PtCurve::y09>();
        o << ",\"y10\":" << m.get<SpdrTheoExp2PtCurve::y10>();
        o << ",\"y11\":" << m.get<SpdrTheoExp2PtCurve::y11>();
        o << ",\"y12\":" << m.get<SpdrTheoExp2PtCurve::y12>();
        o << ",\"y13\":" << m.get<SpdrTheoExp2PtCurve::y13>();
        o << ",\"y14\":" << m.get<SpdrTheoExp2PtCurve::y14>();
        {
            std::time_t tt = m.get<SpdrTheoExp2PtCurve::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}