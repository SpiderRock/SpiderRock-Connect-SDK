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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _child_data__GUARD__
    #define _child_data__GUARD__
    DECL_STRONG_TYPE(child_data, string);
    #endif//_child_data__GUARD__

    #ifndef _ticket_locate_firm__GUARD__
    #define _ticket_locate_firm__GUARD__
    DECL_STRONG_TYPE(ticket_locate_firm, string);
    #endif//_ticket_locate_firm__GUARD__

    #ifndef _ticket_locate_pool__GUARD__
    #define _ticket_locate_pool__GUARD__
    DECL_STRONG_TYPE(ticket_locate_pool, string);
    #endif//_ticket_locate_pool__GUARD__

    #ifndef _stk_exec_brkr_code__GUARD__
    #define _stk_exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(stk_exec_brkr_code, string);
    #endif//_stk_exec_brkr_code__GUARD__

    #ifndef _fut_exec_brkr_code__GUARD__
    #define _fut_exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(fut_exec_brkr_code, string);
    #endif//_fut_exec_brkr_code__GUARD__

    #ifndef _eqt_opt_exec_brkr_code__GUARD__
    #define _eqt_opt_exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(eqt_opt_exec_brkr_code, string);
    #endif//_eqt_opt_exec_brkr_code__GUARD__

    #ifndef _fut_opt_exec_brkr_code__GUARD__
    #define _fut_opt_exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(fut_opt_exec_brkr_code, string);
    #endif//_fut_opt_exec_brkr_code__GUARD__

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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _src_accnt__GUARD__
    #define _src_accnt__GUARD__
    DECL_STRONG_TYPE(src_accnt, string);
    #endif//_src_accnt__GUARD__

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

    #ifndef _badge__GUARD__
    #define _badge__GUARD__
    DECL_STRONG_TYPE(badge, string);
    #endif//_badge__GUARD__

    
    class AltSymbolMap_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using src_accnt = spiderrock::protobuf::api::src_accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ticker m_ticker{};
        src_accnt m_src_accnt{};
        client_firm m_client_firm{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        src_accnt get_src_accnt() const {
            return m_src_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_src_accnt(const src_accnt& value)  {
            m_src_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const src_accnt & value) { set_src_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        AltSymbolMap_PKey() {}

        virtual ~AltSymbolMap_PKey() {
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeSrcAccnt() const {
            return !(m_src_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeSrcAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_src_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeSrcAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_src_accnt));
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 13: {m_src_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class AltSymbolMap_AltClearing {
        public:
        //using statements for all types used in this class
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using ex_dest = spiderrock::protobuf::api::ex_dest;
        using clr_flip_type = spiderrock::protobuf::api::clr_flip_type;
        using clr_flip_firm = spiderrock::protobuf::api::clr_flip_firm;
        using clr_flip_accnt = spiderrock::protobuf::api::clr_flip_accnt;
        using clr_agent = spiderrock::protobuf::api::clr_agent;
        using clr_tax_id = spiderrock::protobuf::api::clr_tax_id;
        using exec_brkr_accnt = spiderrock::protobuf::api::exec_brkr_accnt;
        using exec_brkr_cl_firm = spiderrock::protobuf::api::exec_brkr_cl_firm;
        using exec_brkr_user_name = spiderrock::protobuf::api::exec_brkr_user_name;
        using badge = spiderrock::protobuf::api::badge;

        private:
        exec_brkr_code m_exec_brkr_code{};
        ex_dest m_ex_dest{};
        clr_flip_type m_clr_flip_type{};
        clr_flip_firm m_clr_flip_firm{};
        clr_flip_accnt m_clr_flip_accnt{};
        clr_agent m_clr_agent{};
        clr_tax_id m_clr_tax_id{};
        exec_brkr_accnt m_exec_brkr_accnt{};
        exec_brkr_cl_firm m_exec_brkr_cl_firm{};
        exec_brkr_user_name m_exec_brkr_user_name{};
        badge m_badge{};

        public:
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }
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
        exec_brkr_accnt get_exec_brkr_accnt() const {
            return m_exec_brkr_accnt;
        }
        exec_brkr_cl_firm get_exec_brkr_cl_firm() const {
            return m_exec_brkr_cl_firm;
        }
        exec_brkr_user_name get_exec_brkr_user_name() const {
            return m_exec_brkr_user_name;
        }
        badge get_badge() const {
            return m_badge;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
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
        void set_exec_brkr_accnt(const exec_brkr_accnt& value)  {
            m_exec_brkr_accnt = value;
        }
        void set_exec_brkr_cl_firm(const exec_brkr_cl_firm& value)  {
            m_exec_brkr_cl_firm = value;
        }
        void set_exec_brkr_user_name(const exec_brkr_user_name& value)  {
            m_exec_brkr_user_name = value;
        }
        void set_badge(const badge& value)  {
            m_badge = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap_AltClearing::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap_AltClearing::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exec_brkr_code & value) { set_exec_brkr_code(value); }
        void set(const ex_dest & value) { set_ex_dest(value); }
        void set(const clr_flip_type & value) { set_clr_flip_type(value); }
        void set(const clr_flip_firm & value) { set_clr_flip_firm(value); }
        void set(const clr_flip_accnt & value) { set_clr_flip_accnt(value); }
        void set(const clr_agent & value) { set_clr_agent(value); }
        void set(const clr_tax_id & value) { set_clr_tax_id(value); }
        void set(const exec_brkr_accnt & value) { set_exec_brkr_accnt(value); }
        void set(const exec_brkr_cl_firm & value) { set_exec_brkr_cl_firm(value); }
        void set(const exec_brkr_user_name & value) { set_exec_brkr_user_name(value); }
        void set(const badge & value) { set_badge(value); }


        AltSymbolMap_AltClearing() {}

        virtual ~AltSymbolMap_AltClearing() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(146,m_exec_brkr_code);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(147,m_ex_dest);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clr_flip_type)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(149,m_clr_flip_firm);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(150,m_clr_flip_accnt);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_clr_agent);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(152,m_clr_tax_id);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(153,m_exec_brkr_accnt);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_exec_brkr_cl_firm);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(155,m_exec_brkr_user_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(156,m_badge);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,146,static_cast<string>(m_exec_brkr_code));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,147,static_cast<string>(m_ex_dest));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clr_flip_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,149,static_cast<string>(m_clr_flip_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,150,static_cast<string>(m_clr_flip_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_clr_agent));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,152,static_cast<string>(m_clr_tax_id));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,153,static_cast<string>(m_exec_brkr_accnt));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_exec_brkr_cl_firm));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,155,static_cast<string>(m_exec_brkr_user_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,156,static_cast<string>(m_badge));
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
                    case 146: {m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 147: {m_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 148: {m_clr_flip_type = static_cast<spiderrock::protobuf::api::FlipType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 149: {m_clr_flip_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 150: {m_clr_flip_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 151: {m_clr_agent = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 152: {m_clr_tax_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 153: {m_exec_brkr_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 154: {m_exec_brkr_cl_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 155: {m_exec_brkr_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 156: {m_badge = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class AltSymbolMap {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AltSymbolMap_PKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using child_data = spiderrock::protobuf::api::child_data;
        using ticket_locate_firm = spiderrock::protobuf::api::ticket_locate_firm;
        using ticket_locate_pool = spiderrock::protobuf::api::ticket_locate_pool;
        using stk_exec_brkr_code = spiderrock::protobuf::api::stk_exec_brkr_code;
        using fut_exec_brkr_code = spiderrock::protobuf::api::fut_exec_brkr_code;
        using eqt_opt_exec_brkr_code = spiderrock::protobuf::api::eqt_opt_exec_brkr_code;
        using fut_opt_exec_brkr_code = spiderrock::protobuf::api::fut_opt_exec_brkr_code;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using alt_clearing = spiderrock::protobuf::api::AltSymbolMap_AltClearing;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        accnt m_accnt{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        strategy m_strategy{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        child_data m_child_data{};
        ticket_locate_firm m_ticket_locate_firm{};
        ticket_locate_pool m_ticket_locate_pool{};
        stk_exec_brkr_code m_stk_exec_brkr_code{};
        fut_exec_brkr_code m_fut_exec_brkr_code{};
        eqt_opt_exec_brkr_code m_eqt_opt_exec_brkr_code{};
        fut_opt_exec_brkr_code m_fut_opt_exec_brkr_code{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<alt_clearing> m_alt_clearing{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        accnt get_accnt() const {
            return m_accnt;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        child_data get_child_data() const {
            return m_child_data;
        }		
        ticket_locate_firm get_ticket_locate_firm() const {
            return m_ticket_locate_firm;
        }		
        ticket_locate_pool get_ticket_locate_pool() const {
            return m_ticket_locate_pool;
        }		
        stk_exec_brkr_code get_stk_exec_brkr_code() const {
            return m_stk_exec_brkr_code;
        }		
        fut_exec_brkr_code get_fut_exec_brkr_code() const {
            return m_fut_exec_brkr_code;
        }		
        eqt_opt_exec_brkr_code get_eqt_opt_exec_brkr_code() const {
            return m_eqt_opt_exec_brkr_code;
        }		
        fut_opt_exec_brkr_code get_fut_opt_exec_brkr_code() const {
            return m_fut_opt_exec_brkr_code;
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
        const std::vector<alt_clearing>& get_alt_clearing_list() const {
            return m_alt_clearing;
        }
        const alt_clearing& get_alt_clearing(const int i) const {
            return m_alt_clearing.at(i);
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
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_child_data(const child_data& value)  {
            m_child_data = value;
        }
        void set_ticket_locate_firm(const ticket_locate_firm& value)  {
            m_ticket_locate_firm = value;
        }
        void set_ticket_locate_pool(const ticket_locate_pool& value)  {
            m_ticket_locate_pool = value;
        }
        void set_stk_exec_brkr_code(const stk_exec_brkr_code& value)  {
            m_stk_exec_brkr_code = value;
        }
        void set_fut_exec_brkr_code(const fut_exec_brkr_code& value)  {
            m_fut_exec_brkr_code = value;
        }
        void set_eqt_opt_exec_brkr_code(const eqt_opt_exec_brkr_code& value)  {
            m_eqt_opt_exec_brkr_code = value;
        }
        void set_fut_opt_exec_brkr_code(const fut_opt_exec_brkr_code& value)  {
            m_fut_opt_exec_brkr_code = value;
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
        void set_alt_clearing_list(const std::vector<alt_clearing>& list)  {
            m_alt_clearing = list;
        }
        void add_alt_clearing(const alt_clearing& item) {
            m_alt_clearing.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AltSymbolMap::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const accnt & value) {
            set_accnt(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const child_data & value) {
            set_child_data(value);
        }
        void set(const ticket_locate_firm & value) {
            set_ticket_locate_firm(value);
        }
        void set(const ticket_locate_pool & value) {
            set_ticket_locate_pool(value);
        }
        void set(const stk_exec_brkr_code & value) {
            set_stk_exec_brkr_code(value);
        }
        void set(const fut_exec_brkr_code & value) {
            set_fut_exec_brkr_code(value);
        }
        void set(const eqt_opt_exec_brkr_code & value) {
            set_eqt_opt_exec_brkr_code(value);
        }
        void set(const fut_opt_exec_brkr_code & value) {
            set_fut_opt_exec_brkr_code(value);
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
        void set(const alt_clearing & value) {
            add_alt_clearing(value);
        }

        void set(const AltSymbolMap & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_accnt);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_strategy);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_child_data);
            set(value.m_ticket_locate_firm);
            set(value.m_ticket_locate_pool);
            set(value.m_stk_exec_brkr_code);
            set(value.m_fut_exec_brkr_code);
            set(value.m_eqt_opt_exec_brkr_code);
            set(value.m_fut_opt_exec_brkr_code);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_alt_clearing_list(value.m_alt_clearing);
        }

        AltSymbolMap() {
            m__meta.set_message_type("AltSymbolMap");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1815, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1815, length);
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
             *this = AltSymbolMap{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeChildData() const {
            return !(m_child_data.empty());
        }
        bool IncludeTicketLocateFirm() const {
            return !(m_ticket_locate_firm.empty());
        }
        bool IncludeTicketLocatePool() const {
            return !(m_ticket_locate_pool.empty());
        }
        bool IncludeStkExecBrkrCode() const {
            return !(m_stk_exec_brkr_code.empty());
        }
        bool IncludeFutExecBrkrCode() const {
            return !(m_fut_exec_brkr_code.empty());
        }
        bool IncludeEqtOptExecBrkrCode() const {
            return !(m_eqt_opt_exec_brkr_code.empty());
        }
        bool IncludeFutOptExecBrkrCode() const {
            return !(m_fut_opt_exec_brkr_code.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeAltClearing() const {
            return (!m_alt_clearing.empty());
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
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_accnt);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_alt_user_name);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_strategy);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_user_data2);
            }
            if ( IncludeChildData()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_child_data);
            }
            if ( IncludeTicketLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_ticket_locate_firm);
            }
            if ( IncludeTicketLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(158,m_ticket_locate_pool);
            }
            if ( IncludeStkExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(141,m_stk_exec_brkr_code);
            }
            if ( IncludeFutExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_fut_exec_brkr_code);
            }
            if ( IncludeEqtOptExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(143,m_eqt_opt_exec_brkr_code);
            }
            if ( IncludeFutOptExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(144,m_fut_opt_exec_brkr_code);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(139, m_timestamp);
            }
            if ( IncludeAltClearing()) {
                for (auto& item : m_alt_clearing) {
					totalSize += SRProtobufCPP::TagCodec::Size(145, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_accnt));
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_alt_user_name));
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_strategy));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_user_data2));
            }
            if ( IncludeChildData()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_child_data));
            }
            if ( IncludeTicketLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_ticket_locate_firm));
            }
            if ( IncludeTicketLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,158,static_cast<string>(m_ticket_locate_pool));
            }
            if ( IncludeStkExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,141,static_cast<string>(m_stk_exec_brkr_code));
            }
            if ( IncludeFutExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_fut_exec_brkr_code));
            }
            if ( IncludeEqtOptExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,143,static_cast<string>(m_eqt_opt_exec_brkr_code));
            }
            if ( IncludeFutOptExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,144,static_cast<string>(m_fut_opt_exec_brkr_code));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 139, m_timestamp);
            }
            if ( IncludeAltClearing()) {
                for (auto& item : m_alt_clearing) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 145, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_child_data = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ticket_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 158: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ticket_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_stk_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fut_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 143: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_eqt_opt_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fut_opt_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            alt_clearing item_alt_clearing;
                            item_alt_clearing.Decode(pos, pos+length);  
                            m_alt_clearing.emplace_back(item_alt_clearing);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto AltSymbolMap::get<AltSymbolMap::_meta>() const { return AltSymbolMap::_meta{ m__meta}; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::pkey>() const { return AltSymbolMap::pkey{ m_pkey}; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::accnt>() const { return m_accnt; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::strategy>() const { return m_strategy; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::user_data1>() const { return m_user_data1; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::user_data2>() const { return m_user_data2; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::child_data>() const { return m_child_data; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::ticket_locate_firm>() const { return m_ticket_locate_firm; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::ticket_locate_pool>() const { return m_ticket_locate_pool; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::stk_exec_brkr_code>() const { return m_stk_exec_brkr_code; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::fut_exec_brkr_code>() const { return m_fut_exec_brkr_code; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::eqt_opt_exec_brkr_code>() const { return m_eqt_opt_exec_brkr_code; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::fut_opt_exec_brkr_code>() const { return m_fut_opt_exec_brkr_code; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::modified_by>() const { return m_modified_by; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::timestamp>() const { return m_timestamp; }
    template<> inline const auto AltSymbolMap::get<AltSymbolMap::alt_clearing>(int i) const { return AltSymbolMap::alt_clearing{ get_alt_clearing(i)}; }
    template<> inline int AltSymbolMap::count<AltSymbolMap::alt_clearing>() const { return static_cast<int>( m_alt_clearing.size()); }
    template<> inline const auto AltSymbolMap_PKey::get<AltSymbolMap_PKey::ticker>() const { return AltSymbolMap_PKey::ticker{m_ticker}; }
    template<> inline const auto AltSymbolMap_PKey::get<AltSymbolMap_PKey::src_accnt>() const { return m_src_accnt; }
    template<> inline const auto AltSymbolMap_PKey::get<AltSymbolMap_PKey::client_firm>() const { return m_client_firm; }
    
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::ex_dest>() const { return m_ex_dest; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::clr_flip_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::FlipType>(m_clr_flip_type));}
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::clr_flip_firm>() const { return m_clr_flip_firm; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::clr_flip_accnt>() const { return m_clr_flip_accnt; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::clr_agent>() const { return m_clr_agent; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::clr_tax_id>() const { return m_clr_tax_id; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::exec_brkr_accnt>() const { return m_exec_brkr_accnt; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::exec_brkr_cl_firm>() const { return m_exec_brkr_cl_firm; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::exec_brkr_user_name>() const { return m_exec_brkr_user_name; }
    template<> inline const auto AltSymbolMap_AltClearing::get<AltSymbolMap_AltClearing::badge>() const { return m_badge; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AltSymbolMap_PKey& m) {
        o << "\"ticker\":{" << m.get<AltSymbolMap_PKey::ticker>() << "}";
        o << ",\"src_accnt\":\"" << m.get<AltSymbolMap_PKey::src_accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<AltSymbolMap_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AltSymbolMap_AltClearing& m) {
        o << "\"exec_brkr_code\":\"" << m.get<AltSymbolMap_AltClearing::exec_brkr_code>() << "\"";
        o << ",\"ex_dest\":\"" << m.get<AltSymbolMap_AltClearing::ex_dest>() << "\"";
        o << ",\"clr_flip_type\":" << (int64_t)m.get<AltSymbolMap_AltClearing::clr_flip_type>();
        o << ",\"clr_flip_firm\":\"" << m.get<AltSymbolMap_AltClearing::clr_flip_firm>() << "\"";
        o << ",\"clr_flip_accnt\":\"" << m.get<AltSymbolMap_AltClearing::clr_flip_accnt>() << "\"";
        o << ",\"clr_agent\":\"" << m.get<AltSymbolMap_AltClearing::clr_agent>() << "\"";
        o << ",\"clr_tax_id\":\"" << m.get<AltSymbolMap_AltClearing::clr_tax_id>() << "\"";
        o << ",\"exec_brkr_accnt\":\"" << m.get<AltSymbolMap_AltClearing::exec_brkr_accnt>() << "\"";
        o << ",\"exec_brkr_cl_firm\":\"" << m.get<AltSymbolMap_AltClearing::exec_brkr_cl_firm>() << "\"";
        o << ",\"exec_brkr_user_name\":\"" << m.get<AltSymbolMap_AltClearing::exec_brkr_user_name>() << "\"";
        o << ",\"badge\":\"" << m.get<AltSymbolMap_AltClearing::badge>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AltSymbolMap& m) {
        o << "\"_meta\":{" << m.get<AltSymbolMap::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AltSymbolMap::pkey>() << "}";
        o << ",\"accnt\":\"" << m.get<AltSymbolMap::accnt>() << "\"";
        o << ",\"alt_accnt\":\"" << m.get<AltSymbolMap::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<AltSymbolMap::alt_user_name>() << "\"";
        o << ",\"strategy\":\"" << m.get<AltSymbolMap::strategy>() << "\"";
        o << ",\"user_data1\":\"" << m.get<AltSymbolMap::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<AltSymbolMap::user_data2>() << "\"";
        o << ",\"child_data\":\"" << m.get<AltSymbolMap::child_data>() << "\"";
        o << ",\"ticket_locate_firm\":\"" << m.get<AltSymbolMap::ticket_locate_firm>() << "\"";
        o << ",\"ticket_locate_pool\":\"" << m.get<AltSymbolMap::ticket_locate_pool>() << "\"";
        o << ",\"stk_exec_brkr_code\":\"" << m.get<AltSymbolMap::stk_exec_brkr_code>() << "\"";
        o << ",\"fut_exec_brkr_code\":\"" << m.get<AltSymbolMap::fut_exec_brkr_code>() << "\"";
        o << ",\"eqt_opt_exec_brkr_code\":\"" << m.get<AltSymbolMap::eqt_opt_exec_brkr_code>() << "\"";
        o << ",\"fut_opt_exec_brkr_code\":\"" << m.get<AltSymbolMap::fut_opt_exec_brkr_code>() << "\"";
        o << ",\"modified_by\":\"" << m.get<AltSymbolMap::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<AltSymbolMap::modified_in>();
        {
            std::time_t tt = m.get<AltSymbolMap::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"alt_clearing\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<AltSymbolMap::alt_clearing>(); ++i) {
                o << delim << m.get<AltSymbolMap::alt_clearing>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}