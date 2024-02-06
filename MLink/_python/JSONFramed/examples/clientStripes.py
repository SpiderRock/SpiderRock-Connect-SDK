#Client can stripe their connections to listen to a complete feed (ie OPRA)

import asyncio
import json
import time
from pycognito import Cognito
from pycognito.exceptions import SoftwareTokenMFAChallengeException
import websockets
import nest_asyncio
import threading
import datetime
from collections import deque
nest_asyncio.apply()

uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/jsonf"
authentication_key = "ApiKey"

#If a client were to listen to a complete feed (OPRA, CTA/UTP) 
#we recommend splitting Websocket connections per Stripes, specified in MLink-Samples\messages

stripe_filters = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'M', 'S', 'X']

async def query_mlink(authentication_key, stripe_filter):
    retry = True
    while retry:
        try:
            async with websockets.connect(uriJson, 
                                          extra_headers={"Authorization": f"Bearer {authentication_key}"},
                                           ping_timeout=None) as websocket:
                msg = {
                    "header": {
                        "mTyp":"MLinkStream"
                    },
                    "message": { 
                        "queryLabel":"Example1",
                        "activeLatency":1,
                        "msgName":"StockBookQuote",
                        "stripeFilter": stripe_filter
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

async def stop_after(duration):
    await asyncio.sleep(duration)
    for task in asyncio.all_tasks():
        task.cancel()

if __name__ == "__main__":
    seconds = 3600

    tasks = [query_mlink(authentication_key, stripe_filter) for stripe_filter in stripe_filters]
    tasks.append(stop_after(seconds))

    try:
        asyncio.run(asyncio.gather(*tasks))
    except asyncio.exceptions.CancelledError:
        pass
