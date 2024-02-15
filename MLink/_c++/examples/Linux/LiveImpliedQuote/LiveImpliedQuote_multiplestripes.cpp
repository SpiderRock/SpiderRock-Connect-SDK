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

void streamStripes(SubscriptionManager<>& mgr, std::string stripe)
{
    int activeLatency = 1; // Set value in milliseconds
    std::string messageType = "LiveSurfaceCurve";
    std::string whereClause = "ekey.tk:eq:SPX";
    std::string queryString = messageType + "_Query";

    spiderrock::protobuf::api::MLinkStream  mlinkStream;
    mlinkStream.set_active_latency(activeLatency);
    mlinkStream.set_msg_name(messageType);
    mlinkStream.set_query_label(queryString);
    mlinkStream.set_where_clause(whereClause);
    mlinkStream.set_stripe_filter(stripe);

    mgr.stream(mlinkStream);

}

int main()
{
    char buffer[65536];
    bool result;

    Context context;

    std::string apiKey = "<Your API KEY>";
    std::string mLinkWebSocketEndpoint = "<MLinkWebSocketEndPoint>";
    std::string mLinkRestEndPoint = "<MLinkRestEndPoint>";

    std::vector<std::string> stripes = {
        "A", 
        "B",
        "C",
        "D", 
        "E"
        // Add more stripes as needed
    };

    // Create vectors to store SubscriptionManager objects and corresponding MLinkSession objects
    std::vector<std::unique_ptr<SubscriptionManager<>>> managers;
    std::vector<std::unique_ptr<MLinkSession>> sessions;

    for (const auto& stripe : stripes) {
        sessions.push_back(std::make_unique<MLinkSession>(context));
        if (!sessions.back()->connect(mLinkWebSocketEndpoint, apiKey)) {
            std::cout << sessions.back()->getLastError() << std::endl;
            exit(-1);
        }
        auto& sessionPtr = sessions.back();
        managers.push_back(std::make_unique<SubscriptionManager<>>(*sessions.back()));
        streamStripes(*managers.back(), stripe);
    }  
       
    
    std::chrono::steady_clock::time_point lastHeartbeatTime = std::chrono::steady_clock::now();
    int heartbeatTimeout = 10;
    int maxRetries = 3;
    int retryCount = 0;

    while (true) {
        // Check if it's time to disconnect due to no heartbeats
        auto currentTime = std::chrono::steady_clock::now();
        auto elapsedSeconds = std::chrono::duration_cast<std::chrono::seconds>(currentTime - lastHeartbeatTime).count();
        if (elapsedSeconds >= heartbeatTimeout) {
            std::cout << "No heartbeat received for 10 seconds. Disconnecting and retrying..." << std::endl;
            retryCount++;
            if (retryCount > maxRetries) {
                std::cout << "Maximum retries exceeded. Exiting." << std::endl;
                break;
            }

            // Reconnect and resubscribe
            for (size_t i = 0; i < sessions.size(); ++i) {
                sessions[i]->cleanup();
                sessions[i]->close();
                if (!sessions[i]->connect(mLinkWebSocketEndpoint, apiKey)) {
                    std::cout << "Failed to reconnect: " << sessions[i]->getLastError() << std::endl;
                }
                else {
                    std::cout << "Reconnected successfully." << std::endl;
                    streamStripes(*managers[i], stripes[i]);
                }
            }
            // Reset last heartbeat time
            lastHeartbeatTime = std::chrono::steady_clock::now();
        }

        // Sleep for a while before checking again
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    // Cleanup
    for (auto& session : sessions) {
        session->cleanup();
    }
    
    return 0;
}


