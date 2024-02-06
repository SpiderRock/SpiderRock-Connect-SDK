import asyncio
import json
import time
from pycognito import Cognito
from pycognito.exceptions import SoftwareTokenMFAChallengeException
import websockets
import nest_asyncio
import threading
import datetime
nest_asyncio.apply()

uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/json"
authentication_key = "ApiKey"

async def recv_msg(websocket):
    buffer = await websocket.recv()
    result = json.loads(buffer)
    print(result)
    
    return True

async def query_mlink(authentication_key):
    retry = True
    while retry:
        try:
            async with websockets.connect(uriJson,
                                          extra_headers={"Authorization": f"Bearer {authentication_key}"},
                                          ping_timeout=None) as websocket:
                msg = {
                    "header": {
                        "mTyp": "MLinkStream"
                    },
                    "message": {
                        "queryLabel": "ExampleStockNbbo",
                        "activeLatency": 1, #you can stream AAPL with minimum latency
                        "msgName": "StockBookQuote", #the message you wish to stream
                        "where":"ticker:eq:AAPL-NMS-EQT" #can also do ticker.tk:eq:AAPL & ticker.at:eq:EQT & ticker.ts:eq:NMS
                    }
                }
                t = time.time_ns()
                tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t / 1000000000)), "%06d" % ((t / 1000) % 1000000)])
                msg['header']['sTim'] = tstr
                msg['header']['encT'] = tstr
                smsg = json.dumps(msg)
                await websocket.send(smsg)
                notDone = True
                while notDone:
                    notDone = await recv_msg(websocket)

        except asyncio.exceptions.TimeoutError:
            print("timeout occurred, retrying...")


if __name__ == "__main__":
    asyncio.run(query_mlink(authentication_key))

