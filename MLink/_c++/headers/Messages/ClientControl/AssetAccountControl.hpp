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

    #ifndef _account_name__GUARD__
    #define _account_name__GUARD__
    DECL_STRONG_TYPE(account_name, string);
    #endif//_account_name__GUARD__

    #ifndef _strategy_name__GUARD__
    #define _strategy_name__GUARD__
    DECL_STRONG_TYPE(strategy_name, string);
    #endif//_strategy_name__GUARD__

    #ifndef _opt_status__GUARD__
    #define _opt_status__GUARD__
    DECL_STRONG_TYPE(opt_status, spiderrock::protobuf::api::OptStatus);
    #endif//_opt_status__GUARD__

    #ifndef _util_pct_target__GUARD__
    #define _util_pct_target__GUARD__
    DECL_STRONG_TYPE(util_pct_target, float);
    #endif//_util_pct_target__GUARD__

    #ifndef _accnt_buying_power__GUARD__
    #define _accnt_buying_power__GUARD__
    DECL_STRONG_TYPE(accnt_buying_power, float);
    #endif//_accnt_buying_power__GUARD__

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

    
    class AssetAccountControl_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AssetAccountControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AssetAccountControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        AssetAccountControl_PKey() {}

        virtual ~AssetAccountControl_PKey() {
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
    

    class AssetAccountControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AssetAccountControl_PKey;
        using account_name = spiderrock::protobuf::api::account_name;
        using strategy_name = spiderrock::protobuf::api::strategy_name;
        using opt_status = spiderrock::protobuf::api::opt_status;
        using util_pct_target = spiderrock::protobuf::api::util_pct_target;
        using accnt_buying_power = spiderrock::protobuf::api::accnt_buying_power;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        account_name m_account_name{};
        strategy_name m_strategy_name{};
        opt_status m_opt_status{};
        util_pct_target m_util_pct_target{};
        accnt_buying_power m_accnt_buying_power{};
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
        account_name get_account_name() const {
            return m_account_name;
        }		
        strategy_name get_strategy_name() const {
            return m_strategy_name;
        }		
        opt_status get_opt_status() const {
            return m_opt_status;
        }		
        util_pct_target get_util_pct_target() const {
            return m_util_pct_target;
        }		
        accnt_buying_power get_accnt_buying_power() const {
            return m_accnt_buying_power;
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
        void set_account_name(const account_name& value)  {
            m_account_name = value;
        }
        void set_strategy_name(const strategy_name& value)  {
            m_strategy_name = value;
        }
        void set_opt_status(const opt_status& value)  {
            m_opt_status = value;
        }
        void set_util_pct_target(const util_pct_target& value)  {
            m_util_pct_target = value;
        }
        void set_accnt_buying_power(const accnt_buying_power& value)  {
            m_accnt_buying_power = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AssetAccountControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const account_name & value) {
            set_account_name(value);
        }
        void set(const strategy_name & value) {
            set_strategy_name(value);
        }
        void set(const opt_status & value) {
            set_opt_status(value);
        }
        void set(const util_pct_target & value) {
            set_util_pct_target(value);
        }
        void set(const accnt_buying_power & value) {
            set_accnt_buying_power(value);
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

        void set(const AssetAccountControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_account_name);
            set(value.m_strategy_name);
            set(value.m_opt_status);
            set(value.m_util_pct_target);
            set(value.m_accnt_buying_power);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        AssetAccountControl() {
            m__meta.set_message_type("AssetAccountControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1630, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1630, length);
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
             *this = AssetAccountControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAccountName() const {
            return !(m_account_name.empty());
        }
        bool IncludeStrategyName() const {
            return !(m_strategy_name.empty());
        }
        bool IncludeUtilPctTarget() const {
            return !(m_util_pct_target == 0.0);
        }
        bool IncludeAccntBuyingPower() const {
            return !(m_accnt_buying_power == 0.0);
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
            if ( IncludeAccountName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_account_name);
            }
            if ( IncludeStrategyName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_strategy_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludeUtilPctTarget()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_util_pct_target);
            }
            if ( IncludeAccntBuyingPower()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_accnt_buying_power);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(121, m_timestamp);
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
            if ( IncludeAccountName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_account_name));
            }
            if ( IncludeStrategyName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_strategy_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>(m_opt_status)));
            if ( IncludeUtilPctTarget()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_util_pct_target);
            }
            if ( IncludeAccntBuyingPower()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_accnt_buying_power);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 121, m_timestamp);
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
                            m_account_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_status = static_cast<spiderrock::protobuf::api::OptStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_util_pct_target = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_accnt_buying_power = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
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

    template<> inline const auto AssetAccountControl::get<AssetAccountControl::_meta>() const { return AssetAccountControl::_meta{ m__meta}; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::pkey>() const { return AssetAccountControl::pkey{ m_pkey}; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::account_name>() const { return m_account_name; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::strategy_name>() const { return m_strategy_name; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::opt_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptStatus>( m_opt_status)); }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::util_pct_target>() const { return m_util_pct_target; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::accnt_buying_power>() const { return m_accnt_buying_power; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto AssetAccountControl::get<AssetAccountControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto AssetAccountControl_PKey::get<AssetAccountControl_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto AssetAccountControl_PKey::get<AssetAccountControl_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AssetAccountControl_PKey& m) {
        o << "\"accnt\":\"" << m.get<AssetAccountControl_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<AssetAccountControl_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AssetAccountControl& m) {
        o << "\"_meta\":{" << m.get<AssetAccountControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AssetAccountControl::pkey>() << "}";
        o << ",\"account_name\":\"" << m.get<AssetAccountControl::account_name>() << "\"";
        o << ",\"strategy_name\":\"" << m.get<AssetAccountControl::strategy_name>() << "\"";
        o << ",\"opt_status\":" << (int64_t)m.get<AssetAccountControl::opt_status>();
        o << ",\"util_pct_target\":" << m.get<AssetAccountControl::util_pct_target>();
        o << ",\"accnt_buying_power\":" << m.get<AssetAccountControl::accnt_buying_power>();
        o << ",\"modified_by\":\"" << m.get<AssetAccountControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<AssetAccountControl::modified_in>();
        {
            std::time_t tt = m.get<AssetAccountControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}