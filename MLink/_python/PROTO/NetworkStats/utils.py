from datetime import datetime, timezone

def median_datetime(dt_list):
    timestamps = sorted([dt.timestamp() for dt in dt_list])
    n = len(timestamps)
    if n == 0:
        return None
    if n % 2 == 1:
        return datetime.fromtimestamp(timestamps[n // 2], tz=timezone.utc)
    else:
        mid = (timestamps[n // 2 - 1] + timestamps[n // 2]) / 2
        return datetime.fromtimestamp(mid, tz=timezone.utc)