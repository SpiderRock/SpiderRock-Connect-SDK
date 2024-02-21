// LiveImpliedQuote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <fstream>
#include "spiderrock_mlink.hpp"
#include "spiderrock_protobuf.hpp"
#include <chrono>

using namespace spiderrock::mlink;

class DisplayToConsole : public spiderrock::protobuf::api::Observer<DisplayToConsole> {
public:
    DisplayToConsole() : lastHeartbeatTime(std::chrono::steady_clock::now()), heartbeatTimeout(10), maxRetries(3), retryCount(0) {}

    template <typename T>
    void handle(const T& t) {
        //Generic Handler; 
        std::cout << t << std::endl;
    }

    void handle(const spiderrock::protobuf::api::LiveImpliedQuote& t) { // Handle LiveImpliedQuote
        std::cout << t << std::endl;

    }

    void handle(const spiderrock::protobuf::api::MLinkHeartbeat& t) { // Handle MLinkHeartbeat        
        lastHeartbeatTime = std::chrono::steady_clock::now(); // Update the last heartbeat time
        std::cout << t << std::endl;

    }
    bool shouldDisconnect() {
        // Check if it's time to disconnect due to no heartbeats
        auto currentTime = std::chrono::steady_clock::now();
        auto elapsedSeconds = std::chrono::duration_cast<std::chrono::seconds>(currentTime - lastHeartbeatTime).count();
        return (elapsedSeconds >= heartbeatTimeout) && (retryCount < maxRetries);
    }

    bool isMaxRetriesExceeded() {
        return retryCount >= maxRetries;
    }

    void incrementRetryCount() {
        retryCount++;
    }

    void resetLastHeartbeatTime() {
        lastHeartbeatTime = std::chrono::steady_clock::now();
    }

private:
    std::chrono::steady_clock::time_point lastHeartbeatTime;
    int heartbeatTimeout;
    int maxRetries;
    int retryCount;

};


class WebSocketConnection {
public:
    WebSocketConnection(const std::string& apiKey, const std::string& endpoint, const std::string& stripe)
        : apiKey(apiKey), endpoint(endpoint), session(context), stripe(stripe),
        mgr(std::make_unique<SubscriptionManager<>>(session)) {}

    WebSocketConnection(const WebSocketConnection&) = default; // Allow copy constructor
    WebSocketConnection& operator=(const WebSocketConnection&) = default; // Allow copy assignment operator

    void connect() {
        auto result = session.connect(endpoint, apiKey);
        if (!result) {
            std::cout << session.getLastError() << std::endl;
            exit(-1);
        }
    }

    void stream()
    {
        int activeLatency = 1;
        spiderrock::protobuf::api::MLinkStream  mlinkStream;
        std::string messageType = "LiveImpliedQuote";
        std::string queryString = messageType + "_Query";
       // std::string whereClause = "ekey.tk:eq:SPX";

        mlinkStream.set_active_latency(activeLatency);
        mlinkStream.set_msg_name(messageType);
        mlinkStream.set_query_label(queryString);
       // mlinkStream.set_where_clause(whereClause);
        mlinkStream.set_stripe_filter(stripe);

        mgr->stream(mlinkStream);
    }  

    void start() {
        DisplayToConsole display; // Handler Object
        mgr->start([&display](char* buffer, size_t bytesRead)
            {
                if (buffer[0] == '\r' && buffer[1] == '\n') {
                    if (buffer[2] == 'P') {
                        display.process_buffer(buffer, static_cast<int>(bytesRead));
                    }
                    else {
                        buffer[bytesRead] = 0;
                        std::cout << buffer << std::endl;
                    }
                }
                else {
                    buffer[bytesRead] = 0;
                    std::cout << buffer << std::endl;
                }
            });
    }

    void join() {
        mgr->join();
    }

    void shutDown() {
        mgr->shutDown();
        session.cleanup();
    }

private:
    void handleWebSocketData(char* buffer, size_t bytesRead) {
       
        // Handle WebSocket data here
        // For simplicity, just printing the received data
        std::cout << buffer << std::endl;
    }

private:
    Context context;
    MLinkSession session;
    std::unique_ptr<SubscriptionManager<>> mgr;

   // SubscriptionManager<> mgr{ session };
    std::string apiKey;
    std::string endpoint;
    DisplayToConsole display;
    std::string stripe;
};


int main()
{

    std::string apiKey = "<YourAPIKey>";
    std::string mLinkWebSocketEndpoint = "<Your MLink Websocket Endpoint>";

    std::vector<std::unique_ptr<WebSocketConnection>> connections;

    std::vector<std::string> stripes = {
       "A",
       "B",
       "C"
       // Add more stripes as needed
    };

    // Create WebSocket connections for each stripe
    for (const auto& stripe : stripes) {        
        auto connection = std::make_unique<WebSocketConnection>(apiKey, mLinkWebSocketEndpoint, stripe);
        connection->connect();
        connections.push_back(std::move(connection));
    } 

    // Subscribe to messages for each connection
    for (auto& connection : connections) {
        connection->stream();
    }

    
   // Start each connection in a separate thread
    std::vector<std::thread> threads;
   
    for (auto& connection : connections) {
        threads.emplace_back([&connection]() {
            connection->start();
            connection->join();
            });
    }  

    // Join all threads
    for (auto& thread : threads) {
        thread.join();
    }

    // Shut down all connections
    for (auto& connection : connections) {
        connection->shutDown();
    }
}


