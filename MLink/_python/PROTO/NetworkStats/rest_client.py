import requests
import time
import traceback
from datetime import datetime, timezone
from utils import median_datetime
from logger import log
from proto_parser import parse_nbbo, parse_liq
from config import BASE_URL_PROTO, HEADERS_PROTO, CHUNK_SIZE, CHUNK_WARN_MS


def fetch_data(params, label="", debug_chunks=False):
    try:
        t0 = time.perf_counter()
        try:
            response = requests.get(BASE_URL_PROTO, params=params, headers=HEADERS_PROTO, timeout=(6, 6), stream=True)
        except requests.exceptions.ReadTimeout as e:
            log.error(f"{label}ReadTimeout during initial connection or header: {e}")
            return 0

        header_rtt = time.perf_counter() - t0
        log.info(f"{label}Status: {response.status_code}")
        log.info(f"{label}Header RTT: {header_rtt * 1000:.2f} ms")

        t1 = time.perf_counter()
        raw_chunks = []
        total_bytes = 0
        slowest_chunk = (0, 0.0)
        last_time = time.perf_counter()
        abnormal_chunks = []

        try:
            for i, chunk in enumerate(response.iter_content(chunk_size=CHUNK_SIZE)):
                now = time.perf_counter()
                duration = now - last_time
                last_time = now

                if chunk:
                    chunk_size = len(chunk)
                    raw_chunks.append(chunk)
                    total_bytes += chunk_size

                    if duration > slowest_chunk[1]:
                        slowest_chunk = (chunk_size, duration)

                    if duration * 1000 > CHUNK_WARN_MS:
                        abnormal_chunks.append((i + 1, chunk_size, duration * 1000))
        except requests.exceptions.ReadTimeout as e:
            elapsed = time.perf_counter() - t1
            log.warning(f"{label}ReadTimeout while downloading body after {elapsed:.2f} seconds")
            log.warning(f"{label}Partial download: {total_bytes} bytes")
            log.warning(f"{label}Avg bytes/ms before timeout: {total_bytes / (elapsed * 1000):.2f}")
            return 0

        body_download_time = time.perf_counter() - t1
        raw = b"".join(raw_chunks)
        download_ms = body_download_time * 1000
        bytes_per_ms = total_bytes / download_ms if download_ms > 0 else 0

        log.info(f"{label}Dwnld {total_bytes} bytes in {download_ms:.2f} ms")
        log.info(f"{label}Avg bytes/ms: {bytes_per_ms:.2f}")
        if slowest_chunk[1] > 0:
            log.info(f"{label}Slowest chunk: {slowest_chunk[0]} bytes in {slowest_chunk[1]*1000:.2f} ms "
                     f"({slowest_chunk[0]/(slowest_chunk[1]*1000):.2f} bytes/ms)")

        if not debug_chunks and abnormal_chunks:
            log.warning(f"{label} Detected {len(abnormal_chunks)} slow chunks (> {CHUNK_WARN_MS} ms):")
            for num, size, dur_ms in abnormal_chunks:
                log.warning(f"{label}Chunk {num}: {size} bytes in {dur_ms:.2f} ms")

        t2 = time.perf_counter()
        if params["msgtype"] == "LiveImpliedQuoteAdj":
            response_messages, query_result = parse_liq(raw)
        elif params["msgtype"] == "OptionNbboQuote":
            response_messages, query_result = parse_nbbo(raw)
        else:
            raise ValueError("Unknown message type")

        parse_duration = time.perf_counter() - t2
        if not response_messages:
            log.info(f"{label}No records found.")
            return bytes_per_ms

        net_ts_list, src_ts_list, main_ts_list = [], [], []
        tick_count, loop_count = 0, 0

        for msg in response_messages:
            if getattr(msg, "calc_source", None) == 1:
                tick_count += 1
            elif getattr(msg, "calc_source", None) == 2:
                loop_count += 1

            try:
                if getattr(msg, "net_timestamp", 0) > 1e12:
                    net_ts_list.append(datetime.fromtimestamp(msg.net_timestamp / 1e9, tz=timezone.utc))
            except Exception as e:
                log.info(f"{label}net_timestamp: {e}")
            try:
                if getattr(msg, "src_timestamp", 0) > 1e12:
                    src_ts_list.append(datetime.fromtimestamp(msg.src_timestamp / 1e9, tz=timezone.utc))
            except Exception as e:
                log.info(f"{label}src_timestamp: {e}")
            try:
                if msg.HasField("timestamp"):
                    main_ts_list.append(msg.timestamp.ToDatetime().replace(tzinfo=timezone.utc))
            except Exception:
                continue

        now = datetime.now(timezone.utc)
        if net_ts_list:
            median_net = median_datetime(net_ts_list)
            log.info(f"{label}now() - median(nettimestamp): {(now - median_net).total_seconds():.6f} seconds")
        if src_ts_list:
            median_src = median_datetime(src_ts_list)
            log.info(f"{label}now() - median(srctimestamp): {(now - median_src).total_seconds():.6f} seconds")
        if main_ts_list:
            median_main = median_datetime(main_ts_list)
            log.info(f"{label}now() - median(timestamp): {(now - median_main).total_seconds():.6f} seconds")

        total_count = len(response_messages)
        log.info(f"{label}Total records: {total_count}")
        log.info(f"{label}Records with calcSource Tick: {tick_count}")
        log.info(f"{label}Records with calcSource Loop: {loop_count}")

        avg_parse_time = (parse_duration / total_count) * 1000
        log.info(f"{label}Average parsing time / msg: {avg_parse_time:.3f} ms")

        return bytes_per_ms

    except Exception as e:
        log.error(f"{label}Unexpected error: {e}")
        log.error(traceback.format_exc())
        return 0