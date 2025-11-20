import time
import statistics
from datetime import datetime
from config import API_KEY
from logger import log
from rest_client import fetch_data
from json_client import fetch_data_json


def main():
    bytes_per_ms_proto = []
    bytes_per_ms_json = []
    i = 0

    while True:
        log.info(f"\n====== Run {i + 1} ======")
        timestamp = datetime.utcnow().strftime("%Y-%m-%d %H:%M:%S UTC")
        log.info(f"Start Time: {timestamp}")

        params_liqadj = {
            "cmd": "getmsgs",
            "msgtype": "LiveImpliedQuoteAdj",
            "where": "ticker:eq:MSTR-NMS-EQT|ticker:eq:UNH-NMS-EQT|ticker:eq:SMCI-NMS-EQT|ticker:eq:SPX-NMS-EQT|ticker:eq:SPY-NMS-EQT",
            "apikey": API_KEY,
            "l": 999999,
        }
        
        log.info("--------------- PROTO LiveImpliedQuoteAdj ---------------")
        result_liq_proto = fetch_data(params_liqadj, label="[PROTO-LIQAdj] ")
        if result_liq_proto is not None:
            bytes_per_ms_proto.append(result_liq_proto)

        time.sleep(1)

        log.info("--------------- JSON LiveImpliedQuoteAdj ---------------")
        result_liq_json = fetch_data_json(params_liqadj, label="[JSON-LIQAdj] ")
        if result_liq_json is not None:
            bytes_per_ms_json.append(result_liq_json)

        # params_nbbo = {
        #     "cmd": "getmsgs",
        #     "msgtype": "OptionNbboQuote",
        #     "where": "okey.tk:eq:MSTR|okey.tk:eq:UNH|okey.tk:eq:SMCI|okey.tk:eq:SPX|okey:eq:SPY",
        #     "apikey": API_KEY,
        #     "l": 999999,
        # }
        
        # log.info("------------------- PROTO OptionNbboQuote ---------------")
        # result_nbbo_proto = fetch_data(params_nbbo, label="[PROTO-NBBO] ")
        # if result_nbbo_proto is not None:
        #     bytes_per_ms_proto.append(result_nbbo_proto)

        # time.sleep(1)

        # log.info("------------------- JSON OptionNbboQuote ---------------")
        # result_nbbo_json = fetch_data_json(params_nbbo, label="[JSON-NBBO] ")
        # if result_nbbo_json is not None:
        #     bytes_per_ms_json.append(result_nbbo_json)

        i += 1

        if i % 10 == 0:
            log.info("\n====== 10-Run Summary ======")
            if bytes_per_ms_proto:
                log.info(f"PROTO - Avg bytes/ms: {statistics.mean(bytes_per_ms_proto):.2f}")
                log.info(f"PROTO - Min bytes/ms: {min(bytes_per_ms_proto):.2f}")
                log.info(f"PROTO - Max bytes/ms: {max(bytes_per_ms_proto):.2f}")
            if bytes_per_ms_json:
                log.info(f"JSON  - Avg bytes/ms: {statistics.mean(bytes_per_ms_json):.2f}")
                log.info(f"JSON  - Min bytes/ms: {min(bytes_per_ms_json):.2f}")
                log.info(f"JSON  - Max bytes/ms: {max(bytes_per_ms_json):.2f}")

        time.sleep(2)


if __name__ == "__main__":
    main()