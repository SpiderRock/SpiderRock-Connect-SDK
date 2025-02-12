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

# Now import the compiled protos.
from compiledProto.MLinkWs.MLinkAdmin_pb2 import MLinkAdmin 
from compiledProto.MLinkWs.MLinkHeartbeat_pb2 import MLinkHeartbeat
from compiledProto.MLinkWs.MLinkStream_pb2 import MLinkStream
from compiledProto.MLinkWs.MLinkStreamAck_pb2 import MLinkStreamAck 
from compiledProto.MLinkWs.MLinkStreamCheckPt_pb2  import MLinkStreamCheckPt
import compiledProto.spiderrock_common_pb2 as spiderrock_common_pb2
from compiledProto.OptAnalytics.LiveImpliedQuote_pb2 import LiveImpliedQuote



# Connection settings and logging configuration

uri = 'wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto'  
authentication_key = 'INSERT YOUR API KEY HERE' 

logging.basicConfig(
    level=logging.DEBUG,
    filename='mlinkstream.log',
    filemode='a',
    format='%(asctime)s - %(levelname)s - %(message)s'
)


#The main async function to MLinkStream

async def query_mlinkstream(uri, authentication_key):
    async with websockets.connect(uri, additional_headers={"Authorization": f"Bearer {authentication_key}"}) as websocket:
        full_admin_response = await websocket.recv()
        #The protobuf message is after the 14-byte header.
        admin_proto_message = full_admin_response[14:]
        admin_response = MLinkAdmin()
        admin_response.ParseFromString(admin_proto_message)
        logging.info(admin_response)

        #Build the MLinkStream object.
        mlink_stream = MLinkStream()
        mlink_stream.msg_name = "LiveImpliedQuote"
        mlink_stream.view = "timestamp" #Add whatever fields you would like separated by |
        mlink_stream.active_latency = 1
        mlink_stream.query_label = "SPX Example Vols"
        mlink_stream.where = 'ticker.tk:eq:SPX' 

        # Set the message type in the _meta field using a MessageMetadata instance.
        mt = spiderrock_common_pb2.MessageMetadata()
        mlink_stream._meta.message_type = 'MLinkStream'

        serialized_msg = mlink_stream.SerializeToString()

        # Create the header with the expected message number and length.
        header = f'\r\nP{3380:05d}{len(serialized_msg):06d}'.encode()
        await websocket.send(header + serialized_msg)

        partial_message = b""
        expected_message_length = 0

        while True:
            response = await websocket.recv()
            logging.debug(f"Full response: {response}")
            logging.debug(f"Response length: {len(response)}")

            response = partial_message + response
            partial_message = b""
            logging.debug(f"Accumulated response length: {len(response)}")

            # Process as many complete messages as possible.
            while len(response) >= 14:  
                if expected_message_length == 0:
                    if len(response) < 14:
                        partial_message = response
                        break

                    header = response[:14]
                    protocol = header[2:3].decode('utf-8')
                    if protocol != 'P':
                        logging.error(f"Unexpected protocol type: {protocol}")
                        response = response[14:]  
                        continue

                    message_number = int(header[3:8])
                    expected_message_length = int(header[8:14])
                    logging.info(f"Protocol: {protocol}, Message Number: {message_number}, Message Length: {expected_message_length}")

                total_message_length = 14 + expected_message_length
                if len(response) < total_message_length:
                    # Not enough data yet; wait for the next frame.
                    partial_message = response
                    break

                message = response[:total_message_length]
                response = response[total_message_length:]

                # Split header and message content.
                header, message = message[:14], message[14:]
                logging.debug(f"Header: {header}, Message: {message}")
                logging.debug(f"Message length: {len(message)}")

                try:
                    if message_number == 1015:
                        live_implied_quote = LiveImpliedQuote()
                        try:
                            live_implied_quote.ParseFromString(message)
                            logging.info(f"LiveImpliedQuote: {live_implied_quote}")
                        except DecodeError as e:
                            logging.error(f"DecodeError: {e}")
                            logging.error(f"Failed message: {message}")
                            logging.error(f"Failed message (hex): {message.hex()}")
                    elif message_number == 3345:
                        mlink_admin = MLinkAdmin()
                        mlink_admin.ParseFromString(message)
                        logging.info(f"MLinkAdmin: {mlink_admin}")
                    elif message_number == 3381:
                        mlink_sub_ack = MLinkStreamAck()
                        mlink_sub_ack.ParseFromString(message)
                        logging.info(f"MLinkSubscribeAck: {mlink_sub_ack}")
                    elif message_number == 3382:
                        mlink_stream_checkpt = MLinkStreamCheckPt()
                        mlink_stream_checkpt.ParseFromString(message)
                        logging.info(f"MLinkStreamCheckPt: {mlink_stream_checkpt}")
                    elif message_number == 3368:
                        mlink_heartbeat = MLinkHeartbeat()
                        mlink_heartbeat.ParseFromString(message)
                        logging.info(f"MLinkHeartbeat: {mlink_heartbeat}")
                    else:
                        logging.warning(f"Unknown message number: {message_number}")
                except Exception as e:
                    logging.error(f"Error processing message: {e}")
                    continue

                # Reset expected length for the next message.
                expected_message_length = 0

if __name__ == "__main__": 
    asyncio.run(query_mlinkstream(uri, authentication_key))
