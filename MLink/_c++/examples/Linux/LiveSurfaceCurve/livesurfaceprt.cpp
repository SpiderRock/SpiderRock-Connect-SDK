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

    std::string apiKey = "<Your API Key>";

    result = rest_session.connect("https://mlink-live.nms.saturn.spiderrockconnect.com/rest/jsonf?cmd=getmsgtypes&where=mToken:ne:SystemData", apiKey);

    if (!result) {
        result = rest_session.connect("http://mlink.saturn.srplatform.net:6700/rest/jsonf?cmd=getmsgtypes&where=mToken:ne:SystemData", apiKey);
    }

    int bytesRead = rest_session.read(buffer, sizeof(buffer));

    while (bytesRead > 0) {
        buffer[bytesRead] = 0;
        std::cout << buffer;
        bytesRead = rest_session.read(buffer, sizeof(buffer));
    }

    rest_session.close();

    std::cout << std::endl;


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
