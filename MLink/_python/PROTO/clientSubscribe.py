# Compiled google protocol buffer files can be found here: client-python\compiledProto
# https://mlink-live.nms.saturn.spiderrockconnect.com/rest/JSON?apikey=APIKEY&cmd=getmsgtypes&view=name|mnum to get the messageNumber and Message Type

import MLinkSubscribe_pb2
import spiderrock_common_pb2
import LiveImpliedQuote_pb2
import MLinkAdmin_pb2
import MLinkSubscribeAck_pb2
import asyncio
import websockets

uri = 'wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto'  
authentication_key = 'Your API KEY' 

async def query_mlinkstream(uri, authentication_key):
    async with websockets.connect(uri, additional_headers={"Authorization": f"Bearer {authentication_key}"}) as websocket:
        full_admin_response = await websocket.recv()
        admin_proto_message = full_admin_response[14:]
        admin_response = MLinkAdmin_pb2.MLinkAdmin()
        admin_response.ParseFromString(admin_proto_message)
        print(admin_response)

        mlink_subscribe = MLinkSubscribe_pb2.MLinkSubscribe()
        mlink_subscribe.do_reset = False
        mlink_subscribe.active_latency = 1

        v = mlink_subscribe.view.add()
        v.msg_name = 'LiveImpliedQuote'
        v.view = 'obidIv|oaskIv'

        sub = mlink_subscribe.subscribe.add()
        sub.msg_name = 'LiveImpliedQuote'
        sub.msg_pKey = 'AAPL-NMS-EQT-2024-01-12-180-C'

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
                    LiveImpliedQuote = LiveImpliedQuote_pb2.LiveImpliedQuote()
                    LiveImpliedQuote.ParseFromString(message)
                    print("LiveImpliedQuote:", LiveImpliedQuote)
                elif message_type == 3387:
                    mlink_sub_ack = MLinkSubscribeAck_pb2.MLinkSubscribeAck()
                    mlink_sub_ack.ParseFromString(message)
                    print("MLinkSubscribeAck:", mlink_sub_ack)
                else:
                    print("Unknown message type:", message_type)


if __name__ == "__main__": 
    asyncio.run(query_mlinkstream(uri, authentication_key))




            
