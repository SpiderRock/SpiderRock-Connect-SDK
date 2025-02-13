import sys
import os
import requests

current_dir = os.path.dirname(os.path.abspath(__file__))
parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
if parent_dir not in sys.path:
    sys.path.insert(0, parent_dir)

#Also add the compiledProto folder
compiled_proto_dir = os.path.join(parent_dir, "compiledProto")
if compiled_proto_dir not in sys.path:
    sys.path.append(compiled_proto_dir)

#Import the message class directly
from compiledProto.OptAnalytics.LiveImpliedQuoteAdj_pb2 import LiveImpliedQuoteAdj
from compiledProto.MLinkRest.QueryResult_pb2 import QueryResult
import compiledProto.spiderrock_common_pb2 as spiderrock_common_pb2

apikey = "INSERT YOUR API KEY"

def parse_custom_protocol_response(response_content):
    
    # ProtoBuf sends a 14-byte header for each message, followed by the protobuf-serialized payload.
    # In our typical case, the server sends several  messages (of type LiveImpliedQuoteAdj)
    # followed by a final QueryResult message.
    
    index = 0
    response_messages = []
    query_result = None

    
    while index < len(response_content):
        if len(response_content) - index < 14:
            break

        header = response_content[index:index + 14]
        protocol = header[2:3].decode('utf-8')
        message_number = int(header[3:8])
        expected_message_length = int(header[8:14])
        
        print(f"\nProcessing message {message_number}:")
        print(f"Protocol: {protocol}")
        print(f"Expected length: {expected_message_length}")
        
        if protocol != 'P':
            print("Skipping non-protobuf message")
            index += 14
            continue

        total_message_length = 14 + expected_message_length

        if len(response_content) - index < total_message_length:
            break

        message_content = response_content[index + 14: index + total_message_length]
        print(f"Message content length: {len(message_content)} bytes")
        
        try:
            live_quote = LiveImpliedQuoteAdj()
            live_quote.ParseFromString(message_content)
            
            if live_quote.HasField("_meta"):
                msg_type = live_quote._meta.message_type

                if msg_type == "LiveImpliedQuoteAdj":
                    print("Parsed as LiveImpliedQuoteAdj")
                    response_messages.append(live_quote)
                elif msg_type == "QueryResult":
                    print("Parsed as QueryResult")
                    query_result = QueryResult()
                    query_result.ParseFromString(message_content)
                else:
                    print(f"Unexpected message type in _meta: {msg_type}")
            else:
                print("No _meta field found; cannot determine message type.")

        except Exception as e:
            print(f"Failed to parse message: {e}")
        
        index += total_message_length

    return response_messages, query_result

def get_market_data():
    url = "https://mlink-live.nms.saturn.spiderrockconnect.com/rest/proto"
    
    params = {
        "cmd": "getmsgs",
        "msgtype": "LiveImpliedQuoteAdj",
        "where": "ticker:eq:AAPL-NMS-EQT",
        "apikey": apikey,
        # List only the fields you want, separated by |
        "view": "uprc|years|rate|sdiv|ddiv|obid|oask|obiv|oaiv|svol|sprc|pricetype|calcerr|timestamp|smrk|synSpot|calcSource|uPrcAdjResult",
        "l": 5
    }
    
    headers = {"Accept": "application/x-protobuf"}
    
    try:
        response = requests.get(url, params=params, headers=headers)
        print(f"Response status code: {response.status_code}")
        print(f"Response content length: {len(response.content)} bytes")
        
        response_messages, query_result = parse_custom_protocol_response(response.content)
        
        print("\nLiveImpliedQuoteAdj Messages")
        if response_messages:
            for idx, message in enumerate(response_messages, 1):
                print(message)
        else:
            print("No LiveImpliedQuoteAdj records found.")

        if query_result:
            print(query_result)
        else:
            print("No QueryResult")
            
    except Exception as e:
        print(f"Error making request: {e}")

if __name__ == "__main__":
    get_market_data()
