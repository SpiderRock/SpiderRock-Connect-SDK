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

    #ifndef _sym_hedge_band_dd__GUARD__
    #define _sym_hedge_band_dd__GUARD__
    DECL_STRONG_TYPE(sym_hedge_band_dd, float);
    #endif//_sym_hedge_band_dd__GUARD__

    #ifndef _sym_hedge_band_gr__GUARD__
    #define _sym_hedge_band_gr__GUARD__
    DECL_STRONG_TYPE(sym_hedge_band_gr, float);
    #endif//_sym_hedge_band_gr__GUARD__

    #ifndef _balance_symbols__GUARD__
    #define _balance_symbols__GUARD__
    DECL_STRONG_TYPE(balance_symbols, spiderrock::protobuf::api::YesNo);
    #endif//_balance_symbols__GUARD__

    #ifndef _hedge_algo__GUARD__
    #define _hedge_algo__GUARD__
    DECL_STRONG_TYPE(hedge_algo, spiderrock::protobuf::api::HedgeAlgo);
    #endif//_hedge_algo__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _exec_brkr_algo__GUARD__
    #define _exec_brkr_algo__GUARD__
    DECL_STRONG_TYPE(exec_brkr_algo, string);
    #endif//_exec_brkr_algo__GUARD__

    #ifndef _exec_bkkr_tags__GUARD__
    #define _exec_bkkr_tags__GUARD__
    DECL_STRONG_TYPE(exec_bkkr_tags, string);
    #endif//_exec_bkkr_tags__GUARD__

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

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class PositionHedgeTrigger_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgeTrigger_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgeTrigger_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        PositionHedgeTrigger_PKey() {}

        virtual ~PositionHedgeTrigger_PKey() {
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
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
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
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class PositionHedgeTrigger {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::PositionHedgeTrigger_PKey;
        using sym_hedge_band_dd = spiderrock::protobuf::api::sym_hedge_band_dd;
        using sym_hedge_band_gr = spiderrock::protobuf::api::sym_hedge_band_gr;
        using balance_symbols = spiderrock::protobuf::api::balance_symbols;
        using hedge_algo = spiderrock::protobuf::api::hedge_algo;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_brkr_algo = spiderrock::protobuf::api::exec_brkr_algo;
        using exec_bkkr_tags = spiderrock::protobuf::api::exec_bkkr_tags;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sym_hedge_band_dd m_sym_hedge_band_dd{};
        sym_hedge_band_gr m_sym_hedge_band_gr{};
        balance_symbols m_balance_symbols{};
        hedge_algo m_hedge_algo{};
        exec_brkr_code m_exec_brkr_code{};
        exec_brkr_algo m_exec_brkr_algo{};
        exec_bkkr_tags m_exec_bkkr_tags{};
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
        sym_hedge_band_dd get_sym_hedge_band_dd() const {
            return m_sym_hedge_band_dd;
        }		
        sym_hedge_band_gr get_sym_hedge_band_gr() const {
            return m_sym_hedge_band_gr;
        }		
        balance_symbols get_balance_symbols() const {
            return m_balance_symbols;
        }		
        hedge_algo get_hedge_algo() const {
            return m_hedge_algo;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        exec_brkr_algo get_exec_brkr_algo() const {
            return m_exec_brkr_algo;
        }		
        exec_bkkr_tags get_exec_bkkr_tags() const {
            return m_exec_bkkr_tags;
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
        void set_sym_hedge_band_dd(const sym_hedge_band_dd& value)  {
            m_sym_hedge_band_dd = value;
        }
        void set_sym_hedge_band_gr(const sym_hedge_band_gr& value)  {
            m_sym_hedge_band_gr = value;
        }
        void set_balance_symbols(const balance_symbols& value)  {
            m_balance_symbols = value;
        }
        void set_hedge_algo(const hedge_algo& value)  {
            m_hedge_algo = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_exec_brkr_algo(const exec_brkr_algo& value)  {
            m_exec_brkr_algo = value;
        }
        void set_exec_bkkr_tags(const exec_bkkr_tags& value)  {
            m_exec_bkkr_tags = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgeTrigger::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sym_hedge_band_dd & value) {
            set_sym_hedge_band_dd(value);
        }
        void set(const sym_hedge_band_gr & value) {
            set_sym_hedge_band_gr(value);
        }
        void set(const balance_symbols & value) {
            set_balance_symbols(value);
        }
        void set(const hedge_algo & value) {
            set_hedge_algo(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const exec_brkr_algo & value) {
            set_exec_brkr_algo(value);
        }
        void set(const exec_bkkr_tags & value) {
            set_exec_bkkr_tags(value);
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

        void set(const PositionHedgeTrigger & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sym_hedge_band_dd);
            set(value.m_sym_hedge_band_gr);
            set(value.m_balance_symbols);
            set(value.m_hedge_algo);
            set(value.m_exec_brkr_code);
            set(value.m_exec_brkr_algo);
            set(value.m_exec_bkkr_tags);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        PositionHedgeTrigger() {
            m__meta.set_message_type("PositionHedgeTrigger");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1816, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1816, length);
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
             *this = PositionHedgeTrigger{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSymHedgeBandDd() const {
            return !(m_sym_hedge_band_dd == 0.0);
        }
        bool IncludeSymHedgeBandGr() const {
            return !(m_sym_hedge_band_gr == 0.0);
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExecBrkrAlgo() const {
            return !(m_exec_brkr_algo.empty());
        }
        bool IncludeExecBkkrTags() const {
            return !(m_exec_bkkr_tags.empty());
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
            if ( IncludeSymHedgeBandDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_sym_hedge_band_dd);
            }
            if ( IncludeSymHedgeBandGr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(101,m_sym_hedge_band_gr);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_balance_symbols)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_hedge_algo)));
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(104,m_exec_brkr_code);
            }
            if ( IncludeExecBrkrAlgo()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(105,m_exec_brkr_algo);
            }
            if ( IncludeExecBkkrTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_exec_bkkr_tags);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(107,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(109, m_timestamp);
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
            if ( IncludeSymHedgeBandDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_sym_hedge_band_dd);
            }
            if ( IncludeSymHedgeBandGr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,101,m_sym_hedge_band_gr);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_balance_symbols)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_hedge_algo)));
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,104,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBrkrAlgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,105,static_cast<string>(m_exec_brkr_algo));
            }
            if ( IncludeExecBkkrTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_exec_bkkr_tags));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,107,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 109, m_timestamp);
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
                            m_sym_hedge_band_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sym_hedge_band_gr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_balance_symbols = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_algo = static_cast<spiderrock::protobuf::api::HedgeAlgo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_algo = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_bkkr_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
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

    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::_meta>() const { return PositionHedgeTrigger::_meta{ m__meta}; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::pkey>() const { return PositionHedgeTrigger::pkey{ m_pkey}; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::sym_hedge_band_dd>() const { return m_sym_hedge_band_dd; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::sym_hedge_band_gr>() const { return m_sym_hedge_band_gr; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::balance_symbols>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_balance_symbols)); }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::hedge_algo>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>( m_hedge_algo)); }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::exec_brkr_algo>() const { return m_exec_brkr_algo; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::exec_bkkr_tags>() const { return m_exec_bkkr_tags; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::modified_by>() const { return m_modified_by; }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto PositionHedgeTrigger::get<PositionHedgeTrigger::timestamp>() const { return m_timestamp; }
    template<> inline const auto PositionHedgeTrigger_PKey::get<PositionHedgeTrigger_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto PositionHedgeTrigger_PKey::get<PositionHedgeTrigger_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const PositionHedgeTrigger_PKey& m) {
        o << "\"accnt\":\"" << m.get<PositionHedgeTrigger_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<PositionHedgeTrigger_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const PositionHedgeTrigger& m) {
        o << "\"_meta\":{" << m.get<PositionHedgeTrigger::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<PositionHedgeTrigger::pkey>() << "}";
        o << ",\"sym_hedge_band_dd\":" << m.get<PositionHedgeTrigger::sym_hedge_band_dd>();
        o << ",\"sym_hedge_band_gr\":" << m.get<PositionHedgeTrigger::sym_hedge_band_gr>();
        o << ",\"balance_symbols\":" << (int64_t)m.get<PositionHedgeTrigger::balance_symbols>();
        o << ",\"hedge_algo\":" << (int64_t)m.get<PositionHedgeTrigger::hedge_algo>();
        o << ",\"exec_brkr_code\":\"" << m.get<PositionHedgeTrigger::exec_brkr_code>() << "\"";
        o << ",\"exec_brkr_algo\":\"" << m.get<PositionHedgeTrigger::exec_brkr_algo>() << "\"";
        o << ",\"exec_bkkr_tags\":\"" << m.get<PositionHedgeTrigger::exec_bkkr_tags>() << "\"";
        o << ",\"modified_by\":\"" << m.get<PositionHedgeTrigger::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<PositionHedgeTrigger::modified_in>();
        {
            std::time_t tt = m.get<PositionHedgeTrigger::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}