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

    #ifndef _pos__GUARD__
    #define _pos__GUARD__
    DECL_STRONG_TYPE(pos, uint32);
    #endif//_pos__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _f_num__GUARD__
    #define _f_num__GUARD__
    DECL_STRONG_TYPE(f_num, uint32);
    #endif//_f_num__GUARD__

    #ifndef _is_pkey__GUARD__
    #define _is_pkey__GUARD__
    DECL_STRONG_TYPE(is_pkey, spiderrock::protobuf::api::YesNo);
    #endif//_is_pkey__GUARD__

    #ifndef _in_repeater__GUARD__
    #define _in_repeater__GUARD__
    DECL_STRONG_TYPE(in_repeater, string);
    #endif//_in_repeater__GUARD__

    #ifndef _f_type__GUARD__
    #define _f_type__GUARD__
    DECL_STRONG_TYPE(f_type, spiderrock::protobuf::api::FieldType);
    #endif//_f_type__GUARD__

    #ifndef _json_enc_type__GUARD__
    #define _json_enc_type__GUARD__
    DECL_STRONG_TYPE(json_enc_type, string);
    #endif//_json_enc_type__GUARD__

    #ifndef _proto_enc_type__GUARD__
    #define _proto_enc_type__GUARD__
    DECL_STRONG_TYPE(proto_enc_type, string);
    #endif//_proto_enc_type__GUARD__

    #ifndef _s_len__GUARD__
    #define _s_len__GUARD__
    DECL_STRONG_TYPE(s_len, uint32);
    #endif//_s_len__GUARD__

    #ifndef _e_name__GUARD__
    #define _e_name__GUARD__
    DECL_STRONG_TYPE(e_name, string);
    #endif//_e_name__GUARD__

    #ifndef _e_set__GUARD__
    #define _e_set__GUARD__
    DECL_STRONG_TYPE(e_set, string);
    #endif//_e_set__GUARD__

    #ifndef _default_val__GUARD__
    #define _default_val__GUARD__
    DECL_STRONG_TYPE(default_val, string);
    #endif//_default_val__GUARD__

    #ifndef _desc__GUARD__
    #define _desc__GUARD__
    DECL_STRONG_TYPE(desc, string);
    #endif//_desc__GUARD__

    #ifndef _f_ctrl__GUARD__
    #define _f_ctrl__GUARD__
    DECL_STRONG_TYPE(f_ctrl, spiderrock::protobuf::api::FieldControl);
    #endif//_f_ctrl__GUARD__

    #ifndef _min_v__GUARD__
    #define _min_v__GUARD__
    DECL_STRONG_TYPE(min_v, double);
    #endif//_min_v__GUARD__

    #ifndef _max_v__GUARD__
    #define _max_v__GUARD__
    DECL_STRONG_TYPE(max_v, double);
    #endif//_max_v__GUARD__

    #ifndef _meta_type__GUARD__
    #define _meta_type__GUARD__
    DECL_STRONG_TYPE(meta_type, string);
    #endif//_meta_type__GUARD__

    #ifndef _label__GUARD__
    #define _label__GUARD__
    DECL_STRONG_TYPE(label, string);
    #endif//_label__GUARD__

    #ifndef _group__GUARD__
    #define _group__GUARD__
    DECL_STRONG_TYPE(group, string);
    #endif//_group__GUARD__

    #ifndef _format__GUARD__
    #define _format__GUARD__
    DECL_STRONG_TYPE(format, string);
    #endif//_format__GUARD__

    #ifndef _c_color__GUARD__
    #define _c_color__GUARD__
    DECL_STRONG_TYPE(c_color, int32);
    #endif//_c_color__GUARD__

    #ifndef _context_query__GUARD__
    #define _context_query__GUARD__
    DECL_STRONG_TYPE(context_query, string);
    #endif//_context_query__GUARD__

    

    class FieldDesc {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pos = spiderrock::protobuf::api::pos;
        using name = spiderrock::protobuf::api::name;
        using f_num = spiderrock::protobuf::api::f_num;
        using is_pkey = spiderrock::protobuf::api::is_pkey;
        using in_repeater = spiderrock::protobuf::api::in_repeater;
        using f_type = spiderrock::protobuf::api::f_type;
        using json_enc_type = spiderrock::protobuf::api::json_enc_type;
        using proto_enc_type = spiderrock::protobuf::api::proto_enc_type;
        using s_len = spiderrock::protobuf::api::s_len;
        using e_name = spiderrock::protobuf::api::e_name;
        using e_set = spiderrock::protobuf::api::e_set;
        using default_val = spiderrock::protobuf::api::default_val;
        using desc = spiderrock::protobuf::api::desc;
        using f_ctrl = spiderrock::protobuf::api::f_ctrl;
        using min_v = spiderrock::protobuf::api::min_v;
        using max_v = spiderrock::protobuf::api::max_v;
        using meta_type = spiderrock::protobuf::api::meta_type;
        using label = spiderrock::protobuf::api::label;
        using group = spiderrock::protobuf::api::group;
        using format = spiderrock::protobuf::api::format;
        using c_color = spiderrock::protobuf::api::c_color;
        using context_query = spiderrock::protobuf::api::context_query;

        private:
        _meta m__meta{};
        pos m_pos{};
        name m_name{};
        f_num m_f_num{};
        is_pkey m_is_pkey{};
        in_repeater m_in_repeater{};
        f_type m_f_type{};
        json_enc_type m_json_enc_type{};
        proto_enc_type m_proto_enc_type{};
        s_len m_s_len{};
        e_name m_e_name{};
        e_set m_e_set{};
        default_val m_default_val{};
        desc m_desc{};
        f_ctrl m_f_ctrl{};
        min_v m_min_v{};
        max_v m_max_v{};
        meta_type m_meta_type{};
        label m_label{};
        group m_group{};
        format m_format{};
        c_color m_c_color{};
        context_query m_context_query{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pos get_pos() const {
            return m_pos;
        }		
        name get_name() const {
            return m_name;
        }		
        f_num get_f_num() const {
            return m_f_num;
        }		
        is_pkey get_is_pkey() const {
            return m_is_pkey;
        }		
        in_repeater get_in_repeater() const {
            return m_in_repeater;
        }		
        f_type get_f_type() const {
            return m_f_type;
        }		
        json_enc_type get_json_enc_type() const {
            return m_json_enc_type;
        }		
        proto_enc_type get_proto_enc_type() const {
            return m_proto_enc_type;
        }		
        s_len get_s_len() const {
            return m_s_len;
        }		
        e_name get_e_name() const {
            return m_e_name;
        }		
        e_set get_e_set() const {
            return m_e_set;
        }		
        default_val get_default_val() const {
            return m_default_val;
        }		
        desc get_desc() const {
            return m_desc;
        }		
        f_ctrl get_f_ctrl() const {
            return m_f_ctrl;
        }		
        min_v get_min_v() const {
            return m_min_v;
        }		
        max_v get_max_v() const {
            return m_max_v;
        }		
        meta_type get_meta_type() const {
            return m_meta_type;
        }		
        label get_label() const {
            return m_label;
        }		
        group get_group() const {
            return m_group;
        }		
        format get_format() const {
            return m_format;
        }		
        c_color get_c_color() const {
            return m_c_color;
        }		
        context_query get_context_query() const {
            return m_context_query;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_pos(const pos& value)  {
            m_pos = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_f_num(const f_num& value)  {
            m_f_num = value;
        }
        void set_is_pkey(const is_pkey& value)  {
            m_is_pkey = value;
        }
        void set_in_repeater(const in_repeater& value)  {
            m_in_repeater = value;
        }
        void set_f_type(const f_type& value)  {
            m_f_type = value;
        }
        void set_json_enc_type(const json_enc_type& value)  {
            m_json_enc_type = value;
        }
        void set_proto_enc_type(const proto_enc_type& value)  {
            m_proto_enc_type = value;
        }
        void set_s_len(const s_len& value)  {
            m_s_len = value;
        }
        void set_e_name(const e_name& value)  {
            m_e_name = value;
        }
        void set_e_set(const e_set& value)  {
            m_e_set = value;
        }
        void set_default_val(const default_val& value)  {
            m_default_val = value;
        }
        void set_desc(const desc& value)  {
            m_desc = value;
        }
        void set_f_ctrl(const f_ctrl& value)  {
            m_f_ctrl = value;
        }
        void set_min_v(const min_v& value)  {
            m_min_v = value;
        }
        void set_max_v(const max_v& value)  {
            m_max_v = value;
        }
        void set_meta_type(const meta_type& value)  {
            m_meta_type = value;
        }
        void set_label(const label& value)  {
            m_label = value;
        }
        void set_group(const group& value)  {
            m_group = value;
        }
        void set_format(const format& value)  {
            m_format = value;
        }
        void set_c_color(const c_color& value)  {
            m_c_color = value;
        }
        void set_context_query(const context_query& value)  {
            m_context_query = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to FieldDesc::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pos & value) {
            set_pos(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const f_num & value) {
            set_f_num(value);
        }
        void set(const is_pkey & value) {
            set_is_pkey(value);
        }
        void set(const in_repeater & value) {
            set_in_repeater(value);
        }
        void set(const f_type & value) {
            set_f_type(value);
        }
        void set(const json_enc_type & value) {
            set_json_enc_type(value);
        }
        void set(const proto_enc_type & value) {
            set_proto_enc_type(value);
        }
        void set(const s_len & value) {
            set_s_len(value);
        }
        void set(const e_name & value) {
            set_e_name(value);
        }
        void set(const e_set & value) {
            set_e_set(value);
        }
        void set(const default_val & value) {
            set_default_val(value);
        }
        void set(const desc & value) {
            set_desc(value);
        }
        void set(const f_ctrl & value) {
            set_f_ctrl(value);
        }
        void set(const min_v & value) {
            set_min_v(value);
        }
        void set(const max_v & value) {
            set_max_v(value);
        }
        void set(const meta_type & value) {
            set_meta_type(value);
        }
        void set(const label & value) {
            set_label(value);
        }
        void set(const group & value) {
            set_group(value);
        }
        void set(const format & value) {
            set_format(value);
        }
        void set(const c_color & value) {
            set_c_color(value);
        }
        void set(const context_query & value) {
            set_context_query(value);
        }

        void set(const FieldDesc & value) {
            set(value.m__meta);
            set(value.m_pos);
            set(value.m_name);
            set(value.m_f_num);
            set(value.m_is_pkey);
            set(value.m_in_repeater);
            set(value.m_f_type);
            set(value.m_json_enc_type);
            set(value.m_proto_enc_type);
            set(value.m_s_len);
            set(value.m_e_name);
            set(value.m_e_set);
            set(value.m_default_val);
            set(value.m_desc);
            set(value.m_f_ctrl);
            set(value.m_min_v);
            set(value.m_max_v);
            set(value.m_meta_type);
            set(value.m_label);
            set(value.m_group);
            set(value.m_format);
            set(value.m_c_color);
            set(value.m_context_query);
        }

        FieldDesc() {
            m__meta.set_message_type("FieldDesc");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3325, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3325, length);
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
             *this = FieldDesc{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePos() const {
            return !(m_pos == 0);
        }
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeFNum() const {
            return !(m_f_num == 0);
        }
        bool IncludeInRepeater() const {
            return !(m_in_repeater.empty());
        }
        bool IncludeJsonEncType() const {
            return !(m_json_enc_type.empty());
        }
        bool IncludeProtoEncType() const {
            return !(m_proto_enc_type.empty());
        }
        bool IncludeSLen() const {
            return !(m_s_len == 0);
        }
        bool IncludeEName() const {
            return !(m_e_name.empty());
        }
        bool IncludeESet() const {
            return !(m_e_set.empty());
        }
        bool IncludeDefaultVal() const {
            return !(m_default_val.empty());
        }
        bool IncludeDesc() const {
            return !(m_desc.empty());
        }
        bool IncludeMinV() const {
            return !(m_min_v == 0.0);
        }
        bool IncludeMaxV() const {
            return !(m_max_v == 0.0);
        }
        bool IncludeMetaType() const {
            return !(m_meta_type.empty());
        }
        bool IncludeLabel() const {
            return !(m_label.empty());
        }
        bool IncludeGroup() const {
            return !(m_group.empty());
        }
        bool IncludeFormat() const {
            return !(m_format.empty());
        }
        bool IncludeCColor() const {
            return !(m_c_color == 0);
        }
        bool IncludeContextQuery() const {
            return !(m_context_query.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludePos()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(100,m_pos);
            }
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_name);
            }
            if ( IncludeFNum()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(106,m_f_num);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_pkey)));
            if ( IncludeInRepeater()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_in_repeater);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldType>(m_f_type)));
            if ( IncludeJsonEncType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_json_enc_type);
            }
            if ( IncludeProtoEncType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_proto_enc_type);
            }
            if ( IncludeSLen()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(124,m_s_len);
            }
            if ( IncludeEName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_e_name);
            }
            if ( IncludeESet()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_e_set);
            }
            if ( IncludeDefaultVal()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_default_val);
            }
            if ( IncludeDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_desc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldControl>(m_f_ctrl)));
            if ( IncludeMinV()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_min_v);
            }
            if ( IncludeMaxV()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(145,m_max_v);
            }
            if ( IncludeMetaType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_meta_type);
            }
            if ( IncludeLabel()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_label);
            }
            if ( IncludeGroup()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_group);
            }
            if ( IncludeFormat()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_format);
            }
            if ( IncludeCColor()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_c_color);
            }
            if ( IncludeContextQuery()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_context_query);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludePos()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,100,m_pos);
            }
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_name));
            }
            if ( IncludeFNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,106,m_f_num);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_pkey)));
            if ( IncludeInRepeater()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_in_repeater));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldType>(m_f_type)));
            if ( IncludeJsonEncType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_json_enc_type));
            }
            if ( IncludeProtoEncType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_proto_enc_type));
            }
            if ( IncludeSLen()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,124,m_s_len);
            }
            if ( IncludeEName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_e_name));
            }
            if ( IncludeESet()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_e_set));
            }
            if ( IncludeDefaultVal()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_default_val));
            }
            if ( IncludeDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_desc));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldControl>(m_f_ctrl)));
            if ( IncludeMinV()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_min_v);
            }
            if ( IncludeMaxV()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,145,m_max_v);
            }
            if ( IncludeMetaType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_meta_type));
            }
            if ( IncludeLabel()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_label));
            }
            if ( IncludeGroup()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_group));
            }
            if ( IncludeFormat()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_format));
            }
            if ( IncludeCColor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_c_color);
            }
            if ( IncludeContextQuery()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_context_query));
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
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_pos = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_f_num = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_pkey = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_in_repeater = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_f_type = static_cast<spiderrock::protobuf::api::FieldType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_json_enc_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_proto_enc_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_s_len = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_e_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_e_set = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_default_val = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_f_ctrl = static_cast<spiderrock::protobuf::api::FieldControl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_v = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_v = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_meta_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_label = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_group = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_format = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_color = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_context_query = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto FieldDesc::get<FieldDesc::_meta>() const { return FieldDesc::_meta{ m__meta}; }
    template<> inline const auto FieldDesc::get<FieldDesc::pos>() const { return m_pos; }
    template<> inline const auto FieldDesc::get<FieldDesc::name>() const { return m_name; }
    template<> inline const auto FieldDesc::get<FieldDesc::f_num>() const { return m_f_num; }
    template<> inline const auto FieldDesc::get<FieldDesc::is_pkey>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_pkey)); }
    template<> inline const auto FieldDesc::get<FieldDesc::in_repeater>() const { return m_in_repeater; }
    template<> inline const auto FieldDesc::get<FieldDesc::f_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldType>( m_f_type)); }
    template<> inline const auto FieldDesc::get<FieldDesc::json_enc_type>() const { return m_json_enc_type; }
    template<> inline const auto FieldDesc::get<FieldDesc::proto_enc_type>() const { return m_proto_enc_type; }
    template<> inline const auto FieldDesc::get<FieldDesc::s_len>() const { return m_s_len; }
    template<> inline const auto FieldDesc::get<FieldDesc::e_name>() const { return m_e_name; }
    template<> inline const auto FieldDesc::get<FieldDesc::e_set>() const { return m_e_set; }
    template<> inline const auto FieldDesc::get<FieldDesc::default_val>() const { return m_default_val; }
    template<> inline const auto FieldDesc::get<FieldDesc::desc>() const { return m_desc; }
    template<> inline const auto FieldDesc::get<FieldDesc::f_ctrl>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FieldControl>( m_f_ctrl)); }
    template<> inline const auto FieldDesc::get<FieldDesc::min_v>() const { return m_min_v; }
    template<> inline const auto FieldDesc::get<FieldDesc::max_v>() const { return m_max_v; }
    template<> inline const auto FieldDesc::get<FieldDesc::meta_type>() const { return m_meta_type; }
    template<> inline const auto FieldDesc::get<FieldDesc::label>() const { return m_label; }
    template<> inline const auto FieldDesc::get<FieldDesc::group>() const { return m_group; }
    template<> inline const auto FieldDesc::get<FieldDesc::format>() const { return m_format; }
    template<> inline const auto FieldDesc::get<FieldDesc::c_color>() const { return m_c_color; }
    template<> inline const auto FieldDesc::get<FieldDesc::context_query>() const { return m_context_query; }
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const FieldDesc& m) {
        o << "\"_meta\":{" << m.get<FieldDesc::_meta>() << "}";
        o << ",\"pos\":" << m.get<FieldDesc::pos>();
        o << ",\"name\":\"" << m.get<FieldDesc::name>() << "\"";
        o << ",\"f_num\":" << m.get<FieldDesc::f_num>();
        o << ",\"is_pkey\":" << (int64_t)m.get<FieldDesc::is_pkey>();
        o << ",\"in_repeater\":\"" << m.get<FieldDesc::in_repeater>() << "\"";
        o << ",\"f_type\":" << (int64_t)m.get<FieldDesc::f_type>();
        o << ",\"json_enc_type\":\"" << m.get<FieldDesc::json_enc_type>() << "\"";
        o << ",\"proto_enc_type\":\"" << m.get<FieldDesc::proto_enc_type>() << "\"";
        o << ",\"s_len\":" << m.get<FieldDesc::s_len>();
        o << ",\"e_name\":\"" << m.get<FieldDesc::e_name>() << "\"";
        o << ",\"e_set\":\"" << m.get<FieldDesc::e_set>() << "\"";
        o << ",\"default_val\":\"" << m.get<FieldDesc::default_val>() << "\"";
        o << ",\"desc\":\"" << m.get<FieldDesc::desc>() << "\"";
        o << ",\"f_ctrl\":" << (int64_t)m.get<FieldDesc::f_ctrl>();
        o << ",\"min_v\":" << m.get<FieldDesc::min_v>();
        o << ",\"max_v\":" << m.get<FieldDesc::max_v>();
        o << ",\"meta_type\":\"" << m.get<FieldDesc::meta_type>() << "\"";
        o << ",\"label\":\"" << m.get<FieldDesc::label>() << "\"";
        o << ",\"group\":\"" << m.get<FieldDesc::group>() << "\"";
        o << ",\"format\":\"" << m.get<FieldDesc::format>() << "\"";
        o << ",\"c_color\":" << m.get<FieldDesc::c_color>();
        o << ",\"context_query\":\"" << m.get<FieldDesc::context_query>() << "\"";
        return o;
    }

}
}
}