import json
import datetime
import uuid


async def create_notice_response(notice, websocket):
    #Create a NoticeResponse based on AuctionNotice details
    opposite_side = 'Buy' if notice['message']['custSide'] == 'Sell' else 'Sell'
    response_id = str(uuid.uuid4())
    current_timestamp = datetime.datetime.now().isoformat() 

    response_message = {
        "header": {"mTyp": "NoticeResponse"},
        "message": {
            "pkey": {"noticeNumber": notice['message']['pkey']['noticeNumber'],
                     "accnt": "acct",
                     "clientFirm": "CF",
                     "responseId": response_id,
                     },
            "ticker": f"{notice['message']['ticker']['tk']}-NMS-EQT",
            "tradeDate": notice['message']['tradeDate'],
            "responseId": response_id,
            "stageType": "None",
            "respSide": opposite_side,
            "respSize": notice['message']['custQty'],
            "respPrice": notice['message']['netSurfPrc'],
            "refUPrc": 0.5 * (notice['message']['uBid'] + notice['message']['uAsk']),
            "refDe": notice['message']['netDelta'],
            "refGa": 0, 
            #"refGa": notice['message']['netGamma'],
            "minUBid": notice['message']['uBid'] - 0.25,
            "maxUAsk": notice['message']['uAsk'] + 0.25,
            "timestamp": current_timestamp,
            "OrderLegs": [{
                "secKey": leg['secKey'],
                "secType": leg['secType'],
                "side": leg['side'],
                "positionType": "Auto"  # Assuming position type is set to Auto for all legs
            } for leg in notice['message'].get('OrderLegs', [])]
        }
    }

    print("Sending NoticeResponse:", json.dumps(response_message, indent=4))

    await websocket.send(json.dumps(response_message))



