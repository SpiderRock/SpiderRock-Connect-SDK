#pragma once
#include <cstdint>
#include <string>
#include <cstring>
#include "Enums.h"

namespace SRProtobufCPP {

	
	class MessageMetadata {
	public:
	
		std::string MachineName;
		std::string AppName;
		int SenderId;

		std::string MessageType;

		bool IsDeleted;
		bool FromCache;
		bool FromBridge;

		uint8_t SequenceNumber;
		uint16_t MessageLength;
		uint8_t KeyLength;

		int64_t TimeSent;	
        int64_t EncodedTime;
        int64_t ServerRcvdTime;

		bool Equals(const MessageMetadata& other) const {
            return MessageType == other.MessageType
                && SenderId == other.SenderId
                && MachineName == other.MachineName
                && AppName == other.AppName
                && IsDeleted == other.IsDeleted
                && FromCache == other.FromCache
                && FromBridge == other.FromBridge
                && MessageLength == other.MessageLength
                && KeyLength == other.KeyLength
                && SequenceNumber == other.SequenceNumber
                && TimeSent == other.TimeSent
                && EncodedTime == other.EncodedTime
                && ServerRcvdTime == other.ServerRcvdTime;
		}

		// The Clone() method is similar to C#'s Clone() method,
		// but we don't have the 'TimeEncoded' member in C++,
		// so it's excluded from the clone.
		/*MessageMetadata Clone() const {
			return {
				SysEnvironment0,
				SysEnvironment1,
				SysEnvironment2,
				SysRealm0,
				SysRealm1,
				SysRealm2,
				MachineName,
				AppName,
				SourceId,
				MessageType,
				IsDeleted,
				FromCache,
				FromBridge,
				MessageLength,
				KeyLength,
				SequenceNumber,
				TimeSent
			};
		}*/
	};
}
