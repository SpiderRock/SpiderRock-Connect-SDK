import time
import statistics
from datetime import datetime
from config import API_KEY
from logger import log
from rest_client import fetch_data


def main():
    bytes_per_ms_all_runs = []
    i = 0

    while True:
        log.info(f"\n====== Run {i + 1} ======")
        timestamp = datetime.utcnow().strftime("%Y-%m-%d %H:%M:%S UTC")
        log.info(f"Start Time: {timestamp}")

        # LiveImpliedQuoteAdj
        params_liqadj = {
            "cmd": "getmsgs",
            "msgtype": "LiveImpliedQuoteAdj",
            "where": "ticker:eq:MSTR-NMS-EQT|ticker:eq:UNH-NMS-EQT|ticker:eq:SMCI-NMS-EQT|ticker:eq:SPX-NMS-EQT",
            "apikey": API_KEY,
            "l": 999999,
        }
        log.info("--------------- Run LiveImpliedQuoteAdj ---------------")
        result_liq = fetch_data(params_liqadj, label="[LIQAdj] ")
        if result_liq is not None:
            bytes_per_ms_all_runs.append(result_liq)

        # OptionNbboQuote
        params_nbbo = {
            "cmd": "getmsgs",
            "msgtype": "OptionNbboQuote",
            "where": "okey.tk:eq:MSTR|okey.tk:eq:UNH|okey.tk:eq:SMCI|okey.tk:eq:SPX",
            "apikey": API_KEY,
            "l": 999999,
        }
        log.info("------------------- Run OptionNbboQuote ---------------")
        result_nbbo = fetch_data(params_nbbo, label="[NBBO] ")
        if result_nbbo is not None:
            bytes_per_ms_all_runs.append(result_nbbo)

        i += 1

        if i % 10 == 0 and bytes_per_ms_all_runs:
            log.info("\n====== 10-Run Summary ======")
            log.info(f"Avg bytes/ms: {statistics.mean(bytes_per_ms_all_runs):.2f}")
            log.info(f"Min bytes/ms: {min(bytes_per_ms_all_runs):.2f}")
            log.info(f"Max bytes/ms: {max(bytes_per_ms_all_runs):.2f}")

        time.sleep(2)


if __name__ == "__main__":
    main()

