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

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _exch__GUARD__
    #define _exch__GUARD__
    DECL_STRONG_TYPE(exch, spiderrock::protobuf::api::OptExch);
    #endif//_exch__GUARD__

    #ifndef _exch_spr_id__GUARD__
    #define _exch_spr_id__GUARD__
    DECL_STRONG_TYPE(exch_spr_id, string);
    #endif//_exch_spr_id__GUARD__

    #ifndef _leg_sec_key__GUARD__
    #define _leg_sec_key__GUARD__
    DECL_STRONG_TYPE(leg_sec_key, OptionKey);
    #endif//_leg_sec_key__GUARD__

    #ifndef _leg_sec_type__GUARD__
    #define _leg_sec_type__GUARD__
    DECL_STRONG_TYPE(leg_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_leg_sec_type__GUARD__

    #ifndef _leg_side__GUARD__
    #define _leg_side__GUARD__
    DECL_STRONG_TYPE(leg_side, spiderrock::protobuf::api::BuySell);
    #endif//_leg_side__GUARD__

    #ifndef _leg_ratio__GUARD__
    #define _leg_ratio__GUARD__
    DECL_STRONG_TYPE(leg_ratio, uint32);
    #endif//_leg_ratio__GUARD__

    #ifndef _ref_delta__GUARD__
    #define _ref_delta__GUARD__
    DECL_STRONG_TYPE(ref_delta, float);
    #endif//_ref_delta__GUARD__

    #ifndef _ref_prc__GUARD__
    #define _ref_prc__GUARD__
    DECL_STRONG_TYPE(ref_prc, double);
    #endif//_ref_prc__GUARD__

    
    class SpreadExchDefinition_PKey {
        public:
        //using statements for all types used in this class
        using exch = spiderrock::protobuf::api::exch;
        using exch_spr_id = spiderrock::protobuf::api::exch_spr_id;

        private:
        exch m_exch{};
        exch_spr_id m_exch_spr_id{};

        public:
        exch get_exch() const {
            return m_exch;
        }
        exch_spr_id get_exch_spr_id() const {
            return m_exch_spr_id;
        }
        void set_exch(const exch& value)  {
            m_exch = value;
        }
        void set_exch_spr_id(const exch_spr_id& value)  {
            m_exch_spr_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exch & value) { set_exch(value); }
        void set(const exch_spr_id & value) { set_exch_spr_id(value); }


        SpreadExchDefinition_PKey() {}

        virtual ~SpreadExchDefinition_PKey() {
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
        bool IncludeExchSprId() const {
            return !(m_exch_spr_id.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(10,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exch)));
            if ( IncludeExchSprId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_exch_spr_id);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,10,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exch)));
            if ( IncludeExchSprId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_exch_spr_id));
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
                    case 10: {m_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 11: {m_exch_spr_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpreadExchDefinition_Legs {
        public:
        //using statements for all types used in this class
        using leg_sec_key = spiderrock::protobuf::api::leg_sec_key;
        using leg_sec_type = spiderrock::protobuf::api::leg_sec_type;
        using leg_side = spiderrock::protobuf::api::leg_side;
        using leg_ratio = spiderrock::protobuf::api::leg_ratio;
        using ref_delta = spiderrock::protobuf::api::ref_delta;
        using ref_prc = spiderrock::protobuf::api::ref_prc;

        private:
        leg_sec_key m_leg_sec_key{};
        leg_sec_type m_leg_sec_type{};
        leg_side m_leg_side{};
        leg_ratio m_leg_ratio{};
        ref_delta m_ref_delta{};
        ref_prc m_ref_prc{};

        public:
		leg_sec_key get_leg_sec_key() const {
            return m_leg_sec_key;
        }
        leg_sec_type get_leg_sec_type() const {
            return m_leg_sec_type;
        }
        leg_side get_leg_side() const {
            return m_leg_side;
        }
        leg_ratio get_leg_ratio() const {
            return m_leg_ratio;
        }
        ref_delta get_ref_delta() const {
            return m_ref_delta;
        }
        ref_prc get_ref_prc() const {
            return m_ref_prc;
        }
        void set_leg_sec_key(const leg_sec_key& value)  {
            m_leg_sec_key = value;
        }
        void set_leg_sec_type(const leg_sec_type& value)  {
            m_leg_sec_type = value;
        }
        void set_leg_side(const leg_side& value)  {
            m_leg_side = value;
        }
        void set_leg_ratio(const leg_ratio& value)  {
            m_leg_ratio = value;
        }
        void set_ref_delta(const ref_delta& value)  {
            m_ref_delta = value;
        }
        void set_ref_prc(const ref_prc& value)  {
            m_ref_prc = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition_Legs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition_Legs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_sec_key & value) { set_leg_sec_key(value); }
        void set(const leg_sec_type & value) { set_leg_sec_type(value); }
        void set(const leg_side & value) { set_leg_side(value); }
        void set(const leg_ratio & value) { set_leg_ratio(value); }
        void set(const ref_delta & value) { set_ref_delta(value); }
        void set(const ref_prc & value) { set_ref_prc(value); }


        SpreadExchDefinition_Legs() {}

        virtual ~SpreadExchDefinition_Legs() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(101,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(104,m_leg_ratio);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_ref_delta);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_ref_prc);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 101, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,104,m_leg_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_ref_delta);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_ref_prc);
            return dest;
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
                    case 101: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_leg_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 102: {m_leg_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 103: {m_leg_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 104: {m_leg_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 105: {m_ref_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 106: {m_ref_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadExchDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadExchDefinition_PKey;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using legs = spiderrock::protobuf::api::SpreadExchDefinition_Legs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        timestamp m_timestamp{};
        std::vector<legs> m_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<legs>& get_legs_list() const {
            return m_legs;
        }
        const legs& get_legs(const int i) const {
            return m_legs.at(i);
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
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_legs_list(const std::vector<legs>& list)  {
            m_legs = list;
        }
        void add_legs(const legs& item) {
            m_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadExchDefinition::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const legs & value) {
            add_legs(value);
        }

        void set(const SpreadExchDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_timestamp);set_legs_list(value.m_legs);
        }

        SpreadExchDefinition() {
            m__meta.set_message_type("SpreadExchDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4395, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4395, length);
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
             *this = SpreadExchDefinition{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeLegs() const {
            return (!m_legs.empty());
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
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(107, m_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(100, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 107, m_timestamp);
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 100, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                    case 107: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 100: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            legs item_legs;
                            item_legs.Decode(pos, pos+length);  
                            m_legs.emplace_back(item_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpreadExchDefinition::get<SpreadExchDefinition::_meta>() const { return SpreadExchDefinition::_meta{ m__meta}; }
    template<> inline const auto SpreadExchDefinition::get<SpreadExchDefinition::pkey>() const { return SpreadExchDefinition::pkey{ m_pkey}; }
    template<> inline const auto SpreadExchDefinition::get<SpreadExchDefinition::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadExchDefinition::get<SpreadExchDefinition::legs>(int i) const { return SpreadExchDefinition::legs{ get_legs(i)}; }
    template<> inline int SpreadExchDefinition::count<SpreadExchDefinition::legs>() const { return static_cast<int>( m_legs.size()); }
    template<> inline const auto SpreadExchDefinition_PKey::get<SpreadExchDefinition_PKey::exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exch));}
    template<> inline const auto SpreadExchDefinition_PKey::get<SpreadExchDefinition_PKey::exch_spr_id>() const { return m_exch_spr_id; }
    
    template<> inline const auto SpreadExchDefinition_Legs::get<SpreadExchDefinition_Legs::leg_sec_key>() const { return SpreadExchDefinition_Legs::leg_sec_key{m_leg_sec_key}; }
    template<> inline const auto SpreadExchDefinition_Legs::get<SpreadExchDefinition_Legs::leg_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type));}
    template<> inline const auto SpreadExchDefinition_Legs::get<SpreadExchDefinition_Legs::leg_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side));}
    template<> inline const auto SpreadExchDefinition_Legs::get<SpreadExchDefinition_Legs::leg_ratio>() const { return m_leg_ratio; }
    template<> inline const auto SpreadExchDefinition_Legs::get<SpreadExchDefinition_Legs::ref_delta>() const { return m_ref_delta; }
    template<> inline const auto SpreadExchDefinition_Legs::get<SpreadExchDefinition_Legs::ref_prc>() const { return m_ref_prc; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadExchDefinition_PKey& m) {
        o << "\"exch\":" << (int64_t)m.get<SpreadExchDefinition_PKey::exch>();
        o << ",\"exch_spr_id\":\"" << m.get<SpreadExchDefinition_PKey::exch_spr_id>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadExchDefinition_Legs& m) {
        o << "\"leg_sec_key\":{" << m.get<SpreadExchDefinition_Legs::leg_sec_key>() << "}";
        o << ",\"leg_sec_type\":" << (int64_t)m.get<SpreadExchDefinition_Legs::leg_sec_type>();
        o << ",\"leg_side\":" << (int64_t)m.get<SpreadExchDefinition_Legs::leg_side>();
        o << ",\"leg_ratio\":" << m.get<SpreadExchDefinition_Legs::leg_ratio>();
        o << ",\"ref_delta\":" << m.get<SpreadExchDefinition_Legs::ref_delta>();
        o << ",\"ref_prc\":" << m.get<SpreadExchDefinition_Legs::ref_prc>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadExchDefinition& m) {
        o << "\"_meta\":{" << m.get<SpreadExchDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadExchDefinition::pkey>() << "}";
        {
            std::time_t tt = m.get<SpreadExchDefinition::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpreadExchDefinition::legs>(); ++i) {
                o << delim << m.get<SpreadExchDefinition::legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}