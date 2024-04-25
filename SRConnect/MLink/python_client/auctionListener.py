import json

def save_response_to_file(response, file_name):
    try:
        with open(file_name, 'r') as file:
            data = json.load(file)
    except (FileNotFoundError, json.JSONDecodeError):
        data = []
    data.append(response)
    with open(file_name, 'w') as file:
        json.dump(data, file, indent=4)

async def send_mlink_stream(websocket):
    stream_message = {
        "header": {"mTyp": "MLinkStream"},
        "message": {
            "queryLabel": "AuctionNotice",
            "activeLatency": 1,
            "highwaterTs": -1,
            "msgName": "AuctionNotice",
            "where": "isTestAuction:eq:Yes"
        }
    }

    stream_exec_report = {
        "header": {"mTyp": "MLinkStream"},
        "message": {
            "queryLabel": "NoticeExecReport",
            "activeLatency": 1,
            "highwaterTs": -1,
            "msgName": "NoticeExecReport"
        }
    }

    await websocket.send(json.dumps(stream_message))
    await websocket.send(json.dumps(stream_exec_report))


async def listen_for_auctions(websocket, file_path):
    while True:
        buffer = await websocket.recv()
        result = json.loads(buffer)
        #print(result)
        if result.get('header', {}).get('mTyp') == 'AuctionNotice':
            if result.get('message', {}).get('isTestAuction') == 'Yes':    
                print("Received AuctionNotice:", json.dumps(result, indent=4))
                save_response_to_file(result, file_path)
            yield result
        elif result.get('header', {}).get('mTyp') == 'NoticeExecReport':
            print("Received NoticeExecReport:", json.dumps(result, indent=4))
            save_response_to_file(result, file_path)
            yield result

        
