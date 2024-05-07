#include "SpiderRock/SpiderStream/Channel.h"

using namespace SpiderRock::SpiderStream;
using std::array;
using std::string;

Channel::Channel(const string &label, bool carries_fragments) : label_(label),
																last_error_(nullptr),
																partials_(0),
																sender_states_(),
																carries_fragments_(carries_fragments)
{
}

Channel::~Channel()
{
}

void Channel::SetLastError(const char *last_err)
{
	last_error_ = (char *)last_err;
}

void Channel::IncrementMessageTypeCounters(MessageType msg_type, uint16_t msg_len)
{
	msg_type_num_[static_cast<UShort>(msg_type)].fetch_add(1, std::memory_order_relaxed);
	msg_type_bytes_[static_cast<UShort>(msg_type)].fetch_add(msg_len, std::memory_order_relaxed);
}

void Channel::IncrementMessageTypeDrops(MessageType msg_type)
{
	msg_type_drops_[static_cast<UShort>(msg_type)].fetch_add(1, std::memory_order_relaxed);
}

void Channel::IncrementPartials()
{
	partials_.fetch_add(1, std::memory_order_relaxed);
}

bool Channel::TryCompleteMessage(uint8_t *&message, message_length_t &msg_len) noexcept
{
	auto pkt_frag_hdr = reinterpret_cast<FragmentHeader *>(message);
	auto entry = sender_states_.find(pkt_frag_hdr->app_id);

	std::shared_ptr<SenderState> sender_state;

	if (entry == sender_states_.end())
	{
		sender_state = std::make_shared<SenderState>();
		sender_states_.insert(std::make_pair(pkt_frag_hdr->app_id, sender_state));
	}
	else
	{
		sender_state = entry->second;
	}

	if (pkt_frag_hdr->index + 1 == pkt_frag_hdr->count)
	{
		if (--sender_state->count == 0)
		{
			// dispatch

			auto payload_length = msg_len - sizeof(FragmentHeader);
			uint8_t *payload = message + sizeof(FragmentHeader);

			std::memcpy(sender_state->buffer.get() + sender_state->msg_len, payload, payload_length);

			message = sender_state->buffer.get();
			msg_len = static_cast<message_length_t>(payload_length + sender_state->msg_len);

			return true;
		}
	}
	else if (msg_len == PKT_FRAG_LEN)
	{
		// buffer

		if (pkt_frag_hdr->index == 0)
		{
			sender_state->pid = pkt_frag_hdr->pid;
			sender_state->msg_id = pkt_frag_hdr->id;
			sender_state->count = pkt_frag_hdr->count - 1;
			sender_state->msg_len = static_cast<message_length_t>(PKT_FRAG_PAYLOAD_LEN);

			std::memcpy(sender_state->buffer.get(), message + sizeof(FragmentHeader), PKT_FRAG_PAYLOAD_LEN);
		}
		else if (pkt_frag_hdr->pid == sender_state->pid && pkt_frag_hdr->id == sender_state->msg_id)
		{
			sender_state->count -= 1;

			std::memcpy(sender_state->buffer.get() + sender_state->msg_len, message + sizeof(FragmentHeader), PKT_FRAG_PAYLOAD_LEN);
			sender_state->msg_len += PKT_FRAG_PAYLOAD_LEN;
		}
	}

	return false;
}
