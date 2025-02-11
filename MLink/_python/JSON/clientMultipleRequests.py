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
authentication_key = ""

async def recv_msg(websocket):
    buffer = await websocket.recv()
    result = json.loads(buffer)
    print(result)
    return True

async def send_msg(websocket, msg):
    t = time.time_ns()
    tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t / 1000000000)), "%06d" % ((t / 1000) % 1000000)])
    msg['header']['sTim'] = tstr
    msg['header']['encT'] = tstr
    await websocket.send(json.dumps(msg))

async def query_mlink(authentication_key):
    retry = True
    while retry:
        try:
            async with websockets.connect(uriJson,
                                          extra_headers={"Authorization": f"Bearer {authentication_key}"},
                                          ping_timeout=None) as websocket:
                # Define messages
                msg1 = {
                    "header": {"mTyp": "MLinkStream"},
                    "message": {
                        "queryLabel": "ExampleConcurrent1",
                        "activeLatency": 1,
                        "msgName": "stockprint", 
                        "where": "ticker:eq:AMZN-NMS-EQT"
                    }
                }

                msg2 = {
                    "header": {"mTyp": "MLinkStream"},
                    "message": {
                        "queryLabel": "ExampleConcurrent2",
                        "activeLatency": 1,
                        "msgName": "stockbookquote", 
                        "where": "ticker:eq:AAPL-NMS-EQT"
                    }
                }

                msg3 = {
                    "header": {"mTyp": "MLinkStream"},
                    "message": {
                        "queryLabel": "ExampleConcurrent3",
                        "activeLatency": 1,
                        "msgName": "LiveSurfaceCurve", 
                        "where": "ticker:eq:SPY-NMS-EQT"
                    }
                }

                # Send messages without delay
                await send_msg(websocket, msg1)
                await send_msg(websocket, msg2)
                await send_msg(websocket, msg3)

                notDone = True
                while notDone:
                    notDone = await recv_msg(websocket)

        except asyncio.exceptions.TimeoutError:
            print("timeout occurred, retrying...")

if __name__ == "__main__":
    asyncio.run(query_mlink(authentication_key))
