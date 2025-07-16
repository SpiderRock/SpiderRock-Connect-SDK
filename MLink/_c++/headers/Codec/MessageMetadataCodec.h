#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include <unordered_map>
#include <vector>
#include "TagCodec.h"
#include "LengthCodec.h"
#include "Skipper.h"
#include "FieldCodec1.h"
#include "MessageTypeName.h"
#include "MessageMetadata.h"
#include "Enums.h"

namespace SRProtobufCPP {

	typedef std::string MessageType;

	class MessageMetadataCodec {
	
	public:
		static const TagCodecEnums::TagType TagType = TagCodecEnums::TagType::LengthDelimited;

		static uint8_t* Encode(uint8_t*& pos, const MessageMetadata& value) {
			
			pos = FieldCodec::EncodeString(pos, 1, value.MessageType); 
			pos = FieldCodec::EncodeBool(pos, 2, value.IsDeleted);
			pos = FieldCodec::EncodeLong(pos, 3, value.TimeSent);
			pos = FieldCodec::EncodeInt(pos, 4, static_cast<int>(value.SenderId));
			pos = FieldCodec::EncodeBool(pos, 5, value.FromBridge);
			pos = FieldCodec::EncodeBool(pos, 6, value.FromCache);
	                pos = FieldCodec::EncodeBool(pos, 7, value.EncodedTime);
	                pos = FieldCodec::EncodeBool(pos, 8, value.ServerRcvdTime);
            return pos;
		}

		static void Decode(const uint8_t*& pos, const uint8_t* max, MessageMetadata& mbusInfo) {
			uint32_t tag;

			while (pos < max && (tag = TagCodec::Decode(pos, max)) != 0) {

                TagCodecEnums::TagType tagType;
				int fieldNumber;
				std::tie(fieldNumber, tagType) = TagCodec::Decompose(tag);
				switch (fieldNumber) {
				default:
					// log unknown field
					Skipper::Skip(pos, tagType, max);
					break;

				case 1:
				{
                    if (tagType == SRProtobufCPP::StringCodec::TagType)
                    {
                        mbusInfo.MessageType = FieldCodec::DecodeString(pos, max);
                    }
					break;
				}
				case 2:
                    if (tagType == SRProtobufCPP::BoolCodec::TagType)
                    {
                        mbusInfo.IsDeleted = FieldCodec::DecodeBool(pos, max);                       
                    }
					break;
				case 3:
                    if (tagType == SRProtobufCPP::LongCodec::TagType)
                    {
                        mbusInfo.TimeSent = FieldCodec::DecodeLong(pos, max);
                    }
					break;
				case 4:
					mbusInfo.SenderId = FieldCodec::DecodeInt(pos, max);
					break;

				case 5:
					mbusInfo.FromBridge = FieldCodec::DecodeBool(pos, max);                    
					break;

				case 6:
					mbusInfo.FromCache = FieldCodec::DecodeBool(pos, max);                    
					break;

                case 7:
                    if (tagType == SRProtobufCPP::LongCodec::TagType)
                    {
                        mbusInfo.EncodedTime = FieldCodec::DecodeLong(pos, max);
                    }
                    break;
                case 8:
                    if (tagType == SRProtobufCPP::LongCodec::TagType)
                    {
                        mbusInfo.ServerRcvdTime = FieldCodec::DecodeLong(pos, max);
                    }
                    break;
				}
			}
			
		}

		static int Size(const MessageMetadata& value) {
			

            return  FieldCodec::StringFieldSize(1, value.MessageType) +
                FieldCodec::BoolFieldSize(2, value.IsDeleted) +
                FieldCodec::LongFieldSize(3, value.TimeSent) +
                FieldCodec::IntFieldSize(4, static_cast<int>(value.SenderId)) +
                FieldCodec::BoolFieldSize(5, value.FromBridge) +
                FieldCodec::BoolFieldSize(6, value.FromCache) +
                FieldCodec::LongFieldSize(7, value.EncodedTime) + 
                FieldCodec::LongFieldSize(8, value.ServerRcvdTime);
			
		}
	};
}

