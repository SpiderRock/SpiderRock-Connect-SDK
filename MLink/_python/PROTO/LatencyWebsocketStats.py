import asyncio
import time
import websockets
import signal
import datetime
from collections import defaultdict
import os
import ssl
import threading
from google.protobuf.message import DecodeError
import sys

# Path setup
current_dir = os.path.dirname(os.path.abspath(__file__))
parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
if parent_dir not in sys.path:
    sys.path.insert(0, parent_dir)

compiled_proto_dir = os.path.join(parent_dir, "compiledProto")
if compiled_proto_dir not in sys.path:
    sys.path.append(compiled_proto_dir)

# Protobuf imports
from compiledProto.MLinkWs.MLinkAdmin_pb2 import MLinkAdmin 
from compiledProto.MLinkWs.MLinkHeartbeat_pb2 import MLinkHeartbeat
from compiledProto.MLinkWs.MLinkStream_pb2 import MLinkStream
from compiledProto.MLinkWs.MLinkStreamAck_pb2 import MLinkStreamAck 
from compiledProto.MLinkWs.MLinkStreamCheckPt_pb2 import MLinkStreamCheckPt
from compiledProto.MLinkWs.MLinkSignalReady_pb2 import MLinkSignalReady
import compiledProto.spiderrock_common_pb2 as spiderrock_common_pb2
from compiledProto.OptMktData.OptionNbboQuote_pb2 import OptionNbboQuote
from compiledProto.OptAnalytics.LiveImpliedQuote_pb2 import LiveImpliedQuote

# Connection settings
uriProtobuf = 'wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto'  
authentication_key = 'APIKEY'  # Replace with your actual API key

message_types = ["OptionNbboQuote", "LiveImpliedQuote"]

# Separate metrics for each message type
metrics = {
    "OptionNbboQuote": {
        "latencies_encoded_time_per_minute": defaultdict(list),
        "latencies_time_sent_per_minute": defaultdict(list),
        "latencies_server_rcvd_time_per_minute": defaultdict(list),
        "latencies_net_timestamp_per_minute": defaultdict(list),
        "latencies_src_timestamp_per_minute": defaultdict(list),
        "record_counts_per_minute": defaultdict(int)
    },
    "LiveImpliedQuote": {
        "latencies_encoded_time_per_minute": defaultdict(list),
        "latencies_time_sent_per_minute": defaultdict(list),
        "latencies_server_rcvd_time_per_minute": defaultdict(list),
        "latencies_net_timestamp_per_minute": defaultdict(list),
        "latencies_src_timestamp_per_minute": defaultdict(list),
        "record_counts_per_minute": defaultdict(int)
    }
}

output_file_path = "C:\\Users\\XXXXX\\combined_latency.txt"

ssl_context = ssl.create_default_context()

lock = threading.Lock()

def write_to_file():
    try:
        os.makedirs(os.path.dirname(output_file_path), exist_ok=True)

        with lock:
            # Get current minute
            current_time = datetime.datetime.now(datetime.timezone.utc)
            current_minute = current_time.strftime('%Y-%m-%d %H:%M')
            
            with open(output_file_path, "a") as f:
                for message_type in message_types:
                    for minute in sorted(metrics[message_type]["latencies_encoded_time_per_minute"].keys()):
                        # Skip the current minute - it's not complete yet
                        if minute == current_minute:
                            continue
                        
                        avg_latency_encoded = sum(metrics[message_type]["latencies_encoded_time_per_minute"][minute]) / len(metrics[message_type]["latencies_encoded_time_per_minute"][minute]) if metrics[message_type]["latencies_encoded_time_per_minute"][minute] else 0
                        avg_latency_sent = sum(metrics[message_type]["latencies_time_sent_per_minute"][minute]) / len(metrics[message_type]["latencies_time_sent_per_minute"][minute]) if metrics[message_type]["latencies_time_sent_per_minute"][minute] else 0
                        avg_latency_server = sum(metrics[message_type]["latencies_server_rcvd_time_per_minute"][minute]) / len(metrics[message_type]["latencies_server_rcvd_time_per_minute"][minute]) if metrics[message_type]["latencies_server_rcvd_time_per_minute"][minute] else 0
                        avg_latency_net = sum(metrics[message_type]["latencies_net_timestamp_per_minute"][minute]) / len(metrics[message_type]["latencies_net_timestamp_per_minute"][minute]) if metrics[message_type]["latencies_net_timestamp_per_minute"][minute] else 0
                        avg_latency_src = sum(metrics[message_type]["latencies_src_timestamp_per_minute"][minute]) / len(metrics[message_type]["latencies_src_timestamp_per_minute"][minute]) if metrics[message_type]["latencies_src_timestamp_per_minute"][minute] else 0
                        record_count = metrics[message_type]["record_counts_per_minute"][minute]

                        f.write(f"Message Type: {message_type}, Minute: {minute}, "
                                f"Avg Encoded Time Latency: {avg_latency_encoded:.6f} seconds, "
                                f"Avg Time Sent Latency: {avg_latency_sent:.6f} seconds, "
                                f"Avg Server Rcvd Time Latency: {avg_latency_server:.6f} seconds, "
                                f"Avg Net Timestamp Latency: {avg_latency_net:.6f} seconds, "
                                f"Avg Src Timestamp Latency: {avg_latency_src:.6f} seconds, "
                                f"Record Count: {record_count}\n")

                    # Clear only the minutes we've written (not the current one)
                    for minute in list(metrics[message_type]["latencies_encoded_time_per_minute"].keys()):
                        if minute != current_minute:
                            for key in metrics[message_type]:
                                if minute in metrics[message_type][key]:
                                    del metrics[message_type][key][minute]

    except Exception as e:
        print(f"Error writing to file: {e}")

def signal_handler(sig, frame):
    write_to_file()
    print(f"Latency and count per minute written for all message types.")
    exit(0)

signal.signal(signal.SIGINT, signal_handler)

def convert_unix_epoch_ns_to_datetime(ns_timestamp):
    seconds = ns_timestamp / 1_000_000_000
    dt_object = datetime.datetime.fromtimestamp(seconds, datetime.timezone.utc)
    return dt_object

def parse_option_nbbo(response_content):
    """Parse MLink protobuf messages with 14-byte header for OptionNbboQuote"""
    index = 0
    response_messages = []

    while index < len(response_content):
        if len(response_content) - index < 14:
            break

        header = response_content[index:index + 14]
        protocol = header[2:3].decode('utf-8')
        message_number = int(header[3:8])
        expected_message_length = int(header[8:14])

        if protocol != 'P':
            index += 14
            continue

        total_message_length = 14 + expected_message_length
        if len(response_content) - index < total_message_length:
            break

        message_content = response_content[index + 14: index + total_message_length]

        try:
            option_quote = OptionNbboQuote()
            option_quote.ParseFromString(message_content)

            if option_quote.HasField("_meta"):
                msg_type = option_quote._meta.message_type

                if msg_type == "OptionNbboQuote":
                    response_messages.append(option_quote)
        except Exception as e:
            print(f"Failed to parse OptionNbboQuote message: {e}")

        index += total_message_length

    return response_messages

def parse_live_implied(response_content):
    """Parse MLink protobuf messages with 14-byte header for LiveImpliedQuote"""
    index = 0
    response_messages = []

    while index < len(response_content):
        if len(response_content) - index < 14:
            break

        header = response_content[index:index + 14]
        protocol = header[2:3].decode('utf-8')
        message_number = int(header[3:8])
        expected_message_length = int(header[8:14])

        if protocol != 'P':
            index += 14
            continue

        total_message_length = 14 + expected_message_length
        if len(response_content) - index < total_message_length:
            break

        message_content = response_content[index + 14: index + total_message_length]

        try:
            live_quote = LiveImpliedQuote()
            live_quote.ParseFromString(message_content)

            if live_quote.HasField("_meta"):
                msg_type = live_quote._meta.message_type

                if msg_type == "LiveImpliedQuote":
                    response_messages.append(live_quote)
        except Exception as e:
            print(f"Failed to parse LiveImpliedQuote message: {e}")

        index += total_message_length

    return response_messages

async def process_option_nbbo_message(option_quote):
    if not option_quote.HasField("_meta"):
        return
        
    msg_type = option_quote._meta.message_type
    
    if msg_type != "OptionNbboQuote":
        return
    
    recv_time = datetime.datetime.now(datetime.timezone.utc)
    recv_minute = recv_time.strftime('%Y-%m-%d %H:%M')

    # Extract timestamps from _meta
    encoded_time_ns = option_quote._meta.encoded_time
    time_sent_ns = option_quote._meta.time_sent
    server_rcvd_time_ns = option_quote._meta.server_rcvd_time
    
    # Extract timestamps from message body
    net_timestamp_ns = option_quote.net_timestamp if hasattr(option_quote, 'net_timestamp') else 0
    src_timestamp_ns = option_quote.src_timestamp if hasattr(option_quote, 'src_timestamp') else 0

    try:
        # Calculate latencies from _meta timestamps
        if encoded_time_ns and encoded_time_ns > 0:
            encoded_time_dt = convert_unix_epoch_ns_to_datetime(encoded_time_ns)
            latency_encoded = (recv_time - encoded_time_dt).total_seconds()
            metrics["OptionNbboQuote"]["latencies_encoded_time_per_minute"][recv_minute].append(latency_encoded)

        if time_sent_ns and time_sent_ns > 0:
            time_sent_dt = convert_unix_epoch_ns_to_datetime(time_sent_ns)
            latency_sent = (recv_time - time_sent_dt).total_seconds()
            metrics["OptionNbboQuote"]["latencies_time_sent_per_minute"][recv_minute].append(latency_sent)

        if server_rcvd_time_ns and server_rcvd_time_ns > 0:
            server_rcvd_dt = convert_unix_epoch_ns_to_datetime(server_rcvd_time_ns)
            latency_server = (recv_time - server_rcvd_dt).total_seconds()
            metrics["OptionNbboQuote"]["latencies_server_rcvd_time_per_minute"][recv_minute].append(latency_server)

        # Calculate latencies from message body timestamps
        if net_timestamp_ns and net_timestamp_ns > 0:
            net_timestamp_dt = convert_unix_epoch_ns_to_datetime(net_timestamp_ns)
            latency_net = (recv_time - net_timestamp_dt).total_seconds()
            metrics["OptionNbboQuote"]["latencies_net_timestamp_per_minute"][recv_minute].append(latency_net)

        if src_timestamp_ns and src_timestamp_ns > 0:
            src_timestamp_dt = convert_unix_epoch_ns_to_datetime(src_timestamp_ns)
            latency_src = (recv_time - src_timestamp_dt).total_seconds()
            metrics["OptionNbboQuote"]["latencies_src_timestamp_per_minute"][recv_minute].append(latency_src)

        metrics["OptionNbboQuote"]["record_counts_per_minute"][recv_minute] += 1

    except Exception as e:
        print(f"Error processing OptionNbboQuote message: {e}")

async def process_live_implied_message(live_quote):
    if not live_quote.HasField("_meta"):
        return
        
    msg_type = live_quote._meta.message_type
    
    if msg_type != "LiveImpliedQuote":
        return
    
    recv_time = datetime.datetime.now(datetime.timezone.utc)
    recv_minute = recv_time.strftime('%Y-%m-%d %H:%M')

    # Extract timestamps from _meta
    encoded_time_ns = live_quote._meta.encoded_time
    time_sent_ns = live_quote._meta.time_sent
    server_rcvd_time_ns = live_quote._meta.server_rcvd_time
    
    # Extract timestamps from message body
    net_timestamp_ns = live_quote.net_timestamp if hasattr(live_quote, 'net_timestamp') else 0
    src_timestamp_ns = live_quote.src_timestamp if hasattr(live_quote, 'src_timestamp') else 0

    try:
        # Calculate latencies from _meta timestamps
        if encoded_time_ns and encoded_time_ns > 0:
            encoded_time_dt = convert_unix_epoch_ns_to_datetime(encoded_time_ns)
            latency_encoded = (recv_time - encoded_time_dt).total_seconds()
            metrics["LiveImpliedQuote"]["latencies_encoded_time_per_minute"][recv_minute].append(latency_encoded)

        if time_sent_ns and time_sent_ns > 0:
            time_sent_dt = convert_unix_epoch_ns_to_datetime(time_sent_ns)
            latency_sent = (recv_time - time_sent_dt).total_seconds()
            metrics["LiveImpliedQuote"]["latencies_time_sent_per_minute"][recv_minute].append(latency_sent)

        if server_rcvd_time_ns and server_rcvd_time_ns > 0:
            server_rcvd_dt = convert_unix_epoch_ns_to_datetime(server_rcvd_time_ns)
            latency_server = (recv_time - server_rcvd_dt).total_seconds()
            metrics["LiveImpliedQuote"]["latencies_server_rcvd_time_per_minute"][recv_minute].append(latency_server)

        # Calculate latencies from message body timestamps
        if net_timestamp_ns and net_timestamp_ns > 0:
            net_timestamp_dt = convert_unix_epoch_ns_to_datetime(net_timestamp_ns)
            latency_net = (recv_time - net_timestamp_dt).total_seconds()
            metrics["LiveImpliedQuote"]["latencies_net_timestamp_per_minute"][recv_minute].append(latency_net)

        if src_timestamp_ns and src_timestamp_ns > 0:
            src_timestamp_dt = convert_unix_epoch_ns_to_datetime(src_timestamp_ns)
            latency_src = (recv_time - src_timestamp_dt).total_seconds()
            metrics["LiveImpliedQuote"]["latencies_src_timestamp_per_minute"][recv_minute].append(latency_src)

        metrics["LiveImpliedQuote"]["record_counts_per_minute"][recv_minute] += 1

    except Exception as e:
        print(f"Error processing LiveImpliedQuote message: {e}")

async def flush_data_periodically():
    while True:
        await asyncio.sleep(60)
        write_to_file()

async def recv_option_nbbo_msg(websocket):
    while True:
        buffer = await websocket.recv()
        
        try:
            # Parse all messages in the buffer
            message_list = parse_option_nbbo(buffer)
            
            for option_quote in message_list:
                asyncio.create_task(process_option_nbbo_message(option_quote))
                
        except Exception as e:
            print(f"Error in recv_option_nbbo_msg: {e}")

async def recv_live_implied_msg(websocket):
    while True:
        buffer = await websocket.recv()
        
        try:
            # Parse all messages in the buffer
            message_list = parse_live_implied(buffer)
            
            for live_quote in message_list:
                asyncio.create_task(process_live_implied_message(live_quote))
                
        except Exception as e:
            print(f"Error in recv_live_implied_msg: {e}")

async def query_mlink_option_nbbo(authentication_key):
    while True:
        try:
            async with websockets.connect(
                uriProtobuf,
                extra_headers={"Authorization": f"Bearer {authentication_key}"},
                ping_timeout=None,
                ssl=ssl_context
            ) as websocket:
                # Receive and parse the MLinkAdmin message
                full_admin_response = await websocket.recv()
                admin_proto_message = full_admin_response[14:]
                admin_response = MLinkAdmin()
                admin_response.ParseFromString(admin_proto_message)
                print(f"OptionNbboQuote Admin response: {admin_response}")
                
                # Build the MLinkStream object
                stream_request = MLinkStream()
                stream_request.query_label = "ExampleOptionNbboQuote"
                stream_request.active_latency = 1
                stream_request.highwater_ts = -1
                stream_request.msg_name = "OptionNbboQuote"
                stream_request.view = "nettimestamp|srctimestamp"
                stream_request.where = "okey:eq:SPX-NMS-EQT"
                
                # Set the message type in the _meta field
                stream_request._meta.message_type = 'MLinkStream'
                
                # Serialize the message
                serialized_msg = stream_request.SerializeToString()
                
                # Create the header with message number and length
                message_number = 3380
                header = f'\r\nP{message_number:05d}{len(serialized_msg):06d}'.encode()
                
                # Send header + serialized message
                await websocket.send(header + serialized_msg)
                print(f"Sent OptionNbboQuote MLinkStream request")

                await recv_option_nbbo_msg(websocket)

        except asyncio.exceptions.TimeoutError:
            print(f"OptionNbboQuote: Timeout occurred, retrying...")
        except Exception as e:
            print(f"OptionNbboQuote connection error: {e}")
            await asyncio.sleep(5)

async def query_mlink_live_implied(authentication_key):
    while True:
        try:
            async with websockets.connect(
                uriProtobuf,
                extra_headers={"Authorization": f"Bearer {authentication_key}"},
                ping_timeout=None,
                ssl=ssl_context
            ) as websocket:
                # Receive and parse the MLinkAdmin message
                full_admin_response = await websocket.recv()
                admin_proto_message = full_admin_response[14:]
                admin_response = MLinkAdmin()
                admin_response.ParseFromString(admin_proto_message)
                print(f"LiveImpliedQuote Admin response: {admin_response}")
                
                # Build the MLinkStream object
                stream_request = MLinkStream()
                stream_request.query_label = "ExampleLiveImpliedQuote"
                stream_request.active_latency = 1
                stream_request.highwater_ts = -1
                stream_request.msg_name = "LiveImpliedQuote"
                stream_request.view = "nettimestamp|srctimestamp"
                stream_request.where = "okey:eq:SPX-NMS-EQT"
                
                # Set the message type in the _meta field
                stream_request._meta.message_type = 'MLinkStream'
                
                # Serialize the message
                serialized_msg = stream_request.SerializeToString()
                
                # Create the header with message number and length
                message_number = 3381
                header = f'\r\nP{message_number:05d}{len(serialized_msg):06d}'.encode()
                
                # Send header + serialized message
                await websocket.send(header + serialized_msg)
                print(f"Sent LiveImpliedQuote MLinkStream request")

                await recv_live_implied_msg(websocket)

        except asyncio.exceptions.TimeoutError:
            print(f"LiveImpliedQuote: Timeout occurred, retrying...")
        except Exception as e:
            print(f"LiveImpliedQuote connection error: {e}")
            await asyncio.sleep(5)

if __name__ == "__main__":
    async def main():
        await asyncio.gather(
            query_mlink_option_nbbo(authentication_key),
            query_mlink_live_implied(authentication_key),
            flush_data_periodically()
        )

    try:
        asyncio.run(main()) 
    except (KeyboardInterrupt, SystemExit):
        signal_handler(None, None)