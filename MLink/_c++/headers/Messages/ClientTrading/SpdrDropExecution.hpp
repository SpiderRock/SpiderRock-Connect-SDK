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

    #ifndef _sys_environment__GUARD__
    #define _sys_environment__GUARD__
    DECL_STRONG_TYPE(sys_environment, spiderrock::protobuf::api::SysEnvironment);
    #endif//_sys_environment__GUARD__

    #ifndef _run_status__GUARD__
    #define _run_status__GUARD__
    DECL_STRONG_TYPE(run_status, spiderrock::protobuf::api::RunStatus);
    #endif//_run_status__GUARD__

    #ifndef _routing_code__GUARD__
    #define _routing_code__GUARD__
    DECL_STRONG_TYPE(routing_code, string);
    #endif//_routing_code__GUARD__

    #ifndef _routing_seq_num__GUARD__
    #define _routing_seq_num__GUARD__
    DECL_STRONG_TYPE(routing_seq_num, int32);
    #endif//_routing_seq_num__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _security_desc__GUARD__
    #define _security_desc__GUARD__
    DECL_STRONG_TYPE(security_desc, string);
    #endif//_security_desc__GUARD__

    #ifndef _security_type__GUARD__
    #define _security_type__GUARD__
    DECL_STRONG_TYPE(security_type, string);
    #endif//_security_type__GUARD__

    #ifndef _symbol__GUARD__
    #define _symbol__GUARD__
    DECL_STRONG_TYPE(symbol, string);
    #endif//_symbol__GUARD__

    #ifndef _maturity_date__GUARD__
    #define _maturity_date__GUARD__
    DECL_STRONG_TYPE(maturity_date, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_maturity_date__GUARD__

    #ifndef _strike__double__GUARD__
    #define _strike__double__GUARD__
    DECL_STRONG_TYPE(strike__double, double);
    #endif//_strike__double__GUARD__

    #ifndef _call_put__GUARD__
    #define _call_put__GUARD__
    DECL_STRONG_TYPE(call_put, spiderrock::protobuf::api::CallPut);
    #endif//_call_put__GUARD__

    #ifndef _account__GUARD__
    #define _account__GUARD__
    DECL_STRONG_TYPE(account, string);
    #endif//_account__GUARD__

    #ifndef _giveup_firm__GUARD__
    #define _giveup_firm__GUARD__
    DECL_STRONG_TYPE(giveup_firm, string);
    #endif//_giveup_firm__GUARD__

    #ifndef _giveup_accnt__GUARD__
    #define _giveup_accnt__GUARD__
    DECL_STRONG_TYPE(giveup_accnt, string);
    #endif//_giveup_accnt__GUARD__

    #ifndef _clearing_firm__GUARD__
    #define _clearing_firm__GUARD__
    DECL_STRONG_TYPE(clearing_firm, string);
    #endif//_clearing_firm__GUARD__

    #ifndef _clearing_accnt__GUARD__
    #define _clearing_accnt__GUARD__
    DECL_STRONG_TYPE(clearing_accnt, string);
    #endif//_clearing_accnt__GUARD__

    #ifndef _drop_data1__GUARD__
    #define _drop_data1__GUARD__
    DECL_STRONG_TYPE(drop_data1, string);
    #endif//_drop_data1__GUARD__

    #ifndef _drop_data2__GUARD__
    #define _drop_data2__GUARD__
    DECL_STRONG_TYPE(drop_data2, string);
    #endif//_drop_data2__GUARD__

    #ifndef _cl_ord_id__string__GUARD__
    #define _cl_ord_id__string__GUARD__
    DECL_STRONG_TYPE(cl_ord_id__string, string);
    #endif//_cl_ord_id__string__GUARD__

    #ifndef _fill_version__GUARD__
    #define _fill_version__GUARD__
    DECL_STRONG_TYPE(fill_version, int32);
    #endif//_fill_version__GUARD__

    #ifndef _fill_exec_status__GUARD__
    #define _fill_exec_status__GUARD__
    DECL_STRONG_TYPE(fill_exec_status, spiderrock::protobuf::api::ExecStatus);
    #endif//_fill_exec_status__GUARD__

    #ifndef _fill_dttm__GUARD__
    #define _fill_dttm__GUARD__
    DECL_STRONG_TYPE(fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_dttm__GUARD__

    #ifndef _fill_quantity__GUARD__
    #define _fill_quantity__GUARD__
    DECL_STRONG_TYPE(fill_quantity, int32);
    #endif//_fill_quantity__GUARD__

    #ifndef _fill_side__GUARD__
    #define _fill_side__GUARD__
    DECL_STRONG_TYPE(fill_side, spiderrock::protobuf::api::BuySell);
    #endif//_fill_side__GUARD__

    #ifndef _fill_ssale_flag__GUARD__
    #define _fill_ssale_flag__GUARD__
    DECL_STRONG_TYPE(fill_ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_fill_ssale_flag__GUARD__

    #ifndef _fill_position_type__GUARD__
    #define _fill_position_type__GUARD__
    DECL_STRONG_TYPE(fill_position_type, spiderrock::protobuf::api::PositionType);
    #endif//_fill_position_type__GUARD__

    #ifndef _fill_price__GUARD__
    #define _fill_price__GUARD__
    DECL_STRONG_TYPE(fill_price, double);
    #endif//_fill_price__GUARD__

    #ifndef _fill_transact_dttm__GUARD__
    #define _fill_transact_dttm__GUARD__
    DECL_STRONG_TYPE(fill_transact_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_fill_transact_dttm__GUARD__

    #ifndef _fill_market__GUARD__
    #define _fill_market__GUARD__
    DECL_STRONG_TYPE(fill_market, string);
    #endif//_fill_market__GUARD__

    #ifndef _fill_srliq_tag__GUARD__
    #define _fill_srliq_tag__GUARD__
    DECL_STRONG_TYPE(fill_srliq_tag, string);
    #endif//_fill_srliq_tag__GUARD__

    #ifndef _fill_exch_liq_tag__GUARD__
    #define _fill_exch_liq_tag__GUARD__
    DECL_STRONG_TYPE(fill_exch_liq_tag, string);
    #endif//_fill_exch_liq_tag__GUARD__

    #ifndef _fill_exch_fee__GUARD__
    #define _fill_exch_fee__GUARD__
    DECL_STRONG_TYPE(fill_exch_fee, float);
    #endif//_fill_exch_fee__GUARD__

    #ifndef _fill_exec_id__GUARD__
    #define _fill_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_exec_id, string);
    #endif//_fill_exec_id__GUARD__

    #ifndef _fill_ref_exec_id__GUARD__
    #define _fill_ref_exec_id__GUARD__
    DECL_STRONG_TYPE(fill_ref_exec_id, string);
    #endif//_fill_ref_exec_id__GUARD__

    #ifndef _fill_leg_ref_id__GUARD__
    #define _fill_leg_ref_id__GUARD__
    DECL_STRONG_TYPE(fill_leg_ref_id, int64);
    #endif//_fill_leg_ref_id__GUARD__

    #ifndef _fill_firm_type__GUARD__
    #define _fill_firm_type__GUARD__
    DECL_STRONG_TYPE(fill_firm_type, string);
    #endif//_fill_firm_type__GUARD__

    #ifndef _fill_exec_broker__GUARD__
    #define _fill_exec_broker__GUARD__
    DECL_STRONG_TYPE(fill_exec_broker, string);
    #endif//_fill_exec_broker__GUARD__

    #ifndef _fill_order_capacity__GUARD__
    #define _fill_order_capacity__GUARD__
    DECL_STRONG_TYPE(fill_order_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_fill_order_capacity__GUARD__

    #ifndef _fill_contra_detail__GUARD__
    #define _fill_contra_detail__GUARD__
    DECL_STRONG_TYPE(fill_contra_detail, string);
    #endif//_fill_contra_detail__GUARD__

    #ifndef _fill_contra_capacity__GUARD__
    #define _fill_contra_capacity__GUARD__
    DECL_STRONG_TYPE(fill_contra_capacity, spiderrock::protobuf::api::OrderCapacity);
    #endif//_fill_contra_capacity__GUARD__

    #ifndef _fill_street_text__GUARD__
    #define _fill_street_text__GUARD__
    DECL_STRONG_TYPE(fill_street_text, string);
    #endif//_fill_street_text__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _data_center__v7__GUARD__
    #define _data_center__v7__GUARD__
    DECL_STRONG_TYPE(data_center__v7, spiderrock::protobuf::api::SRDataCenter_V7);
    #endif//_data_center__v7__GUARD__

    #ifndef _drop_number__GUARD__
    #define _drop_number__GUARD__
    DECL_STRONG_TYPE(drop_number, int64);
    #endif//_drop_number__GUARD__

    
    class SpdrDropExecution_PKey {
        public:
        //using statements for all types used in this class
        using drop_number = spiderrock::protobuf::api::drop_number;

        private:
        drop_number m_drop_number{};

        public:
        drop_number get_drop_number() const {
            return m_drop_number;
        }
        void set_drop_number(const drop_number& value)  {
            m_drop_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrDropExecution_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrDropExecution_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const drop_number & value) { set_drop_number(value); }


        SpdrDropExecution_PKey() {}

        virtual ~SpdrDropExecution_PKey() {
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
        bool IncludeDropNumber() const {
            return !(m_drop_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeDropNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_drop_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeDropNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_drop_number);
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
                    case 10: {m_drop_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrDropExecution {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrDropExecution_PKey;
        using sys_environment = spiderrock::protobuf::api::sys_environment;
        using run_status = spiderrock::protobuf::api::run_status;
        using routing_code = spiderrock::protobuf::api::routing_code;
        using routing_seq_num = spiderrock::protobuf::api::routing_seq_num;
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using security_desc = spiderrock::protobuf::api::security_desc;
        using security_type = spiderrock::protobuf::api::security_type;
        using symbol = spiderrock::protobuf::api::symbol;
        using maturity_date = spiderrock::protobuf::api::maturity_date;
        using strike = spiderrock::protobuf::api::strike__double;
        using call_put = spiderrock::protobuf::api::call_put;
        using account = spiderrock::protobuf::api::account;
        using giveup_firm = spiderrock::protobuf::api::giveup_firm;
        using giveup_accnt = spiderrock::protobuf::api::giveup_accnt;
        using clearing_firm = spiderrock::protobuf::api::clearing_firm;
        using clearing_accnt = spiderrock::protobuf::api::clearing_accnt;
        using drop_data1 = spiderrock::protobuf::api::drop_data1;
        using drop_data2 = spiderrock::protobuf::api::drop_data2;
        using cl_ord_id = spiderrock::protobuf::api::cl_ord_id__string;
        using fill_version = spiderrock::protobuf::api::fill_version;
        using fill_exec_status = spiderrock::protobuf::api::fill_exec_status;
        using fill_dttm = spiderrock::protobuf::api::fill_dttm;
        using fill_quantity = spiderrock::protobuf::api::fill_quantity;
        using fill_side = spiderrock::protobuf::api::fill_side;
        using fill_ssale_flag = spiderrock::protobuf::api::fill_ssale_flag;
        using fill_position_type = spiderrock::protobuf::api::fill_position_type;
        using fill_price = spiderrock::protobuf::api::fill_price;
        using fill_transact_dttm = spiderrock::protobuf::api::fill_transact_dttm;
        using fill_market = spiderrock::protobuf::api::fill_market;
        using fill_srliq_tag = spiderrock::protobuf::api::fill_srliq_tag;
        using fill_exch_liq_tag = spiderrock::protobuf::api::fill_exch_liq_tag;
        using fill_exch_fee = spiderrock::protobuf::api::fill_exch_fee;
        using fill_exec_id = spiderrock::protobuf::api::fill_exec_id;
        using fill_ref_exec_id = spiderrock::protobuf::api::fill_ref_exec_id;
        using fill_leg_ref_id = spiderrock::protobuf::api::fill_leg_ref_id;
        using fill_firm_type = spiderrock::protobuf::api::fill_firm_type;
        using fill_exec_broker = spiderrock::protobuf::api::fill_exec_broker;
        using fill_order_capacity = spiderrock::protobuf::api::fill_order_capacity;
        using fill_contra_detail = spiderrock::protobuf::api::fill_contra_detail;
        using fill_contra_capacity = spiderrock::protobuf::api::fill_contra_capacity;
        using fill_street_text = spiderrock::protobuf::api::fill_street_text;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using data_center__v7 = spiderrock::protobuf::api::data_center__v7;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        sys_environment m_sys_environment{};
        run_status m_run_status{};
        routing_code m_routing_code{};
        routing_seq_num m_routing_seq_num{};
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        security_desc m_security_desc{};
        security_type m_security_type{};
        symbol m_symbol{};
        maturity_date m_maturity_date{};
        strike m_strike{};
        call_put m_call_put{};
        account m_account{};
        giveup_firm m_giveup_firm{};
        giveup_accnt m_giveup_accnt{};
        clearing_firm m_clearing_firm{};
        clearing_accnt m_clearing_accnt{};
        drop_data1 m_drop_data1{};
        drop_data2 m_drop_data2{};
        cl_ord_id m_cl_ord_id{};
        fill_version m_fill_version{};
        fill_exec_status m_fill_exec_status{};
        fill_dttm m_fill_dttm{};
        fill_quantity m_fill_quantity{};
        fill_side m_fill_side{};
        fill_ssale_flag m_fill_ssale_flag{};
        fill_position_type m_fill_position_type{};
        fill_price m_fill_price{};
        fill_transact_dttm m_fill_transact_dttm{};
        fill_market m_fill_market{};
        fill_srliq_tag m_fill_srliq_tag{};
        fill_exch_liq_tag m_fill_exch_liq_tag{};
        fill_exch_fee m_fill_exch_fee{};
        fill_exec_id m_fill_exec_id{};
        fill_ref_exec_id m_fill_ref_exec_id{};
        fill_leg_ref_id m_fill_leg_ref_id{};
        fill_firm_type m_fill_firm_type{};
        fill_exec_broker m_fill_exec_broker{};
        fill_order_capacity m_fill_order_capacity{};
        fill_contra_detail m_fill_contra_detail{};
        fill_contra_capacity m_fill_contra_capacity{};
        fill_street_text m_fill_street_text{};
        net_timestamp m_net_timestamp{};
        timestamp m_timestamp{};
        data_center__v7 m_data_center__v7{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        sys_environment get_sys_environment() const {
            return m_sys_environment;
        }		
        run_status get_run_status() const {
            return m_run_status;
        }		
        routing_code get_routing_code() const {
            return m_routing_code;
        }		
        routing_seq_num get_routing_seq_num() const {
            return m_routing_seq_num;
        }		
        sec_key get_sec_key() const {
            return m_sec_key;
        }		
        sec_type get_sec_type() const {
            return m_sec_type;
        }		
        security_desc get_security_desc() const {
            return m_security_desc;
        }		
        security_type get_security_type() const {
            return m_security_type;
        }		
        symbol get_symbol() const {
            return m_symbol;
        }		
        maturity_date get_maturity_date() const {
            return m_maturity_date;
        }		
        strike get_strike() const {
            return m_strike;
        }		
        call_put get_call_put() const {
            return m_call_put;
        }		
        account get_account() const {
            return m_account;
        }		
        giveup_firm get_giveup_firm() const {
            return m_giveup_firm;
        }		
        giveup_accnt get_giveup_accnt() const {
            return m_giveup_accnt;
        }		
        clearing_firm get_clearing_firm() const {
            return m_clearing_firm;
        }		
        clearing_accnt get_clearing_accnt() const {
            return m_clearing_accnt;
        }		
        drop_data1 get_drop_data1() const {
            return m_drop_data1;
        }		
        drop_data2 get_drop_data2() const {
            return m_drop_data2;
        }		
        cl_ord_id get_cl_ord_id() const {
            return m_cl_ord_id;
        }		
        fill_version get_fill_version() const {
            return m_fill_version;
        }		
        fill_exec_status get_fill_exec_status() const {
            return m_fill_exec_status;
        }		
        fill_dttm get_fill_dttm() const {
            return m_fill_dttm;
        }		
        fill_quantity get_fill_quantity() const {
            return m_fill_quantity;
        }		
        fill_side get_fill_side() const {
            return m_fill_side;
        }		
        fill_ssale_flag get_fill_ssale_flag() const {
            return m_fill_ssale_flag;
        }		
        fill_position_type get_fill_position_type() const {
            return m_fill_position_type;
        }		
        fill_price get_fill_price() const {
            return m_fill_price;
        }		
        fill_transact_dttm get_fill_transact_dttm() const {
            return m_fill_transact_dttm;
        }		
        fill_market get_fill_market() const {
            return m_fill_market;
        }		
        fill_srliq_tag get_fill_srliq_tag() const {
            return m_fill_srliq_tag;
        }		
        fill_exch_liq_tag get_fill_exch_liq_tag() const {
            return m_fill_exch_liq_tag;
        }		
        fill_exch_fee get_fill_exch_fee() const {
            return m_fill_exch_fee;
        }		
        fill_exec_id get_fill_exec_id() const {
            return m_fill_exec_id;
        }		
        fill_ref_exec_id get_fill_ref_exec_id() const {
            return m_fill_ref_exec_id;
        }		
        fill_leg_ref_id get_fill_leg_ref_id() const {
            return m_fill_leg_ref_id;
        }		
        fill_firm_type get_fill_firm_type() const {
            return m_fill_firm_type;
        }		
        fill_exec_broker get_fill_exec_broker() const {
            return m_fill_exec_broker;
        }		
        fill_order_capacity get_fill_order_capacity() const {
            return m_fill_order_capacity;
        }		
        fill_contra_detail get_fill_contra_detail() const {
            return m_fill_contra_detail;
        }		
        fill_contra_capacity get_fill_contra_capacity() const {
            return m_fill_contra_capacity;
        }		
        fill_street_text get_fill_street_text() const {
            return m_fill_street_text;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }		
        data_center__v7 get_data_center__v7() const {
            return m_data_center__v7;
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
        void set_sys_environment(const sys_environment& value)  {
            m_sys_environment = value;
        }
        void set_run_status(const run_status& value)  {
            m_run_status = value;
        }
        void set_routing_code(const routing_code& value)  {
            m_routing_code = value;
        }
        void set_routing_seq_num(const routing_seq_num& value)  {
            m_routing_seq_num = value;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_security_desc(const security_desc& value)  {
            m_security_desc = value;
        }
        void set_security_type(const security_type& value)  {
            m_security_type = value;
        }
        void set_symbol(const symbol& value)  {
            m_symbol = value;
        }
        void set_maturity_date(const maturity_date& value)  {
            m_maturity_date = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
        }
        void set_call_put(const call_put& value)  {
            m_call_put = value;
        }
        void set_account(const account& value)  {
            m_account = value;
        }
        void set_giveup_firm(const giveup_firm& value)  {
            m_giveup_firm = value;
        }
        void set_giveup_accnt(const giveup_accnt& value)  {
            m_giveup_accnt = value;
        }
        void set_clearing_firm(const clearing_firm& value)  {
            m_clearing_firm = value;
        }
        void set_clearing_accnt(const clearing_accnt& value)  {
            m_clearing_accnt = value;
        }
        void set_drop_data1(const drop_data1& value)  {
            m_drop_data1 = value;
        }
        void set_drop_data2(const drop_data2& value)  {
            m_drop_data2 = value;
        }
        void set_cl_ord_id(const cl_ord_id& value)  {
            m_cl_ord_id = value;
        }
        void set_fill_version(const fill_version& value)  {
            m_fill_version = value;
        }
        void set_fill_exec_status(const fill_exec_status& value)  {
            m_fill_exec_status = value;
        }
        void set_fill_dttm(const fill_dttm& value)  {
            m_fill_dttm = value;
        }
        void set_fill_quantity(const fill_quantity& value)  {
            m_fill_quantity = value;
        }
        void set_fill_side(const fill_side& value)  {
            m_fill_side = value;
        }
        void set_fill_ssale_flag(const fill_ssale_flag& value)  {
            m_fill_ssale_flag = value;
        }
        void set_fill_position_type(const fill_position_type& value)  {
            m_fill_position_type = value;
        }
        void set_fill_price(const fill_price& value)  {
            m_fill_price = value;
        }
        void set_fill_transact_dttm(const fill_transact_dttm& value)  {
            m_fill_transact_dttm = value;
        }
        void set_fill_market(const fill_market& value)  {
            m_fill_market = value;
        }
        void set_fill_srliq_tag(const fill_srliq_tag& value)  {
            m_fill_srliq_tag = value;
        }
        void set_fill_exch_liq_tag(const fill_exch_liq_tag& value)  {
            m_fill_exch_liq_tag = value;
        }
        void set_fill_exch_fee(const fill_exch_fee& value)  {
            m_fill_exch_fee = value;
        }
        void set_fill_exec_id(const fill_exec_id& value)  {
            m_fill_exec_id = value;
        }
        void set_fill_ref_exec_id(const fill_ref_exec_id& value)  {
            m_fill_ref_exec_id = value;
        }
        void set_fill_leg_ref_id(const fill_leg_ref_id& value)  {
            m_fill_leg_ref_id = value;
        }
        void set_fill_firm_type(const fill_firm_type& value)  {
            m_fill_firm_type = value;
        }
        void set_fill_exec_broker(const fill_exec_broker& value)  {
            m_fill_exec_broker = value;
        }
        void set_fill_order_capacity(const fill_order_capacity& value)  {
            m_fill_order_capacity = value;
        }
        void set_fill_contra_detail(const fill_contra_detail& value)  {
            m_fill_contra_detail = value;
        }
        void set_fill_contra_capacity(const fill_contra_capacity& value)  {
            m_fill_contra_capacity = value;
        }
        void set_fill_street_text(const fill_street_text& value)  {
            m_fill_street_text = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_data_center__v7(const data_center__v7& value)  {
            m_data_center__v7 = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrDropExecution::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const sys_environment & value) {
            set_sys_environment(value);
        }
        void set(const run_status & value) {
            set_run_status(value);
        }
        void set(const routing_code & value) {
            set_routing_code(value);
        }
        void set(const routing_seq_num & value) {
            set_routing_seq_num(value);
        }
        void set(const sec_key & value) {
            set_sec_key(value);
        }
        void set(const sec_type & value) {
            set_sec_type(value);
        }
        void set(const security_desc & value) {
            set_security_desc(value);
        }
        void set(const security_type & value) {
            set_security_type(value);
        }
        void set(const symbol & value) {
            set_symbol(value);
        }
        void set(const maturity_date & value) {
            set_maturity_date(value);
        }
        void set(const strike & value) {
            set_strike(value);
        }
        void set(const call_put & value) {
            set_call_put(value);
        }
        void set(const account & value) {
            set_account(value);
        }
        void set(const giveup_firm & value) {
            set_giveup_firm(value);
        }
        void set(const giveup_accnt & value) {
            set_giveup_accnt(value);
        }
        void set(const clearing_firm & value) {
            set_clearing_firm(value);
        }
        void set(const clearing_accnt & value) {
            set_clearing_accnt(value);
        }
        void set(const drop_data1 & value) {
            set_drop_data1(value);
        }
        void set(const drop_data2 & value) {
            set_drop_data2(value);
        }
        void set(const cl_ord_id & value) {
            set_cl_ord_id(value);
        }
        void set(const fill_version & value) {
            set_fill_version(value);
        }
        void set(const fill_exec_status & value) {
            set_fill_exec_status(value);
        }
        void set(const fill_dttm & value) {
            set_fill_dttm(value);
        }
        void set(const fill_quantity & value) {
            set_fill_quantity(value);
        }
        void set(const fill_side & value) {
            set_fill_side(value);
        }
        void set(const fill_ssale_flag & value) {
            set_fill_ssale_flag(value);
        }
        void set(const fill_position_type & value) {
            set_fill_position_type(value);
        }
        void set(const fill_price & value) {
            set_fill_price(value);
        }
        void set(const fill_transact_dttm & value) {
            set_fill_transact_dttm(value);
        }
        void set(const fill_market & value) {
            set_fill_market(value);
        }
        void set(const fill_srliq_tag & value) {
            set_fill_srliq_tag(value);
        }
        void set(const fill_exch_liq_tag & value) {
            set_fill_exch_liq_tag(value);
        }
        void set(const fill_exch_fee & value) {
            set_fill_exch_fee(value);
        }
        void set(const fill_exec_id & value) {
            set_fill_exec_id(value);
        }
        void set(const fill_ref_exec_id & value) {
            set_fill_ref_exec_id(value);
        }
        void set(const fill_leg_ref_id & value) {
            set_fill_leg_ref_id(value);
        }
        void set(const fill_firm_type & value) {
            set_fill_firm_type(value);
        }
        void set(const fill_exec_broker & value) {
            set_fill_exec_broker(value);
        }
        void set(const fill_order_capacity & value) {
            set_fill_order_capacity(value);
        }
        void set(const fill_contra_detail & value) {
            set_fill_contra_detail(value);
        }
        void set(const fill_contra_capacity & value) {
            set_fill_contra_capacity(value);
        }
        void set(const fill_street_text & value) {
            set_fill_street_text(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const data_center__v7 & value) {
            set_data_center__v7(value);
        }

        void set(const SpdrDropExecution & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_sys_environment);
            set(value.m_run_status);
            set(value.m_routing_code);
            set(value.m_routing_seq_num);
            set(value.m_sec_key);
            set(value.m_sec_type);
            set(value.m_security_desc);
            set(value.m_security_type);
            set(value.m_symbol);
            set(value.m_maturity_date);
            set(value.m_strike);
            set(value.m_call_put);
            set(value.m_account);
            set(value.m_giveup_firm);
            set(value.m_giveup_accnt);
            set(value.m_clearing_firm);
            set(value.m_clearing_accnt);
            set(value.m_drop_data1);
            set(value.m_drop_data2);
            set(value.m_cl_ord_id);
            set(value.m_fill_version);
            set(value.m_fill_exec_status);
            set(value.m_fill_dttm);
            set(value.m_fill_quantity);
            set(value.m_fill_side);
            set(value.m_fill_ssale_flag);
            set(value.m_fill_position_type);
            set(value.m_fill_price);
            set(value.m_fill_transact_dttm);
            set(value.m_fill_market);
            set(value.m_fill_srliq_tag);
            set(value.m_fill_exch_liq_tag);
            set(value.m_fill_exch_fee);
            set(value.m_fill_exec_id);
            set(value.m_fill_ref_exec_id);
            set(value.m_fill_leg_ref_id);
            set(value.m_fill_firm_type);
            set(value.m_fill_exec_broker);
            set(value.m_fill_order_capacity);
            set(value.m_fill_contra_detail);
            set(value.m_fill_contra_capacity);
            set(value.m_fill_street_text);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
            set(value.m_data_center__v7);
        }

        SpdrDropExecution() {
            m__meta.set_message_type("SpdrDropExecution");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1460, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1460, length);
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
             *this = SpdrDropExecution{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRoutingCode() const {
            return !(m_routing_code.empty());
        }
        bool IncludeRoutingSeqNum() const {
            return !(m_routing_seq_num == 0);
        }
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeSecurityDesc() const {
            return !(m_security_desc.empty());
        }
        bool IncludeSecurityType() const {
            return !(m_security_type.empty());
        }
        bool IncludeSymbol() const {
            return !(m_symbol.empty());
        }
        bool IncludeMaturityDate() const {
            return (m_maturity_date.time_since_epoch().count() != 0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
        }
        bool IncludeAccount() const {
            return !(m_account.empty());
        }
        bool IncludeGiveupFirm() const {
            return !(m_giveup_firm.empty());
        }
        bool IncludeGiveupAccnt() const {
            return !(m_giveup_accnt.empty());
        }
        bool IncludeClearingFirm() const {
            return !(m_clearing_firm.empty());
        }
        bool IncludeClearingAccnt() const {
            return !(m_clearing_accnt.empty());
        }
        bool IncludeDropData1() const {
            return !(m_drop_data1.empty());
        }
        bool IncludeDropData2() const {
            return !(m_drop_data2.empty());
        }
        bool IncludeClOrdId() const {
            return !(m_cl_ord_id.empty());
        }
        bool IncludeFillVersion() const {
            return !(m_fill_version == 0);
        }
        bool IncludeFillDttm() const {
            return (m_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillQuantity() const {
            return !(m_fill_quantity == 0);
        }
        bool IncludeFillPrice() const {
            return !(m_fill_price == 0.0);
        }
        bool IncludeFillTransactDttm() const {
            return (m_fill_transact_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeFillMarket() const {
            return !(m_fill_market.empty());
        }
        bool IncludeFillSrliqTag() const {
            return !(m_fill_srliq_tag.empty());
        }
        bool IncludeFillExchLiqTag() const {
            return !(m_fill_exch_liq_tag.empty());
        }
        bool IncludeFillExchFee() const {
            return !(m_fill_exch_fee == 0.0);
        }
        bool IncludeFillExecId() const {
            return !(m_fill_exec_id.empty());
        }
        bool IncludeFillRefExecId() const {
            return !(m_fill_ref_exec_id.empty());
        }
        bool IncludeFillLegRefId() const {
            return !(m_fill_leg_ref_id == 0);
        }
        bool IncludeFillFirmType() const {
            return !(m_fill_firm_type.empty());
        }
        bool IncludeFillExecBroker() const {
            return !(m_fill_exec_broker.empty());
        }
        bool IncludeFillContraDetail() const {
            return !(m_fill_contra_detail.empty());
        }
        bool IncludeFillStreetText() const {
            return !(m_fill_street_text.empty());
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeRoutingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_routing_code);
            }
            if ( IncludeRoutingSeqNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_routing_seq_num);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(112, optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeSecurityDesc()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_security_desc);
            }
            if ( IncludeSecurityType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_security_type);
            }
            if ( IncludeSymbol()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_symbol);
            }
            if ( IncludeMaturityDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_maturity_date);
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_strike);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
            if ( IncludeAccount()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_account);
            }
            if ( IncludeGiveupFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_giveup_firm);
            }
            if ( IncludeGiveupAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_giveup_accnt);
            }
            if ( IncludeClearingFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_clearing_firm);
            }
            if ( IncludeClearingAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_clearing_accnt);
            }
            if ( IncludeDropData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_drop_data1);
            }
            if ( IncludeDropData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(154,m_drop_data2);
            }
            if ( IncludeClOrdId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(157,m_cl_ord_id);
            }
            if ( IncludeFillVersion()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(160,m_fill_version);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_fill_exec_status)));
            if ( IncludeFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(166, m_fill_dttm);
            }
            if ( IncludeFillQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_fill_quantity);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_fill_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_fill_ssale_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_fill_position_type)));
            if ( IncludeFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(181,m_fill_price);
            }
            if ( IncludeFillTransactDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(184, m_fill_transact_dttm);
            }
            if ( IncludeFillMarket()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_fill_market);
            }
            if ( IncludeFillSrliqTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_fill_srliq_tag);
            }
            if ( IncludeFillExchLiqTag()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_fill_exch_liq_tag);
            }
            if ( IncludeFillExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(196,m_fill_exch_fee);
            }
            if ( IncludeFillExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_fill_exec_id);
            }
            if ( IncludeFillRefExecId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(202,m_fill_ref_exec_id);
            }
            if ( IncludeFillLegRefId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(205,m_fill_leg_ref_id);
            }
            if ( IncludeFillFirmType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(208,m_fill_firm_type);
            }
            if ( IncludeFillExecBroker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(211,m_fill_exec_broker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_fill_order_capacity)));
            if ( IncludeFillContraDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(217,m_fill_contra_detail);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_fill_contra_capacity)));
            if ( IncludeFillStreetText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(223,m_fill_street_text);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(226,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(229, m_timestamp);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_sys_environment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>(m_run_status)));
            if ( IncludeRoutingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_routing_code));
            }
            if ( IncludeRoutingSeqNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_routing_seq_num);
            }
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key{};
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 112, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            if ( IncludeSecurityDesc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_security_desc));
            }
            if ( IncludeSecurityType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_security_type));
            }
            if ( IncludeSymbol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_symbol));
            }
            if ( IncludeMaturityDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_maturity_date);
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_strike);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
            if ( IncludeAccount()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_account));
            }
            if ( IncludeGiveupFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_giveup_firm));
            }
            if ( IncludeGiveupAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_giveup_accnt));
            }
            if ( IncludeClearingFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_clearing_firm));
            }
            if ( IncludeClearingAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_clearing_accnt));
            }
            if ( IncludeDropData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_drop_data1));
            }
            if ( IncludeDropData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,154,static_cast<string>(m_drop_data2));
            }
            if ( IncludeClOrdId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,157,static_cast<string>(m_cl_ord_id));
            }
            if ( IncludeFillVersion()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,160,m_fill_version);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>(m_fill_exec_status)));
            if ( IncludeFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 166, m_fill_dttm);
            }
            if ( IncludeFillQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_fill_quantity);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_fill_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_fill_ssale_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_fill_position_type)));
            if ( IncludeFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,181,m_fill_price);
            }
            if ( IncludeFillTransactDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 184, m_fill_transact_dttm);
            }
            if ( IncludeFillMarket()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_fill_market));
            }
            if ( IncludeFillSrliqTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_fill_srliq_tag));
            }
            if ( IncludeFillExchLiqTag()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_fill_exch_liq_tag));
            }
            if ( IncludeFillExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,196,m_fill_exch_fee);
            }
            if ( IncludeFillExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_fill_exec_id));
            }
            if ( IncludeFillRefExecId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,202,static_cast<string>(m_fill_ref_exec_id));
            }
            if ( IncludeFillLegRefId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,205,m_fill_leg_ref_id);
            }
            if ( IncludeFillFirmType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,208,static_cast<string>(m_fill_firm_type));
            }
            if ( IncludeFillExecBroker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,211,static_cast<string>(m_fill_exec_broker));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,214,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_fill_order_capacity)));
            if ( IncludeFillContraDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,217,static_cast<string>(m_fill_contra_detail));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>(m_fill_contra_capacity)));
            if ( IncludeFillStreetText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,223,static_cast<string>(m_fill_street_text));
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,226,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 229, m_timestamp);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,5000,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(m_data_center__v7)));
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
                            m_sys_environment = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_run_status = static_cast<spiderrock::protobuf::api::RunStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_routing_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_routing_seq_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_desc = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_security_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_symbol = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_maturity_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_call_put = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_account = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_giveup_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_giveup_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_clearing_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_drop_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_drop_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cl_ord_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_version = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_exec_status = static_cast<spiderrock::protobuf::api::ExecStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_position_type = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_fill_transact_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_market = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_srliq_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exch_liq_tag = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_ref_exec_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_fill_leg_ref_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_firm_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_exec_broker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 214: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_order_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_contra_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 220: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fill_contra_capacity = static_cast<spiderrock::protobuf::api::OrderCapacity>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fill_street_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 5000: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_data_center__v7 = static_cast<spiderrock::protobuf::api::SRDataCenter_V7>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::_meta>() const { return SpdrDropExecution::_meta{ m__meta}; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::pkey>() const { return SpdrDropExecution::pkey{ m_pkey}; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::sys_environment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_sys_environment)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::run_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RunStatus>( m_run_status)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::routing_code>() const { return m_routing_code; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::routing_seq_num>() const { return m_routing_seq_num; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::sec_key>() const { return SpdrDropExecution::sec_key{ m_sec_key}; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::security_desc>() const { return m_security_desc; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::security_type>() const { return m_security_type; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::symbol>() const { return m_symbol; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::maturity_date>() const { return m_maturity_date; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::strike>() const { return m_strike; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::call_put>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_call_put)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::account>() const { return m_account; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::giveup_firm>() const { return m_giveup_firm; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::giveup_accnt>() const { return m_giveup_accnt; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::clearing_firm>() const { return m_clearing_firm; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::clearing_accnt>() const { return m_clearing_accnt; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::drop_data1>() const { return m_drop_data1; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::drop_data2>() const { return m_drop_data2; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::cl_ord_id>() const { return m_cl_ord_id; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_version>() const { return m_fill_version; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_exec_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExecStatus>( m_fill_exec_status)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_dttm>() const { return m_fill_dttm; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_quantity>() const { return m_fill_quantity; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_fill_side)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_fill_ssale_flag)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_fill_position_type)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_price>() const { return m_fill_price; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_transact_dttm>() const { return m_fill_transact_dttm; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_market>() const { return m_fill_market; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_srliq_tag>() const { return m_fill_srliq_tag; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_exch_liq_tag>() const { return m_fill_exch_liq_tag; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_exch_fee>() const { return m_fill_exch_fee; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_exec_id>() const { return m_fill_exec_id; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_ref_exec_id>() const { return m_fill_ref_exec_id; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_leg_ref_id>() const { return m_fill_leg_ref_id; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_firm_type>() const { return m_fill_firm_type; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_exec_broker>() const { return m_fill_exec_broker; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_order_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_fill_order_capacity)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_contra_detail>() const { return m_fill_contra_detail; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_contra_capacity>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OrderCapacity>( m_fill_contra_capacity)); }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::fill_street_text>() const { return m_fill_street_text; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrDropExecution::get<SpdrDropExecution::data_center__v7>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SRDataCenter_V7>( m_data_center__v7)); }
    template<> inline const auto SpdrDropExecution_PKey::get<SpdrDropExecution_PKey::drop_number>() const { return m_drop_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrDropExecution_PKey& m) {
        o << "\"drop_number\":" << m.get<SpdrDropExecution_PKey::drop_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrDropExecution& m) {
        o << "\"_meta\":{" << m.get<SpdrDropExecution::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrDropExecution::pkey>() << "}";
        o << ",\"sys_environment\":" << (int64_t)m.get<SpdrDropExecution::sys_environment>();
        o << ",\"run_status\":" << (int64_t)m.get<SpdrDropExecution::run_status>();
        o << ",\"routing_code\":\"" << m.get<SpdrDropExecution::routing_code>() << "\"";
        o << ",\"routing_seq_num\":" << m.get<SpdrDropExecution::routing_seq_num>();
        o << ",\"sec_key\":{" << m.get<SpdrDropExecution::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<SpdrDropExecution::sec_type>();
        o << ",\"security_desc\":\"" << m.get<SpdrDropExecution::security_desc>() << "\"";
        o << ",\"security_type\":\"" << m.get<SpdrDropExecution::security_type>() << "\"";
        o << ",\"symbol\":\"" << m.get<SpdrDropExecution::symbol>() << "\"";
        {
            std::time_t tt = m.get<SpdrDropExecution::maturity_date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"maturity_date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"strike\":" << m.get<SpdrDropExecution::strike>();
        o << ",\"call_put\":" << (int64_t)m.get<SpdrDropExecution::call_put>();
        o << ",\"account\":\"" << m.get<SpdrDropExecution::account>() << "\"";
        o << ",\"giveup_firm\":\"" << m.get<SpdrDropExecution::giveup_firm>() << "\"";
        o << ",\"giveup_accnt\":\"" << m.get<SpdrDropExecution::giveup_accnt>() << "\"";
        o << ",\"clearing_firm\":\"" << m.get<SpdrDropExecution::clearing_firm>() << "\"";
        o << ",\"clearing_accnt\":\"" << m.get<SpdrDropExecution::clearing_accnt>() << "\"";
        o << ",\"drop_data1\":\"" << m.get<SpdrDropExecution::drop_data1>() << "\"";
        o << ",\"drop_data2\":\"" << m.get<SpdrDropExecution::drop_data2>() << "\"";
        o << ",\"cl_ord_id\":\"" << m.get<SpdrDropExecution::cl_ord_id>() << "\"";
        o << ",\"fill_version\":" << m.get<SpdrDropExecution::fill_version>();
        o << ",\"fill_exec_status\":" << (int64_t)m.get<SpdrDropExecution::fill_exec_status>();
        {
            std::time_t tt = m.get<SpdrDropExecution::fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_quantity\":" << m.get<SpdrDropExecution::fill_quantity>();
        o << ",\"fill_side\":" << (int64_t)m.get<SpdrDropExecution::fill_side>();
        o << ",\"fill_ssale_flag\":" << (int64_t)m.get<SpdrDropExecution::fill_ssale_flag>();
        o << ",\"fill_position_type\":" << (int64_t)m.get<SpdrDropExecution::fill_position_type>();
        o << ",\"fill_price\":" << m.get<SpdrDropExecution::fill_price>();
        {
            std::time_t tt = m.get<SpdrDropExecution::fill_transact_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"fill_transact_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"fill_market\":\"" << m.get<SpdrDropExecution::fill_market>() << "\"";
        o << ",\"fill_srliq_tag\":\"" << m.get<SpdrDropExecution::fill_srliq_tag>() << "\"";
        o << ",\"fill_exch_liq_tag\":\"" << m.get<SpdrDropExecution::fill_exch_liq_tag>() << "\"";
        o << ",\"fill_exch_fee\":" << m.get<SpdrDropExecution::fill_exch_fee>();
        o << ",\"fill_exec_id\":\"" << m.get<SpdrDropExecution::fill_exec_id>() << "\"";
        o << ",\"fill_ref_exec_id\":\"" << m.get<SpdrDropExecution::fill_ref_exec_id>() << "\"";
        o << ",\"fill_leg_ref_id\":" << m.get<SpdrDropExecution::fill_leg_ref_id>();
        o << ",\"fill_firm_type\":\"" << m.get<SpdrDropExecution::fill_firm_type>() << "\"";
        o << ",\"fill_exec_broker\":\"" << m.get<SpdrDropExecution::fill_exec_broker>() << "\"";
        o << ",\"fill_order_capacity\":" << (int64_t)m.get<SpdrDropExecution::fill_order_capacity>();
        o << ",\"fill_contra_detail\":\"" << m.get<SpdrDropExecution::fill_contra_detail>() << "\"";
        o << ",\"fill_contra_capacity\":" << (int64_t)m.get<SpdrDropExecution::fill_contra_capacity>();
        o << ",\"fill_street_text\":\"" << m.get<SpdrDropExecution::fill_street_text>() << "\"";
        o << ",\"net_timestamp\":" << m.get<SpdrDropExecution::net_timestamp>();
        {
            std::time_t tt = m.get<SpdrDropExecution::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"data_center__v7\":" << (int64_t)m.get<SpdrDropExecution::data_center__v7>();
        return o;
    }

}
}
}