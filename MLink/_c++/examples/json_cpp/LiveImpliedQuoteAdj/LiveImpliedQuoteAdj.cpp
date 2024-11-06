// SRAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <nlohmann/json.hpp>
#include "spiderrock_protobuf.hpp"
#include "spiderrock_mlink.hpp"

using namespace spiderrock::mlink;
using json = nlohmann::json;

bool isCompleteJson(const std::string& jsonString) {
    try {
        json::parse(jsonString);
        return true;
    }
    catch (json::parse_error&) {
        return false;
    }
}


int main()
{
    char buffer[65537];
    bool result;

    Context context;

    std::string apiKey = "<Your API KEY>";
    std::string mLinkRestEndPoint = "https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?cmd=getmsgs&msgtype=liveimpliedquoteadj&where=ticker.tk:eq:AAL&limit=10000";

    MLinkSession rest_session(context);

    result = rest_session.connect(mLinkRestEndPoint, apiKey);

    if (!result) {
        std::cout << "Unable to connect to the rest endpoint" << std::endl;
        exit(-1);
    }

    int bytesRead = rest_session.read(buffer, sizeof(buffer) - 1);

    std::string accumulatedData;

    while (bytesRead > 0) {

        auto sizeOfBuffer = sizeof(buffer);

        if (bytesRead < sizeof(buffer))
        {
            buffer[bytesRead] = 0;
        }

        accumulatedData += std::string(buffer, bytesRead);

        if (isCompleteJson(accumulatedData)) {
            try {

                json jsonArray = json::parse(accumulatedData);

                for (const auto& item : jsonArray) {
                    std::cout << item.dump(4) << std::endl;
                    // Process `item` as a JSON object here
                }
                accumulatedData.clear();
            }
            catch (const json::parse_error& e) {
                std::cerr << "JSON parse error after validation: " << e.what() << std::endl;
            }
        }

        bytesRead = rest_session.read(buffer, sizeof(buffer));
    }

    rest_session.close();

    return 0;


}

