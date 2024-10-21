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

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::ToolSpreadClass);
    #endif//_spread_class__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _srspread_id__GUARD__
    #define _srspread_id__GUARD__
    DECL_STRONG_TYPE(srspread_id, int64);
    #endif//_srspread_id__GUARD__

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

    #ifndef _ref_prc__double__GUARD__
    #define _ref_prc__double__GUARD__
    DECL_STRONG_TYPE(ref_prc__double, double);
    #endif//_ref_prc__double__GUARD__

    
    class SpreadDefinition_PKey {
        public:
        //using statements for all types used in this class
        using srspread_id = spiderrock::protobuf::api::srspread_id;

        private:
        srspread_id m_srspread_id{};

        public:
        srspread_id get_srspread_id() const {
            return m_srspread_id;
        }
        void set_srspread_id(const srspread_id& value)  {
            m_srspread_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const srspread_id & value) { set_srspread_id(value); }


        SpreadDefinition_PKey() {}

        virtual ~SpreadDefinition_PKey() {
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
        bool IncludeSrspreadId() const {
            return !(m_srspread_id == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSrspreadId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_srspread_id);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSrspreadId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_srspread_id);
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
                    case 11: {m_srspread_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpreadDefinition_ExchSprIDs {
        public:
        //using statements for all types used in this class
        using exch_spr_id = spiderrock::protobuf::api::exch_spr_id;

        private:
        exch_spr_id m_exch_spr_id{};

        public:
        exch_spr_id get_exch_spr_id() const {
            return m_exch_spr_id;
        }
        void set_exch_spr_id(const exch_spr_id& value)  {
            m_exch_spr_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition_ExchSprIDs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition_ExchSprIDs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exch_spr_id & value) { set_exch_spr_id(value); }


        SpreadDefinition_ExchSprIDs() {}

        virtual ~SpreadDefinition_ExchSprIDs() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(108,m_exch_spr_id);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,108,static_cast<string>(m_exch_spr_id));
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
                    case 108: {m_exch_spr_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class SpreadDefinition_Legs {
        public:
        //using statements for all types used in this class
        using leg_sec_key = spiderrock::protobuf::api::leg_sec_key;
        using leg_sec_type = spiderrock::protobuf::api::leg_sec_type;
        using leg_side = spiderrock::protobuf::api::leg_side;
        using leg_ratio = spiderrock::protobuf::api::leg_ratio;
        using ref_delta = spiderrock::protobuf::api::ref_delta;
        using ref_prc = spiderrock::protobuf::api::ref_prc__double;

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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition_Legs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition_Legs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const leg_sec_key & value) { set_leg_sec_key(value); }
        void set(const leg_sec_type & value) { set_leg_sec_type(value); }
        void set(const leg_side & value) { set_leg_side(value); }
        void set(const leg_ratio & value) { set_leg_ratio(value); }
        void set(const ref_delta & value) { set_ref_delta(value); }
        void set(const ref_prc & value) { set_ref_prc(value); }


        SpreadDefinition_Legs() {}

        virtual ~SpreadDefinition_Legs() {
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
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(103,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(106,m_leg_ratio);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_ref_delta);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(111,m_ref_prc);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_leg_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 103, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,106,m_leg_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_ref_delta);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,111,m_ref_prc);
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
                    case 103: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_leg_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 104: {m_leg_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 105: {m_leg_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 106: {m_leg_ratio = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        break;
                    }
                    case 110: {m_ref_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 111: {m_ref_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpreadDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpreadDefinition_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using spread_class = spiderrock::protobuf::api::spread_class;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using exch_spr_i_ds = spiderrock::protobuf::api::SpreadDefinition_ExchSprIDs;
        using legs = spiderrock::protobuf::api::SpreadDefinition_Legs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        spread_class m_spread_class{};
        timestamp m_timestamp{};
        std::vector<exch_spr_i_ds> m_exch_spr_i_ds{};
        std::vector<legs> m_legs{};

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
        spread_class get_spread_class() const {
            return m_spread_class;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<exch_spr_i_ds>& get_exch_spr_i_ds_list() const {
            return m_exch_spr_i_ds;
        }
        const exch_spr_i_ds& get_exch_spr_i_ds(const int i) const {
            return m_exch_spr_i_ds.at(i);
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_spread_class(const spread_class& value)  {
            m_spread_class = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_exch_spr_i_ds_list(const std::vector<exch_spr_i_ds>& list)  {
            m_exch_spr_i_ds = list;
        }
        void add_exch_spr_i_ds(const exch_spr_i_ds& item) {
            m_exch_spr_i_ds.emplace_back(item);
        }
        void set_legs_list(const std::vector<legs>& list)  {
            m_legs = list;
        }
        void add_legs(const legs& item) {
            m_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpreadDefinition::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const spread_class & value) {
            set_spread_class(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const exch_spr_i_ds & value) {
            add_exch_spr_i_ds(value);
        }
        void set(const legs & value) {
            add_legs(value);
        }

        void set(const SpreadDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_spread_class);
            set(value.m_timestamp);set_exch_spr_i_ds_list(value.m_exch_spr_i_ds);set_legs_list(value.m_legs);
        }

        SpreadDefinition() {
            m__meta.set_message_type("SpreadDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4390, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4390, length);
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
             *this = SpreadDefinition{};
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
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeExchSprIDs() const {
            return (!m_exch_spr_i_ds.empty());
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(109, m_timestamp);
            }
            if ( IncludeExchSprIDs()) {
                for (auto& item : m_exch_spr_i_ds) {
					totalSize += SRProtobufCPP::TagCodec::Size(107, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(102, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>(m_spread_class)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 109, m_timestamp);
            }
            if ( IncludeExchSprIDs()) {
                for (auto& item : m_exch_spr_i_ds) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 107, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeLegs()) {
                for (auto& item : m_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 102, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_class = static_cast<spiderrock::protobuf::api::ToolSpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exch_spr_i_ds item_exch_spr_i_ds;
                            item_exch_spr_i_ds.Decode(pos, pos+length);  
                            m_exch_spr_i_ds.emplace_back(item_exch_spr_i_ds);
                        }
                        break;
                    }
                    case 102: {
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

    template<> inline const auto SpreadDefinition::get<SpreadDefinition::_meta>() const { return SpreadDefinition::_meta{ m__meta}; }
    template<> inline const auto SpreadDefinition::get<SpreadDefinition::pkey>() const { return SpreadDefinition::pkey{ m_pkey}; }
    template<> inline const auto SpreadDefinition::get<SpreadDefinition::ticker>() const { return SpreadDefinition::ticker{ m_ticker}; }
    template<> inline const auto SpreadDefinition::get<SpreadDefinition::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ToolSpreadClass>( m_spread_class)); }
    template<> inline const auto SpreadDefinition::get<SpreadDefinition::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpreadDefinition::get<SpreadDefinition::exch_spr_i_ds>(int i) const { return SpreadDefinition::exch_spr_i_ds{ get_exch_spr_i_ds(i)}; }
    template<> inline int SpreadDefinition::count<SpreadDefinition::exch_spr_i_ds>() const { return static_cast<int>( m_exch_spr_i_ds.size()); }
    template<> inline const auto SpreadDefinition::get<SpreadDefinition::legs>(int i) const { return SpreadDefinition::legs{ get_legs(i)}; }
    template<> inline int SpreadDefinition::count<SpreadDefinition::legs>() const { return static_cast<int>( m_legs.size()); }
    template<> inline const auto SpreadDefinition_PKey::get<SpreadDefinition_PKey::srspread_id>() const { return m_srspread_id; }
    
    template<> inline const auto SpreadDefinition_ExchSprIDs::get<SpreadDefinition_ExchSprIDs::exch_spr_id>() const { return m_exch_spr_id; }
    
    template<> inline const auto SpreadDefinition_Legs::get<SpreadDefinition_Legs::leg_sec_key>() const { return SpreadDefinition_Legs::leg_sec_key{m_leg_sec_key}; }
    template<> inline const auto SpreadDefinition_Legs::get<SpreadDefinition_Legs::leg_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_leg_sec_type));}
    template<> inline const auto SpreadDefinition_Legs::get<SpreadDefinition_Legs::leg_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_leg_side));}
    template<> inline const auto SpreadDefinition_Legs::get<SpreadDefinition_Legs::leg_ratio>() const { return m_leg_ratio; }
    template<> inline const auto SpreadDefinition_Legs::get<SpreadDefinition_Legs::ref_delta>() const { return m_ref_delta; }
    template<> inline const auto SpreadDefinition_Legs::get<SpreadDefinition_Legs::ref_prc>() const { return m_ref_prc; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpreadDefinition_PKey& m) {
        o << "\"srspread_id\":" << m.get<SpreadDefinition_PKey::srspread_id>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadDefinition_ExchSprIDs& m) {
        o << "\"exch_spr_id\":\"" << m.get<SpreadDefinition_ExchSprIDs::exch_spr_id>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadDefinition_Legs& m) {
        o << "\"leg_sec_key\":{" << m.get<SpreadDefinition_Legs::leg_sec_key>() << "}";
        o << ",\"leg_sec_type\":" << (int64_t)m.get<SpreadDefinition_Legs::leg_sec_type>();
        o << ",\"leg_side\":" << (int64_t)m.get<SpreadDefinition_Legs::leg_side>();
        o << ",\"leg_ratio\":" << m.get<SpreadDefinition_Legs::leg_ratio>();
        o << ",\"ref_delta\":" << m.get<SpreadDefinition_Legs::ref_delta>();
        o << ",\"ref_prc\":" << m.get<SpreadDefinition_Legs::ref_prc>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpreadDefinition& m) {
        o << "\"_meta\":{" << m.get<SpreadDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpreadDefinition::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<SpreadDefinition::ticker>() << "}";
        o << ",\"spread_class\":" << (int64_t)m.get<SpreadDefinition::spread_class>();
        {
            std::time_t tt = m.get<SpreadDefinition::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"exch_spr_i_ds\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpreadDefinition::exch_spr_i_ds>(); ++i) {
                o << delim << m.get<SpreadDefinition::exch_spr_i_ds>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<SpreadDefinition::legs>(); ++i) {
                o << delim << m.get<SpreadDefinition::legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}