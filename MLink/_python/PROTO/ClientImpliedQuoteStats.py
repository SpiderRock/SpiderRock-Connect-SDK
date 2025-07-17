import sys
import os
import requests
import statistics
import time
from datetime import datetime, timezone
import concurrent.futures

from google.protobuf.timestamp_pb2 import Timestamp

# Run this from SpiderRockConnect-SDK under MLink\_python\PROTO
current_dir = os.path.dirname(os.path.abspath(__file__))
parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
if parent_dir not in sys.path:
    sys.path.insert(0, parent_dir)

compiled_proto_dir = os.path.join(parent_dir, "compiledProto")
if compiled_proto_dir not in sys.path:
    sys.path.append(compiled_proto_dir)

#Import the Protobuf message classes you need
from compiledProto.OptAnalytics.LiveImpliedQuoteAdj_pb2 import LiveImpliedQuoteAdj
from compiledProto.MLinkRest.QueryResult_pb2 import QueryResult

apikey = "INSERT API KEY HERE"


def parse(response_content):
    index = 0
    response_messages = []
    query_result = None

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
            live_quote = LiveImpliedQuoteAdj()
            live_quote.ParseFromString(message_content)

            if live_quote.HasField("_meta"):
                msg_type = live_quote._meta.message_type

                if msg_type == "LiveImpliedQuoteAdj":
                    response_messages.append(live_quote)
                elif msg_type == "QueryResult":
                    query_result = QueryResult()
                    query_result.ParseFromString(message_content)
        except Exception as e:
            print(f"Failed to parse message: {e}")

        index += total_message_length

    return response_messages, query_result


def median_datetime(dt_list):
    timestamps = sorted([dt.timestamp() for dt in dt_list])
    n = len(timestamps)
    if n % 2 == 1:
        return datetime.fromtimestamp(timestamps[n // 2], tz=timezone.utc)
    else:
        mid = (timestamps[n // 2 - 1] + timestamps[n // 2]) / 2
        return datetime.fromtimestamp(mid, tz=timezone.utc)
    

def fetchData(params, label=''):
    url = "https://mlink-live.nms.saturn.spiderrockconnect.com/rest/proto"
    headers = {"Accept": "application/x-protobuf"}

    try:
        # Round Trip Time Calc
        t0 = time.perf_counter()
        response = requests.get(url, params=params, headers=headers, timeout=(5, 5), stream=True)
        header_rtt = time.perf_counter() - t0
        print(f"{label}Status: {response.status_code}")
        print(f"{label}Header RTT: {header_rtt * 1000:.2f} ms")

        t1 = time.perf_counter()
        raw = b''.join(response.iter_content(chunk_size=65536))
        body_download_time = time.perf_counter() - t1

        bytes_downloaded = len(raw)
        download_ms = body_download_time * 1000
        bytes_per_ms = bytes_downloaded / download_ms if download_ms > 0 else 0

        print(f"{label}Dwnld {bytes_downloaded} bytes in {download_ms:.2f} ms")
        print(f"{label}Avg bytes/ms: {bytes_per_ms:.2f}")

        # Parse Time calc
        t2 = time.perf_counter()
        response_messages, query_result = parse(raw)
        parse_duration = time.perf_counter() - t2

        if not response_messages:
            print(f"{label} No LIQAdj records found.")
            return

        net_ts_list = []
        src_ts_list = []
        main_ts_list = []

        tick_count = 0
        loop_count = 0

        for msg in response_messages:
            try:
                if msg.calc_source == 1:
                    tick_count += 1
                elif msg.calc_source == 2:
                    loop_count += 1
            except Exception as e:
                print(f"{label}calc_source: {e}")

            try:
                if getattr(msg, "net_timestamp", 0) > 1e12:
                    dt = datetime.fromtimestamp(msg.net_timestamp / 1e9, tz=timezone.utc)
                    net_ts_list.append(dt)
            except Exception as e:
                print(f"{label}net_timestamp: {e}")

            try:
                if getattr(msg, "src_timestamp", 0) > 1e12:
                    dt = datetime.fromtimestamp(msg.src_timestamp / 1e9, tz=timezone.utc)
                    src_ts_list.append(dt)
            except Exception as e:
                print(f"{label}src_timestamp: {e}")

            try:
                if msg.HasField("timestamp"):
                    main_ts_list.append(msg.timestamp.ToDatetime().replace(tzinfo=timezone.utc))
            except Exception as e:
                print(f"{label}timestamp: {e}")

        now = datetime.now(timezone.utc)

        if net_ts_list:
            median_net = median_datetime(net_ts_list)
            print(f"{label}now() - median(nettimestamp): {(now - median_net).total_seconds():.6f} seconds")

        if src_ts_list:
            median_src = median_datetime(src_ts_list)
            print(f"{label}now() - median(srctimestamp): {(now - median_src).total_seconds():.6f} seconds")

        if main_ts_list:
            median_main = median_datetime(main_ts_list)
            print(f"{label}now() - median(timestamp): {(now - median_main).total_seconds():.6f} seconds")

        total_count = len(response_messages)
        print(f"{label}Total records: {total_count}")
        print(f"{label}Records with calcSource Tick: {tick_count}")
        print(f"{label}Records with calcSource Loop: {loop_count}")

        avg_parse_time = (parse_duration / total_count) * 1000
        print(f"{label}Average parsing time / msg: {avg_parse_time:.3f} ms")

    except Exception as e:
        print(f"{label}Request failed: {e}")

    return bytes_per_ms


if __name__ == "__main__":
    bytes_per_ms_all_runs = []

    for i in range(10):
        print(f"\n Run {i + 1}")
        timestamp = datetime.utcnow().strftime('%Y-%m-%d %H:%M:%S UTC')
        print(f"Start Time: {timestamp}")

        
        params1 = {
            "cmd": "getmsgs",
            "msgtype": "LiveImpliedQuoteAdj",
            "where": "ticker:eq:SPX-NMS-EQT",
            "apikey": apikey,
            "view": "uprc|years|rate|sdiv|ddiv|obid|oask|obiv|oaiv|svol|sprc|pricetype|calcerr|smrk|synSpot|calcSource|uPrcAdjResult|srctimestamp|nettimestamp|timestamp",
            "l": 999999
        }

        params2 = {
            "cmd": "getmsgs",
            "msgtype": "LiveImpliedQuoteAdj",
            "where": "ticker:eq:NDX-NMS-EQT|ticker:eq:VIX-NMS-EQT|ticker:eq:AAPL-NMS-EQT|ticker:eq:AMLP-NMS-EQT|ticker:eq:AMLX-NMS-EQT|ticker:eq:AMN-NMS-EQT|ticker:eq:AMOM-NMS-EQT|ticker:eq:AMP-NMS-EQT|ticker:eq:AMPH-NMS-EQT|ticker:eq:AMPL-NMS-EQT|ticker:eq:AMPS-NMS-EQT|ticker:eq:AMPX-NMS-EQT|ticker:eq:AMPY-NMS-EQT|ticker:eq:AMR-NMS-EQT|ticker:eq:AMRC-NMS-EQT|ticker:eq:AMRK-NMS-EQT|ticker:eq:AMRN-NMS-EQT|ticker:eq:AMRX-NMS-EQT|ticker:eq:AMSC-NMS-EQT|ticker:eq:AMSF-NMS-EQT|ticker:eq:AMT-NMS-EQT|ticker:eq:AMTB-NMS-EQT|ticker:eq:AMTM-NMS-EQT|ticker:eq:AMTX-NMS-EQT|ticker:eq:AMWD-NMS-EQT|ticker:eq:AMWL-NMS-EQT|ticker:eq:AMX-NMS-EQT|ticker:eq:AMZA-NMS-EQT",
            "apikey": apikey,
            "view": "uprc|years|rate|sdiv|ddiv|obid|oask|obiv|oaiv|svol|sprc|pricetype|calcerr|smrk|synSpot|calcSource|uPrcAdjResult|srctimestamp|nettimestamp|timestamp",
            "l": 999999
        }

        with concurrent.futures.ThreadPoolExecutor(max_workers=2) as executor:
            futures = [
                executor.submit(fetchData, params1, "[Thread 1] "),
                executor.submit(fetchData, params2, "[Thread 2] ")
            ]
            results = []
            for future in concurrent.futures.as_completed(futures):
                try:
                    bps = future.result()
                    if bps is not None:
                        results.append(bps)
                except Exception as e:
                    print(f"Request failed: {e}")

            bytes_per_ms_all_runs.extend(results)

        if i < 100:
            time.sleep(5)

    if bytes_per_ms_all_runs:
        print("\n====== Summary ======")
        print(f"Avg bytes/ms: {statistics.mean(bytes_per_ms_all_runs):.2f}")
        print(f"Min bytes/ms: {min(bytes_per_ms_all_runs):.2f}")
        print(f"Max bytes/ms: {max(bytes_per_ms_all_runs):.2f}")
