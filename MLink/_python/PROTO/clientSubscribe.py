# Compiled google protocol buffer files can be found here: client-python\compiledProto
# https://mlink-live.nms.saturn.spiderrockconnect.com/rest/JSON?apikey=APIKEY&cmd=getmsgtypes&view=name|mnum to get the messageNumber and Message Type

import sys
import os
import logging
import asyncio
import websockets
from google.protobuf.message import DecodeError
import re


# Add the compiledProto directory (which contains the pb2 files)
# to the Python module search path.
# The compiled google protocol buffer files are in a folder
# called "compiledProto" located in the same directory as this script.
# If the folder is elsewhere, adjust the relative path accordingly.


current_dir = os.path.dirname(os.path.abspath(__file__))
parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
if parent_dir not in sys.path:
    sys.path.insert(0, parent_dir)

#Also add the compiledProto folder
compiled_proto_dir = os.path.join(parent_dir, "compiledProto")
if compiled_proto_dir not in sys.path:
    sys.path.append(compiled_proto_dir)

#Now import the compiled protos.
from compiledProto.MLinkWs.MLinkAdmin_pb2 import MLinkAdmin 
from compiledProto.MLinkWs.MLinkHeartbeat_pb2 import MLinkHeartbeat
from compiledProto.MLinkWs.MLinkSubscribe_pb2 import MLinkSubscribe
from compiledProto.MLinkWs.MLinkSubscribeAck_pb2 import MLinkSubscribeAck
import compiledProto.spiderrock_common_pb2 as spiderrock_common_pb2
from compiledProto.OptAnalytics.LiveImpliedQuote_pb2 import LiveImpliedQuote


uri = 'wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto'  
authentication_key = 'INSERT API KEY HERE' 

async def query_mlinkstream(uri, authentication_key):
    async with websockets.connect(uri, extra_headers={"Authorization": f"Bearer {authentication_key}"}) as websocket:
        full_admin_response = await websocket.recv()
        admin_proto_message = full_admin_response[14:]
        admin_response = MLinkAdmin()
        admin_response.ParseFromString(admin_proto_message)
        print(admin_response)

        mlink_subscribe = MLinkSubscribe()
        mlink_subscribe.do_reset = False
        mlink_subscribe.active_latency = 1

        v = mlink_subscribe.view.add()
        v.msg_name = 'LiveImpliedQuote'
        v.view = 'obidIv|oaskIv'

        sub = mlink_subscribe.subscribe.add()
        sub.msg_name = 'LiveImpliedQuote'
        sub.msg_pKey = 'AAPL-NMS-EQT-2025-02-14-180-C'

        mt = spiderrock_common_pb2.MessageMetadata()
        mlink_subscribe._meta.message_type = 'MLinkSubscribe'

        serialized_msg = mlink_subscribe.SerializeToString()

        header = f'\r\nP{3386:05d}{len(serialized_msg):06d}'.encode()
        await websocket.send(header + serialized_msg)

        while True:
            response = await websocket.recv()

            parts = list(filter(None,response.split(b'\r\n')))
            for msg in parts:
                header, message = msg[:12], msg[12:]
                message_type = int(header[2:6])

                if message_type == 1015:  
                    live_implied_quote = LiveImpliedQuote() 
                    live_implied_quote.ParseFromString(message)
                    print("LiveImpliedQuote:", live_implied_quote)
                elif message_type == 3368:
                    mlink_heart_beat = MLinkHeartbeat()
                    mlink_heart_beat.ParseFromString(message)
                    print("MLinkHeartbeat:", mlink_heart_beat)
                elif message_type == 3387:
                    mlink_sub_ack = MLinkSubscribeAck()
                    mlink_sub_ack.ParseFromString(message)
                    print("MLinkSubscribeAck:", mlink_sub_ack)    
                else:
                    print("Unknown message type:", message_type)


if __name__ == "__main__": 
    asyncio.run(query_mlinkstream(uri, authentication_key))




            
