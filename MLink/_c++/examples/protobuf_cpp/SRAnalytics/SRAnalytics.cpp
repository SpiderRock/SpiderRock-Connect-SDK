// SRAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "spiderrock_protobuf.hpp"
#include "spiderrock_mlink.hpp"
#include <chrono>
#include <set>

using namespace spiderrock::mlink;

class DisplayToConsole : public spiderrock::protobuf::api::Observer<DisplayToConsole> {
public:
    DisplayToConsole() : lastHeartbeatTime(std::chrono::steady_clock::now()), heartbeatTimeout(10), maxRetries(3), retryCount(0) {}

    template <typename T>
    void handle(const T& t) {
        //Generic Handler; 
        //std::cout << t << std::endl;
    }
     
    void handle(const spiderrock::protobuf::api::MLinkHeartbeat& t) { // Handle MLinkHeartbeat        
        lastHeartbeatTime = std::chrono::steady_clock::now(); // Update the last heartbeat time
        std::cout << t << std::endl;

    }

    void handle(const spiderrock::protobuf::api::LiveSurfaceCurve& t) { // Handle LiveSurfaceCurve              
        std::cout << t << std::endl;

    }

    void handle(const spiderrock::protobuf::api::LiveImpliedQuoteAdj& t) { // Handle LiveImpliedQuoteAdj              
        std::cout
            <<"okey: " << t.get_pkey().get_okey().get_ticker()
            << " oask:" << t.get_oask() 
            <<" obid: "<<t.get_obid()
            <<" okey_years:" <<t.get_pkey().get_okey().get_expiration()
            << std::endl;

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

void streamLiveSurfaceCurves(SubscriptionManager<>& mgr) {

    std::set<std::string> tickerSet = { "AAPL", "SPX", "GOOGL", "MSFT" , "AVTR", "SBUX" };
    std::string whereClause;
    bool first = true;
    for (const auto& ticker : tickerSet) {
        if (!first) {
            whereClause += " | ";  // Add a separator
        }
        whereClause += "ekey.tk:eq:" + ticker;  // Add the ticker with prefix
        first = false;
    }


    int activeLatency = 1;
    std::string messageType = "LiveSurfaceCurve";
    std::string queryString = messageType + "_Query";

    spiderrock::protobuf::api::MLinkStream  mlinkStream;
    mlinkStream.set_active_latency(activeLatency);
    mlinkStream.set_msg_name(messageType);
    mlinkStream.set_query_label(queryString);
    mlinkStream.set_where_clause(whereClause);

    mgr.stream(mlinkStream);
}

void streamLiveImpliedQuoteAdj(SubscriptionManager<>& mgr) {

    std::set<std::string> tickerSet = { "AAPL", "SPX", "GOOGL", "MSFT" , "AVTR", "SBUX" };
    std::string whereClause;
    bool first = true;
    for (const auto& ticker : tickerSet) {
        if (!first) {
            whereClause += " | ";  // Add a separator
        }
        whereClause += "okey.tk:eq:" + ticker;  // Add the ticker with prefix
        first = false;
    }


    int activeLatency = 1;
    std::string messageType = "LiveImpliedQuoteAdj";
    std::string queryString = messageType + "_Query";

    spiderrock::protobuf::api::MLinkStream  mlinkStream;
    mlinkStream.set_active_latency(activeLatency);
    mlinkStream.set_msg_name(messageType);
    mlinkStream.set_query_label(queryString);
    mlinkStream.set_where_clause(whereClause);

    mgr.stream(mlinkStream);
}

int main()
{
    char buffer[65536];
    bool result;

    Context context;
       
    std::string apiKey = "<Your APIKey>";
    std::string mLinkWebSocketEndpoint = "<MLink proto web socket connection link>";

    MLinkSession ws_session(context);

    result = ws_session.connect(mLinkWebSocketEndpoint, apiKey);

    if (!result) {
        std::cout << ws_session.getLastError() << std::endl;
        exit(-1);
    }

 
        
    SubscriptionManager<> mgr(ws_session);

    DisplayToConsole display; // Handler Object
    mgr.start([&display](char* buffer, size_t bytesRead)
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
        }
    );

   
    streamLiveImpliedQuoteAdj(mgr);
    
    mgr.join();
    mgr.shutDown();
    
    ws_session.cleanup();

    return 0;


}

