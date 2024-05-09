import json

async def send_user_auction_filter(websocket):
    # Send the UserAuctionFilter message to MLink
    filter_message = {
        "header": {"mTyp": "UserAuctionFilter"},
        "message": {
            "pkey": {
                "userName": "your un",
                "filterName": "your filter name"
            },
            #Define your filter criteria here
            "clientFirm": None,
            "filterName": "MyFilter",
            "disabled": "Yes"
        }
    }
    # Use 'await' to send the message asynchronously
    await websocket.send(json.dumps(filter_message))


