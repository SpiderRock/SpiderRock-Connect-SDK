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

    #ifndef _u_mid__GUARD__
    #define _u_mid__GUARD__
    DECL_STRONG_TYPE(u_mid, double);
    #endif//_u_mid__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _bid_price__float__GUARD__
    #define _bid_price__float__GUARD__
    DECL_STRONG_TYPE(bid_price__float, float);
    #endif//_bid_price__float__GUARD__

    #ifndef _ask_price__float__GUARD__
    #define _ask_price__float__GUARD__
    DECL_STRONG_TYPE(ask_price__float, float);
    #endif//_ask_price__float__GUARD__

    #ifndef _bid_size__int32__GUARD__
    #define _bid_size__int32__GUARD__
    DECL_STRONG_TYPE(bid_size__int32, int32);
    #endif//_bid_size__int32__GUARD__

    #ifndef _ask_size__int32__GUARD__
    #define _ask_size__int32__GUARD__
    DECL_STRONG_TYPE(ask_size__int32, int32);
    #endif//_ask_size__int32__GUARD__

    #ifndef _bid_take_prob__GUARD__
    #define _bid_take_prob__GUARD__
    DECL_STRONG_TYPE(bid_take_prob, float);
    #endif//_bid_take_prob__GUARD__

    #ifndef _ask_take_prob__GUARD__
    #define _ask_take_prob__GUARD__
    DECL_STRONG_TYPE(ask_take_prob, float);
    #endif//_ask_take_prob__GUARD__

    #ifndef _bid_take_rv__GUARD__
    #define _bid_take_rv__GUARD__
    DECL_STRONG_TYPE(bid_take_rv, spiderrock::protobuf::api::PredictResult);
    #endif//_bid_take_rv__GUARD__

    #ifndef _ask_take_rv__GUARD__
    #define _ask_take_rv__GUARD__
    DECL_STRONG_TYPE(ask_take_rv, spiderrock::protobuf::api::PredictResult);
    #endif//_ask_take_rv__GUARD__

    #ifndef _bid_impr_price__GUARD__
    #define _bid_impr_price__GUARD__
    DECL_STRONG_TYPE(bid_impr_price, float);
    #endif//_bid_impr_price__GUARD__

    #ifndef _ask_impr_price__GUARD__
    #define _ask_impr_price__GUARD__
    DECL_STRONG_TYPE(ask_impr_price, float);
    #endif//_ask_impr_price__GUARD__

    #ifndef _bid_tk_im_prob__GUARD__
    #define _bid_tk_im_prob__GUARD__
    DECL_STRONG_TYPE(bid_tk_im_prob, float);
    #endif//_bid_tk_im_prob__GUARD__

    #ifndef _ask_tk_im_prob__GUARD__
    #define _ask_tk_im_prob__GUARD__
    DECL_STRONG_TYPE(ask_tk_im_prob, float);
    #endif//_ask_tk_im_prob__GUARD__

    #ifndef _bid_tk_im_rv__GUARD__
    #define _bid_tk_im_rv__GUARD__
    DECL_STRONG_TYPE(bid_tk_im_rv, spiderrock::protobuf::api::PredictResult);
    #endif//_bid_tk_im_rv__GUARD__

    #ifndef _ask_tk_im_rv__GUARD__
    #define _ask_tk_im_rv__GUARD__
    DECL_STRONG_TYPE(ask_tk_im_rv, spiderrock::protobuf::api::PredictResult);
    #endif//_ask_tk_im_rv__GUARD__

    #ifndef _surf_price__double__GUARD__
    #define _surf_price__double__GUARD__
    DECL_STRONG_TYPE(surf_price__double, double);
    #endif//_surf_price__double__GUARD__

    #ifndef _surf_vol__double__GUARD__
    #define _surf_vol__double__GUARD__
    DECL_STRONG_TYPE(surf_vol__double, double);
    #endif//_surf_vol__double__GUARD__

    #ifndef _sdiv__double__GUARD__
    #define _sdiv__double__GUARD__
    DECL_STRONG_TYPE(sdiv__double, double);
    #endif//_sdiv__double__GUARD__

    #ifndef _surf_buy_prob__GUARD__
    #define _surf_buy_prob__GUARD__
    DECL_STRONG_TYPE(surf_buy_prob, float);
    #endif//_surf_buy_prob__GUARD__

    #ifndef _surf_sell_prob__GUARD__
    #define _surf_sell_prob__GUARD__
    DECL_STRONG_TYPE(surf_sell_prob, float);
    #endif//_surf_sell_prob__GUARD__

    #ifndef _b_surf_rv__GUARD__
    #define _b_surf_rv__GUARD__
    DECL_STRONG_TYPE(b_surf_rv, spiderrock::protobuf::api::PredictResult);
    #endif//_b_surf_rv__GUARD__

    #ifndef _s_surf_rv__GUARD__
    #define _s_surf_rv__GUARD__
    DECL_STRONG_TYPE(s_surf_rv, spiderrock::protobuf::api::PredictResult);
    #endif//_s_surf_rv__GUARD__

    #ifndef _vega__GUARD__
    #define _vega__GUARD__
    DECL_STRONG_TYPE(vega, float);
    #endif//_vega__GUARD__

    #ifndef _delta__float__GUARD__
    #define _delta__float__GUARD__
    DECL_STRONG_TYPE(delta__float, float);
    #endif//_delta__float__GUARD__

    #ifndef _mid_price__float__GUARD__
    #define _mid_price__float__GUARD__
    DECL_STRONG_TYPE(mid_price__float, float);
    #endif//_mid_price__float__GUARD__

    #ifndef _avg_bid_link10m__GUARD__
    #define _avg_bid_link10m__GUARD__
    DECL_STRONG_TYPE(avg_bid_link10m, float);
    #endif//_avg_bid_link10m__GUARD__

    #ifndef _mae_bid_link10m__GUARD__
    #define _mae_bid_link10m__GUARD__
    DECL_STRONG_TYPE(mae_bid_link10m, float);
    #endif//_mae_bid_link10m__GUARD__

    #ifndef _avg_ask_link10m__GUARD__
    #define _avg_ask_link10m__GUARD__
    DECL_STRONG_TYPE(avg_ask_link10m, float);
    #endif//_avg_ask_link10m__GUARD__

    #ifndef _mae_ask_link10m__GUARD__
    #define _mae_ask_link10m__GUARD__
    DECL_STRONG_TYPE(mae_ask_link10m, float);
    #endif//_mae_ask_link10m__GUARD__

    #ifndef _avg_mkt_width10m__GUARD__
    #define _avg_mkt_width10m__GUARD__
    DECL_STRONG_TYPE(avg_mkt_width10m, float);
    #endif//_avg_mkt_width10m__GUARD__

    #ifndef _counter__GUARD__
    #define _counter__GUARD__
    DECL_STRONG_TYPE(counter, int32);
    #endif//_counter__GUARD__

    #ifndef _qp_source__GUARD__
    #define _qp_source__GUARD__
    DECL_STRONG_TYPE(qp_source, spiderrock::protobuf::api::QPSource);
    #endif//_qp_source__GUARD__

    #ifndef _src_timestamp__GUARD__
    #define _src_timestamp__GUARD__
    DECL_STRONG_TYPE(src_timestamp, int64);
    #endif//_src_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _sms_timestamp__GUARD__
    #define _sms_timestamp__GUARD__
    DECL_STRONG_TYPE(sms_timestamp, int64);
    #endif//_sms_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _state_model__GUARD__
    #define _state_model__GUARD__
    DECL_STRONG_TYPE(state_model, spiderrock::protobuf::api::StateModel);
    #endif//_state_model__GUARD__

    
    class OptionQuoteProbability_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using state_model = spiderrock::protobuf::api::state_model;

        private:
        okey m_okey{};
        state_model m_state_model{};

        public:
        state_model get_state_model() const {
            return m_state_model;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_state_model(const state_model& value)  {
            m_state_model = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionQuoteProbability_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionQuoteProbability_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const state_model & value) { set_state_model(value); }


        OptionQuoteProbability_PKey() {}

        virtual ~OptionQuoteProbability_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class OptionQuoteProbability {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionQuoteProbability_PKey;
        using u_mid = spiderrock::protobuf::api::u_mid;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using bid_take_prob = spiderrock::protobuf::api::bid_take_prob;
        using ask_take_prob = spiderrock::protobuf::api::ask_take_prob;
        using bid_take_rv = spiderrock::protobuf::api::bid_take_rv;
        using ask_take_rv = spiderrock::protobuf::api::ask_take_rv;
        using bid_impr_price = spiderrock::protobuf::api::bid_impr_price;
        using ask_impr_price = spiderrock::protobuf::api::ask_impr_price;
        using bid_tk_im_prob = spiderrock::protobuf::api::bid_tk_im_prob;
        using ask_tk_im_prob = spiderrock::protobuf::api::ask_tk_im_prob;
        using bid_tk_im_rv = spiderrock::protobuf::api::bid_tk_im_rv;
        using ask_tk_im_rv = spiderrock::protobuf::api::ask_tk_im_rv;
        using surf_price = spiderrock::protobuf::api::surf_price__double;
        using surf_vol = spiderrock::protobuf::api::surf_vol__double;
        using sdiv = spiderrock::protobuf::api::sdiv__double;
        using surf_buy_prob = spiderrock::protobuf::api::surf_buy_prob;
        using surf_sell_prob = spiderrock::protobuf::api::surf_sell_prob;
        using b_surf_rv = spiderrock::protobuf::api::b_surf_rv;
        using s_surf_rv = spiderrock::protobuf::api::s_surf_rv;
        using vega = spiderrock::protobuf::api::vega;
        using delta = spiderrock::protobuf::api::delta__float;
        using mid_price = spiderrock::protobuf::api::mid_price__float;
        using avg_bid_link10m = spiderrock::protobuf::api::avg_bid_link10m;
        using mae_bid_link10m = spiderrock::protobuf::api::mae_bid_link10m;
        using avg_ask_link10m = spiderrock::protobuf::api::avg_ask_link10m;
        using mae_ask_link10m = spiderrock::protobuf::api::mae_ask_link10m;
        using avg_mkt_width10m = spiderrock::protobuf::api::avg_mkt_width10m;
        using counter = spiderrock::protobuf::api::counter;
        using qp_source = spiderrock::protobuf::api::qp_source;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using sms_timestamp = spiderrock::protobuf::api::sms_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        u_mid m_u_mid{};
        u_prc m_u_prc{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        bid_take_prob m_bid_take_prob{};
        ask_take_prob m_ask_take_prob{};
        bid_take_rv m_bid_take_rv{};
        ask_take_rv m_ask_take_rv{};
        bid_impr_price m_bid_impr_price{};
        ask_impr_price m_ask_impr_price{};
        bid_tk_im_prob m_bid_tk_im_prob{};
        ask_tk_im_prob m_ask_tk_im_prob{};
        bid_tk_im_rv m_bid_tk_im_rv{};
        ask_tk_im_rv m_ask_tk_im_rv{};
        surf_price m_surf_price{};
        surf_vol m_surf_vol{};
        sdiv m_sdiv{};
        surf_buy_prob m_surf_buy_prob{};
        surf_sell_prob m_surf_sell_prob{};
        b_surf_rv m_b_surf_rv{};
        s_surf_rv m_s_surf_rv{};
        vega m_vega{};
        delta m_delta{};
        mid_price m_mid_price{};
        avg_bid_link10m m_avg_bid_link10m{};
        mae_bid_link10m m_mae_bid_link10m{};
        avg_ask_link10m m_avg_ask_link10m{};
        mae_ask_link10m m_mae_ask_link10m{};
        avg_mkt_width10m m_avg_mkt_width10m{};
        counter m_counter{};
        qp_source m_qp_source{};
        src_timestamp m_src_timestamp{};
        net_timestamp m_net_timestamp{};
        sms_timestamp m_sms_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        u_mid get_u_mid() const {
            return m_u_mid;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        bid_price get_bid_price() const {
            return m_bid_price;
        }		
        ask_price get_ask_price() const {
            return m_ask_price;
        }		
        bid_size get_bid_size() const {
            return m_bid_size;
        }		
        ask_size get_ask_size() const {
            return m_ask_size;
        }		
        bid_take_prob get_bid_take_prob() const {
            return m_bid_take_prob;
        }		
        ask_take_prob get_ask_take_prob() const {
            return m_ask_take_prob;
        }		
        bid_take_rv get_bid_take_rv() const {
            return m_bid_take_rv;
        }		
        ask_take_rv get_ask_take_rv() const {
            return m_ask_take_rv;
        }		
        bid_impr_price get_bid_impr_price() const {
            return m_bid_impr_price;
        }		
        ask_impr_price get_ask_impr_price() const {
            return m_ask_impr_price;
        }		
        bid_tk_im_prob get_bid_tk_im_prob() const {
            return m_bid_tk_im_prob;
        }		
        ask_tk_im_prob get_ask_tk_im_prob() const {
            return m_ask_tk_im_prob;
        }		
        bid_tk_im_rv get_bid_tk_im_rv() const {
            return m_bid_tk_im_rv;
        }		
        ask_tk_im_rv get_ask_tk_im_rv() const {
            return m_ask_tk_im_rv;
        }		
        surf_price get_surf_price() const {
            return m_surf_price;
        }		
        surf_vol get_surf_vol() const {
            return m_surf_vol;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        surf_buy_prob get_surf_buy_prob() const {
            return m_surf_buy_prob;
        }		
        surf_sell_prob get_surf_sell_prob() const {
            return m_surf_sell_prob;
        }		
        b_surf_rv get_b_surf_rv() const {
            return m_b_surf_rv;
        }		
        s_surf_rv get_s_surf_rv() const {
            return m_s_surf_rv;
        }		
        vega get_vega() const {
            return m_vega;
        }		
        delta get_delta() const {
            return m_delta;
        }		
        mid_price get_mid_price() const {
            return m_mid_price;
        }		
        avg_bid_link10m get_avg_bid_link10m() const {
            return m_avg_bid_link10m;
        }		
        mae_bid_link10m get_mae_bid_link10m() const {
            return m_mae_bid_link10m;
        }		
        avg_ask_link10m get_avg_ask_link10m() const {
            return m_avg_ask_link10m;
        }		
        mae_ask_link10m get_mae_ask_link10m() const {
            return m_mae_ask_link10m;
        }		
        avg_mkt_width10m get_avg_mkt_width10m() const {
            return m_avg_mkt_width10m;
        }		
        counter get_counter() const {
            return m_counter;
        }		
        qp_source get_qp_source() const {
            return m_qp_source;
        }		
        src_timestamp get_src_timestamp() const {
            return m_src_timestamp;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
        }		
        sms_timestamp get_sms_timestamp() const {
            return m_sms_timestamp;
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
        void set_u_mid(const u_mid& value)  {
            m_u_mid = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_bid_price(const bid_price& value)  {
            m_bid_price = value;
        }
        void set_ask_price(const ask_price& value)  {
            m_ask_price = value;
        }
        void set_bid_size(const bid_size& value)  {
            m_bid_size = value;
        }
        void set_ask_size(const ask_size& value)  {
            m_ask_size = value;
        }
        void set_bid_take_prob(const bid_take_prob& value)  {
            m_bid_take_prob = value;
        }
        void set_ask_take_prob(const ask_take_prob& value)  {
            m_ask_take_prob = value;
        }
        void set_bid_take_rv(const bid_take_rv& value)  {
            m_bid_take_rv = value;
        }
        void set_ask_take_rv(const ask_take_rv& value)  {
            m_ask_take_rv = value;
        }
        void set_bid_impr_price(const bid_impr_price& value)  {
            m_bid_impr_price = value;
        }
        void set_ask_impr_price(const ask_impr_price& value)  {
            m_ask_impr_price = value;
        }
        void set_bid_tk_im_prob(const bid_tk_im_prob& value)  {
            m_bid_tk_im_prob = value;
        }
        void set_ask_tk_im_prob(const ask_tk_im_prob& value)  {
            m_ask_tk_im_prob = value;
        }
        void set_bid_tk_im_rv(const bid_tk_im_rv& value)  {
            m_bid_tk_im_rv = value;
        }
        void set_ask_tk_im_rv(const ask_tk_im_rv& value)  {
            m_ask_tk_im_rv = value;
        }
        void set_surf_price(const surf_price& value)  {
            m_surf_price = value;
        }
        void set_surf_vol(const surf_vol& value)  {
            m_surf_vol = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_surf_buy_prob(const surf_buy_prob& value)  {
            m_surf_buy_prob = value;
        }
        void set_surf_sell_prob(const surf_sell_prob& value)  {
            m_surf_sell_prob = value;
        }
        void set_b_surf_rv(const b_surf_rv& value)  {
            m_b_surf_rv = value;
        }
        void set_s_surf_rv(const s_surf_rv& value)  {
            m_s_surf_rv = value;
        }
        void set_vega(const vega& value)  {
            m_vega = value;
        }
        void set_delta(const delta& value)  {
            m_delta = value;
        }
        void set_mid_price(const mid_price& value)  {
            m_mid_price = value;
        }
        void set_avg_bid_link10m(const avg_bid_link10m& value)  {
            m_avg_bid_link10m = value;
        }
        void set_mae_bid_link10m(const mae_bid_link10m& value)  {
            m_mae_bid_link10m = value;
        }
        void set_avg_ask_link10m(const avg_ask_link10m& value)  {
            m_avg_ask_link10m = value;
        }
        void set_mae_ask_link10m(const mae_ask_link10m& value)  {
            m_mae_ask_link10m = value;
        }
        void set_avg_mkt_width10m(const avg_mkt_width10m& value)  {
            m_avg_mkt_width10m = value;
        }
        void set_counter(const counter& value)  {
            m_counter = value;
        }
        void set_qp_source(const qp_source& value)  {
            m_qp_source = value;
        }
        void set_src_timestamp(const src_timestamp& value)  {
            m_src_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_sms_timestamp(const sms_timestamp& value)  {
            m_sms_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionQuoteProbability::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const u_mid & value) {
            set_u_mid(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const bid_price & value) {
            set_bid_price(value);
        }
        void set(const ask_price & value) {
            set_ask_price(value);
        }
        void set(const bid_size & value) {
            set_bid_size(value);
        }
        void set(const ask_size & value) {
            set_ask_size(value);
        }
        void set(const bid_take_prob & value) {
            set_bid_take_prob(value);
        }
        void set(const ask_take_prob & value) {
            set_ask_take_prob(value);
        }
        void set(const bid_take_rv & value) {
            set_bid_take_rv(value);
        }
        void set(const ask_take_rv & value) {
            set_ask_take_rv(value);
        }
        void set(const bid_impr_price & value) {
            set_bid_impr_price(value);
        }
        void set(const ask_impr_price & value) {
            set_ask_impr_price(value);
        }
        void set(const bid_tk_im_prob & value) {
            set_bid_tk_im_prob(value);
        }
        void set(const ask_tk_im_prob & value) {
            set_ask_tk_im_prob(value);
        }
        void set(const bid_tk_im_rv & value) {
            set_bid_tk_im_rv(value);
        }
        void set(const ask_tk_im_rv & value) {
            set_ask_tk_im_rv(value);
        }
        void set(const surf_price & value) {
            set_surf_price(value);
        }
        void set(const surf_vol & value) {
            set_surf_vol(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const surf_buy_prob & value) {
            set_surf_buy_prob(value);
        }
        void set(const surf_sell_prob & value) {
            set_surf_sell_prob(value);
        }
        void set(const b_surf_rv & value) {
            set_b_surf_rv(value);
        }
        void set(const s_surf_rv & value) {
            set_s_surf_rv(value);
        }
        void set(const vega & value) {
            set_vega(value);
        }
        void set(const delta & value) {
            set_delta(value);
        }
        void set(const mid_price & value) {
            set_mid_price(value);
        }
        void set(const avg_bid_link10m & value) {
            set_avg_bid_link10m(value);
        }
        void set(const mae_bid_link10m & value) {
            set_mae_bid_link10m(value);
        }
        void set(const avg_ask_link10m & value) {
            set_avg_ask_link10m(value);
        }
        void set(const mae_ask_link10m & value) {
            set_mae_ask_link10m(value);
        }
        void set(const avg_mkt_width10m & value) {
            set_avg_mkt_width10m(value);
        }
        void set(const counter & value) {
            set_counter(value);
        }
        void set(const qp_source & value) {
            set_qp_source(value);
        }
        void set(const src_timestamp & value) {
            set_src_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const sms_timestamp & value) {
            set_sms_timestamp(value);
        }

        void set(const OptionQuoteProbability & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_u_mid);
            set(value.m_u_prc);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_bid_take_prob);
            set(value.m_ask_take_prob);
            set(value.m_bid_take_rv);
            set(value.m_ask_take_rv);
            set(value.m_bid_impr_price);
            set(value.m_ask_impr_price);
            set(value.m_bid_tk_im_prob);
            set(value.m_ask_tk_im_prob);
            set(value.m_bid_tk_im_rv);
            set(value.m_ask_tk_im_rv);
            set(value.m_surf_price);
            set(value.m_surf_vol);
            set(value.m_sdiv);
            set(value.m_surf_buy_prob);
            set(value.m_surf_sell_prob);
            set(value.m_b_surf_rv);
            set(value.m_s_surf_rv);
            set(value.m_vega);
            set(value.m_delta);
            set(value.m_mid_price);
            set(value.m_avg_bid_link10m);
            set(value.m_mae_bid_link10m);
            set(value.m_avg_ask_link10m);
            set(value.m_mae_ask_link10m);
            set(value.m_avg_mkt_width10m);
            set(value.m_counter);
            set(value.m_qp_source);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_sms_timestamp);
        }

        OptionQuoteProbability() {
            m__meta.set_message_type("OptionQuoteProbability");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4270, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4270, length);
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
             *this = OptionQuoteProbability{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeUMid() const {
            return !(m_u_mid == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeBidPrice() const {
            return !(m_bid_price == 0.0);
        }
        bool IncludeAskPrice() const {
            return !(m_ask_price == 0.0);
        }
        bool IncludeBidSize() const {
            return !(m_bid_size == 0);
        }
        bool IncludeAskSize() const {
            return !(m_ask_size == 0);
        }
        bool IncludeBidTakeProb() const {
            return !(m_bid_take_prob == 0.0);
        }
        bool IncludeAskTakeProb() const {
            return !(m_ask_take_prob == 0.0);
        }
        bool IncludeBidImprPrice() const {
            return !(m_bid_impr_price == 0.0);
        }
        bool IncludeAskImprPrice() const {
            return !(m_ask_impr_price == 0.0);
        }
        bool IncludeBidTkImProb() const {
            return !(m_bid_tk_im_prob == 0.0);
        }
        bool IncludeAskTkImProb() const {
            return !(m_ask_tk_im_prob == 0.0);
        }
        bool IncludeSurfPrice() const {
            return !(m_surf_price == 0.0);
        }
        bool IncludeSurfVol() const {
            return !(m_surf_vol == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeSurfBuyProb() const {
            return !(m_surf_buy_prob == 0.0);
        }
        bool IncludeSurfSellProb() const {
            return !(m_surf_sell_prob == 0.0);
        }
        bool IncludeVega() const {
            return !(m_vega == 0.0);
        }
        bool IncludeDelta() const {
            return !(m_delta == 0.0);
        }
        bool IncludeMidPrice() const {
            return !(m_mid_price == 0.0);
        }
        bool IncludeAvgBidLink10m() const {
            return !(m_avg_bid_link10m == 0.0);
        }
        bool IncludeMaeBidLink10m() const {
            return !(m_mae_bid_link10m == 0.0);
        }
        bool IncludeAvgAskLink10m() const {
            return !(m_avg_ask_link10m == 0.0);
        }
        bool IncludeMaeAskLink10m() const {
            return !(m_mae_ask_link10m == 0.0);
        }
        bool IncludeAvgMktWidth10m() const {
            return !(m_avg_mkt_width10m == 0.0);
        }
        bool IncludeCounter() const {
            return !(m_counter == 0);
        }
        bool IncludeSrcTimestamp() const {
            return !(m_src_timestamp == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
        }
        bool IncludeSmsTimestamp() const {
            return !(m_sms_timestamp == 0);
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
            if ( IncludeUMid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(100,m_u_mid);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_u_prc);
            }
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(112,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_ask_size);
            }
            if ( IncludeBidTakeProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_bid_take_prob);
            }
            if ( IncludeAskTakeProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_ask_take_prob);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_take_rv)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_take_rv)));
            if ( IncludeBidImprPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_bid_impr_price);
            }
            if ( IncludeAskImprPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_ask_impr_price);
            }
            if ( IncludeBidTkImProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_bid_tk_im_prob);
            }
            if ( IncludeAskTkImProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_ask_tk_im_prob);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_tk_im_rv)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_tk_im_rv)));
            if ( IncludeSurfPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(148,m_surf_price);
            }
            if ( IncludeSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(151,m_surf_vol);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(154,m_sdiv);
            }
            if ( IncludeSurfBuyProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_surf_buy_prob);
            }
            if ( IncludeSurfSellProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_surf_sell_prob);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_b_surf_rv)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_s_surf_rv)));
            if ( IncludeVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_vega);
            }
            if ( IncludeDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_delta);
            }
            if ( IncludeMidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_mid_price);
            }
            if ( IncludeAvgBidLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_avg_bid_link10m);
            }
            if ( IncludeMaeBidLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_mae_bid_link10m);
            }
            if ( IncludeAvgAskLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(184,m_avg_ask_link10m);
            }
            if ( IncludeMaeAskLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(187,m_mae_ask_link10m);
            }
            if ( IncludeAvgMktWidth10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(190,m_avg_mkt_width10m);
            }
            if ( IncludeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(193,m_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QPSource>(m_qp_source)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(199,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(202,m_net_timestamp);
            }
            if ( IncludeSmsTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(205,m_sms_timestamp);
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
            if ( IncludeUMid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,100,m_u_mid);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_u_prc);
            }
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,112,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_ask_size);
            }
            if ( IncludeBidTakeProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_bid_take_prob);
            }
            if ( IncludeAskTakeProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_ask_take_prob);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_take_rv)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_take_rv)));
            if ( IncludeBidImprPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_bid_impr_price);
            }
            if ( IncludeAskImprPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_ask_impr_price);
            }
            if ( IncludeBidTkImProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_bid_tk_im_prob);
            }
            if ( IncludeAskTkImProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_ask_tk_im_prob);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,142,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_tk_im_rv)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_tk_im_rv)));
            if ( IncludeSurfPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,148,m_surf_price);
            }
            if ( IncludeSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,151,m_surf_vol);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,154,m_sdiv);
            }
            if ( IncludeSurfBuyProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_surf_buy_prob);
            }
            if ( IncludeSurfSellProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_surf_sell_prob);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,163,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_b_surf_rv)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_s_surf_rv)));
            if ( IncludeVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_vega);
            }
            if ( IncludeDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_delta);
            }
            if ( IncludeMidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_mid_price);
            }
            if ( IncludeAvgBidLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_avg_bid_link10m);
            }
            if ( IncludeMaeBidLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_mae_bid_link10m);
            }
            if ( IncludeAvgAskLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,184,m_avg_ask_link10m);
            }
            if ( IncludeMaeAskLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,187,m_mae_ask_link10m);
            }
            if ( IncludeAvgMktWidth10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,190,m_avg_mkt_width10m);
            }
            if ( IncludeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,193,m_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,196,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QPSource>(m_qp_source)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,199,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,202,m_net_timestamp);
            }
            if ( IncludeSmsTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,205,m_sms_timestamp);
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
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_mid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_take_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_take_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_take_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_take_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_impr_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_impr_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_tk_im_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_tk_im_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_tk_im_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_tk_im_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_surf_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_surf_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_buy_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surf_sell_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_b_surf_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_s_surf_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_bid_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_bid_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_ask_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_ask_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_mkt_width10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 196: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_qp_source = static_cast<spiderrock::protobuf::api::QPSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_sms_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::_meta>() const { return OptionQuoteProbability::_meta{ m__meta}; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::pkey>() const { return OptionQuoteProbability::pkey{ m_pkey}; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::u_mid>() const { return m_u_mid; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_price>() const { return m_bid_price; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_price>() const { return m_ask_price; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_size>() const { return m_bid_size; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_size>() const { return m_ask_size; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_take_prob>() const { return m_bid_take_prob; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_take_prob>() const { return m_ask_take_prob; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_take_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_bid_take_rv)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_take_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_ask_take_rv)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_impr_price>() const { return m_bid_impr_price; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_impr_price>() const { return m_ask_impr_price; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_tk_im_prob>() const { return m_bid_tk_im_prob; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_tk_im_prob>() const { return m_ask_tk_im_prob; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::bid_tk_im_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_bid_tk_im_rv)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::ask_tk_im_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_ask_tk_im_rv)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::surf_price>() const { return m_surf_price; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::surf_vol>() const { return m_surf_vol; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::surf_buy_prob>() const { return m_surf_buy_prob; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::surf_sell_prob>() const { return m_surf_sell_prob; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::b_surf_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_b_surf_rv)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::s_surf_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_s_surf_rv)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::vega>() const { return m_vega; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::delta>() const { return m_delta; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::mid_price>() const { return m_mid_price; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::avg_bid_link10m>() const { return m_avg_bid_link10m; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::mae_bid_link10m>() const { return m_mae_bid_link10m; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::avg_ask_link10m>() const { return m_avg_ask_link10m; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::mae_ask_link10m>() const { return m_mae_ask_link10m; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::avg_mkt_width10m>() const { return m_avg_mkt_width10m; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::counter>() const { return m_counter; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::qp_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QPSource>( m_qp_source)); }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionQuoteProbability::get<OptionQuoteProbability::sms_timestamp>() const { return m_sms_timestamp; }
    template<> inline const auto OptionQuoteProbability_PKey::get<OptionQuoteProbability_PKey::okey>() const { return OptionQuoteProbability_PKey::okey{m_okey}; }
    template<> inline const auto OptionQuoteProbability_PKey::get<OptionQuoteProbability_PKey::state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionQuoteProbability_PKey& m) {
        o << "\"okey\":{" << m.get<OptionQuoteProbability_PKey::okey>() << "}";
        o << ",\"state_model\":" << (int64_t)m.get<OptionQuoteProbability_PKey::state_model>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionQuoteProbability& m) {
        o << "\"_meta\":{" << m.get<OptionQuoteProbability::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionQuoteProbability::pkey>() << "}";
        o << ",\"u_mid\":" << m.get<OptionQuoteProbability::u_mid>();
        o << ",\"u_prc\":" << m.get<OptionQuoteProbability::u_prc>();
        o << ",\"bid_price\":" << m.get<OptionQuoteProbability::bid_price>();
        o << ",\"ask_price\":" << m.get<OptionQuoteProbability::ask_price>();
        o << ",\"bid_size\":" << m.get<OptionQuoteProbability::bid_size>();
        o << ",\"ask_size\":" << m.get<OptionQuoteProbability::ask_size>();
        o << ",\"bid_take_prob\":" << m.get<OptionQuoteProbability::bid_take_prob>();
        o << ",\"ask_take_prob\":" << m.get<OptionQuoteProbability::ask_take_prob>();
        o << ",\"bid_take_rv\":" << (int64_t)m.get<OptionQuoteProbability::bid_take_rv>();
        o << ",\"ask_take_rv\":" << (int64_t)m.get<OptionQuoteProbability::ask_take_rv>();
        o << ",\"bid_impr_price\":" << m.get<OptionQuoteProbability::bid_impr_price>();
        o << ",\"ask_impr_price\":" << m.get<OptionQuoteProbability::ask_impr_price>();
        o << ",\"bid_tk_im_prob\":" << m.get<OptionQuoteProbability::bid_tk_im_prob>();
        o << ",\"ask_tk_im_prob\":" << m.get<OptionQuoteProbability::ask_tk_im_prob>();
        o << ",\"bid_tk_im_rv\":" << (int64_t)m.get<OptionQuoteProbability::bid_tk_im_rv>();
        o << ",\"ask_tk_im_rv\":" << (int64_t)m.get<OptionQuoteProbability::ask_tk_im_rv>();
        o << ",\"surf_price\":" << m.get<OptionQuoteProbability::surf_price>();
        o << ",\"surf_vol\":" << m.get<OptionQuoteProbability::surf_vol>();
        o << ",\"sdiv\":" << m.get<OptionQuoteProbability::sdiv>();
        o << ",\"surf_buy_prob\":" << m.get<OptionQuoteProbability::surf_buy_prob>();
        o << ",\"surf_sell_prob\":" << m.get<OptionQuoteProbability::surf_sell_prob>();
        o << ",\"b_surf_rv\":" << (int64_t)m.get<OptionQuoteProbability::b_surf_rv>();
        o << ",\"s_surf_rv\":" << (int64_t)m.get<OptionQuoteProbability::s_surf_rv>();
        o << ",\"vega\":" << m.get<OptionQuoteProbability::vega>();
        o << ",\"delta\":" << m.get<OptionQuoteProbability::delta>();
        o << ",\"mid_price\":" << m.get<OptionQuoteProbability::mid_price>();
        o << ",\"avg_bid_link10m\":" << m.get<OptionQuoteProbability::avg_bid_link10m>();
        o << ",\"mae_bid_link10m\":" << m.get<OptionQuoteProbability::mae_bid_link10m>();
        o << ",\"avg_ask_link10m\":" << m.get<OptionQuoteProbability::avg_ask_link10m>();
        o << ",\"mae_ask_link10m\":" << m.get<OptionQuoteProbability::mae_ask_link10m>();
        o << ",\"avg_mkt_width10m\":" << m.get<OptionQuoteProbability::avg_mkt_width10m>();
        o << ",\"counter\":" << m.get<OptionQuoteProbability::counter>();
        o << ",\"qp_source\":" << (int64_t)m.get<OptionQuoteProbability::qp_source>();
        o << ",\"src_timestamp\":" << m.get<OptionQuoteProbability::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionQuoteProbability::net_timestamp>();
        o << ",\"sms_timestamp\":" << m.get<OptionQuoteProbability::sms_timestamp>();
        return o;
    }

}
}
}