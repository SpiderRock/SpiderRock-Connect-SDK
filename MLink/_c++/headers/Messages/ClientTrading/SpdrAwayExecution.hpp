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

    #ifndef _fill_number__GUARD__
    #define _fill_number__GUARD__
    DECL_STRONG_TYPE(fill_number, int64);
    #endif//_fill_number__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _exec_status__GUARD__
    #define _exec_status__GUARD__
    DECL_STRONG_TYPE(exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_exec_status__GUARD__

    #ifndef _client_order_id__GUARD__
    #define _client_order_id__GUARD__
    DECL_STRONG_TYPE(client_order_id, string);
    #endif//_client_order_id__GUARD__

    #ifndef _src_routing_code__GUARD__
    #define _src_routing_code__GUARD__
    DECL_STRONG_TYPE(src_routing_code, string);
    #endif//_src_routing_code__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _exec_role__GUARD__
    #define _exec_role__GUARD__
    DECL_STRONG_TYPE(exec_role, spiderrock::protobuf::api::ExecRole);
    #endif//_exec_role__GUARD__

    #ifndef _ext_exec_broker__GUARD__
    #define _ext_exec_broker__GUARD__
    DECL_STRONG_TYPE(ext_exec_broker, string);
    #endif//_ext_exec_broker__GUARD__

    #ifndef _fill_side__GUARD__
    #define _fill_side__GUARD__
    DECL_STRONG_TYPE(fill_side, spiderrock::protobuf::api::BuySell);
    #endif//_fill_side__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_price_type__GUARD__
    #define _fill_price_type__GUARD__
    DECL_STRONG_TYPE(fill_price_type, spiderrock::protobuf::api::PriceType);
    #endif//_fill_price_type__GUARD__

    #ifndef _fill_quantity__GUARD__
    #define _fill_quantity__GUARD__
    DECL_STRONG_TYPE(fill_quantity, int32);
    #endif//_fill_quantity__GUARD__

    #ifndef _child_size__GUARD__
    #define _child_size__GUARD__
    DECL_STRONG_TYPE(child_size, int32);
    #endif//_child_size__GUARD__

    #ifndef _fill_exch__GUARD__
    #define _fill_exch__GUARD__
    DECL_STRONG_TYPE(fill_exch, string);
    #endif//_fill_exch__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_ref_uprc__GUARD__
    #define _fill_ref_uprc__GUARD__
    DECL_STRONG_TYPE(fill_ref_uprc, double);
    #endif//_fill_ref_uprc__GUARD__

    #ifndef _orig_exec_id__GUARD__
    #define _orig_exec_id__GUARD__
    DECL_STRONG_TYPE(orig_exec_id, string);
    #endif//_orig_exec_id__GUARD__

    #ifndef _last_exec_id__GUARD__
    #define _last_exec_id__GUARD__
    DECL_STRONG_TYPE(last_exec_id, string);
    #endif//_last_exec_id__GUARD__

    #ifndef _fill_transact_dttm__GUARD__
    #define _fill_transact_dttm__GUARD__
    DECL_STRONG_TYPE(fill_transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_transact_dttm__GUARD__

    #ifndef _fill_report_detail__GUARD__
    #define _fill_report_detail__GUARD__
    DECL_STRONG_TYPE(fill_report_detail, string);
    #endif//_fill_report_detail__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _position_type__PositionType__GUARD__
    #define _position_type__PositionType__GUARD__
    DECL_STRONG_TYPE(position_type__PositionType, spiderrock::protobuf::api::PositionType);
    #endif//_position_type__PositionType__GUARD__

    #ifndef _theo_vol__GUARD__
    #define _theo_vol__GUARD__
    DECL_STRONG_TYPE(theo_vol, float);
    #endif//_theo_vol__GUARD__

    #ifndef _comment__GUARD__
    #define _comment__GUARD__
    DECL_STRONG_TYPE(comment, string);
    #endif//_comment__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

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

    #ifndef _client_fill_id__GUARD__
    #define _client_fill_id__GUARD__
    DECL_STRONG_TYPE(client_fill_id, int64);
    #endif//_client_fill_id__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrAwayExecution_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_fill_id = spiderrock::protobuf::api::client_fill_id;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        client_fill_id m_client_fill_id{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_fill_id get_client_fill_id() const {
            return m_client_fill_id;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_fill_id(const client_fill_id& value)  {
            m_client_fill_id = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAwayExecution_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAwayExecution_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_fill_id & value) { set_client_fill_id(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrAwayExecution_PKey() {}

        virtual ~SpdrAwayExecution_PKey() {
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
        bool IncludeClientFillId() const {
            return !(m_client_fill_id == 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFillId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_client_fill_id);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFillId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_client_fill_id);
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_client_fill_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrAwayExecution {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrAwayExecution_PKey;
        using fill_number = spiderrock::protobuf::api::fill_number;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using exec_status = spiderrock::protobuf::api::exec_status;
        using client_order_id = spiderrock::protobuf::api::client_order_id;
        using src_routing_code = spiderrock::protobuf::api::src_routing_code;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using exec_role = spiderrock::protobuf::api::exec_role;
        using ext_exec_broker = spiderrock::protobuf::api::ext_exec_broker;
        using fill_side = spiderrock::protobuf::api::fill_side;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_price_type = spiderrock::protobuf::api::fill_price_type;
        using fill_quantity = spiderrock::protobuf::api::fill_quantity;
        using child_size = spiderrock::protobuf::api::child_size;
        using fill_exch = spiderrock::protobuf::api::fill_exch;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_ref_uprc = spiderrock::protobuf::api::fill_ref_uprc;
        using orig_exec_id = spiderrock::protobuf::api::orig_exec_id;
        using last_exec_id = spiderrock::protobuf::api::last_exec_id;
        using fill_transact_dttm = spiderrock::protobuf::api::fill_transact_dttm;
        using fill_report_detail = spiderrock::protobuf::api::fill_report_detail;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using position_type = spiderrock::protobuf::api::position_type__PositionType;
        using theo_vol = spiderrock::protobuf::api::theo_vol;
        using comment = spiderrock::protobuf::api::comment;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using strategy = spiderrock::protobuf::api::strategy;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        fill_number m_fill_number{};
        engine_name m_engine_name{};
        spdr_source m_spdr_source{};
        exec_status m_exec_status{};
        client_order_id m_client_order_id{};
        src_routing_code m_src_routing_code{};
        risk_group_id m_risk_group_id{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        exec_role m_exec_role{};
        ext_exec_broker m_ext_exec_broker{};
        fill_side m_fill_side{};
        fill_price m_fill_price{};
        fill_price_type m_fill_price_type{};
        fill_quantity m_fill_quantity{};
        child_size m_child_size{};
        fill_exch m_fill_exch{};
        fill_dttm m_fill_dttm{};
        fill_ref_uprc m_fill_ref_uprc{};
        orig_exec_id m_orig_exec_id{};
        last_exec_id m_last_exec_id{};
        fill_transact_dttm m_fill_transact_dttm{};
        fill_report_detail m_fill_report_detail{};
        ssale_flag m_ssale_flag{};
        position_type m_position_type{};
        theo_vol m_theo_vol{};
        comment m_comment{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        strategy m_strategy{};
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
        fill_number get_fill_number() const {
            return m_fill_number;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }		
        exec_status get_exec_status() const {
            return m_exec_status;
        }		
        client_order_id get_client_order_id() const {
            return m_client_order_id;
        }		
        src_routing_code get_src_routing_code() const {
            return m_src_routing_code;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        exec_role get_exec_role() const {
            return m_exec_role;
        }		
        ext_exec_broker get_ext_exec_broker() const {
            return m_ext_exec_broker;
        }		
        fill_side get_fill_side() const {
            return m_fill_side;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_price_type get_fill_price_type() const {
            return m_fill_price_type;
        }		
        fill_quantity get_fill_quantity() const {
            return m_fill_quantity;
        }		
        child_size get_child_size() const {
            return m_child_size;
        }		
        fill_exch get_fill_exch() const {
            return m_fill_exch;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_ref_uprc get_fill_ref_uprc() const {
            return m_fill_ref_uprc;
        }		
        orig_exec_id get_orig_exec_id() const {
            return m_orig_exec_id;
        }		
        last_exec_id get_last_exec_id() const {
            return m_last_exec_id;
        }		
        fill_transact_dttm get_fill_transact_dttm() const {
            return m_fill_transact_dttm;
        }		
        fill_report_detail get_fill_report_detail() const {
            return m_fill_report_detail;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        position_type get_position_type() const {
            return m_position_type;
        }		
        theo_vol get_theo_vol() const {
            return m_theo_vol;
        }		
        comment get_comment() const {
            return m_comment;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        strategy get_strategy() const {
            return m_strategy;
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
        void set_fill_number(const fill_number& value)  {
            m_fill_number = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_exec_status(const exec_status& value)  {
            m_exec_status = value;
        }
        void set_client_order_id(const client_order_id& value)  {
            m_client_order_id = value;
        }
        void set_src_routing_code(const src_routing_code& value)  {
            m_src_routing_code = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_exec_role(const exec_role& value)  {
            m_exec_role = value;
        }
        void set_ext_exec_broker(const ext_exec_broker& value)  {
            m_ext_exec_broker = value;
        }
        void set_fill_side(const fill_side& value)  {
            m_fill_side = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_price_type(const fill_price_type& value)  {
            m_fill_price_type = value;
        }
        void set_fill_quantity(const fill_quantity& value)  {
            m_fill_quantity = value;
        }
        void set_child_size(const child_size& value)  {
            m_child_size = value;
        }
        void set_fill_exch(const fill_exch& value)  {
            m_fill_exch = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_ref_uprc(const fill_ref_uprc& value)  {
            m_fill_ref_uprc = value;
        }
        void set_orig_exec_id(const orig_exec_id& value)  {
            m_orig_exec_id = value;
        }
        void set_last_exec_id(const last_exec_id& value)  {
            m_last_exec_id = value;
        }
        void set_fill_transact_dttm(const fill_transact_dttm& value)  {
            m_fill_transact_dttm = value;
        }
        void set_fill_report_detail(const fill_report_detail& value)  {
            m_fill_report_detail = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_theo_vol(const theo_vol& value)  {
            m_theo_vol = value;
        }
        void set_comment(const comment& value)  {
            m_comment = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrAwayExecution::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const fill_number & value) {
            set_fill_number(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const spdr_source & value) {
            set_spdr_source(value);
        }
        void set(const exec_status & value) {
            set_exec_status(value);
        }
        void set(const client_order_id & value) {
            set_client_order_id(value);
        }
        void set(const src_routing_code & value) {
            set_src_routing_code(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const exec_role & value) {
            set_exec_role(value);
        }
        void set(const ext_exec_broker & value) {
            set_ext_exec_broker(value);
        }
        void set(const fill_side & value) {
            set_fill_side(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_price_type & value) {
            set_fill_price_type(value);
        }
        void set(const fill_quantity & value) {
            set_fill_quantity(value);
        }
        void set(const child_size & value) {
            set_child_size(value);
        }
        void set(const fill_exch & value) {
            set_fill_exch(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_ref_uprc & value) {
            set_fill_ref_uprc(value);
        }
        void set(const orig_exec_id & value) {
            set_orig_exec_id(value);
        }
        void set(const last_exec_id & value) {
            set_last_exec_id(value);
        }
        void set(const fill_transact_dttm & value) {
            set_fill_transact_dttm(value);
        }
        void set(const fill_report_detail & value) {
            set_fill_report_detail(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const position_type & value) {
            set_position_type(value);
        }
        void set(const theo_vol & value) {
            set_theo_vol(value);
        }
        void set(const comment & value) {
            set_comment(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
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

        void set(const SpdrAwayExecution & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_fill_number);
            set(value.m_engine_name);
            set(value.m_spdr_source);
            set(value.m_exec_status);
            set(value.m_client_order_id);
            set(value.m_src_routing_code);
            set(value.m_risk_group_id);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_exec_role);
            set(value.m_ext_exec_broker);
            set(value.m_fill_side);
            set(value.m_fill_price);
            set(value.m_fill_price_type);
            set(value.m_fill_quantity);
            set(value.m_child_size);
            set(value.m_fill_exch);
            set(value.m_fill_dttm);
            set(value.m_fill_ref_uprc);
            set(value.m_orig_exec_id);
            set(value.m_last_exec_id);
            set(value.m_fill_transact_dttm);
            set(value.m_fill_report_detail);
            set(value.m_ssale_flag);
            set(value.m_position_type);
            set(value.m_theo_vol);
            set(value.m_comment);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_strategy);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        SpdrAwayExecution() {
            m__meta.set_message_type("SpdrAwayExecution");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1450, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1450, length);
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
             *this = SpdrAwayExecution{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeFillNumber() const {
            return !(m_fill_number == 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeClientOrderId() const {
            return !(m_client_order_id.empty());
        }
        bool IncludeSrcRoutingCode() const {
            return !(m_src_routing_code.empty());
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeExtExecBroker() const {
            return !(m_ext_exec_broker.empty());
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillQuantity() const {
            return !(m_fill_quantity == 0);
        }
        bool IncludeChildSize() const {
            return !(m_child_size == 0);
        }
        bool IncludeFillExch() const {
            return !(m_fill_exch.empty());
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillRefUprc() const {
            return !(m_fill_ref_uprc == 0.0);
        }
        bool IncludeOrigExecId() const {
            return !(m_orig_exec_id.empty());
        }
        bool IncludeLastExecId() const {
            return !(m_last_exec_id.empty());
        }
        bool IncludeFillTransactDttm() const {
            return (m_fill_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillReportDetail() const {
            return !(m_fill_report_detail.empty());
        }
        bool IncludeTheoVol() const {
            return !(m_theo_vol == 0.0);
        }
        bool IncludeComment() const {
            return !(m_comment.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
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
            if ( IncludeFillNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(100,m_fill_number);
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(200,m_engine_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            if ( IncludeClientOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_client_order_id);
            }
            if ( IncludeSrcRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_src_routing_code);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_risk_group_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(124, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExtExecBroker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_ext_exec_broker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_fill_side)));
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_fill_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_fill_price_type)));
            if ( IncludeFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(145,m_fill_quantity);
            }
            if ( IncludeChildSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_child_size);
            }
            if ( IncludeFillExch()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_fill_exch);
            }
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(154, m_fill_dttm);
            }
            if ( IncludeFillRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_fill_ref_uprc);
            }
            if ( IncludeOrigExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_orig_exec_id);
            }
            if ( IncludeLastExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_last_exec_id);
            }
            if ( IncludeFillTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(166, m_fill_transact_dttm);
            }
            if ( IncludeFillReportDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_fill_report_detail);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            if ( IncludeTheoVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_theo_vol);
            }
            if ( IncludeComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_comment);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(184,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_user_data2);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_strategy);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
            if ( IncludeFillNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,100,m_fill_number);
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,200,static_cast<string>(m_engine_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_exec_status)));
            if ( IncludeClientOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_client_order_id));
            }
            if ( IncludeSrcRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_src_routing_code));
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_risk_group_id);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 124, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>(m_exec_role)));
            if ( IncludeExtExecBroker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_ext_exec_broker));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_fill_side)));
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_fill_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>(m_fill_price_type)));
            if ( IncludeFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,145,m_fill_quantity);
            }
            if ( IncludeChildSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_child_size);
            }
            if ( IncludeFillExch()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_fill_exch));
            }
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 154, m_fill_dttm);
            }
            if ( IncludeFillRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_fill_ref_uprc);
            }
            if ( IncludeOrigExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_orig_exec_id));
            }
            if ( IncludeLastExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_last_exec_id));
            }
            if ( IncludeFillTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 166, m_fill_transact_dttm);
            }
            if ( IncludeFillReportDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_fill_report_detail));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type)));
            if ( IncludeTheoVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_theo_vol);
            }
            if ( IncludeComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_comment));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,184,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_user_data2));
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_strategy));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
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
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_fill_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 200: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_client_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_src_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exec_role = static_cast<spiderrock::protobuf::api::ExecRole>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ext_exec_broker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_price_type = static_cast<spiderrock::protobuf::api::PriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_child_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_orig_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_report_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_theo_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
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

    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::_meta>() const { return SpdrAwayExecution::_meta{ m__meta}; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::pkey>() const { return SpdrAwayExecution::pkey{ m_pkey}; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_number>() const { return m_fill_number; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>( m_spdr_source)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_exec_status)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::client_order_id>() const { return m_client_order_id; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::src_routing_code>() const { return m_src_routing_code; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::sec_key>() const { return SpdrAwayExecution::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::exec_role>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecRole>( m_exec_role)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::ext_exec_broker>() const { return m_ext_exec_broker; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_fill_side)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_price>() const { return m_fill_price; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceType>( m_fill_price_type)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_quantity>() const { return m_fill_quantity; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::child_size>() const { return m_child_size; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_exch>() const { return m_fill_exch; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_ref_uprc>() const { return m_fill_ref_uprc; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::orig_exec_id>() const { return m_orig_exec_id; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::last_exec_id>() const { return m_last_exec_id; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_transact_dttm>() const { return m_fill_transact_dttm; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::fill_report_detail>() const { return m_fill_report_detail; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::theo_vol>() const { return m_theo_vol; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::comment>() const { return m_comment; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::strategy>() const { return m_strategy; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::modified_by>() const { return m_modified_by; }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto SpdrAwayExecution::get<SpdrAwayExecution::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrAwayExecution_PKey::get<SpdrAwayExecution_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrAwayExecution_PKey::get<SpdrAwayExecution_PKey::client_fill_id>() const { return m_client_fill_id; }
    template<> inline const auto SpdrAwayExecution_PKey::get<SpdrAwayExecution_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrAwayExecution_PKey& m) {
        o << "\"accnt\":\"" << m.get<SpdrAwayExecution_PKey::accnt>() << "\"";
        o << ",\"client_fill_id\":" << m.get<SpdrAwayExecution_PKey::client_fill_id>();
        o << ",\"client_firm\":\"" << m.get<SpdrAwayExecution_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrAwayExecution& m) {
        o << "\"_meta\":{" << m.get<SpdrAwayExecution::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrAwayExecution::pkey>() << "}";
        o << ",\"fill_number\":" << m.get<SpdrAwayExecution::fill_number>();
        o << ",\"engine_name\":\"" << m.get<SpdrAwayExecution::engine_name>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrAwayExecution::spdr_source>();
        o << ",\"exec_status\":" << (int64_t)m.get<SpdrAwayExecution::exec_status>();
        o << ",\"client_order_id\":\"" << m.get<SpdrAwayExecution::client_order_id>() << "\"";
        o << ",\"src_routing_code\":\"" << m.get<SpdrAwayExecution::src_routing_code>() << "\"";
        o << ",\"risk_group_id\":" << m.get<SpdrAwayExecution::risk_group_id>();
        o << ",\"sec_key\":{" << m.get<SpdrAwayExecution::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrAwayExecution::sec_type>();
        o << ",\"exec_role\":" << (int64_t)m.get<SpdrAwayExecution::exec_role>();
        o << ",\"ext_exec_broker\":\"" << m.get<SpdrAwayExecution::ext_exec_broker>() << "\"";
        o << ",\"fill_side\":" << (int64_t)m.get<SpdrAwayExecution::fill_side>();
        o << ",\"fill_price\":" << m.get<SpdrAwayExecution::fill_price>();
        o << ",\"fill_price_type\":" << (int64_t)m.get<SpdrAwayExecution::fill_price_type>();
        o << ",\"fill_quantity\":" << m.get<SpdrAwayExecution::fill_quantity>();
        o << ",\"child_size\":" << m.get<SpdrAwayExecution::child_size>();
        o << ",\"fill_exch\":\"" << m.get<SpdrAwayExecution::fill_exch>() << "\"";
        {
            std::time_t tt = m.get<SpdrAwayExecution::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_ref_uprc\":" << m.get<SpdrAwayExecution::fill_ref_uprc>();
        o << ",\"orig_exec_id\":\"" << m.get<SpdrAwayExecution::orig_exec_id>() << "\"";
        o << ",\"last_exec_id\":\"" << m.get<SpdrAwayExecution::last_exec_id>() << "\"";
        {
            std::time_t tt = m.get<SpdrAwayExecution::fill_transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_report_detail\":\"" << m.get<SpdrAwayExecution::fill_report_detail>() << "\"";
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrAwayExecution::ssale_flag>();
        o << ",\"position_type\":" << (int64_t)m.get<SpdrAwayExecution::position_type>();
        o << ",\"theo_vol\":" << m.get<SpdrAwayExecution::theo_vol>();
        o << ",\"comment\":\"" << m.get<SpdrAwayExecution::comment>() << "\"";
        o << ",\"user_data1\":\"" << m.get<SpdrAwayExecution::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrAwayExecution::user_data2>() << "\"";
        o << ",\"strategy\":\"" << m.get<SpdrAwayExecution::strategy>() << "\"";
        o << ",\"modified_by\":\"" << m.get<SpdrAwayExecution::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<SpdrAwayExecution::modified_in>();
        {
            std::time_t tt = m.get<SpdrAwayExecution::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}