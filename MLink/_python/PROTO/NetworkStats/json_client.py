import requests
import time
import json
from logger import log
from config import BASE_URL_JSON, HEADERS_JSON, CHUNK_SIZE, CHUNK_WARN_MS


def fetch_data_json(params, label=""):
    try:
        t0 = time.perf_counter()
        try:
            response = requests.get(BASE_URL_JSON, params=params, headers=HEADERS_JSON, timeout=(6, 6), stream=True)
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

        if abnormal_chunks:
            log.warning(f"{label} Detected {len(abnormal_chunks)} slow chunks (> {CHUNK_WARN_MS} ms):")
            for num, size, dur_ms in abnormal_chunks:
                log.warning(f"{label}Chunk {num}: {size} bytes in {dur_ms:.2f} ms")

        t2 = time.perf_counter()
        try:
            data = json.loads(raw.decode('utf-8'))
            record_count = len(data) if isinstance(data, list) else 1
            log.info(f"{label}Total records: {record_count}")
        except Exception as e:
            log.info(f"{label}Failed to parse JSON: {e}")

        parse_duration = time.perf_counter() - t2
        log.info(f"{label}Parse time: {parse_duration * 1000:.2f} ms")

        return bytes_per_ms

    except Exception as e:
        log.error(f"{label}Unexpected error: {e}")
        return 0