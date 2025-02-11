import asyncio
import json
import time
from pycognito import Cognito
from pycognito.exceptions import SoftwareTokenMFAChallengeException
import websockets
import nest_asyncio
import datetime
nest_asyncio.apply()

uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/jsonf"
authentication_key = "ApiKey"

async def query_mlink(authentication_key):
    retry = True
    while retry:
        try:
            async with websockets.connect(uriJson, 
                                          extra_headers={"Authorization": f"Bearer {authentication_key}"}, ping_timeout=None) as websocket:
                print("Connection established")
                msg = {
                    "header": {
                        "mTyp": "MLinkStream"
                    },
                    "message": {
                        "queryLabel": "ExampleStockNbbo",
                        "activeLatency": 1, #stream
                        "msgName": "StockBookQuote", 
                        "where":"ticker:eq:AAPL-NMS-EQT" #can also do ticker.tk:eq:AAPL & ticker.at:eq:EQT & ticker.ts:eq:NMS
                    }
                }
                t = time.time_ns()
                tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S",time.gmtime(t/1000000000)),"%06d"%((t/1000)%1000000)])
                msg['header']['sTim'] = tstr
                msg['header']['encT'] = tstr
                smsg = json.dumps(msg)
                jmsg = ''.join(['\r\nJ', '%011d'%len(smsg), smsg])
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

async def stop_after(duration):
    await asyncio.sleep(duration)
    for task in asyncio.all_tasks():
        task.cancel()

if __name__ == "__main__":
    seconds = 20
    asyncio.ensure_future(query_mlink(authentication_key))
    asyncio.ensure_future(stop_after(seconds)) #stop after seconds

    try :
        asyncio.get_event_loop().run_until_complete(stop_after(seconds))     
    except asyncio.exceptions.CancelledError:
        pass          
    
