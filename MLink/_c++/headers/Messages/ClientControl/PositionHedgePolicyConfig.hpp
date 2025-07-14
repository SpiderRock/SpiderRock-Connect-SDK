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

    #ifndef _hedge_delta_rule__GUARD__
    #define _hedge_delta_rule__GUARD__
    DECL_STRONG_TYPE(hedge_delta_rule, spiderrock::protobuf::api::HedgeDeltaRule);
    #endif//_hedge_delta_rule__GUARD__

    #ifndef _binary_days__GUARD__
    #define _binary_days__GUARD__
    DECL_STRONG_TYPE(binary_days, float);
    #endif//_binary_days__GUARD__

    #ifndef _balance_symbols__GUARD__
    #define _balance_symbols__GUARD__
    DECL_STRONG_TYPE(balance_symbols, spiderrock::protobuf::api::YesNo);
    #endif//_balance_symbols__GUARD__

    #ifndef _hedge_algo__GUARD__
    #define _hedge_algo__GUARD__
    DECL_STRONG_TYPE(hedge_algo, spiderrock::protobuf::api::HedgeAlgo);
    #endif//_hedge_algo__GUARD__

    #ifndef _exec_brkr_algo__GUARD__
    #define _exec_brkr_algo__GUARD__
    DECL_STRONG_TYPE(exec_brkr_algo, string);
    #endif//_exec_brkr_algo__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _exec_bkkr_tags__GUARD__
    #define _exec_bkkr_tags__GUARD__
    DECL_STRONG_TYPE(exec_bkkr_tags, string);
    #endif//_exec_bkkr_tags__GUARD__

    #ifndef _eod_hedge_window__GUARD__
    #define _eod_hedge_window__GUARD__
    DECL_STRONG_TYPE(eod_hedge_window, spiderrock::protobuf::api::HedgeWindow);
    #endif//_eod_hedge_window__GUARD__

    #ifndef _eod_sym_hedge_band_dd__GUARD__
    #define _eod_sym_hedge_band_dd__GUARD__
    DECL_STRONG_TYPE(eod_sym_hedge_band_dd, float);
    #endif//_eod_sym_hedge_band_dd__GUARD__

    #ifndef _eod_sym_hedge_band_gr__GUARD__
    #define _eod_sym_hedge_band_gr__GUARD__
    DECL_STRONG_TYPE(eod_sym_hedge_band_gr, float);
    #endif//_eod_sym_hedge_band_gr__GUARD__

    #ifndef _eod_balance_symbols__GUARD__
    #define _eod_balance_symbols__GUARD__
    DECL_STRONG_TYPE(eod_balance_symbols, spiderrock::protobuf::api::YesNo);
    #endif//_eod_balance_symbols__GUARD__

    #ifndef _eod_hedge_algo__GUARD__
    #define _eod_hedge_algo__GUARD__
    DECL_STRONG_TYPE(eod_hedge_algo, spiderrock::protobuf::api::HedgeAlgo);
    #endif//_eod_hedge_algo__GUARD__

    #ifndef _eod_exec_brkr_algo__GUARD__
    #define _eod_exec_brkr_algo__GUARD__
    DECL_STRONG_TYPE(eod_exec_brkr_algo, string);
    #endif//_eod_exec_brkr_algo__GUARD__

    #ifndef _eod_exec_brkr_code__GUARD__
    #define _eod_exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(eod_exec_brkr_code, string);
    #endif//_eod_exec_brkr_code__GUARD__

    #ifndef _eod_exec_bkkr_tags__GUARD__
    #define _eod_exec_bkkr_tags__GUARD__
    DECL_STRONG_TYPE(eod_exec_bkkr_tags, string);
    #endif//_eod_exec_bkkr_tags__GUARD__

    #ifndef _cls_hedge_window__GUARD__
    #define _cls_hedge_window__GUARD__
    DECL_STRONG_TYPE(cls_hedge_window, spiderrock::protobuf::api::ClsHedgeWindow);
    #endif//_cls_hedge_window__GUARD__

    #ifndef _cls_auction_sym_hedge_band_dd__GUARD__
    #define _cls_auction_sym_hedge_band_dd__GUARD__
    DECL_STRONG_TYPE(cls_auction_sym_hedge_band_dd, float);
    #endif//_cls_auction_sym_hedge_band_dd__GUARD__

    #ifndef _cls_auction_sym_hedge_band_gr__GUARD__
    #define _cls_auction_sym_hedge_band_gr__GUARD__
    DECL_STRONG_TYPE(cls_auction_sym_hedge_band_gr, float);
    #endif//_cls_auction_sym_hedge_band_gr__GUARD__

    #ifndef _cls_sym_hedge_band_dd__GUARD__
    #define _cls_sym_hedge_band_dd__GUARD__
    DECL_STRONG_TYPE(cls_sym_hedge_band_dd, float);
    #endif//_cls_sym_hedge_band_dd__GUARD__

    #ifndef _cls_sym_hedge_band_gr__GUARD__
    #define _cls_sym_hedge_band_gr__GUARD__
    DECL_STRONG_TYPE(cls_sym_hedge_band_gr, float);
    #endif//_cls_sym_hedge_band_gr__GUARD__

    #ifndef _cls_balance_symbols__GUARD__
    #define _cls_balance_symbols__GUARD__
    DECL_STRONG_TYPE(cls_balance_symbols, spiderrock::protobuf::api::YesNo);
    #endif//_cls_balance_symbols__GUARD__

    #ifndef _cls_hedge_algo__GUARD__
    #define _cls_hedge_algo__GUARD__
    DECL_STRONG_TYPE(cls_hedge_algo, spiderrock::protobuf::api::ClsHedgeAlgo);
    #endif//_cls_hedge_algo__GUARD__

    #ifndef _cls_exec_brkr_algo__GUARD__
    #define _cls_exec_brkr_algo__GUARD__
    DECL_STRONG_TYPE(cls_exec_brkr_algo, string);
    #endif//_cls_exec_brkr_algo__GUARD__

    #ifndef _cls_exec_brkr_code__GUARD__
    #define _cls_exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(cls_exec_brkr_code, string);
    #endif//_cls_exec_brkr_code__GUARD__

    #ifndef _cls_exec_bkkr_tags__GUARD__
    #define _cls_exec_bkkr_tags__GUARD__
    DECL_STRONG_TYPE(cls_exec_bkkr_tags, string);
    #endif//_cls_exec_bkkr_tags__GUARD__

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

    #ifndef _policy__PositionHedgePolicy__GUARD__
    #define _policy__PositionHedgePolicy__GUARD__
    DECL_STRONG_TYPE(policy__PositionHedgePolicy, spiderrock::protobuf::api::PositionHedgePolicy);
    #endif//_policy__PositionHedgePolicy__GUARD__

    #ifndef _hedge_time__GUARD__
    #define _hedge_time__GUARD__
    DECL_STRONG_TYPE(hedge_time, std::chrono::nanoseconds);
    #endif//_hedge_time__GUARD__

    #ifndef _sym_hedge_band_dd__GUARD__
    #define _sym_hedge_band_dd__GUARD__
    DECL_STRONG_TYPE(sym_hedge_band_dd, float);
    #endif//_sym_hedge_band_dd__GUARD__

    #ifndef _sym_hedge_band_gr__GUARD__
    #define _sym_hedge_band_gr__GUARD__
    DECL_STRONG_TYPE(sym_hedge_band_gr, float);
    #endif//_sym_hedge_band_gr__GUARD__

    
    class PositionHedgePolicyConfig_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using policy = spiderrock::protobuf::api::policy__PositionHedgePolicy;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        policy m_policy{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        policy get_policy() const {
            return m_policy;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_policy(const policy& value)  {
            m_policy = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const policy & value) { set_policy(value); }


        PositionHedgePolicyConfig_PKey() {}

        virtual ~PositionHedgePolicyConfig_PKey() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionHedgePolicy>(m_policy)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionHedgePolicy>(m_policy)));
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
                    case 12: {m_policy = static_cast<spiderrock::protobuf::api::PositionHedgePolicy>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class PositionHedgePolicyConfig_HedgeWaves {
        public:
        //using statements for all types used in this class
        using hedge_time = spiderrock::protobuf::api::hedge_time;
        using sym_hedge_band_dd = spiderrock::protobuf::api::sym_hedge_band_dd;
        using sym_hedge_band_gr = spiderrock::protobuf::api::sym_hedge_band_gr;

        private:
        hedge_time m_hedge_time{};
        sym_hedge_band_dd m_sym_hedge_band_dd{};
        sym_hedge_band_gr m_sym_hedge_band_gr{};

        public:
        hedge_time get_hedge_time() const {
            return m_hedge_time;
        }
        sym_hedge_band_dd get_sym_hedge_band_dd() const {
            return m_sym_hedge_band_dd;
        }
        sym_hedge_band_gr get_sym_hedge_band_gr() const {
            return m_sym_hedge_band_gr;
        }
        void set_hedge_time(const hedge_time& value)  {
            m_hedge_time = value;
        }
        void set_sym_hedge_band_dd(const sym_hedge_band_dd& value)  {
            m_sym_hedge_band_dd = value;
        }
        void set_sym_hedge_band_gr(const sym_hedge_band_gr& value)  {
            m_sym_hedge_band_gr = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig_HedgeWaves::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig_HedgeWaves::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const hedge_time & value) { set_hedge_time(value); }
        void set(const sym_hedge_band_dd & value) { set_sym_hedge_band_dd(value); }
        void set(const sym_hedge_band_gr & value) { set_sym_hedge_band_gr(value); }


        PositionHedgePolicyConfig_HedgeWaves() {}

        virtual ~PositionHedgePolicyConfig_HedgeWaves() {
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
            totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(104, m_hedge_time);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(105,m_sym_hedge_band_dd);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_sym_hedge_band_gr);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 104, m_hedge_time);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,105,m_sym_hedge_band_dd);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_sym_hedge_band_gr);
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
                    case 104: {
                        m_hedge_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        break;
                    }
                    case 105: {m_sym_hedge_band_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 106: {m_sym_hedge_band_gr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class PositionHedgePolicyConfig {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::PositionHedgePolicyConfig_PKey;
        using enabled = spiderrock::protobuf::api::enabled;
        using hedge_delta_rule = spiderrock::protobuf::api::hedge_delta_rule;
        using binary_days = spiderrock::protobuf::api::binary_days;
        using balance_symbols = spiderrock::protobuf::api::balance_symbols;
        using hedge_algo = spiderrock::protobuf::api::hedge_algo;
        using exec_brkr_algo = spiderrock::protobuf::api::exec_brkr_algo;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using exec_bkkr_tags = spiderrock::protobuf::api::exec_bkkr_tags;
        using eod_hedge_window = spiderrock::protobuf::api::eod_hedge_window;
        using eod_sym_hedge_band_dd = spiderrock::protobuf::api::eod_sym_hedge_band_dd;
        using eod_sym_hedge_band_gr = spiderrock::protobuf::api::eod_sym_hedge_band_gr;
        using eod_balance_symbols = spiderrock::protobuf::api::eod_balance_symbols;
        using eod_hedge_algo = spiderrock::protobuf::api::eod_hedge_algo;
        using eod_exec_brkr_algo = spiderrock::protobuf::api::eod_exec_brkr_algo;
        using eod_exec_brkr_code = spiderrock::protobuf::api::eod_exec_brkr_code;
        using eod_exec_bkkr_tags = spiderrock::protobuf::api::eod_exec_bkkr_tags;
        using cls_hedge_window = spiderrock::protobuf::api::cls_hedge_window;
        using cls_auction_sym_hedge_band_dd = spiderrock::protobuf::api::cls_auction_sym_hedge_band_dd;
        using cls_auction_sym_hedge_band_gr = spiderrock::protobuf::api::cls_auction_sym_hedge_band_gr;
        using cls_sym_hedge_band_dd = spiderrock::protobuf::api::cls_sym_hedge_band_dd;
        using cls_sym_hedge_band_gr = spiderrock::protobuf::api::cls_sym_hedge_band_gr;
        using cls_balance_symbols = spiderrock::protobuf::api::cls_balance_symbols;
        using cls_hedge_algo = spiderrock::protobuf::api::cls_hedge_algo;
        using cls_exec_brkr_algo = spiderrock::protobuf::api::cls_exec_brkr_algo;
        using cls_exec_brkr_code = spiderrock::protobuf::api::cls_exec_brkr_code;
        using cls_exec_bkkr_tags = spiderrock::protobuf::api::cls_exec_bkkr_tags;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using hedge_waves = spiderrock::protobuf::api::PositionHedgePolicyConfig_HedgeWaves;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        enabled m_enabled{};
        hedge_delta_rule m_hedge_delta_rule{};
        binary_days m_binary_days{};
        balance_symbols m_balance_symbols{};
        hedge_algo m_hedge_algo{};
        exec_brkr_algo m_exec_brkr_algo{};
        exec_brkr_code m_exec_brkr_code{};
        exec_bkkr_tags m_exec_bkkr_tags{};
        eod_hedge_window m_eod_hedge_window{};
        eod_sym_hedge_band_dd m_eod_sym_hedge_band_dd{};
        eod_sym_hedge_band_gr m_eod_sym_hedge_band_gr{};
        eod_balance_symbols m_eod_balance_symbols{};
        eod_hedge_algo m_eod_hedge_algo{};
        eod_exec_brkr_algo m_eod_exec_brkr_algo{};
        eod_exec_brkr_code m_eod_exec_brkr_code{};
        eod_exec_bkkr_tags m_eod_exec_bkkr_tags{};
        cls_hedge_window m_cls_hedge_window{};
        cls_auction_sym_hedge_band_dd m_cls_auction_sym_hedge_band_dd{};
        cls_auction_sym_hedge_band_gr m_cls_auction_sym_hedge_band_gr{};
        cls_sym_hedge_band_dd m_cls_sym_hedge_band_dd{};
        cls_sym_hedge_band_gr m_cls_sym_hedge_band_gr{};
        cls_balance_symbols m_cls_balance_symbols{};
        cls_hedge_algo m_cls_hedge_algo{};
        cls_exec_brkr_algo m_cls_exec_brkr_algo{};
        cls_exec_brkr_code m_cls_exec_brkr_code{};
        cls_exec_bkkr_tags m_cls_exec_bkkr_tags{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};
        std::vector<hedge_waves> m_hedge_waves{};

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
        hedge_delta_rule get_hedge_delta_rule() const {
            return m_hedge_delta_rule;
        }		
        binary_days get_binary_days() const {
            return m_binary_days;
        }		
        balance_symbols get_balance_symbols() const {
            return m_balance_symbols;
        }		
        hedge_algo get_hedge_algo() const {
            return m_hedge_algo;
        }		
        exec_brkr_algo get_exec_brkr_algo() const {
            return m_exec_brkr_algo;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        exec_bkkr_tags get_exec_bkkr_tags() const {
            return m_exec_bkkr_tags;
        }		
        eod_hedge_window get_eod_hedge_window() const {
            return m_eod_hedge_window;
        }		
        eod_sym_hedge_band_dd get_eod_sym_hedge_band_dd() const {
            return m_eod_sym_hedge_band_dd;
        }		
        eod_sym_hedge_band_gr get_eod_sym_hedge_band_gr() const {
            return m_eod_sym_hedge_band_gr;
        }		
        eod_balance_symbols get_eod_balance_symbols() const {
            return m_eod_balance_symbols;
        }		
        eod_hedge_algo get_eod_hedge_algo() const {
            return m_eod_hedge_algo;
        }		
        eod_exec_brkr_algo get_eod_exec_brkr_algo() const {
            return m_eod_exec_brkr_algo;
        }		
        eod_exec_brkr_code get_eod_exec_brkr_code() const {
            return m_eod_exec_brkr_code;
        }		
        eod_exec_bkkr_tags get_eod_exec_bkkr_tags() const {
            return m_eod_exec_bkkr_tags;
        }		
        cls_hedge_window get_cls_hedge_window() const {
            return m_cls_hedge_window;
        }		
        cls_auction_sym_hedge_band_dd get_cls_auction_sym_hedge_band_dd() const {
            return m_cls_auction_sym_hedge_band_dd;
        }		
        cls_auction_sym_hedge_band_gr get_cls_auction_sym_hedge_band_gr() const {
            return m_cls_auction_sym_hedge_band_gr;
        }		
        cls_sym_hedge_band_dd get_cls_sym_hedge_band_dd() const {
            return m_cls_sym_hedge_band_dd;
        }		
        cls_sym_hedge_band_gr get_cls_sym_hedge_band_gr() const {
            return m_cls_sym_hedge_band_gr;
        }		
        cls_balance_symbols get_cls_balance_symbols() const {
            return m_cls_balance_symbols;
        }		
        cls_hedge_algo get_cls_hedge_algo() const {
            return m_cls_hedge_algo;
        }		
        cls_exec_brkr_algo get_cls_exec_brkr_algo() const {
            return m_cls_exec_brkr_algo;
        }		
        cls_exec_brkr_code get_cls_exec_brkr_code() const {
            return m_cls_exec_brkr_code;
        }		
        cls_exec_bkkr_tags get_cls_exec_bkkr_tags() const {
            return m_cls_exec_bkkr_tags;
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
        const std::vector<hedge_waves>& get_hedge_waves_list() const {
            return m_hedge_waves;
        }
        const hedge_waves& get_hedge_waves(const int i) const {
            return m_hedge_waves.at(i);
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
        void set_hedge_delta_rule(const hedge_delta_rule& value)  {
            m_hedge_delta_rule = value;
        }
        void set_binary_days(const binary_days& value)  {
            m_binary_days = value;
        }
        void set_balance_symbols(const balance_symbols& value)  {
            m_balance_symbols = value;
        }
        void set_hedge_algo(const hedge_algo& value)  {
            m_hedge_algo = value;
        }
        void set_exec_brkr_algo(const exec_brkr_algo& value)  {
            m_exec_brkr_algo = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_exec_bkkr_tags(const exec_bkkr_tags& value)  {
            m_exec_bkkr_tags = value;
        }
        void set_eod_hedge_window(const eod_hedge_window& value)  {
            m_eod_hedge_window = value;
        }
        void set_eod_sym_hedge_band_dd(const eod_sym_hedge_band_dd& value)  {
            m_eod_sym_hedge_band_dd = value;
        }
        void set_eod_sym_hedge_band_gr(const eod_sym_hedge_band_gr& value)  {
            m_eod_sym_hedge_band_gr = value;
        }
        void set_eod_balance_symbols(const eod_balance_symbols& value)  {
            m_eod_balance_symbols = value;
        }
        void set_eod_hedge_algo(const eod_hedge_algo& value)  {
            m_eod_hedge_algo = value;
        }
        void set_eod_exec_brkr_algo(const eod_exec_brkr_algo& value)  {
            m_eod_exec_brkr_algo = value;
        }
        void set_eod_exec_brkr_code(const eod_exec_brkr_code& value)  {
            m_eod_exec_brkr_code = value;
        }
        void set_eod_exec_bkkr_tags(const eod_exec_bkkr_tags& value)  {
            m_eod_exec_bkkr_tags = value;
        }
        void set_cls_hedge_window(const cls_hedge_window& value)  {
            m_cls_hedge_window = value;
        }
        void set_cls_auction_sym_hedge_band_dd(const cls_auction_sym_hedge_band_dd& value)  {
            m_cls_auction_sym_hedge_band_dd = value;
        }
        void set_cls_auction_sym_hedge_band_gr(const cls_auction_sym_hedge_band_gr& value)  {
            m_cls_auction_sym_hedge_band_gr = value;
        }
        void set_cls_sym_hedge_band_dd(const cls_sym_hedge_band_dd& value)  {
            m_cls_sym_hedge_band_dd = value;
        }
        void set_cls_sym_hedge_band_gr(const cls_sym_hedge_band_gr& value)  {
            m_cls_sym_hedge_band_gr = value;
        }
        void set_cls_balance_symbols(const cls_balance_symbols& value)  {
            m_cls_balance_symbols = value;
        }
        void set_cls_hedge_algo(const cls_hedge_algo& value)  {
            m_cls_hedge_algo = value;
        }
        void set_cls_exec_brkr_algo(const cls_exec_brkr_algo& value)  {
            m_cls_exec_brkr_algo = value;
        }
        void set_cls_exec_brkr_code(const cls_exec_brkr_code& value)  {
            m_cls_exec_brkr_code = value;
        }
        void set_cls_exec_bkkr_tags(const cls_exec_bkkr_tags& value)  {
            m_cls_exec_bkkr_tags = value;
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
        void set_hedge_waves_list(const std::vector<hedge_waves>& list)  {
            m_hedge_waves = list;
        }
        void add_hedge_waves(const hedge_waves& item) {
            m_hedge_waves.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to PositionHedgePolicyConfig::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const hedge_delta_rule & value) {
            set_hedge_delta_rule(value);
        }
        void set(const binary_days & value) {
            set_binary_days(value);
        }
        void set(const balance_symbols & value) {
            set_balance_symbols(value);
        }
        void set(const hedge_algo & value) {
            set_hedge_algo(value);
        }
        void set(const exec_brkr_algo & value) {
            set_exec_brkr_algo(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const exec_bkkr_tags & value) {
            set_exec_bkkr_tags(value);
        }
        void set(const eod_hedge_window & value) {
            set_eod_hedge_window(value);
        }
        void set(const eod_sym_hedge_band_dd & value) {
            set_eod_sym_hedge_band_dd(value);
        }
        void set(const eod_sym_hedge_band_gr & value) {
            set_eod_sym_hedge_band_gr(value);
        }
        void set(const eod_balance_symbols & value) {
            set_eod_balance_symbols(value);
        }
        void set(const eod_hedge_algo & value) {
            set_eod_hedge_algo(value);
        }
        void set(const eod_exec_brkr_algo & value) {
            set_eod_exec_brkr_algo(value);
        }
        void set(const eod_exec_brkr_code & value) {
            set_eod_exec_brkr_code(value);
        }
        void set(const eod_exec_bkkr_tags & value) {
            set_eod_exec_bkkr_tags(value);
        }
        void set(const cls_hedge_window & value) {
            set_cls_hedge_window(value);
        }
        void set(const cls_auction_sym_hedge_band_dd & value) {
            set_cls_auction_sym_hedge_band_dd(value);
        }
        void set(const cls_auction_sym_hedge_band_gr & value) {
            set_cls_auction_sym_hedge_band_gr(value);
        }
        void set(const cls_sym_hedge_band_dd & value) {
            set_cls_sym_hedge_band_dd(value);
        }
        void set(const cls_sym_hedge_band_gr & value) {
            set_cls_sym_hedge_band_gr(value);
        }
        void set(const cls_balance_symbols & value) {
            set_cls_balance_symbols(value);
        }
        void set(const cls_hedge_algo & value) {
            set_cls_hedge_algo(value);
        }
        void set(const cls_exec_brkr_algo & value) {
            set_cls_exec_brkr_algo(value);
        }
        void set(const cls_exec_brkr_code & value) {
            set_cls_exec_brkr_code(value);
        }
        void set(const cls_exec_bkkr_tags & value) {
            set_cls_exec_bkkr_tags(value);
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
        void set(const hedge_waves & value) {
            add_hedge_waves(value);
        }

        void set(const PositionHedgePolicyConfig & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_enabled);
            set(value.m_hedge_delta_rule);
            set(value.m_binary_days);
            set(value.m_balance_symbols);
            set(value.m_hedge_algo);
            set(value.m_exec_brkr_algo);
            set(value.m_exec_brkr_code);
            set(value.m_exec_bkkr_tags);
            set(value.m_eod_hedge_window);
            set(value.m_eod_sym_hedge_band_dd);
            set(value.m_eod_sym_hedge_band_gr);
            set(value.m_eod_balance_symbols);
            set(value.m_eod_hedge_algo);
            set(value.m_eod_exec_brkr_algo);
            set(value.m_eod_exec_brkr_code);
            set(value.m_eod_exec_bkkr_tags);
            set(value.m_cls_hedge_window);
            set(value.m_cls_auction_sym_hedge_band_dd);
            set(value.m_cls_auction_sym_hedge_band_gr);
            set(value.m_cls_sym_hedge_band_dd);
            set(value.m_cls_sym_hedge_band_gr);
            set(value.m_cls_balance_symbols);
            set(value.m_cls_hedge_algo);
            set(value.m_cls_exec_brkr_algo);
            set(value.m_cls_exec_brkr_code);
            set(value.m_cls_exec_bkkr_tags);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);set_hedge_waves_list(value.m_hedge_waves);
        }

        PositionHedgePolicyConfig() {
            m__meta.set_message_type("PositionHedgePolicyConfig");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1813, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1813, length);
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
             *this = PositionHedgePolicyConfig{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBinaryDays() const {
            return !(m_binary_days == 0.0);
        }
        bool IncludeExecBrkrAlgo() const {
            return !(m_exec_brkr_algo.empty());
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeExecBkkrTags() const {
            return !(m_exec_bkkr_tags.empty());
        }
        bool IncludeEodSymHedgeBandDd() const {
            return !(m_eod_sym_hedge_band_dd == 0.0);
        }
        bool IncludeEodSymHedgeBandGr() const {
            return !(m_eod_sym_hedge_band_gr == 0.0);
        }
        bool IncludeEodExecBrkrAlgo() const {
            return !(m_eod_exec_brkr_algo.empty());
        }
        bool IncludeEodExecBrkrCode() const {
            return !(m_eod_exec_brkr_code.empty());
        }
        bool IncludeEodExecBkkrTags() const {
            return !(m_eod_exec_bkkr_tags.empty());
        }
        bool IncludeClsAuctionSymHedgeBandDd() const {
            return !(m_cls_auction_sym_hedge_band_dd == 0.0);
        }
        bool IncludeClsAuctionSymHedgeBandGr() const {
            return !(m_cls_auction_sym_hedge_band_gr == 0.0);
        }
        bool IncludeClsSymHedgeBandDd() const {
            return !(m_cls_sym_hedge_band_dd == 0.0);
        }
        bool IncludeClsSymHedgeBandGr() const {
            return !(m_cls_sym_hedge_band_gr == 0.0);
        }
        bool IncludeClsExecBrkrAlgo() const {
            return !(m_cls_exec_brkr_algo.empty());
        }
        bool IncludeClsExecBrkrCode() const {
            return !(m_cls_exec_brkr_code.empty());
        }
        bool IncludeClsExecBkkrTags() const {
            return !(m_cls_exec_bkkr_tags.empty());
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeHedgeWaves() const {
            return (!m_hedge_waves.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeBinaryDays()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(102,m_binary_days);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_balance_symbols)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_hedge_algo)));
            if ( IncludeExecBrkrAlgo()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_exec_brkr_algo);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(110,m_exec_brkr_code);
            }
            if ( IncludeExecBkkrTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(111,m_exec_bkkr_tags);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeWindow>(m_eod_hedge_window)));
            if ( IncludeEodSymHedgeBandDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(113,m_eod_sym_hedge_band_dd);
            }
            if ( IncludeEodSymHedgeBandGr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_eod_sym_hedge_band_gr);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_eod_balance_symbols)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_eod_hedge_algo)));
            if ( IncludeEodExecBrkrAlgo()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(117,m_eod_exec_brkr_algo);
            }
            if ( IncludeEodExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_eod_exec_brkr_code);
            }
            if ( IncludeEodExecBkkrTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(119,m_eod_exec_bkkr_tags);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(120,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsHedgeWindow>(m_cls_hedge_window)));
            if ( IncludeClsAuctionSymHedgeBandDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_cls_auction_sym_hedge_band_dd);
            }
            if ( IncludeClsAuctionSymHedgeBandGr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(122,m_cls_auction_sym_hedge_band_gr);
            }
            if ( IncludeClsSymHedgeBandDd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(123,m_cls_sym_hedge_band_dd);
            }
            if ( IncludeClsSymHedgeBandGr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_cls_sym_hedge_band_gr);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(125,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cls_balance_symbols)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsHedgeAlgo>(m_cls_hedge_algo)));
            if ( IncludeClsExecBrkrAlgo()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_cls_exec_brkr_algo);
            }
            if ( IncludeClsExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(128,m_cls_exec_brkr_code);
            }
            if ( IncludeClsExecBkkrTags()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(129,m_cls_exec_bkkr_tags);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(131,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(132, m_timestamp);
            }
            if ( IncludeHedgeWaves()) {
                for (auto& item : m_hedge_waves) {
					totalSize += SRProtobufCPP::TagCodec::Size(103, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(m_hedge_delta_rule)));
            if ( IncludeBinaryDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,102,m_binary_days);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_balance_symbols)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_hedge_algo)));
            if ( IncludeExecBrkrAlgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_exec_brkr_algo));
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,110,static_cast<string>(m_exec_brkr_code));
            }
            if ( IncludeExecBkkrTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,111,static_cast<string>(m_exec_bkkr_tags));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeWindow>(m_eod_hedge_window)));
            if ( IncludeEodSymHedgeBandDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,113,m_eod_sym_hedge_band_dd);
            }
            if ( IncludeEodSymHedgeBandGr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_eod_sym_hedge_band_gr);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_eod_balance_symbols)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>(m_eod_hedge_algo)));
            if ( IncludeEodExecBrkrAlgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,117,static_cast<string>(m_eod_exec_brkr_algo));
            }
            if ( IncludeEodExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_eod_exec_brkr_code));
            }
            if ( IncludeEodExecBkkrTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,119,static_cast<string>(m_eod_exec_bkkr_tags));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,120,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsHedgeWindow>(m_cls_hedge_window)));
            if ( IncludeClsAuctionSymHedgeBandDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_cls_auction_sym_hedge_band_dd);
            }
            if ( IncludeClsAuctionSymHedgeBandGr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,122,m_cls_auction_sym_hedge_band_gr);
            }
            if ( IncludeClsSymHedgeBandDd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,123,m_cls_sym_hedge_band_dd);
            }
            if ( IncludeClsSymHedgeBandGr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_cls_sym_hedge_band_gr);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,125,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_cls_balance_symbols)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,126,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsHedgeAlgo>(m_cls_hedge_algo)));
            if ( IncludeClsExecBrkrAlgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_cls_exec_brkr_algo));
            }
            if ( IncludeClsExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,128,static_cast<string>(m_cls_exec_brkr_code));
            }
            if ( IncludeClsExecBkkrTags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,129,static_cast<string>(m_cls_exec_bkkr_tags));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,131,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 132, m_timestamp);
            }
            if ( IncludeHedgeWaves()) {
                for (auto& item : m_hedge_waves) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 103, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_delta_rule = static_cast<spiderrock::protobuf::api::HedgeDeltaRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_binary_days = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_balance_symbols = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_algo = static_cast<spiderrock::protobuf::api::HedgeAlgo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_algo = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_bkkr_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_eod_hedge_window = static_cast<spiderrock::protobuf::api::HedgeWindow>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eod_sym_hedge_band_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_eod_sym_hedge_band_gr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_eod_balance_symbols = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 116: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_eod_hedge_algo = static_cast<spiderrock::protobuf::api::HedgeAlgo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 117: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_eod_exec_brkr_algo = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_eod_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_eod_exec_bkkr_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 120: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cls_hedge_window = static_cast<spiderrock::protobuf::api::ClsHedgeWindow>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_auction_sym_hedge_band_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_auction_sym_hedge_band_gr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_sym_hedge_band_dd = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cls_sym_hedge_band_gr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 125: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cls_balance_symbols = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 126: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cls_hedge_algo = static_cast<spiderrock::protobuf::api::ClsHedgeAlgo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cls_exec_brkr_algo = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cls_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cls_exec_bkkr_tags = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 131: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            hedge_waves item_hedge_waves;
                            item_hedge_waves.Decode(pos, pos+length);  
                            m_hedge_waves.emplace_back(item_hedge_waves);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::_meta>() const { return PositionHedgePolicyConfig::_meta{ m__meta}; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::pkey>() const { return PositionHedgePolicyConfig::pkey{ m_pkey}; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_enabled)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::hedge_delta_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeDeltaRule>( m_hedge_delta_rule)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::binary_days>() const { return m_binary_days; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::balance_symbols>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_balance_symbols)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::hedge_algo>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>( m_hedge_algo)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::exec_brkr_algo>() const { return m_exec_brkr_algo; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::exec_bkkr_tags>() const { return m_exec_bkkr_tags; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_hedge_window>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeWindow>( m_eod_hedge_window)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_sym_hedge_band_dd>() const { return m_eod_sym_hedge_band_dd; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_sym_hedge_band_gr>() const { return m_eod_sym_hedge_band_gr; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_balance_symbols>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_eod_balance_symbols)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_hedge_algo>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeAlgo>( m_eod_hedge_algo)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_exec_brkr_algo>() const { return m_eod_exec_brkr_algo; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_exec_brkr_code>() const { return m_eod_exec_brkr_code; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::eod_exec_bkkr_tags>() const { return m_eod_exec_bkkr_tags; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_hedge_window>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsHedgeWindow>( m_cls_hedge_window)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_auction_sym_hedge_band_dd>() const { return m_cls_auction_sym_hedge_band_dd; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_auction_sym_hedge_band_gr>() const { return m_cls_auction_sym_hedge_band_gr; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_sym_hedge_band_dd>() const { return m_cls_sym_hedge_band_dd; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_sym_hedge_band_gr>() const { return m_cls_sym_hedge_band_gr; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_balance_symbols>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_cls_balance_symbols)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_hedge_algo>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ClsHedgeAlgo>( m_cls_hedge_algo)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_exec_brkr_algo>() const { return m_cls_exec_brkr_algo; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_exec_brkr_code>() const { return m_cls_exec_brkr_code; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::cls_exec_bkkr_tags>() const { return m_cls_exec_bkkr_tags; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::modified_by>() const { return m_modified_by; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::timestamp>() const { return m_timestamp; }
    template<> inline const auto PositionHedgePolicyConfig::get<PositionHedgePolicyConfig::hedge_waves>(int i) const { return PositionHedgePolicyConfig::hedge_waves{ get_hedge_waves(i)}; }
    template<> inline int PositionHedgePolicyConfig::count<PositionHedgePolicyConfig::hedge_waves>() const { return static_cast<int>( m_hedge_waves.size()); }
    template<> inline const auto PositionHedgePolicyConfig_PKey::get<PositionHedgePolicyConfig_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto PositionHedgePolicyConfig_PKey::get<PositionHedgePolicyConfig_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto PositionHedgePolicyConfig_PKey::get<PositionHedgePolicyConfig_PKey::policy>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionHedgePolicy>(m_policy));}
    
    template<> inline const auto PositionHedgePolicyConfig_HedgeWaves::get<PositionHedgePolicyConfig_HedgeWaves::hedge_time>() const { return m_hedge_time; }
    template<> inline const auto PositionHedgePolicyConfig_HedgeWaves::get<PositionHedgePolicyConfig_HedgeWaves::sym_hedge_band_dd>() const { return m_sym_hedge_band_dd; }
    template<> inline const auto PositionHedgePolicyConfig_HedgeWaves::get<PositionHedgePolicyConfig_HedgeWaves::sym_hedge_band_gr>() const { return m_sym_hedge_band_gr; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const PositionHedgePolicyConfig_PKey& m) {
        o << "\"accnt\":\"" << m.get<PositionHedgePolicyConfig_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<PositionHedgePolicyConfig_PKey::client_firm>() << "\"";
        o << ",\"policy\":" << (int64_t)m.get<PositionHedgePolicyConfig_PKey::policy>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const PositionHedgePolicyConfig_HedgeWaves& m) {
        o << "\"hedge_time\":\"" << m.get<PositionHedgePolicyConfig_HedgeWaves::hedge_time>().count() << "\"";
        o << ",\"sym_hedge_band_dd\":" << m.get<PositionHedgePolicyConfig_HedgeWaves::sym_hedge_band_dd>();
        o << ",\"sym_hedge_band_gr\":" << m.get<PositionHedgePolicyConfig_HedgeWaves::sym_hedge_band_gr>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const PositionHedgePolicyConfig& m) {
        o << "\"_meta\":{" << m.get<PositionHedgePolicyConfig::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<PositionHedgePolicyConfig::pkey>() << "}";
        o << ",\"enabled\":" << (int64_t)m.get<PositionHedgePolicyConfig::enabled>();
        o << ",\"hedge_delta_rule\":" << (int64_t)m.get<PositionHedgePolicyConfig::hedge_delta_rule>();
        o << ",\"binary_days\":" << m.get<PositionHedgePolicyConfig::binary_days>();
        o << ",\"balance_symbols\":" << (int64_t)m.get<PositionHedgePolicyConfig::balance_symbols>();
        o << ",\"hedge_algo\":" << (int64_t)m.get<PositionHedgePolicyConfig::hedge_algo>();
        o << ",\"exec_brkr_algo\":\"" << m.get<PositionHedgePolicyConfig::exec_brkr_algo>() << "\"";
        o << ",\"exec_brkr_code\":\"" << m.get<PositionHedgePolicyConfig::exec_brkr_code>() << "\"";
        o << ",\"exec_bkkr_tags\":\"" << m.get<PositionHedgePolicyConfig::exec_bkkr_tags>() << "\"";
        o << ",\"eod_hedge_window\":" << (int64_t)m.get<PositionHedgePolicyConfig::eod_hedge_window>();
        o << ",\"eod_sym_hedge_band_dd\":" << m.get<PositionHedgePolicyConfig::eod_sym_hedge_band_dd>();
        o << ",\"eod_sym_hedge_band_gr\":" << m.get<PositionHedgePolicyConfig::eod_sym_hedge_band_gr>();
        o << ",\"eod_balance_symbols\":" << (int64_t)m.get<PositionHedgePolicyConfig::eod_balance_symbols>();
        o << ",\"eod_hedge_algo\":" << (int64_t)m.get<PositionHedgePolicyConfig::eod_hedge_algo>();
        o << ",\"eod_exec_brkr_algo\":\"" << m.get<PositionHedgePolicyConfig::eod_exec_brkr_algo>() << "\"";
        o << ",\"eod_exec_brkr_code\":\"" << m.get<PositionHedgePolicyConfig::eod_exec_brkr_code>() << "\"";
        o << ",\"eod_exec_bkkr_tags\":\"" << m.get<PositionHedgePolicyConfig::eod_exec_bkkr_tags>() << "\"";
        o << ",\"cls_hedge_window\":" << (int64_t)m.get<PositionHedgePolicyConfig::cls_hedge_window>();
        o << ",\"cls_auction_sym_hedge_band_dd\":" << m.get<PositionHedgePolicyConfig::cls_auction_sym_hedge_band_dd>();
        o << ",\"cls_auction_sym_hedge_band_gr\":" << m.get<PositionHedgePolicyConfig::cls_auction_sym_hedge_band_gr>();
        o << ",\"cls_sym_hedge_band_dd\":" << m.get<PositionHedgePolicyConfig::cls_sym_hedge_band_dd>();
        o << ",\"cls_sym_hedge_band_gr\":" << m.get<PositionHedgePolicyConfig::cls_sym_hedge_band_gr>();
        o << ",\"cls_balance_symbols\":" << (int64_t)m.get<PositionHedgePolicyConfig::cls_balance_symbols>();
        o << ",\"cls_hedge_algo\":" << (int64_t)m.get<PositionHedgePolicyConfig::cls_hedge_algo>();
        o << ",\"cls_exec_brkr_algo\":\"" << m.get<PositionHedgePolicyConfig::cls_exec_brkr_algo>() << "\"";
        o << ",\"cls_exec_brkr_code\":\"" << m.get<PositionHedgePolicyConfig::cls_exec_brkr_code>() << "\"";
        o << ",\"cls_exec_bkkr_tags\":\"" << m.get<PositionHedgePolicyConfig::cls_exec_bkkr_tags>() << "\"";
        o << ",\"modified_by\":\"" << m.get<PositionHedgePolicyConfig::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<PositionHedgePolicyConfig::modified_in>();
        {
            std::time_t tt = m.get<PositionHedgePolicyConfig::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"hedge_waves\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<PositionHedgePolicyConfig::hedge_waves>(); ++i) {
                o << delim << m.get<PositionHedgePolicyConfig::hedge_waves>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}