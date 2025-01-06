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

    #ifndef _mid_price__float__GUARD__
    #define _mid_price__float__GUARD__
    DECL_STRONG_TYPE(mid_price__float, float);
    #endif//_mid_price__float__GUARD__

    #ifndef _avg_bid_link1m__GUARD__
    #define _avg_bid_link1m__GUARD__
    DECL_STRONG_TYPE(avg_bid_link1m, float);
    #endif//_avg_bid_link1m__GUARD__

    #ifndef _mae_bid_link1m__GUARD__
    #define _mae_bid_link1m__GUARD__
    DECL_STRONG_TYPE(mae_bid_link1m, float);
    #endif//_mae_bid_link1m__GUARD__

    #ifndef _avg_ask_link1m__GUARD__
    #define _avg_ask_link1m__GUARD__
    DECL_STRONG_TYPE(avg_ask_link1m, float);
    #endif//_avg_ask_link1m__GUARD__

    #ifndef _mae_ask_link1m__GUARD__
    #define _mae_ask_link1m__GUARD__
    DECL_STRONG_TYPE(mae_ask_link1m, float);
    #endif//_mae_ask_link1m__GUARD__

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

    #ifndef _avg_mkt_width1m__GUARD__
    #define _avg_mkt_width1m__GUARD__
    DECL_STRONG_TYPE(avg_mkt_width1m, float);
    #endif//_avg_mkt_width1m__GUARD__

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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _state_model__GUARD__
    #define _state_model__GUARD__
    DECL_STRONG_TYPE(state_model, spiderrock::protobuf::api::StateModel);
    #endif//_state_model__GUARD__

    
    class StockQuoteProbability_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using state_model = spiderrock::protobuf::api::state_model;

        private:
        ticker m_ticker{};
        state_model m_state_model{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        state_model get_state_model() const {
            return m_state_model;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_state_model(const state_model& value)  {
            m_state_model = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockQuoteProbability_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockQuoteProbability_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const state_model & value) { set_state_model(value); }


        StockQuoteProbability_PKey() {}

        virtual ~StockQuoteProbability_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
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
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_state_model = static_cast<spiderrock::protobuf::api::StateModel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class StockQuoteProbability {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockQuoteProbability_PKey;
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
        using mid_price = spiderrock::protobuf::api::mid_price__float;
        using avg_bid_link1m = spiderrock::protobuf::api::avg_bid_link1m;
        using mae_bid_link1m = spiderrock::protobuf::api::mae_bid_link1m;
        using avg_ask_link1m = spiderrock::protobuf::api::avg_ask_link1m;
        using mae_ask_link1m = spiderrock::protobuf::api::mae_ask_link1m;
        using avg_bid_link10m = spiderrock::protobuf::api::avg_bid_link10m;
        using mae_bid_link10m = spiderrock::protobuf::api::mae_bid_link10m;
        using avg_ask_link10m = spiderrock::protobuf::api::avg_ask_link10m;
        using mae_ask_link10m = spiderrock::protobuf::api::mae_ask_link10m;
        using avg_mkt_width1m = spiderrock::protobuf::api::avg_mkt_width1m;
        using avg_mkt_width10m = spiderrock::protobuf::api::avg_mkt_width10m;
        using counter = spiderrock::protobuf::api::counter;
        using qp_source = spiderrock::protobuf::api::qp_source;
        using src_timestamp = spiderrock::protobuf::api::src_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using sms_timestamp = spiderrock::protobuf::api::sms_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
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
        mid_price m_mid_price{};
        avg_bid_link1m m_avg_bid_link1m{};
        mae_bid_link1m m_mae_bid_link1m{};
        avg_ask_link1m m_avg_ask_link1m{};
        mae_ask_link1m m_mae_ask_link1m{};
        avg_bid_link10m m_avg_bid_link10m{};
        mae_bid_link10m m_mae_bid_link10m{};
        avg_ask_link10m m_avg_ask_link10m{};
        mae_ask_link10m m_mae_ask_link10m{};
        avg_mkt_width1m m_avg_mkt_width1m{};
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
        mid_price get_mid_price() const {
            return m_mid_price;
        }		
        avg_bid_link1m get_avg_bid_link1m() const {
            return m_avg_bid_link1m;
        }		
        mae_bid_link1m get_mae_bid_link1m() const {
            return m_mae_bid_link1m;
        }		
        avg_ask_link1m get_avg_ask_link1m() const {
            return m_avg_ask_link1m;
        }		
        mae_ask_link1m get_mae_ask_link1m() const {
            return m_mae_ask_link1m;
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
        avg_mkt_width1m get_avg_mkt_width1m() const {
            return m_avg_mkt_width1m;
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
        void set_mid_price(const mid_price& value)  {
            m_mid_price = value;
        }
        void set_avg_bid_link1m(const avg_bid_link1m& value)  {
            m_avg_bid_link1m = value;
        }
        void set_mae_bid_link1m(const mae_bid_link1m& value)  {
            m_mae_bid_link1m = value;
        }
        void set_avg_ask_link1m(const avg_ask_link1m& value)  {
            m_avg_ask_link1m = value;
        }
        void set_mae_ask_link1m(const mae_ask_link1m& value)  {
            m_mae_ask_link1m = value;
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
        void set_avg_mkt_width1m(const avg_mkt_width1m& value)  {
            m_avg_mkt_width1m = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockQuoteProbability::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
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
        void set(const mid_price & value) {
            set_mid_price(value);
        }
        void set(const avg_bid_link1m & value) {
            set_avg_bid_link1m(value);
        }
        void set(const mae_bid_link1m & value) {
            set_mae_bid_link1m(value);
        }
        void set(const avg_ask_link1m & value) {
            set_avg_ask_link1m(value);
        }
        void set(const mae_ask_link1m & value) {
            set_mae_ask_link1m(value);
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
        void set(const avg_mkt_width1m & value) {
            set_avg_mkt_width1m(value);
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

        void set(const StockQuoteProbability & value) {
            set(value.m__meta);
            set(value.m_pkey);
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
            set(value.m_mid_price);
            set(value.m_avg_bid_link1m);
            set(value.m_mae_bid_link1m);
            set(value.m_avg_ask_link1m);
            set(value.m_mae_ask_link1m);
            set(value.m_avg_bid_link10m);
            set(value.m_mae_bid_link10m);
            set(value.m_avg_ask_link10m);
            set(value.m_mae_ask_link10m);
            set(value.m_avg_mkt_width1m);
            set(value.m_avg_mkt_width10m);
            set(value.m_counter);
            set(value.m_qp_source);
            set(value.m_src_timestamp);
            set(value.m_net_timestamp);
            set(value.m_sms_timestamp);
        }

        StockQuoteProbability() {
            m__meta.set_message_type("StockQuoteProbability");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4280, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4280, length);
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
             *this = StockQuoteProbability{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
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
        bool IncludeMidPrice() const {
            return !(m_mid_price == 0.0);
        }
        bool IncludeAvgBidLink1m() const {
            return !(m_avg_bid_link1m == 0.0);
        }
        bool IncludeMaeBidLink1m() const {
            return !(m_mae_bid_link1m == 0.0);
        }
        bool IncludeAvgAskLink1m() const {
            return !(m_avg_ask_link1m == 0.0);
        }
        bool IncludeMaeAskLink1m() const {
            return !(m_mae_ask_link1m == 0.0);
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
        bool IncludeAvgMktWidth1m() const {
            return !(m_avg_mkt_width1m == 0.0);
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
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_ask_size);
            }
            if ( IncludeBidTakeProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_bid_take_prob);
            }
            if ( IncludeAskTakeProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ask_take_prob);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_take_rv)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_take_rv)));
            if ( IncludeBidImprPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_bid_impr_price);
            }
            if ( IncludeAskImprPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_ask_impr_price);
            }
            if ( IncludeBidTkImProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_bid_tk_im_prob);
            }
            if ( IncludeAskTkImProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_ask_tk_im_prob);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_tk_im_rv)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_tk_im_rv)));
            if ( IncludeMidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_mid_price);
            }
            if ( IncludeAvgBidLink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_avg_bid_link1m);
            }
            if ( IncludeMaeBidLink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_mae_bid_link1m);
            }
            if ( IncludeAvgAskLink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_avg_ask_link1m);
            }
            if ( IncludeMaeAskLink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_mae_ask_link1m);
            }
            if ( IncludeAvgBidLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_avg_bid_link10m);
            }
            if ( IncludeMaeBidLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_mae_bid_link10m);
            }
            if ( IncludeAvgAskLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_avg_ask_link10m);
            }
            if ( IncludeMaeAskLink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_mae_ask_link10m);
            }
            if ( IncludeAvgMktWidth1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_avg_mkt_width1m);
            }
            if ( IncludeAvgMktWidth10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_avg_mkt_width10m);
            }
            if ( IncludeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(175,m_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QPSource>(m_qp_source)));
            if ( IncludeSrcTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(181,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(184,m_net_timestamp);
            }
            if ( IncludeSmsTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(187,m_sms_timestamp);
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
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_ask_size);
            }
            if ( IncludeBidTakeProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_bid_take_prob);
            }
            if ( IncludeAskTakeProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ask_take_prob);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_take_rv)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_take_rv)));
            if ( IncludeBidImprPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_bid_impr_price);
            }
            if ( IncludeAskImprPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_ask_impr_price);
            }
            if ( IncludeBidTkImProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_bid_tk_im_prob);
            }
            if ( IncludeAskTkImProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_ask_tk_im_prob);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_bid_tk_im_rv)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>(m_ask_tk_im_rv)));
            if ( IncludeMidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_mid_price);
            }
            if ( IncludeAvgBidLink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_avg_bid_link1m);
            }
            if ( IncludeMaeBidLink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_mae_bid_link1m);
            }
            if ( IncludeAvgAskLink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_avg_ask_link1m);
            }
            if ( IncludeMaeAskLink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_mae_ask_link1m);
            }
            if ( IncludeAvgBidLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_avg_bid_link10m);
            }
            if ( IncludeMaeBidLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_mae_bid_link10m);
            }
            if ( IncludeAvgAskLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_avg_ask_link10m);
            }
            if ( IncludeMaeAskLink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_mae_ask_link10m);
            }
            if ( IncludeAvgMktWidth1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_avg_mkt_width1m);
            }
            if ( IncludeAvgMktWidth10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_avg_mkt_width10m);
            }
            if ( IncludeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,175,m_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,178,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QPSource>(m_qp_source)));
            if ( IncludeSrcTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,181,m_src_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,184,m_net_timestamp);
            }
            if ( IncludeSmsTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,187,m_sms_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_take_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_take_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_take_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_take_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_impr_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_impr_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_tk_im_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_tk_im_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_bid_tk_im_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ask_tk_im_rv = static_cast<spiderrock::protobuf::api::PredictResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_bid_link1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_bid_link1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_ask_link1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_ask_link1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_bid_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_bid_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_ask_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_ask_link10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_mkt_width1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_mkt_width10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 178: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_qp_source = static_cast<spiderrock::protobuf::api::QPSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_src_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 187: {
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

    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::_meta>() const { return StockQuoteProbability::_meta{ m__meta}; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::pkey>() const { return StockQuoteProbability::pkey{ m_pkey}; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_price>() const { return m_bid_price; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_price>() const { return m_ask_price; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_size>() const { return m_bid_size; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_size>() const { return m_ask_size; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_take_prob>() const { return m_bid_take_prob; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_take_prob>() const { return m_ask_take_prob; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_take_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_bid_take_rv)); }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_take_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_ask_take_rv)); }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_impr_price>() const { return m_bid_impr_price; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_impr_price>() const { return m_ask_impr_price; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_tk_im_prob>() const { return m_bid_tk_im_prob; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_tk_im_prob>() const { return m_ask_tk_im_prob; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::bid_tk_im_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_bid_tk_im_rv)); }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::ask_tk_im_rv>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PredictResult>( m_ask_tk_im_rv)); }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::mid_price>() const { return m_mid_price; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::avg_bid_link1m>() const { return m_avg_bid_link1m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::mae_bid_link1m>() const { return m_mae_bid_link1m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::avg_ask_link1m>() const { return m_avg_ask_link1m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::mae_ask_link1m>() const { return m_mae_ask_link1m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::avg_bid_link10m>() const { return m_avg_bid_link10m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::mae_bid_link10m>() const { return m_mae_bid_link10m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::avg_ask_link10m>() const { return m_avg_ask_link10m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::mae_ask_link10m>() const { return m_mae_ask_link10m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::avg_mkt_width1m>() const { return m_avg_mkt_width1m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::avg_mkt_width10m>() const { return m_avg_mkt_width10m; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::counter>() const { return m_counter; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::qp_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::QPSource>( m_qp_source)); }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::src_timestamp>() const { return m_src_timestamp; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto StockQuoteProbability::get<StockQuoteProbability::sms_timestamp>() const { return m_sms_timestamp; }
    template<> inline const auto StockQuoteProbability_PKey::get<StockQuoteProbability_PKey::ticker>() const { return StockQuoteProbability_PKey::ticker{m_ticker}; }
    template<> inline const auto StockQuoteProbability_PKey::get<StockQuoteProbability_PKey::state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockQuoteProbability_PKey& m) {
        o << "\"ticker\":{" << m.get<StockQuoteProbability_PKey::ticker>() << "}";
        o << ",\"state_model\":" << (int64_t)m.get<StockQuoteProbability_PKey::state_model>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockQuoteProbability& m) {
        o << "\"_meta\":{" << m.get<StockQuoteProbability::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockQuoteProbability::pkey>() << "}";
        o << ",\"bid_price\":" << m.get<StockQuoteProbability::bid_price>();
        o << ",\"ask_price\":" << m.get<StockQuoteProbability::ask_price>();
        o << ",\"bid_size\":" << m.get<StockQuoteProbability::bid_size>();
        o << ",\"ask_size\":" << m.get<StockQuoteProbability::ask_size>();
        o << ",\"bid_take_prob\":" << m.get<StockQuoteProbability::bid_take_prob>();
        o << ",\"ask_take_prob\":" << m.get<StockQuoteProbability::ask_take_prob>();
        o << ",\"bid_take_rv\":" << (int64_t)m.get<StockQuoteProbability::bid_take_rv>();
        o << ",\"ask_take_rv\":" << (int64_t)m.get<StockQuoteProbability::ask_take_rv>();
        o << ",\"bid_impr_price\":" << m.get<StockQuoteProbability::bid_impr_price>();
        o << ",\"ask_impr_price\":" << m.get<StockQuoteProbability::ask_impr_price>();
        o << ",\"bid_tk_im_prob\":" << m.get<StockQuoteProbability::bid_tk_im_prob>();
        o << ",\"ask_tk_im_prob\":" << m.get<StockQuoteProbability::ask_tk_im_prob>();
        o << ",\"bid_tk_im_rv\":" << (int64_t)m.get<StockQuoteProbability::bid_tk_im_rv>();
        o << ",\"ask_tk_im_rv\":" << (int64_t)m.get<StockQuoteProbability::ask_tk_im_rv>();
        o << ",\"mid_price\":" << m.get<StockQuoteProbability::mid_price>();
        o << ",\"avg_bid_link1m\":" << m.get<StockQuoteProbability::avg_bid_link1m>();
        o << ",\"mae_bid_link1m\":" << m.get<StockQuoteProbability::mae_bid_link1m>();
        o << ",\"avg_ask_link1m\":" << m.get<StockQuoteProbability::avg_ask_link1m>();
        o << ",\"mae_ask_link1m\":" << m.get<StockQuoteProbability::mae_ask_link1m>();
        o << ",\"avg_bid_link10m\":" << m.get<StockQuoteProbability::avg_bid_link10m>();
        o << ",\"mae_bid_link10m\":" << m.get<StockQuoteProbability::mae_bid_link10m>();
        o << ",\"avg_ask_link10m\":" << m.get<StockQuoteProbability::avg_ask_link10m>();
        o << ",\"mae_ask_link10m\":" << m.get<StockQuoteProbability::mae_ask_link10m>();
        o << ",\"avg_mkt_width1m\":" << m.get<StockQuoteProbability::avg_mkt_width1m>();
        o << ",\"avg_mkt_width10m\":" << m.get<StockQuoteProbability::avg_mkt_width10m>();
        o << ",\"counter\":" << m.get<StockQuoteProbability::counter>();
        o << ",\"qp_source\":" << (int64_t)m.get<StockQuoteProbability::qp_source>();
        o << ",\"src_timestamp\":" << m.get<StockQuoteProbability::src_timestamp>();
        o << ",\"net_timestamp\":" << m.get<StockQuoteProbability::net_timestamp>();
        o << ",\"sms_timestamp\":" << m.get<StockQuoteProbability::sms_timestamp>();
        return o;
    }

}
}
}