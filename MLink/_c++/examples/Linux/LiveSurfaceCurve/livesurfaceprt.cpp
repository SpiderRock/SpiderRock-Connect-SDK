// protobuf_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "spiderrock_mlink.hpp"
#include "spiderrock_protobuf.hpp"
#include <iostream>

using namespace spiderrock::mlink;

int main()
{
    char buffer[65536];
    bool result;

    Context context;

    MLinkSession rest_session(context);

    std::string apiKey = "7c064895-dc15-46c6-97e2-506353851944";

    MLinkSession ws_session(context);

    result = ws_session.connect("wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto", apiKey);

    if (!result) {
        result = ws_session.connect("ws://mlink.saturn.srplatform.net:6700/mlink/proto", apiKey);
        if (!result) {
            std::cout << ws_session.getLastError() << std::endl;
            exit(-1);
        }
    }
    
    SubscriptionManager<> mgr(ws_session);

    spiderrock::protobuf::api::Dumper dumper;

    mgr.start([&dumper](char* buffer, size_t bytesRead) 
        {
            if (buffer[0] == '\r' && buffer[1] == '\n') {
                if (buffer[2] == 'P') {
                    dumper.process_buffer(buffer, static_cast<int>(bytesRead));
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

    int activeLatency = 1;
    std::string messageType = "LiveSurfaceCurve";
    std::string queryString = messageType + "_Query";
    std::string whereClause = "ekey.tk:eq:SPX";

    spiderrock::protobuf::api::MLinkStream  mlinkStream;
    mlinkStream.set_active_latency(activeLatency);
    mlinkStream.set_msg_name(messageType);
    mlinkStream.set_query_label(queryString);
    mlinkStream.set_where_clause(whereClause);

    mgr.stream(mlinkStream);

    mgr.join();
    mgr.shutDown();

    ws_session.cleanup();

    return 0;
}
