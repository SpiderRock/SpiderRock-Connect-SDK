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

    #ifndef _book_status__GUARD__
    #define _book_status__GUARD__
    DECL_STRONG_TYPE(book_status, spiderrock::protobuf::api::BookStatus);
    #endif//_book_status__GUARD__

    #ifndef _book_risk_multiplier__GUARD__
    #define _book_risk_multiplier__GUARD__
    DECL_STRONG_TYPE(book_risk_multiplier, float);
    #endif//_book_risk_multiplier__GUARD__

    #ifndef _max_acc_haircut__GUARD__
    #define _max_acc_haircut__GUARD__
    DECL_STRONG_TYPE(max_acc_haircut, float);
    #endif//_max_acc_haircut__GUARD__

    #ifndef _min_acc_rho__GUARD__
    #define _min_acc_rho__GUARD__
    DECL_STRONG_TYPE(min_acc_rho, float);
    #endif//_min_acc_rho__GUARD__

    #ifndef _max_acc_rho__GUARD__
    #define _max_acc_rho__GUARD__
    DECL_STRONG_TYPE(max_acc_rho, float);
    #endif//_max_acc_rho__GUARD__

    #ifndef _min_ddelta__GUARD__
    #define _min_ddelta__GUARD__
    DECL_STRONG_TYPE(min_ddelta, int32);
    #endif//_min_ddelta__GUARD__

    #ifndef _max_ddelta__GUARD__
    #define _max_ddelta__GUARD__
    DECL_STRONG_TYPE(max_ddelta, int32);
    #endif//_max_ddelta__GUARD__

    #ifndef _max_acc_abs_wt_vega__GUARD__
    #define _max_acc_abs_wt_vega__GUARD__
    DECL_STRONG_TYPE(max_acc_abs_wt_vega, float);
    #endif//_max_acc_abs_wt_vega__GUARD__

    #ifndef _min_acc_wt_vega__GUARD__
    #define _min_acc_wt_vega__GUARD__
    DECL_STRONG_TYPE(min_acc_wt_vega, float);
    #endif//_min_acc_wt_vega__GUARD__

    #ifndef _max_acc_wt_vega__GUARD__
    #define _max_acc_wt_vega__GUARD__
    DECL_STRONG_TYPE(max_acc_wt_vega, float);
    #endif//_max_acc_wt_vega__GUARD__

    #ifndef _min_ind_wt_vega__GUARD__
    #define _min_ind_wt_vega__GUARD__
    DECL_STRONG_TYPE(min_ind_wt_vega, float);
    #endif//_min_ind_wt_vega__GUARD__

    #ifndef _max_ind_wt_vega__GUARD__
    #define _max_ind_wt_vega__GUARD__
    DECL_STRONG_TYPE(max_ind_wt_vega, float);
    #endif//_max_ind_wt_vega__GUARD__

    #ifndef _min_sub_wt_vega__GUARD__
    #define _min_sub_wt_vega__GUARD__
    DECL_STRONG_TYPE(min_sub_wt_vega, float);
    #endif//_min_sub_wt_vega__GUARD__

    #ifndef _max_sub_wt_vega__GUARD__
    #define _max_sub_wt_vega__GUARD__
    DECL_STRONG_TYPE(max_sub_wt_vega, float);
    #endif//_max_sub_wt_vega__GUARD__

    #ifndef _min_grp_wt_vega__GUARD__
    #define _min_grp_wt_vega__GUARD__
    DECL_STRONG_TYPE(min_grp_wt_vega, float);
    #endif//_min_grp_wt_vega__GUARD__

    #ifndef _max_grp_wt_vega__GUARD__
    #define _max_grp_wt_vega__GUARD__
    DECL_STRONG_TYPE(max_grp_wt_vega, float);
    #endif//_max_grp_wt_vega__GUARD__

    #ifndef _user_text__GUARD__
    #define _user_text__GUARD__
    DECL_STRONG_TYPE(user_text, string);
    #endif//_user_text__GUARD__

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

    
    class BookControl_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to BookControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to BookControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        BookControl_PKey() {}

        virtual ~BookControl_PKey() {
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
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
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
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class BookControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::BookControl_PKey;
        using book_status = spiderrock::protobuf::api::book_status;
        using book_risk_multiplier = spiderrock::protobuf::api::book_risk_multiplier;
        using max_acc_haircut = spiderrock::protobuf::api::max_acc_haircut;
        using min_acc_rho = spiderrock::protobuf::api::min_acc_rho;
        using max_acc_rho = spiderrock::protobuf::api::max_acc_rho;
        using min_ddelta = spiderrock::protobuf::api::min_ddelta;
        using max_ddelta = spiderrock::protobuf::api::max_ddelta;
        using max_acc_abs_wt_vega = spiderrock::protobuf::api::max_acc_abs_wt_vega;
        using min_acc_wt_vega = spiderrock::protobuf::api::min_acc_wt_vega;
        using max_acc_wt_vega = spiderrock::protobuf::api::max_acc_wt_vega;
        using min_ind_wt_vega = spiderrock::protobuf::api::min_ind_wt_vega;
        using max_ind_wt_vega = spiderrock::protobuf::api::max_ind_wt_vega;
        using min_sub_wt_vega = spiderrock::protobuf::api::min_sub_wt_vega;
        using max_sub_wt_vega = spiderrock::protobuf::api::max_sub_wt_vega;
        using min_grp_wt_vega = spiderrock::protobuf::api::min_grp_wt_vega;
        using max_grp_wt_vega = spiderrock::protobuf::api::max_grp_wt_vega;
        using user_text = spiderrock::protobuf::api::user_text;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        book_status m_book_status{};
        book_risk_multiplier m_book_risk_multiplier{};
        max_acc_haircut m_max_acc_haircut{};
        min_acc_rho m_min_acc_rho{};
        max_acc_rho m_max_acc_rho{};
        min_ddelta m_min_ddelta{};
        max_ddelta m_max_ddelta{};
        max_acc_abs_wt_vega m_max_acc_abs_wt_vega{};
        min_acc_wt_vega m_min_acc_wt_vega{};
        max_acc_wt_vega m_max_acc_wt_vega{};
        min_ind_wt_vega m_min_ind_wt_vega{};
        max_ind_wt_vega m_max_ind_wt_vega{};
        min_sub_wt_vega m_min_sub_wt_vega{};
        max_sub_wt_vega m_max_sub_wt_vega{};
        min_grp_wt_vega m_min_grp_wt_vega{};
        max_grp_wt_vega m_max_grp_wt_vega{};
        user_text m_user_text{};
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
        book_status get_book_status() const {
            return m_book_status;
        }		
        book_risk_multiplier get_book_risk_multiplier() const {
            return m_book_risk_multiplier;
        }		
        max_acc_haircut get_max_acc_haircut() const {
            return m_max_acc_haircut;
        }		
        min_acc_rho get_min_acc_rho() const {
            return m_min_acc_rho;
        }		
        max_acc_rho get_max_acc_rho() const {
            return m_max_acc_rho;
        }		
        min_ddelta get_min_ddelta() const {
            return m_min_ddelta;
        }		
        max_ddelta get_max_ddelta() const {
            return m_max_ddelta;
        }		
        max_acc_abs_wt_vega get_max_acc_abs_wt_vega() const {
            return m_max_acc_abs_wt_vega;
        }		
        min_acc_wt_vega get_min_acc_wt_vega() const {
            return m_min_acc_wt_vega;
        }		
        max_acc_wt_vega get_max_acc_wt_vega() const {
            return m_max_acc_wt_vega;
        }		
        min_ind_wt_vega get_min_ind_wt_vega() const {
            return m_min_ind_wt_vega;
        }		
        max_ind_wt_vega get_max_ind_wt_vega() const {
            return m_max_ind_wt_vega;
        }		
        min_sub_wt_vega get_min_sub_wt_vega() const {
            return m_min_sub_wt_vega;
        }		
        max_sub_wt_vega get_max_sub_wt_vega() const {
            return m_max_sub_wt_vega;
        }		
        min_grp_wt_vega get_min_grp_wt_vega() const {
            return m_min_grp_wt_vega;
        }		
        max_grp_wt_vega get_max_grp_wt_vega() const {
            return m_max_grp_wt_vega;
        }		
        user_text get_user_text() const {
            return m_user_text;
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
        void set_book_status(const book_status& value)  {
            m_book_status = value;
        }
        void set_book_risk_multiplier(const book_risk_multiplier& value)  {
            m_book_risk_multiplier = value;
        }
        void set_max_acc_haircut(const max_acc_haircut& value)  {
            m_max_acc_haircut = value;
        }
        void set_min_acc_rho(const min_acc_rho& value)  {
            m_min_acc_rho = value;
        }
        void set_max_acc_rho(const max_acc_rho& value)  {
            m_max_acc_rho = value;
        }
        void set_min_ddelta(const min_ddelta& value)  {
            m_min_ddelta = value;
        }
        void set_max_ddelta(const max_ddelta& value)  {
            m_max_ddelta = value;
        }
        void set_max_acc_abs_wt_vega(const max_acc_abs_wt_vega& value)  {
            m_max_acc_abs_wt_vega = value;
        }
        void set_min_acc_wt_vega(const min_acc_wt_vega& value)  {
            m_min_acc_wt_vega = value;
        }
        void set_max_acc_wt_vega(const max_acc_wt_vega& value)  {
            m_max_acc_wt_vega = value;
        }
        void set_min_ind_wt_vega(const min_ind_wt_vega& value)  {
            m_min_ind_wt_vega = value;
        }
        void set_max_ind_wt_vega(const max_ind_wt_vega& value)  {
            m_max_ind_wt_vega = value;
        }
        void set_min_sub_wt_vega(const min_sub_wt_vega& value)  {
            m_min_sub_wt_vega = value;
        }
        void set_max_sub_wt_vega(const max_sub_wt_vega& value)  {
            m_max_sub_wt_vega = value;
        }
        void set_min_grp_wt_vega(const min_grp_wt_vega& value)  {
            m_min_grp_wt_vega = value;
        }
        void set_max_grp_wt_vega(const max_grp_wt_vega& value)  {
            m_max_grp_wt_vega = value;
        }
        void set_user_text(const user_text& value)  {
            m_user_text = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to BookControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const book_status & value) {
            set_book_status(value);
        }
        void set(const book_risk_multiplier & value) {
            set_book_risk_multiplier(value);
        }
        void set(const max_acc_haircut & value) {
            set_max_acc_haircut(value);
        }
        void set(const min_acc_rho & value) {
            set_min_acc_rho(value);
        }
        void set(const max_acc_rho & value) {
            set_max_acc_rho(value);
        }
        void set(const min_ddelta & value) {
            set_min_ddelta(value);
        }
        void set(const max_ddelta & value) {
            set_max_ddelta(value);
        }
        void set(const max_acc_abs_wt_vega & value) {
            set_max_acc_abs_wt_vega(value);
        }
        void set(const min_acc_wt_vega & value) {
            set_min_acc_wt_vega(value);
        }
        void set(const max_acc_wt_vega & value) {
            set_max_acc_wt_vega(value);
        }
        void set(const min_ind_wt_vega & value) {
            set_min_ind_wt_vega(value);
        }
        void set(const max_ind_wt_vega & value) {
            set_max_ind_wt_vega(value);
        }
        void set(const min_sub_wt_vega & value) {
            set_min_sub_wt_vega(value);
        }
        void set(const max_sub_wt_vega & value) {
            set_max_sub_wt_vega(value);
        }
        void set(const min_grp_wt_vega & value) {
            set_min_grp_wt_vega(value);
        }
        void set(const max_grp_wt_vega & value) {
            set_max_grp_wt_vega(value);
        }
        void set(const user_text & value) {
            set_user_text(value);
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

        void set(const BookControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_book_status);
            set(value.m_book_risk_multiplier);
            set(value.m_max_acc_haircut);
            set(value.m_min_acc_rho);
            set(value.m_max_acc_rho);
            set(value.m_min_ddelta);
            set(value.m_max_ddelta);
            set(value.m_max_acc_abs_wt_vega);
            set(value.m_min_acc_wt_vega);
            set(value.m_max_acc_wt_vega);
            set(value.m_min_ind_wt_vega);
            set(value.m_max_ind_wt_vega);
            set(value.m_min_sub_wt_vega);
            set(value.m_max_sub_wt_vega);
            set(value.m_min_grp_wt_vega);
            set(value.m_max_grp_wt_vega);
            set(value.m_user_text);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        BookControl() {
            m__meta.set_message_type("BookControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1635, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1635, length);
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
             *this = BookControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBookRiskMultiplier() const {
            return !(m_book_risk_multiplier == 0.0);
        }
        bool IncludeMaxAccHaircut() const {
            return !(m_max_acc_haircut == 0.0);
        }
        bool IncludeMinAccRho() const {
            return !(m_min_acc_rho == 0.0);
        }
        bool IncludeMaxAccRho() const {
            return !(m_max_acc_rho == 0.0);
        }
        bool IncludeMinDdelta() const {
            return !(m_min_ddelta == 0);
        }
        bool IncludeMaxDdelta() const {
            return !(m_max_ddelta == 0);
        }
        bool IncludeMaxAccAbsWtVega() const {
            return !(m_max_acc_abs_wt_vega == 0.0);
        }
        bool IncludeMinAccWtVega() const {
            return !(m_min_acc_wt_vega == 0.0);
        }
        bool IncludeMaxAccWtVega() const {
            return !(m_max_acc_wt_vega == 0.0);
        }
        bool IncludeMinIndWtVega() const {
            return !(m_min_ind_wt_vega == 0.0);
        }
        bool IncludeMaxIndWtVega() const {
            return !(m_max_ind_wt_vega == 0.0);
        }
        bool IncludeMinSubWtVega() const {
            return !(m_min_sub_wt_vega == 0.0);
        }
        bool IncludeMaxSubWtVega() const {
            return !(m_max_sub_wt_vega == 0.0);
        }
        bool IncludeMinGrpWtVega() const {
            return !(m_min_grp_wt_vega == 0.0);
        }
        bool IncludeMaxGrpWtVega() const {
            return !(m_max_grp_wt_vega == 0.0);
        }
        bool IncludeUserText() const {
            return !(m_user_text.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BookStatus>(m_book_status)));
            if ( IncludeBookRiskMultiplier()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_book_risk_multiplier);
            }
            if ( IncludeMaxAccHaircut()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_max_acc_haircut);
            }
            if ( IncludeMinAccRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_min_acc_rho);
            }
            if ( IncludeMaxAccRho()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_max_acc_rho);
            }
            if ( IncludeMinDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(115,m_min_ddelta);
            }
            if ( IncludeMaxDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(118,m_max_ddelta);
            }
            if ( IncludeMaxAccAbsWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_max_acc_abs_wt_vega);
            }
            if ( IncludeMinAccWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_min_acc_wt_vega);
            }
            if ( IncludeMaxAccWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_max_acc_wt_vega);
            }
            if ( IncludeMinIndWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_min_ind_wt_vega);
            }
            if ( IncludeMaxIndWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_max_ind_wt_vega);
            }
            if ( IncludeMinSubWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_min_sub_wt_vega);
            }
            if ( IncludeMaxSubWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_max_sub_wt_vega);
            }
            if ( IncludeMinGrpWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_min_grp_wt_vega);
            }
            if ( IncludeMaxGrpWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_max_grp_wt_vega);
            }
            if ( IncludeUserText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(148,m_user_text);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(157, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BookStatus>(m_book_status)));
            if ( IncludeBookRiskMultiplier()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_book_risk_multiplier);
            }
            if ( IncludeMaxAccHaircut()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_max_acc_haircut);
            }
            if ( IncludeMinAccRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_min_acc_rho);
            }
            if ( IncludeMaxAccRho()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_max_acc_rho);
            }
            if ( IncludeMinDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,115,m_min_ddelta);
            }
            if ( IncludeMaxDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,118,m_max_ddelta);
            }
            if ( IncludeMaxAccAbsWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_max_acc_abs_wt_vega);
            }
            if ( IncludeMinAccWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_min_acc_wt_vega);
            }
            if ( IncludeMaxAccWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_max_acc_wt_vega);
            }
            if ( IncludeMinIndWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_min_ind_wt_vega);
            }
            if ( IncludeMaxIndWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_max_ind_wt_vega);
            }
            if ( IncludeMinSubWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_min_sub_wt_vega);
            }
            if ( IncludeMaxSubWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_max_sub_wt_vega);
            }
            if ( IncludeMinGrpWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_min_grp_wt_vega);
            }
            if ( IncludeMaxGrpWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_max_grp_wt_vega);
            }
            if ( IncludeUserText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,148,static_cast<string>(m_user_text));
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 157, m_timestamp);
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
                            m_book_status = static_cast<spiderrock::protobuf::api::BookStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_book_risk_multiplier = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_acc_haircut = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_acc_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_acc_rho = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_min_ddelta = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_ddelta = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_acc_abs_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_acc_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_acc_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ind_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_ind_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_sub_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_sub_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_grp_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
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

    template<> inline const auto BookControl::get<BookControl::_meta>() const { return BookControl::_meta{ m__meta}; }
    template<> inline const auto BookControl::get<BookControl::pkey>() const { return BookControl::pkey{ m_pkey}; }
    template<> inline const auto BookControl::get<BookControl::book_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BookStatus>( m_book_status)); }
    template<> inline const auto BookControl::get<BookControl::book_risk_multiplier>() const { return m_book_risk_multiplier; }
    template<> inline const auto BookControl::get<BookControl::max_acc_haircut>() const { return m_max_acc_haircut; }
    template<> inline const auto BookControl::get<BookControl::min_acc_rho>() const { return m_min_acc_rho; }
    template<> inline const auto BookControl::get<BookControl::max_acc_rho>() const { return m_max_acc_rho; }
    template<> inline const auto BookControl::get<BookControl::min_ddelta>() const { return m_min_ddelta; }
    template<> inline const auto BookControl::get<BookControl::max_ddelta>() const { return m_max_ddelta; }
    template<> inline const auto BookControl::get<BookControl::max_acc_abs_wt_vega>() const { return m_max_acc_abs_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::min_acc_wt_vega>() const { return m_min_acc_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::max_acc_wt_vega>() const { return m_max_acc_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::min_ind_wt_vega>() const { return m_min_ind_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::max_ind_wt_vega>() const { return m_max_ind_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::min_sub_wt_vega>() const { return m_min_sub_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::max_sub_wt_vega>() const { return m_max_sub_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::min_grp_wt_vega>() const { return m_min_grp_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::max_grp_wt_vega>() const { return m_max_grp_wt_vega; }
    template<> inline const auto BookControl::get<BookControl::user_text>() const { return m_user_text; }
    template<> inline const auto BookControl::get<BookControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto BookControl::get<BookControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto BookControl::get<BookControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto BookControl_PKey::get<BookControl_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto BookControl_PKey::get<BookControl_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const BookControl_PKey& m) {
        o << "\"accnt\":\"" << m.get<BookControl_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<BookControl_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const BookControl& m) {
        o << "\"_meta\":{" << m.get<BookControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<BookControl::pkey>() << "}";
        o << ",\"book_status\":" << (int64_t)m.get<BookControl::book_status>();
        o << ",\"book_risk_multiplier\":" << m.get<BookControl::book_risk_multiplier>();
        o << ",\"max_acc_haircut\":" << m.get<BookControl::max_acc_haircut>();
        o << ",\"min_acc_rho\":" << m.get<BookControl::min_acc_rho>();
        o << ",\"max_acc_rho\":" << m.get<BookControl::max_acc_rho>();
        o << ",\"min_ddelta\":" << m.get<BookControl::min_ddelta>();
        o << ",\"max_ddelta\":" << m.get<BookControl::max_ddelta>();
        o << ",\"max_acc_abs_wt_vega\":" << m.get<BookControl::max_acc_abs_wt_vega>();
        o << ",\"min_acc_wt_vega\":" << m.get<BookControl::min_acc_wt_vega>();
        o << ",\"max_acc_wt_vega\":" << m.get<BookControl::max_acc_wt_vega>();
        o << ",\"min_ind_wt_vega\":" << m.get<BookControl::min_ind_wt_vega>();
        o << ",\"max_ind_wt_vega\":" << m.get<BookControl::max_ind_wt_vega>();
        o << ",\"min_sub_wt_vega\":" << m.get<BookControl::min_sub_wt_vega>();
        o << ",\"max_sub_wt_vega\":" << m.get<BookControl::max_sub_wt_vega>();
        o << ",\"min_grp_wt_vega\":" << m.get<BookControl::min_grp_wt_vega>();
        o << ",\"max_grp_wt_vega\":" << m.get<BookControl::max_grp_wt_vega>();
        o << ",\"user_text\":\"" << m.get<BookControl::user_text>() << "\"";
        o << ",\"modified_by\":\"" << m.get<BookControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<BookControl::modified_in>();
        {
            std::time_t tt = m.get<BookControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}