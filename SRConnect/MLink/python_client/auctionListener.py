import asyncio
import json
import websockets
import time

# Configuration
API_KEY = 'YOUR Key'  # Update with your actual API key
MLINK_URL = 'wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/json'

#Define the UserAuctionFilter message
user_auction_filter = {
    "header": {
        "mTyp": "UserAuctionFilter"
    },
    "message": {
        "pkey": {
            "userName": "YourUserName",
            "filterName": "SampleFilterName"
        },
        "clientFirm": None,
        "disabled": "No",
        "minUPrc": 10.0,
        "minSize": 10,
        "minAbsVega": 1.0,
        "hasAbsDeltaFilter": "Yes",
        "minAbsDelta": 0,
        "maxAbsDelta": 1,
        "hasXDeltaFilter": "Yes",
        "minXDelta": -0.1,
        "maxXDelta": 0.1,
        "hasExpiryDays": "Yes",
        "minExpiryDays": 1,
        "maxExpiryDays": 10
    }
}

#Define the MLinkStream message to listen for AuctionNotice
mlink_stream = {
    "header": {
        "mTyp": "MLinkStream"
    },
    "message": {
        "queryLabel": "AuctionNotice",
        "activeLatency": 1,
        "msgName": "AuctionNotice"
    }
}

async def handle_auction_stream():
    async with websockets.connect(MLINK_URL, extra_headers={"Authorization": f"Bearer {API_KEY}"}) as websocket:
        
        await websocket.send(json.dumps(user_auction_filter))
        print("UserAuctionFilter message sent")

        time.sleep(10)

        
        await websocket.send(json.dumps(mlink_stream))
        print("MLinkStream message sent for AuctionNotice")

        #Listen for AuctionNotice
        while True:
            response = await websocket.recv()
            notice = json.loads(response)
            print("Received:", notice)

asyncio.run(handle_auction_stream())