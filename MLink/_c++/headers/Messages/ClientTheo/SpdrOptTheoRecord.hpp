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

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _bvol__GUARD__
    #define _bvol__GUARD__
    DECL_STRONG_TYPE(bvol, float);
    #endif//_bvol__GUARD__

    #ifndef _svol__GUARD__
    #define _svol__GUARD__
    DECL_STRONG_TYPE(svol, float);
    #endif//_svol__GUARD__

    #ifndef _bedge__GUARD__
    #define _bedge__GUARD__
    DECL_STRONG_TYPE(bedge, float);
    #endif//_bedge__GUARD__

    #ifndef _sedge__GUARD__
    #define _sedge__GUARD__
    DECL_STRONG_TYPE(sedge, float);
    #endif//_sedge__GUARD__

    #ifndef _buy_sell_convention__GUARD__
    #define _buy_sell_convention__GUARD__
    DECL_STRONG_TYPE(buy_sell_convention, spiderrock::protobuf::api::BuySellConvention);
    #endif//_buy_sell_convention__GUARD__

    #ifndef _ref_uprc__float__GUARD__
    #define _ref_uprc__float__GUARD__
    DECL_STRONG_TYPE(ref_uprc__float, float);
    #endif//_ref_uprc__float__GUARD__

    #ifndef _vega_slope__GUARD__
    #define _vega_slope__GUARD__
    DECL_STRONG_TYPE(vega_slope, float);
    #endif//_vega_slope__GUARD__

    #ifndef _theo_status__GUARD__
    #define _theo_status__GUARD__
    DECL_STRONG_TYPE(theo_status, spiderrock::protobuf::api::TheoStatus);
    #endif//_theo_status__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _theo_model__GUARD__
    #define _theo_model__GUARD__
    DECL_STRONG_TYPE(theo_model, string);
    #endif//_theo_model__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrOptTheoRecord_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using theo_model = spiderrock::protobuf::api::theo_model;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        okey m_okey{};
        theo_model m_theo_model{};
        client_firm m_client_firm{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        theo_model get_theo_model() const {
            return m_theo_model;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_theo_model(const theo_model& value)  {
            m_theo_model = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrOptTheoRecord_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrOptTheoRecord_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const theo_model & value) { set_theo_model(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrOptTheoRecord_PKey() {}

        virtual ~SpdrOptTheoRecord_PKey() {
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
        bool IncludeTheoModel() const {
            return !(m_theo_model.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
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
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
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
                    case 10: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
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
    

    class SpdrOptTheoRecord {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrOptTheoRecord_PKey;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using bvol = spiderrock::protobuf::api::bvol;
        using svol = spiderrock::protobuf::api::svol;
        using bedge = spiderrock::protobuf::api::bedge;
        using sedge = spiderrock::protobuf::api::sedge;
        using buy_sell_convention = spiderrock::protobuf::api::buy_sell_convention;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__float;
        using vega_slope = spiderrock::protobuf::api::vega_slope;
        using theo_status = spiderrock::protobuf::api::theo_status;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        theo_vol m_theo_vol{};
        bvol m_bvol{};
        svol m_svol{};
        bedge m_bedge{};
        sedge m_sedge{};
        buy_sell_convention m_buy_sell_convention{};
        ref_uprc m_ref_uprc{};
        vega_slope m_vega_slope{};
        theo_status m_theo_status{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        bvol get_bvol() const {
            return m_bvol;
        }		
        svol get_svol() const {
            return m_svol;
        }		
        bedge get_bedge() const {
            return m_bedge;
        }		
        sedge get_sedge() const {
            return m_sedge;
        }		
        buy_sell_convention get_buy_sell_convention() const {
            return m_buy_sell_convention;
        }		
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
        }		
        vega_slope get_vega_slope() const {
            return m_vega_slope;
        }		
        theo_status get_theo_status() const {
            return m_theo_status;
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
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_bvol(const bvol& value)  {
            m_bvol = value;
        }
        void set_svol(const svol& value)  {
            m_svol = value;
        }
        void set_bedge(const bedge& value)  {
            m_bedge = value;
        }
        void set_sedge(const sedge& value)  {
            m_sedge = value;
        }
        void set_buy_sell_convention(const buy_sell_convention& value)  {
            m_buy_sell_convention = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
        }
        void set_vega_slope(const vega_slope& value)  {
            m_vega_slope = value;
        }
        void set_theo_status(const theo_status& value)  {
            m_theo_status = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrOptTheoRecord::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const bvol & value) {
            set_bvol(value);
        }
        void set(const svol & value) {
            set_svol(value);
        }
        void set(const bedge & value) {
            set_bedge(value);
        }
        void set(const sedge & value) {
            set_sedge(value);
        }
        void set(const buy_sell_convention & value) {
            set_buy_sell_convention(value);
        }
        void set(const ref_uprc & value) {
            set_ref_uprc(value);
        }
        void set(const vega_slope & value) {
            set_vega_slope(value);
        }
        void set(const theo_status & value) {
            set_theo_status(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrOptTheoRecord & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_theo_vol);
            set(value.m_bvol);
            set(value.m_svol);
            set(value.m_bedge);
            set(value.m_sedge);
            set(value.m_buy_sell_convention);
            set(value.m_ref_uprc);
            set(value.m_vega_slope);
            set(value.m_theo_status);
            set(value.m_timestamp);
        }

        SpdrOptTheoRecord() {
            m__meta.set_message_type("SpdrOptTheoRecord");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1950, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1950, length);
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
             *this = SpdrOptTheoRecord{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeBvol() const {
            return !(m_bvol == 0.0);
        }
        bool IncludeSvol() const {
            return !(m_svol == 0.0);
        }
        bool IncludeBedge() const {
            return !(m_bedge == 0.0);
        }
        bool IncludeSedge() const {
            return !(m_sedge == 0.0);
        }
        bool IncludeRefUprc() const {
            return !(m_ref_uprc == 0.0);
        }
        bool IncludeVegaSlope() const {
            return !(m_vega_slope == 0.0);
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
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_theo_vol);
            }
            if ( IncludeBvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_bvol);
            }
            if ( IncludeSvol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_svol);
            }
            if ( IncludeBedge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_bedge);
            }
            if ( IncludeSedge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_sedge);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySellConvention>(m_buy_sell_convention)));
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ref_uprc);
            }
            if ( IncludeVegaSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_vega_slope);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>(m_theo_status)));
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
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_theo_vol);
            }
            if ( IncludeBvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_bvol);
            }
            if ( IncludeSvol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_svol);
            }
            if ( IncludeBedge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_bedge);
            }
            if ( IncludeSedge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_sedge);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySellConvention>(m_buy_sell_convention)));
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ref_uprc);
            }
            if ( IncludeVegaSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_vega_slope);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>(m_theo_status)));
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bvol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_svol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bedge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sedge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_buy_sell_convention = static_cast<spiderrock::protobuf::api::BuySellConvention>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_theo_status = static_cast<spiderrock::protobuf::api::TheoStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::_meta>() const { return SpdrOptTheoRecord::_meta{ m__meta}; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::pkey>() const { return SpdrOptTheoRecord::pkey{ m_pkey}; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::bvol>() const { return m_bvol; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::svol>() const { return m_svol; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::bedge>() const { return m_bedge; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::sedge>() const { return m_sedge; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::buy_sell_convention>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySellConvention>( m_buy_sell_convention)); }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::vega_slope>() const { return m_vega_slope; }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::theo_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TheoStatus>( m_theo_status)); }
    template<> inline const auto SpdrOptTheoRecord::get<SpdrOptTheoRecord::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrOptTheoRecord_PKey::get<SpdrOptTheoRecord_PKey::okey>() const { return SpdrOptTheoRecord_PKey::okey{m_okey}; }
    template<> inline const auto SpdrOptTheoRecord_PKey::get<SpdrOptTheoRecord_PKey::theo_model>() const { return m_theo_model; }
    template<> inline const auto SpdrOptTheoRecord_PKey::get<SpdrOptTheoRecord_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrOptTheoRecord_PKey& m) {
        o << "\"okey\":{" << m.get<SpdrOptTheoRecord_PKey::okey>() << "}";
        o << ",\"theo_model\":\"" << m.get<SpdrOptTheoRecord_PKey::theo_model>() << "\"";
        o << ",\"client_firm\":\"" << m.get<SpdrOptTheoRecord_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrOptTheoRecord& m) {
        o << "\"_meta\":{" << m.get<SpdrOptTheoRecord::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrOptTheoRecord::pkey>() << "}";
        o << ",\"theo_vol\":" << m.get<SpdrOptTheoRecord::theo_vol>();
        o << ",\"bvol\":" << m.get<SpdrOptTheoRecord::bvol>();
        o << ",\"svol\":" << m.get<SpdrOptTheoRecord::svol>();
        o << ",\"bedge\":" << m.get<SpdrOptTheoRecord::bedge>();
        o << ",\"sedge\":" << m.get<SpdrOptTheoRecord::sedge>();
        o << ",\"buy_sell_convention\":" << (int64_t)m.get<SpdrOptTheoRecord::buy_sell_convention>();
        o << ",\"ref_uprc\":" << m.get<SpdrOptTheoRecord::ref_uprc>();
        o << ",\"vega_slope\":" << m.get<SpdrOptTheoRecord::vega_slope>();
        o << ",\"theo_status\":" << (int64_t)m.get<SpdrOptTheoRecord::theo_status>();
        {
            std::time_t tt = m.get<SpdrOptTheoRecord::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}