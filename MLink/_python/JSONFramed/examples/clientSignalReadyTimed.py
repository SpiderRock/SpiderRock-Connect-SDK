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

uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/jsonf"
authentication_key = "ApiKey"

async def send_signal(websocket):
    while True:
        signal = {
            "header": {
                "mTyp": "MLinkSignalReady"
            },
            "message": {
                "sesionID":"", # (optional) subscription sessionID (if missing or -1 will signal all sessionIDs for this websocket connection)
                "signalID":"", # (optional) will be reflected back in xCheckPt.signalID fields that indicates that a specified signal ready triggered active send is complete.
                "readyScan": "FullScan" #[readyScan:enum:ReadyScan:None=0,Incremental=2,FullScan=3]  # (optional; default is Incremental) Incremental = messages w/changes (all fields; cumulative changes) since previous MLinkSignalReady; FullScan = all messages
            }
        }
        t = time.time_ns()
        tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t/1000000000)), "%06d" % ((t/1000)%1000000)])
        signal['header']['sTim'] = tstr
        signal['header']['encT'] = tstr
        smsg = json.dumps(signal)
        jmsg = ''.join(['\r\nJ', '%011d' % len(smsg), smsg])
        await websocket.send(jmsg)
        await asyncio.sleep(5) #send and update every 5 seconds

async def query_mlink(authentication_key):
    retry = True
    while retry:
        try:
            async with websockets.connect(uriJson,
                                          extra_headers={"Authorization": f"Bearer {authentication_key}"}, ping_timeout=None) as websocket:
                # send the first message (msg)
                msg = {
                    "header": {
                        "mTyp": "MLinkStream"
                    },
                    "message": {
                        "queryLabel": "ExampleStockNbbo",
                        "activeLatency": 0, #wait for Signal ready
                        "msgName": "StockBookQuote", 
                        "where":"ticker:eq:AAPL-NMS-EQT" #can also do ticker.tk:eq:AAPL & ticker.at:eq:EQT & ticker.ts:eq:NMS
                    }
                }
                t = time.time_ns()
                tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t/1000000000)), "%06d" % ((t/1000)%1000000)])
                msg['header']['sTim'] = tstr
                msg['header']['encT'] = tstr
                smsg = json.dumps(msg)
                jmsg = ''.join(['\r\nJ', '%011d' % len(smsg), smsg])
                await websocket.send(jmsg)

                # start the loop to send the second message (signal) every 5 seconds
                asyncio.create_task(send_signal(websocket))

                notDone = True
                while notDone:
                    buffer = await websocket.recv()
                    parts = list(filter(None, buffer.split(b'\r\n')))
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
    
    seconds = 60
    asyncio.ensure_future(query_mlink(authentication_key))
    asyncio.ensure_future(stop_after(seconds)) #stop after seconds

    try :
        asyncio.get_event_loop().run_until_complete(stop_after(seconds))     
    except asyncio.exceptions.CancelledError:
        pass          





if __name__ == "__main__":
    asyncio.run(query_mlink(authentication_key))
