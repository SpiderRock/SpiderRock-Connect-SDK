import asyncio
import websockets

from userAuctionFilter import send_user_auction_filter
from auctionListener import listen_for_auctions, send_mlink_stream
from auctionResponder import create_notice_response
from noticeCancel import send_notice_cancel, get_today_date

import userAuctionFilter
import auctionListener
import auctionResponder
import noticeCancel

print(userAuctionFilter)
print(auctionListener)
print(auctionResponder)
print(noticeCancel)



API_KEY = 'Your API Key'
MLINK_URL = 'wss://mlink-live.nms.Saturn.spiderrockconnect.com/mlink/json'
file_path = r""

                
async def handle_auction_stream():
    async with websockets.connect(MLINK_URL, extra_headers={"Authorization": f"Bearer {API_KEY}"}, ping_timeout=None) as websocket:
        print("Connected to WebSocket.")
        
        try:
            #Initialize
            await send_user_auction_filter(websocket)
            print("UserAuctionFilter message sent")

            await send_mlink_stream(websocket)
            print("MLinkStream message sent for AuctionNotice and NoticeExecReport")

            #Process
            async for message in listen_for_auctions(websocket, file_path):
                try:
                    if message['header']['mTyp'] == "AuctionNotice":
                        await create_notice_response(message, websocket)
                        print("Sent NoticeResponse for notice number:", message['message']['pkey']['noticeNumber'])

                    elif message['header']['mTyp'] == "NoticeExecReport" and message['message']['respStatus'] == "Closed" and message['message']['respDetail'] != "Filled":
                        ticker = message['message']['ticker']
                        trade_date = get_today_date()  
                        await send_notice_cancel(websocket, message['message']['pkey']['noticeNumber'], "ACCT", "CF", ticker, trade_date)
                        print("NoticeCancel sent for:", message['message']['pkey']['noticeNumber'])

                except Exception as e:
                    print(f"Error message {message['header']['mTyp']}: {e}")

        except Exception as e:
            print(f"Error during WebSocket communication: {e}")

asyncio.run(handle_auction_stream())