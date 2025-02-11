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

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

    #ifndef _contract_spec_code__GUARD__
    #define _contract_spec_code__GUARD__
    DECL_STRONG_TYPE(contract_spec_code, string);
    #endif//_contract_spec_code__GUARD__

    #ifndef _contract_size__double__GUARD__
    #define _contract_size__double__GUARD__
    DECL_STRONG_TYPE(contract_size__double, double);
    #endif//_contract_size__double__GUARD__

    #ifndef _contract_multipler__GUARD__
    #define _contract_multipler__GUARD__
    DECL_STRONG_TYPE(contract_multipler, double);
    #endif//_contract_multipler__GUARD__

    #ifndef _shares_per_contract__GUARD__
    #define _shares_per_contract__GUARD__
    DECL_STRONG_TYPE(shares_per_contract, float);
    #endif//_shares_per_contract__GUARD__

    #ifndef _exercise_type__GUARD__
    #define _exercise_type__GUARD__
    DECL_STRONG_TYPE(exercise_type, spiderrock::protobuf::api::ExerciseType);
    #endif//_exercise_type__GUARD__

    #ifndef _physical_settlement__GUARD__
    #define _physical_settlement__GUARD__
    DECL_STRONG_TYPE(physical_settlement, spiderrock::protobuf::api::YesNo);
    #endif//_physical_settlement__GUARD__

    #ifndef _has_adjustment__GUARD__
    #define _has_adjustment__GUARD__
    DECL_STRONG_TYPE(has_adjustment, spiderrock::protobuf::api::YesNo);
    #endif//_has_adjustment__GUARD__

    #ifndef _multihedge_type__GUARD__
    #define _multihedge_type__GUARD__
    DECL_STRONG_TYPE(multihedge_type, spiderrock::protobuf::api::Multihedge);
    #endif//_multihedge_type__GUARD__

    #ifndef _und_isin__GUARD__
    #define _und_isin__GUARD__
    DECL_STRONG_TYPE(und_isin, string);
    #endif//_und_isin__GUARD__

    #ifndef _composite_tkey__GUARD__
    #define _composite_tkey__GUARD__
    DECL_STRONG_TYPE(composite_tkey, TickerKey);
    #endif//_composite_tkey__GUARD__

    #ifndef _exchange__OptExch__GUARD__
    #define _exchange__OptExch__GUARD__
    DECL_STRONG_TYPE(exchange__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_exchange__OptExch__GUARD__

    #ifndef _native_exch_symbol__GUARD__
    #define _native_exch_symbol__GUARD__
    DECL_STRONG_TYPE(native_exch_symbol, string);
    #endif//_native_exch_symbol__GUARD__

    #ifndef _product_isin__GUARD__
    #define _product_isin__GUARD__
    DECL_STRONG_TYPE(product_isin, string);
    #endif//_product_isin__GUARD__

    #ifndef _shares_per_contract__GUARD__
    #define _shares_per_contract__GUARD__
    DECL_STRONG_TYPE(shares_per_contract, float);
    #endif//_shares_per_contract__GUARD__

    #ifndef _native_exch_symbol__GUARD__
    #define _native_exch_symbol__GUARD__
    DECL_STRONG_TYPE(native_exch_symbol, string);
    #endif//_native_exch_symbol__GUARD__

    #ifndef _activ_symbology__GUARD__
    #define _activ_symbology__GUARD__
    DECL_STRONG_TYPE(activ_symbology, string);
    #endif//_activ_symbology__GUARD__

    
    class RegionalOptionComposite_PKey {
        public:
        //using statements for all types used in this class
        using und_isin = spiderrock::protobuf::api::und_isin;
        using composite_tkey = spiderrock::protobuf::api::composite_tkey;

        private:
        und_isin m_und_isin{};
        composite_tkey m_composite_tkey{};

        public:
        und_isin get_und_isin() const {
            return m_und_isin;
        }
		composite_tkey get_composite_tkey() const {
            return m_composite_tkey;
        }
        void set_und_isin(const und_isin& value)  {
            m_und_isin = value;
        }
        void set_composite_tkey(const composite_tkey& value)  {
            m_composite_tkey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const und_isin & value) { set_und_isin(value); }
        void set(const composite_tkey & value) { set_composite_tkey(value); }


        RegionalOptionComposite_PKey() {}

        virtual ~RegionalOptionComposite_PKey() {
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
        bool IncludeUndIsin() const {
            return !(m_und_isin.empty());
        }
        bool IncludeCompositeTkey() const {
            return (m_composite_tkey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeUndIsin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_und_isin);
            }
            if ( IncludeCompositeTkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_composite_tkey;
                m_composite_tkey.setCodecTickerKey(tickerKeyLayout_composite_tkey);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(11,tickerKeyLayout_composite_tkey);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeUndIsin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_und_isin));
            }
            if ( IncludeCompositeTkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_composite_tkey;
                m_composite_tkey.setCodecTickerKey(tickerKeyLayout_composite_tkey);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 11, tickerKeyLayout_composite_tkey);
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
                    case 10: {m_und_isin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_composite_tkey.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    
    class RegionalOptionComposite_Contributors {
        public:
        //using statements for all types used in this class
        using exchange = spiderrock::protobuf::api::exchange__OptExch;
        using native_exch_symbol = spiderrock::protobuf::api::native_exch_symbol;
        using product_isin = spiderrock::protobuf::api::product_isin;

        private:
        exchange m_exchange{};
        native_exch_symbol m_native_exch_symbol{};
        product_isin m_product_isin{};

        public:
        exchange get_exchange() const {
            return m_exchange;
        }
        native_exch_symbol get_native_exch_symbol() const {
            return m_native_exch_symbol;
        }
        product_isin get_product_isin() const {
            return m_product_isin;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        void set_native_exch_symbol(const native_exch_symbol& value)  {
            m_native_exch_symbol = value;
        }
        void set_product_isin(const product_isin& value)  {
            m_product_isin = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite_Contributors::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite_Contributors::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exchange & value) { set_exchange(value); }
        void set(const native_exch_symbol & value) { set_native_exch_symbol(value); }
        void set(const product_isin & value) { set_product_isin(value); }


        RegionalOptionComposite_Contributors() {}

        virtual ~RegionalOptionComposite_Contributors() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exchange)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(111,m_native_exch_symbol);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_product_isin);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,110,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exchange)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,111,static_cast<string>(m_native_exch_symbol));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_product_isin));
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
                    case 110: {m_exchange = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 111: {m_native_exch_symbol = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 112: {m_product_isin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class RegionalOptionComposite_MultihedgeUnderlying {
        public:
        //using statements for all types used in this class
        using shares_per_contract = spiderrock::protobuf::api::shares_per_contract;
        using native_exch_symbol = spiderrock::protobuf::api::native_exch_symbol;
        using activ_symbology = spiderrock::protobuf::api::activ_symbology;

        private:
        shares_per_contract m_shares_per_contract{};
        native_exch_symbol m_native_exch_symbol{};
        activ_symbology m_activ_symbology{};

        public:
        shares_per_contract get_shares_per_contract() const {
            return m_shares_per_contract;
        }
        native_exch_symbol get_native_exch_symbol() const {
            return m_native_exch_symbol;
        }
        activ_symbology get_activ_symbology() const {
            return m_activ_symbology;
        }
        void set_shares_per_contract(const shares_per_contract& value)  {
            m_shares_per_contract = value;
        }
        void set_native_exch_symbol(const native_exch_symbol& value)  {
            m_native_exch_symbol = value;
        }
        void set_activ_symbology(const activ_symbology& value)  {
            m_activ_symbology = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite_MultihedgeUnderlying::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite_MultihedgeUnderlying::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const shares_per_contract & value) { set_shares_per_contract(value); }
        void set(const native_exch_symbol & value) { set_native_exch_symbol(value); }
        void set(const activ_symbology & value) { set_activ_symbology(value); }


        RegionalOptionComposite_MultihedgeUnderlying() {}

        virtual ~RegionalOptionComposite_MultihedgeUnderlying() {
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
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(114,m_shares_per_contract);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_native_exch_symbol);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(116,m_activ_symbology);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,114,m_shares_per_contract);
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_native_exch_symbol));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,116,static_cast<string>(m_activ_symbology));
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
                    case 114: {m_shares_per_contract = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                    case 115: {m_native_exch_symbol = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 116: {m_activ_symbology = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RegionalOptionComposite {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RegionalOptionComposite_PKey;
        using currency = spiderrock::protobuf::api::currency;
        using contract_spec_code = spiderrock::protobuf::api::contract_spec_code;
        using contract_size = spiderrock::protobuf::api::contract_size__double;
        using contract_multipler = spiderrock::protobuf::api::contract_multipler;
        using shares_per_contract = spiderrock::protobuf::api::shares_per_contract;
        using exercise_type = spiderrock::protobuf::api::exercise_type;
        using physical_settlement = spiderrock::protobuf::api::physical_settlement;
        using has_adjustment = spiderrock::protobuf::api::has_adjustment;
        using multihedge_type = spiderrock::protobuf::api::multihedge_type;
        using contributors = spiderrock::protobuf::api::RegionalOptionComposite_Contributors;
        using multihedge_underlying = spiderrock::protobuf::api::RegionalOptionComposite_MultihedgeUnderlying;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        currency m_currency{};
        contract_spec_code m_contract_spec_code{};
        contract_size m_contract_size{};
        contract_multipler m_contract_multipler{};
        shares_per_contract m_shares_per_contract{};
        exercise_type m_exercise_type{};
        physical_settlement m_physical_settlement{};
        has_adjustment m_has_adjustment{};
        multihedge_type m_multihedge_type{};
        std::vector<contributors> m_contributors{};
        std::vector<multihedge_underlying> m_multihedge_underlying{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        currency get_currency() const {
            return m_currency;
        }		
        contract_spec_code get_contract_spec_code() const {
            return m_contract_spec_code;
        }		
        contract_size get_contract_size() const {
            return m_contract_size;
        }		
        contract_multipler get_contract_multipler() const {
            return m_contract_multipler;
        }		
        shares_per_contract get_shares_per_contract() const {
            return m_shares_per_contract;
        }		
        exercise_type get_exercise_type() const {
            return m_exercise_type;
        }		
        physical_settlement get_physical_settlement() const {
            return m_physical_settlement;
        }		
        has_adjustment get_has_adjustment() const {
            return m_has_adjustment;
        }		
        multihedge_type get_multihedge_type() const {
            return m_multihedge_type;
        }
        const std::vector<contributors>& get_contributors_list() const {
            return m_contributors;
        }
        const contributors& get_contributors(const int i) const {
            return m_contributors.at(i);
        }
        const std::vector<multihedge_underlying>& get_multihedge_underlying_list() const {
            return m_multihedge_underlying;
        }
        const multihedge_underlying& get_multihedge_underlying(const int i) const {
            return m_multihedge_underlying.at(i);
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
        void set_currency(const currency& value)  {
            m_currency = value;
        }
        void set_contract_spec_code(const contract_spec_code& value)  {
            m_contract_spec_code = value;
        }
        void set_contract_size(const contract_size& value)  {
            m_contract_size = value;
        }
        void set_contract_multipler(const contract_multipler& value)  {
            m_contract_multipler = value;
        }
        void set_shares_per_contract(const shares_per_contract& value)  {
            m_shares_per_contract = value;
        }
        void set_exercise_type(const exercise_type& value)  {
            m_exercise_type = value;
        }
        void set_physical_settlement(const physical_settlement& value)  {
            m_physical_settlement = value;
        }
        void set_has_adjustment(const has_adjustment& value)  {
            m_has_adjustment = value;
        }
        void set_multihedge_type(const multihedge_type& value)  {
            m_multihedge_type = value;
        }
        void set_contributors_list(const std::vector<contributors>& list)  {
            m_contributors = list;
        }
        void add_contributors(const contributors& item) {
            m_contributors.emplace_back(item);
        }
        void set_multihedge_underlying_list(const std::vector<multihedge_underlying>& list)  {
            m_multihedge_underlying = list;
        }
        void add_multihedge_underlying(const multihedge_underlying& item) {
            m_multihedge_underlying.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalOptionComposite::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const currency & value) {
            set_currency(value);
        }
        void set(const contract_spec_code & value) {
            set_contract_spec_code(value);
        }
        void set(const contract_size & value) {
            set_contract_size(value);
        }
        void set(const contract_multipler & value) {
            set_contract_multipler(value);
        }
        void set(const shares_per_contract & value) {
            set_shares_per_contract(value);
        }
        void set(const exercise_type & value) {
            set_exercise_type(value);
        }
        void set(const physical_settlement & value) {
            set_physical_settlement(value);
        }
        void set(const has_adjustment & value) {
            set_has_adjustment(value);
        }
        void set(const multihedge_type & value) {
            set_multihedge_type(value);
        }
        void set(const contributors & value) {
            add_contributors(value);
        }
        void set(const multihedge_underlying & value) {
            add_multihedge_underlying(value);
        }

        void set(const RegionalOptionComposite & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_currency);
            set(value.m_contract_spec_code);
            set(value.m_contract_size);
            set(value.m_contract_multipler);
            set(value.m_shares_per_contract);
            set(value.m_exercise_type);
            set(value.m_physical_settlement);
            set(value.m_has_adjustment);
            set(value.m_multihedge_type);set_contributors_list(value.m_contributors);set_multihedge_underlying_list(value.m_multihedge_underlying);
        }

        RegionalOptionComposite() {
            m__meta.set_message_type("RegionalOptionComposite");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4405, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4405, length);
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
             *this = RegionalOptionComposite{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeContractSpecCode() const {
            return !(m_contract_spec_code.empty());
        }
        bool IncludeContractSize() const {
            return !(m_contract_size == 0.0);
        }
        bool IncludeContractMultipler() const {
            return !(m_contract_multipler == 0.0);
        }
        bool IncludeSharesPerContract() const {
            return !(m_shares_per_contract == 0.0);
        }
        bool IncludeContributors() const {
            return (!m_contributors.empty());
        }
        bool IncludeMultihedgeUnderlying() const {
            return (!m_multihedge_underlying.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeContractSpecCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(101,m_contract_spec_code);
            }
            if ( IncludeContractSize()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(102,m_contract_size);
            }
            if ( IncludeContractMultipler()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_contract_multipler);
            }
            if ( IncludeSharesPerContract()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(104,m_shares_per_contract);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_exercise_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_physical_settlement)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_adjustment)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge_type)));
            if ( IncludeContributors()) {
                for (auto& item : m_contributors) {
					totalSize += SRProtobufCPP::TagCodec::Size(109, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeMultihedgeUnderlying()) {
                for (auto& item : m_multihedge_underlying) {
					totalSize += SRProtobufCPP::TagCodec::Size(113, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeContractSpecCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,101,static_cast<string>(m_contract_spec_code));
            }
            if ( IncludeContractSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,102,m_contract_size);
            }
            if ( IncludeContractMultipler()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_contract_multipler);
            }
            if ( IncludeSharesPerContract()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,104,m_shares_per_contract);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,105,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_exercise_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_physical_settlement)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_adjustment)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>(m_multihedge_type)));
            if ( IncludeContributors()) {
                for (auto& item : m_contributors) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 109, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeMultihedgeUnderlying()) {
                for (auto& item : m_multihedge_underlying) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 113, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contract_spec_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_contract_size = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_contract_multipler = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_shares_per_contract = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 105: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_exercise_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_physical_settlement = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_adjustment = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_multihedge_type = static_cast<spiderrock::protobuf::api::Multihedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            contributors item_contributors;
                            item_contributors.Decode(pos, pos+length);  
                            m_contributors.emplace_back(item_contributors);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            multihedge_underlying item_multihedge_underlying;
                            item_multihedge_underlying.Decode(pos, pos+length);  
                            m_multihedge_underlying.emplace_back(item_multihedge_underlying);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::_meta>() const { return RegionalOptionComposite::_meta{ m__meta}; }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::pkey>() const { return RegionalOptionComposite::pkey{ m_pkey}; }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_currency)); }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::contract_spec_code>() const { return m_contract_spec_code; }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::contract_size>() const { return m_contract_size; }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::contract_multipler>() const { return m_contract_multipler; }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::shares_per_contract>() const { return m_shares_per_contract; }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::exercise_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_exercise_type)); }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::physical_settlement>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_physical_settlement)); }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::has_adjustment>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_adjustment)); }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::multihedge_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Multihedge>( m_multihedge_type)); }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::contributors>(int i) const { return RegionalOptionComposite::contributors{ get_contributors(i)}; }
    template<> inline int RegionalOptionComposite::count<RegionalOptionComposite::contributors>() const { return static_cast<int>( m_contributors.size()); }
    template<> inline const auto RegionalOptionComposite::get<RegionalOptionComposite::multihedge_underlying>(int i) const { return RegionalOptionComposite::multihedge_underlying{ get_multihedge_underlying(i)}; }
    template<> inline int RegionalOptionComposite::count<RegionalOptionComposite::multihedge_underlying>() const { return static_cast<int>( m_multihedge_underlying.size()); }
    template<> inline const auto RegionalOptionComposite_PKey::get<RegionalOptionComposite_PKey::und_isin>() const { return m_und_isin; }
    template<> inline const auto RegionalOptionComposite_PKey::get<RegionalOptionComposite_PKey::composite_tkey>() const { return RegionalOptionComposite_PKey::composite_tkey{m_composite_tkey}; }
    
    template<> inline const auto RegionalOptionComposite_Contributors::get<RegionalOptionComposite_Contributors::exchange>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_exchange));}
    template<> inline const auto RegionalOptionComposite_Contributors::get<RegionalOptionComposite_Contributors::native_exch_symbol>() const { return m_native_exch_symbol; }
    template<> inline const auto RegionalOptionComposite_Contributors::get<RegionalOptionComposite_Contributors::product_isin>() const { return m_product_isin; }
    
    template<> inline const auto RegionalOptionComposite_MultihedgeUnderlying::get<RegionalOptionComposite_MultihedgeUnderlying::shares_per_contract>() const { return m_shares_per_contract; }
    template<> inline const auto RegionalOptionComposite_MultihedgeUnderlying::get<RegionalOptionComposite_MultihedgeUnderlying::native_exch_symbol>() const { return m_native_exch_symbol; }
    template<> inline const auto RegionalOptionComposite_MultihedgeUnderlying::get<RegionalOptionComposite_MultihedgeUnderlying::activ_symbology>() const { return m_activ_symbology; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RegionalOptionComposite_PKey& m) {
        o << "\"und_isin\":\"" << m.get<RegionalOptionComposite_PKey::und_isin>() << "\"";
        o << ",\"composite_tkey\":{" << m.get<RegionalOptionComposite_PKey::composite_tkey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RegionalOptionComposite_Contributors& m) {
        o << "\"exchange\":" << (int64_t)m.get<RegionalOptionComposite_Contributors::exchange>();
        o << ",\"native_exch_symbol\":\"" << m.get<RegionalOptionComposite_Contributors::native_exch_symbol>() << "\"";
        o << ",\"product_isin\":\"" << m.get<RegionalOptionComposite_Contributors::product_isin>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RegionalOptionComposite_MultihedgeUnderlying& m) {
        o << "\"shares_per_contract\":" << m.get<RegionalOptionComposite_MultihedgeUnderlying::shares_per_contract>();
        o << ",\"native_exch_symbol\":\"" << m.get<RegionalOptionComposite_MultihedgeUnderlying::native_exch_symbol>() << "\"";
        o << ",\"activ_symbology\":\"" << m.get<RegionalOptionComposite_MultihedgeUnderlying::activ_symbology>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RegionalOptionComposite& m) {
        o << "\"_meta\":{" << m.get<RegionalOptionComposite::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RegionalOptionComposite::pkey>() << "}";
        o << ",\"currency\":" << (int64_t)m.get<RegionalOptionComposite::currency>();
        o << ",\"contract_spec_code\":\"" << m.get<RegionalOptionComposite::contract_spec_code>() << "\"";
        o << ",\"contract_size\":" << m.get<RegionalOptionComposite::contract_size>();
        o << ",\"contract_multipler\":" << m.get<RegionalOptionComposite::contract_multipler>();
        o << ",\"shares_per_contract\":" << m.get<RegionalOptionComposite::shares_per_contract>();
        o << ",\"exercise_type\":" << (int64_t)m.get<RegionalOptionComposite::exercise_type>();
        o << ",\"physical_settlement\":" << (int64_t)m.get<RegionalOptionComposite::physical_settlement>();
        o << ",\"has_adjustment\":" << (int64_t)m.get<RegionalOptionComposite::has_adjustment>();
        o << ",\"multihedge_type\":" << (int64_t)m.get<RegionalOptionComposite::multihedge_type>();
        o << ",\"contributors\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<RegionalOptionComposite::contributors>(); ++i) {
                o << delim << m.get<RegionalOptionComposite::contributors>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"multihedge_underlying\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<RegionalOptionComposite::multihedge_underlying>(); ++i) {
                o << delim << m.get<RegionalOptionComposite::multihedge_underlying>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}