#include <websocketpp/config/asio_client.hpp>
#include <websocketpp/client.hpp>
#include <websocketpp/common/thread.hpp>

#include <string>
#include <vector>
#include <initializer_list>
#include <sstream>
#include <iostream>

#include "SpiderRock/Net/IPEndPoint.h"
#include "SpiderRock/SpiderStream/MLink/CacheRequest.h"
#include "SpiderRock/SpiderStream/MLink/CacheRequestException.h"
#include "SpiderRock/SpiderStream/MLink/Header.h"
#include "SpiderRock/SpiderStream/AdminMessages.Auto.h"

using namespace SpiderRock::SpiderStream;

using ::MLink::CacheRequest;
using SpiderRock::ThrowLastErrorAs;
using SpiderRock::Net::IPEndPoint;

CacheRequest::CacheRequest(SysEnvironment environment, SysRealm realm, const std::string &uri, const std::string &auth_token, FrameHandler &frame_handler, std::initializer_list<MessageType> message_types)
	: environment_(environment),
	  realm_(realm),
	  uri_(uri),
	  auth_token_(auth_token),
	  frame_handler_(frame_handler),
	  receive_channel_("tcp.recv(" + uri + ")", false),
	  send_channel_("tcp.send(" + uri + ")", false),
	  message_types_(message_types),
	  remote_endpoint_{}
{
	client_.set_access_channels(websocketpp::log::alevel::all); // Enable all log levels
	client_.clear_access_channels(websocketpp::log::alevel::frame_payload);
	client_.set_error_channels(websocketpp::log::elevel::all); // Log all error levels

	// Initialize ASIO
	client_.init_asio();

	// Register our handlers
	client_.set_open_handler(std::bind(&CacheRequest::OnOpen, this, std::placeholders::_1));
	client_.set_message_handler(std::bind(&CacheRequest::OnMessage, this, std::placeholders::_1, std::placeholders::_2));
	client_.set_close_handler(std::bind(&CacheRequest::OnClose, this, std::placeholders::_1));

	// Set TLS handler
	client_.set_tls_init_handler(std::bind(&CacheRequest::OnTlsInit, this, std::placeholders::_1));
}

void CacheRequest::Connect()
{
	SR_TRACE_INFO("Connecting to", uri_);

	websocketpp::lib::error_code ec;
	ws_client::connection_ptr con = client_.get_connection(uri_, ec);

	if (ec)
	{
		std::stringstream ss;
		ss << "Could not create connection because: " << ec.message();
		throw CacheClientException(ss.str());
	}

	conn_hdl_ = con->get_handle();
	con->append_header("Authorization", "Bearer " + auth_token_);
	client_.connect(con);
}

void CacheRequest::Disconnect()
{
	SR_TRACE_INFO("Disconnecting from", uri_);

	websocketpp::lib::error_code ec;

	// You can use predefined status codes from websocketpp::close::status::value
	client_.close(conn_hdl_, websocketpp::close::status::normal, "Normal Closure", ec);

	if (ec)
	{
		SR_TRACE_ERROR("Disconnect error", ec.message());
	}
}

void CacheRequest::OnOpen(websocketpp::connection_hdl hdl)
{
	auto con = client_.get_con_from_hdl(hdl);
	std::string remote_endpoint = con->get_remote_endpoint();

	SR_TRACE_INFO("Connection opened to remote endpoint", remote_endpoint);

	std::istringstream iss(remote_endpoint);
	std::string ip;
	int port;

	if (std::getline(iss, ip, ':') && (iss >> port))
	{
		remote_endpoint_.sin_family = AF_INET;
		remote_endpoint_.sin_port = htons(port);
		inet_pton(AF_INET, ip.c_str(), &(remote_endpoint_.sin_addr));
	}

	frame_handler_.RegisterMessageHandler(this, {MessageType::MLinkStreamCheckPt});

	SendRequest();
}

void CacheRequest::OnMessage(websocketpp::connection_hdl, ws_client::message_ptr msg)
{
	if (msg->get_opcode() != websocketpp::frame::opcode::binary)
	{
		return;
	}

	const std::string &payload = msg->get_payload(); // Payload containing binary data

	uint8_t *data = const_cast<uint8_t *>(reinterpret_cast<const uint8_t *>(payload.data()));
	size_t size = payload.size();

	while (size > 0)
	{
		auto mlink_header = reinterpret_cast<const MLinkHeader *>(data);
		auto msg_len = mlink_header->getMessageLength();

		data += sizeof(MLinkHeader);
		size -= sizeof(MLinkHeader);

		auto remaining = frame_handler_.Handle(data, msg_len, &receive_channel_, remote_endpoint_);

		if (remaining != 0)
		{
			throw CacheClientException("Frame handler returned " + std::to_string(remaining));
		}

		data += msg_len;
		size -= msg_len;
	}
}

void CacheRequest::OnClose(websocketpp::connection_hdl hdl)
{
	auto con = client_.get_con_from_hdl(hdl);
	auto code = con->get_remote_close_code();
	auto reason = con->get_remote_close_reason();

	SR_TRACE_INFO("Connection closed", " remoteCloseCode =", code, ", remoteCloseReason =", reason);
}

ws_ssl_context_ptr CacheRequest::OnTlsInit(websocketpp::connection_hdl)
{
	SR_TRACE_INFO("Returning TLS 1.3 context");

	// Initialize and return a new SSL context
	auto ctx = websocketpp::lib::make_shared<websocketpp::lib::asio::ssl::context>(websocketpp::lib::asio::ssl::context::tlsv13);

	// Here you can customize your SSL context
	// For example, setting up certificate verification

	return ctx;
}

void CacheRequest::Handle(MbusHeader *header, uint64_t, bool)
{
	if (header->message_type != MessageType::MLinkStreamCheckPt)
	{
		// This is only a sanity check since 
		// we should have only associated message handling 
		// with MLinkStreamCheckPt to inform us about the
		// state of the stream. 
		return;
	}

	static MLinkStreamState last_state = MLinkStreamState::None;

	MLinkStreamCheckPt mlink_chkpt;
	mlink_chkpt.Decode(header);

	auto state = mlink_chkpt.state();

	if (last_state != state)
	{
		switch (state)
		{
		case MLinkStreamState::Begin:
			SR_TRACE_INFO("Streaming state changed to Begin");
			break;
		case MLinkStreamState::Active:
			SR_TRACE_INFO("Streaming state changed to Active");
			break;
		case MLinkStreamState::Complete:
			SR_TRACE_INFO("Streaming state changed to Complete");
			break;
		case MLinkStreamState::Replaced:
			SR_TRACE_INFO("Streaming state changed to Replaced");
			break;
		case MLinkStreamState::Terminated:
			SR_TRACE_INFO("Streaming state changed to Terminated");
			break;
		default:
			break;
		}

		if (state == MLinkStreamState::Complete || state == MLinkStreamState::Terminated)
		{
			last_state = MLinkStreamState::None;

			Disconnect();
		}
		else
		{
			last_state = state;
		}
	}
}

void CacheRequest::SendRequest()
{
	uint8_t buf[64 * 1024];

	MLinkCacheRequest mlink_cache_req;

	std::vector<MLinkCacheRequest::MsgType> msg_type_items;

	for (MessageType t : message_types_)
	{
		MLinkCacheRequest::MsgType msg_type_item;
		msg_type_item.msgType(static_cast<UShort>(t));
		msg_type_item.schemaHash(0);
		msg_type_items.push_back(msg_type_item);
	}

	mlink_cache_req.queryLabel("SpiderStream.C++.API");
	mlink_cache_req.msgtype(msg_type_items);

	auto &header = mlink_cache_req.header();
	header.log.entries = 1;
	header.log.origin.sysEnvironment = environment_;
	header.log.origin.sysRealm = realm_;

	uint16_t length = mlink_cache_req.Encode(&buf[sizeof(MLinkHeader)]);

	MLinkHeader mlink_header(MLinkHeader::Protocol::Binary, MessageType::MLinkCacheRequest, length);

	std::memcpy(buf, &mlink_header, sizeof(MLinkHeader));

	websocketpp::lib::error_code ec;

	SR_TRACE_INFO("Sending cache request");

	client_.send(conn_hdl_, buf, sizeof(MLinkHeader) + length, websocketpp::frame::opcode::binary, ec);

	if (ec)
	{
		std::stringstream ss;

		ss << "Send failed: " << ec.message() << std::endl;

		throw CacheClientException(ss.str());
	}

	SR_TRACE_INFO("Cache request sent");
}

void CacheRequest::Execute()
{
	Connect();

	SR_TRACE_INFO("Starting I/O loop");

	client_.run();

	SR_TRACE_INFO("Response reading completed");
}