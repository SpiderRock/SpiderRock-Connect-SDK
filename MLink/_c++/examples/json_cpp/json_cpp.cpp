// mlink_client_cpp.cpp : Defines the entry point for the console application.
//

#include "spiderrock_mlink.hpp"
#include <iostream>

using namespace spiderrock::mlink;

int main()
{
    char buffer[65536];
    bool result;

    Context context;

    MLinkSession rest_session(context);
	
	std::string apikey = "Your API Key";
	std::string password = "Your Password";

    result = rest_session.connect("https://mlink-live.nms.saturn.spiderrockconnect.com/rest/jsonf?cmd=getmsgtypes&where=mToken:ne:SystemData", apikey, password);

    if (!result) {
        result = rest_session.connect("http://mlink.saturn.srplatform.net:6700/rest/jsonf?cmd=getmsgtypes&where=mToken:ne:SystemData", apikey, password);
    }

    int bytesRead = rest_session.read(buffer, sizeof(buffer));

    while (bytesRead > 0) {
        buffer[bytesRead] = 0;
        std::cout << buffer << std::endl;
        bytesRead = rest_session.read(buffer, sizeof(buffer));
    }

    rest_session.close();

    std::cout << std::endl;


    MLinkSession ws_session(context);

    result = ws_session.connect("wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/json", apikey, password);

    if (!result) {
        if (ws_session.getLastError() == 12030) {
            result = ws_session.connect("ws://mlink.saturn.srplatform.net:6700/mlink/json", apikey, password);
            if (!result) {
                std::cout << ws_session.getLastError() << std::endl;
                exit(-1);
            }
        }
        else {
            std::cout << ws_session.getLastError() << std::endl;
            exit(-1);
        }
    }

    SubscriptionManager<> mgr(ws_session);

    mgr.start([](char* buffer, size_t bytesRead) {
            buffer[bytesRead] = 0;
            std::cout << buffer << std::endl;
        });

    mgr.subscribe({ {"StockBookQuote","AAPL-NMS-EQT",true} }, 1000, false);

    std::this_thread::sleep_for(std::chrono::seconds(5));

    mgr.subscribe({ {"StockBookQuote","AAPL-NMS-EQT",false},{ "StockBookQuote","AMZN-NMS-EQT",true } }, 1000, false);

    std::this_thread::sleep_for(std::chrono::seconds(5));

    mgr.subscribe({ { "StockBookQuote","AMZN-NMS-EQT",false },{ "StockBookQuote","MSFT-NMS-EQT",true } }, 1000, false);

    std::this_thread::sleep_for(std::chrono::seconds(5));

    mgr.subscribe({ { "StockBookQuote","MSFT-NMS-EQT",false } }, 1000, false);

    std::this_thread::sleep_for(std::chrono::seconds(5));

    mgr.stop();

    ws_session.cleanup();

    return 0;
}
