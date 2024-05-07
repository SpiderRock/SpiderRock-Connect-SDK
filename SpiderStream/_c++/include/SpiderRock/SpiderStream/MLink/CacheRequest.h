#pragma once

#include <websocketpp/config/asio_client.hpp>
#include <websocketpp/client.hpp>
#include <websocketpp/common/thread.hpp>

#include <string>
#include <vector>
#include <initializer_list>

#include "stdafx.h"

#include "SpiderRock/SpiderStream/MessageType.Auto.h"
#include "SpiderRock/SpiderStream/FrameHandler.h"

typedef websocketpp::client<websocketpp::config::asio_tls_client> ws_client;
typedef websocketpp::lib::shared_ptr<websocketpp::lib::asio::ssl::context> ws_ssl_context_ptr;

namespace SpiderRock
{
    namespace SpiderStream
    {
        namespace MLink
        {
            class CacheRequest : public MessageHandler
            {
                SysEnvironment environment_;
                SysRealm realm_;
                std::string uri_;
                std::string auth_token_;
                FrameHandler &frame_handler_;
                Channel receive_channel_;
                Channel send_channel_;
                std::vector<MessageType> message_types_;

                ws_client client_;
                websocketpp::connection_hdl conn_hdl_;
                sockaddr_in remote_endpoint_;

                void SendRequest();
                void Connect();
                void Disconnect();

                // handlers
                void OnOpen(websocketpp::connection_hdl);
                void OnMessage(websocketpp::connection_hdl, ws_client::message_ptr msg);
                void OnClose(websocketpp::connection_hdl);

                ws_ssl_context_ptr OnTlsInit(websocketpp::connection_hdl);

            public:
                CacheRequest(SysEnvironment environment, SysRealm realm, const std::string &uri, const std::string &auth_token, FrameHandler &frame_handler, std::initializer_list<MessageType> message_types);

                void Handle(MbusHeader *header, uint64_t timestamp, bool drops) override;

                void Execute();
            };
        }
    }
}