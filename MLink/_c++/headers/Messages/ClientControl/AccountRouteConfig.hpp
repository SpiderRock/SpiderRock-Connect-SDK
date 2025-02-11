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

    #ifndef _enabled__GUARD__
    #define _enabled__GUARD__
    DECL_STRONG_TYPE(enabled, spiderrock::protobuf::api::YesNo);
    #endif//_enabled__GUARD__

    #ifndef _relationship__GUARD__
    #define _relationship__GUARD__
    DECL_STRONG_TYPE(relationship, spiderrock::protobuf::api::RelationshipType);
    #endif//_relationship__GUARD__

    #ifndef _cat_dest_firm_imid__GUARD__
    #define _cat_dest_firm_imid__GUARD__
    DECL_STRONG_TYPE(cat_dest_firm_imid, string);
    #endif//_cat_dest_firm_imid__GUARD__

    #ifndef _cat_dest_dept_type__GUARD__
    #define _cat_dest_dept_type__GUARD__
    DECL_STRONG_TYPE(cat_dest_dept_type, spiderrock::protobuf::api::CatDeptType);
    #endif//_cat_dest_dept_type__GUARD__

    #ifndef _routing_rule__GUARD__
    #define _routing_rule__GUARD__
    DECL_STRONG_TYPE(routing_rule, spiderrock::protobuf::api::RoutingRule);
    #endif//_routing_rule__GUARD__

    #ifndef _backup_route_code__GUARD__
    #define _backup_route_code__GUARD__
    DECL_STRONG_TYPE(backup_route_code, string);
    #endif//_backup_route_code__GUARD__

    #ifndef _extern_params__GUARD__
    #define _extern_params__GUARD__
    DECL_STRONG_TYPE(extern_params, string);
    #endif//_extern_params__GUARD__

    #ifndef _comment__GUARD__
    #define _comment__GUARD__
    DECL_STRONG_TYPE(comment, string);
    #endif//_comment__GUARD__

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

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _ex_dest__GUARD__
    #define _ex_dest__GUARD__
    DECL_STRONG_TYPE(ex_dest, string);
    #endif//_ex_dest__GUARD__

    #ifndef _clr_flip_type__GUARD__
    #define _clr_flip_type__GUARD__
    DECL_STRONG_TYPE(clr_flip_type, spiderrock::protobuf::api::FlipType);
    #endif//_clr_flip_type__GUARD__

    #ifndef _clr_flip_firm__GUARD__
    #define _clr_flip_firm__GUARD__
    DECL_STRONG_TYPE(clr_flip_firm, string);
    #endif//_clr_flip_firm__GUARD__

    #ifndef _clr_flip_accnt__GUARD__
    #define _clr_flip_accnt__GUARD__
    DECL_STRONG_TYPE(clr_flip_accnt, string);
    #endif//_clr_flip_accnt__GUARD__

    #ifndef _clr_agent__GUARD__
    #define _clr_agent__GUARD__
    DECL_STRONG_TYPE(clr_agent, string);
    #endif//_clr_agent__GUARD__

    #ifndef _clr_tax_id__GUARD__
    #define _clr_tax_id__GUARD__
    DECL_STRONG_TYPE(clr_tax_id, string);
    #endif//_clr_tax_id__GUARD__

    #ifndef _ex_dest__GUARD__
    #define _ex_dest__GUARD__
    DECL_STRONG_TYPE(ex_dest, string);
    #endif//_ex_dest__GUARD__

    #ifndef _disable__GUARD__
    #define _disable__GUARD__
    DECL_STRONG_TYPE(disable, spiderrock::protobuf::api::YesNo);
    #endif//_disable__GUARD__

    #ifndef _exch_group__GUARD__
    #define _exch_group__GUARD__
    DECL_STRONG_TYPE(exch_group, spiderrock::protobuf::api::ExchGroup);
    #endif//_exch_group__GUARD__

    #ifndef _sec_type__SpdrSecType__GUARD__
    #define _sec_type__SpdrSecType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrSecType, spiderrock::protobuf::api::SpdrSecType);
    #endif//_sec_type__SpdrSecType__GUARD__

    #ifndef _exec_brkr_accnt__GUARD__
    #define _exec_brkr_accnt__GUARD__
    DECL_STRONG_TYPE(exec_brkr_accnt, string);
    #endif//_exec_brkr_accnt__GUARD__

    #ifndef _exec_brkr_cl_firm__GUARD__
    #define _exec_brkr_cl_firm__GUARD__
    DECL_STRONG_TYPE(exec_brkr_cl_firm, string);
    #endif//_exec_brkr_cl_firm__GUARD__

    #ifndef _exec_brkr_user_name__GUARD__
    #define _exec_brkr_user_name__GUARD__
    DECL_STRONG_TYPE(exec_brkr_user_name, string);
    #endif//_exec_brkr_user_name__GUARD__

    #ifndef _routing_code__GUARD__
    #define _routing_code__GUARD__
    DECL_STRONG_TYPE(routing_code, string);
    #endif//_routing_code__GUARD__

    #ifndef _cob_tied__GUARD__
    #define _cob_tied__GUARD__
    DECL_STRONG_TYPE(cob_tied, spiderrock::protobuf::api::YesNo);
    #endif//_cob_tied__GUARD__

    
    class AccountRouteConfig_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        exec_brkr_code m_exec_brkr_code{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const exec_brkr_code & value) { set_exec_brkr_code(value); }


        AccountRouteConfig_PKey() {}

        virtual ~AccountRouteConfig_PKey() {
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
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_client_firm);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(15,m_exec_brkr_code);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_client_firm));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,15,static_cast<string>(m_exec_brkr_code));
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
                    case 14: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 15: {m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AccountRouteConfig_ClearingFlip {
        public:
        //using statements for all types used in this class
        using ex_dest = spiderrock::protobuf::api::ex_dest;
        using clr_flip_type = spiderrock::protobuf::api::clr_flip_type;
        using clr_flip_firm = spiderrock::protobuf::api::clr_flip_firm;
        using clr_flip_accnt = spiderrock::protobuf::api::clr_flip_accnt;
        using clr_agent = spiderrock::protobuf::api::clr_agent;
        using clr_tax_id = spiderrock::protobuf::api::clr_tax_id;

        private:
        ex_dest m_ex_dest{};
        clr_flip_type m_clr_flip_type{};
        clr_flip_firm m_clr_flip_firm{};
        clr_flip_accnt m_clr_flip_accnt{};
        clr_agent m_clr_agent{};
        clr_tax_id m_clr_tax_id{};

        public:
        ex_dest get_ex_dest() const {
            return m_ex_dest;
        }
        clr_flip_type get_clr_flip_type() const {
            return m_clr_flip_type;
        }
        clr_flip_firm get_clr_flip_firm() const {
            return m_clr_flip_firm;
        }
        clr_flip_accnt get_clr_flip_accnt() const {
            return m_clr_flip_accnt;
        }
        clr_agent get_clr_agent() const {
            return m_clr_agent;
        }
        clr_tax_id get_clr_tax_id() const {
            return m_clr_tax_id;
        }
        void set_ex_dest(const ex_dest& value)  {
            m_ex_dest = value;
        }
        void set_clr_flip_type(const clr_flip_type& value)  {
            m_clr_flip_type = value;
        }
        void set_clr_flip_firm(const clr_flip_firm& value)  {
            m_clr_flip_firm = value;
        }
        void set_clr_flip_accnt(const clr_flip_accnt& value)  {
            m_clr_flip_accnt = value;
        }
        void set_clr_agent(const clr_agent& value)  {
            m_clr_agent = value;
        }
        void set_clr_tax_id(const clr_tax_id& value)  {
            m_clr_tax_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_ClearingFlip::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_ClearingFlip::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ex_dest & value) { set_ex_dest(value); }
        void set(const clr_flip_type & value) { set_clr_flip_type(value); }
        void set(const clr_flip_firm & value) { set_clr_flip_firm(value); }
        void set(const clr_flip_accnt & value) { set_clr_flip_accnt(value); }
        void set(const clr_agent & value) { set_clr_agent(value); }
        void set(const clr_tax_id & value) { set_clr_tax_id(value); }


        AccountRouteConfig_ClearingFlip() {}

        virtual ~AccountRouteConfig_ClearingFlip() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_ex_dest);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clr_flip_type)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(188,m_clr_flip_firm);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(189,m_clr_flip_accnt);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_clr_agent);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(191,m_clr_tax_id);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_ex_dest));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,187,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clr_flip_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,188,static_cast<string>(m_clr_flip_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,189,static_cast<string>(m_clr_flip_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_clr_agent));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,191,static_cast<string>(m_clr_tax_id));
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
                    case 193: {m_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 187: {m_clr_flip_type = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 188: {m_clr_flip_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 189: {m_clr_flip_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 190: {m_clr_agent = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 191: {m_clr_tax_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AccountRouteConfig_ExchControl {
        public:
        //using statements for all types used in this class
        using ex_dest = spiderrock::protobuf::api::ex_dest;
        using disable = spiderrock::protobuf::api::disable;

        private:
        ex_dest m_ex_dest{};
        disable m_disable{};

        public:
        ex_dest get_ex_dest() const {
            return m_ex_dest;
        }
        disable get_disable() const {
            return m_disable;
        }
        void set_ex_dest(const ex_dest& value)  {
            m_ex_dest = value;
        }
        void set_disable(const disable& value)  {
            m_disable = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_ExchControl::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_ExchControl::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ex_dest & value) { set_ex_dest(value); }
        void set(const disable & value) { set_disable(value); }


        AccountRouteConfig_ExchControl() {}

        virtual ~AccountRouteConfig_ExchControl() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(194,m_ex_dest);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_disable)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,194,static_cast<string>(m_ex_dest));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_disable)));
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
                    case 194: {m_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 163: {m_disable = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class AccountRouteConfig_ExecBrkrAccnts {
        public:
        //using statements for all types used in this class
        using exch_group = spiderrock::protobuf::api::exch_group;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrSecType;
        using exec_brkr_accnt = spiderrock::protobuf::api::exec_brkr_accnt;
        using exec_brkr_cl_firm = spiderrock::protobuf::api::exec_brkr_cl_firm;
        using exec_brkr_user_name = spiderrock::protobuf::api::exec_brkr_user_name;

        private:
        exch_group m_exch_group{};
        sec_type m_sec_type{};
        exec_brkr_accnt m_exec_brkr_accnt{};
        exec_brkr_cl_firm m_exec_brkr_cl_firm{};
        exec_brkr_user_name m_exec_brkr_user_name{};

        public:
        exch_group get_exch_group() const {
            return m_exch_group;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        exec_brkr_accnt get_exec_brkr_accnt() const {
            return m_exec_brkr_accnt;
        }
        exec_brkr_cl_firm get_exec_brkr_cl_firm() const {
            return m_exec_brkr_cl_firm;
        }
        exec_brkr_user_name get_exec_brkr_user_name() const {
            return m_exec_brkr_user_name;
        }
        void set_exch_group(const exch_group& value)  {
            m_exch_group = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_exec_brkr_accnt(const exec_brkr_accnt& value)  {
            m_exec_brkr_accnt = value;
        }
        void set_exec_brkr_cl_firm(const exec_brkr_cl_firm& value)  {
            m_exec_brkr_cl_firm = value;
        }
        void set_exec_brkr_user_name(const exec_brkr_user_name& value)  {
            m_exec_brkr_user_name = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_ExecBrkrAccnts::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_ExecBrkrAccnts::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exch_group & value) { set_exch_group(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const exec_brkr_accnt & value) { set_exec_brkr_accnt(value); }
        void set(const exec_brkr_cl_firm & value) { set_exec_brkr_cl_firm(value); }
        void set(const exec_brkr_user_name & value) { set_exec_brkr_user_name(value); }


        AccountRouteConfig_ExecBrkrAccnts() {}

        virtual ~AccountRouteConfig_ExecBrkrAccnts() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(180,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchGroup>(m_exch_group)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSecType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(182,m_exec_brkr_accnt);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(183,m_exec_brkr_cl_firm);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(184,m_exec_brkr_user_name);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,180,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchGroup>(m_exch_group)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,181,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSecType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,182,static_cast<string>(m_exec_brkr_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,183,static_cast<string>(m_exec_brkr_cl_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,184,static_cast<string>(m_exec_brkr_user_name));
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
                    case 180: {m_exch_group = static_cast<spiderrock::protobuf::api::ExchGroup>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 181: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrSecType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 182: {m_exec_brkr_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 183: {m_exec_brkr_cl_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 184: {m_exec_brkr_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AccountRouteConfig_RoutingTable {
        public:
        //using statements for all types used in this class
        using routing_code = spiderrock::protobuf::api::routing_code;
        using cob_tied = spiderrock::protobuf::api::cob_tied;

        private:
        routing_code m_routing_code{};
        cob_tied m_cob_tied{};

        public:
        routing_code get_routing_code() const {
            return m_routing_code;
        }
        cob_tied get_cob_tied() const {
            return m_cob_tied;
        }
        void set_routing_code(const routing_code& value)  {
            m_routing_code = value;
        }
        void set_cob_tied(const cob_tied& value)  {
            m_cob_tied = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_RoutingTable::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig_RoutingTable::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const routing_code & value) { set_routing_code(value); }
        void set(const cob_tied & value) { set_cob_tied(value); }


        AccountRouteConfig_RoutingTable() {}

        virtual ~AccountRouteConfig_RoutingTable() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_routing_code);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(192,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cob_tied)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_routing_code));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,192,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cob_tied)));
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
                    case 151: {m_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 192: {m_cob_tied = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class AccountRouteConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AccountRouteConfig_PKey;
        using enabled = spiderrock::protobuf::api::enabled;
        using relationship = spiderrock::protobuf::api::relationship;
        using cat_dest_firm_imid = spiderrock::protobuf::api::cat_dest_firm_imid;
        using cat_dest_dept_type = spiderrock::protobuf::api::cat_dest_dept_type;
        using routing_rule = spiderrock::protobuf::api::routing_rule;
        using backup_route_code = spiderrock::protobuf::api::backup_route_code;
        using extern_params = spiderrock::protobuf::api::extern_params;
        using comment = spiderrock::protobuf::api::comment;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using clearing_flip = spiderrock::protobuf::api::AccountRouteConfig_ClearingFlip;
        using exch_control = spiderrock::protobuf::api::AccountRouteConfig_ExchControl;
        using exec_brkr_accnts = spiderrock::protobuf::api::AccountRouteConfig_ExecBrkrAccnts;
        using routing_table = spiderrock::protobuf::api::AccountRouteConfig_RoutingTable;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        enabled m_enabled{};
        relationship m_relationship{};
        cat_dest_firm_imid m_cat_dest_firm_imid{};
        cat_dest_dept_type m_cat_dest_dept_type{};
        routing_rule m_routing_rule{};
        backup_route_code m_backup_route_code{};
        extern_params m_extern_params{};
        comment m_comment{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<clearing_flip> m_clearing_flip{};
        std::vector<exch_control> m_exch_control{};
        std::vector<exec_brkr_accnts> m_exec_brkr_accnts{};
        std::vector<routing_table> m_routing_table{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        enabled get_enabled() const {
            return m_enabled;
        }		
        relationship get_relationship() const {
            return m_relationship;
        }		
        cat_dest_firm_imid get_cat_dest_firm_imid() const {
            return m_cat_dest_firm_imid;
        }		
        cat_dest_dept_type get_cat_dest_dept_type() const {
            return m_cat_dest_dept_type;
        }		
        routing_rule get_routing_rule() const {
            return m_routing_rule;
        }		
        backup_route_code get_backup_route_code() const {
            return m_backup_route_code;
        }		
        extern_params get_extern_params() const {
            return m_extern_params;
        }		
        comment get_comment() const {
            return m_comment;
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
        const std::vector<clearing_flip>& get_clearing_flip_list() const {
            return m_clearing_flip;
        }
        const clearing_flip& get_clearing_flip(const int i) const {
            return m_clearing_flip.at(i);
        }
        const std::vector<exch_control>& get_exch_control_list() const {
            return m_exch_control;
        }
        const exch_control& get_exch_control(const int i) const {
            return m_exch_control.at(i);
        }
        const std::vector<exec_brkr_accnts>& get_exec_brkr_accnts_list() const {
            return m_exec_brkr_accnts;
        }
        const exec_brkr_accnts& get_exec_brkr_accnts(const int i) const {
            return m_exec_brkr_accnts.at(i);
        }
        const std::vector<routing_table>& get_routing_table_list() const {
            return m_routing_table;
        }
        const routing_table& get_routing_table(const int i) const {
            return m_routing_table.at(i);
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
        void set_enabled(const enabled& value)  {
            m_enabled = value;
        }
        void set_relationship(const relationship& value)  {
            m_relationship = value;
        }
        void set_cat_dest_firm_imid(const cat_dest_firm_imid& value)  {
            m_cat_dest_firm_imid = value;
        }
        void set_cat_dest_dept_type(const cat_dest_dept_type& value)  {
            m_cat_dest_dept_type = value;
        }
        void set_routing_rule(const routing_rule& value)  {
            m_routing_rule = value;
        }
        void set_backup_route_code(const backup_route_code& value)  {
            m_backup_route_code = value;
        }
        void set_extern_params(const extern_params& value)  {
            m_extern_params = value;
        }
        void set_comment(const comment& value)  {
            m_comment = value;
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
        void set_clearing_flip_list(const std::vector<clearing_flip>& list)  {
            m_clearing_flip = list;
        }
        void add_clearing_flip(const clearing_flip& item) {
            m_clearing_flip.emplace_back(item);
        }
        void set_exch_control_list(const std::vector<exch_control>& list)  {
            m_exch_control = list;
        }
        void add_exch_control(const exch_control& item) {
            m_exch_control.emplace_back(item);
        }
        void set_exec_brkr_accnts_list(const std::vector<exec_brkr_accnts>& list)  {
            m_exec_brkr_accnts = list;
        }
        void add_exec_brkr_accnts(const exec_brkr_accnts& item) {
            m_exec_brkr_accnts.emplace_back(item);
        }
        void set_routing_table_list(const std::vector<routing_table>& list)  {
            m_routing_table = list;
        }
        void add_routing_table(const routing_table& item) {
            m_routing_table.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AccountRouteConfig::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const enabled & value) {
            set_enabled(value);
        }
        void set(const relationship & value) {
            set_relationship(value);
        }
        void set(const cat_dest_firm_imid & value) {
            set_cat_dest_firm_imid(value);
        }
        void set(const cat_dest_dept_type & value) {
            set_cat_dest_dept_type(value);
        }
        void set(const routing_rule & value) {
            set_routing_rule(value);
        }
        void set(const backup_route_code & value) {
            set_backup_route_code(value);
        }
        void set(const extern_params & value) {
            set_extern_params(value);
        }
        void set(const comment & value) {
            set_comment(value);
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
        void set(const clearing_flip & value) {
            add_clearing_flip(value);
        }
        void set(const exch_control & value) {
            add_exch_control(value);
        }
        void set(const exec_brkr_accnts & value) {
            add_exec_brkr_accnts(value);
        }
        void set(const routing_table & value) {
            add_routing_table(value);
        }

        void set(const AccountRouteConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_enabled);
            set(value.m_relationship);
            set(value.m_cat_dest_firm_imid);
            set(value.m_cat_dest_dept_type);
            set(value.m_routing_rule);
            set(value.m_backup_route_code);
            set(value.m_extern_params);
            set(value.m_comment);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_clearing_flip_list(value.m_clearing_flip);set_exch_control_list(value.m_exch_control);set_exec_brkr_accnts_list(value.m_exec_brkr_accnts);set_routing_table_list(value.m_routing_table);
        }

        AccountRouteConfig() {
            m__meta.set_message_type("AccountRouteConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1810, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1810, length);
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
             *this = AccountRouteConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeCatDestFirmImid() const {
            return !(m_cat_dest_firm_imid.empty());
        }
        bool IncludeBackupRouteCode() const {
            return !(m_backup_route_code.empty());
        }
        bool IncludeExternParams() const {
            return !(m_extern_params.empty());
        }
        bool IncludeComment() const {
            return !(m_comment.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeClearingFlip() const {
            return (!m_clearing_flip.empty());
        }
        bool IncludeExchControl() const {
            return (!m_exch_control.empty());
        }
        bool IncludeExecBrkrAccnts() const {
            return (!m_exec_brkr_accnts.empty());
        }
        bool IncludeRoutingTable() const {
            return (!m_routing_table.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RelationshipType>(m_relationship)));
            if ( IncludeCatDestFirmImid()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_cat_dest_firm_imid);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatDeptType>(m_cat_dest_dept_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoutingRule>(m_routing_rule)));
            if ( IncludeBackupRouteCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_backup_route_code);
            }
            if ( IncludeExternParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_extern_params);
            }
            if ( IncludeComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_comment);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(178, m_timestamp);
            }
            if ( IncludeClearingFlip()) {
                for (auto& item : m_clearing_flip) {
					totalSize += SRProtobufCPP::TagCodec::Size(130, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeExchControl()) {
                for (auto& item : m_exch_control) {
					totalSize += SRProtobufCPP::TagCodec::Size(157, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeExecBrkrAccnts()) {
                for (auto& item : m_exec_brkr_accnts) {
					totalSize += SRProtobufCPP::TagCodec::Size(179, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeRoutingTable()) {
                for (auto& item : m_routing_table) {
					totalSize += SRProtobufCPP::TagCodec::Size(148, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RelationshipType>(m_relationship)));
            if ( IncludeCatDestFirmImid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_cat_dest_firm_imid));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatDeptType>(m_cat_dest_dept_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoutingRule>(m_routing_rule)));
            if ( IncludeBackupRouteCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_backup_route_code));
            }
            if ( IncludeExternParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_extern_params));
            }
            if ( IncludeComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_comment));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 178, m_timestamp);
            }
            if ( IncludeClearingFlip()) {
                for (auto& item : m_clearing_flip) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 130, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeExchControl()) {
                for (auto& item : m_exch_control) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 157, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeExecBrkrAccnts()) {
                for (auto& item : m_exec_brkr_accnts) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 179, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeRoutingTable()) {
                for (auto& item : m_routing_table) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 148, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_enabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_relationship = static_cast<spiderrock::protobuf::api::RelationshipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cat_dest_firm_imid = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cat_dest_dept_type = static_cast<spiderrock::protobuf::api::CatDeptType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_routing_rule = static_cast<spiderrock::protobuf::api::RoutingRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_backup_route_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            clearing_flip item_clearing_flip;
                            item_clearing_flip.Decode(pos, pos+length);  
                            m_clearing_flip.emplace_back(item_clearing_flip);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exch_control item_exch_control;
                            item_exch_control.Decode(pos, pos+length);  
                            m_exch_control.emplace_back(item_exch_control);
                        }
                        break;
                    }
                    case 179: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exec_brkr_accnts item_exec_brkr_accnts;
                            item_exec_brkr_accnts.Decode(pos, pos+length);  
                            m_exec_brkr_accnts.emplace_back(item_exec_brkr_accnts);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            routing_table item_routing_table;
                            item_routing_table.Decode(pos, pos+length);  
                            m_routing_table.emplace_back(item_routing_table);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::_meta>() const { return AccountRouteConfig::_meta{ m__meta}; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::pkey>() const { return AccountRouteConfig::pkey{ m_pkey}; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_enabled)); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::relationship>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RelationshipType>( m_relationship)); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::cat_dest_firm_imid>() const { return m_cat_dest_firm_imid; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::cat_dest_dept_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CatDeptType>( m_cat_dest_dept_type)); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::routing_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoutingRule>( m_routing_rule)); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::backup_route_code>() const { return m_backup_route_code; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::extern_params>() const { return m_extern_params; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::comment>() const { return m_comment; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::clearing_flip>(int i) const { return AccountRouteConfig::clearing_flip{ get_clearing_flip(i)}; }
    template<> inline int AccountRouteConfig::count<AccountRouteConfig::clearing_flip>() const { return static_cast<int>( m_clearing_flip.size()); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::exch_control>(int i) const { return AccountRouteConfig::exch_control{ get_exch_control(i)}; }
    template<> inline int AccountRouteConfig::count<AccountRouteConfig::exch_control>() const { return static_cast<int>( m_exch_control.size()); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::exec_brkr_accnts>(int i) const { return AccountRouteConfig::exec_brkr_accnts{ get_exec_brkr_accnts(i)}; }
    template<> inline int AccountRouteConfig::count<AccountRouteConfig::exec_brkr_accnts>() const { return static_cast<int>( m_exec_brkr_accnts.size()); }
    template<> inline const auto AccountRouteConfig::get<AccountRouteConfig::routing_table>(int i) const { return AccountRouteConfig::routing_table{ get_routing_table(i)}; }
    template<> inline int AccountRouteConfig::count<AccountRouteConfig::routing_table>() const { return static_cast<int>( m_routing_table.size()); }
    template<> inline const auto AccountRouteConfig_PKey::get<AccountRouteConfig_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto AccountRouteConfig_PKey::get<AccountRouteConfig_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto AccountRouteConfig_PKey::get<AccountRouteConfig_PKey::exec_brkr_code>() const { return m_exec_brkr_code; }
    
    template<> inline const auto AccountRouteConfig_ClearingFlip::get<AccountRouteConfig_ClearingFlip::ex_dest>() const { return m_ex_dest; }
    template<> inline const auto AccountRouteConfig_ClearingFlip::get<AccountRouteConfig_ClearingFlip::clr_flip_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clr_flip_type));}
    template<> inline const auto AccountRouteConfig_ClearingFlip::get<AccountRouteConfig_ClearingFlip::clr_flip_firm>() const { return m_clr_flip_firm; }
    template<> inline const auto AccountRouteConfig_ClearingFlip::get<AccountRouteConfig_ClearingFlip::clr_flip_accnt>() const { return m_clr_flip_accnt; }
    template<> inline const auto AccountRouteConfig_ClearingFlip::get<AccountRouteConfig_ClearingFlip::clr_agent>() const { return m_clr_agent; }
    template<> inline const auto AccountRouteConfig_ClearingFlip::get<AccountRouteConfig_ClearingFlip::clr_tax_id>() const { return m_clr_tax_id; }
    
    template<> inline const auto AccountRouteConfig_ExchControl::get<AccountRouteConfig_ExchControl::ex_dest>() const { return m_ex_dest; }
    template<> inline const auto AccountRouteConfig_ExchControl::get<AccountRouteConfig_ExchControl::disable>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_disable));}
    
    template<> inline const auto AccountRouteConfig_ExecBrkrAccnts::get<AccountRouteConfig_ExecBrkrAccnts::exch_group>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExchGroup>(m_exch_group));}
    template<> inline const auto AccountRouteConfig_ExecBrkrAccnts::get<AccountRouteConfig_ExecBrkrAccnts::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSecType>(m_sec_type));}
    template<> inline const auto AccountRouteConfig_ExecBrkrAccnts::get<AccountRouteConfig_ExecBrkrAccnts::exec_brkr_accnt>() const { return m_exec_brkr_accnt; }
    template<> inline const auto AccountRouteConfig_ExecBrkrAccnts::get<AccountRouteConfig_ExecBrkrAccnts::exec_brkr_cl_firm>() const { return m_exec_brkr_cl_firm; }
    template<> inline const auto AccountRouteConfig_ExecBrkrAccnts::get<AccountRouteConfig_ExecBrkrAccnts::exec_brkr_user_name>() const { return m_exec_brkr_user_name; }
    
    template<> inline const auto AccountRouteConfig_RoutingTable::get<AccountRouteConfig_RoutingTable::routing_code>() const { return m_routing_code; }
    template<> inline const auto AccountRouteConfig_RoutingTable::get<AccountRouteConfig_RoutingTable::cob_tied>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cob_tied));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AccountRouteConfig_PKey& m) {
        o << "\"accnt\":\"" << m.get<AccountRouteConfig_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<AccountRouteConfig_PKey::client_firm>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<AccountRouteConfig_PKey::exec_brkr_code>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AccountRouteConfig_ClearingFlip& m) {
        o << "\"ex_dest\":\"" << m.get<AccountRouteConfig_ClearingFlip::ex_dest>() << "\"";
        o << ",\"clr_flip_type\":" << (int64_t)m.get<AccountRouteConfig_ClearingFlip::clr_flip_type>();
        o << ",\"clr_flip_firm\":\"" << m.get<AccountRouteConfig_ClearingFlip::clr_flip_firm>() << "\"";
        o << ",\"clr_flip_accnt\":\"" << m.get<AccountRouteConfig_ClearingFlip::clr_flip_accnt>() << "\"";
        o << ",\"clr_agent\":\"" << m.get<AccountRouteConfig_ClearingFlip::clr_agent>() << "\"";
        o << ",\"clr_tax_id\":\"" << m.get<AccountRouteConfig_ClearingFlip::clr_tax_id>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AccountRouteConfig_ExchControl& m) {
        o << "\"ex_dest\":\"" << m.get<AccountRouteConfig_ExchControl::ex_dest>() << "\"";
        o << ",\"disable\":" << (int64_t)m.get<AccountRouteConfig_ExchControl::disable>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AccountRouteConfig_ExecBrkrAccnts& m) {
        o << "\"exch_group\":" << (int64_t)m.get<AccountRouteConfig_ExecBrkrAccnts::exch_group>();
        o << ",\"sec_type\":" << (int64_t)m.get<AccountRouteConfig_ExecBrkrAccnts::sec_type>();
        o << ",\"exec_brkr_accnt\":\"" << m.get<AccountRouteConfig_ExecBrkrAccnts::exec_brkr_accnt>() << "\"";
        o << ",\"exec_brkr_cl_firm\":\"" << m.get<AccountRouteConfig_ExecBrkrAccnts::exec_brkr_cl_firm>() << "\"";
        o << ",\"exec_brkr_user_name\":\"" << m.get<AccountRouteConfig_ExecBrkrAccnts::exec_brkr_user_name>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AccountRouteConfig_RoutingTable& m) {
        o << "\"routing_code\":\"" << m.get<AccountRouteConfig_RoutingTable::routing_code>() << "\"";
        o << ",\"cob_tied\":" << (int64_t)m.get<AccountRouteConfig_RoutingTable::cob_tied>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AccountRouteConfig& m) {
        o << "\"_meta\":{" << m.get<AccountRouteConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AccountRouteConfig::pkey>() << "}";
        o << ",\"enabled\":" << (int64_t)m.get<AccountRouteConfig::enabled>();
        o << ",\"relationship\":" << (int64_t)m.get<AccountRouteConfig::relationship>();
        o << ",\"cat_dest_firm_imid\":\"" << m.get<AccountRouteConfig::cat_dest_firm_imid>() << "\"";
        o << ",\"cat_dest_dept_type\":" << (int64_t)m.get<AccountRouteConfig::cat_dest_dept_type>();
        o << ",\"routing_rule\":" << (int64_t)m.get<AccountRouteConfig::routing_rule>();
        o << ",\"backup_route_code\":\"" << m.get<AccountRouteConfig::backup_route_code>() << "\"";
        o << ",\"extern_params\":\"" << m.get<AccountRouteConfig::extern_params>() << "\"";
        o << ",\"comment\":\"" << m.get<AccountRouteConfig::comment>() << "\"";
        o << ",\"modified_by\":\"" << m.get<AccountRouteConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<AccountRouteConfig::modified_in>();
        {
            std::time_t tt = m.get<AccountRouteConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"clearing_flip\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AccountRouteConfig::clearing_flip>(); ++i) {
                o << delim << m.get<AccountRouteConfig::clearing_flip>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"exch_control\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AccountRouteConfig::exch_control>(); ++i) {
                o << delim << m.get<AccountRouteConfig::exch_control>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"exec_brkr_accnts\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AccountRouteConfig::exec_brkr_accnts>(); ++i) {
                o << delim << m.get<AccountRouteConfig::exec_brkr_accnts>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"routing_table\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AccountRouteConfig::routing_table>(); ++i) {
                o << delim << m.get<AccountRouteConfig::routing_table>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}