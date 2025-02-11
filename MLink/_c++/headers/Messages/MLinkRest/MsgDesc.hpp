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

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _m_num__GUARD__
    #define _m_num__GUARD__
    DECL_STRONG_TYPE(m_num, uint32);
    #endif//_m_num__GUARD__

    #ifndef _schema_hash__string__GUARD__
    #define _schema_hash__string__GUARD__
    DECL_STRONG_TYPE(schema_hash__string, string);
    #endif//_schema_hash__string__GUARD__

    #ifndef _actions__GUARD__
    #define _actions__GUARD__
    DECL_STRONG_TYPE(actions, string);
    #endif//_actions__GUARD__

    #ifndef _has_tkey__GUARD__
    #define _has_tkey__GUARD__
    DECL_STRONG_TYPE(has_tkey, spiderrock::protobuf::api::YesNo);
    #endif//_has_tkey__GUARD__

    #ifndef _has_ekey__GUARD__
    #define _has_ekey__GUARD__
    DECL_STRONG_TYPE(has_ekey, spiderrock::protobuf::api::YesNo);
    #endif//_has_ekey__GUARD__

    #ifndef _has_okey__GUARD__
    #define _has_okey__GUARD__
    DECL_STRONG_TYPE(has_okey, spiderrock::protobuf::api::YesNo);
    #endif//_has_okey__GUARD__

    #ifndef _has_cf__GUARD__
    #define _has_cf__GUARD__
    DECL_STRONG_TYPE(has_cf, spiderrock::protobuf::api::YesNo);
    #endif//_has_cf__GUARD__

    #ifndef _m_token__GUARD__
    #define _m_token__GUARD__
    DECL_STRONG_TYPE(m_token, spiderrock::protobuf::api::MLinkToken);
    #endif//_m_token__GUARD__

    #ifndef _srse_products__GUARD__
    #define _srse_products__GUARD__
    DECL_STRONG_TYPE(srse_products, string);
    #endif//_srse_products__GUARD__

    #ifndef _desc__GUARD__
    #define _desc__GUARD__
    DECL_STRONG_TYPE(desc, string);
    #endif//_desc__GUARD__

    #ifndef _pri_time_field__GUARD__
    #define _pri_time_field__GUARD__
    DECL_STRONG_TYPE(pri_time_field, string);
    #endif//_pri_time_field__GUARD__

    #ifndef _sec_time_field__GUARD__
    #define _sec_time_field__GUARD__
    DECL_STRONG_TYPE(sec_time_field, string);
    #endif//_sec_time_field__GUARD__

    #ifndef _static_filter_fields__GUARD__
    #define _static_filter_fields__GUARD__
    DECL_STRONG_TYPE(static_filter_fields, string);
    #endif//_static_filter_fields__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _fields__GUARD__
    #define _fields__GUARD__
    DECL_STRONG_TYPE(fields, string);
    #endif//_fields__GUARD__

    
    class MsgDesc_GridFieldOptions {
        public:
        //using statements for all types used in this class
        using name = spiderrock::protobuf::api::name;
        using fields = spiderrock::protobuf::api::fields;

        private:
        name m_name{};
        fields m_fields{};

        public:
        name get_name() const {
            return m_name;
        }
        fields get_fields() const {
            return m_fields;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_fields(const fields& value)  {
            m_fields = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MsgDesc_GridFieldOptions::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MsgDesc_GridFieldOptions::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const name & value) { set_name(value); }
        void set(const fields & value) { set_fields(value); }


        MsgDesc_GridFieldOptions() {}

        virtual ~MsgDesc_GridFieldOptions() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(143,m_fields);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,143,static_cast<string>(m_fields));
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
                    case 142: {m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 143: {m_fields = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class MsgDesc {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using name = spiderrock::protobuf::api::name;
        using m_num = spiderrock::protobuf::api::m_num;
        using schema_hash = spiderrock::protobuf::api::schema_hash__string;
        using actions = spiderrock::protobuf::api::actions;
        using has_tkey = spiderrock::protobuf::api::has_tkey;
        using has_ekey = spiderrock::protobuf::api::has_ekey;
        using has_okey = spiderrock::protobuf::api::has_okey;
        using has_cf = spiderrock::protobuf::api::has_cf;
        using m_token = spiderrock::protobuf::api::m_token;
        using srse_products = spiderrock::protobuf::api::srse_products;
        using desc = spiderrock::protobuf::api::desc;
        using pri_time_field = spiderrock::protobuf::api::pri_time_field;
        using sec_time_field = spiderrock::protobuf::api::sec_time_field;
        using static_filter_fields = spiderrock::protobuf::api::static_filter_fields;
        using grid_field_options = spiderrock::protobuf::api::MsgDesc_GridFieldOptions;

        private:
        _meta m__meta{};
        name m_name{};
        m_num m_m_num{};
        schema_hash m_schema_hash{};
        actions m_actions{};
        has_tkey m_has_tkey{};
        has_ekey m_has_ekey{};
        has_okey m_has_okey{};
        has_cf m_has_cf{};
        m_token m_m_token{};
        srse_products m_srse_products{};
        desc m_desc{};
        pri_time_field m_pri_time_field{};
        sec_time_field m_sec_time_field{};
        static_filter_fields m_static_filter_fields{};
        std::vector<grid_field_options> m_grid_field_options{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        name get_name() const {
            return m_name;
        }		
        m_num get_m_num() const {
            return m_m_num;
        }		
        schema_hash get_schema_hash() const {
            return m_schema_hash;
        }		
        actions get_actions() const {
            return m_actions;
        }		
        has_tkey get_has_tkey() const {
            return m_has_tkey;
        }		
        has_ekey get_has_ekey() const {
            return m_has_ekey;
        }		
        has_okey get_has_okey() const {
            return m_has_okey;
        }		
        has_cf get_has_cf() const {
            return m_has_cf;
        }		
        m_token get_m_token() const {
            return m_m_token;
        }		
        srse_products get_srse_products() const {
            return m_srse_products;
        }		
        desc get_desc() const {
            return m_desc;
        }		
        pri_time_field get_pri_time_field() const {
            return m_pri_time_field;
        }		
        sec_time_field get_sec_time_field() const {
            return m_sec_time_field;
        }		
        static_filter_fields get_static_filter_fields() const {
            return m_static_filter_fields;
        }
        const std::vector<grid_field_options>& get_grid_field_options_list() const {
            return m_grid_field_options;
        }
        const grid_field_options& get_grid_field_options(const int i) const {
            return m_grid_field_options.at(i);
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_m_num(const m_num& value)  {
            m_m_num = value;
        }
        void set_schema_hash(const schema_hash& value)  {
            m_schema_hash = value;
        }
        void set_actions(const actions& value)  {
            m_actions = value;
        }
        void set_has_tkey(const has_tkey& value)  {
            m_has_tkey = value;
        }
        void set_has_ekey(const has_ekey& value)  {
            m_has_ekey = value;
        }
        void set_has_okey(const has_okey& value)  {
            m_has_okey = value;
        }
        void set_has_cf(const has_cf& value)  {
            m_has_cf = value;
        }
        void set_m_token(const m_token& value)  {
            m_m_token = value;
        }
        void set_srse_products(const srse_products& value)  {
            m_srse_products = value;
        }
        void set_desc(const desc& value)  {
            m_desc = value;
        }
        void set_pri_time_field(const pri_time_field& value)  {
            m_pri_time_field = value;
        }
        void set_sec_time_field(const sec_time_field& value)  {
            m_sec_time_field = value;
        }
        void set_static_filter_fields(const static_filter_fields& value)  {
            m_static_filter_fields = value;
        }
        void set_grid_field_options_list(const std::vector<grid_field_options>& list)  {
            m_grid_field_options = list;
        }
        void add_grid_field_options(const grid_field_options& item) {
            m_grid_field_options.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MsgDesc::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to MsgDesc::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MsgDesc::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const m_num & value) {
            set_m_num(value);
        }
        void set(const schema_hash & value) {
            set_schema_hash(value);
        }
        void set(const actions & value) {
            set_actions(value);
        }
        void set(const has_tkey & value) {
            set_has_tkey(value);
        }
        void set(const has_ekey & value) {
            set_has_ekey(value);
        }
        void set(const has_okey & value) {
            set_has_okey(value);
        }
        void set(const has_cf & value) {
            set_has_cf(value);
        }
        void set(const m_token & value) {
            set_m_token(value);
        }
        void set(const srse_products & value) {
            set_srse_products(value);
        }
        void set(const desc & value) {
            set_desc(value);
        }
        void set(const pri_time_field & value) {
            set_pri_time_field(value);
        }
        void set(const sec_time_field & value) {
            set_sec_time_field(value);
        }
        void set(const static_filter_fields & value) {
            set_static_filter_fields(value);
        }
        void set(const grid_field_options & value) {
            add_grid_field_options(value);
        }

        void set(const MsgDesc & value) {
            set(value.m__meta);
            set(value.m_name);
            set(value.m_m_num);
            set(value.m_schema_hash);
            set(value.m_actions);
            set(value.m_has_tkey);
            set(value.m_has_ekey);
            set(value.m_has_okey);
            set(value.m_has_cf);
            set(value.m_m_token);
            set(value.m_srse_products);
            set(value.m_desc);
            set(value.m_pri_time_field);
            set(value.m_sec_time_field);
            set(value.m_static_filter_fields);set_grid_field_options_list(value.m_grid_field_options);
        }

        MsgDesc() {
            m__meta.set_message_type("MsgDesc");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3415, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3415, length);
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
             *this = MsgDesc{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeMNum() const {
            return !(m_m_num == 0);
        }
        bool IncludeSchemaHash() const {
            return !(m_schema_hash.empty());
        }
        bool IncludeActions() const {
            return !(m_actions.empty());
        }
        bool IncludeSrseProducts() const {
            return !(m_srse_products.empty());
        }
        bool IncludeDesc() const {
            return !(m_desc.empty());
        }
        bool IncludePriTimeField() const {
            return !(m_pri_time_field.empty());
        }
        bool IncludeSecTimeField() const {
            return !(m_sec_time_field.empty());
        }
        bool IncludeStaticFilterFields() const {
            return !(m_static_filter_fields.empty());
        }
        bool IncludeGridFieldOptions() const {
            return (!m_grid_field_options.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_name);
            }
            if ( IncludeMNum()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(103,m_m_num);
            }
            if ( IncludeSchemaHash()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_schema_hash);
            }
            if ( IncludeActions()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_actions);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_tkey)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_ekey)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_okey)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cf)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_m_token)));
            if ( IncludeSrseProducts()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(140,m_srse_products);
            }
            if ( IncludeDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_desc);
            }
            if ( IncludePriTimeField()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_pri_time_field);
            }
            if ( IncludeSecTimeField()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_sec_time_field);
            }
            if ( IncludeStaticFilterFields()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_static_filter_fields);
            }
            if ( IncludeGridFieldOptions()) {
                for (auto& item : m_grid_field_options) {
					totalSize += SRProtobufCPP::TagCodec::Size(141, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_name));
            }
            if ( IncludeMNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,103,m_m_num);
            }
            if ( IncludeSchemaHash()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_schema_hash));
            }
            if ( IncludeActions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_actions));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_tkey)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_ekey)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_okey)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_cf)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>(m_m_token)));
            if ( IncludeSrseProducts()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,140,static_cast<string>(m_srse_products));
            }
            if ( IncludeDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_desc));
            }
            if ( IncludePriTimeField()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_pri_time_field));
            }
            if ( IncludeSecTimeField()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_sec_time_field));
            }
            if ( IncludeStaticFilterFields()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_static_filter_fields));
            }
            if ( IncludeGridFieldOptions()) {
                for (auto& item : m_grid_field_options) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 141, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_m_num = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_schema_hash = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_actions = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_tkey = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_ekey = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_okey = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_cf = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_m_token = static_cast<spiderrock::protobuf::api::MLinkToken>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_srse_products = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_pri_time_field = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sec_time_field = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_static_filter_fields = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            grid_field_options item_grid_field_options;
                            item_grid_field_options.Decode(pos, pos+length);  
                            m_grid_field_options.emplace_back(item_grid_field_options);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MsgDesc::get<MsgDesc::_meta>() const { return MsgDesc::_meta{ m__meta}; }
    template<> inline const auto MsgDesc::get<MsgDesc::name>() const { return m_name; }
    template<> inline const auto MsgDesc::get<MsgDesc::m_num>() const { return m_m_num; }
    template<> inline const auto MsgDesc::get<MsgDesc::schema_hash>() const { return m_schema_hash; }
    template<> inline const auto MsgDesc::get<MsgDesc::actions>() const { return m_actions; }
    template<> inline const auto MsgDesc::get<MsgDesc::has_tkey>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_tkey)); }
    template<> inline const auto MsgDesc::get<MsgDesc::has_ekey>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_ekey)); }
    template<> inline const auto MsgDesc::get<MsgDesc::has_okey>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_okey)); }
    template<> inline const auto MsgDesc::get<MsgDesc::has_cf>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_cf)); }
    template<> inline const auto MsgDesc::get<MsgDesc::m_token>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkToken>( m_m_token)); }
    template<> inline const auto MsgDesc::get<MsgDesc::srse_products>() const { return m_srse_products; }
    template<> inline const auto MsgDesc::get<MsgDesc::desc>() const { return m_desc; }
    template<> inline const auto MsgDesc::get<MsgDesc::pri_time_field>() const { return m_pri_time_field; }
    template<> inline const auto MsgDesc::get<MsgDesc::sec_time_field>() const { return m_sec_time_field; }
    template<> inline const auto MsgDesc::get<MsgDesc::static_filter_fields>() const { return m_static_filter_fields; }
    template<> inline const auto MsgDesc::get<MsgDesc::grid_field_options>(int i) const { return MsgDesc::grid_field_options{ get_grid_field_options(i)}; }
    template<> inline int MsgDesc::count<MsgDesc::grid_field_options>() const { return static_cast<int>( m_grid_field_options.size()); }
    template<> inline const auto MsgDesc_GridFieldOptions::get<MsgDesc_GridFieldOptions::name>() const { return m_name; }
    template<> inline const auto MsgDesc_GridFieldOptions::get<MsgDesc_GridFieldOptions::fields>() const { return m_fields; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MsgDesc_GridFieldOptions& m) {
        o << "\"name\":\"" << m.get<MsgDesc_GridFieldOptions::name>() << "\"";
        o << ",\"fields\":\"" << m.get<MsgDesc_GridFieldOptions::fields>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MsgDesc& m) {
        o << "\"_meta\":{" << m.get<MsgDesc::_meta>() << "}";
        o << ",\"name\":\"" << m.get<MsgDesc::name>() << "\"";
        o << ",\"m_num\":" << m.get<MsgDesc::m_num>();
        o << ",\"schema_hash\":\"" << m.get<MsgDesc::schema_hash>() << "\"";
        o << ",\"actions\":\"" << m.get<MsgDesc::actions>() << "\"";
        o << ",\"has_tkey\":" << (int64_t)m.get<MsgDesc::has_tkey>();
        o << ",\"has_ekey\":" << (int64_t)m.get<MsgDesc::has_ekey>();
        o << ",\"has_okey\":" << (int64_t)m.get<MsgDesc::has_okey>();
        o << ",\"has_cf\":" << (int64_t)m.get<MsgDesc::has_cf>();
        o << ",\"m_token\":" << (int64_t)m.get<MsgDesc::m_token>();
        o << ",\"srse_products\":\"" << m.get<MsgDesc::srse_products>() << "\"";
        o << ",\"desc\":\"" << m.get<MsgDesc::desc>() << "\"";
        o << ",\"pri_time_field\":\"" << m.get<MsgDesc::pri_time_field>() << "\"";
        o << ",\"sec_time_field\":\"" << m.get<MsgDesc::sec_time_field>() << "\"";
        o << ",\"static_filter_fields\":\"" << m.get<MsgDesc::static_filter_fields>() << "\"";
        o << ",\"grid_field_options\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MsgDesc::grid_field_options>(); ++i) {
                o << delim << m.get<MsgDesc::grid_field_options>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}