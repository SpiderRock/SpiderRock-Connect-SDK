import re
import matplotlib.pyplot as plt
from datetime import datetime
import pandas as pd
import matplotlib.dates as mdates

log_file = "liqadj_log.txt"

run_start_re = re.compile(r"====== Run (\d+) ======")
time_re = re.compile(r"Start Time: (.+)")
header_rtt_re = re.compile(r"\[(LIQAdj|NBBO)\] Header RTT: ([\d.]+) ms")
avg_bytes_re = re.compile(r"\[(LIQAdj|NBBO)\] Avg bytes/ms: ([\d.]+)")
timeout_re = re.compile(r"\[(LIQAdj|NBBO)\] ReadTimeout")

# Parse
records = []
current_time = None
rtt_by_source = {}

with open(log_file, "r") as f:
    for line in f:
        time_match = time_re.search(line)
        if time_match:
            current_time = datetime.strptime(time_match.group(1), "%Y-%m-%d %H:%M:%S UTC")
            rtt_by_source = {}  
            continue

        # Header RTT
        rtt_match = header_rtt_re.search(line)
        if rtt_match and current_time:
            source, rtt = rtt_match.groups()
            rtt_val = float(rtt)
            rtt_by_source[source] = rtt_val
            records.append({
                "time": current_time,
                "source": source,
                "metric": "Header RTT",
                "value": rtt_val
            })

        # Download time (for total time)
        if "[LIQAdj] Dwnld" in line or "[NBBO] Dwnld" in line:
            match = re.search(r"\[(LIQAdj|NBBO)\] Dwnld .* in ([\d.]+) ms", line)
            if match and current_time:
                source, dwnld = match.groups()
                dwnld_val = float(dwnld)
                rtt_val = rtt_by_source.get(source, 0.0)
                total_time = rtt_val + dwnld_val
                records.append({
                    "time": current_time,
                    "source": source,
                    "metric": "Total Download Time",
                    "value": total_time
                })

        # Avg Bytes/ms
        avg_match = avg_bytes_re.search(line)
        if avg_match and current_time:
            source, value = avg_match.groups()
            records.append({
                "time": current_time,
                "source": source,
                "metric": "Avg bytes/ms",
                "value": float(value)
            })

        # ReadTimeout — set all to 0
        timeout_match = timeout_re.search(line)
        if timeout_match and current_time:
            source = timeout_match.group(1)
            for metric in ["Header RTT", "Avg bytes/ms", "Total Download Time"]:
                records.append({
                    "time": current_time,
                    "source": source,
                    "metric": metric,
                    "value": 0.0
                })


df = pd.DataFrame(records)
print(df)

def plot_line_metric_on_ax(df, metric_name, ax, ylabel):
    pivot = df[df["metric"] == metric_name].pivot(index="time", columns="source", values="value")
    for column in pivot.columns:
        ax.plot(pivot.index, pivot[column], label=column, linestyle='-', linewidth=1.2, alpha=0.8)
    ax.set_title(f"{metric_name} Over Time")
    ax.set_ylabel(ylabel)
    ax.grid(True, alpha=0.3)
    ax.legend(loc='upper right', frameon=False)

    unique_dates = sorted(set([ts.date() for ts in pivot.index]))
    for date in unique_dates:
        start = pd.Timestamp(f"{date} 13:30:00", tz="UTC")
        end = pd.Timestamp(f"{date} 20:00:00", tz="UTC")
        ax.axvspan(start, end, color='lightgreen', alpha=0.2)

def plot_metric_on_ax(df, metric_name, ax, ylabel):
    pivot = df[df["metric"] == metric_name].pivot(index="time", columns="source", values="value")
    for column in pivot.columns:
        ax.plot(pivot.index, pivot[column], label=column, marker='o', linestyle='-', markersize=3, alpha=0.6)
    ax.set_title(f"{metric_name} Over Time")
    ax.set_ylabel(ylabel)
    ax.grid(True, alpha=0.3)
    ax.legend(loc='upper right', frameon=False)

    unique_dates = sorted(set([ts.date() for ts in pivot.index]))
    for date in unique_dates:
        start = pd.Timestamp(f"{date} 13:30:00", tz="UTC")
        end = pd.Timestamp(f"{date} 20:00:00", tz="UTC")
        ax.axvspan(start, end, color='lightgreen', alpha=0.2)


fig, axes = plt.subplots(3, 1, figsize=(14, 14), sharex=True)


plot_metric_on_ax(df, "Header RTT", axes[0], "RTT (ms)")
plot_metric_on_ax(df, "Avg bytes/ms", axes[1], "Bytes/ms")
plot_line_metric_on_ax(df, "Total Download Time", axes[2], "Total Time (ms)")

axes[2].set_xlabel("Time")
axes[2].xaxis.set_major_formatter(mdates.DateFormatter('%Y-%m-%d %H:%M:%S'))
axes[2].xaxis.set_major_locator(mdates.AutoDateLocator(maxticks=10))
fig.autofmt_xdate(rotation=45)

fig.text(0.5, 0.01, "Note: Avg Bytes/ms is measured on the receiving side — response body is read in 64KB chunks. Total download Time = Download + RTT", 
         ha='center', fontsize=10, style='italic')

fig.autofmt_xdate(rotation=45)

plt.tight_layout()
plt.show()