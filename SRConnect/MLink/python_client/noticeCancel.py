import json
import datetime

def get_today_date():
    today = datetime.date.today()
    return today.strftime('%Y-%m-%d')

# Usage
trade_date = get_today_date()

async def send_notice_cancel(websocket, notice_number, account, client_firm, ticker, trade_date):
    current_timestamp = datetime.datetime.now().isoformat()  
    cancel_message = {
        "header": {"mTyp": "NoticeCancel"},
        "message": {
            "pkey": {
                "noticeNumber": notice_number,
                "accnt": account,
                "clientFirm": client_firm
            },
            "ticker": ticker,
            "tradeDate": trade_date,
            "timestamp": current_timestamp
        }
    }

    print("Sending NoticeCancel:", json.dumps(cancel_message, indent=4))
    await websocket.send(json.dumps(cancel_message))