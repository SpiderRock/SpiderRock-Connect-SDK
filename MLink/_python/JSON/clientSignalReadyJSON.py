import asyncio
import json
import time
import websockets
import nest_asyncio
nest_asyncio.apply()

uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/json"
authentication_key = "ApiKey"

async def recv_msg(websocket):
    buffer = await websocket.recv()
    result = json.loads(buffer)
    print(result)
    return True

async def send_signal(websocket):
    while True:
        await asyncio.sleep(20)
        signal = {
            "header": {
                "mTyp": "MLinkSignalReady"
            },
            "message": {
                "sesionID":"", # (optional) subscription sessionID (if missing or -1 will signal all sessionIDs for this websocket connection)
                "signalID":"", # (optional) will be reflected back in xCheckPt.signalID fields that indicates that a specified signal ready triggered active send is complete.
                "readyScan": "FullScan"
            }
        }
        t = time.time_ns()
        tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t / 1000000000)), "%06d" % ((t / 1000) % 1000000)])
        signal['header']['sTim'] = tstr
        signal['header']['encT'] = tstr
        smsg = json.dumps(signal)
        await websocket.send(smsg)
        await asyncio.sleep(20)

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
                        "activeLatency": 0,  # wait for Signal ready
                        "msgName": "StockBookQuote",
                        "where":"ticker:eq:AAPL-NMS-EQT"
                    }
                }
                t = time.time_ns()
                tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t / 1000000000)), "%06d" % ((t / 1000) % 1000000)])
                msg['header']['sTim'] = tstr
                msg['header']['encT'] = tstr
                smsg = json.dumps(msg)
                await websocket.send(smsg)

                asyncio.create_task(send_signal(websocket))

                notDone = True
                while notDone:
                    notDone = await recv_msg(websocket)

        except asyncio.exceptions.TimeoutError:
            print("timeout occurred, retrying...")

if __name__ == "__main__":
    asyncio.run(query_mlink(authentication_key))
