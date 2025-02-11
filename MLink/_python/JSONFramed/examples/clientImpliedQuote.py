import asyncio
import json
import time

import websockets
import nest_asyncio
nest_asyncio.apply()

uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/jsonf"
authentication_key = "ApiKey"

async def query_mlink(authentication_key):
    retry = True
    while retry:
        try:
            async with websockets.connect(uriJson, 
                                          additional_headers={"Authorization": f"Bearer {authentication_key}"}, ping_timeout=None) as websocket:
                msg = {
                    "header": {
                        "mTyp":"MLinkStream"
                    },
                    "message": { 
                        "queryLabel":"ExampleImpliedQuote",
                        "activeLatency": 1, #you can stream with minimum latency
                        "msgName":"LiveImpliedQuote",
                        "where":"okey:eq:SPX-NMS-EQT-2024-03-15-4550-C"
                    }
                }
                t = time.time_ns()
                tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S",time.gmtime(t/1000000000)),"%06d"%((t/1000)%1000000)])
                msg['header']['sTim'] = tstr
                msg['header']['encT'] = tstr
                smsg = json.dumps(msg)
                jmsg = ''.join(['\r\nJ', '%011d'%len(smsg), smsg]) #header
                await websocket.send(jmsg)
                notDone = True
                while notDone:
                    buffer = await websocket.recv()
                    parts = list(filter(None,buffer.split(b'\r\n')))
                    for msg in parts:
                        result = json.loads(msg[12:])
                        print(result, '\n')
        except asyncio.exceptions.TimeoutError:
            print("timeout occurred, retrying...")

if __name__ == "__main__":
    asyncio.run(query_mlink(authentication_key))