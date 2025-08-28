#pragma once

#include "stdafx.h"

#include <cstdint>
#include <string>
#include <array>
#include <atomic>
#include <memory>
#include <unordered_map>

#include "MessageType.Auto.h"
#include "SpiderRock/CompactArray16.h"

#define PKT_FRAG_LEN 1400
#define PKT_FRAG_HDR_LEN 16
#define PKT_FRAG_PAYLOAD_LEN PKT_FRAG_LEN - PKT_FRAG_HDR_LEN
#define MAX_SOURCE_ID UINT16_MAX
#define MAX_MESSAGE_LENGTH 64000
#define NUMBLOCKS(x, y) (((x) + (y)-1) / (y))

namespace SpiderRock
{
	namespace SpiderStream
	{
		class Channel
		{
			std::string label_;
			char *last_error_;
			std::array<std::atomic<uint64_t>, MAX_MESSAGE_TYPE> msg_type_num_;
			std::array<std::atomic<uint64_t>, MAX_MESSAGE_TYPE> msg_type_bytes_;
			std::array<std::atomic<uint64_t>, MAX_MESSAGE_TYPE> msg_type_drops_;
			std::atomic<uint64_t> partials_;
			CompactArray16<CompactArray16<SequenceNumber>> seq_numbers_;

#pragma pack(1)
			struct FragmentHeader
			{
				uint32_t type;
				app_id_t app_id;
				int32_t pid;
				int32_t id;
				int8_t index;
				int8_t count;
			};
#pragma pack()

			static_assert(sizeof(FragmentHeader) == PKT_FRAG_HDR_LEN, "FragmentHeader size is wrong");

			struct SenderState
			{
				int32_t pid;
				int32_t msg_id;
				int32_t count;
				std::unique_ptr<uint8_t[]> buffer;
				message_length_t msg_len;

				SenderState() : pid(0),
								msg_id(0),
								count(0),
								buffer(new uint8_t[PKT_FRAG_LEN * NUMBLOCKS(MAX_MESSAGE_LENGTH, PKT_FRAG_PAYLOAD_LEN)]),
								msg_len(0)
				{
				}

				SenderState(const SenderState &) = delete;
				SenderState &operator=(const SenderState &) = delete;

				SenderState(SenderState &&) = default;
				SenderState &operator=(SenderState &&) = default;
			};

			const uint32_t FragmentType = 0xFF000000;

			std::unordered_map<app_id_t, std::shared_ptr<SenderState>> sender_states_;

			bool carries_fragments_;

		public:
			Channel(const std::string &label, bool carries_fragments = true);
			~Channel();

			inline bool CarriesFragments() { return carries_fragments_; }
			inline const std::string &Label() const { return label_; }
			inline SequenceNumber GetExpectedSequenceNumber(MessageType msg_type, AppId source_id) { return seq_numbers_[static_cast<uint16_t>(msg_type)][source_id]; }

			void SetLastError(const char *last_err);
			void IncrementMessageTypeCounters(MessageType msg_type, uint16_t msg_len);
			void IncrementMessageTypeDrops(MessageType msg_type);
			void IncrementPartials();

			inline bool IsFragment(const uint8_t *message, message_length_t msg_len) const noexcept
			{
				if (msg_len < sizeof(FragmentHeader))
				{
					return false;
				}

				auto pkt_hdr = reinterpret_cast<const FragmentHeader *>(message);
				return pkt_hdr->type == FragmentType;
			}

			bool TryCompleteMessage(uint8_t *&message, message_length_t &msg_len) noexcept;
		};
	}
}
