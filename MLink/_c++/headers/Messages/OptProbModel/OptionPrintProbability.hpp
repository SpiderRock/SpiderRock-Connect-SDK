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

    #ifndef _prt_price__float__GUARD__
    #define _prt_price__float__GUARD__
    DECL_STRONG_TYPE(prt_price__float, float);
    #endif//_prt_price__float__GUARD__

    #ifndef _prt_size__GUARD__
    #define _prt_size__GUARD__
    DECL_STRONG_TYPE(prt_size, int32);
    #endif//_prt_size__GUARD__

    #ifndef _prt_prob__GUARD__
    #define _prt_prob__GUARD__
    DECL_STRONG_TYPE(prt_prob, float);
    #endif//_prt_prob__GUARD__

    #ifndef _prt_side__BuySell__GUARD__
    #define _prt_side__BuySell__GUARD__
    DECL_STRONG_TYPE(prt_side__BuySell, spiderrock::protobuf::api::BuySell);
    #endif//_prt_side__BuySell__GUARD__

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

    #ifndef _avg_blink1m__GUARD__
    #define _avg_blink1m__GUARD__
    DECL_STRONG_TYPE(avg_blink1m, float);
    #endif//_avg_blink1m__GUARD__

    #ifndef _mae_blink1m__GUARD__
    #define _mae_blink1m__GUARD__
    DECL_STRONG_TYPE(mae_blink1m, float);
    #endif//_mae_blink1m__GUARD__

    #ifndef _avg_slink1m__GUARD__
    #define _avg_slink1m__GUARD__
    DECL_STRONG_TYPE(avg_slink1m, float);
    #endif//_avg_slink1m__GUARD__

    #ifndef _mae_slink1m__GUARD__
    #define _mae_slink1m__GUARD__
    DECL_STRONG_TYPE(mae_slink1m, float);
    #endif//_mae_slink1m__GUARD__

    #ifndef _avg_blink10m__GUARD__
    #define _avg_blink10m__GUARD__
    DECL_STRONG_TYPE(avg_blink10m, float);
    #endif//_avg_blink10m__GUARD__

    #ifndef _mae_blink10m__GUARD__
    #define _mae_blink10m__GUARD__
    DECL_STRONG_TYPE(mae_blink10m, float);
    #endif//_mae_blink10m__GUARD__

    #ifndef _avg_slink10m__GUARD__
    #define _avg_slink10m__GUARD__
    DECL_STRONG_TYPE(avg_slink10m, float);
    #endif//_avg_slink10m__GUARD__

    #ifndef _mae_slink10m__GUARD__
    #define _mae_slink10m__GUARD__
    DECL_STRONG_TYPE(mae_slink10m, float);
    #endif//_mae_slink10m__GUARD__

    #ifndef _b_counter__GUARD__
    #define _b_counter__GUARD__
    DECL_STRONG_TYPE(b_counter, int32);
    #endif//_b_counter__GUARD__

    #ifndef _s_counter__GUARD__
    #define _s_counter__GUARD__
    DECL_STRONG_TYPE(s_counter, int32);
    #endif//_s_counter__GUARD__

    #ifndef _prt_timestamp__GUARD__
    #define _prt_timestamp__GUARD__
    DECL_STRONG_TYPE(prt_timestamp, int64);
    #endif//_prt_timestamp__GUARD__

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

    
    class OptionPrintProbability_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using state_model = spiderrock::protobuf::api::state_model;

        private:
        okey m_okey{};
        state_model m_state_model{};

        public:
		okey get_okey() const {
            return m_okey;
        }
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintProbability_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintProbability_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const state_model & value) { set_state_model(value); }


        OptionPrintProbability_PKey() {}

        virtual ~OptionPrintProbability_PKey() {
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
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_okey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_okey);
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
    

    class OptionPrintProbability {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPrintProbability_PKey;
        using prt_price = spiderrock::protobuf::api::prt_price__float;
        using prt_size = spiderrock::protobuf::api::prt_size;
        using prt_prob = spiderrock::protobuf::api::prt_prob;
        using prt_side = spiderrock::protobuf::api::prt_side__BuySell;
        using bid_price = spiderrock::protobuf::api::bid_price__float;
        using ask_price = spiderrock::protobuf::api::ask_price__float;
        using bid_size = spiderrock::protobuf::api::bid_size__int32;
        using ask_size = spiderrock::protobuf::api::ask_size__int32;
        using avg_blink1m = spiderrock::protobuf::api::avg_blink1m;
        using mae_blink1m = spiderrock::protobuf::api::mae_blink1m;
        using avg_slink1m = spiderrock::protobuf::api::avg_slink1m;
        using mae_slink1m = spiderrock::protobuf::api::mae_slink1m;
        using avg_blink10m = spiderrock::protobuf::api::avg_blink10m;
        using mae_blink10m = spiderrock::protobuf::api::mae_blink10m;
        using avg_slink10m = spiderrock::protobuf::api::avg_slink10m;
        using mae_slink10m = spiderrock::protobuf::api::mae_slink10m;
        using b_counter = spiderrock::protobuf::api::b_counter;
        using s_counter = spiderrock::protobuf::api::s_counter;
        using prt_timestamp = spiderrock::protobuf::api::prt_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using sms_timestamp = spiderrock::protobuf::api::sms_timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        prt_price m_prt_price{};
        prt_size m_prt_size{};
        prt_prob m_prt_prob{};
        prt_side m_prt_side{};
        bid_price m_bid_price{};
        ask_price m_ask_price{};
        bid_size m_bid_size{};
        ask_size m_ask_size{};
        avg_blink1m m_avg_blink1m{};
        mae_blink1m m_mae_blink1m{};
        avg_slink1m m_avg_slink1m{};
        mae_slink1m m_mae_slink1m{};
        avg_blink10m m_avg_blink10m{};
        mae_blink10m m_mae_blink10m{};
        avg_slink10m m_avg_slink10m{};
        mae_slink10m m_mae_slink10m{};
        b_counter m_b_counter{};
        s_counter m_s_counter{};
        prt_timestamp m_prt_timestamp{};
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
        prt_price get_prt_price() const {
            return m_prt_price;
        }		
        prt_size get_prt_size() const {
            return m_prt_size;
        }		
        prt_prob get_prt_prob() const {
            return m_prt_prob;
        }		
        prt_side get_prt_side() const {
            return m_prt_side;
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
        avg_blink1m get_avg_blink1m() const {
            return m_avg_blink1m;
        }		
        mae_blink1m get_mae_blink1m() const {
            return m_mae_blink1m;
        }		
        avg_slink1m get_avg_slink1m() const {
            return m_avg_slink1m;
        }		
        mae_slink1m get_mae_slink1m() const {
            return m_mae_slink1m;
        }		
        avg_blink10m get_avg_blink10m() const {
            return m_avg_blink10m;
        }		
        mae_blink10m get_mae_blink10m() const {
            return m_mae_blink10m;
        }		
        avg_slink10m get_avg_slink10m() const {
            return m_avg_slink10m;
        }		
        mae_slink10m get_mae_slink10m() const {
            return m_mae_slink10m;
        }		
        b_counter get_b_counter() const {
            return m_b_counter;
        }		
        s_counter get_s_counter() const {
            return m_s_counter;
        }		
        prt_timestamp get_prt_timestamp() const {
            return m_prt_timestamp;
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
        void set_prt_price(const prt_price& value)  {
            m_prt_price = value;
        }
        void set_prt_size(const prt_size& value)  {
            m_prt_size = value;
        }
        void set_prt_prob(const prt_prob& value)  {
            m_prt_prob = value;
        }
        void set_prt_side(const prt_side& value)  {
            m_prt_side = value;
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
        void set_avg_blink1m(const avg_blink1m& value)  {
            m_avg_blink1m = value;
        }
        void set_mae_blink1m(const mae_blink1m& value)  {
            m_mae_blink1m = value;
        }
        void set_avg_slink1m(const avg_slink1m& value)  {
            m_avg_slink1m = value;
        }
        void set_mae_slink1m(const mae_slink1m& value)  {
            m_mae_slink1m = value;
        }
        void set_avg_blink10m(const avg_blink10m& value)  {
            m_avg_blink10m = value;
        }
        void set_mae_blink10m(const mae_blink10m& value)  {
            m_mae_blink10m = value;
        }
        void set_avg_slink10m(const avg_slink10m& value)  {
            m_avg_slink10m = value;
        }
        void set_mae_slink10m(const mae_slink10m& value)  {
            m_mae_slink10m = value;
        }
        void set_b_counter(const b_counter& value)  {
            m_b_counter = value;
        }
        void set_s_counter(const s_counter& value)  {
            m_s_counter = value;
        }
        void set_prt_timestamp(const prt_timestamp& value)  {
            m_prt_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_sms_timestamp(const sms_timestamp& value)  {
            m_sms_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintProbability::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const prt_price & value) {
            set_prt_price(value);
        }
        void set(const prt_size & value) {
            set_prt_size(value);
        }
        void set(const prt_prob & value) {
            set_prt_prob(value);
        }
        void set(const prt_side & value) {
            set_prt_side(value);
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
        void set(const avg_blink1m & value) {
            set_avg_blink1m(value);
        }
        void set(const mae_blink1m & value) {
            set_mae_blink1m(value);
        }
        void set(const avg_slink1m & value) {
            set_avg_slink1m(value);
        }
        void set(const mae_slink1m & value) {
            set_mae_slink1m(value);
        }
        void set(const avg_blink10m & value) {
            set_avg_blink10m(value);
        }
        void set(const mae_blink10m & value) {
            set_mae_blink10m(value);
        }
        void set(const avg_slink10m & value) {
            set_avg_slink10m(value);
        }
        void set(const mae_slink10m & value) {
            set_mae_slink10m(value);
        }
        void set(const b_counter & value) {
            set_b_counter(value);
        }
        void set(const s_counter & value) {
            set_s_counter(value);
        }
        void set(const prt_timestamp & value) {
            set_prt_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const sms_timestamp & value) {
            set_sms_timestamp(value);
        }

        void set(const OptionPrintProbability & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_prt_price);
            set(value.m_prt_size);
            set(value.m_prt_prob);
            set(value.m_prt_side);
            set(value.m_bid_price);
            set(value.m_ask_price);
            set(value.m_bid_size);
            set(value.m_ask_size);
            set(value.m_avg_blink1m);
            set(value.m_mae_blink1m);
            set(value.m_avg_slink1m);
            set(value.m_mae_slink1m);
            set(value.m_avg_blink10m);
            set(value.m_mae_blink10m);
            set(value.m_avg_slink10m);
            set(value.m_mae_slink10m);
            set(value.m_b_counter);
            set(value.m_s_counter);
            set(value.m_prt_timestamp);
            set(value.m_net_timestamp);
            set(value.m_sms_timestamp);
        }

        OptionPrintProbability() {
            m__meta.set_message_type("OptionPrintProbability");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4265, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4265, length);
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
             *this = OptionPrintProbability{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludePrtPrice() const {
            return !(m_prt_price == 0.0);
        }
        bool IncludePrtSize() const {
            return !(m_prt_size == 0);
        }
        bool IncludePrtProb() const {
            return !(m_prt_prob == 0.0);
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
        bool IncludeAvgBlink1m() const {
            return !(m_avg_blink1m == 0.0);
        }
        bool IncludeMaeBlink1m() const {
            return !(m_mae_blink1m == 0.0);
        }
        bool IncludeAvgSlink1m() const {
            return !(m_avg_slink1m == 0.0);
        }
        bool IncludeMaeSlink1m() const {
            return !(m_mae_slink1m == 0.0);
        }
        bool IncludeAvgBlink10m() const {
            return !(m_avg_blink10m == 0.0);
        }
        bool IncludeMaeBlink10m() const {
            return !(m_mae_blink10m == 0.0);
        }
        bool IncludeAvgSlink10m() const {
            return !(m_avg_slink10m == 0.0);
        }
        bool IncludeMaeSlink10m() const {
            return !(m_mae_slink10m == 0.0);
        }
        bool IncludeBCounter() const {
            return !(m_b_counter == 0);
        }
        bool IncludeSCounter() const {
            return !(m_s_counter == 0);
        }
        bool IncludePrtTimestamp() const {
            return !(m_prt_timestamp == 0);
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
            if ( IncludePrtPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_prt_price);
            }
            if ( IncludePrtSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_prt_size);
            }
            if ( IncludePrtProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_prt_prob);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_prt_side)));
            if ( IncludeBidPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ask_price);
            }
            if ( IncludeBidSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_bid_size);
            }
            if ( IncludeAskSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(121,m_ask_size);
            }
            if ( IncludeAvgBlink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_avg_blink1m);
            }
            if ( IncludeMaeBlink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_mae_blink1m);
            }
            if ( IncludeAvgSlink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_avg_slink1m);
            }
            if ( IncludeMaeSlink1m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_mae_slink1m);
            }
            if ( IncludeAvgBlink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_avg_blink10m);
            }
            if ( IncludeMaeBlink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_mae_blink10m);
            }
            if ( IncludeAvgSlink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_avg_slink10m);
            }
            if ( IncludeMaeSlink10m()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_mae_slink10m);
            }
            if ( IncludeBCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_b_counter);
            }
            if ( IncludeSCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_s_counter);
            }
            if ( IncludePrtTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(154,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(157,m_net_timestamp);
            }
            if ( IncludeSmsTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(160,m_sms_timestamp);
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
            if ( IncludePrtPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_prt_price);
            }
            if ( IncludePrtSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_prt_size);
            }
            if ( IncludePrtProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_prt_prob);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_prt_side)));
            if ( IncludeBidPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_bid_price);
            }
            if ( IncludeAskPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ask_price);
            }
            if ( IncludeBidSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_bid_size);
            }
            if ( IncludeAskSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,121,m_ask_size);
            }
            if ( IncludeAvgBlink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_avg_blink1m);
            }
            if ( IncludeMaeBlink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_mae_blink1m);
            }
            if ( IncludeAvgSlink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_avg_slink1m);
            }
            if ( IncludeMaeSlink1m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_mae_slink1m);
            }
            if ( IncludeAvgBlink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_avg_blink10m);
            }
            if ( IncludeMaeBlink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_mae_blink10m);
            }
            if ( IncludeAvgSlink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_avg_slink10m);
            }
            if ( IncludeMaeSlink10m()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_mae_slink10m);
            }
            if ( IncludeBCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_b_counter);
            }
            if ( IncludeSCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_s_counter);
            }
            if ( IncludePrtTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,154,m_prt_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,157,m_net_timestamp);
            }
            if ( IncludeSmsTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,160,m_sms_timestamp);
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
                            m_prt_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_prt_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_prt_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_bid_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ask_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_blink1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_blink1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_slink1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_slink1m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_blink10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_blink10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_slink10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mae_slink10m = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_b_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_s_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_prt_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 160: {
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

    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::_meta>() const { return OptionPrintProbability::_meta{ m__meta}; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::pkey>() const { return OptionPrintProbability::pkey{ m_pkey}; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::prt_price>() const { return m_prt_price; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::prt_size>() const { return m_prt_size; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::prt_prob>() const { return m_prt_prob; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_prt_side)); }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::bid_price>() const { return m_bid_price; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::ask_price>() const { return m_ask_price; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::bid_size>() const { return m_bid_size; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::ask_size>() const { return m_ask_size; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::avg_blink1m>() const { return m_avg_blink1m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::mae_blink1m>() const { return m_mae_blink1m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::avg_slink1m>() const { return m_avg_slink1m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::mae_slink1m>() const { return m_mae_slink1m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::avg_blink10m>() const { return m_avg_blink10m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::mae_blink10m>() const { return m_mae_blink10m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::avg_slink10m>() const { return m_avg_slink10m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::mae_slink10m>() const { return m_mae_slink10m; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::b_counter>() const { return m_b_counter; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::s_counter>() const { return m_s_counter; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::prt_timestamp>() const { return m_prt_timestamp; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionPrintProbability::get<OptionPrintProbability::sms_timestamp>() const { return m_sms_timestamp; }
    template<> inline const auto OptionPrintProbability_PKey::get<OptionPrintProbability_PKey::okey>() const { return OptionPrintProbability_PKey::okey{m_okey}; }
    template<> inline const auto OptionPrintProbability_PKey::get<OptionPrintProbability_PKey::state_model>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StateModel>(m_state_model));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintProbability_PKey& m) {
        o << "\"okey\":{" << m.get<OptionPrintProbability_PKey::okey>() << "}";
        o << ",\"state_model\":" << (int64_t)m.get<OptionPrintProbability_PKey::state_model>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintProbability& m) {
        o << "\"_meta\":{" << m.get<OptionPrintProbability::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPrintProbability::pkey>() << "}";
        o << ",\"prt_price\":" << m.get<OptionPrintProbability::prt_price>();
        o << ",\"prt_size\":" << m.get<OptionPrintProbability::prt_size>();
        o << ",\"prt_prob\":" << m.get<OptionPrintProbability::prt_prob>();
        o << ",\"prt_side\":" << (int64_t)m.get<OptionPrintProbability::prt_side>();
        o << ",\"bid_price\":" << m.get<OptionPrintProbability::bid_price>();
        o << ",\"ask_price\":" << m.get<OptionPrintProbability::ask_price>();
        o << ",\"bid_size\":" << m.get<OptionPrintProbability::bid_size>();
        o << ",\"ask_size\":" << m.get<OptionPrintProbability::ask_size>();
        o << ",\"avg_blink1m\":" << m.get<OptionPrintProbability::avg_blink1m>();
        o << ",\"mae_blink1m\":" << m.get<OptionPrintProbability::mae_blink1m>();
        o << ",\"avg_slink1m\":" << m.get<OptionPrintProbability::avg_slink1m>();
        o << ",\"mae_slink1m\":" << m.get<OptionPrintProbability::mae_slink1m>();
        o << ",\"avg_blink10m\":" << m.get<OptionPrintProbability::avg_blink10m>();
        o << ",\"mae_blink10m\":" << m.get<OptionPrintProbability::mae_blink10m>();
        o << ",\"avg_slink10m\":" << m.get<OptionPrintProbability::avg_slink10m>();
        o << ",\"mae_slink10m\":" << m.get<OptionPrintProbability::mae_slink10m>();
        o << ",\"b_counter\":" << m.get<OptionPrintProbability::b_counter>();
        o << ",\"s_counter\":" << m.get<OptionPrintProbability::s_counter>();
        o << ",\"prt_timestamp\":" << m.get<OptionPrintProbability::prt_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionPrintProbability::net_timestamp>();
        o << ",\"sms_timestamp\":" << m.get<OptionPrintProbability::sms_timestamp>();
        return o;
    }

}
}
}