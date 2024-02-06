// LiveImpliedQuote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <fstream>
#include "spiderrock_protobuf.hpp"
#include "spiderrock_mlink.hpp"
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

void subscribeToMessages(SubscriptionManager<>& mgr, bool subscribe) {
    const bool unsubscribe = !subscribe;
    char messageType[64] = "LiveImpliedQuote";
    char pKey1[64] = "AAPL-NMS-EQT-2023-12-15-200-C";
    char pKey2[64] = "AMZN-NMS-EQT-2023-12-15-150-P";
    char view[64] = "de|ga|th|ve|va";
    char queryLabel[64] = "LiveImpliedQuote_Query";
    int activeLatency = 1000; // Set value in milliseconds
    bool reset = false;

    mgr.subscribe({ {messageType,pKey1,queryLabel,view,subscribe} }, activeLatency, reset);
    std::this_thread::sleep_for(std::chrono::seconds(5));

    mgr.subscribe({ {messageType,pKey1,unsubscribe},{ messageType,pKey2,subscribe } }, activeLatency, reset);
    std::this_thread::sleep_for(std::chrono::seconds(5));
}

int main()
{
    char buffer[65536];
    bool result;

    Context context;

    std::string apiKey = "<Your API KEY>";
    std::string mLinkWebSocketEndpoint = "<MLinkWebSocketEndPoint>";
    std::string mLinkRestEndPoint = "<MLinkRestEndPoint>";

    /*Connect to the rest endpoint to download any SystemData information if needed*/
    MLinkSession rest_session(context);

    result = rest_session.connect(mLinkRestEndPoint, apiKey);

    int bytesRead = rest_session.read(buffer, sizeof(buffer));

    while (bytesRead > 0) {
        buffer[bytesRead] = 0;
        std::cout << buffer << std::endl;
        bytesRead = rest_session.read(buffer, sizeof(buffer));
    }

    rest_session.close();

    std::cout << std::endl;

    /*Connect to the MLinkserver Websocket endpoint to stream / subscribe for tickers*/
    MLinkSession ws_session(context);
    
    result = ws_session.connect(mLinkWebSocketEndpoint, apiKey);

    if (!result) {
        std::cout << ws_session.getLastError() << std::endl;
        exit(-1);
    }

    SubscriptionManager<> mgr(ws_session);

    DisplayToConsole display; // Handler Object

    mgr.start([&display,&ws_session,&mLinkWebSocketEndpoint,&apiKey,&mgr](char* buffer, size_t bytesRead)
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
            // Check if it's time to disconnect due to no heartbeats
            if (display.shouldDisconnect()) {
                std::cout << "No heartbeat received for 10 seconds. Disconnecting and retrying..." << std::endl;
                display.incrementRetryCount();
                ws_session.cleanup();
                ws_session.close();
                bool result = ws_session.connect(mLinkWebSocketEndpoint, apiKey);

                if (!result) {
                    std::cout << "Failed to reconnect: " << ws_session.getLastError() << std::endl;
                    if (display.isMaxRetriesExceeded()) {
                        std::cout << "Maximum retries exceeded. Exiting." << std::endl;
                        exit(-1);
                    }
                }
                else {
                    std::cout << "Reconnected successfully." << std::endl;
                    display.resetLastHeartbeatTime();
                    subscribeToMessages(mgr, true);
                }

                // Reset the last heartbeat time
                display.resetLastHeartbeatTime();
            }
        }
    ); 

    subscribeToMessages(mgr, true);

    mgr.join();
    mgr.shutDown();

    ws_session.cleanup();

}


