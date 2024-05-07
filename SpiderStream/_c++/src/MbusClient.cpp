#include "SpiderRock/SpiderStream/MLink/CacheRequest.h"
#include "SpiderRock/SpiderStream/MbusClient.Auto.h"
#include "MbusClient.impl.Auto.h"

#include <string>
#include <memory>
#include <vector>
#include <initializer_list>

#include "SpiderRock/Net/IPAddress.h"
#include "SpiderRock/Net/IPEndPoint.h"
#include "SpiderRock/Net/Proto/Receiver.h"
#include "SpiderRock/Net/Proto/UDP/Receiver.h"
#include "SpiderRock/SpiderStream/MessageEventSource.h"
#include "SpiderRock/SpiderStream/FrameHandler.h"

using namespace SpiderRock::SpiderStream;
using namespace SpiderRock::SpiderStream::MLink;
using namespace SpiderRock::Net::Proto;
using namespace SpiderRock::Net;

void MbusClient::MakeCacheRequest(initializer_list<MessageType> message_types, std::string auth_token)
{
	std::string env;

	switch (impl_->environment)
	{
	case SysEnvironment::Saturn:
		env = "saturn";
		break;
	case SysEnvironment::Venus:
		env = "venus";
		break;
	case SysEnvironment::Mars:
		env = "mars";
		break;
	default:
		env = "outer-space";
	}

	std::string uri = "wss://mlink-live.nms." + env + ".spiderrockconnect.com/mlink/binary";

	try
	{
		CacheRequest cache_req(impl_->environment, SysRealm::NMS, uri, auth_token, impl_->frame_handler, message_types);
		cache_req.Execute();
	}
	catch (const std::exception &e)
	{
		SR_TRACE_ERROR("cache request error", e.what());
	}
	catch (...)
	{
		SR_TRACE_ERROR("unknown cache request error");
	}
}

IPEndPoint MbusClient::GetIPEndPoint(DataChannel channel)
{
	auto envnum = 20 + static_cast<int32_t>(impl_->environment);
	auto chnum = static_cast<int32_t>(channel);

	std::string ipaddr;

	switch (impl_->environment)
	{
	case SysEnvironment::Saturn:
		ipaddr = "233.117.185." + std::to_string(chnum);
		break;

	default:
		ipaddr = "239.12." + std::to_string(envnum) + "." + std::to_string(chnum);
		break;
	}

	IPEndPoint ep(ipaddr, 22000 + (envnum * 250) + chnum);

	return ep;
}

void MbusClient::CreateThreadGroup(Protocol protocol, initializer_list<DataChannel> channels)
{
	std::unique_ptr<Receiver<Channel>> receiver;

	if (protocol == Protocol::UDP)
	{
		receiver = unique_ptr<Receiver<Channel>>(
			dynamic_cast<Receiver<Channel> *>(new UDP::Receiver<Channel>(impl_->if_addr, &impl_->frame_handler)));
	}
	else
	{
		throw std::invalid_argument("Unsupported protocol " + std::to_string(static_cast<int>(protocol)));
	}

	for (auto c : channels)
	{
		IPEndPoint ep = GetIPEndPoint(c);

		std::shared_ptr<Channel> channel;

		if (protocol == Protocol::UDP)
		{
			channel = make_shared<Channel>("udp.recv(" + ep.label() + ")");
		}
		impl_->channels.push_back(channel);
		receiver->AddChannel(ep, channel);
	}

	impl_->receivers.push_back(move(receiver));
}

void MbusClient::Start()
{
	static bool started = false;

	if (started)
		return;

	for (auto &receiver : impl_->receivers)
	{
		receiver->Start();
	}

	started = true;
}